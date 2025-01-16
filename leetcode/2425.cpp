#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int result=0;
        if(m%2!=0){
            for(int tp:nums1){
                result ^= tp;
            }
        }
        if(n%2!=0){
            for(int tp:nums2){
                result ^= tp;
            }
        }
        return result;
    }
};
int main(){
    Solution s;
    vector<int> a = {2,1,3};
    vector<int> b = {10,2,5,0};
    cout<<s.xorAllNums(a,b);
}