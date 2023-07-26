#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int max_diff(vector<int> v)
{
    int max_dif = v[1] - v[0],min_val = v[0];
    for (int i = 1; i < v.size(); i++) {
        max_dif = max(max_dif,v[i]-min_val);
        min_val = min(min_val,v[i]);
    }
    return max_dif;
}

// max diff  of a[j] - a[i] such that j > i
int main()
{
    cout << max_diff({ 2,3,10,6,4,8,1 }) << endl;
    return 0;
}