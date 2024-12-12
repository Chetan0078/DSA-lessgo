#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumBeauty(vector<int> &flowers, int k)
    {
        // Calculate the maximum value in the vector and set the range accordingly,
        // considering the range needs to be large enough to account for adding k to both sides.
        int maxValue = *max_element(flowers.begin(), flowers.end()) + k * 2 + 2;

        // Create a differential array with the size based on calculated range.
        vector<int> diffArray(maxValue, 0);

        // Iterate over the original array and update the differential array accordingly.
        for (int flower : flowers)
        {
            // Increase the count at the start of the window (flower's position).
            diffArray[flower]++;
            // Decrease the count at the end of the window.
            diffArray[flower + k * 2 + 1]--;
        }

        // Initialize variables to track the sum and the maximum beauty so far.
        int currentSum = 0, maxBeauty = 0;

        // Iterate over the differential array and calculate the prefix sum,
        // which gives us the running count of flowers.
        for (int count : diffArray)
        {
            // Update the running sum with the current count.
            currentSum += count;
            // Calculate the maximum beauty seen so far by taking the maximum of the
            // current running sum and the previous maxBeauty.
            maxBeauty = max(maxBeauty, currentSum);
        }

        // Return the maximum beauty that can be achieved.
        return maxBeauty;
    }
};
