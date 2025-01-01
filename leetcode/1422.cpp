#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(string s) {
        // Initialize totalScore to 0. It will represent the total score while traversing the string.
        int totalScore = 0;
      
        // If the first character is '0', we increment totalScore as we get one point for it.
        if (s[0] == '0') {
            ++totalScore;
        }
      
        // Add to totalScore the number of '1' in the string, except for the first character.
        for (int i = 1; i < s.size(); ++i) {
            totalScore += s[i] == '1';
        }
      
        // Initialize maxScore with the totalScore calculated so far.
        int maxScore = totalScore;
      
        // Start traversing the string from the second character to the second-to-last.
        for (int i = 1; i < s.size() - 1; ++i) {
            // Increment totalScore if it's a '0', else decrement it for a '1'.
            totalScore += s[i] == '0' ? 1 : -1;
          
            // Update maxScore with the higher value between maxScore and totalScore.
            maxScore = max(maxScore, totalScore);
        }
      
        // Return the maximum score found.
        return maxScore;
    }
};
int main(){

    
}