#include<iostream>
#include<unordered_set>
using namespace std;

int count_distinct(int arr[],int n){

    unordered_set<int> m(arr,arr+n);
    
    return m.size();
}

int main()
{   
    int arr[] = {15,12,13,13,12,12,13,18};
    cout<<count_distinct(arr,8)<<endl;
    return 0;
}