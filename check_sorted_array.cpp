#include<iostream>
#include<vector>
using namespace std;

bool check_sorted(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    vector <int> v = { 5,12,30,2,35 };
    if (check_sorted(v)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}