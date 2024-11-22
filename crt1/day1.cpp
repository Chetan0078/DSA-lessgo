#include<iostream>
using namespace std;
int square(int x){
    for(int i = x; i>0; i--){
        if (i*i<=x){
            return i;
        }   
    }
}

int main(){
    int x;
    cin>>x;
    cout<<square(x);
}