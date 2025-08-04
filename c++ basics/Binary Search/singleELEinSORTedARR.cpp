#include<bits/stdc++.h>
using namespace std;
int singleELEinSORTedARR(vector<int> nums){// my answer which is wrong
    int ans;
    int n= nums.size();
    int low =0, high= n-1;
    if(nums[high]!=nums[high-1])return nums[high];
    if(nums[low]!=nums[low+1])return nums[low];
    while(low<=high){
        int mid = (low+high)/2;
        cout<<low<<" "<<mid<<" "<<high<<endl;
        if(nums[mid]==nums[mid-1]){
            high = mid-1;
        }
        else if(nums[mid]==nums[mid+1]){
            low = mid+1;
        }
        else{
            ans = nums[mid];
            break;
        }
    }
    return ans;
}
int singleELEinSORTedARR2(vector<int> nums){//GOAT's ans...
    // we gonna use index values for our partition
    int n=nums.size();
    int low=0,high=n-1;
    int ans = 0;
    if(nums[high]!=nums[high-1])return nums[high];
    if(nums[low]!=nums[low+1])return nums[low];
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])return nums[mid];
        if(nums[mid]==nums[mid-1]&& (mid-1)%2==0){
            low = mid+1;
        }
        else if(nums[mid]==nums[mid+1]&& (mid)%2==0){
            low = mid+1;
        }
        if(nums[mid]==nums[mid-1]&& (mid-1)%2!=0){
            high = mid-1;
        }
        else if(nums[mid]==nums[mid+1]&& (mid)%2!=0){
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    //              {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22}
    vector<int> vec={1,1,2,2,3,3,4,4,5,5,6 ,7 ,7 ,8 ,8 ,9 ,9 ,10,10,11,11,12,12};
    // observation is if the order doesnt change then every first element have even index and after the 
    // single element this order become diff the first element will have odd index
    cout<<singleELEinSORTedARR2(vec);
}