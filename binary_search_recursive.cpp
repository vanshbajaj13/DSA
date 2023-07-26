#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> v, int n, int high, int low = 0)
{
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;
    if (v[mid] == n) {
        return mid;
    }
    else if (v[mid] > n) {
        return binary_search(v, n, mid - 1, low);
    }
    else {
        return binary_search(v, n, high, mid + 1);

    }
}

int main()
{
    cout << binary_search({ 10,20,30,40 }, 10, 4) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 20, 5) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 30, 5) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 40, 5) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 50, 5) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 60, 5) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 0, 5) << endl;
    return 0;
}