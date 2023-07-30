#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>& v1,vector<int> v2)
{
    int i = 0 , j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] == v2[j]) 
        {   
            if (v1[i] != v1[i-1] || i == 0)
            {
                cout<<v1[i]<<" ";
            }
            i++;
            j++;
        }
        else if(v1[i] > v2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
        
    }
    

}

int main()
{

    vector<int> v1 = { 1,1,3,3,3 };
    vector<int> v2 = { 1,1,1,1,3,5,7 };
    insertion(v1,v2);
    

    return 0;
}