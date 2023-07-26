#include<iostream>
#include<vector>
using namespace std;

float median(vector<int> v1, vector<int> v2)
{
    int i = 0, j = 0;
    vector <int> res;
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            res.push_back(v1[i]);
            i++;
        }
        else {
            res.push_back(v2[j]);
            j++;
        }
    }
    while (i < v1.size()) {
        res.push_back(v1[i]);
        i++;
    }
    while (j < v2.size()) {
        res.push_back(v2[j]);
        j++;
    }

    int mid = (res.size() - 1) / 2;

    if ((res.size() - 1) % 2 == 0) {
        return res[mid];
    }
    else {
        return (res[mid] + res[mid + 1]) / 2.0;
    }
}

int main()
{
    cout << median({ 10,20,30,40,50 }, { 5,15,25,35,45 }) << endl;
    cout << median({ 10,20,30,40,50 }, { 5,15,25,35 }) << endl;
    cout << median({ 1,2,3,4,5,6 }, { 10,20,30,40,50 }) << endl;
    cout << median({ 10,20,30,40,50,60 },{1,2,3,4,5}) << endl;
    return 0;
}