//leetcode 87

#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     bool scramble(string s1, string s2){
//         if(s1==s2)
//             return true;
//         int len = s1.length();
//         int count[26] = {0};
//         for(int i=0; i<len; i++)
//         {
//             count[s1[i]-'a']++;
//             count[s2[i]-'a']--;
//         }
        
//         for(int i=0; i<26; i++)
//         {
//             if(count[i]!=0)
//                 return false;
//         }
//         for(int i=1; i<=len-1; i++)
//         {
//             if( scramble(s1.substr(0,i), s2.substr(0,i)) && scramble(s1.substr(i), s2.substr(i)))
//                 return true;
//             if( scramble(s1.substr(0,i), s2.substr(len-i)) && scramble(s1.substr(i), s2.substr(0,len-i)))
//                 return true;
//         }
//         return false;
//     }
//     bool isScramble(string s1, string s2) {
//         return scramble(s1,s2);
//     }
// };

// optimised DP solution
class Solution {
public:
    unordered_map<string,bool>memo;
    bool isScramble(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        if (s1==s2) {
            return true;
        }
        if (!isAnagram(s1, s2)) {
            return false;
        }
        return scrambleHelper(s1, s2);
    }
    bool scrambleHelper(string s1, string s2) {
        if (s1==s2) {
            return true;
        }
        string key = s1 + "," + s2;
        if (memo.find(key)!=memo.end()) {
            return memo[key];
        }

        int n = s1.length();
        for (int i = 1; i < n; i++) {
            if (scrambleHelper(s1.substr(0, i), s2.substr(0, i)) &&
                scrambleHelper(s1.substr(i), s2.substr(i))) {
                memo[key]= true;
                return true;
            }
            if (scrambleHelper(s1.substr(0, i), s2.substr(n - i)) &&
                scrambleHelper(s1.substr(i), s2.substr(0, n - i))) {
                memo[key]= true;
                return true;
            }
        }
        memo[key]= false;
        return false;
    }
    bool isAnagram(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        vector<int>count(26,0);
        for (int i = 0; i < s1.length(); i++) {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
        }
        for (int c : count) {
            if (c != 0) {
                return false;
            }
        }
        return true;
    }
};