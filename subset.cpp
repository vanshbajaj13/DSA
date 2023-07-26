#include<iostream>
#include<string>
using namespace std;

void subsets(string s, string curr = "", int n = 0)
{
    if (n == s.size()) {
        cout << curr << endl;
        return;
    }
    subsets(s, curr, n + 1);
    subsets(s, curr + s[n], n + 1);
}

int main()
{
    subsets("ABC");
    return 0;
}