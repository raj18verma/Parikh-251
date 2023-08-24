// Question Link:- https://www.codingninjas.com/studio/problems/insertion-sort-in-linked-list_1090544?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1


Node* insertionSortLL(Node *head)
{
    // Write your code here.
        Node* dummy=new Node(10000);
        
        while(head){
            Node* next=head->next;
            Node* temp=dummy;
            
            while(temp->next && temp->next->data<head->data){
                temp=temp->next;
            }
            head->next=temp->next;
            temp->next=head;
            head=next;
        }
       return dummy->next; 
}

// T.C :- O(n)
// S.C :- O(1)
