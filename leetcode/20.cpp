#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        string stack; // Use a string as a makeshift stack

        for (char c : s)
        {
            // Push opening brackets to the stack
            if (c == '(' || c == '[' || c == '{')
            {
                stack.push_back(c);
            }
            else
            {
                // Check if the stack is empty or doesn't match the closing bracket
                if (stack.empty() ||
                    (c == ')' && stack.back() != '(') ||
                    (c == ']' && stack.back() != '[') ||
                    (c == '}' && stack.back() != '{'))
                {
                    return false;
                }
                stack.pop_back(); // Remove the matching opening bracket
            }
        }

        // If the stack is empty, all brackets were matched
        return stack.empty();
    }
};
int main()
{
}