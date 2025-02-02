#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            if (count > 1) return false; // More than one violation means not rotated sorted
        }
        
        return true;
    }
};
int main(){
    Solution s;
    vector<int> nums = {3,4,5,1,2};
    if(s.check(nums))cout<<"true";
    else cout<<"false";
    
}