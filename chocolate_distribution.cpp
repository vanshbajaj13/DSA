#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector contain packets of chocolate such that v[i] = no. of chocolate in ith packet
// m is the no. of children
// divide chocolta to all chilren such that
// rule 1 = each children get exactlt 1 packet
// rule 2 = the diff between the max chocolate and min chocolate is min


int chocolate_distribution(vector<int> v, int m)
{
    int min_diff = INT16_MAX, cur_diff = 0, mn, mx;
    sort(v.begin(), v.end());

    for (int i = m - 1; i < v.size(); i++) {
        cur_diff = v[i] - v[i-(m-1)];
        min_diff = min(cur_diff, min_diff);
    }
    return min_diff;
}

int main()
{
    cout << chocolate_distribution({ 7,3,2,4,9,12,56 }, 3) << endl;
    cout << chocolate_distribution({ 7,2,3,4,9,12,56 }, 3) << endl;
    cout << chocolate_distribution({ 3,4,1,9,56,7,9,12 }, 5) << endl;
    cout << chocolate_distribution({ 2,6,6,6,6,6,7,1 }, 5) << endl;
    return 0;
}