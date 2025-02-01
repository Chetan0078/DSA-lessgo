#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int i =0;
        int n=nums.size();
        while(i<n-1){
            if((nums[i]%2==0&&nums[i+1]%2==0)||(nums[i]%2!=0&&nums[i+1]%2!=0)){
                return false;
            }
            i++;
        }
        return true;   
    }
};
int main(){
    Solution s;
    vector<int> arr = {4,3,1,6};
    if(s.isArraySpecial(arr)){
        cout<<"special";
    }else cout<<"not special";
}