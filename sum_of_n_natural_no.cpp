#include<iostream>
using namespace std;

int first_n(int n){
    if (n == 1) 
    {
        return n;
    }

    return n+first_n(n-1);
    
}

int main()
{
    cout<<first_n(2)<<endl;
    cout<<first_n(4)<<endl;
    cout<<first_n(5)<<endl;
    return 0;
}