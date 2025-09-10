#include <bits/stdc++.h>
using namespace std;

int numsOfchoc(vector<int> arr) {
    int n = arr.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int curr = ceil((double)arr[i] / 3); 
        ans += curr;
    }
    return ans;
}
int antProblem(vector<int> arr){
    int n = arr.size();
    int ans = 0;
    int pos = 0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
        if(ans==0)pos++;
    }
    return pos;
}
int incode(int n) {
    string s = "", num = to_string(n);
    for (int i = num.size() - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        int squared = digit * digit;
        s += to_string(squared); }
    return stoi(s);
}
int maxScore(int k, int m, vector<int> arr) {
    int ans = 0;
    int n = arr.size();
    int multiplier = 1;
    for (int i = n - k; i < n; i++) {
        ans += arr[i] * multiplier;
        multiplier++;
    }
    return ans;
}

int main() {
    vector<int> vec = {1,2,3,4,5};
    int n=534;
    int k = 2;
    int m = 5;
    cout << maxScore(k,m,vec) << endl;
    return 0;
}
