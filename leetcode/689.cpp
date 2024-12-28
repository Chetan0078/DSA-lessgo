#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        vector<int> answer(3); // This will store the starting indices of the three subarrays
      
        // Initialize sums of each subarray and maximum sum variables
        int currentSum = 0, firstSubarraySum = 0, secondSubarraySum = 0, thirdSubarraySum = 0;
        int maxFirstSubarraySum = 0, maxFirstSecondSum = 0;
      
        // Indices for tracking the maximum sums for subarrays
        int maxFirstIndex = 0, maxFirstSecondIndex1 = 0, maxFirstSecondIndex2 = 0;
      
        // Loop through the array, starting from the end of the possible third subarray
        for (int i = k * 2; i < nums.size(); ++i) {
            // Increment the sum of each subarray with the next element in the sequence
            firstSubarraySum += nums[i - k * 2];
            secondSubarraySum += nums[i - k];
            thirdSubarraySum += nums[i];
          
            // If we have completed the subarrays (reached full length of k for each)
            if (i >= k * 3 - 1) {
                // Update maximum sum and index for the first subarray if needed
                if (firstSubarraySum > maxFirstSubarraySum) {
                    maxFirstSubarraySum = firstSubarraySum;
                    maxFirstIndex = i - k * 3 + 1;
                }
              
                // Update the sum and indices for the first and second subarray
                if (maxFirstSubarraySum + secondSubarraySum > maxFirstSecondSum) {
                    maxFirstSecondSum = maxFirstSubarraySum + secondSubarraySum;
                    maxFirstSecondIndex1 = maxFirstIndex;
                    maxFirstSecondIndex2 = i - k * 2 + 1;
                }
              
                // Update the total sum and starting indices for all three subarrays
                if (maxFirstSecondSum + thirdSubarraySum > currentSum) {
                    currentSum = maxFirstSecondSum + thirdSubarraySum;
                    answer = {maxFirstSecondIndex1, maxFirstSecondIndex2, i - k + 1};
                }
              
                // Move the window forward by subtracting the outgoing element from each subarray sum
                firstSubarraySum -= nums[i - k * 3 + 1];
                secondSubarraySum -= nums[i - k * 2 + 1];
                thirdSubarraySum -= nums[i - k + 1];
            }
        }
        return answer; // Return the starting indices of the subarrays
    }
};


int main(){
    Solution s;
    vector<int> v = {2,3,4,3,3,4,3,4,6,8,1};
    int k = 2;
    vector<int> my = s.maxSumOfThreeSubarrays(v,k);
    for(int element:my){
        cout<<element<<"  ";       
    }
}