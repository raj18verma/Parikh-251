// Problem Link:- https://www.codingninjas.com/studio/problems/container-with-most-water_873860?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube

int maxArea(vector<int>& height) {
    // Write your code here.
    int n=height.size();
    int left=0;
    int right=n-1;
    int ans=0;

    while(left<right){
        ans=max(min(height[left],height[right])*(right-left),ans);

        if(height[left]>height[right]){
            right--;
        }else{
            left++;
        }
    }
    return ans;
}
