#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
        int open=0,close=0;
        for(int i=0;i<pattern.size();i++)
        {
            if(pattern[i]=='(') 
            open++;
            else
            {
                if(open==0) 
                close++;
                else 
                open--;
            }
        }
        return(open+close); 
}