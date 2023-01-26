// {CF431-D2-A} http://codeforces.com/contest/431/problem/A

#include <iostream>
#include <string>
using namespace std;

#define max 4

int main() {

	int CaloriesTable[max];

	for (int i = 0; i < max; i++)
		cin >> CaloriesTable[i];

	string GameSequance;
	cin >> GameSequance;

	int TotalCalories = 0;
	for (char var : GameSequance)
	{
		switch (var)
		{
		case '1':
			TotalCalories = TotalCalories + CaloriesTable[0];
			break;
		case '2':
			TotalCalories = TotalCalories + CaloriesTable[1];
			break;
		case '3':
			TotalCalories = TotalCalories + CaloriesTable[2];
			break;
		case '4':
			TotalCalories = TotalCalories + CaloriesTable[3];
		default:
			break;
		}
	}
	cout << TotalCalories;
	return 0;
}