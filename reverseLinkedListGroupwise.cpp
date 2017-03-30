//programm to reverse linked list group wise
#include<iostream>
//structure of the node
using namespace std;
struct node{
	int data;
	node* next;
};
//function to create a node
node* newNode(int newData){
	node* temp=new node;
	temp->data=newData;
	temp->next=NULL;
	return temp;
}
//function to append a node to the end
void push(node* &headRef,int newData){
	if(headRef==NULL){
		headRef=newNode(newData);
		return;
	}
	node* temp=newNode(newData);
	node* temp1=headRef;
	while(temp1->next)
		temp1=temp1->next;
	temp1->next=temp;
}
//function to display the linked list
void display(node* headRef){
	while(headRef){
		cout<<headRef->data<<"\t";
		headRef=headRef->next;
	}
	cout<<endl;
}
//function to reverse the linked list in groups
node* reverseGroup(node* headRef,int gSize){
	node* Current=headRef;
	node* Prev=NULL;
	node* Next=NULL;
	int count=0;
	while(Current!=NULL&&count<gSize){
		Next=Current->next;
		Current->next=Prev;
		Prev=Current;
		Current=Next;
		count++;
	}
	if(Next!=NULL)
	headRef->next=reverseGroup(Next,gSize);
	return Prev;
}

int main(){
	node* head=NULL;
	push(head,1);
	push(head,2);
	push(head,3);
	push(head,4);
	push(head,5);
	display(head);
	head=reverseGroup(head,3);
	display(head);
	return 0;
}
