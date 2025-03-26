#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperations(vector<vector<int>>& grid, int x) {
    vector<int> arr;
    for (auto& row : grid) {
        for (int num : row) {
            arr.push_back(num);
        }
    }
    
    // Sort to find the median
    sort(arr.begin(), arr.end());
    
    // Check if transformation is possible
    int mod = arr[0] % x;
    for (int num : arr) {
        if (num % x != mod) return -1;
    }
    
    // Find median
    int median = arr[arr.size() / 2];
    int operations = 0;
    
    // Calculate total moves
    for (int num : arr) {
        operations += abs(num - median) / x;
    }
    
    return operations;
}

int main() {
    vector<vector<int>> grid = {{2, 4}, {6, 8}};
    int x = 2;
    cout << minOperations(grid, x) << endl;
    return 0;
}
