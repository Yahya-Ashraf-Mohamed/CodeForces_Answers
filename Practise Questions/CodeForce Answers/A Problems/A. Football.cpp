// {CF43-D2-A} http://codeforces.com/contest/43/problem/A

#include <string>
#include <iostream>
using namespace std;


int main()
{
	string Team1, Team2, ScoredTeam;
	int NumberOfGoals, Team1_Score = 0, Team2_Score = 0;

	cin >> NumberOfGoals;
	cin >> ScoredTeam;

	Team1 = ScoredTeam;
	Team1_Score++;

	for (int i = 1; i < NumberOfGoals; i++)
	{
		cin >> ScoredTeam;
		if (ScoredTeam == Team1)
			Team1_Score++;
		else
		{
			Team2 = ScoredTeam;
			Team2_Score++;
		}
	}

	cout << ((Team1_Score > Team2_Score) ? Team1 : Team2);

	return 0;
}

