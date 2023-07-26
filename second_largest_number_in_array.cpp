#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int second_largest(vector <int> v)
{
    int lar = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[lar] < v[i]) {
            lar = i;
        }
    }
    int sec_lar = -1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < v[lar]) {
            if (sec_lar != -1 && v[sec_lar] < v[i]) {
                sec_lar = i;
            }
            else if (sec_lar == -1) {
                sec_lar = i;

            }
        }
    }
    return sec_lar;
}

int scd_largest(vector <int> v)
{
    int largest = 0;
    int res = -1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > v[largest]) {
            res = largest;
            largest = i;
        }
        else if (v[i] < v[largest]) {
            if (res == -1) {
                res = i;
            }
            else if (v[i] > v[res]) {
                res = i;
            }
        }

    }
    return res;

}

int main()
{
    vector<int> v = { 5,20,8,13,20,12 };
    cout << "index of second largest number = " << second_largest(v) << endl;
    cout << "index of second largest number = " << scd_largest(v);

    return 0;
}