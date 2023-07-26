#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    vector <int> nums = { -2,1,-3,4,-1,2,1,-5,4,5,4,-1,7,8 };
    // print the max sub array

    // kades algo
    int maxArr = INT8_MIN;
    int currentSum = 0;
    for (auto&& i : nums) {
        currentSum = max(i, (currentSum + i));
        maxArr = max(maxArr, currentSum);
    }

    cout << maxArr;
    return 0;
}