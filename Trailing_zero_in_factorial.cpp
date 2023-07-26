#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    // brute force

    // find factorial of n
    // iterate to each digit and inc count if 0

    // optimised way

    // we know to have zero in number there must be 2 and 5 as its prime factor
    // and in factorials the number of 2 is always more than 5
    // so the number of 5 in prime factorisation of any factorial is the number of 0

    // for eg => fact of 11 :
    // 1 X 2 X 3 X 4 X     5     X 6 X 7 X 8 X 9 X     2X5    X 11 
    // so two 5 
    // there for 2 trailing zeros
    // but for eg n = 200
    // 1 X ... 5 X ...  5X5 (25) ... (125)5X5X5 
    // there divide by 5 then 25 then 125 then 625 so on 
    int div = 5,count = 0;
    while (div <= n)
    {
        count += n/div;
        div *= 5;
    }

    cout << "trailing 0 in factorial of " <<n<< " = " << count;
    return 0;
}