#include<iostream>
using namespace std;

int subset_sum(int arr[] , int sum , int curSum , int n){
    if (n == 0)
    {
        if (curSum == sum)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    return (subset_sum(arr,sum,curSum+arr[n-1],n-1) + subset_sum(arr,sum,curSum,n-1));
}


int main()
{   
    int arr[] = {10,5,2,3,6};
    int arr2[] = {1,2,3};
    int arr3[] = {10,20,15};
    cout<<subset_sum(arr,8,0,5)<<endl;
    cout<<subset_sum(arr,0,0,3)<<endl;
    cout<<subset_sum(arr2,4,0,3)<<endl;
    cout<<subset_sum(arr3,37,0,3)<<endl;
    return 0;
}