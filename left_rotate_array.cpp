#include<iostream>
#include<vector>
using namespace std;


void reverse(vector<int>& v, int low, int high)
{
    while (low < high) {
        swap(v[low], v[high]);
        low++;
        high--;
    }
    return;
}

void left_rotate(vector<int>& v, int n = 1)
{
    if (n == 0 || n == v.size()) {
        return;
    }
    if (n > v.size()) {
        n = n % v.size();
    }
    reverse(v, 0, n - 1);
    reverse(v, n, v.size() - 1);
    reverse(v, 0, v.size() - 1);
}


int main()
{
    vector <int> v = { 1,2,3,4,5,6 };
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    left_rotate(v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    left_rotate(v, 15);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


    return 0;
}