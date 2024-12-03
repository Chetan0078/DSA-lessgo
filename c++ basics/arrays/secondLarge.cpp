#include <bits/stdc++.h>
using namespace std;

vector<int> secondLargest(int arr[], int n) {
    int large = INT_MIN, secLarge = INT_MIN;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            secLarge = large;
            large = arr[i];
        } else if (arr[i] > secLarge && arr[i] != large) {
            secLarge = arr[i];
        }
    }

    result.push_back(large);
    result.push_back(secLarge);
    return result;
}

int main() {
    int arr[] = {4, 2, 5, 5, 5, 6, 4, 3, 7, 4, 97, 97, 97, 100, 100, 100, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> temp = secondLargest(arr, n);
    for (int i = 0; i < 2; i++) {
        cout << temp[i] << " ";
    }
    return 0;
}
