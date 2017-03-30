//programm to delete node with greater value at right side
#include<iostream>
//structure of node
using namespace std;
struct node{
	int data;
	node* next;
};
//function to create a new node
node* newNode(int newData){
	node* temp=new node;
	temp->data=newData;
	temp->next=NULL;
	return temp;
}
//function to append the node
void append(node* &headRef,int newData){
	if(headRef==NULL){
		headRef=newNode(newData);
		return;
	}
	node* temp=headRef;
	while(temp->next)
		temp=temp->next;
	temp->next=newNode(newData);
}
//function to print all the nodes
void display(node* headRef){
	while(headRef){
		cout<<headRef->data<<"\t";
		headRef=headRef->next;
	}
	cout<<endl;
}
//function to delete the nodes with higher value on the right side
void deleteNode(node* &headRef){
	node* temp=headRef;
	while(temp->next){
		if(temp->data<temp->next->data){
			node* temp1=temp->next;
			temp->data=temp1->data;
			temp->next=temp1->next;
			temp1->next=NULL;
			delete(temp1);
		}
		else
			temp=temp->next;
	}
}

int main(){
	node* head=NULL;
	append(head,12);
	append(head,15);
	append(head,10);
	append(head,11);
	append(head,5);
	append(head,6);
	append(head,3);
	display(head);
	deleteNode(head);
	display(head);
	return 0;
}