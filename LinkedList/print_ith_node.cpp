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
  Node *head = NULL;
  Node *tail = NULL;
  while(data!=-1){
    Node *new_Node = new Node(data);
    if (head==NULL){
      head = new_Node;
      tail = new_Node;
    }
    else{
        tail->next=new_Node;
        tail=new_Node;
    }
    cin>>data;
  }
  return head;
}
void print(Node *head, int n){
  int count=0;
  Node *temp=head;
  while(temp!=NULL){
  if (count==n) {
    cout<< temp->data;
  }
  temp=temp->next;
  count++;
  }
}
int main(){
  int n;
  Node *head=take_Input();
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  print (head,n);
}
