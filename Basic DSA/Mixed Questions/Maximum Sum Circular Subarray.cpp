// BruteForce approach (T.C --> O(N2))

#include<bits/stdc++.h>
int kadane(vector<int>&arr, int n){
	int maxi=INT_MIN;
	int sum=0;

	for(int i=0; i<n; i++){
		sum+=arr[i];
		maxi=max(sum,maxi);

		if(sum<0){
			sum=0;
		}
	}
	return maxi;
}

int maxSubarraySum(vector<int> &arr, int n) {
	// Write your code here.
	int ans=0;

	for(int i=0; i<n; i++){
		int x=kadane(arr,n);
		ans=max(x,ans);

		reverse(arr.begin(),arr.begin()+1);
		reverse(arr.begin()+1,arr.end());
		reverse(arr.begin(),arr.end());
	}
	if(ans==0){
		return 
		*max_element(arr.begin(),arr.end());
	}
	return ans;
}



// Optimal Approach (T.C --> O(N))

#include<bits/stdc++.h>
int kadaneMax(vector<int>&arr, int n){
	int maxi=INT_MIN;
	int sum=0;

	for(int i=0; i<n; i++){
		sum+=arr[i];
		maxi=max(sum,maxi);

		if(sum<0){
			sum=0;
		}
	}
	return maxi;
}

int kadaneMin(vector<int>&arr, int n){
	int mini=INT_MAX;
	int sum=0;

	for(int i=0; i<n; i++){
		sum+=arr[i];
		mini=min(sum,mini);

		if(sum>0){
			sum=0;
		}
	}
	return mini;
}

int maxSubarraySum(vector<int> &arr, int n) {
	// Write your code here.
		int sum=accumulate(begin(arr),end(arr),0);

		//2 
		int minSum=kadaneMin(arr,n);

		//3
		int maxSum=kadaneMax(arr,n);

		int circular_sum=sum-minSum;

		if(maxSum>0){
			return max(maxSum,circular_sum);
		}
		return maxSum;
}
