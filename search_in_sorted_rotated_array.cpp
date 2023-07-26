#include<iostream>
#include<vector>
using namespace std;

int port(vector<int> v)
{
    int low = 0, high = v.size() - 1, mid, por = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (v[mid] <= v[high]) {
            if (por == -1) {
                por = mid;
            }
            else if (v[mid] <= v[por]) {
                por = mid;
            }
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << "por = " << v[por] << endl;
    return por;
}

int search(vector<int> v, int n)
{
    int low = 0, high = v.size() - 1, mid, por;
    por = port(v);
    if (n == v[por]) {
        return por;
    }
    else if (n < v[por]) {
        return -1;
    }
    else if (n > v[por] && n <= v[v.size() - 1]) {
        low = por;
        high = v.size() - 1;
    }
    else {
        low = 0;
        high = por - 1;
    }


    while (low <= high) {
        mid = (high + low) / 2;
        if (v[mid] == n) {
            return mid;
        }
        else if (v[mid] > n) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int search_binary(vector<int> v, int n)
{
    int low, high, mid;
    low = 0;
    high = v.size()-1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (v[mid] == n) {
            return mid;
        }

        if (v[low] < v[mid]) // left side sorted
        {
            if (n >= v[low] && n < v[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if (n >= v[low] && n < v[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

    }



    return -1;
}

int main()
{
    cout << search({ 7,8,9,10,11 }, 6) << endl; // -1
    cout << search({ 4,5,6,1,2,3 }, 6) << endl; // 2
    cout << search({ 7,8,9,10,11,6 }, 6) << endl; //5
    cout << search({ 10,20,40,60,5,8 }, 5) << endl; //4
    cout << search({ 10,20,40,60,5 }, 5) << endl; // 4
    cout << search({ 10,20,40,60,5,8 }, 8) << endl;// 5
    cout << search({ 10,20,40,60,5 }, 8) << endl; // -1
    cout << search({ 10,20,40,50,60,5,8 }, 20) << endl; // 1
    cout << search({ 60,5,8,10,20,40,50 }, 20) << endl; // 4
    cout << search({ 10,20,40,60,5,8 }, 11) << endl; // -1
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << search_binary({ 7,8,9,10,11 }, 6) << endl; // -1
    cout << endl;
    cout << search_binary({ 4,5,6,1,2,3 }, 6) << endl; // 2
    cout << endl;
    cout << search_binary({ 7,8,9,10,11,6 }, 6) << endl; //5
    cout << endl;
    cout << search_binary({ 10,20,40,60,5,8 }, 5) << endl; //4
    cout << endl;
    cout << search_binary({ 10,20,40,60,5 }, 5) << endl; // 4
    cout << endl;
    cout << search_binary({ 10,20,40,60,5,8 }, 8) << endl;// 5
    cout << endl;
    cout << search_binary({ 10,20,40,60,5 }, 8) << endl; // -1
    cout << endl;
    cout << search_binary({ 10,20,40,50,60,5,8 }, 20) << endl; // 1
    cout << endl;
    cout << search_binary({ 60,5,8,10,20,40,50 }, 20) << endl; // 4
    cout << endl;
    cout << search_binary({ 10,20,40,60,5,8 }, 11) << endl; // -1
    cout << endl;
    return 0;
}