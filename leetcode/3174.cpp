#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string clearDigits(string s) {
            string stk;
            for (char c : s) {
                if (isdigit(c)) {
                    stk.pop_back();
                } else {
                    stk.push_back(c);
                }
            }
            return stk;
        }
    };

    int main(){
        
    }