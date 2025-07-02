#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeOVERLAPintervals(vector<vector<int>> &arr) {
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        // If ans is empty or no overlap
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        } else {
            // Merge with last interval in ans
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }

    return ans;
}


int main(){
    vector<vector<int>> pairr = {{1,3},{2,4},{4,8},{9,10},{11,14},{12,13}};
    vector<vector<int>> ans = mergeOVERLAPintervals(pairr);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << "\n";
    }
}