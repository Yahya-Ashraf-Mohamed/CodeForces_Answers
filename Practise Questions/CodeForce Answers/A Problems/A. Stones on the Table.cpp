// {CF266-D2-A} http://codeforces.com/contest/266/problem/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define max 50

int main() {

	int NumStones;
	string StonesOnTable;
	
	cin >> NumStones >> StonesOnTable;

	int counter = 0;
	for (int i = 0; i < NumStones; i++)
	{
		if (StonesOnTable[i] == StonesOnTable[i + 1])
			counter++;
	}
	cout << counter;
	return 0;
}