// Problem Link:- https://www.codingninjas.com/studio/problems/pair-sum_1171154?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
    int i = 0;
    int j = n-1;
    int count = 0;
	
    while(i<j){
          if (arr[i] + arr[j] == target) {
            count++;
            i++;
            j--;
          }
        if(arr[i]+arr[j]>target)
        j--;
        if(arr[i]+arr[j]<target)
        i++;
        }
        if(count>0)
        return count;
        else
        return -1;
}
