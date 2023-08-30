#include<iostream>
#include<unordered_set>
using namespace std;

void pair_with_sum(int arr[], int n, int s)
{
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        auto it = st.find(s - arr[i]);
        if (it != st.end()) {
            cout << "yes " << *it << " and " << arr[i] << endl;
            return;
        }
        else {
            st.insert(arr[i]);
        }

    }
    cout << "no" << endl;
}

int main()
{
    int arr[] = { 5,8,-3,6 };
    pair_with_sum(arr, 4, 3);
    return 0;
}