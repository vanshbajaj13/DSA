#include<iostream>
#include<unordered_map>
using namespace std;

void frequency(int arr[], int n)
{

    unordered_map<int,int> m;
    for (int i = 0; i < n; i++)
    {   
        m[arr[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {   
        auto it = m.find(arr[i]);
        if (it->second != -1)
        {
            cout<<arr[i]<<" "<<it->second<<endl;
        }
        it->second = -1;
    }
    
}

int main()
{
    int arr[] = { 15,12,13,13,12,12,13,18 };
    frequency(arr, 8);
    return 0;
}