#include<iostream>
#include <vector>
using namespace std;

int remove_dup(vector <int>& v)
{
    int last_index = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[last_index]) {
            last_index++;
            v[last_index] = v[i];
        }

    }
    return last_index + 1;
}

int main()
{
    vector <int> v = { 30,30,30 };
    int n = remove_dup(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}