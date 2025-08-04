#include<bits/stdc++.h>
using namespace std;

int searchMIN1(vector<int> nums){//contains unique elements;
    int n=nums.size();
    int low = 0,high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<nums[low]<<" "<<nums[high]<<endl;
        ans = min(ans,nums[mid]);
        if(nums[low]<=nums[high]){// if the whole arr or part is sorted then simply low is the smallest element
            return nums[low];
            break;
        }
        if(nums[low]<=nums[mid]){
            ans=min(nums[low],ans);
            low = mid+1;
        }
        else{
            high = mid-1;
            ans = min(nums[mid], ans);
        }
    }
    return ans;
}
int searchMIN2(vector<int> nums){//contains duplicates 
    int n=nums.size();
    int low = 0,high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<nums[low]<<" "<<nums[high]<<endl;
        ans = min(ans,nums[mid]);
        if(nums[low]<nums[mid]){
            ans=min(nums[low],ans);
            low = mid+1;
        }
        else{
            high = mid-1;
            ans = min(nums[mid], ans);
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {5,6,7,9,5,5,5,5,5,5,5,5};
    int ans = searchMIN2(vec);
    cout<<ans;
}