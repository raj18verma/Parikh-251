#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    string ans;
    int count =1;

    char s=message[0];
    for(int i=1;i<=message.length();i++){
        if(message[i]==s){
            count++;
        }else{
            ans+=message[i-1];
            ans+=to_string(count);
            count =1;
            s=message[i];
        }
    }

    return ans;
}