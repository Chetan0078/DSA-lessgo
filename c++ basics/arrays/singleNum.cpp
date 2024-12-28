#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int i=0;i<nums.size();i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};
int main(){
    Solution s;
    vector<int> num = {1,1,2,2,3,3,4,4,5};
    cout<<s.singleNumber(num);
}
