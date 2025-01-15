#include <bitset>
#include <iostream>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setBitsNum2 = __builtin_popcount(num2);  // Count set bits in num2
        int result = 0;

        // Set as many bits from num1 as possible to minimize XOR
        for (int i = 31; i >= 0 && setBitsNum2 > 0; --i) {
            if ((num1 & (1 << i)) != 0) {
                result |= (1 << i);
                --setBitsNum2;
            }
        }

        // If more bits are needed, set them starting from the least significant bit
        for (int i = 0; i <= 31 && setBitsNum2 > 0; ++i) {
            if ((result & (1 << i)) == 0) {
                result |= (1 << i);
                --setBitsNum2;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    cout << "Result for num1=3, num2=5: " << sol.minimizeXor(3, 5) << endl;
    cout << "Result for num1=1, num2=12: " << sol.minimizeXor(1, 12) << endl;
    return 0;
}
