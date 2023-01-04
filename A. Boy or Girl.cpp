// {CF236-D2-A} http://codeforces.com/contest/236/problem/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string UserName;
	cin >> UserName;
	int DistincetLength = 0;
	sort(UserName.begin(), UserName.end());
	for (int i = 0; i < UserName.length(); i++)
	{
		if (UserName[i] != UserName[i+1])
			DistincetLength++;
	}

	if (DistincetLength % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	
	return 0;
}