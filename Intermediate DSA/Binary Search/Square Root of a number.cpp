// Question Link:- https://www.codingninjas.com/studio/problems/square-root-integral_893351?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

int floorSqrt(int n)
{
    // Write your code here.
    int low=1;
    int high=n;

    while(low<=high){
        long long mid=(low+high)/2;
        long long val=(mid*mid);

        if(val<=n){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return high;
}
