#include <bits/stdc++.h>
using namespace std;
bool canChange(string start, string target)
{

    // BRUTEFORCE
    //  for(int i =1;i<start.size();i++){
    //      for(int k=start.size()-1;k>0;k--){
    //          if(start[k]=='L'&& start[k-1]=='_')swap(start[k],start[k-1]);
    //          if(start[k]=='R'&& start[k+1]=='_')swap(start[k],start[k+1]);
    //          if(start == target){
    //              return true;
    //          }
    //      }
    //  }
    //  cout<<start;
    //  return false;

    // optimal approach
    int i = 0, j = 0;
    int n = start.size();

    while (i < n || j < n)
    {
        while (i < n && start[i] == '_')
            i++;

        while (j < n && target[j] == '_')
            j++;

        if ((i < n) != (j < n))
            return false;

        if (i < n && j < n)
        {
            if (start[i] != target[j])
                return false;
            if (start[i] == 'L' && i < j)
                return false;
            if (start[i] == 'R' && i > j)
                return false;
        }

        i++;
        j++;
    }

    return true;
}

int main()
{
    string start = "_L__R_R_";
    string target = "L_____RR";
    if (canChange(start, target))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}