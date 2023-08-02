#include <bits/stdc++.h> 
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {
	// Write your code here.
	vector<int> result(n * m); // Initialize result vector with size n * m
    int idx = 0; // Initialize index of result vector
    k = k % m; // Reduce number of rotations to less than m
    for (int i = 0; i < n; i++) {
        for (int j = m - k; j < m; j++) {
            result[idx++] = mat[i][j];
        }
        for (int j = 0; j < m - k; j++) {
            result[idx++] = mat[i][j];
        }
    }
    return result;
}
