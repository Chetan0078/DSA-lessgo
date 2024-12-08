#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int> nums){
    int result;
    for (int i = 0; i <= nums.size(); i++) {
        if (i >= nums.size() || i != nums[i]) {
            result = i;
            break;
        }
    }
    return result;
}

int main(){
    vector<int> arr={0,1,2,4,5,6,7,8};
    cout<<missingNum(arr);

}