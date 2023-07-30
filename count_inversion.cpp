#include<iostream>
#include<vector>
using namespace std;



int merge_and_count(vector<int>& v, int l, int mid, int r)
{
    // cout<<"l = "<<l<<endl;
    // cout<<"mid = "<<mid<<endl;
    // cout<<"r = "<<r<<endl;
    int n1 = mid - l + 1, n2 = r - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) {
        left[i] = v[l + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = v[mid + 1 + i];
    }
    int k = l, i = 0, j = 0, count = 0;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            v[k] = left[i];
            i++;
        }
        else {
            v[k] = right[j];
            j++;
            count += (n1 - i);
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
    // cout << "left arr ";
    // for (int i = 0; i < n1; i++) {
    //     cout << left[i] << " ";
    // }
    // cout << endl;
    // cout << "right arr ";
    // for (int i = 0; i < n2; i++) {
    //     cout << right[i] << " ";
    // }
    // cout << endl << "count = " << count << endl;
    return count;
}

int count_inversion_by_merge_sort(vector<int>& v, int l, int r)
{
    int res = 0;
    if (r > l) {
        int mid = l + (r - l) / 2;
        res += count_inversion_by_merge_sort(v, l, mid);
        res += count_inversion_by_merge_sort(v, mid + 1, r);
        res += merge_and_count(v, l, mid, r);
    }
    return res;
}


int count_inversion(vector<int>& v)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] > v[j]) {
                count++;
            }

        }

    }
    return count;
}

int main()
{

    // vector<int> v = { 2,5,8,11,3,6,9,13 };
    vector<int> v = { 1,2,3 };
    cout << count_inversion(v) << endl;
    cout << count_inversion_by_merge_sort(v, 0, v.size() - 1) << endl;

    return 0;
}