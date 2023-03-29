#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

void insertList(struct Node **head_new, int value){
   struct Node *newnode = new Node();
   struct Node *last = *head_new;
   newnode->data=value;
   newnode->next= NULL;
   if((*head_new)==NULL){
    *head_new=newnode;
    return;
   } 
   else{
    while((last->next)!=NULL){
        last= last->next;
    }
    last->next = newnode;
   }

}


void printList(struct Node *head_ref){
   Node *temp = head_ref;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
}

void deleteLast(struct Node **head_s){

    Node *temp = *head_s;
    while((temp->next->next)!=NULL){
        temp=temp->next;
    }
    temp->next = NULL;
}

int main(){
    struct Node *head = NULL;

    while(1){
        int element;
        cin>>element;
        if(element<0){
            break;
        }
        else{
            insertList(&head,element);
        }
    }
    cout<<"Before deletion"<<endl;
        printList(head);

        cout<<"after deletion"<<endl;
        deleteLast(&head);
        printList(head);

}