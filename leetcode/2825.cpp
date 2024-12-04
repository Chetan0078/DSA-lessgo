#include<bits/stdc++.h>
using namespace std;

bool checkSubSeq(string str1, string str2){
    int left=0;
    while(left<str1.size()){
        int right=0;
        while(right<str2.size()){
            if(++str1[left]==str2[right]){
                return true;
            }
            else{
                right++;
            }
        }
        left++;
    }
    return false;
}

int main(){
    string str1="zc";
    string str2="ad";
    if(checkSubSeq(str1,str2)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}