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


int search(int inOrder[], int start, int end, int curr){
  for(int i = start; i <= end; i++){
    if(inOrder[i] == curr){
      return i;
    }
  }
  return -1;
}

int heightOfTree(Node *root){
  if(root == NULL){
    return 0;
  }
  int lh = heightOfTree(root->left);
  int rh = heightOfTree(root->right);
  return max(lh, rh) + 1;
}


int diameterOfTree(Node *root){
  if(root == NULL){
    return 0;
  }
  int lh = heightOfTree(root->left);
  int rh = heightOfTree(root->right);
  int currDiameter = lh + rh + 1;
  int leftDiameter = diameterOfTree(root->left);
  int rightDiameter = diameterOfTree(root->right);
  return max(currDiameter, max(leftDiameter, rightDiameter));
}

int maxpathSum(Node *root, int &res){
  if(root == NULL){
    return 0;
  }
  int lh = maxpathSum(root->left, res);
  int rh = maxpathSum(root->right, res);
  int temp = max(max(lh, rh) + root->data, root->data);
  int ans = max(temp, lh + rh + root->data);
  res = max(res, ans);
  return temp;
}

Node* buildTree(int preOrder[], int inOrder[], int start, int end){
  if(start > end){
    return NULL;
  }
  static int idx = 0;
  int curr = preOrder[idx];
  idx++;
  Node *node = new Node(curr);
  int pos = search(inOrder, start, end, curr);
  if(start == end){
    return node;
  }
  node->left = buildTree(preOrder, inOrder, start, pos-1);
  node->right = buildTree(preOrder, inOrder, pos+1, end);
  return node;
}

void preOrderr(Node *root){
  if (root == NULL){
    return;
  }
  cout<<root->data << " ";
  preOrderr(root->left);
  preOrderr(root->right);
}
int main(){
  int preOrder[] = {1, 2, 4, 5, 3, 6, 7};
  int inOrder[] = {4, 2, 5, 1, 6, 3, 7};

  Node *root = buildTree(preOrder, inOrder, 0, 6);

  preOrderr(root);
  cout<<endl;
  cout<<diameterOfTree(root);
  cout<<endl;
  int res = INT_MIN;
  maxpathSum(root, res);
  return 0;
}