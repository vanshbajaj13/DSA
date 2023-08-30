#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int sum_zero(vector<int> v, int sum)
{
    unordered_map<int, int> s;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < v.size(); i++) {
        pre_sum += v[i];
        if (pre_sum == sum) {
            res = i + 1;
        }
        if (s.find(pre_sum - sum) != s.end()) {
            res = max(res, (i - s[pre_sum - sum]));
        }
        else {
            s[pre_sum] = i;
        }

    }
    return res;
}

int main()
{
    vector<int> v = { 3,3,-3,-8,8,5,-6,6,1,-2,2 };
    cout << sum_zero(v, 0) << endl;
    return 0;
}