//Problem Link:- https://www.codingninjas.com/studio/problems/is-subsequence_892991?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    // Write your code here.
    if(str1=="")return true;

    int j=0; // string str1

    //i is pointer for string str2
    for(int i=0; i<str2.size(); i++){
        if(str2[i]==str1[j]){
            j++;
        }if(j==str1.size())
        return true;
    }
    return false;
}


//yt reference video --> https://youtu.be/GKdDshno8-A
