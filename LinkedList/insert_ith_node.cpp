#include<iostream>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node(int data){
    this->data=data;
    next=NULL;
  }
};
Node *take_Input(){
  int data;
  cin>>data;
  Node *head=NULL;
  Node *tail=NULL;
  while(data!=-1){
  Node *new_Node= new Node(data);
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
void print(Node *head) {
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
Node *insert_node(int data, int i, Node *head){
  Node *new_Node= new Node(data);
  Node *temp=head;
  int count = 0;
  if(i==0){
    new_Node->next=head;
    head=new_Node;
    return head;
  }
  while(temp!=NULL && count < i-1){
    temp=temp->next;
    count++;
  }
  if(temp!=NULL){
    Node *a = temp->next;
    temp->next=new_Node;
    new_Node->next=a;
  }
  return head;
}
int main(){
  int i,data;
  Node *head=take_Input();
  print(head);
  cin>>data>>i;
  head=insert_node(data,i,head);
  print(head);
  return 0;
}
