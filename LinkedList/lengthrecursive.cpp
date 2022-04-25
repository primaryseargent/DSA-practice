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
int lengthrecursive(Node *head){
  if(head == NULL) return 0;
  Node *temp = head;
  int smallOutput = lengthrecursive(temp -> next);
  return smallOutput+1;
}
void print(Node *head) {
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main(){
  int i,data;
  Node *head=take_Input();
  print(head);
  cout<<lengthrecursive(head);
  return 0;
}
