#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int count = 0;
            
            for (int i = low; i <= high; i++) {
                string s = to_string(i);
                int len = s.length();
                
                if (len % 2 == 0) {
                    int mid = len / 2;
                    int leftSum = 0, rightSum = 0;
                    
                    for (int j = 0; j < mid; j++) {
                        leftSum += s[j] - '0';
                    }
                    for (int j = mid; j < len; j++) {
                        rightSum += s[j] - '0';
                    }
                    
                    if (leftSum == rightSum) {
                        count++;
                    }
                }
            }
            
            return count;
        }
    };
int main(){

}    