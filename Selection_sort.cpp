#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int>& v)
{
    for (int i = 0; i < v.size() - 1; i++) {
        int k = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[k] > v[j]) {
                k = j;
            }
        }
        swap(v[i], v[k]);
    }

}

int main()
{

    vector<int> v = { -1,5,4,3,0,2,1,5,1,1 };
    selection_sort(v);
    for (auto el : v) {
        cout << el << " ";
    }

    return 0;
}