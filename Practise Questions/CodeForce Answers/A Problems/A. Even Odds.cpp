// {CF318-D2-A} http://codeforces.com/contest/318/problem/A

#include <iostream>
using namespace std;
#define ll long long
int main() {
	
	ll NumberOfIntegers, location;
	cin >> NumberOfIntegers >> location;
		
	if (NumberOfIntegers % 2 != 0)
	{
		NumberOfIntegers = NumberOfIntegers + 1;
	}
	
	if (NumberOfIntegers / 2 >= location)
	{
		cout << (2 * location) - 1;
	}
	else
	{
		cout << 2 * (location - (NumberOfIntegers / 2));
	}
	

	return 0;
}
