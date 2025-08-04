#include<bits/stdc++.h>
using namespace std;

int bsByRecursion(int low, int high, int target, const vector<int>& nums) {
    if (low > high) return -1;

    int mid = (low + high) / 2;

    if (target == nums[mid]) return mid;
    else if (target > nums[mid])
        return bsByRecursion(mid + 1, high, target, nums);
    else
        return bsByRecursion(low, mid - 1, target, nums);
}

int main() {
    vector<int> vec = {1,2,3,4,5,6,8,10,13,15,18,21};
    int n = vec.size();
    int low = 0;
    int high = n - 1;
    int target = 10;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (target == vec[mid]) {
            ans = mid;
            break; 
        } else if (target > vec[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
