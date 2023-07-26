#include <bits/stdc++.h> 
vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    // Write your code here.
        unordered_map<string,vector<string> > mymap;
        string temp;
        for(int i =0;i<n;++i)
        {
            temp = inputStr[i];
            sort(inputStr[i].begin(),inputStr[i].end());
            mymap[inputStr[i]].push_back(temp);
        }
        vector<vector<string> > result;
        for(auto it=mymap.begin();it!=mymap.end();++it)
            result.push_back(it->second);
               return result;
}
