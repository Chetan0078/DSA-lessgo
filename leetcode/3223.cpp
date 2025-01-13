#include <string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;

        // Continue shrinking the window from both ends as long as characters match
        while (left < right && s[left] == s[right]) {
            char currentChar = s[left];

            // Move the left pointer to the right while the current character matches
            while (left <= right && s[left] == currentChar) {
                left++;
            }

            // Move the right pointer to the left while the current character matches
            while (right >= left && s[right] == currentChar) {
                right--;
            }
        }

        // The remaining substring length is the difference between right and left pointers plus one
        return right - left + 1;
    }
};
int main(){
    
}