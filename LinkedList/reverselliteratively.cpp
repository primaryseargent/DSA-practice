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
void print(Node *finalhead){
    Node *temp = finalhead;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
}
Node *reverse( Node *head ){
    Node *next1 = NULL;
    Node *prev = NULL;
    Node *current = head;
    while(current != NULL){
        next1 = current -> next;
        current -> next = prev;
        prev = current;
        current = next1;
    }
    return prev;
}
int main(){
    Node *head = take_Input();
    head = reverse( head );
    print(head);
    return 0;
}