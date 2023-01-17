// {CF766-D2-A} http://codeforces.com/contest/766/problem/A

#include <iostream>
using namespace std;
#include <algorithm>

int main() {
	
	string a, b;
	cin >> a >> b;
	if (a == b)cout << -1;
	else cout << max(a.size(), b.size());

	return 0;
}