#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> arr){
    int result;
    int i=0,j=1;
    while(i<arr.size()&&j<arr.size()){
        if(arr[0]==1||(arr[i]==1&&arr[i-1]==1)){
            i++;
            result = i;
        }else i = 0;

    }

    return result;
}