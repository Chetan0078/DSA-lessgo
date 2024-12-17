#include <string>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        // Step 1: Count frequency of characters
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        
        // Step 2: Use max heap (priority queue) to store characters in descending order
        priority_queue<pair<char, int>> maxHeap;
        for (auto& entry : freq) {
            maxHeap.push({entry.first, entry.second});
        }
        
        string result = "";  // Final result string
        while (!maxHeap.empty()) {
            auto [currentChar, count] = maxHeap.top();
            maxHeap.pop();
            
            int timesToAdd = min(count, repeatLimit);  // Add currentChar up to the repeatLimit
            result.append(timesToAdd, currentChar);
            
            count -= timesToAdd;  // Decrease the count
            
            // If there's more of currentChar but we reached the repeatLimit
            if (count > 0) {
                if (maxHeap.empty()) {
                    // If there's no other character to break the sequence, stop
                    break;
                }
                
                // Use the next largest character to break the sequence
                auto [nextChar, nextCount] = maxHeap.top();
                maxHeap.pop();
                
                result.push_back(nextChar);  // Add one instance of the next largest character
                nextCount -= 1;  // Reduce its count
                
                // Reinsert both characters back to the heap if counts are not zero
                maxHeap.push({currentChar, count});
                if (nextCount > 0) {
                    maxHeap.push({nextChar, nextCount});
                }
            }
        }
        
        return result;
    }
};
int main(){
    
}