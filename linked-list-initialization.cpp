#include <bits/stdc++.h>
using namespace std;

struct Node
{
 public:
 int data;
 Node* next;

 Node(int data1, Node* next1){
  data = data1;
  next= next1;
 }
};


int main(){
int a[]={1,2,3,4,5,5};
Node* y = new Node(a[1], nullptr);

cout<<y;
}