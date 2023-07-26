#include<iostream>
using namespace std;

void tower_of_hanoi(int n, char src, char dest, char aux)
{
    if (n == 1) {
        cout << "Move disc " << n << " from " << src << " to " << dest << endl;
        return;
    }


    tower_of_hanoi(n - 1, src, aux, dest);
    cout << "Move disc " << n << " from " << src << " to " << dest << endl;
    tower_of_hanoi(n - 1, aux, dest, src);
}


int main()
{
    tower_of_hanoi(4, 'A', 'C', 'B');
    cout << "for 3" << endl;
    tower_of_hanoi(3, 'A', 'C', 'B');
    cout << "for 2" << endl;
    tower_of_hanoi(2, 'A', 'C', 'B');
    return 0;
}