#include<iostream>
#include<vector>
using namespace std;

int max_profit(vector<int> v)
{
    int max_prof = 0;
    for (int i = 1; i < v.size(); i++) {
        int cur_profit = v[i] - v[i - 1];
        max_prof = max(max_prof, max_prof + cur_profit);
    }
    return max_prof;
}


int main()
{
    cout << max_profit({ 1,5,3,8,12 }) << endl;
    cout << max_profit({ 30,20,10 }) << endl;
    cout << max_profit({ 10,20,30 }) << endl;
    cout << max_profit({ 1,5,3,1,2,8 }) << endl;
    cout << max_profit({ 1,5,3,345,35,353,53,5345,345,345,346,346,4634,63,4634,6,1,2,8 }) << endl;
    return 0;
}