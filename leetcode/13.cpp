
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        // Mapping of Roman numerals to their values
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // If the current numeral is less than the next one, subtract it
            if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];
            } else {
                // Otherwise, add it
                result += romanMap[s[i]];
            }
        }
        
        return result;
    }
};
