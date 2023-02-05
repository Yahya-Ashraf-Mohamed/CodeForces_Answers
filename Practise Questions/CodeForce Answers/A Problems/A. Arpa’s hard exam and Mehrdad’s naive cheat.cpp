// {CF742-D2-A} http://codeforces.com/contest/742/problem/A

#include <string>
#include <iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    int results1[4] = { 6, 8, 4, 2 };
    if (n == 0)
        cout << 1 << endl;
    else
        cout << results1[n % 4] << endl;

    return 0;
}