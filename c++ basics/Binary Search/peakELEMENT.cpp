#include<bits/stdc++.h>
using namespace std;
int peakELEMENT(vector<int> nums){
    int n=nums.size();
    int ans = INT_MAX;
    int low =0,high = n-1;
    if(nums[0]>nums[1])return nums[0];
    if(nums[n-1]>nums[n-2])return nums[n-1];
    if(n==1)return nums[0];
    while(low<=high){//for only one peak
        int mid = (low+high)/2;
        cout<<low<<" "<<mid<<" "<<high<<endl;
        if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])return nums[mid];
        if(nums[mid]>=nums[mid-1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return nums[n-1];
    
}
int main(){
    //               {0,1,2,3,4,5,6,7,8,9}
    vector<int>vec = {1,5,3,9,8,8,6,5,4,3};
    cout<<peakELEMENT(vec);
}