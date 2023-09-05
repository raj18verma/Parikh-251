// Question Link:- https://www.codingninjas.com/studio/problems/2099908?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;\
        };
};
class Queue {
    Node* head;
    Node* tail;
public:

    Queue() {
        // Implement the Constructor
        head = NULL;
        tail = NULL;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return (head==NULL);
    }

    void enqueue(int data) {
        // Implement the enqueue() function
       Node* n = new Node(data);
       if(head==NULL){
           head = tail = n;
           return;
       }
       tail->next = n;
       tail = tail->next;
    }

    int dequeue() {
        // Implement the dequeue() function
       if (head == NULL) {
           return -1;
       }
        int ans = head->data;
        if(head->next==NULL){
            delete head;
            head=NULL;
            return ans;
        }
        Node* newhead = head->next;
        delete head;
        head = newhead;
        return ans;
    }

    int front() {
        // Implement the front() function
        if(head==NULL){
            return -1;
        }
        return head->data;
    }
};
