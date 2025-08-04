#include<bits/stdc++.h>
using namespace std;
//the quesion is to find the min rate of eating banana so that the koko can eat all the banana within the giving limit
//input is arr = {2,3,4,8}, where each index's val is num of banana containing at i
//the twist is once koko start eating a pile, the slot is booked, now if the rate is to eat 7 banana/hour and the first pile
//only have 2 banana then it will take whole hour here, then it'll jump on another pile
int timeCALC(int rate, vector<int> banana){
    int n = banana.size();
    int time = 0;
    for(int i=0;i<n;i++){
        if(banana[i]%rate==0)time = time+banana[i]/rate;
        else time = time+banana[i]/rate + 1;
    }
    return time;
}
int minRATEforKOKO(vector<int> banana, int hours){
    int n = banana.size();
    int high = banana[n-1];
    int low = 1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(timeCALC(mid, banana)==hours)return mid;
        else if(timeCALC(mid, banana)>hours){
            low = mid + 1;
        }
        else{
            high = mid-1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {3,6,7,11};
    int h = 8;
    cout<<minRATEforKOKO(vec,h);

}