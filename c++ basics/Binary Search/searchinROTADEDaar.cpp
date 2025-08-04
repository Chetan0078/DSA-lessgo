#include<bits/stdc++.h>
using namespace std;
//we just check at is point that the part (low,high)is sorted or not 
int searchInRotadedArr1(vector<int>nums, int x){//unique elements
    int n=nums.size();
    int low = 0, high= n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==x){
            return mid;
        }

        if(nums[low]<=nums[mid]){
            if(nums[low]<=x && x<=nums[mid]){
                high = mid-1;
            }else low = mid+1;
        }
        else{
            if(nums[mid]<=x&&x<=nums[high]){
                low=mid-1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return -1;
}
bool searchInRotadedArr2(vector<int>nums, int x){//can have duplicates
    //edge case = x = high = low = mid
    int n=nums.size();
    int low = 0, high= n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
            low = low+1;
            high = high-1;
            continue;
        }
        if(nums[mid]==x){
            return true;
        }

        if(nums[low]<=nums[mid]){
            if(nums[low]<=x && x<=nums[mid]){
                high = mid-1;
            }else low = mid+1;
        }
        else{
            if(nums[mid]<=x&&x<=nums[high]){
                low=mid-1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return false;
}
int main(){
    vector<int> vec1 = {7,8,9,1,2,3,4,5,6};
    vector<int> vec2 = {3,1,2,3,3,3,3,3};
    int x = 3;
    if(searchInRotadedArr2(vec2,x)) cout<<"true";
    else cout<<"false";
}