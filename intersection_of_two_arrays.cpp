#include<iostream>
#include<unordered_map>
using namespace std;

int count_distinct(int arr1[], int arr2[], int n1, int n2)
{

    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n1; i++) {
        m[arr1[i]]++;
    }
    for (int i = 0; i < n2; i++) {
        auto it = m.find(arr2[i]);
        if (it != m.end() && it->second != -1) {
            count++;
            it->second = -1;
        }
    }
    return count;
}

int main()
{
    int arr1[] = { 10,10,10 };
    int arr2[] = { 10,101,10 };
    cout << count_distinct(arr1, arr2, 3, 3) << endl;
    return 0;
}