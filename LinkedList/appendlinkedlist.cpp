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
int length(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}
Node *append(int n, int length, Node *head){
   Node *current = head;
   for(int i=1; i<length - n; i++){
       current = current -> next;
   }
   Node *head2 = current -> next;
   current -> next = NULL;
   Node *temp1 = head2;
   while(temp1 -> next != NULL){
       temp1 = temp1 -> next;
   }
   temp1-> next = head;
   return head2;
}
int main(){
    int pos;
    Node *head = take_Input();
    int x = length(head);
    cin>>pos;
    head = append(pos,x,head);
    print(head);
    return 0;
}