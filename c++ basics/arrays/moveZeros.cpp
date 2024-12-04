#include<bits/stdc++.h>
using namespace std;

int main(){
    //BRUTE-->
    int arr[]={2,4,0,0,6,0,4,0,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    /*
    vector<int> temp;
    for(int i =0;i< n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i =0;i<temp.size();i++){
        arr[i] = temp[i];
    }
    int noofNz = temp.size();
    for(int i = noofNz;i<n;i++){
        arr[i]=0;
    }
    */
   //optimal
   int j =-1;
   for(int i= 0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
   }
   if(j = -1){cout<<"There are no zeros";}
   for(int i = j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
   }
   for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}