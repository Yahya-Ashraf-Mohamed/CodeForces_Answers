#include "./My_Vector.h"
#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////

int main()
{
	My_Vector<int> v (5);
	
	v.PushBack(2);
	v.PushBack(30);
	v.PrintList();

	int Index1 = v.At(1);
	int Index2 = v.At(2);
	cout << Index1 << endl << Index2 << endl;

	v.Insert(0, 150);
	v.Insert(3, 6);
	v.Insert(4, 100);
	v.PrintList();

	v.pop();
	v.PrintList();

	v.Delete(3);
	v.PrintList();

	int s = v.Size();
	cout << s << endl;

	v.DeleteAll();

	if (v.is_empty())
		cout << "Yes" << endl;

	v.PrintList();
	return 0;
}