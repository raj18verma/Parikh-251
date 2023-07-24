void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
  int ans=0;   

  int startingRow=0;   
  int startingCol=0;   
  int endingRow=nRows-1; 
  int endingCol=nCols-1;

  int count=0;   
  int total=nRows*nCols;

  while(count<total){       
      for(int index = startingCol; count<total && index<=endingCol;index++){           
          cout<< input[startingRow][index] <<" ";           
          count++;       
          }       
          startingRow++;

      for(int index=startingRow;count<total && index<=endingRow;index++){           
          cout<< input[index][endingCol] << " ";           
          count++;       
          }       
          endingCol--;

      for(int index=endingCol;count<total && index>=startingCol;index--){           
          cout<< input[endingRow][index] << " ";           
          count++;       
          }       
          endingRow--;

      for(int index=endingRow;count<total && index>=startingRow;index--){           
          cout << input[index][startingCol] << " ";           
          count++;       
          }       
          startingCol++;
          ans++; 
          }
}