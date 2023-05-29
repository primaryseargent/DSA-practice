#include <iostream>
using namespace std;
class Node
{
public:
  Node *next;
  int data;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};
Node *take_Input()
{
  int data;
  cin >> data;
  Node *head = NULL;
  Node *tail = NULL;
  while (data != -1)
  {
    Node *new_Node = new Node(data);
    if (head == NULL)
    {
      head = new_Node;
      tail = new_Node;
    }
    else
    {
      tail->next = new_Node;
      tail = new_Node;
    }
    cin >> data;
  }
  return head;
}
Node *delete_node(int pos, Node *head)
{
  int count = 0;
  Node *b = head;
  if (pos == 0)
  {
    head = b->next;
    delete b;
    return head;
  }
  Node *temp = head;
  while (temp->next != NULL && count < pos - 1)
  {
    temp = temp->next;
    count++;
  }
  if (temp->next != NULL)
  {
    Node *a = temp->next;
    temp->next = a->next;
    delete a;
  }
  return head;
}
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
int main()
{
  int pos;
  Node *head = take_Input();
  print(head);
  cin >> pos;
  delete_node(pos, head);
  print(head);
}
