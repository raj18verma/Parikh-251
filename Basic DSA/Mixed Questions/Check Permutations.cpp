// BruteForce Approach (using sorting)

#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    if(str1.length()!=str2.length()) return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if (str1 == str2)
    return true;
    return false;
}

// T.C --> O(NlogN + NlogN)
// S.C --> O(1)


// Better Approach (HASHING)

#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    int len1 = str1.length();
    int len2 = str2.length();

    if (len1 != len2)
        return false;

    unordered_map<char, int> map;

    for (int i = 0; i < len1; i++) {
        char ch = str1[i];
        if (map.find(ch) != map.end()) {
            map[ch]++;
        } else {
            map[ch] = 1;
        }
    }

    for (int i = 0; i < len2; i++) {
        char ch = str2[i];
        if (map.find(ch) != map.end()) {
            if (map[ch] == 0) {
                return false;
            } else {
                map[ch]--;
            }
        } else {
            return false;
        }
    }

    return true;
}

// T.C --> O(N)
// S.C -->  O(k), where k is the number of distinct characters in the input strings str1 and str2. In the worst case, if all characters in the strings are distinct, the map will store k entries. However, in practice, k is generally limited to the size of the character set (usually 26 for lowercase English letters). Therefore, the space complexity is considered O(1) or constant for practical purposes.


//Optimal Approach (for loop)

#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){

    vector<int> a(26,0);
    if(str1.length()!=str2.length()) return false;
    for(int i=0;i<str1.length();i++){
        a[str1[i]-'a']++;
        a[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0) return false;
    }
    return true;
}

// T.C --> O(2N)
// S.C --> O(1)
