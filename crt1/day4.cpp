#include<bits/stdc++.h>
using namespace std;

int spanArr(int x, int arr[]) {
    int max = arr[0];
    for (int i = 0; i < x; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int min = arr[0];
    for (int i = 0; i < x; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    int span = max - min;
    return span;
}
void zeroSort(int x,int arr[]){
    int temp;
    for(int i=0; i<x;i++){
        for(int j=0;j<x-i-1;j++){
            if(arr[j]==0){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<endl;
    }
}
void zeroSort1(int x,int arr[]){
    int count=0;
    for(int i;i<x;i++){
        if(arr[i==0])count++;
    }
    int y;
    if(count>x)y=count-x;
    y=x-count;
    int nonzero[y];
    int j=0;
    for(int i=0;i<x;i++){
        if(count>0){
            if(arr[i]!=0){
                nonzero[j]=arr[i];
                j++;
            }
            count--;
        }
    }
    arr = arr+nonzero[y];
    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
}
void doublepointer(int x, int arr[]){
    int j=-1;
    for(int i=0;i<x;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<x;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
}
int main() {
    int arr[] = {1, 0, 3, 0, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    doublepointer(n, arr);
    return 0;
}
