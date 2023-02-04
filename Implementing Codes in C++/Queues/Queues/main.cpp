#include "LinkedQueue.h"
#include <iostream>		

using namespace std;	

int main()
{


	//Declare a queue of integers named "Q"
	LinkedQueue<int> Q;
	int x;

	//Test the queue by enqueue 6, 7, 8, 9 and 10 then dequeue them.
	cout << "Testing Q:" << endl;
	cout << "inserting 5 values into Q:" << endl;

	cout<<"Please Enter the 5 values to enqueue in queue1 :";
	for(int i = 0; i < 5; i++)
	{
		cin>>x;
		Q.enqueue(x); //pushing x to stack2
	}

	cout << "Testing dequeue operation:\n ";

	while(Q.dequeue(x))
		cout << x << " ";

	cout<<endl;

	//Write code to test empty case and to test peekFront function
	return 0;
}
  
