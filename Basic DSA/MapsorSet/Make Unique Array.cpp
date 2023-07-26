#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	map<int,int>m;
    for(int i = 0; i < arr.size(); i++) {    
		m[arr[i]]++;  
	}
    return (arr.size()-m.size());
}
