#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"no. of digits in "<<n<<" = "<<floor(log10(n)+1);
    return 0;
}