#include<bits/stdc++.h>
using namespace std;
//without any extra space.....
void merge(int arr[], int brr[], int n, int m){
    int left = n-1, right=0;
    int x = max(m,n);
    while(left>0&&right<m){
        if(arr[left]>brr[right]){
            swap(arr[left], brr[right]);
            left--,right++;
        }
        else break;
    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    
}