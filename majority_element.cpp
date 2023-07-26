#include<iostream>
#include<vector>
using namespace std;

int majority_element(vector<int> v)
{
    int res = 0, count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[res] == v[i]) {
            count++;
        }
        else {
            count--;
        }
        if (count == 0) {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[res] == v[i]) {
            count++;
        }
    }
    if (count <= v.size() / 2) {
        res = -1;
    }
    return res;
}

int main()
{
    cout << majority_element({ 8,4,8,3,8 }) << endl;
    cout << majority_element({ 6,8,4,8,8 }) << endl;
    cout << majority_element({ 8,7,6,8,6,6,6,6 }) << endl;
    cout << majority_element({ 3,7,4,7,7,5 }) << endl;
    return 0;
}