#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        long long n = nums.size();
        long long res = 0;
        unordered_map<int, int> freq;
        long long pairs = (n * (n - 1)) / 2;
        for (int i = 0; i < n; i++)
        {
            int key = nums[i] - i;
            res += freq[key];
            freq[key]++;
        }
        return pairs - res;
    }
};
int main(){
    Solution s;
    vector<int> a ={2,3,5,1,5,3,6,4,7,4,3,6};
    cout<<s.countBadPairs(a);
}