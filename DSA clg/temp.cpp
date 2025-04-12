#include<bits/stdc++.h>
using namespace std;
void flip(vector<int> x,int i){
    if(x[i]==0)x[i]=1;
    else x[i]=0;
    if(x[i+1]==0)x[i+1]=1;
    else x[i+1]=0;
    if(x[i+2]==0)x[i+2]=1;
    else x[i+2]=0;

}
int minOperations(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    if(sum<k)return sum;
    return sum%k;
}
int main(){
    vector<int> vec = {5,2,3};
    flip(vec,0);
    int k = 8;
    // for(auto x:vec){
    //     cout<<x<<" ";
    // }
    cout<<minOperations(vec,k);
}