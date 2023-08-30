#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int zero_one(vector<int> v)
{
    int res = 0, zero = 0, one = 0;
    for (int i = 0; i < v.size(); i++) {
        zero = 0;
        one = 0;
        for (int j = i; j < v.size(); j++) {
            if (v[j] == 0) {
                zero++;
            }
            else {
                one++;
            }
            if (zero == one) {
                res = max(res, one + zero);
            }
        }

    }
    return res;
}

int zero_one_linear(vector<int> v)
{
    int res = 0, pre_sum = 0;
    for (int i = 0; i < v.size(); i++) {
        pre_sum += v[i];
        cout << pre_sum << " ";
        if (pre_sum - ((i + 1) / 2) == 0) {
            res = max(res, pre_sum * 2);
            // cout << res << " ";
        }
    }
    cout << endl;
    return res;
}

int main()
{
    vector<int> v = { 1,1,1,1,1,1,1,1,1,   1,0,0,1,1,0,   1,1 };
    // 0,0,1,2,2,3,3,3,4
    // 1,0,1,1,1,0,0,0,0,0,
    // 1,1,2,3,4,4,4,4,4,4
    cout << zero_one(v) << endl;
    cout << zero_one_linear(v) << endl;
    return 0;
}