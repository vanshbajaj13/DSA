#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool checkPrime(int n)
{
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0 || n == 1) {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;

}

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    int cn = n;
    // brute force
    vector <int> prime;
    for (int i = 2; i <= sqrt(n); i++) {
        if (checkPrime(i)) {
            while (n % i == 0) {
                prime.push_back(i);
                n /= i;
            }
        }
    }
    if (n > 1) {
        prime.push_back(n);
    }
    for (auto i : prime) {
        cout << i << " ";
    }
    cout << endl;

    // optimised way 
    n = cn;
    while (n % 2 == 0) {
        cout << "2 ";
        n /= 2;
    }
    while (n % 3 == 0) {
        cout << "3 ";
        n /= 3;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0) {
            cout << (i + 2) << " ";
            n /= (i + 2);
        }

    }
    if (n > 3) {
        cout << n << " ";
    }



    return 0;
}