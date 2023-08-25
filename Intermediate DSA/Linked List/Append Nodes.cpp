// Question Link:- https://www.codingninjas.com/studio/problems/append-nodes_763407?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

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

Node* addNodes(Node* head, int n, int m) {
    // Write your code here.
    Node* temp = head;
    Node* tempprev = NULL;
    while(temp!=NULL){
        int count = 1 ;
        int sum = 0;
        while(count<=m+n&&temp!=NULL){
            if(count>m){
                sum = sum+temp->data;
            }
            if (temp != NULL) {
                tempprev = temp;
                temp = temp->next;
            }
            count++;
        }
        if(sum!=0){
            Node *newnode = new Node(sum);
            newnode->next = tempprev->next;
            tempprev->next = newnode;
        }
    }
    return head;
}
