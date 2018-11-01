/**********************************************************************************
    Blessing Alagba
    v223e376
    Program 6
*/

#include "arraydb.hpp"
#include "out_of_bounds.hpp" 

//Default constructor
template <class array>

ArrayDb <array> ::ArrayDb (void)
{
   arr_ptr = NULL;
   size = 0;
}

template <class array>
ArrayDb <array> ::ArrayDb (unsigned int n, array val)
{
   arr_ptr = new array[n];

   //the try case begins here
   try
   {
       //checking if the arr_ptr is NULL
       Out_Of_Bounds_Exception exp;
       cout << "Can not allocate the new array";

       //throwing an exception
       throw exp;
   }
   //Otherwise memory allocated
   else
   {
       size = n;
       for (unsigned int i = 0; i < size; i++)
            arr_ptr[i] = val;
   }//try block ends here

   //catch block that handles the excaption
   catch(exception & a)
   {
       //calling the funciton to return the exception message
       cout << a.error();
   }
}

template <class array>
ArrayDb <array> ::ArrayDb (const array *pn, unsigned int n)
{

   arr_ptr = new array[n];
   size = n;
   for (int i = 0; i < size; i++)
        arr_ptr[i] = pn[i];
}

// Copy constructor
template <class array>
ArrayDb <array> ::ArrayDb (const ArrayDb & a)
{
   size = a.size;
   arr_ptr = new array[size];
   for (int i = 0; i < size; i ++)
    	arr_ptr[i] = a.arr_ptr[i];
}

template <class array>
ArrayDb <array> ::~ArrayDb (void)
{
	if (arr_ptr != NULL)
		delete [] arr_ptr;
}

template <class array>
array & ArrayDb <array> ::operator[] (int i)
{
   //cout << "\n Executing overloaded []";
   if (i < 0 || i >= size)
   {
    	cerr << "Error in array limits";
        exit (1);
   }
   return arr_ptr[i];

}

template <class array>
array & ArrayDb <array> ::operator[] (int i)
{
    try
    {
        if (i < 0 || i >= size)
        {
            Out_Of_Bounds_Exception exp;

            throw exp;
        }
        else
        return arr_ptr[i];
    }
    catch(exception & a)
    {
        cout << a.error();
    }
}

template <class array>
ArrayDb <array> & ArrayDb <array> ::operator=(const ArrayDb <array> & a)
{
	if (this == &a)
   	    return *this;

   delete arr_ptr;
   size = a.size;
   arr_ptr = new array [size];
   for (int i = 0; i < size; i++)
   	    arr_ptr[i] = a.arr_ptr[i];
   return *this;

}

template <class array>
ostream & operator<< (ostream & os, const ArrayDb <array> &a)
{
	cout << "overloaded << " << endl;
   unsigned int i;
   for (i = 0; i < a.size; i++)
   {
    	os << a.arr_ptr[i] << " ";
        if (i % 5 == 4)
      	os << "\n";
   }
   if (i % 5 != 0)
     	os << endl;
   return os;

}

template <class array>
void display (ArrayDb <array> & ar)
{
   cout << "Func!\n";
   cout << ar;
   cout << "Func!\n";
}
