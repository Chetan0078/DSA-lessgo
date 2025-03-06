#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = m * m; // Total numbers in the grid
            vector<int> freq(n + 1, 0); // Frequency array to count occurrences
            vector<int> result(2);
    
            // Count occurrences of each number
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    freq[grid[i][j]]++;
                }
            }
    
            // Find the missing and repeated number
            for (int i = 1; i <= n; i++) {
                if (freq[i] == 2) result[0] = i; // Repeated number
                if (freq[i] == 0) result[1] = i; // Missing number
            }
            return result;
        }
    };
int main(){
    
}    