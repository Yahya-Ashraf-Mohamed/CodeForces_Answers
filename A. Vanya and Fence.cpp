// {CF677-D2-A} https://codeforces.com/contest/677/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,h,x, count =0;
    vector <int> a;
    cin >> n >> h;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);

        if (a[i] > h)
            count = count +2;
        else
            count++;
    }

    cout << count;
    return 0;
}
