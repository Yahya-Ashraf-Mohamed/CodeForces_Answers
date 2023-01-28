// {CF707-D2-A} http://codeforces.com/contest/707/problem/A

#include <string>
#include <iostream>
using namespace std;


int main()
{
    bool isColor;
    int m, n;
    cin >> m >> n;

    char color;
    for (int i = 0; i < m*n; i++)
    {
        cin >> color;
        if (color == 'C' || color == 'M' || color == 'Y')
        {
            cout << "#Color";
            return 0;
        }
    }

    cout << "#Black&White";
    
    
    return 0;
}

