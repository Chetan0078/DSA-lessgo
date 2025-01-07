#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Function to find all strings in 'words' that are substrings of other strings
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result; // To store the substrings
        int numWords = words.size(); // Number of words in the input vector

        // Loop through each word in the vector
        for (int i = 0; i < numWords; ++i) {
            // Nested loop to compare the current word with every other word in the vector
            for (int j = 0; j < numWords; ++j) {
                // Check if the current word is a substring of any other word, but not the same word
                if (i != j && words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]); // If it's a substring, add to the result vector
                    break; // No need to check other words, break out of inner loop
                }
            }
        }
        return result; // Return the vector containing all substrings
    }
};
int main(){
    
}