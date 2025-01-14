#include <string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right && s[left] == s[right]) {
            char currentChar = s[left];

            while (left <= right && s[left] == currentChar) {
                left++;
            }

            while (right >= left && s[right] == currentChar) {
                right--;
            }
        }

        return right - left + 1;
    }
};
int main(){
    
}