#include<iostream>
#include<string>
using namespace std;

bool palindrome_check(string st)
{
    if (st.size() == 0 || st.size() == 1) {
        return true;
    }

    return ((st[0] == st[st.size() - 1]) && palindrome_check(st.substr(1, st.size() - 2)));
}


bool palindrome_check_it(string& st, int start, int end)
{
    if (start >= end) {
        return true;
    }

    return ((st[start] == st[end]) && palindrome_check_it(st, start + 1, end - 1));
}



int main()
{
    cout << palindrome_check("asdsa") << endl;
string s = "asddffddsa";
    cout << palindrome_check_it(s, 0, s.size() - 1);

    return 0;
}