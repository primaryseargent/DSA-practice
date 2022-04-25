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
Node *eliminate(Node *head){
    Node *temp = head;
    while(temp -> next != NULL){
        if(temp->data == temp->next->data){
            Node *x = temp -> next;
            temp -> next = x -> next;
            delete x;
        }
        else temp = temp -> next;
    }
    return head;
}
int main(){
    Node *head = take_Input();
    head = eliminate(head);
    print(head);
    return 0;
}