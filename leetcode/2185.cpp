#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int result = 0;

        for (const string& word : words) {
            if (word.substr(0, pref.size()) == pref) {
                result++;
            }
        }
        return result;
    }
};
int main(){
    
}