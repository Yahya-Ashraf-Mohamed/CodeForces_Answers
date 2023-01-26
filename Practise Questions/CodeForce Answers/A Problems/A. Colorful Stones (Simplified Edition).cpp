// {CF265-D2-A} http://codeforces.com/contest/265/problem/A

#include <iostream>
using namespace std;
#include <string>

int main() {
	
	string BaseStone, Instruction;
	int Location = 0;

	cin >> BaseStone >> Instruction;
	for (int i = 0; i < Instruction.size(); i++)
		if (BaseStone[Location] == Instruction[i])
			Location++;

	cout << Location+1;
	return 0;
}

