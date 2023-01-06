// {CF268-D2-A} http://codeforces.com/contest/268/problem/A

#include <iostream>
using namespace std;

#define max 30

int main() {

	int MacheNum;
	cin >> MacheNum;

	int TeamsTable[max*2]; // Two teams for each mach

	for (int i = 0; i < MacheNum * 2; i++)
		cin >> TeamsTable[i];

	int Counter = 0;
	for (int i = 0; i < MacheNum * 2; i = i+2)
	{
		for (int j = 1; j < MacheNum * 2; j = j + 2)
			if (TeamsTable[i] == TeamsTable[j])
				Counter++;
	}
	cout << Counter;

	return 0;
}
