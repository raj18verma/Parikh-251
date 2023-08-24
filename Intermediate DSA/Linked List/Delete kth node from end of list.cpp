// Question Link:- https://www.codingninjas.com/studio/problems/delete-kth-node-from-end-in-linked-list_799912?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
        Node *slow = head, *fast = head;
        while(K--){
            fast = fast->next;
        }
        if(fast == NULL) return slow->next;
        
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        return head;
}
