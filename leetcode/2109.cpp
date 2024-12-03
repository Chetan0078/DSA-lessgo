#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> spaces;
    string s;
public:
    Solution (string s,vector<int> arr){
        this-> s = s;
        for(int i=0;i<arr.size();i++){
            spaces.push_back(arr[i]);
        }

    }
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int posIndex = 0;

        for (int i = 0; i < s.size(); i++) {
            if (posIndex < spaces.size() && i == spaces[posIndex]) {
                result += ' '; 
                posIndex++;    
            }
            result += s[i]; 
        }

        return result;

    }
};

int main(){
    string temp= "hellomynameischetan";
    vector<int> v={5,7,11,13};
    Solution s(temp,v);
    
    cout<<s.addSpaces(temp,v);

}