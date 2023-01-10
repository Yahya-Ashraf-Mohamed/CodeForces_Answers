// {CF228-D2-A} http://codeforces.com/contest/228/problem/A

#include <iostream>
using namespace std;
#include <algorithm>
#define max 4
int main() {
	
	int NumToBuy = 0;
	long long Colors_Of_Horseshoes[max];
	for (int i = 0; i < max; i++)
		cin >> Colors_Of_Horseshoes[i];

	sort(Colors_Of_Horseshoes, Colors_Of_Horseshoes+max);
	for (int i = 0; i < max; i++)
		if (Colors_Of_Horseshoes[i] == Colors_Of_Horseshoes[i + 1])
			NumToBuy++;
	cout << NumToBuy;
 
}

