#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}

void insertAtTail(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* tail, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* newNode = new Node(data);

    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void deleteAtPosition(int position, Node* &head){
    // Will Implement Later
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* nodeOne = new Node(5);
    Node* head = nodeOne;
    Node* tail = nodeOne;
    // print(head);

    insertAtHead(head, 8);
    insertAtHead(head, 4);
    insertAtHead(head, 9);
    // print(head);

    deleteAtPosition(1, head);
    print(head);

    return 0;
}