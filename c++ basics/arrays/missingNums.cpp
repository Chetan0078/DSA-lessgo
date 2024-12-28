#include <bits/stdc++.h>
using namespace std;


int missingNum(vector<int> nums)
{ // sum approach
    int n = nums.size();
    int totalSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : nums)
    {
        actualSum += num;
    }
    return totalSum - actualSum;
}
int missinum(vector<int> nums){//it fail when the array is in not sorted so we have to sort the array first
    int xorr = 0;
    int n= nums.size();
    for(int i = 0;i<nums[n-1];i++){
        xorr = nums[i]^i;
        if(xorr!=0)return i;
    }
    return -1;  
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    cout << missinum(arr);
}