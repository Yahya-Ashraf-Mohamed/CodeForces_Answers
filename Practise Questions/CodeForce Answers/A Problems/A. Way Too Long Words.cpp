// {CF71-D2-A} http://codeforces.com/contest/71/problem/A

#include <iostream>
using namespace std;
#include <string>

int main() {
	
	int NumWords;
	cin >> NumWords;

	string word;

	for (int i = 0; i < NumWords; i++)
	{
		cin >> word;

		if (word.size() > 10)
			cout << word[0] << word.size() - 2 << word[word.size()-1] << endl;
		else
			cout << word << endl;
	}

	return 0;
}
