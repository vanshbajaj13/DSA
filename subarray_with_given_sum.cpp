#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


void sum_zero(vector<int> v, int sum)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < v.size(); i++) {
        pre_sum += v[i];
        if (s.find(pre_sum - sum) != s.end() || pre_sum == sum) {
            int j = i, total = 0;
            do {
                total += v[j];
                cout << v[j] << " ";
                j--;
            } while (j >= 0 && total != sum);
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
    vector<int> v = { 5,8,6,13,3,-1 };
    sum_zero(v, 22);
    return 0;
}