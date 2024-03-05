#include <bits/stdc++.h>
using namespace std;

// class Node{
//   public:
//   int data;
//   Node* next;

//   Node(int data1, Node* next1){
//     data = data1;
//     next = next1;
//   }
// };

// Node* convertArrToList(int arr[],int size){
//   Node* head = new Node(arr[0],nullptr);
//   Node* mover = head;

//   for(int i=1;i<size;i++){
//     Node* temp = new Node(arr[i],nullptr);
//     mover->next = temp;
//     mover = temp;
//   }
//   return head;
// }
// int main(){
//   int arr[] = {1,23,4,5,6};
//   // int nodeToInsert = 55;
//   Node* head = convertArrToList(arr,6);

//   Node* temp=head;
//   while(temp){
//     cout<<temp->data<<endl;
//     temp=temp->next;
//   }
// }


class Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1, Node* next1){
    data = data1;
    next= next1;
  }
};

Node* convertArr2LL(int arr[],int size){
  Node* head = new Node(arr[0],nullptr);
  Node* mover = head;

  for(int i=1;i<size;i++){
    Node* temp = new Node(arr[i],nullptr);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

Node* insertAtFirst(int target, Node* head){
  Node* newNode = new Node(target,nullptr);

  newNode->next = head;
  head = newNode;
  return head;
}

int main(){
  int arr[]={1,3,22,3,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  Node * head = convertArr2LL(arr,size);
  Node* head11 = insertAtFirst(34,head);
   Node* head1 = insertAtFirst(344545,head11);
  Node* temp = head1;
  while(temp){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
}