#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node *left;
  Node *right;
  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

void preOrder(Node *root)
{
  if (root == NULL){
    return;
  }
  cout<<root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(Node *root)
{
  if (root == NULL){
    return;
  }
  inOrder(root->left);
  cout<<root->data << " ";
  inOrder(root->right);
}

void postOrder(Node *root)
{
  if (root == NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data << " ";
}
void zigZagTraversal(Node *root)
{
  if (root == NULL){
    return;
  }
  stack<Node *> currLevel;
  stack<Node *> nextLevel;
  bool leftToRight = true;
  currLevel.push(root);
  while (!currLevel.empty())
  {
    Node *temp = currLevel.top();
    currLevel.pop();
    if (temp != NULL)
    {
      cout<<temp->data<<" ";
      if (leftToRight)
      {
        if (temp->left != NULL)
        {
          nextLevel.push(temp->left);
        }
        if (temp->right != NULL)
        {
          nextLevel.push(temp->right);
        }
      }
      else
      {
        if (temp->right != NULL)
        {
          nextLevel.push(temp->right);
        }
        if (temp->left != NULL)
        {
          nextLevel.push(temp->left);
        }
      }
    }
    if (currLevel.empty())
    {
      leftToRight = !leftToRight;
      swap(currLevel, nextLevel);
    }
  }
}


void levelOrder(Node *root){
  if(root==NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);

  while(!q.empty()){
     Node *curr = q.front();
     cout<<curr->data<<" ";
    q.pop();
    if(curr->left){
      q.push(curr->left);
    }
    if(curr->right){
      q.push(curr->right);
    }
  }
}

void insetttt(Node* root, int key){
   if(root==NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);

  while(!q.empty()){
     Node *curr = q.front();
     q.pop();
     if (!curr->left) {
            curr->left = new Node(key);
            break;
        } else {
            q.push(curr->left);
        }
        if (!curr->right) {
            curr->right = new Node(key);
            break;
        } else {
            q.push(curr->right);
        }
  }
}

void rightSideView(Node *root)
{
  if (root == NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
      Node *curr = q.front();
      q.pop();
      if (i == n - 1)
      {
        cout<<curr->data<<" ";
      }
      if (curr->left)
      {
        q.push(curr->left);
      }
      if (curr->right)
      {
        q.push(curr->right);
      }
    }
  }
}

void leftSideView(Node *root)
{
  if (root == NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
      Node *curr = q.front();
      q.pop();
      if (i == 0)
      {
        cout<<curr->data<<" ";
      }
      if (curr->left)
      {
        q.push(curr->left);
      }
      if (curr->right)
      {
        q.push(curr->right);
      }
    }
  }
}

void deleeee(Node* root, int key){
   if(root==NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);

  while(!q.empty()){
     Node *temp = q.front();
     q.pop();
      if (temp->left) {
            if (temp->left->data == key) {
                temp->left = NULL;
            } else {
                q.push(temp->left);
            }
        }
        if (temp->right) {
            if (temp->right->data == key) {
                temp->right = NULL;
            } else {
                q.push(temp->right);
            }
        
}
  }}

void SumOfNodesAtKthLevel(Node *root, int k)
{
  if (root == NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);
  q.push(NULL);
  int level = 0;
  int sum = 0;
  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();
    if (curr != NULL)
    {
      if (level == k)
      {
        sum += curr->data;
      }
      if (curr->left != NULL)
      {
        q.push(curr->left);
      }
      if (curr->right != NULL)
      {
        q.push(curr->right);
      }
    }
    else if (!q.empty())
    {
      q.push(NULL);
      level++;
    }
  }
  cout<<sum;
}


lcaInBinaryTree(Node *root, int n1, int n2)
{
  if (root == NULL){
    return NULL;
  }
  if (root->data == n1 || root->data == n2)
  {
    return root;
  }
  Node *left = lcaInBinaryTree(root->left, n1, n2);
  Node *right = lcaInBinaryTree(root->right, n1, n2);
  if (left != NULL && right != NULL)
  {
    return root;
  }
  if (left == NULL && right == NULL)
  {
    return NULL;
  }
  if (left != NULL)
  {
    return lcaInBinaryTree(root->left, n1, n2);
  }
  return lcaInBinaryTree(root->right, n1, n2);
}

void maximumWidthOfbinaryTree(Node *root)
{
  if (root == NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);
  int res = 0;
  while (!q.empty())
  {
    int count = q.size();
    res = max(res, count);
    for (int i = 0; i < count; i++)
    {
      Node *curr = q.front();
      q.pop();
      if (curr->left != NULL)
      {
        q.push(curr->left);
      }
      if (curr->right != NULL)
      {
        q.push(curr->right);
      }
    }
  }
  cout<<res;
}

isCompleteBinaryTree(Node *root)
{
  if (root == NULL){
    return true;
  }
  queue<Node *> q;
  q.push(root);
  bool flag = false;
  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();
    if (curr == NULL)
    {
      flag = true;
    }
    else
    {
      if (flag)
      {
        return false;
      }
      q.push(curr->left);
      q.push(curr->right);
    }
  }
  return true;
}


//tree diagram
//         1
//        / \
//       2   3
//      / \ / \
//     4  5 6  7


int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  


  // preOrder(root);
  // cout<<endl;
  // inOrder(root);
  // cout<<endl;
  // postOrder(root);

  // cout<<endl;
  levelOrder(root);
  // cout<<endl;
  // SumOfNodesAtKthLevel(root, 1);
  cout<<endl;
  maximumWidthOfbinaryTree(root);
  return 0;
}