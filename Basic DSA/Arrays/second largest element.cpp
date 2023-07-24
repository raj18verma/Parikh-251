#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
  sort(arr.begin(), arr.end());
  int i = n - 2;
  while (i >= 0 && arr[i] == arr[i + 1]) {
    i--;
  }
  if (i == -1) {
    return -1;
  } else {
    return arr[i];
  }
}