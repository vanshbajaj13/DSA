#include<iostream>
#include<vector>
using namespace std;

int last_occ(int v[], int n)
{
    int low, high, i = 1, mid;
    while (v[i] <= n) {
        if (i == n) {
            return i;
        }
        i *= 2;
    }
    low = i / 2;
    high = i;
    while (low <= high) {
        mid = (low + high) / 2;
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
    int arr[] = { 1,10,15,20,40,60,80,100,200,500,1000 };
    cout << last_occ(arr, 2000) << endl;
    return 0;
}