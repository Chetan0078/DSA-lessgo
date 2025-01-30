#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    map<int, int> mpp;
    for (int num : nums)
    {
        mpp[num]++;
        if (mpp[num] > nums.size() / 2)
        {
            return num;
        }
    }
    return -1;
}

int main(){
    vector<int> a = {1,1,2,2,1,1};
    cout<<majorityElement(a);
}