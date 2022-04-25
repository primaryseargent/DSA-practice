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
// Node *returnmid(Node *head){
//     Node *temp = head;
//     int length = 0;
//     while(temp != NULL){
//         length++;
//         temp = temp -> next;
//     }
//     int mid = length / 2;
//     if(length % 2 == 0){
//         temp = head;
//         for(int i = 1; i < mid; i++){
//             temp = temp -> next;
//         }
//         return temp;
//     }
//     else{
//         temp = head;
//         for(int i = 0; i < mid; i++){
//             temp = temp -> next;
//         }
//         return temp;
//     }
// }
Node *returnmid(Node *head){                                     //better approach
    Node *temp = head;
    Node *slow = head;
    Node *fast = head;
    while(fast -> next != NULL && fast != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;    
}
int main(){
    Node *head = take_Input();
    head = returnmid(head);
    cout<<head -> data << endl;
    return 0;
}