// {CF767-D2-A} http://codeforces.com/problemset/problem/767/A

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



/*
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