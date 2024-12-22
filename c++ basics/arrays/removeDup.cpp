#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 1, 1, 3, 3, 3, 5, 5, 5, 7, 7, 7, 7, 7, 7, 8};
    int i = 0;
    for (int j = 1; j < 16; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int j = 0; j <= i; j++)
    {
        cout << arr[j] << " ";
    }
}