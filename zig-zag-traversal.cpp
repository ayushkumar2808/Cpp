#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;
  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }
};

void zigZagTraversal(Node* root){

}

int main(){
  Node *root = new Node(10);
  root->left = new Node(2);
  root->right = new Node(10);
  root->left->left = new Node(20);
  root->left->right = new Node(1);
  root->right->right = new Node(-25);
  root->right->right->left = new Node(3);
  root->right->right->right = new Node(4);
  int res = INT_MIN;
  cout << zigZagTraversal(root) << endl;
  return 0;
}