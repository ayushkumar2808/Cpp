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

int maxpathSum(Node *root, int &res){
  if(root == NULL){
    return 0;
  }
  int lh = maxpathSum(root->left, res);
  int rh = maxpathSum(root->right, res);
  res = max(res, root->data + lh + rh);
  return max(lh,rh)+root->data;
}


int sumOfLeadNodes(Node *root, int &sum){
  if(root == NULL){
    return 0;
  }
  if(root->left == NULL && root->right == NULL){
    sum += root->data;
  }
  sumOfLeadNodes(root->left, sum);
  sumOfLeadNodes(root->right, sum);
  return sum;

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
  maxpathSum(root, res);
  cout << res << endl;
  cout<<endl;
  int sum = 0;
  cout << sumOfLeadNodes(root, sum) << endl;
  return 0;
}