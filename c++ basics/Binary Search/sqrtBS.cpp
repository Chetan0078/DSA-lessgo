#include<bits/stdc++.h>
using namespace std;
int sqrtBS(int n){
    int low =0,high=n/2;
    int ans = INT_MIN;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<low<<" "<<mid<<" "<<high<<endl;
        if(mid*mid==n)return mid;
        if(mid*mid>n)high = mid-1;
        else if(mid*mid<n){
            ans = max(mid,ans);
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int x = 28;
    cout<<sqrtBS(x);
}