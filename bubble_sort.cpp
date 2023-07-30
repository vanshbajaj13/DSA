#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>& v)
{
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                // for (auto el : v) {
                //     cout << el << " ";
                // }
                // cout << endl;
            }
        }
        // cout << "1 round" << endl;
    }

}

int main()
{

    vector<int> v = { -1,5,4,3,0,2,1,9,1,1 };
    bubble_sort(v);
    for (auto el : v) {
        cout << el << " ";
    }

    return 0;
}