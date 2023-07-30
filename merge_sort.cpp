#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) {
        left[i] = v[low + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = v[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (left[i] < right[j]) {
            v[k] = left[i];
            i++;
        }
        else {
            v[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        v[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        v[k] = right[j];
        j++;
        k++;
    }

}
void merge_sort(vector<int>& v, int l, int r)
{
    if (r > l) {
        int mid = (l + r) / 2;
        merge_sort(v, l, mid);
        merge_sort(v, mid + 1, r);
        merge(v, l, mid, r);
    }
}


int main()
{

    vector<int> v = { 100,15,20,40,8,11,5,-1,1,1,1,0,1,1,-1,1 };
    merge_sort(v, 0, v.size() - 1);
    for (auto el : v) {
        cout << el << " ";
    }

    return 0;
}