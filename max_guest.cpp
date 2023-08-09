#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_guest(vector<int> ar,vector<int> dep){
    sort(ar.begin(),ar.end());
    sort(dep.begin(),dep.end());
    int maxGuest = 0,curGuest = 0,i = 0,j = 0;
    vector<int> guests(ar.size());
    while (i < ar.size() && j < dep.size())
    {
        if (ar[i] <= dep[j])
        {
            curGuest++;
            i++;
        }
        else
        {
            curGuest--;
            j++;
        }
        maxGuest = max(maxGuest,curGuest);
    }
    return maxGuest;
}

int main()
{
    cout<<max_guest({900,940},{1000,1030})<<endl;
    cout<<max_guest({900,600,700},{1000,800,730})<<endl;
    cout<<max_guest({800,700,600,500},{840,820,830,530})<<endl;
    cout<<max_guest({900,940,950,1100,1500,1800},{910,1200,1120,1130,1900,2000})<<endl;
    return 0;
}