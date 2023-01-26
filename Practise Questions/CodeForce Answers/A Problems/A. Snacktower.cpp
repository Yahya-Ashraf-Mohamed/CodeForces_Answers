// {CF767-D2-A} http://codeforces.com/problemset/problem/767/A

#include <iostream>
using namespace std;
#define max 100001

int main() {
	
	bool arr[max] = {0};
	int NumberOfSnack;
	cin >> NumberOfSnack;
	int BiggestSize = NumberOfSnack;
	for (int i = 0; i < NumberOfSnack; i++)
	{
		int SnackSize;
		cin >> SnackSize;
		arr[SnackSize] = 1;
		if (SnackSize == BiggestSize)
		{
			for (int i = BiggestSize; i > 0; i--)
			{
				if (arr[i]) 
				{
					cout << i << " ";
					arr[i] = 0;
					BiggestSize = i - 1;
				}
				else
					break;
			}
		}
		cout << endl;
	}
	return 0;
}



/*
// Correct Algorithm but time limit exceeded on test 8
#include <iostream>
#include <cstdio>
using namespace std;
#include <vector>
#include <algorithm>
int main() {

	int NumSnacks;
	cin >> NumSnacks;

	vector<int> Snacktower;
	vector<int>::iterator it;
	it = Snacktower.begin();

	int SnackSize;

	int Temp = NumSnacks;

	for (int i = 0; i < NumSnacks; i++)
	{
		cin >> SnackSize;
		Snacktower.push_back(SnackSize);
		sort(Snacktower.begin(), Snacktower.end(), greater <>());

		it = Snacktower.begin();

		while (*it == Temp && !Snacktower.empty())
		{
			printf("%d ", *it);
			Temp = *it -1;
			Snacktower.erase(it);
			if (Snacktower.empty())
				break;
			else
				it = Snacktower.begin();

		}
		printf("\n");

	}

	return 0;
}
*/