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

void segregate(node* &headRef){
	node* temp=headRef;
	if(temp->data%2==1){
		while(temp->next){
			if(temp->next->data%2==0){
				node* temp1=temp->next->next;
				temp->next->next=headRef;
				headRef=temp->next;
				temp->next=temp1;
				break;
			}
			temp=temp->next;
		}	
	}
	temp=headRef;
	node* temp1=temp;
	while(temp->next){
		if(temp->next->data%2==1){
			while(temp1->next){
				if(temp1->next->data%2==0){
					node* temp2=temp1->next->next;
					temp1->next->next=temp->next;
					temp->next=temp1->next;
					temp1->next=temp2;
					break;
				}
				temp1=temp1->next;
			}
			temp=temp->next;
		}
	}			
}

int main(){
	node* head=NULL;
	append(head,1);
	append(head,2);
	append(head,3);
	append(head,4);
	append(head,5);
	append(head,6);
	append(head,7);
	append(head,8);
	display(head);
	segregate(head);
	display(head);
	return 0;
}