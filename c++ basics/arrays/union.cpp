#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,3,5,6,7,10};
    int arr2[] = {2,4,5,6,8};
    vector<int> temp;
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int i = 0,j = 0;
    while(i<n||j<m){
        if(arr1[i]!=arr2[j]){
            temp.push_back(arr1[i]);
            temp.push_back(arr2[j]);
            i++;
            j++;
        }else{
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto it:temp){
        cout<<it<<" ";
    }
}