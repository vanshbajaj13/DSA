#include<iostream>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1) {
        return 0;
    }
    int prv_Josephus = josephus(n - 1, k) + (k - n);
    if (prv_Josephus < 0) {
        // cout << prv_Josephus << " " << k << " " << n <<" "<< (prv_Josephus - (k - n))<< endl;
        return prv_Josephus + n;
    }
    else {
        // cout << n << " " << k << " " << prv_Josephus << endl;
        return prv_Josephus;
    }

    //  in video lecture he uses directly return (josephus(n-1,k)+k)%n without any if or else

}

int main()
{
    cout << josephus(1, 3) << endl;
    cout << josephus(2, 3) << endl;
    cout << josephus(3, 3) << endl;
    cout << josephus(4, 3) << endl;
    cout << josephus(5, 3) << endl;
    cout << josephus(6, 3) << endl;
    cout << josephus(7, 3) << endl;
    cout << josephus(8, 3) << endl;
    cout << endl;
    cout << josephus(1, 2) << endl;
    cout << josephus(2, 2) << endl;
    cout << josephus(3, 2) << endl;
    cout << josephus(4, 2) << endl;
    cout << josephus(5, 2) << endl;
    cout << endl;
    cout << josephus(5, 3) << endl;


    return 0;
}