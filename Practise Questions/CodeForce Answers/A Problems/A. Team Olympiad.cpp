// {CF490-D2-A} http://codeforces.com/contest/490/problem/A

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>


/*// This is also a CORRECT Answer 
int n, x;
vector <int> v[5];

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		v[x].push_back(i);
	}

	int max = min(v[1].size(), min(v[2].size(), v[3].size()));

	cout << max << endl;
	for (int i = 0; i < max; i++) {
		cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
	}
}
*/

int main() {
	
	int Num;
	cin >> Num;

	vector<int> Programers;
	vector<int> MathStudents;
	vector<int> PEStudents;

	int student;
	for (int i = 0; i < Num; i++)
	{
		cin >> student;
		switch (student)
		{
		case 1:
			Programers.push_back(i);
			break;
		case 2:
			MathStudents.push_back(i);
			break;
		case 3:
			PEStudents.push_back(i);
			break;
		default:
			break;
		}
	}

	int NumOfTeams;

	if (Programers.size() <= MathStudents.size()&&
		Programers.size() <= PEStudents.size())
		
		NumOfTeams = Programers.size();
	else if (MathStudents.size() <= Programers.size() &&
			 MathStudents.size() <= PEStudents.size())

		NumOfTeams = MathStudents.size();
	else if (PEStudents.size() <= Programers.size() &&
			 PEStudents.size() <= MathStudents.size())

		NumOfTeams = PEStudents.size();


	cout << NumOfTeams << endl;
	for (int i = 0; i < NumOfTeams; i++)
	{
		cout << Programers.at(i)+1 << " " << MathStudents.at(i)+1 << " " << PEStudents.at(i)+1 << endl;
	}

	return 0;
}