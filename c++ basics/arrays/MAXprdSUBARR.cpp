#include<bits/stdc++.h>
using namespace std;
int MAXprdSUBARR(vector<int> arr){
    int n=arr.size();
    int ans = INT_MIN;
    int prefix = 1,suffix =1;
    for(int i=0;i<n;i++){
        if(prefix == 0)prefix = 1;
        if(suffix == 0)suffix = 1;
        prefix = prefix*arr[i];
        suffix = suffix*arr[n-i-1];
        ans = max(ans,max(prefix, suffix));
    }
    return ans;
}

int main(){
    vector<int> vac = {3,4,-1,-2,0,5,8,-1,0,9,0,6};
    cout<<MAXprdSUBARR(vac);
}