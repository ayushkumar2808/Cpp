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

void addToTail(int data, Node *&head)
{
  Node *newNode = new Node(data);
  Node *temp = head;

  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  while (temp)
  {
    temp = temp->next;
  }

  temp = newNode;
}


void AddToHead(int data, Node *&head)
{
  Node *NEWnODE = new Node(data);
  NEWnODE->next = head;
  head = NEWnODE;
}

int main()
{
  int toAdd = 544;
  Node *head = nullptr;
  addToTail(toAdd, head);
  addToTail(3, head);
  addToTail(55, head);
  // addToTail(1, head);
  // addToTail(9, head);
  // AddToHead(12, head);
  Node *temp = head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}