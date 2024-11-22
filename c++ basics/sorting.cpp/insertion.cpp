#include<bits/stdc++.h>
using namespace std;
void insertion(int x, int arr[]){
    for(int i=0;i<x;i++){
        int max=i;
        for(int j=i;j<x;j++){
            if(arr[max]>arr[j])max=j;
        }
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
       
}

int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)cin>>arr[i];
    insertion(x,arr);
    for(int i=0;i<x;i++)cout<<arr[i]<<endl; 
}