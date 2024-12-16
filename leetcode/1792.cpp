#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a = {{1, 2}, {3, 5}, {2, 7}, {4, 9}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
