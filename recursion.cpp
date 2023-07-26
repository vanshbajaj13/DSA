#include<iostream>
using namespace std;


void rec1(int n)
{
    if (n == 0) {
        return;
    }
    rec1(n - 1);
    cout << n << endl;
    rec1(n - 1);
}

int log_n_base_2(int n)
{
    if (n == 1) {
        return 0;
    }

    else {
        return 1 + log_n_base_2(n / 2);
    }
}

void dec_to_bin(int n)
{
    if (n == 0) {
        return;
    }

    dec_to_bin(n / 2);
    cout << n % 2;
}

void print_n_to_1(int n)
{
    if (n == 0) {
        cout << endl;
        return;
    }
    else {
        cout << n << ' ';
        print_n_to_1(n - 1);
    }
}
void print_1_to_n(int n)
{
    if (n == 0) {
        return;
    }
    else {
        print_1_to_n(n - 1);
        cout << n << ' ';
    }
}


int tail_rec_fact(int n, int res)
{
    if (n == 0 || n == 1) {
        return res;
    }
    return tail_rec_fact(n - 1, res * n);
}



int main()
{
    rec1(5);
    cout << log_n_base_2(16) << endl;
    dec_to_bin(8);
    cout << endl;
    print_n_to_1(10);
    print_1_to_n(10);
    cout << endl << tail_rec_fact(4, 1);
    return 0;
}