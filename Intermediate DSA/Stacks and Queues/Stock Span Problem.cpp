#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    stack<pair<int,int>>s;
    vector<int>ans1;

    int n=price.size();

   for(int i=0;i<n;i++){
       if(i==0){
           ans1.push_back(-1);
           s.push({price[i],i});
       }
       else if(s.top().first<=price[i]){
           while(!s.empty()&&s.top().first<=price[i]){
               s.pop();
           }
           if(s.empty()){
               ans1.push_back(-1);
           }
           else{
               ans1.push_back(s.top().second);
           }
           s.push({price[i],i});
       }
       else{
           ans1.push_back(s.top().second);
           s.push({price[i],i});
       }
   }
vector<int>ans;
for(int i=0;i<n;i++){
    ans.push_back(i-ans1[i]);
}
    return ans;
}
