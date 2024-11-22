#include<bits/stdc++.h>
using namespace std;
void printback(int x){
    if(x<1)return;
    cout<<x<<endl;
    printback(x-1);
}
void printfor(int x){
    if(x>5)return;
    cout<<x<<endl;
    printfor(x+1);
}
int result = 1;
int power(int x,int y){
    if(y==0){
        return 1;
    }
    int temp = power(x,y/2);
    temp = temp*temp;
    if(y%2==0){
        return temp;
    }
    else return temp*x;
}
int add=0;
int sum(int x){
    add= add+x;
    if(x<=0)return add;
    sum(x-1);
}
void dectoBin(int x){
    if (x==0) return;
    dectoBin(x/2);
    cout<<x%2;
}
int main(){
    // printback(5);
    // printfor(1);
    // cout<<power(2,4);
    // cout<<power(2,4);
    dectoBin(10);

}