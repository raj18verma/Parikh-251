// Problem Link:- https://www.codingninjas.com/studio/problems/stack-using-queue_795152?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

class Stack {
	// Define the data members.
    queue<int>q1,q2;
    int size;
   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        size=q2.size();
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(q2.empty()) return true;
        else return false;
        
    }

    void push(int element) {
        // Implement the push() function.
        q1.push(element);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }

    int pop() {
        // Implement the pop() function.
        if(!q2.empty())
        {
            int ans=q2.front();
            q2.pop();
            return ans;
        }
        else{
            return -1;
        }
    }

    int top() {
        // Implement the top() function.
        if(!q2.empty())
        {
            return q2.front();
        }
        else{
            return -1;
        }
    }
};
