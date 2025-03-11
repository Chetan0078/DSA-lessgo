#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int numberOfSubstrings(string s) {
            int n = s.size();
            int subarrays = 0;
            vector<int> freq(3,0);
            int i=0,j=0;
            while(j<n){
                freq[s[j]-'a']++;
                while(freq[0]>0 and freq[1]>0 and freq[2]>0){
                    subarrays += n-j;
                    freq[s[i]-'a']--;
                    i++;
                }
                j++;
            }
            return subarrays;
        }
    };

    int main(){
        
    }