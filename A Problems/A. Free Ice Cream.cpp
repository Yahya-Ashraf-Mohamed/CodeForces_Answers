// {CF71-D2-A} http://codeforces.com/contest/71/problem/A

#include <iostream>
using namespace std;
#include <string>

#define ll long long
int main() {
	
	ll NumberOfOperations, NumPacksIcecream;

	cin >> NumberOfOperations >> NumPacksIcecream;

	char Operation;
	ll Packs;
	ll NumSadKids = 0;

	for (ll i = 0; i < NumberOfOperations; i++)
	{
		cin >> Operation >> Packs;
		
		if (Operation == '-')
			if (NumPacksIcecream >= Packs)
				NumPacksIcecream -= Packs;
			else
				NumSadKids++;
		else
			NumPacksIcecream += Packs;
	}

	cout << NumPacksIcecream << " " << NumSadKids;
	return 0;
}
