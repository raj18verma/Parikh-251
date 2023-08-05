#include <bits/stdc++.h> 
vector<vector<int>> sumOfKxKMatrices(vector<vector<int>> &arr, int k){
    // Write your code here.
    int n = arr.size();
    vector<vector<int>> ans;
    int sum = 0;
    int i,j;
     for (i = 0; i < k; i++) {
        for (j = 0; j < k; j++) {
            sum += arr[i][j];
        }
    }

    int ro = i;
    do {
        vector<int> temp;
        temp.push_back(sum);
        int tempsum = sum;

        for (int c = j; c < n; c++) {
            int r = 0;
            while (r < k) {
                tempsum += arr[ro - i + r][c] - arr[ro - i + r][c - j];
                r += 1;
            }
            temp.push_back(tempsum);
        }

        ans.push_back(temp);

        if (ro < n) {
            int p = 0;
            while (p < k) {
                sum += arr[ro][p] - arr[ro - i][p];
                p += 1;
            }
            ro += 1;
        } else {
            break;
        }

    } while (true);

    return ans;
}
