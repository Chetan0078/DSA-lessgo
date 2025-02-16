#include <bits/stdc++.h>
using namespace std;
void bruteApproach(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}
void betterApproach(vector<int> &arr)
{
    int count0 = 0;
    int count1 = 1;
    int count2 = 2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        count2++;
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < arr.size(); i++)
    {
        arr[i] = 2;
    }
}
void optimalApproach(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 0, 2, 2, 1, 1, 0};
    optimalApproach(a);
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}