/*
Explaination:- So we basically select mini in whole array and place it at first
eg. arr=4,6,76,3,1
in first iteration the 1 got selected and placed at arr[0] and swapped with 4
then we run same function for arr[1] to arr[n-1]
so over main loop will run for i=0 to i=n-2 (because last array element don't need to be sorted, it autometically get)
over nested loop will run for j=i to j=n-1 (every time the starting elements are being sorted)
*/

#include <bits/stdc++.h>
using namespace std;

void selection(int x, int arr[])
{
    for (int i = 0; i < x - 2; i++)
    {
        int min = i;
        for (int j = i; j <= x - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selection(n, arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}