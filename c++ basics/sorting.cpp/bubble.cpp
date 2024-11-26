#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int n, int arr[]){
    int didSwap=0;
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap++;
            }    
        }
        if(didSwap==0){
            cout<<"\nalready in sorted order no need to sort...";
            return ;
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
    cout<<"Times swaped: "<<didSwap;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    bubble_sort(5, arr);

}