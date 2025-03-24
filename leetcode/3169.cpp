#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countDays(int days, std::vector<std::vector<int>>& meetings) {
        int freeDays = 0;
        int prevEnd = 0;

        sort(meetings.begin(), meetings.end());

        for (const auto& meeting : meetings) {
            int start = meeting[0];
            int end = meeting[1];
            if (start > prevEnd)
                freeDays += start - prevEnd - 1;
            prevEnd = max(prevEnd, end);
        }

        return freeDays + max(0, days - prevEnd);
    }
};

int main(){

}
