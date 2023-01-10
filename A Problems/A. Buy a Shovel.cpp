// {CF732-D2-A} http://codeforces.com/contest/732/problem/A

#include <iostream>
using namespace std;

bool isNoChange(int Shovel_Price, int coin, int TotalNumBayedShovels);

int main() {

	int Shovel_Price, coin, TotalNumBayedShovels = 1;
	
	cin >> Shovel_Price >> coin;

	while (true)
	{
		if (isNoChange(Shovel_Price, coin, TotalNumBayedShovels))
		{
			cout << TotalNumBayedShovels;
			return 0;
		}
		else
			TotalNumBayedShovels++;
	}
}

bool isNoChange(int Shovel_Price, int coin, int TotalNumBayedShovels)
{
	if ((Shovel_Price * TotalNumBayedShovels) % 10 == coin)			// Check if the last digit for total price is = the change {as 9*117 = 1053 burles}
		return true;												// can be divided into 105 ten coin and one 3 coin 
	else if ((Shovel_Price * TotalNumBayedShovels) % 10 == 0)		// Check if the last digit for total price is = 0 {as 2*15 = 30 burles }
		return true;												// can be divided into 3 ten coin and no change coin
	else
		return false;
		
}
