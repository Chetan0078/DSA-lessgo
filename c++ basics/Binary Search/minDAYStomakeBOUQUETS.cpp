#include<bits/stdc++.h>
using namespace std;

int bouquetMADE(int bloomdays, vector<int> listt, int adjucentFLOWERSneed){
    int n = listt.size();
    int ans = 0;
    int counter = 0;
    for(int i=0;i<n;i++){
        if(listt[i] <= bloomdays){
            counter++;
            if(counter == adjucentFLOWERSneed){ 
                ans++;
                counter = 0;
            }
        } else {
            counter = 0;
        } 
    }
    return ans;
}

int minDAYStomakeBOUQUETS(vector<int> bloomdays, int NOofBOUQUETS, int adjucentFLOWERSneed){
    int n = bloomdays.size();
    if(1LL * NOofBOUQUETS * adjucentFLOWERSneed > n) return -1; 
    
    int high = *max_element(bloomdays.begin(), bloomdays.end());
    int low = *min_element(bloomdays.begin(), bloomdays.end());
    
    int ans = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(bouquetMADE(mid, bloomdays, adjucentFLOWERSneed) >= NOofBOUQUETS){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {7,7,7,7,13,11,12,7};
    int m = 2, k = 3;
    cout << minDAYStomakeBOUQUETS(vec, m, k);
}
