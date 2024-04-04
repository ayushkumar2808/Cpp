#include<bits/stdc++.h>
using namespace std;

// int main(){

// }

class Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1,Node* next1){
    data = data1;
    next = next1;
  }
}


Node* middle(Node* head){
  Node* slow = head;
  Node* fast = head;

  while(fast){
    fast = fast->next;
    if(fast){
      fast = fast->next;
      slow = slow->next;
    }
  }
  return slow;
}