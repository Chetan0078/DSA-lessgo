#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool limit(vector<int>& arr, int limit, int k) {
        int n = arr.size();
        k = k - 1;  
        int curr = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > limit) return false;  
            if (curr + arr[i] > limit) {
                k--;
                curr = arr[i];  
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
