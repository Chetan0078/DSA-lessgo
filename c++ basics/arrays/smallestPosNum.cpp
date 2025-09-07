#include<bits/stdc++.h>
using namespace std;
int smallestPosNum(vector<int> arr) {
    int ans = 1;
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == ans) {
            ans++;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {5, 3, 2, 5, 1};
    cout<<smallestPosNum(vec);
}