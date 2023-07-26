#include<iostream>
#include<vector>
using namespace std;

int last_occ(vector<int> v, int n)
{
    int low, high, mid, focc = -1,locc = -1,templow,temphigh;
    low = 0;
    high = v.size() - 1;
    while (low <= high) {
        mid = (high + low) / 2;
        if (v[mid] == n) {
            locc = mid;
            low = mid + 1;
        }
        else if (v[mid] > n) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    low = 0;
    high = v.size() - 1;
    while (low <= high) {
        mid = (high + low) / 2;
        if (v[mid] == n) {
            focc = mid;
            high = mid -1;
        }
        else if (v[mid] > n) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (locc == -1 && focc == -1)
    {
        return 0;
    }
    
    return (locc - focc)+1;
}

int main()
{
    cout << last_occ({ 5,10,10,20,20 }, 10) << endl;
    cout << last_occ({ 10,10,10,20,30,40,50 }, 10) << endl;
    cout << last_occ({ 10,10,10,20,30,40 }, 10) << endl;
    cout << last_occ({ 10,10,10,20,30,40 }, 20) << endl;
    cout << last_occ({ 10,20,20,20,30,40,50 }, 20) << endl;
    cout << last_occ({ 10,20,30,30,30,30,30,30,30,40,50 }, 30) << endl;
    cout << last_occ({ 10,20,30,40,40,50 }, 40) << endl;
    cout << last_occ({ 10,10,10,20,30,30,40,50,50,50,50 }, 50) << endl;
    cout << last_occ({ 10,20,30,40,50,50,50,50 }, 60) << endl;
    cout << last_occ({ 10,20,30,40,50,50,50,50 }, 0) << endl;
    return 0;
}