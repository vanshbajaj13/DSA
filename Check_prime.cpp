#include<iostream>
#include<cmath>
using namespace std;


void checkPrime(int n)
{
    if (n == 1) {
        cout << "Unique" << endl;
        return;
    }
    if (n == 2 || n == 3) {
        cout << "Yes prime" << endl;
        return;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        cout << "Not prime" << endl;
        return;
    }

    for (int i = 5; i < sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            cout << "Not prime" << endl;
            return;
        }
    }
    cout << "Yes prime" << endl;
    return;
}

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    // brute force
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Yes prime" << endl;
    }
    else {
        cout << "Not prime" << endl;
    }
    // optimised 
    // dont check for multiple of 2and 3 

    cout << "Prime check by OPTIMISED func ---> ";
    checkPrime(n);

    return 0;
}