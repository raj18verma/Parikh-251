// Question Link:- https://www.codingninjas.com/studio/problems/reversing-a-queue_982934?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube

#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int>s;

    if(!q.empty()){
    while (!q.empty()) {
      int ele = q.front();
      q.pop();
      s.push(ele);
    }
}
    if(!s.empty()){
        while (!s.empty()) {
          int ele = s.top();
          s.pop();
          q.push(ele);
        }
    }
    return q;
}
