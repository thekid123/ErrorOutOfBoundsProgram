/**********************************************************************
Blesing Alagba
v223e376
Program 6 
Description :
    this program will not check for errors and terminate the program, it checks for errors
    and throws exceptions when neccessary. An out_of_bounds exception class is included
    for the out of bounds error.

Pseudo code:-
    class name: ArrayDb
    Data:
        size - it stores numbers from 0 to infinity excluding negatives
        arr_ptr - this variabke will be used as a pointer reference throughout the Program
        get_ary_size - it contains and stores the size of the array.

*/
#ifndef __ARRAYDB_HPP__
#define __ARRAYDB_HPP__

#include <iostream>
using namespace std;

template <class array>

class ArrayDb
{
   unsigned int size;
 protected:
   array *arr_ptr;

 public:
	// Default constructor
	ArrayDb(void);

   // Create a constructor that will accept the size of the array
   // and a value to initialize the array.  Default initialization = 0
   ArrayDb(unsigned int n, array val = 0.0);

   // Initialize the array to another array given the length of the array
   ArrayDb(const array *pn, unsigned int n);

   // Copy constructor
   ArrayDb(const ArrayDb & a);

   ~ArrayDb (void);

   //Get array size
   unsigned int get_ary_size(void) const { return size; }

   // Methods
  array & operator[] (int i);
   const array & operator[] (int i) const;
   ArrayDb <array> & operator= (const ArrayDb <array> & a);

   template <class atype>
   friend ostream & operator<< (ostream & os, const ArrayDb <atype> &a);
};

#endif
