// {CF443-D2-A} http://codeforces.com/contest/443/problem/A

#include <iostream>
using namespace std;
#include <string>
#include <set>

int main() {
	
	string line;
	getline(cin, line);
	set<char> CharactersList;
	for (char i : line)
		if (isalpha(i))
			CharactersList.insert(i);

	cout << CharactersList.size();
	return 0;
}
