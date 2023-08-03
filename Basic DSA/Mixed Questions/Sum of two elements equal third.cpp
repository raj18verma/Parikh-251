// Bruteforce Approach

#include <bits/stdc++.h> 
vector<int> findTriplets(vector<int> &arr, int n) 
{
    //Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]==arr[k]) 
                return {arr[i], arr[j], arr[k]};
            }
        }
    }
    return {};
}


// Better Approach 

#include <bits/stdc++.h> 
vector<int> findTriplets(vector<int> &arr, int n) 
{
    //Write your code here.
    sort(arr.begin(),arr.end());
    for(int k=n-1; k>1; k--){
        int j=k-1, i=0;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==arr[k]){
                return {arr[i],arr[j],arr[k]};
            }
            else if(sum<arr[k]){
                i++;
            }else{
                j--;
            }
        }
    }
    return {};
}
