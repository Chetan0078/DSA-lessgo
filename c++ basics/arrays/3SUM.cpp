#include <bits/stdc++.h>
using namespace std;
//better
vector<vector<int>> triplets(vector<int>& num) {
    int n = num.size();
    set<vector<int>> answer;

    for (int i = 0; i < n; i++) {
        set<int> st;
        for (int j = i + 1; j < n; j++) {
            int third = -(num[i] + num[j]);
            if (st.find(third) != st.end()) {
                vector<int> temp = {num[i], num[j], third};
                sort(temp.begin(), temp.end());
                answer.insert(temp);
            }
            st.insert(num[j]);
        }
    }

    return vector<vector<int>>(answer.begin(), answer.end());
}
//optimal
vector<vector<int>> triplet(vector<int>& num) {
    vector<vector<int>> ans;
    sort(num.begin(), num.end());
    int n = num.size();

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && num[i] == num[i - 1]) continue; // skip duplicate
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = num[i] + num[left] + num[right];
            if (sum == 0) {
                ans.push_back({num[i], num[left], num[right]});
                while (left < right && num[left] == num[left + 1]) left++;
                while (left < right && num[right] == num[right - 1]) right--;
                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> vec = {1, 2, 3, -1, -2, -3, 0, 4, -4, 6, -7, -8, -5};
    vector<vector<int>> result = triplet(vec);

    for (auto triplet : result) {
        for (int val : triplet) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
