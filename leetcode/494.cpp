#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        
        if ((sum + target) % 2 != 0 || (sum + target) < 0) {
            return 0;
        }
        
        int S1 = (sum + target) / 2;
        
        vector<int> dp(S1 + 1, 0);
        dp[0] = 1; 
        
        for (int num : nums) {
            for (int j = S1; j >= num; --j) {
                dp[j] += dp[j - num];
            }
        }
        
        return dp[S1];
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,1,1,1,1,1,1};
    int target = 5;
    cout<<s.findTargetSumWays(nums,target);
}