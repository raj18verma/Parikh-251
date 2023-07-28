// Problem Link:- https://www.codingninjas.com/studio/problems/selection-sort_981162?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[mini])
            mini=j;
        }
        swap(arr[mini],arr[i]);
    }
}
