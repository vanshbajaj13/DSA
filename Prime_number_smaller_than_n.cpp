#include<vector>
#include<cmath>
#include<iostream>
using namespace std;


int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    // brute force
    // itertrate if prime then print


    vector<int> res;
    res.assign(n, 0);
    // optimised
    for (int i = 2; i <= sqrt(n); i++) {
        if (res[i] == 0) {
            int x = 2;
            while (i * x < n) {
                res[i * x] = 1;
                x++;
            }
        }

    }

    for (int i = 2; i < n; i++)
    {
        if (res[i] == 0)
        {
            cout<<i<<' ';
        }
        
    }
    

    return 0;
}