// Problem Link:- https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_630475?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1


/****************************************************************

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


*****************************************************************/

class Stack
{
    //Write your code here
    Node *head;

public:
    Stack()
    {
        //Write your code here
        head=NULL;
    }

    int getSize()
    {
        //Write your code here
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }

    bool isEmpty()
    {
        //Write your code here
        return (head==NULL);
    }

    void push(int data)
    {
        //Write your code here
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }

    void pop()
    {
        //Write your code here
        if(head==NULL)
        {
            return;
        }
        Node* prev=head;
        head=head->next;
        delete prev;
    }

    int getTop()
    {
        //Write your code here
        if(head==NULL)
        {
            return -1;
        }
        Node* ans=head;
        int anss=head->data;
        return anss;
    }
};
