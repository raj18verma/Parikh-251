#include <bits/stdc++.h> 

long long kadane(vector<int>&arr, int n){
	long long int maxi=INT_MIN;
	long long int sum=0;

	for(int i=0; i<n; i++){
		sum+=arr[i];
		maxi=max(sum,maxi);

		if(sum<0){
			sum=0;
		}
	}
	return maxi;
}

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	// Write your code here.
	long long kadanesum=kadane(arr,n);

	if(k==1) return kadanesum;

	long long current_prefixsum=0, current_suffixsum=0, max_prefixsum=INT_MIN, max_suffixsum=INT_MIN;

	for(int i=0; i<n; i++){
		current_prefixsum+=arr[i];
		max_prefixsum=max(max_prefixsum,current_prefixsum);
	}
	long long totalsum=current_prefixsum;

	for(int i=n-1; i>=0; i--){
		current_suffixsum+=arr[i];
		max_suffixsum=max(max_suffixsum,current_suffixsum);
	}
	long long ans;
	if(totalsum<0){
		ans=max(max_prefixsum+max_suffixsum, kadanesum);
	}else{
		ans=max(max_prefixsum+max_suffixsum+(totalsum*(k-2)),kadanesum);
	}
	return ans;
}
