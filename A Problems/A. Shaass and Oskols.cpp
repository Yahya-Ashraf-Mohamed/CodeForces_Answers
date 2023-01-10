// {CF294-D2-A} http://codeforces.com/contest/294/problem/A

#include <iostream>
using namespace std;

#define max 100

int main() {
	
	int NumOfWires, NumberOfShoots;
	cin >> NumOfWires;
	
	int BirdsOnWire[max];
	for (int i = 1; i <= NumOfWires; ++i)
		cin >> BirdsOnWire[i];

	cin >> NumberOfShoots;

	int LocationOfBird, LocationOfWire;
	int FlyingUpBirds, FlyingDownBirds;

	while (NumberOfShoots--)
	{
		cin >> LocationOfBird >> LocationOfWire;
		FlyingUpBirds = BirdsOnWire[LocationOfBird] - LocationOfWire;
		FlyingDownBirds = LocationOfWire-1;
		
		if (BirdsOnWire[LocationOfBird + 1] != -1)
			BirdsOnWire[LocationOfBird +1] = BirdsOnWire[LocationOfBird +1] + FlyingUpBirds;
		
		if (BirdsOnWire[LocationOfBird - 1] != -1)
			BirdsOnWire[LocationOfBird -1] = BirdsOnWire[LocationOfBird -1] + FlyingDownBirds;

		BirdsOnWire[LocationOfBird] = 0;
	}

	for (int i = 1; i < NumOfWires+1; i++)
		cout << BirdsOnWire[i] << endl;
	
	return 0;
}