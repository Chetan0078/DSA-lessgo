#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    const int mod = 1e9 + 7;

    int countGoodStrings(int low, int high, int zero, int one)
    {
        // Initialize a dp array to store the count of good strings of each length
        vector<int> dp(high + 1, 0);

        // There is exactly one good string of length 0 (the empty string)
        dp[0] = 1;

        int result = 0;

        // Iterate over all possible lengths from 1 to high
        for (int i = 1; i <= high; ++i)
        {
            // If adding `zero` results in a valid length, add its contribution
            if (i >= zero)
            {
                dp[i] = (dp[i] + dp[i - zero]) % mod;
            }
            // If adding `one` results in a valid length, add its contribution
            if (i >= one)
            {
                dp[i] = (dp[i] + dp[i - one]) % mod;
            }
            // Add to the result if the current length is within the range [low, high]
            if (i >= low)
            {
                result = (result + dp[i]) % mod;
            }
        }

        return result;
    }
};
int main()
{
}