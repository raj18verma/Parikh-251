// Question Link:- https://www.codingninjas.com/studio/problems/segregate-odd-even_920524?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

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

Node *segregateOddEven(Node *head) {
  // Write your code here.
  if (!head || !head->next)
    return head;
  Node *dummy = new Node(0);
  dummy->next = head;
  Node *lpos = dummy, *temp = head, *prev = dummy;

  while (temp) {
    if (temp->data % 2 == 0) {
      prev = temp;
      temp = temp->next;
      continue;
    }

    if (lpos == prev) {
      prev = temp;
      lpos = prev;
      temp = temp->next;
      continue;
    }

    Node *nodd = temp;
    prev->next = temp->next;
    nodd->next = lpos->next;
    lpos->next = nodd;
    temp = prev->next;
    lpos = nodd;
  }
  return dummy->next;
}
