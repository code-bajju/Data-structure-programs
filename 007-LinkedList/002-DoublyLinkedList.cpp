#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* previous;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> previous = NULL;
        this -> next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(data);
        newNode -> next = head;
        head -> previous = newNode;
        head = newNode;
    }

    
}

void insertAtTail(Node* &tail, Node* head, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    } else {
        Node* newNode = new Node(data);
        tail -> next = newNode;
        newNode -> previous = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }

    int count = 1;
    Node* temp = head;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, head, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next -> previous = newNode;
    temp -> next = newNode;
    newNode -> previous = temp;
}

void deleteAtHead(Node* &head){
    if(head == NULL){
        
    }    
}

int main(){
    // Node* nodeOne = new Node(3);
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 7);

    insertAtTail(tail, head, 10);

    insertAtPosition(head, tail, 6, 2);
    insertAtPosition(head, tail, 50, 3);


    print(head);
    return 0;
}