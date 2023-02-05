// {UVA 10106} https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1047

#include <string>
#include <iostream>
#include <math.h>
#include<cmath>
#include <algorithm>

//#include <bits/stdc++.h>
using namespace std;

#define max 1000
#define ll long long

int main() {

        // Save the two numbers in string as our range is bigger than ll
        string FirstNum, SecondNum;
        cin >> FirstNum >> SecondNum;

        // ex:-
            // 75
            // X
            // 324
            // -------

        // As FirstNum[0] is 7 and we start multiblying from the units so we need FirstNum[0] = 5
        // so we have to reverse the two strings
        reverse(FirstNum.begin(), FirstNum.end());
        reverse(SecondNum.begin(), SecondNum.end());

        ll Result[max];
        memset(Result, 0, sizeof(Result)); // set the array with zeros
        int Carry, Value; // for 23*56 as 3*6 = 18 so value is 8 and carry 1 to be added on 3*5

        for (ll i = 0; i < FirstNum.length(); i++)
        {
            for (ll j = 0; j < SecondNum.length(); j++)
            {
                Result[i + j] += (FirstNum[i] - '0') * (SecondNum[j] - '0');
            }
        }

        // 75 * 324
        //  -------------------
        // | 21 | 29 | 38 | 20 | 
        //  -------------------

        // Now we have to separate carry from value and add it to the next index

        for (ll i = 0; i < max; i++)
        {
            Carry = Result[i] / 10;
            Result[i + 1] += Carry;
            Result[i] %= 10;
        }

        reverse(Result, Result + max);

        int i;
        for (i = 0; i < max; i++)
            if (Result[i] != 0)
                break;

        for (; i < max; i++)
            cout << Result[i];

    return 0;
}

