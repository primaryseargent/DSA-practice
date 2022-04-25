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
int findNode(int data, Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        if(temp -> data == data) return count;
        else count++;
        temp = temp -> next;
    }
    return -1;
}
int main(){
    int x;
    Node *head = take_Input();
    cin >> x;
    cout<<findNode(x, head);
    return 0;
}