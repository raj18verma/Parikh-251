// Problem Link:- https://www.codingninjas.com/studio/problems/873378?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

int countSmallerthanmid(vector<int>&row, int mid){
    int l=0, h=row.size()-1;
    while(l<=h){
        int md=(l+h)/2;
        if(row[md]<=mid){
            l=md+1;
        }else{
            h=md-1;
        }
    }
    return l;
}


int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int low=1, high=1e9;
    int n=matrix.size();
    int m=matrix[0].size();

    while(low<=high){
        int mid=(low+high)/2;

        int count=0;
        for(int i=0; i<n; i++){
            count+=countSmallerthanmid(matrix[i],mid);
        }
        if(count<=(n*m)/2) low=mid+1;
        else high=mid-1;
    }
    return low;
}


