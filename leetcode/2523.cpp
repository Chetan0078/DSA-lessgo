#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            vector<int> primes;
            vector<int> result = {-1, -1}; // Default case if no valid primes
    
            // Sieve of Eratosthenes to precompute primes up to right
            vector<bool> isPrime(right + 1, true);
            isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes
    
            for (int i = 2; i * i <= right; i++) {
                if (isPrime[i]) {
                    for (int j = i * i; j <= right; j += i) {
                        isPrime[j] = false;
                    }
                }
            }
    
            // Collect all primes in the given range
            for (int i = left; i <= right; i++) {
                if (isPrime[i]) {
                    primes.push_back(i);
                }
            }
    
            // Find the closest prime pair
            int minDiff = INT_MAX;
            for (size_t i = 1; i < primes.size(); i++) {
                if (primes[i] - primes[i - 1] < minDiff) {
                    minDiff = primes[i] - primes[i - 1];
                    result = {primes[i - 1], primes[i]};
                }
            }
    
            return result;
        }
    };

    int main(){
        
    }