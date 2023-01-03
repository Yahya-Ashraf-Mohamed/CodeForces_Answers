// {CF231-D2-A} https://codeforces.com/contest/231/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int x,t=0,v =0;

    cin >>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            t = t+x;
        }
        if (t>1)
            v = v+1;
        t = 0;
    }
    cout << v;
    return 0;
}