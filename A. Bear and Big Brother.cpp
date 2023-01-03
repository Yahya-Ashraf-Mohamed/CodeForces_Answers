// {CF791-D2-A} http://codeforces.com/contest/791/problem/A

#include <iostream>

using namespace std;

int main()
{
	int Limak = 0; int Bob = 0;
	int count = 0;
	cin >> Limak >> Bob;
	if (Bob == Limak)
	{
		cout << 1;
		return 0;
	}
	while (Bob >= Limak)
	{
		Bob = Bob * 2;
		Limak = Limak * 3;
		count++;
	}
	cout << count;
	return 0;
}