#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maximumSum(vector<int>& nums){
            int result = -1;
            unordered_map<int, int> digitsm;
    
            for(int num : nums){
                int sum = 0, temp = num;
                while (temp > 0){ 
                    sum += temp % 10;
                    temp /= 10;
                }
                if (digitsm.count(sum)){
                    result = max(result, digitsm[sum] + num);
                }
                
                digitsm[sum] = max(digitsm[sum], num);
            }
    
            return result;
        }
    };
int main(){
    
}    