#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <iostream>
using namespace std;

#define ll long long
#define GrowthFactor 2
#define ShrinkFactor 2


template <typename T>
class My_Vector
{
public:

    //===========================================================================================================//
    //                                    Constructors & Destructor                                              //
    //===========================================================================================================//
    
    My_Vector()
    {
        vector = new T[capacity];
    }
    My_Vector(int C)
    {
        if (C < 1)
            cout << "Invalid Size!" << endl;
        else
        {
            capacity = C;
            vector = new T[capacity];
        }
    }

    // Vector is being desturcted ==> delete all items in the Vector
    ~My_Vector()
    {
        if (size != 0)
            DeleteAll();
    }


    //===========================================================================================================//
    //                                              Functions                                                    //
    //===========================================================================================================//
	
    ll GetSize() { return size; }
    ll GetCapacity() { return capacity; }

    /*
    * Function: PushBack.
    * Add new value in the end of the vector.
    *
    * Parameters:
    *	- data : The value to be stored in the end of the vector.
    */
    void PushBack(const T& data)
    {
        if (size == capacity)
            Expand();

        vector[size] = data;
        size++;
    }


    /*
    * Function: Get.
    * get the value of a given index in the vector, returns the value if found; -1 otherwise.
    *
    * Parameters:
    *	- i : The index for the location of the element in the vector.
    */

    T At(const T i)
    {
        if (i < 0 || i >= size)
        {
            cout << "Index out of range" << endl;
            return -1;
        }
        return vector[i];
    }


    /*
    * Function: Set.
    * set the value of a given index in the vector.
    *
    * Parameters:
    *	- i   : The index for the location of the element in the vector.
    *   - val : The value in the given index
    */  

    void Insert(const T i, const T val)
    {
        if (i < 0)
        {
            cout << "Index out of range";
            return;
        }
        while (i >= capacity)
            Expand();
        
        vector[i] = val;
        size++;
    }


    /*
    * Function: Remove.
    * remove the value of a given index in the vector.
    *
    * Parameters:
    *	- i: The index for the location of the element to be removed from the vector.
    */

    void Delete(const T i)
    {
        if (i < 0 || i >= size)
        {
            cout << "Index out of range";
            return;
        }
        for (int j = 0; j < capacity-1; j++)
        {
            vector[i] = vector[i+1];
        }
        size--;

        if (size < capacity / 4)
            Shrink();
    }


    /*
    * Function: find.
    * looks for value and returns first index with that value, -1 if not found.
    *
    * Parameters:
    *	- item: The value we search about.
    */
    ll Find(T item)
    {
        for (int i = 0; i < size; i++)
            if (item == vector[i])
                return i;
        return -1;
    }

    
    /*
    * Function: remove.
    * looks for value and removes index holding it (even if in multiple places)
    *
    * Parameters:
    *	- item: The value we search about to remove.
    */
    void Remove(T item)
    {
        for (int i = 0; i < size; i++)
            if (item == vector[i])
                Delete(i);
    }



    /*
    * Function: size.
    * get the size of the vector.
    */
    ll Size()
    {
        return size;
    }

    /*
    * Function: is_empty.
    *Check if the vector is empty.
    */
    bool is_empty()
    {
        return (size == 0) ? true : false;
    }

    void prepend(T val)
    {
        Insert(0, val);
    }


    T pop()
    {
        if (size == 0)
            cout << "Vector is empty!";

        T Value = vector[size - 1];

        Remove(size - 1);

        return Value;
    }


    /*
    * Function: PrintList.
    * prints the values in the vector.
    */
    void PrintList()const
    {   
        //ex: |5|6|3|


        cout << " \n ..............  Printing the Vector .............\n\n";
        
        
        for (int i = 0; i < size; i++)
        {
            cout << '|' << vector[i];
        }
        cout << '|' << endl;
        
    }


    /*
	* Function: DeleteAll.
	* Deletes all items of the array.
	*/
	void DeleteAll()
	{
        delete[] vector;
        size = 0;
        capacity = 1;
    }

private:
    /* data */
    T* vector;
	ll capacity = 1;    // The actual capacity that can be accommodated before a resize is required
    ll size = 0;        // The number of items currently stored



    //===========================================================================================================//
    //                                              Functions                                                    //
    //===========================================================================================================//


    /*
    * Function: Expand.
    * Increase the size of the vector by the GrowthFactor.
    */

    void Expand()
    {
        T* New_Vector = new T[capacity * GrowthFactor];

        for (int i = 0; i < capacity; i++)
        {
            New_Vector[i] = vector[i];
            cout << New_Vector[i] << endl;
        }
        delete[] vector;
        vector = New_Vector;
        capacity = capacity * GrowthFactor;
    }

    /*
    * Function: Shrink.
    * Decrease the size of the vector by the ShrinkFactor.
    */
    void Shrink()
    {
        T* New_Vector = new T[capacity / ShrinkFactor];

        for (int i = 0; i < capacity; i++)
        {
            New_Vector[i] = vector[i];
            cout << New_Vector[i] << endl;
        }
        delete[] vector;
        vector = New_Vector;
        capacity = capacity / ShrinkFactor;
    }


};




#endif  // MY_VECTOR_H
