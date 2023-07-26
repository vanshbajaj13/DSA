#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    if (n2 == 0)
    {
        return n1;
    }
    return gcd(n2,n1%n2);
}

int main()
{
    int n1,n2,res = 1;
    cout << "enter the number n1 : ";
    cin >> n1;
    cout << "enter the number n2 : ";
    cin >> n2;

    // n1 * n2 = gcd(n1,n2) * lcm(n1,n2)

    // there for lcm(n1,n2) = (n1*n2)/gcd(n1,n2)

    cout<<"LCM of "<<n1<<" and "<<n2<<" = "<<((n1*n2)/gcd(n1,n2));

    return 0;
}