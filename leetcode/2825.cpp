#include <bits/stdc++.h>
using namespace std;

bool checkSubSeq(string str1, string str2) {
   int n = str1.size(), m = str2.size();
        int j = 0;
        
        for (int i = 0; i < n && j < m; ++i) {
            if (str1[i] == str2[j]) {
                ++j;
            } 
            else if ((str1[i] == 'z' && 'a' == str2[j]) || (str1[i] + 1 == str2[j])) {
                ++j;
            }
        }
        
        return j == m;
}

int main() {
    string str1 = "zc";
    string str2 = "ad"; 

    if (checkSubSeq(str1, str2)) {
        cout << "true";
    } else {
        cout << "false";
    }
}
