#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


void subarray_with_zero_sum(vector<int>& v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            sum += v[j];
            if (sum == 0) {
                cout << "yes" << endl;
                for (int x = i; x <= j; x++) {
                    cout << v[x] << " ";
                }
                cout << endl;
                return;
            }
        }
        sum = 0;
    }
    cout << "no" << endl;

}

void sum_zero(vector<int> v)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < v.size(); i++) {
        pre_sum += v[i];
        if (s.find(pre_sum) != s.end() || pre_sum == 0) {
            int j = i, total = 0;
            do {
                total += v[j];
                cout << v[j] << " ";
                j--;
            } while (j >= 0 && total != 0);
            return;
        }
        else {
            s.insert(pre_sum);
        }
    }
    cout << "no" << endl;
}

int main()
{
    vector<int> v = { 13,-3,-10,5 };
    subarray_with_zero_sum(v);
    sum_zero(v);
    return 0;
}