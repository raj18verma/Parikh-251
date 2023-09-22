// Question Link:- https://www.codingninjas.com/studio/problems/min-stack_3843991?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		
        stack<int> s;
        stack<int> ss;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
	        s.push(num);
        if (ss.empty() || num <= ss.top())
            ss.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
        if (s.empty())
            return -1; 
        int ans = s.top();
        s.pop();
        if (ss.top() == ans)
            ss.pop();
        return ans; 
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
	        if (s.empty())
            return -1;
            return s.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
	        if (ss.empty())
            return -1;
        return ss.top();
		}
};
