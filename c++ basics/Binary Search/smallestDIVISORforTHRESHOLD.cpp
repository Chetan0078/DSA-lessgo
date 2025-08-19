#include<bits/stdc++.h>
using namespace std;

bool canDivide(int divisor, vector<int>& nums, int threshold){
    long long sum = 0;
    for(int num : nums){
        sum += (num + divisor - 1) / divisor;
        if(sum > threshold) return false; 
    }
    return true;
}

int smallestDIVISORforTHRESHOLD(vector<int>& nums, int threshold){
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(canDivide(mid, nums, threshold)){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {1,2,5,9};
    int threshold = 6;
    cout << smallestDIVISORforTHRESHOLD(vec, threshold);
}
