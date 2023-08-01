// Bruteforce Approach:
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d=d%n;
    int temp[d];
    
    for(int i=0; i<d; i++){
        temp[i]=arr[i];            //filled the elements that will be rotated in temp array
    }

    for(int i=d; i<n; i++){
        arr[i-d]=arr[i];          //shifted the remaining elements to the left
    }
    
    for(int i=n-d; i<n; i++){
        arr[i]=temp[i-(n-d)];     //stored the rotated elements that were in temp to back to the original array
    }
    
}

// T.C --> O(n)
// S.C --> O(k) since k array element needs to be stored in temp array

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// T.C --> O(N)
// S.C --> O(1)
