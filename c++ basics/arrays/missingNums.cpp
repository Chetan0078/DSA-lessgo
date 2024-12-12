#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> nums)
{
    int n = nums.size();
    int totalSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : nums)
    {
        actualSum += num;
    }
    return totalSum - actualSum;
}

int main()
{
    vector<int> arr = {0, 1, 2, 4, 5, 6, 7, 8};
    cout << missingNum(arr);
}