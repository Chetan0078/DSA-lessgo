#include <bits/stdc++.h>
using namespace std;
int better(vector<int> &nums)
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
int optimal(vector<int>&nums){
    int ele = -1, count = 0;
    for(int num:nums){
        if(count == 0){
            ele = num;
            count = 1;
        }else if(num == ele)count++;
        else count--;
    }
    //check 
    count = 0;
    for(int num: nums){
        if(num==ele)count++;
    }
    if(count>nums.size()/2)return ele;
    else return -1;
}
int main(){
    vector<int> a = {1,0,2,2,1,1};
    cout<<optimal(a);
}