#include <bits/stdc++.h>
using namespace std;

int longestSubarrwithK(vector<int> &arr, int k)
{ // optimal approch
    int i = 0, j = 0;
    int sum = arr[0];
    int result = 0;
    int n = arr.size();
    while (j < n)
    {
        j++;
        while (i < j && sum > k)
        {
            sum -= arr[i];
            i++;
        }
        if (j < n)
            sum += arr[j];
        if (sum == k)
        {
            result = max(result, j - i + 1);
        }
    }
    return result;
}

int longarrK(vector<int> &arr, int k)
{ // brute
    int result = 0;
    int sum;

    for (int i = 0; i < arr.size(); i++)
    {
        sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            if (sum == k)
                result = max(result, j - i + 1);
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 3, -2, 1, 1, 1, 1, 1, 1, 2, 6};
    int k = 6;
    cout << longarrK(arr, k);
}