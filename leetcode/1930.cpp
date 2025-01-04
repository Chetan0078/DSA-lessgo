#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int N = s.size(), left[26] = {}, right[26] = {}, seen[26][26] = {}, ans = 0;
        for (int i = 0; i < N; ++i) right[s[i] - 'a']++;
        for (int i = 0; i < N - 1; ++i) {
            int mid = s[i] - 'a';
            right[mid]--;
            if (i > 0) {
                for (int j = 0; j < 26; ++j) {
                    if (left[j] && right[j] && seen[mid][j] == 0) {
                        seen[mid][j] = 1;
                        ++ans;
                    }
                }
            }
            left[mid]++;
        }
        return ans;
    }
};

int main(){
    
}