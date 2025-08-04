#include<bits/stdc++.h>
using namespace std;

int LowerBoundBS(vector<int> nums, int x){
    int low = 0;
    int ans = nums.size();
    int high = nums.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]>=x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid - 1;
        }
    }
    // int* lb = lower_bound(nums.begin(), nums.end(), x);?????????????????????? 
}
int UpperBoundBS(vector<int> nums, int x){
    int low = 0;
    int ans = nums.size();
    int high = nums.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]>x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid - 1;
        }
    }
    // int* lb = lower_bound(nums.begin(), nums.end(), x);?????????????????????? 
}
// THE floor and seal value have the same concept 
// floor = max value that eqal or lesser then the target value or max element from left
// seal  = min value that equal or greater than the target value or min form right 
// if target and floor value same than the floor and seal value will be same and equal to the target 
int floorrr(vector<int> nums, int x){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==x){
            ans = nums[mid];
            return ans;
        }
        else if(nums[mid]>x){
            high = mid - 1;
        }
        else {
            ans = nums[mid];
            low = mid + 1;
        }
    }
    return ans;
}
int sealll(vector<int> nums, int x){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==x){
            ans = nums[mid];
            return ans;
        }
        else if(nums[mid]>x){
            high = mid - 1;
            ans = nums[mid];
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {1,2,3,4,6,8,10,13,15,18,21};
    int ans = sealll(vec,5);
    cout<<ans;
}