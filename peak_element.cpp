#include<iostream>
#include<vector>
using namespace std;

void find_peak_element(vector<int> v)
{
    if (v[0] >= v[1]) {
        cout << v[0] << " ";
    }
    int i;
    for (i = 1; i < v.size() - 1; i++) {
        if (v[i] >= v[i - 1] && v[i] >= v[i + 1]) {
            cout << v[i] << " ";
        }

    }
    if (v[i] >= v[i - 1]) {
        cout << v[i] << " ";
    }
}

int peak(vector<int> v)
{
    int low = 0, high = v.size() - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if ((mid == 0 || v[mid - 1] <= v[mid]) && (mid == v.size() - 1 || v[mid] >= v[mid + 1])) {
            return v[mid];
        }
        else if (mid > 0 && v[mid - 1] >= v[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;

}

int main()
{
    find_peak_element({ 80,70,5,10,20,15,7,90 });
    cout << endl;
    cout << peak({ 10,30,20,30,50,80,60 }) << endl;
    return 0;
}