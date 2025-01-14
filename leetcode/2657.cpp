#include<bits/stdc++.h>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size();
    unordered_set<int> seenA,seenB;
    vector<int> result(n);
    int count = 0;
    for(int i = 0;i<n;i++){
        seenA.insert(A[i]);
        seenB.insert(B[i]);
        if(seenA.count(B[i]))count++;
        if(A[i]!=B[i]&&seenB.count(A[i]))count++;
        result[i] = count;
    }
    return result;
}
int main(){
    vector<int> A = {1,3,2,4};
    vector<int> B = {3,1,2,4};
    vector<int> c;
    c = findThePrefixCommonArray(A,B);
    for(int at:c){
        cout<<at<<" ";
    }

}