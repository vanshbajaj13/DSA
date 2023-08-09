#include<iostream>
#include<vector>
#include<typeinfo>
#include<algorithm>

using namespace std;

bool mycomp(vector<int> n1, vector<int> n2)
{
    return (n1[0] < n2[0]);
}

bool overlap(vector<int> v1, vector<int> v2)
{
    if (v2[0] <= v1[1]) {
        return true;
    }
    else {
        return false;
    }
}

vector<int> merge(vector<int> v1, vector<int> v2)
{
    vector<int> v(2, 0);
    v[0] = min(v1[0], v2[0]);
    v[1] = max(v1[1], v2[1]);
    return v;
}

void merge_intervals(vector<vector<int>> v)
{
    for (auto&& i : v) {
        cout << "{ ";
        for (auto&& j : i) {
            cout << j << ", ";
        }
        cout << "} ";
    }
    cout << endl;
    sort(v.begin(), v.end(), mycomp);
    for (auto&& i : v) {
        cout << "{ ";
        for (auto&& j : i) {
            cout << j << ", ";
        }
        cout << "} ";
    }
    cout << endl;
    int i = 1;
    while (i < v.size()) {
        if (overlap(v[i - 1], v[i])) {
            v[i - 1] = merge(v[i], v[i - 1]);
            v.erase(v.begin() + i);
        }
        else {
            i++;
        }
    }

    for (auto&& i : v) {
        cout << "{ ";
        for (auto&& j : i) {
            cout << j << ", ";
        }
        cout << "} ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    merge_intervals({ {1,3},{2,4},{5,7},{6,8} });
    merge_intervals({ {7,9},{6,10},{4,5},{1,5},{2,24},{20,23} });
    return 0;
}