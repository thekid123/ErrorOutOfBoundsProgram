/**********************************************************************************
    Blessing Alagba
    v223e376
    Program 6
*/

#ifndef _OUT_OF_BOUNDS_HPP_
#define _OUT_OF_BOUNDS_HPP_
#include <iostream>
using namespace std;

class Out_Of_Bounds_Exception:public exception
{
public:
    const char * error() const throw()
    {
        return "Out Of Bounds Exception" << endl;

    }
};

#endif
