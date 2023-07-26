#include<iostream>
#include<vector>
using namespace std;

void frequencies(vector<int> v)
{
    int count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        }
        else {
            cout << v[i - 1] << " is reapeated " << count << " times" << endl;
            count = 1;
        }
    }
    cout << v[v.size() - 1] << " is reapeated " << count << " times" << endl;

}

int main()
{
    frequencies({ 10,10,10,25,30,30,50 });
    return 0;
}