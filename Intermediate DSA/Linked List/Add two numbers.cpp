// Question Link:- https://www.codingninjas.com/studio/problems/add-two-numbers-as-linked-lists_1170520?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
        Node *ans = new Node(0);
        Node *p = num1, *q=num2, *curr = ans;
        int carry=0;
        while(p!=NULL || q!=NULL){
            int x = (p!=NULL) ? p->data : 0;
            int y = (q!=NULL) ? q->data : 0;
            int sum = carry + x+ y;
            carry = sum/10;
            curr->next = new Node(sum%10);
            curr = curr->next;
            if(p!=NULL) p = p->next;
            if(q!=NULL) q = q->next;
        }
        if(carry>0){
            curr->next = new Node(carry);
        }
        return ans->next;

}
