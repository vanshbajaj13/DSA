#include<iostream>
#include<vector>
using namespace std;

void union_of_arrays(vector<int>& v1, vector<int> v2)
{
    int i = 0, j = 0, lno = min(v1[0], v2[0]) - 1;
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] == v2[j]) {
            if (lno != v1[i]) {
                cout << v1[i] << " ";
                lno = v1[i];
            }
            i++;
            j++;
        }

        else if (v1[i] < v2[j]) {
            if (lno != v1[i]) {
                cout << v1[i] << " ";
                lno = v1[i];
            }
            i++;
        }
        else if (v1[i] > v2[j]) {
            if (lno != v2[j]) {
                cout << v2[j] << " ";
                lno = v2[j];
            }
            j++;
        }
    }
    while (i < v1.size()) {
        if (lno != v1[i]) {
            cout << v1[i] << " ";
            lno = v1[i];
        }
        i++;
    }
    while (j < v2.size()) {
        if (lno != v2[j]) {
            cout << v2[j] << " ";
            lno = v2[j];
        }
        j++;
    }


}

int main()
{

    vector<int> v1 = { 1,3,4,5,8 };
    vector<int> v2 = { 2,8,8,8,8,9,9,10,15 };
    union_of_arrays(v1, v2);


    return 0;
}