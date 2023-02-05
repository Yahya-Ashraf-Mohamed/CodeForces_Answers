// {CF486-D2-A} http://codeforces.com/contest/486/problem/A

#include <iostream>
#define ll long long
using namespace std;


int main()
{
    ll n;
    cin >> n;
    cout << (((n % 2) == 0) ? n / 2 : (-(n + 1) / 2));
    return 0;
}