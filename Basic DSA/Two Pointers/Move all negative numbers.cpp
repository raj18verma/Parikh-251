// https://www.codingninjas.com/studio/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=3
//Naive Approach -->
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n=nums.size();
    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<n; i++){
        if(nums[i]<0){
            v1.push_back(nums[i]);
        }else{
            v2.push_back(nums[i]);
        }
    }
    v1.insert(v1.end(),v2.begin(),v2.end());
    return v1;
}


// Two Pointer Approach -->
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int end = nums.size()-1;
    int start =0;
    while(end > start){
        // 0 is conted as +ve
        if(nums[start] >= 0 && nums[end] < 0){
            swap(nums[start], nums[end]);
            ++start;
            --end;
        }
        if(nums[start] < 0){
            ++start;
        }
        if(nums[end] >= 0){
            --end;
        }
    }
    return nums;
}
