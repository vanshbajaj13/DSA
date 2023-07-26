#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_array(vector<int> v){
    int st = 0 , end = v.size()-1;
    while (st < end)    
    {
        int temp = v[st];
        v[st] = v[end];
        v[end] = temp;
        st++;
        end--;
    }
    return v;
}

int main()
{   
    vector<int> v = {10,23,1,4};
    for (auto num : v)
    {
        cout<<num<<" ";
    }
    v = reverse_array(v);
    cout<<endl;
    for (auto num : v)
    {
        cout<<num<<" ";
    }
    
    return 0;
}