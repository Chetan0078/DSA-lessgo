#include<bits/stdc++.h>
using namespace std;

int optimal(vector<int>& nums) {
    int sum = 0;
    int mx=INT_MIN;
    for(int i = 0;i<nums.size();i++){
    sum+=nums[i];
    mx = max(sum,mx);
    if(sum<0)sum = 0;
    }
    return mx;
}
int better(vector<int>& nums) {
    int sum = 0;
    int mx = INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum= 0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            mx = max(mx,sum);
        }
    }
    return mx;
}
int main(){
    
}
