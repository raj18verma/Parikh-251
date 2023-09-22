// Question Link:- https://www.codingninjas.com/studio/problems/799354?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<long long> s;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[i] >= s.top()) {
            s.pop();
        }
        if (s.empty())
            ans.push_back(-1);
        else
            ans.push_back(s.top());

        s.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
