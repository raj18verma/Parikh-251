#include <bits/stdc++.h> 

string helperForEvenLength(string &s,int i,int j){
    while(i>=0 && j<s.size()){
            if(s[i]!='9'&& s[j]!='9'){
                s[i]  = ((s[i]-48)+1)+48;
                
                s[j] = ((s[j]-48)+1)+48;
                
                break;
            }else{
                s[i] = '0';
                s[j] = '0';
                i--;
                j++;
            }
        }
        return s;
}
bool isPalindrome(string &s,int l){
    int i = 0;
    int j = l-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void makePalindrome(string &s,int l){
    int i = 0;
    int j = l-1;
    while(i<j){
        s[j] = s[i];
        i++;
        j--;
    }
}
bool biggerThenOriginal(string &s,string &temp,int length){
    for(int i=0;i<length;i++){
        if(s[i]<temp[i]){
            return false;
        }else if(s[i]>temp[i]){
            return true;
        }
    }
    return true;
}

string nextLargestPalindrome(string s, int length){
	// Write your code here.
	string temp = s;
    bool check = isPalindrome(s,length);
    if(check == false){
        makePalindrome(s,length);
        bool isBig = biggerThenOriginal(s,temp,length);
    
        if(isBig==true){
           return s;
        }
    }
    
    bool allnine = true;
    for(int i=0;i<length;i++){
        if(s[i]!='9'){
            allnine = false;
            break;
        }
    }
    string ans = "";
    if(allnine){
        for(int i=0;i<length-1;i++){
            ans+='0';
        }
        ans = '1'+ans+'1';
        return ans;
    }else if(length%2==0){
        int i = length/2-1;
        int j = length/2;
        return helperForEvenLength(s,i,j);
    }else{
        int mid = length/2;
        int i = mid-1;
        int j = mid+1;
        if(s[mid]!='9'){
            s[mid] = ((s[mid]-48)+1)+48;
            return s;
        } else {
          s[mid] = '0';
          return helperForEvenLength(s, i, j);
        }
    }
}