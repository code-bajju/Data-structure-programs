#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

class Node {
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


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
    Node* root = new Node(7);
    root -> left = new Node(10);
    root -> right = new Node(4);
    root -> left -> left = new Node(6);
    root -> left -> right = new Node(40);

    cout << "Pre Order" << endl;
    preOrder(root);
    cout << endl;
    cout << "Post Order" << endl;
    postOrder(root);
    cout << endl;
    cout << "In Order" << endl;
    inOrder(root);

    return 0;
}