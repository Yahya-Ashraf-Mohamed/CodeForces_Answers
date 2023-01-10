// {CF709-D2-A} http://codeforces.com/contest/709/problem/A

#include <iostream>
using namespace std;

int main() {
	
	int NumOfOranges, MaxOrangeSize, TrasSize;
	
	cin >> NumOfOranges >> MaxOrangeSize >> TrasSize;

	int Orange;
	int EmpyTrachCounter = 0;
	int SizeOfTrashs = 0;

	for (int i = 0; i < NumOfOranges; i++)
	{
		cin >> Orange;
		
		if (Orange <= MaxOrangeSize)
			SizeOfTrashs += Orange;
			
		if (SizeOfTrashs > TrasSize)
		{
			EmpyTrachCounter++;
			SizeOfTrashs = 0;
		}

		
	}
	cout << EmpyTrachCounter << endl;


	return 0;
}