#include <iostream>
#include <bits/stdc++.h>
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

Node* insertToBST(Node *root, int data){
  if(root==NULL){
    return new Node(data);
  }
  if(data<root->data){
    root->left = insertToBST(root->left, data);
  }else{
    root->right = insertToBST(root->right, data);
  }
  return root;
}

// int findCeil(Node *root, int key){
//   int ceil = -1;
//   while(root){
//     if(root->data==key){
//       return root->data;
//     }
//     if(root->data<key){
//       root = root->right;
//     }else{
//       ceil = root->data;
//       root = root->left;
//     }
//   }
// }

// int findFloor(Node *root, int key){
//   int floor = -1;

//   while(root){
//     if(root->data==key){
//       return root->data;
//     }
//     if(root->data>key){
//       root = root->left;
//     }else{
//       floor = root->data;
//       root = root->right;
//     }
  
//   }
// }
void levelOrder(Node *root){
  if(root==NULL){
    return;
  }
  queue<Node *> q;
  q.push(root);
  while(!q.empty()){
   int size  = q.size();
    for(int i=0; i<size; i++){
      Node *curr = q.front();
      q.pop();
      cout<<curr->data<<" ";
      if(curr->left!=NULL){
        q.push(curr->left);
      }
      if(curr->right!=NULL){
        q.push(curr->right);
      }
    }
    cout<<endl;
  }
}

int findMin(Node *root){
  if(root==NULL){
    return -1;
  }
  Node *curr = root;
  while(curr->left!=NULL){
    curr = curr->left;
  }
  return curr->data;
}

bool searchInBST(Node *root, int key){
  if(root==NULL){
    return false;
  }
  if(root->data==key){
    return true;
  }
  if(key<root->data){
    return searchInBST(root->left, key);
  }
  return searchInBST(root->right, key);
}


Node* deleteNode(Node* root, int key) {
    if (root == NULL) {
        return NULL; // Key not found
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else { // Node with the key found
        // 0 or 1 child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // 2 children
        // Find the inorder successor (smallest node in the right subtree)
        Node* successor = root->right;
        while (successor->left != NULL) {
            successor = successor->left;
        }

        // Copy the inorder successor's content to this node
        root->data = successor->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, successor->data);
    }
    return root;
}

void inOrderr(Node *root,int key,int &count){
  if(root==NULL){
    return;
  }

  inOrderr(root->left,key,count);
  count++;
  if(count==key){
  cout<<root->data<<" ";

  }
  inOrderr(root->right,key,count);
}

int main(){

// void inOrder(Node *root){
//   if(root==NULL){
//     return;
//   }
//   inOrder(root->left);
//   cout<<root->data<<" ";
//   inOrder(root->right);
// }
Node* root = NULL;
int arr[] = {5, 1, 3, 4, 2, 7};
for(int i=0; i<=5; i++){
  root = insertToBST(root, arr[i]);
}
int count = 0;
inOrderr(root,2,count);

// cout<<searchInBST(root, 33)<<endl;

// root = deleteNode(root, 3);
// levelOrder(root);
  return 0;
}