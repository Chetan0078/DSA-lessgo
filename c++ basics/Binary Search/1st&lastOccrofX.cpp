#include<bits/stdc++.h>
using namespace std;
//either it can be lb and ub-1;
pair<int, int> firstandlastOccr(vector<int> nums, int x){
    int n = nums.size();
    int low = 0, high = n-1;
    pair<int,int> ans = {-1,-1};

    // First Occurrence
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] == x){
            ans.first = mid;
            high = mid - 1; // keep searching in left half
        }
        else if(nums[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    // Reset for last occurrence
    low = 0, high = n - 1;

    // Last Occurrence
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] == x){
            ans.second = mid;
            low = mid + 1; // keep searching in right half
        }
        else if(nums[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {1,3,5,9,9,9,9,9,14,121};
    int x = 15;
    pair<int,int> res = firstandlastOccr(vec, x);
    cout << res.first << " " << res.second;
}
