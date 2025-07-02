#include<bits/stdc++.h>
using namespace std;
//optimal
int subarrwithXORk(vector<int> arr, int k) {
    int cnt = 0;
    int xrr = 0;
    unordered_map<int, int> mpp;

    mpp[0] = 1;

    for (int i = 0; i < arr.size(); i++) {
        xrr ^= arr[i]; 

        int x = xrr ^ k;

        if (mpp.find(x) != mpp.end()) {
            cnt += mpp[x];
        }

        mpp[xrr]++;
    }

    return cnt;
}

int main(){
    vector<int> arr = {4,2,2,6,4};
    cout<<subarrwithXORk(arr,6);
}