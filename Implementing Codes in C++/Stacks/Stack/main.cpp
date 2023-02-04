#include "ArrayStack.h"	
#include <iostream>		
						
using namespace std;	


int main()
{
	//Declare a Stack of integers named "S" and with max size = 10 elements
	ArrayStack<int> S(10);

	int i,x,n;

	cout<<"\nEnter no. of values to push into stack:";
	cin>>n;

	//Test the 1st stack by pushing n values then popping
	cout << "Testing stack S......" << endl;
	cout << "Pushing " << n << " values into S:" << endl;

	cout << "Please Enter the " << n << " values to push in S :";
	
	for(i = 0; i < n; i++)
	{	 
		cin >> x;
		S.push(x); //pushing x to S
	}

	cout << endl << "Popping: ";

	//while(S.pop(x))		//As long as pop returns true, x contains a valid value		
	//	cout << x << " ";

	while (S.peek(x))		//as long as peek returns true, so x contains a valid value		
	{
		cout << x << " ";
		break;
	}
	
	cout << endl;

	cout << "is S Empty?? ==>" << boolalpha << S.isEmpty();
	cout << endl;
	return 0;
}
  
