#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int result1 = 1;
        int n = nums.size();
        int count=1;
        for(int i = 0;i<n-1;i++){
            //inc
            if(nums[i]<nums[i+1]){
                count++;
                result1 = max(count,result1);
            }
            else count = 1; 
        }
        count = 1;
        int result2 = 1;
        for(int i = 0;i<n-1;i++){
            //dec
            if(nums[i]>nums[i+1]){
                count++;
                result2 = max(count,result2);
            }
            else count = 1; 
        }
        return max(result1,result2);
    }
};
int main(){
    
}