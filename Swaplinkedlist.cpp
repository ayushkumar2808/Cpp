#include<bits/stdc++.h>
#include<iostream>
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

void insertBeginning(struct Node **head_new, int value)
{
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;
 
    if((*head_new) == NULL)
    {
        *head_new = newnode;
        return;
    }
    else 
    {
        newnode->next = *head_new;
        *head_new = newnode;
    }
}
void swaplist(struct Node *head_new){
    struct Node *temp = head_new;
  while(temp!=NULL && temp->next!=NULL){
    
   swap(temp->data,temp->next->data);

    temp=temp->next->next;
  } 

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
    swaplist(head);
    printList(head);
  
    
    
}

