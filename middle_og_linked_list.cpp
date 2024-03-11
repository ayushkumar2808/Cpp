#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

void addToTail(int data, Node* &head)
{
  Node* newNode = new Node(data);
  Node* temp = head;

  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  while (temp->next)
  {
    temp = temp->next;
  }

  temp->next = newNode;
}

void AddToHead(int data, Node *&head)
{
  Node* NEWnODE = new Node(data);
  NEWnODE->next = head;
  head = NEWnODE;
}

Node* middleList(Node *&head){
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

int main()
{
  int toAdd = 544;
  Node *head = nullptr;
  addToTail(toAdd, head);
  addToTail(3, head);
  addToTail(55, head);
  addToTail(1, head);
  addToTail(9, head);
  addToTail(49, head);
  // AddToHead(12, head);
  Node *temp = head;

  Node* ab = middleList(head);

   while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
cout<<endl;
  while (ab)
  {
    cout << ab->data << " ";
    ab = ab->next;
  }
}