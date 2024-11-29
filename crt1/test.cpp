// #include <bits/stdc++.h>
// using namespace std;

// void zeroSort1(int x, int arr[]) {
//     int count = 0;

//     for (int i = 0; i < x; i++) {
//         if (arr[i] == 0) {
//             count++;
//         }
//     }

//     int y = x - count;
//     int nonzero[y];
//     int j = 0;
//     for (int i = 0; i < x; i++) {
//         if (arr[i] != 0) {
//             nonzero[j] = arr[i];
//             j++;
//         }
//     }

//     for (int i = 0; i < y; i++) {
//         arr[i] = nonzero[i];
//     }

//     for (int i = y; i < x; i++) {
//         arr[i] = 0;
//     }

//     for (int i = 0; i < x; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void doublepointer(int x, int arr[]){
//     int j=-1;
//     for(int i=0;i<x;i++){
//         if(arr[i]==0){
//             j=i;
//             break;
//         }
//     }
//     for(int i=j+1;i<x;i++){
//         if(arr[i]!=0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }
//     for(int i=0;i<x;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[] = {1, 0, 3, 0, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     zeroSort1(n,arr);
//     doublepointer(n,arr);
// }

#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int k)
{
    k = k % size;
    if (k < 0)
    {
        k += size;
    }

    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k;

    cout << "Original array: ";
    printArray(arr, 5);

    cout << "Enter number of rotations: ";
    cin >> k;

    rotateArray(arr, 5, k);

    cout << "Array after rotation: ";
    printArray(arr, 5);

    return 0;
}