#include<iostream>
#include<cmath>
using namespace std;

int rope_cutting(int n, int a, int b, int c, int res)
{
    if (n == 0) {
        return res;
    }
    if (n < 0) {
        return -1;
    }
    return max(rope_cutting(n - a, a, b, c, res + 1), max(rope_cutting(n - b, a, b, c, res + 1), rope_cutting(n - c, a, b, c, res + 1)));
}

int main()
{
    cout << rope_cutting(9, 2, 2, 2, 0);
    return 0;
}