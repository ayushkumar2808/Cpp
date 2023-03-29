#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head_new, int value){
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

struct Node * mergeList(struct Node * head1,struct Node * head2, int m, int n){
    struct Node * head = head1;
    struct Node * temp1 = head1->next;
    struct Node  * temp2 = head2;
    struct Node *prev = head;
    bool f = false;
    while(temp1 && temp2){
        if(f){
            prev->next = temp1;
            temp1=temp1->next;
        }
        else{
            prev->next=temp2;
            temp2 = temp2->next;
        }
        f=!f;
        prev = prev->next;
    }
    while(temp1){
        prev->next=temp1;
        prev=prev->next;
        temp1=temp1->next;

    }   
    while(temp2){
        prev->next=temp2;
        prev=prev->next;
        temp2 = temp2->next;
    } 
    return head;
}
void printList(struct Node *head_ref){
   Node *temp = head_ref;
   while(temp!=NULL){
    cout<<temp->data<<" ";

    temp = temp->next;

   }
 
   

}


int main(){
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        int element;
        cin>>element;
        insertEnd(&head1,element);
    }
      int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int element;
        cin>>element;
        insertEnd(&head2,element);
    }
    
    Node * merged = mergeList(head1,head2,m,n);
    printList(merged);

}