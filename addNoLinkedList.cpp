#include<iostream>
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
		cout<<headRef->data;
		headRef=headRef->next;
	}
	cout<<endl;
}
void add(node* head1,node* head2,node* &temp){
	node * head3=temp;
	int carry=0;
	int sum(0);
	while(head1 && head2){
		sum=(head1->data+head2->data+carry)%10;
		carry=(head1->data+head2->data+carry)/10;
		append(head3,sum);
		head1=head1->next;
		head2=head2->next;
	}
	while(head1){
		sum=(head1->data+carry)%10;
		carry=(head1->data+carry)/10;
		append(head3,sum);
		head1=head1->next;
	}
	while(head2){
		sum=(head2->data+carry)%10;
		carry=(head2->data+carry)/10;
		append(head3,sum);
		head2=head2->next;
	}
	display(temp);
}

int main(){
	node* head1=NULL;
	node* head3=NULL;
	node* head2=NULL;
	append(head1,9);
	append(head1,9);
	append(head1,9);
	append(head1,9);
	append(head2,9);
	append(head2,9);
	append(head2,9);
	append(head2,9);
	display(head1);
	display(head2);
	add(head1,head2,head3);
	display(head3);
	return 0;
}