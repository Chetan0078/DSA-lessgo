#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        // Function to remove all occurrences of a substring 'part' from the string 's'
        string removeOccurrences(string s, string part) {
            // Get the size of the substring 'part'
            int partSize = part.size();
          
            // Find the first occurrence of 'part' in 's'
            size_t position = s.find(part);
          
            // Continue looping as long as 'part' is found in 's'
            while (position != string::npos) {
                // Erase 'part' from 's'
                s.erase(position, partSize);
                // Find the next occurrence of 'part' in 's'
                position = s.find(part);
            }
            // Return the modified string with all 'part' occurrences removed
            return s;
        }
    };
    int main(){
        
    }