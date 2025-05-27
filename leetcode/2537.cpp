#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, long long> freq;
        int n = nums.size();
        int left = 0;
        long long pairs = 0;
        long long result = 0;

        for (int right = 0; right < n; ++right) {
            pairs += freq[nums[right]];
            freq[nums[right]]++;

            while (pairs >= k) {
                result += (n - right); 
                freq[nums[left]]--;
                pairs -= freq[nums[left]];
                left++;
            }
        }

        return result;
    }
};
int main(){
    
}
