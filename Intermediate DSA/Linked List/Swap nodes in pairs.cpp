// Question Link:- https://www.codingninjas.com/studio/problems/pair-swap_759396?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* pairsSwap(Node *head)
{
    //  Write your code here.
    if (head == NULL || head->next == NULL) {
        return head; // No swapping needed for empty or single-node list
    }

    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;

    while (curr != NULL && curr->next != NULL) {
        prev->next = curr->next;
        prev = curr;
        Node *temp = curr->next;
        curr->next = temp->next;
        temp->next = curr;
        curr = curr->next;
    }

    prev->next = curr;
    return head;
}
