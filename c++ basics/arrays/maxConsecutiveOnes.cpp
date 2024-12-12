#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> arr)
{
    // int result;
    // int i=0,j=1;
    // while(i<arr.size()&&j<arr.size()){
    //     if(arr[0]==1||(arr[i]==1&&arr[i-1]==1)){
    //         i++;
    //         result = i;
    //     }else i = 0;
    // }
    int cnt = 0, mx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            mx = max(cnt, mx);
        }
        else
            cnt = 0;
    }
    return mx;
}

int main()
{
    vector<int> arr = {3, 2, 2, 1, 1, 1, 1, 1, 1, 3, 4, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    cout << maxConsecutiveOnes(arr);
}