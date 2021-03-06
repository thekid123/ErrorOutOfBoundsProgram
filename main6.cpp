/**********************************************************************************
    Blessing Alagba
    v223e376
    Program 6
*/
 
#include <iostream>
#include "arraydb.cpp"
using namespace std;

int main()
{
    unsigned int regions;
    cout << "Enter number of regions";
    cin >> regions;

    // Create an "array" of that size
    ArrayDb <double> tons(regions);

    cout << "Enter the regional sales in tons:\n";
    int i;
    for (i = 0; i < regions; i++)
    {
       cout << "Region " << (i+1) << ":  ";
       cin >> tons[i];
       // tons.operator[](i)
    }

    cout << tons;

    // Default object
    ArrayDb <double> dup;

    // Array assignment - calls the overloaded operator=
    dup = tons;
    cout << "Here's the original data:\n" << tons;
    cout << "Here's the copy :\n" << dup;

    double wts[5] = {155.2, 189.6, 174.3, 256.9, 203.5};

    // Initialize an ArrayDb to an array
    ArrayDb <double> bod (wts,5);

    cout << "Here are the weights:\n" << bod;

    cout << "Enter the number of regions prefered: " << endl;
    cin >> regions;

    ArrayDb <char> Arr(regions);
    cout << "Enter regional sales: " << endl;

    for (i = 0; i <= regions; i++)
        {
            cout << "area " << (i+1) << ": " << endl;
            cin >> Arr[i];
        }
        cout << Arr;

        ArrayDb <char> dupArr;
        dupArr = Arr;

        cout << "Original data: " << Arr;
        cout << "Copy Data: " << Arr;

        display(Arr);
        char wtsArr[5] = {'G', 'd', 'j', 'g', '\0'};

        ArrayDb <char> bodArr(wtsArr, 7);

        cout << "The weights are here " << bodArr;

        cout << "Enter the number of regions prefered: " << endl;
        cin >> regions;

        ArrayDb <int> tonsArr(regions);

        cout << "Enter regional sales: " << endl;
        for(int i = 0; i < regions; i++)
        {
            cout << "area " << (i + 1) << ": ";
            cin >>tonsArr[i];
        }

        ArrayDb <int> dupArray;
        dupArray = tonsArr;
        cout << "Original data " << tonsArr;
        cout << "Copied data " << tonsArr;

        display(dupArray);

        int wtsArray[5] = {54, 56, 76, 11, 23};

        ArrayDb <int> bodArray(wtsArray, 5);
        cout << "The weights are here " << bodArray;

        //try to exceed array limit
        cout << "Index: value \n";
        for (i = 0; i <= regions; i++)
        {
        	    cout.width(5);
             cout << i << ": " << tons[i] << "\n";
        }

        return 0;
}
