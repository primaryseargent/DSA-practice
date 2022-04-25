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
Node *deletenode(int i, Node *head){
    if( head == NULL) return NULL;
    if(i == 0){
        Node *temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    Node *smallOutput = deletenode(i-1, head -> next);
    head->next =smallOutput;
    return head;
}
int main(){
    Node *head = take_Input();
    head = deletenode(0,head);
    print(head);return 0;
}