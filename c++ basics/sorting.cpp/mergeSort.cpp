//basically we breking array into two parts by index till the array has 1 element and then we sort them pieces of array and merge them

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    int left = low, right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void ms(vector<int> &arr, int low, int high) {
    if (low >= high) return; 

    int mid = (low + high) / 2;

    ms(arr, low, mid);
    ms(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n) {
    ms(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {4, 5, 3, 2, 5, 7, 8, 6, 4, 2, 5};
    mergeSort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
