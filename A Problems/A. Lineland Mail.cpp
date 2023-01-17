// {CF567-D2-A} http://codeforces.com/contest/567/problem/A

#include <iostream>
using namespace std;
#include <string>

#define max 100000
int main() {
	
	int NumOfCities;
	cin >> NumOfCities;

	int Cities[max];
	for (int i = 0; i < NumOfCities; i++)
		cin >> Cities[i];

	cout << abs(Cities[0] - Cities[1]) << " " << abs(Cities[NumOfCities - 1] - Cities[0]) << endl;

	for (int i = 1; i < NumOfCities-1; i++)
	{
		if (abs(Cities[i-1] - Cities[i]) < abs(Cities[i] - Cities[i+1]))
			cout << abs(Cities[i-1] - Cities[i]);
		else
			cout << abs(Cities[i] - Cities[i+1]);
		
		cout << " ";

		if (abs(Cities[0] - Cities[i]) > abs(Cities[i] - Cities[NumOfCities-1]))
			cout << abs(Cities[0] - Cities[i]);
		else 
			cout << abs(Cities[i] - Cities[NumOfCities-1]);

		cout << endl; 
	}

	cout << Cities[NumOfCities - 1] - Cities[NumOfCities - 2] << " " << abs(Cities[NumOfCities - 1] - Cities[0]) << endl;

	return 0;
}