#include <iostream>
using namespace std;
class Node {
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
	while(data!=-1) {
		Node *new_Node = new Node(data);
		if (head==NULL) {
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
void find_linklist(Node *head, int x){
	int count = 0;
	Node *temp = head;
	while(temp!=NULL) {
		if(temp->data==x) {
			cout<<count;
			break;
		}
		else{
			temp=temp->next;
			if(temp->next==NULL && temp->data!=x) {
				cout<<"data not found"<<endl;
			}
			count++;
		}
	}
}
void print(Node *head){
	Node *temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	int n,x;
	Node *head=take_Input();
	print (head);
	cin>>x;
	find_linklist(head,x);
}
