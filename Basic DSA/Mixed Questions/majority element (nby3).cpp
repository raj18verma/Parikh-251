// Question Link:- https://www.codingninjas.com/studio/problems/893027?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    int cnt1=0, cnt2=0;
    int ele1=INT_MIN;
    int ele2=INT_MIN;


// applying the Extended Boyer Moore's Voting Algorithm:
    for(int i=0; i<n; i++){
        if(cnt1==0 && ele2!=arr[i]){
            cnt1++;
            ele1=arr[i];
        }else if(cnt2==0 && ele1!=arr[i]){
            cnt2++;
            ele2=arr[i];
        }

        else if(arr[i]==ele1)cnt1++;
        else if(arr[i]==ele2)cnt2++;

        else{
            cnt1--, cnt2--;
        }
    }
    vector<int>temp; // list of answers

    // Manually check if the stored elements in
    // el1 and el2 are the majority elements:
    cnt1=0, cnt2=0;
    for(int i=0; i<n; i++){
        if(ele1==arr[i])cnt1++;
        if(ele2==arr[i])cnt2++;
    }
    int mini= (int)(n/3)+1;
    if(cnt1>=mini) temp.push_back(ele1);
    if(cnt2>=mini) temp.push_back(ele2);


    // if it is told to sort the answer array:
    sort(temp.begin(),temp.end());
    return temp;

}
