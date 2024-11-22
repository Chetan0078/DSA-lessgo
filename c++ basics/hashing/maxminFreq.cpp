#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    //pre-computing
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    int max=mpp[mpp.size()-1];
    int min=mpp[0];
    cout<<max << " "<<min;

    
}