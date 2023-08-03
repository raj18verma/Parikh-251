#include <bits/stdc++.h> 
int minimumOperations(string &a, string &b)
{
    //  Write your code here.
    int i=0;
    int j=a.length()-1;
    int c =0;

    while(i<=j){
        if(i==j){
          if (a[i] != b[i]){
            a[i]=b[i];
            c++;
          }
            i++;
            j--;
        }
        else if(a[i]==b[i]){
            if(a[j]!=b[j]){
                c++;
                a[j]=b[j];
                i++;
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        else{
            if(a[j]==b[j]){  
                a[i]=b[i];
                c++;
                i++;
                j--;
            }
            else if(b[i]==a[j]){  
               char temp=a[j];
               a[j]=a[i];
               a[i]=temp;
               if (a[j] != b[j]){
                 c++;
                 a[j]=b[j];
               }
               i++;
               j--;
            }
            else if(b[j]==a[i]){
               char temp=a[j];
               a[j]=a[i];
               a[i]=temp;
               if (a[i] != b[i]){
                 c++;
                 a[i]=b[i];
               }
               i++;
               j--;
            }
            else if(a[i]==a[j]&&b[i]==b[j]){   
              char temp = a[i];
              a[i]=b[j];
              b[j]=temp;
               i++;
               j--;
            }
            else if(b[i]==b[j]){
                c++;
                char temp=a[i];
                a[i]=b[j];
                b[j]=temp;
                a[j]=b[j];
                i++;j--;
            } 
            else{
              a[i]=b[i];
              a[j]=b[j];
              c = c + 2;
              i++;
              j--;
            }
        }
    }
    if(a==b) return c;
    else return -1;
}
