#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordIndex = 1;  // Words are 1-indexed
        int n = sentence.size();
        int searchLen = searchWord.size();

        for (int i = 0; i < n; i++) {
            // Find the start of a word
            if (i == 0 || sentence[i - 1] == ' ') {
                int j = 0;  // Pointer to compare searchWord
                int k = i;  // Pointer to compare sentence's current word
                
                // Check if searchWord matches the prefix
                while (j < searchLen && k < n && sentence[k] == searchWord[j]) {
                    j++;
                    k++;
                }
                
                // If the whole searchWord matched as prefix
                if (j == searchLen) {
                    return wordIndex;
                }

                wordIndex++;  // Move to the next word
            }
        }

        return -1;  // No prefix match found
    }
};