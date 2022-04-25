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
bool palindrome(Node *head){
    if(head==NULL) return true;
    int length = 0;
    Node *temp = head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    int mid = length / 2;
    temp = head;
    for(int i = 1 ; i < mid ; i++){
        temp=temp->next;
    }
    Node *head2 = temp -> next;
    temp = head2;
    Node *next = NULL;
    Node *prev = NULL;
    while(temp != NULL){                    //reversing the linked list
        Node *next = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = next;
    }
    head2 = prev;
    temp = head;
    while(temp -> next != NULL){                    
        if(temp -> data == head2 -> data){       // comparing half of the main linked list with half of the reversed linked list
            temp = temp -> next;
            head2 = head2 -> next;
        }
        else return false;
    }
    return true;
}
int main(){
    Node *head = take_Input();
    cout<<palindrome(head);
    return 0;
}