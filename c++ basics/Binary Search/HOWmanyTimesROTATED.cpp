#include<bits/stdc++.h>
using namespace std;
int HOWmanyTIMESrotated(vector<int> nums){// number of times rotated is the index of min element array
    int n=nums.size();
    int low =0, high = n-1;
    int ans = 0;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<low<<" "<<mid<<" "<<high<<endl;
        if(nums[low]<=nums[mid]){
            ans = low;
            low = mid+1;
        }
        else{
            ans = mid;
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    //                {0,1,2,3,4,5,6,7,8,9,10,11}
    vector<int> vec = {3,4,5,5,6,7,7,7,7,1,2,3};
    int ans = HOWmanyTIMESrotated(vec);
    cout<<ans;
}
//??????????????????????????????????????????????????????????????????