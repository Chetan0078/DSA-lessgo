#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.size();
            int mini = INT_MAX;
            int temp = k;
            for(int i=0;i<k;i++){
                if(blocks[i]=='B')temp--;
            }
            mini = min(mini,temp);
            for(int i=k;i<n;i++){
                if( blocks[i]=='W')temp++;
                if( blocks[i-k]=='W')temp--;
                mini = min(mini,temp);
            }
            return mini;
        }
    };
int main(){
    Solution s;
    string a = "BWWWBB";
    cout<<s.minimumRecolors(a,6);
    // cout<<a.size();
    // int w=0,b=0;
    // for(int i=0;i<a.size();i++){
    //     if(a[i]=='B')b++;
    //     else w++;
    // }
    // cout<<b<<" "<<w;
}