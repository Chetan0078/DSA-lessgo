#include<bits/stdc++.h>
using namespace std;

//if input is array

// int main(){
//     int n;
//     cout<<"Enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements";
//     for(int i=0;i<n;i++)cin>>arr[i];
//     //the size of hash array will given in the form of range of hasing in the question. now i'm selecting 13 for example
//     int hash[13]={0};
//     for(int i=0;i<n;i++)hash[arr[i]]+=1;//count the numbers freq.
//     int q;
//     cout<<"Enter the number of searching query";
//     cin>>q;
//     while (q>0){
//         int num;
//         cout<<"Enter the number you want to search in array: ";
//         cin>>num;
//         //fetch the data of number
//         cout<<"The number "<<num<<" is "<<hash[num]<<" times persent in array"<<endl;
//         q--;
//     }
// }

//if input is string

/*int main(){
    string s;
    cin>>s;

    int hash[26]={0};
    //i declared hash array with 36 size coz i'm using small latters when we use all the latters then hash size will be 256
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;
    }
    int q;
    cin>>q;
    while(q>0){
        char c;
        cin>>c;
        cout<<hash[c-'a'];
        q--;
    }
}*/

//hasing of numbers using map 
/*int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    //pre-computing
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q>0){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
        q--;
    }
}*/
//hasing of string using map
int main(){
    string s;
    cin>>s;
    map <char,int> list;
    //pre compute
    for(int i=0;i<s.size();i++){
        list[s[i]]+=1;
    }

    for(auto it:list){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    //fetch
    int q;
    cin>>q;
    while(q>0){
        char c;
        cin>>c;
        cout<<list[c]<<endl;
        q--;
    }

}