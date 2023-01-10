#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

class Node {
   public:
      int data;
      Node *left;
      Node *right;
   
   Node(int data){
      this -> data = data;
      this -> left = NULL;
      this -> right = NULL;
   }
};

Node* insert(Node* root, int data){
   if(root == NULL){
      return new Node(data);
   } else {
      Node* current;
      if(data <= root -> data){
         current = insert(root -> left, data);
         root -> left = current;
      } else {
         current = insert(root -> right, data);
         root -> right = current;
      }
      return root;
   }
}


Node* search(Node* root, int key) {
   if(root == NULL || root->data == key)        
      return root;
   if(root->data < key) 
      return search(root -> right, key);
   else return search(root -> left, key);
}


void preOrder(Node* &root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node* &root){
    if(root == NULL){
        return;
    }    
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}

void inOrder(Node* &root){
    if(root == NULL){
        return;
    }
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

int main(){
   Node* root = new Node(10);

   insert(root, 8);
   insert(root, 23);
   insert(root, 45);
   insert(root, 6);

   Node* result =  search(root, 6);
   if(result != NULL){
      cout << "Found: " << result -> data << endl;
   } else cout << "Nothing Found";
   cout << endl;


   return 0;
}