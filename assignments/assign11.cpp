/***********************************************************************
* Program:
*    Assignment 11, Defensive Programming
*    Brother McCracken, CS165
* Author:
*    The Key
* Summary: 
*    Write a function to accept two integer values from the user.  This
*    function must be resistant to all user-induced errors.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part
************************************************************************/

#include <iostream>
#include <cassert>
using namespace std;

/***********************************************************************
 * GET COORDINATES
 * Prompt the user for a row and column
 ***********************************************************************/
void getCoordinates(int & col, int & row)
{
   bool done = false;
   
   // prompt user for coordinates
   cout << "Please enter a row and column where both are integers\n";

   do
   {
      //check than cin is clear
      assert(cin.good());
      cout << "> ";
      cin >> row >> col;

      // check for non-integer values
      if (cin.fail())
      {
         cout << "ERROR: non-digit entered\n";
         cin.clear();
         cin.ignore(256, '\n');
      }
      else
         done = true;
   }
   while (!done);
}

/***********************************************************************
 * Simple driver program for getCoordinate
 ***********************************************************************/
int main()
{
   int col;
   int row;

   getCoordinates(col, row);

   cout << "The values are: ("
        << row << ", " << col << ")\n";
   
   return 0;
}
