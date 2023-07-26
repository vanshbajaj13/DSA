#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> v, int n)
{
    int low, high, mid;
    low = 0;
    high = v.size() - 1;
    while (low <= high) {
        mid = (high + low) / 2;
        if (v[mid] == n) {
            return mid;
        }
        else if (v[mid] > n) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    cout << binary_search({ 10,20,30,40,50 }, 10) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 20) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 30) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 40) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 50) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 60) << endl;
    cout << binary_search({ 10,20,30,40,50 }, 6) << endl;
    return 0;
}