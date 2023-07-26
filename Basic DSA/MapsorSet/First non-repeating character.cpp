#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  unordered_map<char, int> mp;
  int n=str.length();
  for(int i=0; i<n; i++){
    mp[str[i]]++;
  }
  for(int i=0; i<n; i++){
    if(mp[str[i]]==1){
      return str[i];
    }
  }
  return str[0];
}
