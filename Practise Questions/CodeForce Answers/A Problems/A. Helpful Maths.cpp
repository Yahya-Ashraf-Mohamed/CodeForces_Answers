// {CF339-D2-A} http://codeforces.com/contest/339/problem/A

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main() {
	
	string Line;
	getline(cin, Line);
	

	sort(Line.begin(), Line.end());
	
	for (int i = Line.size()/2; i < Line.size()-1 ; i++) {
		cout << Line[i] << '+';
	}
	cout << Line[Line.size() - 1];

	return 0;
}