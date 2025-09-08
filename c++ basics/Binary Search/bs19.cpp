#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Check if we can split the array into k subarrays such that each has sum <= limit
    bool limit(vector<int>& arr, int limit, int k) {
        int n = arr.size();
        k = k - 1;  // Number of splits allowed
        int curr = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > limit) return false;  // Important edge case: a single element exceeds limit

            if (curr + arr[i] > limit) {
                k--;
                curr = arr[i];  // Start a new subarray
            } else {
                curr += arr[i];
            }

            if (k < 0) return false;
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());  // At least the max element
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (limit(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
