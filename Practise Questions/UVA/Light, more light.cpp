// {UVA 10110} https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051

#include <string>
#include <iostream>
#include <math.h>
#include<cmath>

using namespace std;

#define ll long long

int main() {
    
    ll Number_Of_Bulbs;
    while (cin >> Number_Of_Bulbs && Number_Of_Bulbs != 0)
    {
        ll SquareRoot = (ll)sqrt(Number_Of_Bulbs);
        cout << ((SquareRoot * SquareRoot == Number_Of_Bulbs) ? "Yes" : "No") << endl;
    }
    
    return 0;
}

