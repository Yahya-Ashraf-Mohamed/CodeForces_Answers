// {CF381-D2-A} http://codeforces.com/contest/381/problem/A

#include <iostream>
using namespace std;

#define max 1000

int main() {

	int NumCards;
	cin >> NumCards;

	int PlayGround[max];

	for (int i = 0; i < NumCards; i++)
		cin >> PlayGround[i];

	int Sereja_Points = 0; int Dima_Points = 0;

	int start = 0;		// Index for The most Left card 
	int end = NumCards-1; // Index for The most Right card
	
	int Turn = 0;		// To switch turns between the two players
						// IF mood(Turn) = 0 {Turn is even} ==>  Sereja turn
						// else			 !=  {Turn is odd} ==> Dima turn
	
	for (int i = 0; i < NumCards; i++)
	{
		if (PlayGround[start] > PlayGround[end])
		{
			if (Turn % 2 == 0)
				Sereja_Points = Sereja_Points + PlayGround[start];
			else
				Dima_Points = Dima_Points + PlayGround[start];
			
			start++;	// To remove the most right card from the table
			Turn++;		// To switch turns
		}
		else if (PlayGround[start] < PlayGround[end])
		{
			if (Turn % 2 == 0)
				Sereja_Points = Sereja_Points + PlayGround[end];
			else
				Dima_Points = Dima_Points + PlayGround[end];

			end--;		// To remove the most left card from the table
			Turn++;		// To switch turns
		}
		else if (PlayGround[start] == PlayGround[end])		// to handel tie
		{
			if (Turn % 2 == 0)
				Sereja_Points = Sereja_Points + PlayGround[start];
			else
				Dima_Points = Dima_Points + PlayGround[start];
		}

	}
	cout << Sereja_Points << " " << Dima_Points;
}