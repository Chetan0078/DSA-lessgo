#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        vector<int> diff;
        int n = s1.size();

        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
                diff.push_back(i);
        }

        if (diff.empty())
            return true;
        if (diff.size() != 2)
            return false;

        return s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]];
    }
};

int main()
{
}