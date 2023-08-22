// Question Link:- https://www.codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

// BruteForce Approach  ( T.C:- O(N) and S.C:- O(N) )

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    vector<int>ans;
    for(LinkedListNode<int> *curr=head; curr!=NULL; curr=curr->next){
        ans.push_back(curr->data);
    }
    for(LinkedListNode<int> *curr=head; curr!=NULL; curr=curr->next){
        curr->data=ans.back();
        ans.pop_back();
    }
    return head;
}


// Optimal Approach (Iterative Approach)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL, *curr=head;
        while(curr!=NULL){
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};





// Optimal Approach (Recursive Approach)

