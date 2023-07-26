#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    // brute force 
    int rev_n = 0;
    int temp = n;
    while (temp > 0) {
        rev_n = (rev_n * 10) + temp % 10;
        temp /= 10;
    }

    if (rev_n == n) {
        cout << "yes palindomre";
    }
    else {
        cout << "Not palindomre";
    }

    return 0;
}