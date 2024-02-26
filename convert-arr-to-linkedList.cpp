#include <bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int data1, Node* next1){
  data=data1;
  next = next1;
}
};


Node* converttArrToLL(int arr[],int size){
Node* head = new Node(arr[0],nullptr);
Node* mover = head;
for(int i=1;i<size;i++){
  Node* temp = new Node(arr[i],nullptr);
  mover->next = temp;
  mover = temp;
}

return head;
}
int main(){
  int arr[] = {12,2,3,4,5,6};
  Node* head = converttArrToLL(arr,6);
  Node* temp= head;

  while(temp){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
}