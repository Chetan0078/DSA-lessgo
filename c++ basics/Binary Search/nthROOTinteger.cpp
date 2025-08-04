#include<bits/stdc++.h>
using namespace std;

int nthPOWER(int mid, int n, int mx){
//0 for excact 
//1 for small
//2 for big
    long long pwr = 1;
    for(int i=1;i<=n;i++){
        pwr = pwr*(long long) mid;
        if(pwr>(long long)mx)return 2;
    }
    if(pwr==(long long)mx)return 0;
    else return 1;
}
int nthROOTofNUM(int m,int n){
    int ans=INT_MAX;
    int low = 0, high = m/2;
    while(low<=high){
        int mid = (high+low)/2;
        if(nthPOWER(mid,n,m)==0){
            return mid;
        }
        else if(nthPOWER(mid,n,m)==1){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    int x = 81;
    int y = 2;
    cout<<nthROOTofNUM(x,y);
}