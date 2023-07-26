#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    // brute force
    int fact = 1;
    while (n>0)
    {
        fact *= n--;
    }
    cout<<"factorial of n = "<<fact;
    return 0;
}