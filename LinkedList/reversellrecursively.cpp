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
// class Pair{
//     public:
//     Node *head;
//     Node *tail;
// };
// Pair reverselinkedlist(Node *head){
//     if(head == NULL  || head->next == NULL){
//         Pair ans;
//         ans.head = head;                                            ///2nd method
//         ans.tail = head;
//         return ans;
//     }
//     Pair smallOutput = reverselinkedlist(head -> next);
//     smallOutput.tail -> next = head;
//     head -> next = NULL;
//     Pair ans;
//     ans.head = smallOutput.head;
//     ans.tail = head;
//     return ans;
// }


//----------------------------------------------------------------

// Node *reverselinkedlist(Node *head){                     O(n^2) solution
//     if(head == NULL  || head->next == NULL){
//         return head;
//     }
//     Node *smallOutput = reverselinkedlist(head -> next);       
//     Node *temp = smallOutput;                                ///1st method
//     while(temp -> next != NULL){
//         temp = temp -> next;
//     }
//     temp -> next = head;
//     head -> next = NULL;
//     return smallOutput;
// }
Node *reverselinkedlist(Node *head){                    
    if(head == NULL  || head->next == NULL){
        return head;                                           ///3rd method
    }
    Node *smallOutput = reverselinkedlist(head -> next);       
    Node *temp = smallOutput;
    Node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallOutput;
}
int main(){
    Node *head = take_Input();
    // Pair h = reverselinkedlist(head);
    head = reverselinkedlist(head);
    print(head);
    return 0;
}