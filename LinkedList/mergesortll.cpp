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
void mergesortedlinkedlist(Node *head1, Node *head2){
    Node *finalhead = NULL;
    Node *finaltail = NULL;
     while(head1 != NULL && head2 != NULL){
        if(finalhead == NULL){
            if(head1 -> data <= head2 -> data){
                finalhead = head1;
                finaltail = head1;
                head1 = head1 -> next;
            }
            else{
                finalhead = head2;
                finaltail = head2;
                head2 = head2 -> next;
            }
         }
        else{
            if(head1 -> data <= head2 -> data){
                finaltail -> next = head1;
                finaltail = finaltail -> next;
                head1 = head1 -> next;
            }
            else {
                finaltail -> next = head2;
                finaltail = finaltail -> next;
                head2 = head2 -> next;
         }
      }
    }
    while(head1 != NULL){
        finaltail -> next = head1;
        finaltail = finaltail -> next;
        head1 = head1 -> next;
    }
    while(head2 != NULL){
        finaltail -> next = head2;
        finaltail = finaltail -> next;
        head2 = head2 -> next;
    }
    while(finaltail != NULL){
        cout << finalhead << " " ;
    }
}
void mergesort(Node *head){
    if(head == NULL || head-> next == NULL) return;
    Node *slow = head;
    Node *fast = head;
    while(fast -> next != NULL && fast != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    Node *start = head;
    Node *end = slow -> next;
    slow -> next = NULL;
    mergesort(start);
    mergesort(end);
    mergesortedlinkedlist(start,end);
}
int main(){
    Node *head1 = take_Input();
    mergesort(head1);
    return 0;
}