#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int n=arr.size();
    long long int sum1=0;
    for(int i=0; i<n; i++)
        sum1+=arr[i];
        long long int sum2=0;
        int ans=INT_MAX;
    for(int i=0; i<n; i++){
        sum1-=arr[i];
        if (sum1 == sum2) {
          ans = i;
          break;
        }
        sum2 += arr[i];
    }
    if (ans == INT_MAX)
      ans = -1;
    return ans;
}