#include<iostream>
#include<vector>
using namespace std;

void leaders(vector <int> v)
{
    int curMax = v[v.size() - 1];
    cout << curMax << " ";
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] > curMax) {
            cout << v[i] << " ";
            curMax = v[i];
        }
    }
    cout << endl;
}

int main()
{
    vector<int> v = { 7,10,4,3,6,5,5,2 };
    leaders(v);
    leaders({ 10,20,30 });
    leaders({ 30,20,10 });
    return 0;
}