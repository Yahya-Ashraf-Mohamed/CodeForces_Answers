// {CF469-D2-A} http://codeforces.com/contest/469/problem/A

#include <iostream>
using namespace std;
#include <set>

int main() 
{
    int Levels, PassedLevels, input;
    set<int>TotalLevelsPassed;

    cin >> Levels;
    for (int i = 2; i > 0; i--)
    {
        for (cin >> PassedLevels; PassedLevels--;)
        {
            cin >> input;
            TotalLevelsPassed.insert(input);
        }
    }
    cout << (Levels == TotalLevelsPassed.size() ? "I become the guy.\n" : "Oh, my keyboard!\n");
    return 0;
}