// {CF427-D2-A} http://codeforces.com/contest/427/problem/A

#include <iostream>
#include <stack>
using namespace std;

#define max 50

int main() {

	stack<int> EventStack;

	int NumOfEvents;
	cin >> NumOfEvents;

	int event;
	int Untreated_Crimes_Counter = 0;

	for (int i = 0; i < NumOfEvents; i++)
	{
		cin >> event;

		if (event == -1)
		{
			if (EventStack.empty())
				Untreated_Crimes_Counter++;
			else
				EventStack.pop();
		}
		else
		{
			for (int j = 0; j < event; j++)
				EventStack.push(1);
		}

	}

	cout << Untreated_Crimes_Counter;

	return 0;
}