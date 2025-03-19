#include<bits/stdc++.h>
using namespace std;
void flip(vector<int> x,int i){
    if(x[i]==0)x[i]=1;
    else x[i]=0;
    if(x[i+1]==0)x[i+1]=1;
    else x[i+1]=0;
    if(x[i+2]==0)x[i+2]=1;
    else x[i+2]=0;

}
int main(){
    vector<int> vec = {0,0,0};
    flip(vec,0);
    for(auto x:vec){
        cout<<x<<" ";
    }
}