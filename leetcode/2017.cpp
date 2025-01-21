#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> topSum(n, 0), bottomSum(n, 0);
        
        topSum[n-1] = grid[0][n-1];
        for (int i = n - 2; i >= 0; --i) {
            topSum[i] = topSum[i + 1] + grid[0][i];
        }
        
        bottomSum[0] = grid[1][0];
        for (int i = 1; i < n; ++i) {
            bottomSum[i] = bottomSum[i - 1] + grid[1][i];
        }
        
        long long result = LLONG_MAX;
        
        // Try splitting at each column
        for (int i = 0; i < n; ++i) {
            long long pointsTop = (i + 1 < n) ? topSum[i + 1] : 0;
            long long pointsBottom = (i - 1 >= 0) ? bottomSum[i - 1] : 0;
            
            // Maximum points the second robot can collect
            long long pointsSecondRobot = max(pointsTop, pointsBottom);
            
            // Minimize this value
            result = min(result, pointsSecondRobot);
        }
        
        return result;
    }
};
int main(){
    
}
