// {CF584-D2-A} http://codeforces.com/contest/584/problem/A

#include <string>
#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    ll NumberLength, DivisableBy;
    cin >> NumberLength >> DivisableBy;
    if (DivisableBy == 10 && NumberLength == 1)
    {
        cout << -1;
        return 0;
    }
    if (DivisableBy == 10) {
        cout << DivisableBy;
        for (int i = 0; i < NumberLength - 2; i++)
            cout << 0;
    }
    else
        for (int i = 0; i < NumberLength; i++)
            cout << DivisableBy;
}