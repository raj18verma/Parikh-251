#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    int ans=0;
    vector<int> r_map(k,0);
    long long int sum=0;
    r_map[0]++;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0){
            rem+=k;
        }
        if(r_map[rem]){
            ans+=r_map[rem];
        }
        r_map[rem]++;
    }
    return ans;
}
