#include <bits/stdc++.h>
using namespace std;
int maxChunkstoSorted(vector<int> &arr)
{
    int max_so_far = 0; // To keep track of the maximum value encountered so far
    int chunks = 0;     // To count the number of chunks

    for (int i = 0; i < arr.size(); ++i)
    {
        max_so_far = max(max_so_far, arr[i]); // Update the max value
        if (max_so_far == i)
        {
            // If the max value equals the current index, we can end a chunk here
            chunks++;
        }
    }

    return chunks;
}
int main(){
    vector<int> arr = {1,2,0,4,3};
    cout<<maxChunkstoSorted(arr);
}