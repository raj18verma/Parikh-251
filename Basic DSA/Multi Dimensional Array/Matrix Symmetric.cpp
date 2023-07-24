#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
int row=matrix.size();    
for(int i=0;i<row;i++){        
for(int j=0;j<row;j++){           
if(matrix[i][j]!=matrix[j][i]){               
 return 0;            
}        
}       
 return 1;   

 } 
}