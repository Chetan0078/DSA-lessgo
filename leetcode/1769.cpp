#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to calculate the minimum number of operations required to move all balls to each box.
    std::vector<int> minOperations(std::string boxes) {
        int numberOfBoxes = boxes.size();
        std::vector<int> operations(numberOfBoxes); // This vector will store the result.
        for (int i = 1, ballCount = 0; i < numberOfBoxes; ++i) {
            if (boxes[i - 1] == '1') {
                ballCount++; // Increment ball count if the previous box has a ball.
            }
            // Accumulate the number of operations needed to bring all balls from left up to the current box.
            operations[i] = operations[i - 1] + ballCount;
        }
      
        // Backward pass to calculate the operations from the right.
        // Start from the second-to-last box, accumulating the ball count going backward.
        // To operate both passes separately we use 'operationSum' to accumulate operations in this pass.
        for (int i = numberOfBoxes - 2, ballCount = 0, operationSum = 0; i >= 0; --i) {
            if (boxes[i + 1] == '1') {
                ballCount++; // Increment ball count if the next box has a ball.
            }
            operationSum += ballCount; // Accumulate the number of operations needed from right side up to the current box.
            // Add the current right pass operations to the forward pass operations for each box.
            operations[i] += operationSum;
        }
      
        return operations; // Return the final operations required for each box.
    }
};

int main(){

}