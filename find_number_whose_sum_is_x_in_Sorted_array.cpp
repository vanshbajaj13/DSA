#include<iostream>
#include<vector>
using namespace std;

void find_num(vector<int> v, int n)
{
    int low = 0, high = v.size() - 1, sum, mid;
    while (low <= high) {
        sum = v[low] + v[high];
        // cout << sum << endl;
        if (sum == n) {
            cout << v[low] << " " << v[high] << endl;
            return;
        }
        else if (sum > n) {
            high -= 1;
        }
        else {
            low += 1;
        }
    }
    cout << "-1"<<endl;
}

void find_num_trip(vector<int> v, int n)
{
    int low, high, sum;
    for (int i = 0; i < v.size(); i++) {
        low = i + 1;
        high = v.size() - 1;
        while (low <= high) {
            sum = v[i] + v[low] + v[high];
            // cout << sum << endl;
            if (sum == n) {
                cout<<v[i]<<" " << v[low] << " " << v[high] << endl;
                return;
            }
            else if (sum > n) {
                high -= 1;
            }
            else {
                low += 1;
            }
        }
    }

}

int main()
{
    find_num({ 2,5,8,12,30 }, 17);
    find_num({ 3,8,13,18 }, 17);
    find_num_trip({ 2,3,4,8,9,20,40 }, 32);
    return 0;
}