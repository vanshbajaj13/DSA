#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool even_odd(int n1, int n2)
{
    return (n1 % 2 == 0);
}

int lomuto_partition(vector<int>& v, int low, int high)
{
    int i = low - 1;
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

void sort_one_two_zero(vector<int>& v, int low, int high)
{
    if (low < high) {
        int partion = lomuto_partition(v, low, high);
        sort_one_two_zero(v, low, partion - 1);
        sort_one_two_zero(v, partion + 1, high);
    }
}

int main()
{
    vector <int> v1 = { -1,3,4,2,3,-23,3,2,3,-4 };
    sort(v1.begin(), v1.end());
    for (auto&& i : v1) {
        cout << i << " ";
    }
    cout << endl;
    vector <int> v2 = { 1,3,4,2,3,-23,3,0,0,0,2,3,-4,0,0 };
    sort(v2.begin(), v2.end(), even_odd);
    for (auto&& i : v2) {
        cout << i << " ";
    }
    cout << endl;
    vector <int> v3 = { 1,0,1,2,1,2,0,1,2,0,1,2,1,0,1,0,1 };
    sort_one_two_zero(v3, 0, v3.size() - 1);
    for (auto&& i : v3) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}