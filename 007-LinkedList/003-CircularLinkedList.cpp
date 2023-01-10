#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

class Node {
    public:
        int data;
        Node *next;
    
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtStart(int data, Node* &start){
    Node* newNode = new Node(data);
    if(start == NULL){
        start = newNode;
        start -> next = newNode;
    } else {
        Node* temp = start;
        newNode -> next = temp;
        temp -> next = newNode;
        start = newNode;
    }
}

void insertAtEnd(int data, Node* &start){
    Node* newNode = new Node(data);
    Node* temp = start;

    while(temp -> next != start){
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> next = start;
}

void insertAtPosition(int data, Node* &start, int position){
    Node* newNode = new Node(data);
    Node* temp = start;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
}



void print(Node* &start){
    Node *temp = start;
    
    cout << temp -> data << " ";
    while(temp -> next != start){
        temp = temp -> next;
        cout << temp -> data << " ";
    }
}

int main(){
    Node* start = NULL;
    insertAtStart(4, start);
    insertAtStart(6, start);
    insertAtPosition(10, start, 2);
    insertAtEnd(8, start);

    print(start);
    return 0;
}