#include<bits/stdc++.h>
using namespace std;
bool canChange(string start, string target) {
    // int i=0,j=start.size();
    // while(i<start.size()){
    //     if(start[i]=='L') break;
    //     i++;
    // }
    // while(j>0){
    //     if(start[j]=='R') break;
    //     j--;
    // }
    for(int i =1;i<start.size();i++){
        for(int k=start.size()-1;k>0;k--){
            if(start[k]=='L'&& start[k-1]=='_')swap(start[k],start[k-1]);
            if(start[k]=='R'&& start[k+1]=='_')swap(start[k],start[k+1]);
            if(start == target){
                return true;
            }
        }
    }
    cout<<start;
    return false;
}

int main(){
    string start="_L__R_R_";
    string target="L_____RR";
    if(canChange(start,target)){
        cout<<"True";
    }else{cout<<"False";}
}