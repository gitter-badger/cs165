/***********************************************************************
* Program:
*    Assignment 13, Structures
*    Brother McCracken, CS165
* Author:
*    Thomas Nichols
* Summary: 
*    This program will prompt the user for the values in a structure,
*    then display the results on the screen.  It will include an example
*    of pass-by-reference and pass-by-pointer.  The structure has 2 parts:
*       col     Position on the horizontal axis.  This should be an integer
*       row     Position on the vertical axis
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part
************************************************************************/

#include <iostream>
using namespace std;

struct Position
{
   int row;
   int col;
};

/**********************************************************************
 * prompt
 *   simple prompt to obtain values
 ***********************************************************************/
void prompt(Position & pos)
{
   cout << "X coordinate: ";
   cin >> pos.row;
   cout << "Y coordinate: ";
   cin >> pos.col;
   return;
}

/**********************************************************************
 * display
 *   simple display of the position
 ***********************************************************************/
void display(Position * pos)
{
   cout << "("
        << pos->row
        << ", "
        << pos->col
        << ")\n";
   return;
}

/**********************************************************************
 * MAIN. Simple driver program calling two functions
 *   prompt:  Prompt the user for the values
 *   display: Display the data of the position on the screen
 ***********************************************************************/
int main()
{
   Position pos;

   // get the data
   prompt(pos);

   // display the data
   display(&pos);
   
   return 0;
}
