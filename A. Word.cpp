// {CF59-D2-A} http://codeforces.com/contest/59/problem/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string UserString;
	cin >> UserString;

	int LowerCounter = 0;
	int UperCounter = 0;

	for (int i = 0; i < UserString.length(); i++)
	{
		if (isupper(UserString[i]))
			UperCounter++;
		else
			LowerCounter++;
	}

	for (int i = 0; i < UserString.length(); i++)
	{
		if (UperCounter > LowerCounter)
			cout << (char) toupper(UserString[i]);	// cast the ASCII number to charcter 
		else
			cout << (char) tolower(UserString[i]);
	}
	return 0;
}