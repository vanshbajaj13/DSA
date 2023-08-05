#include<iostream>
#include<vector>
using namespace std;


int hoare_partition(vector<int>& v, int low, int high)
{
    int  pivot = v[low];
    int i = low - 1, j = high + 1;
    while (true) {
        do {
            i++;
        } while (v[i] < pivot);
        do {
            j--;
        } while (v[j] > pivot);
        if (i >= j || j == 0) {
            return j;
        }
        swap(v[i], v[j]);
    }

}


void quick_sort(vector<int>& v, int low, int high)
{
    if (low < high) {
        int mid = hoare_partition(v, low, high);
        quick_sort(v, low, mid);
        quick_sort(v, mid + 1, high);
    }

}


int main()
{

    // vector<int> v = { 30,70,60,80,40,30 };
    vector<int> v = { 5,5,3,8,4,5,2,7,1,5,10 };
    quick_sort(v, 0, (v.size() - 1));
    for (auto el : v) {
        cout << el << " ";
    }

    return 0;
}