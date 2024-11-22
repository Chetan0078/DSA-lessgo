#include<iostream>
using namespace std;
int count=0;
int fac = 1;
void print(){
    cout<<count<<endl;
    if (count==5){
        return;
    }
    count++;
    print();  
}
void printName(int x, string n){
    cout<<n<<endl; 
    x--; 
    if (x>0){
        printName(x,n);     
    }else return;
}
void printRevNum(int x){
    cout<<x<<endl;
    x--;
    if(x==0)return;
    printRevNum(x);
}
int sum(int x){
    count=count+x;
    x--;
    if(x>0){
        sum(x);
    }
    return count;
}
int fact(int x){
    if(x>1){
        fac = fac*x;
        x--;
        fact(x);
    }
    return fac;
}
int fib(int x){
    if(x==0||x==1){
        count=x;
    }
    else 
    count = fib(x-1)+fib(x-2);
    return count;
}
void backtrackPrint(int x ,int y){
    //321
    if(x==y){
        return;
    }
    else
    backtrackPrint(x+1,y);
    cout<<x<<endl;
}
void arrReverse(int i,int n,int arr[]){
    if(i>=n/2) return;
    else 
    swap(arr[i],arr[n-i-1]);
    arrReverse(i+1,n,arr);   
}
bool checkPelin(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return checkPelin(i+1,s);
}
int main(){
    // int x,y;
    // int n;
    // int arr[n];
    string s;
    s = "madam";
    // cout<<"Enter the number of elements";
    // cin>>n;
    // cout<<"enter elements";
    // for (int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }
    // arrReverse(0,n,arr);
    // for (int i = 0; i < n; i++){
    //     cout<<arr[i]<< " ";
    // }
    if(checkPelin(0,s)){
        cout<<"yes";
    }
    else cout<<"no";
}