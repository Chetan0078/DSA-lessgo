
#include<bits/stdc++.h>
using namespace std;

//mine solution with little bug i'll solve it later;
/*class Solution {
public:
    int maximumLength(string s) {
        if (s.size() < 3) return -1;
        int n=-1;
        map <char,int> list;
        //pre compute
        for(int i=0;i<s.size();i++){
            list[s[i]]+=1;
        }
        int mx = 0;
        int cnt = 0;
        char key;
        for(int i = 0;i<s.size();i++){
            if(i==0||s[i]==s[i-1]){
                cnt++;
                mx = max(mx,cnt);
                key = s[i];
            }else cnt = 0;

            if(list[key]>2){
                n = 0;
                n = list[key]-2;
                return n;
            }
        } 
        return n;
    }
};*/


class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        int l = 0, r = n;
        auto check = [&](int x) {
            int cnt[26]{};
            for (int i = 0; i < n;) {
                int j = i + 1;
                while (j < n && s[j] == s[i]) {
                    ++j;
                }
                int k = s[i] - 'a';
                cnt[k] += max(0, j - i - x + 1);
                if (cnt[k] >= 3) {
                    return true;
                }
                i = j;
            }
            return false;
        };
        while (l < r) {
            int mid = (l + r + 1) >> 1;
            if (check(mid)) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        return l == 0 ? -1 : l;
    }
};
