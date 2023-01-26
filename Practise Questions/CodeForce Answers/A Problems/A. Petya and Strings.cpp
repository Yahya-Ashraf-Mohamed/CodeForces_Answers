// {CF112-D2-A} https://codeforces.com/contest/112/problem/A

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string Text1, Text2;
	cin >> Text1 >> Text2;

	int state = 0;
	for (int i = 0; i < Text1.length(); i++)
	{
		if (Text1[i] < 92)
			Text1[i] += 32;

		if (Text2[i] < 92)
			Text2[i] += 32;

		if (Text1[i] > Text2[i])
		{
			cout << "1";
			return 0;
		}
		else if (Text2[i] > Text1[i])
		{
			cout << "-1";
			return 0;
		}
	}
	cout << "0";

	return 0;
}