#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kth_smallest_no(vector<int> v, int k)
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i + 1 == k) {
            return v[i];
        }

    }
    return -1;
}


int kth_smallest_no_by_using_lomuto_partiton(vector<int> v, int low, int high, int k)
{
    int res = -1;
    if (low < high) {
        int i = low - 1;
        while (low < high) {
            if (v[low] <= v[high]) {
                i++;
                swap(v[low], v[i]);
            }
            low++;
        }
        swap(v[high], v[i + 1]);
        res = i + 1;
    }
    if (res == k - 1) {
        return v[res];
    }
    else if (res < k - 1) {
        return kth_smallest_no_by_using_lomuto_partiton(v, res + 1, high, k);
    }
    else {
        return kth_smallest_no_by_using_lomuto_partiton(v, low, res - 1, k);
    }
}

int main()
{
    cout << kth_smallest_no({ 10,5,12,30 }, 2) << endl;
    cout << kth_smallest_no({ 30,20,5,10,8 }, 4) << endl;
    cout << kth_smallest_no_by_using_lomuto_partiton({ 10,5,12,30 }, 0, 3, 2) << endl;
    cout << kth_smallest_no_by_using_lomuto_partiton({ 30,20,5,10,8 }, 0, 4, 4) << endl;
    return 0;
}