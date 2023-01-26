// {CF160-D2-A} http://codeforces.com/contest/160/problem/A


#include <iostream>
using namespace std;
#include <algorithm>
#include<math.h>

using namespace std;
#define max 100

int main()
{
    int NumOfCoins;
    cin >> NumOfCoins;

    int* arr = new int [NumOfCoins];

    for (int i = 0; i < NumOfCoins; i++)
        cin >> arr[i];

    sort(arr, arr + NumOfCoins);

    int sum2 = 0, sum1 = 0, counter = 0;

    for (int i = 0; i < NumOfCoins - 1; i++)
        sum2 = sum2 + arr[i];

    for (int i = NumOfCoins - 1; i >= 0; i--)
    {
        sum1 = sum1 + arr[i];

        counter++;

        if (sum1 > sum2) 
            break;

        sum2 = sum2 - arr[i - 1];

    }

    cout << counter << endl;

    return 0;
}





















