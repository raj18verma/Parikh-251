#include <bits/stdc++.h> 
vector<long long> maxProductCount(vector<int> &arr, int n) {
    // Write your code here.
    //no quadruples formed
    if(n < 4){
        return {0};
    }
    unordered_map<long long int,int>m;
    long long maxi = 0 , ele = 1e19;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            //different indexes
            if(j == i){
                continue;
            }

            //array product can be long long 
            long long x = arr[i];
            x *= arr[j];
            m[x]++;

            //check if current is max or not
            if(m[x] > maxi){
                maxi = m[x];
                ele = x;
            }
            else if(m[x] == maxi){
                ele = min(ele ,x );
            }
        }
    }
    if(maxi == 2){
        return {0};
    }
    //every element is counted twice in maxi
    return { ele , maxi*(maxi/2-1)/4};
}
