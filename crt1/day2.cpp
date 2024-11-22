#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int rows;
    cout << "Enter rows ";
    cin >> rows;

    int count = 0, num = 2;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            while (!isPrime(num)) {
                num++;
            }
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
