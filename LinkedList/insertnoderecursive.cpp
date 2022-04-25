#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        next = NULL;
    }
};
Node *take_Input(){
  int data;
  cin>>data;
  Node *head=NULL;
  Node *tail=NULL;
  while(data!=-1){
  Node *new_Node = new Node(data);
  if(head==NULL){
    head=new_Node;
    tail=new_Node;
  }
  else{
    tail->next=new_Node;
    tail=new_Node;
  }
  cin>>data;
  }
  return head;
}
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
Node* insertNode(int i, int data, Node *head){
    if(head == NULL){
        return head;
    }
    if(i == 0){
        Node *new_Node = new Node(data);
        Node *temp = head;
        head = new_Node;
        head -> next = temp;
        return head;
    }
    Node *smallOutput = insertNode(i-1, data, head -> next);
    head -> next = smallOutput;
    return head;
}
int main(){
    Node *head = take_Input();
    head = insertNode(3,2,head);
    print(head);
    return 0;
}