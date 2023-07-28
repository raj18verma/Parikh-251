#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    //  Write your code here
     int count = 0;             
     for(int i=0; i<n-1; i++){
         if(arr[i]>arr[i+1]){
             if(i>0){
                 if(arr[i-1]<=arr[i+1])
                 arr[i]=arr[i-1];
                 else
                 arr[i+1]=arr[i];
             }
             count++;
         }
     }
     return count<=1; //(Return true only when count<=1 else return false)
}


