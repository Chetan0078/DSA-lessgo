#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> result;
        for (int i = k; i > 0; i--) {
            int low = nums[0];
            for (int j = 0; j < nums.size(); j++){
                if (low > nums[j]){
                    low = nums[j];
                }
            }
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == low) {
                    nums[j] = multiplier * low;
                    break;
                }
            }
        }
        return nums;
    }
};

int main(){
    
}