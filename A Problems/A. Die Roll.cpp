// {CF265-D2-A} http://codeforces.com/contest/265/problem/A

#include <iostream>
using namespace std;
#include <algorithm>

int main() {
	
	int Player1_Point, Player2_Point;
	cin >> Player1_Point >> Player2_Point;
	int Player3_MinPoint = max(Player1_Point, Player2_Point);

	const string Probability[7] = { "", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
	
	cout << Probability[Player3_MinPoint];
	
	return 0;
}