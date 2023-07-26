#include<iostream>
#include<cmath>
using namespace std;

int gcd(int n1,int n2){
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1-n2;
        }
        else
        {
            n2 = n2-n1;
        }
    }
    return n1;
}

int gcdByEuclidWithModulus(int n1 ,int n2){
    if(n2 == 0){
        return n1;
    }
    return gcdByEuclidWithModulus(n2,n1%n2);
}

int main()
{
    int n1,n2,res = 1;
    cout << "enter the number n1 : ";
    cin >> n1;
    cout << "enter the number n2 : ";
    cin >> n2;
    // brute force
    for (int i = 2; i <= min(n1,n2); i++)
    {
        if(n1%i == 0 && n2%i == 0){
            res = i;
        }
    }
    cout<<"GCD of "<<n1<<" and "<<n2<<" = "<<res<<endl;

    cout<<"GCD by euclid "<<n1<<" and "<<n2<<" = "<<gcd(n1,n2)<<endl;
    cout<<"GCD by euclid "<<n1<<" and "<<n2<<" = "<<gcdByEuclidWithModulus(n1,n2);
    return 0;
}

