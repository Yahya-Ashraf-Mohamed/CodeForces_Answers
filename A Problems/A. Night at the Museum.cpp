// {CF431-D2-A} http://codeforces.com/contest/431/problem/A

#include <iostream>
#include <string>
using namespace std;

#define max 4

int main() {


	string Name;
	cin >> Name;

	char start = 'a';
	int RotaionNum = 0;

	int ClockwiseMove, CounterClockwiseMove;		// to calculate Clockwise & Counter Clockwise moves
	
	for (int i = 0; i < Name.size(); i++)
	{
		ClockwiseMove = abs(Name[i] - start);		
		CounterClockwiseMove = 26 - ClockwiseMove;	// 26 represent the total number of leters

		if (ClockwiseMove < CounterClockwiseMove)
			RotaionNum = RotaionNum + ClockwiseMove;
		else
			RotaionNum = RotaionNum + CounterClockwiseMove;

		start = Name[i];		// Reset the start point to the Last charcater reached
	}

	cout << RotaionNum;

	return 0;
}
