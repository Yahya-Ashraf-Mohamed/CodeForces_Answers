// {CF405-D2-A} https://codeforces.com/contest/405/problem/A

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

#define size 100

int main()
{
	int ToyBox[size] = {-1};
	int ColumnNumber;
	cin >> ColumnNumber;

	for (size_t i = 0; i < ColumnNumber; i++)
	{
		cin >> ToyBox[i];
	}

	sort(ToyBox, ToyBox + ColumnNumber);

	for (int i = 0; i < ColumnNumber; i++)
		cout << ToyBox[i] << " ";

	return 0;
}