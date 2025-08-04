#include <bits/stdc++.h>
using namespace std;

vector<int> repeatingMissingNum(vector<int> nums) {//better
    int n = nums.size();
    vector<int> ans;
    vector<int> hash(n,0);
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==2)ans.push_back(i);
        if(hash[i]==0)ans.push_back(i);
    }
    return ans;
}
vector<int> repeatingMissingNum1(vector<int> nums) {//optimal maths
    int n = nums.size();
    int x = 0, y = 0;
    int sn = (n*(n+1))/2;
    int sn2 = (n*(n+1)*(2*n+1))/6;
    int sum = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        sum2 += nums[i]*nums[i];
    }
    int a = sn - sum;
    int b = (sn2 - sum2)/a;
    x = (a+b)/2;
    y = (b-a)/2;
    return {x,y};
}
vector<int> repeatingMissingNum2(vector<int> nums){//optimal xor
    // remaining to do
}

int main() {
    vector<int> vec = {1, 1, 2, 3, 4, 5}; // Missing: 6, Repeating: 1
    for (auto it : repeatingMissingNum1(vec)) {
        cout << it << "\n";
    }
}
