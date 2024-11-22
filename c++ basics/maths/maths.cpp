#include <bits/stdc++.h>
using namespace std;
class Maths{
    int num, num1, num2;

public:
    Maths(){
        num = 0;
        num1 = 0;
        num2 = 0;
    }
    void setNum(int n){
        num = n;
    }
    void setNum(int n,int m){
        num1 = n;
        num2 = m;
    }
    int getNum(){
        return num;
    }
    int countDigit(int num){
        int count = 0;
        while (num > 0)
        {
            num = num / 10;
            count += 1;
        }
        return count;
    }
    int reverseNum(int num){
        int rem, rev = 0;
        while (num > 0)
        {
            rem = num % 10;
            num = num / 10;
            rev = rev * 10 + rem;
        }
        return rev;
    }
    int pelindrom(int num){
        int rem, rev = 0, temp = num;
        while (num > 0)
        {
            rem = num % 10;
            num = num / 10;
            rev = rev * 10 + rem;
        }
        if (temp == rev)
        {
            cout << "num is a pelindrom";
        }
        else
        {
            cout << "num is not a palindrom";
        }
    }
    void armstrong(int num){
        string digits = to_string(num);
        int digitcount = digits.size();
        int temp = num;
        int r = 0;
        int pal = 0;
        while (num > 0){
            r = num % 10;
            pal = pow(r, digitcount) + pal;
            num = num / 10;
        }
        if (pal == temp){
            cout << "The number is armstrong";
        }
        else
            cout << "The number isn't armstrong";
    }
    void divisors(int num){
        for (int i = 1; i <= num; i++){
            if ((num%i)==0){
                cout<<i<<endl;
            }           
        }        
    }
    // divisors with sqrt n time complaxity
    void divisors1(int num){
        vector <int> list;
        for (int i = 1; i*i <= num; i++){
            if (num%i==0){
                list.push_back(i);
                if (num/i==i){
                    list.push_back(num/i);
                }
            }   
        } 
        sort(list.begin(), list.end());
        for(auto me = list.begin(); me<list.end();me++){
            cout<<*me<<endl;
        }    
    }
    void prime(int num){
        int count=0;
        for (int i = 2; i < num; i++){
            if(num%i==0){
                count++;
            }
        }
        if (count==0){
            cout<<"The num is a prime number";
        }else cout<<"The num is not a prime number";     
    }
    // prime with sqrt n time complaxity
    void prime1(int num){
        int count=0;
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                count+=2;
                if(num/i==i){
                    count--;
                }
            }
        }
        if(count>2){
            cout<<"num is not a prime number";
        }else cout<<"num is a prime number";
    }
    void gcd(int num1, int num2){
        int gcd=0;
        int m= min(num1, num2);
        for (int i = 1; i <= m; i++){
            if((num1%i==0)&&(num2%i==0)){
                gcd = i;
            }
        }
        cout<<"The gcd is = "<<gcd;
    }
    // gcd with opposite approach (it will not appropriate with worst case)
    void gcd1(int num1, int num2){
        int gcd=0;
        for(int i = min(num1, num2); i>=0;i--){
            if((num1%i==0)&&(num2%i==0)){
                gcd = i;
                break;
            }
        }
        cout<<gcd;
    }
    // gcd with equilateral algorithm
    void gcd2(int num1, int num2){
        int gcd;
        while ((num1>0)&&(num2>0)){
            if(num1>num2) num1= num1%num2;
            else num2 = num2%num1;
        }
        if(num1==0) gcd = num2;
        else gcd = num1;
        cout<<gcd;
    }
};
int main(){
    Maths a1;
    int num, num1, num2;
    cin >> num1 >> num2;
    a1.setNum(num1, num2);
    cout << endl;
    
    a1.gcd2(num1, num2);
}