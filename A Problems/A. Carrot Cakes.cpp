// {CF799-D2-A} http://codeforces.com/contest/799/problem/A

#include <iostream>
using namespace std;
#include <math.h>

int main() {
	
	double  NumOfCakes, BakeTime, NumOfBackedAtTime, Build2OvenTime;
	cin >> NumOfCakes >> BakeTime >> NumOfBackedAtTime >> Build2OvenTime;
	int T = BakeTime * ceil(NumOfCakes / NumOfBackedAtTime);
	if ( T > (Build2OvenTime + BakeTime))
		cout << "YES";
	else
		cout << "NO";


	return 0;
}
