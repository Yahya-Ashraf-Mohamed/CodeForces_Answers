// {CF136-D2-A} http://codeforces.com/contest/136/problem/A

#include <iostream>
using namespace std;
#include <string>
#include <vector>


int main() {
	
    int NUmOfFriends;
    cin >> NUmOfFriends;
    vector<int>  Presents(NUmOfFriends + 1);
    for (int i = 1; i <= NUmOfFriends; i++) {
        int temp;
        cin >> temp;
        Presents[temp] = i;
    }
    for (int i = 1; i <= NUmOfFriends; i++) {
        cout << Presents[i] << " ";
    }

	return 0;
}