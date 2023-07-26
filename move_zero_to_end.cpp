#include<iostream>
#include<vector>
using namespace std;
void move_zero(vector <int>& v)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0)
        {
            swap(v[count],v[i]);
            count++;
        }
        
    }

}

int main()
{
    vector <int> v = { 0,0,0,0,10,0,20,30,0,7,0,0,0 };
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    move_zero(v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}