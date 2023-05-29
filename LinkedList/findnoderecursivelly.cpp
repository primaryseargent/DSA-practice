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
int findnode(Node *head, int value){
    if(head == NULL) return -1;
    if(head -> data == value) return 0;
    int smallOutput = findnode(head->next, value);
    if(smallOutput==-1) return -1;
    else return smallOutput + 1;
}
    
int main (){
    Node *head = take_Input();
    int value;
    cin >> value;
    cout << findnode(head, value) << endl;
    return 0;
}