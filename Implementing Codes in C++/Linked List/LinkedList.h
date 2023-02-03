#ifndef _LINKEDLIST
#define _LINKEDLIST

#include "Node.cpp"
#include <iostream>
using namespace std;
#define ll long long

template <typename T>
class LinkedList
{
public:
	//===========================================================================================================//
	//                                    Constructors & Destructor                                              //
	//===========================================================================================================//

	LinkedList()
	{
		Head = nullptr;
		Tail = nullptr;
	}

	//List is being desturcted ==> delete all items in the list
	~LinkedList()
	{

	}


	 //===========================================================================================================//
	 //                                              Functions                                                    //
	 //===========================================================================================================//

	/*
	* Function: PrintList.
	* prints the values of all nodes in a linked list.
	*/
	void PrintList() const
	{
		cout << " \n ..............  Printing the list .............\n\n";
		Node<T>* p = Head;

		while (p)
		{
			cout << "[ " << p->getItem() << " ]";
			cout << "--->";
			p = p->getNext();
		}
		cout << "*\n";
	}


	/*
	* Function: InsertBeg.
	* Creates a new node and adds it to the beginning of a linked list.
	*
	* Parameters:
	*	- data : The value to be stored in the new node.
	*/
	void InsertBeg(const T& data)
	{
		Node<T>* R = new Node<T>(data);
		R->setNext(Head);
		Head = R;
	}


	/*
	* Function: DeleteAll.
	* Deletes all nodes of the list.
	*/
	void DeleteAll()
	{
		Node<T>* P = Head;
		if (this->isEmpty())
		{
			cerr << "List alrady empty!" << endl;
			exit(EXIT_FAILURE);
		}
		while (Head)
		{
			P = Head->getNext();
			delete Head;
			Head = P;
		}
	}

	/*
	* Function: Size.
	* returns number of data elements in list.
	*/
	ll Size() const
	{
		ll size = 0;
		Node<T>* pCurrent = Head;
		while (pCurrent) {
			pCurrent = pCurrent->getNext();
			size++;
		}
		return size;
	}

	/*
	* Function: isEmpty.
	* Bool returns true if empty.
	*/
	bool isEmpty() const
	{
		return (Head == nullptr) ? true : false;
	}
	
	/*
	* Function: value_at(index).
	* returns the value of the nth item (starting at 0 for first).
	*/
	const T Value_at(ll i) const
	{
		if (this->isEmpty())
		{
			cerr << "List already empty!" << endl;
			exit(EXIT_FAILURE);
		}

		Node<T>* pCurrent = Head;
		int counter = 0;
		while (pCurrent)
		{
			if (counter == i)
				return pCurrent->getItem();
			pCurrent = pCurrent->getNext();
			counter++;
		}

		cerr << "Index out of Range!" << endl;
		exit(EXIT_FAILURE);
	}

	/*
	* Function: front.
	* returns the value of front item.
	*/

	const T Front() {
		if (this->isEmpty())
		{
			cerr << "List is empty" << endl;
			exit(EXIT_FAILURE);
		}
		return Head->getItem();
	}


	/*
	* Function: back.
	*  returns the value of end item.
	*/

	const T Back() {
		if (this->isEmpty())
		{
			cerr << "List is empty" << endl;
			exit(EXIT_FAILURE);
		}

		Node<T>* pCurrent = Head;
		while (pCurrent->getNext())
		{
			pCurrent = pCurrent->getNext();
		}

		return pCurrent->getItem();
	}

	/*
	* Function: insert(index, value).
	*  insert value at index, so current item at that index is pointed to by new item at index.
	*/

	void Insert(ll index, T value) {
		
		if (index > this->Size() || index < 0)
		{
			cerr << "Index is out of range";
			exit(EXIT_FAILURE);
		}

		Node<T>* NewNode = new Node<T>(value);

		if (index == 0)
			this->InsertBeg(value);
		else if (index == this->Size())
			this->InsertEnd(value);
		else
		{
			ll counter = 1;
			Node<T>* pCurrent = Head;
			while (pCurrent)
			{
				if (counter == index)
				{
					NewNode->setNext(pCurrent->getNext());
					pCurrent->setNext(NewNode);
					break;
				}
				pCurrent = pCurrent->getNext();
				counter++;
			}
		}

	}
	

	/*
	* Function: value_n_from_end(n).
	*  returns the value of the node at nth position from the end of the list.
	*/

	const T Value_n_from_end(ll n) {
		return this->Value_at(this->Size() - n);
	}


	/*
	* Function: erase(index).
	*  removes node at given index.
	*/
	
	void Erase(ll index) {
		if (Head != nullptr) {
			Node<T>* pDelete = Head->getNext();
			Node<T>* pConnect = Head;
			if (index == 0)
			{
				pDelete = Head;
				Head = Head->getNext();
				delete pDelete;
				pDelete = nullptr;
			}
			ll counter = 1;
			while (pDelete != nullptr)
			{
				if (counter == index)
				{
					pConnect->setNext(pDelete->getNext());
					delete pDelete;
					pDelete = nullptr;
				}
				else
				{
					pDelete = pDelete->getNext();
					pConnect = pConnect->getNext();
					counter++;
				}
			}
			pConnect = nullptr;
			pDelete = nullptr;
		}
		if (this->isEmpty()) {
			cerr << "List is already empty!"<<endl;
			exit(EXIT_FAILURE);
		}
	}

	
	//[1]InsertEnd 
	//inserts a new node at end if the list

	void InsertEnd(const T& data)
	{
		Node<T>* R = new Node<T>(data);

		if (Head != nullptr) {
			Node<T>* PLast = Head;
			while (PLast->getNext() != nullptr)
			{
				PLast = PLast->getNext();
			}
			PLast->setNext(R);
			R->setNull();
			PLast = nullptr;
		}
		if (this->isEmpty()) {
			R->setNull();
			Head = R;
		}
	}


	//[2]Find 
	//searches for a given value in the list, returns true if found; false otherwise.

	bool Find(const T data)
	{
		if (Head != nullptr) {
			Node<T>* P = Head;
			while (P != nullptr) {
				if (P->getItem() == data)
					return true;	//Item does exist

				P = P->getNext();
			}
			return false;	//Item does not exist
		}
		if (this->isEmpty()) {
			cerr << "List is already empty!" << endl;
			exit(EXIT_FAILURE);
		}

	}


	//[3]CountOccurance
	//returns how many times a certain value appeared in the list

	ll CountOccurance(const T data)
	{
		ll count = 0;

		if (Head != nullptr) {
			Node<T>* P = Head;
			while (P != nullptr) {
				if (P->getItem() == data)
				{
					count = count + 1;
				}
				P = P->getNext();
			}
		}

		if (this->isEmpty()) {
			cerr << "List is already empty!"<< endl;
			exit(EXIT_FAILURE);
		}

		return count;
	}


	//[4] DeleteFirst
	//Deletes the first node in the list

	void DeleteFirst()
	{
		if (Head != nullptr) {
			Node<T>* pHead = Head->getNext();
			delete Head;
			Head = pHead;
			pHead = nullptr;
		}
		if (this->isEmpty()) {
			cerr << "List is already empty!" << endl;
			exit(EXIT_FAILURE);
		}
	}

	//[5] DeleteLast
	//Deletes the last node in the list
	void DeleteLast()
	{
		if (Head != nullptr) {
			Node<T>* pLast = Head->getNext();
			Node<T>* pBefore = Head;
			while (pLast->getNext() != nullptr)
			{
				pBefore = pLast;
				pLast = pBefore->getNext();
			}
			delete pLast;
			pLast = nullptr;
			pBefore->setNull();
		}
		if (this->isEmpty()) {
			cerr << "List is already empty!"<< endl;
			exit(EXIT_FAILURE);
		}
	}

	//[6] DeleteNode
	//deletes the first node with the given value (if found)
	//Note: List is not sorted

	void DeleteNode(T DeletedItem)
	{
		if (Head != nullptr) {
			Node<T>* pDelete = Head->getNext();
			Node<T>* pConnect = Head;
			if (pConnect->getItem() == DeletedItem)
			{
				pDelete = Head;
				Head = Head->getNext();
				delete pDelete;
				pDelete = nullptr;
				return;
			}
			while (pDelete->getNext() != nullptr)
			{
				if (pDelete->getItem() == DeletedItem)
				{
					pConnect->setNext(pDelete->getNext());
					delete pDelete;
					pDelete = nullptr;
					return;
				}
				else
				{
					pDelete = pDelete->getNext();
					pConnect = pConnect->getNext();
				}
			}
			pConnect = nullptr;
			cerr << "Item doesn't exist!" << endl;
			exit(EXIT_FAILURE);
		}
		if (this->isEmpty()) {
			cerr << "List is already empty!" << endl;
			exit(EXIT_FAILURE);
		}
	}

	//[7] DeleteNodes
	//deletes ALL node with the given value (if found) and returns true
	//if not found, returns false
	//Note: List is not sorted

	bool DeleteNodes(T DeletedItem)
	{
		ll Cdeleted = 0;
		if (Head != nullptr) {
			Node<T>* pDelete = Head->getNext();
			Node<T>* pConnect = Head;
			if (pConnect->getItem() == DeletedItem)
			{
				pDelete = pConnect;
				if (pConnect->getNext() != nullptr)
				{
					pConnect = pConnect->getNext();
					Head = pConnect;
					delete pDelete;
					pDelete = pConnect;
					if (pConnect->getNext() != nullptr)
						pDelete = pConnect->getNext();
					Cdeleted = Cdeleted + 1;
				}
				else
				{
					delete pDelete;
					pConnect = nullptr;
					pDelete = nullptr;
					Head = nullptr;
					Cdeleted = Cdeleted + 1;
				}
			}
			while (pDelete->getNext() != nullptr)
			{
				if (pDelete->getItem() == DeletedItem)
				{
					pConnect->setNext(pDelete->getNext());
					delete pDelete;
					pDelete = pConnect->getNext();
					Cdeleted = Cdeleted + 1;
				}
				else
				{
					pDelete = pDelete->getNext();
					pConnect = pConnect->getNext();
				}
			}
			if (pDelete->getItem() == DeletedItem)
			{
				pConnect->setNull();
				delete pDelete;
				pDelete = nullptr;
				Cdeleted = Cdeleted + 1;
			}
			if (Cdeleted == 0)
				return false;
			else
				return true;
			pConnect = nullptr;
		}
		if (this->isEmpty()) {
			return false;
		}
	}


	//[8]Merge
	//Merges the current list to another list L by making the last Node in the current list 
	//point to the first Node in list L
	template <typename T>
	void Merge(LinkedList<T> List_2)
	{
		cout << " \n ..............  Merging two lists .............\n\n";
		if (this->Head != nullptr && List_2.Head != nullptr) {
			Node<T>* PLast = this->Head;
			while (PLast->getNext() != nullptr)
			{
				PLast = PLast->getNext();
			}
			PLast->setNext(List_2.Head);
		}
		else if (this->Head == nullptr) {
			cerr << "First list is empty!" << endl;
			exit(EXIT_FAILURE);
		}
		else if (List_2.Head == nullptr) {
			cerr << "Second list is empty!";
			exit(EXIT_FAILURE);
		}
		else if (this->Head == nullptr && List_2.Head == nullptr) {
			cerr << "The two lists are empty!" << endl;
			exit(EXIT_FAILURE);
		}
	}


	//[9] Reverse
	//Reverses the linked list (without allocating any new Nodes)

	void Reverse() 
	{
		Node<T>* pPrev = nullptr;
		Node<T>* pCurrent = Head;
		Node<T>* pNext = nullptr;

		while (pCurrent != nullptr)
		{
			pNext = pCurrent->getNext();
			pCurrent->setNext(pPrev);
			pPrev = pCurrent;
			pCurrent = pNext;
		}

		Head = pPrev;
	}


	/*
	[10] RemoveMin
	A function that extracts the node with the min data value in a linked list.The function should
	remove the node from the listand returns a pointer to it
	Think : Can you use functions InsertSorted and RemoveMin to sort a given linked list
	*/
	Node<T>* RemoveMin()
	{
		if (Head != nullptr) {
			Node<T>* Pcheck = Head->getNext();
			Node<T>* Pmin = Head;
			while (Pcheck->getNext() != nullptr)
			{
				if (Pcheck->getItem() < Pmin->getItem())
				{
					Pmin = Pcheck;
				}
				Pcheck = Pcheck->getNext();
			}
			Pcheck = Head;
			while (Pcheck->getNext() != Pmin)
			{
				Pcheck = Pcheck->getNext();
			}
			Pcheck->setNext(Pmin->getNext());

			return Pmin;
		}
		if (this->isEmpty()) {
			cerr << "List is already empty!" << endl;
			exit(EXIT_FAILURE);
		}
	}

private:
	Node<T>* Head;	//Pointer to the head of the list
	Node<T>* Tail;	//Pointer to the Tail of the list
	

};


#endif	

