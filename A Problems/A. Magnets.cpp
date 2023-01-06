// {CF344-D2-A} http://codeforces.com/contest/344/problem/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define max 100000

int main() {

	int NumberOfMagnets;
	cin >> NumberOfMagnets;
	int arr[max];
	int NumberOfGroups = 0;

	for (int i = 0; i < NumberOfMagnets; i++)
		cin >> arr[i];

	for (int i = 0; i < NumberOfMagnets; i++)
		if (arr[i] != arr[i + 1])
			NumberOfGroups++;
	cout << NumberOfGroups;
	return 0;
}