// Question Link:- https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

    int size(Node* head){
        int n=0;
        while(head != NULL){
            n++;
            head = head->next;
        }
        return n;
    }
    

Node *findMiddle(Node *head) {
    // Write your code here
        int n  = size(head);
        
        n = (n/2) + 1;
        
        int i=0;
        while(head != NULL){
            i++;
            if(i==n)
                return head;
            head = head->next;
        }
        
        return head;
}

