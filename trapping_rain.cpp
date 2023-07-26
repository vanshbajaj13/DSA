#include<iostream>
#include<vector>
using namespace std;

int trap_rain(vector<int> v)
{
    int lmax = v[0], rmax = 0, amount = 0;

    for (int i = 1; i < v.size() - 1; i++) {
        lmax = max(lmax, v[i]);
        int j = i + 1;
        rmax = 0;
        while (j < v.size()) {
            rmax = max(rmax, v[j]);
            j++;
        }
        // cout << "lmax = " << lmax << endl;
        // cout << "rmax = " << rmax << endl;
        // cout << "v[" <<i<<"] = "<< v[i] << endl;
        int water_hold = min(lmax, rmax) - v[i];
        if (water_hold > 0) {
            amount += water_hold;
        }

    }
    return amount;
}

// effective method

int trap(vector<int>v)
{
    int amount = 0, lmax = v[0];
    int rmax[v.size()];

    rmax[v.size() - 1] = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--) {
        rmax[i] = max(v[i], rmax[i + 1]);
    }


    for (int i = 0; i < v.size() - 1; i++) {
        lmax = max(lmax, v[i]);
        int water_hold = min(lmax, rmax[i]) - v[i];
        if (water_hold > 0) {
            amount += water_hold;
        }
    }
    return amount;
}

int main()
{
    cout << trap_rain({ 3,5,2,3 }) << endl;
    cout << trap({ 3,0,1,2,5 }) << endl;
    cout << trap({ 3,0,1,2,5,3,2,1 }) << endl;
    cout << trap({ 3,0,1,2,5,0,5,3,2,1 }) << endl;
    return 0;
}