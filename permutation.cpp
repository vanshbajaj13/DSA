#include<iostream>
#include<string>
using namespace std;

void permutation(string s, int n = 0)
{
    if (n == s.size()) {
        cout << s << endl;
    }

    for (int i = n; i < s.size(); i++) {
        swap(s[i],s[n]);
        permutation(s,n+1);
        swap(s[i],s[n]);
    }

}

int main()
{
    permutation("ABCD");
    return 0;
}