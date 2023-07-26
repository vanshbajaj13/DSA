#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    // brute force
    int i;
    for (i = 1; i < sqrt(n); i++)
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
        }
    }
    for ( i; i >= 1; i--)
    {
        if (n%i == 0)
        {
            cout<<n/i<<" ";
        }
        
    }
    
    
    return 0;
}