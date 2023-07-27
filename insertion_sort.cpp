#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>& v)
{
    for (int i = 1; i < v.size(); i++) {
        int key = v[i];
        int j = i-1;
        while (j >= 0 && v[j] > key  )
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main()
{

    vector<int> v = { -1,5,4,- 3,0,2,1,5,1,1 };
    // vector<int> v = { 5,4,3,2,1 };
    insertion_sort(v);
    for (auto el : v) {
        cout << el << " ";
    }

    return 0;
}