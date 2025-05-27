#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int differenceOfSums(int n, int m) {
            int sum = (n*(n+1))/2;
            int canDivide = 0;
            for(int i=1;i<=n;i++){
                if(i%m==0)canDivide +=i;
            }
            return sum - 2*canDivide ;
        }
    };

    int main(){
        
    }