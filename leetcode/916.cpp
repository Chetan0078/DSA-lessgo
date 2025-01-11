#include<bits/stdc++.h>
using namespace std;
vector<string>wordSubsets (vector<string> word1,vector<string> word2){
    vector<string> result;
    //hasing all the words2
    vector<int>maxFreq(26,0);
    for(const string& word : word2) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            maxFreq[i] = max(maxFreq[i], freq[i]);
        }
    }
    for(const string& word:word1){
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        bool isUniveral = true;
        for(int i = 0;i<26;i++){
            if(freq[i]<maxFreq[i]){
                isUniveral = false;
                break;
            }
        }
        if(isUniveral)result.push_back(word);
    }
    return result;
}
int main(){
    vector<string>a = {"facebook","peacock"};
    vector<string>b = {"a","e","oo"};
    vector<string> res = wordSubsets(a,b);
    for(const string s:res){
        cout<<s<<" ";
    }
}