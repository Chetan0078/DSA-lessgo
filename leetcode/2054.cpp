#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int maxTwoEvents(vector<vector<int>>& events) {
        // Sort events by their end times
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int n = events.size();
        vector<int> maxValueUpTo(n, 0);  // Maximum value up to the current index
        
        // Track the maximum value of a single event up to each index
        maxValueUpTo[0] = events[0][2];
        for (int i = 1; i < n; ++i) {
            maxValueUpTo[i] = max(maxValueUpTo[i - 1], events[i][2]);
        }
        
        int result = 0;
        
        for (int i = 0; i < n; ++i) {
            // Option 1: Take the current event alone
            result = max(result, events[i][2]);
            
            // Option 2: Combine with a previous non-overlapping event
            // Use binary search to find the last event that ends before the current event starts
            int left = 0, right = i - 1, bestIdx = -1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (events[mid][1] < events[i][0]) {
                    bestIdx = mid;  // Possible candidate
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            
            if (bestIdx != -1) {
                result = max(result, events[i][2] + maxValueUpTo[bestIdx]);
            }
        }
        
        return result;
    }
};