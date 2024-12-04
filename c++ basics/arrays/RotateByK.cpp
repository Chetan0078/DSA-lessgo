#include<bits/stdc++.h>
using namespace std;

void LeftRotate(vector<int> &arr, int k){
    int n = arr.size();
    k = k % n;
    if(k<0){
        k = n + k;
    }
    if (k == n)return;
    else {
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        reverse(arr.begin(),arr.end());
    }
}

void RotateRight(vector<int> &arr,int k){
    int n = arr.size();
    k = k % n;
    if(k<0){
        k = n + k;
    }
    if (k == n)return;
    else{
        reverse(arr.begin(),arr.begin()+n-k);
        reverse(arr.begin()+n-k,arr.end());
        reverse(arr.begin(),arr.end());
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    RotateRight(arr, 2);
    for(auto it:arr){
        cout<<it<<" ";
    }
}