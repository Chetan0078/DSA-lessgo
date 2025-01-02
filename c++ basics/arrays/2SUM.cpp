#include <bits/stdc++.h>
using namespace std;

vector<int> answerHash(vector<int> &nums, int target) {
    map<int, int> mpp;
    vector<int> result;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int require = target - nums[i];
        if (mpp.find(require) != mpp.end()) {
            result.push_back(mpp[require]);
            result.push_back(i);
            return result;
        }
        mpp[nums[i]] = i;
    }
    result.push_back(-1);
    return result;
}
vector<int> answerPoint(vector<int> &nums, int target) {
    vector<int> result;
    int n = nums.size();
    
    int left = 0;
    int right = n-1;
    sort(nums.begin(),nums.end());
    while(left<right&&left<n&&right>0){
        int our = nums[left]+nums[right];
        if(our>target)right--;
        else if(our<target)left++;
        else if(our == target){
            result.push_back(left);
            result.push_back(right);
            return result;
        }
    }
    result.push_back(-1);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 8, 7, 9, 5};
    int k = 11;
    vector<int> val = answerPoint(nums, k);
        cout << "Pair indices: " << val[0] << " " << val[1] << endl;
        cout << "No pair found" << endl;
    return 0;
}
