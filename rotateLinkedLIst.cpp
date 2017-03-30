#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* newNode(int newData){
    node* temp=new node;
    temp->data=newData;
    temp->next=NULL;
    return temp;
}
void append(node** headRef,int newData){
    node* temp=newNode(newData);
    temp->next=*headRef;
    *headRef=temp;
}
void printList(node* headRef){
    while(headRef){
        cout<<headRef->data;
        cout<<"\t";
        headRef=headRef->next;
    }
    cout<<endl;
}
void rotate(node** headRef,int k){
    node* temp=*headRef;
    for(int i=1;i<k;i++)
        temp=temp->next;
    node* temp2=*headRef;
    if(temp->next==NULL)
        return;
    *headRef=temp->next;
    node* temp3=*headRef;
    while(temp3->next)
        temp3=temp3->next;
    temp3->next=temp2;
    temp->next=NULL;
}
int main(){
    node* head=NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,5);
    printList(head);
    rotate(&head,4);
    printList(head);
    rotate(&head,5);
    printList(head);
    rotate(&head,1);
    printList(head);
    rotate(&head,0);
    printList(head);
    return 0;
}
