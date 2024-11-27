//Explaination:- basically we are taking element and putting them to their original positon
//ex:- 4,5,3,2,6
//in first loop we take 0th element
//2 -- we take 0th and 1st element of array and place 1st element at his right place
//3 -- we take 0,1,2 index and place 2nd element at his right place
//outer loop will run for i=0 to i<sizeofarray, inner loop will run for j=i to j=0


#include<bits/stdc++.h>
using namespace std;
void insertion(int x, int arr[]){
    for(int i=0;i<=x-1;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                cout<<"runs\n";
            }
        }
    }
    for(int i= 0;i<x;i++){cout<<arr[i]<<endl;}
}

int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)cin>>arr[i];
    insertion(x,arr);
    
}