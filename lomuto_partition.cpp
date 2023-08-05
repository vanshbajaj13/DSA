#include<iostream>
#include<vector>
using namespace std;

int lumoto_partition(vector<int>& v, int low, int high)
{
    int  i = low - 1;
    while (low < high) {
        if (v[low] <= v[high]) {
            i++;
            swap(v[i], v[low]);
        }
        low++;
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}

int main()
{

    vector<int> v = { 70,60,80,40,30 };
    cout << lumoto_partition(v, 0, v.size() - 1) << endl;
    for (auto el : v) {
        cout << el << " ";
    }

    return 0;
}