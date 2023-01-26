// {CF768-D2-A} http://codeforces.com/contest/768/problem/A

#include<iostream>
using namespace std;
#include<algorithm>

#define ll long long
#define max 100000
int main()
{
    ll n;
    cin >> n;
    ll data[max];

    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    
    sort(data, data + n);
    
    int counter = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (data[i] > data[0] && data[n - 1] > data[i])
            counter++;
    }
    cout << counter << endl;

    return 0;
}