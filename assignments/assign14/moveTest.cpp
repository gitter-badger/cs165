/***********************************************************************
 * Program:
 *    Assignment 14, Procedural Chess, Move structure
 *    Brother McCracken, CS165
 * Author:
 *    Br. Helfrich
 * Summary:
 *    This describes the move structure which describes how to perform a
 *    chess move.  Additionally, there are the functions converting a string
 *    move into the Move class.  This is called "parse"
 ************************************************************************/

#include <cassert>     // for asserts
#include <iostream>    // for CIN and COUT

#include "move.h"

/**********************************************************************
 * MAIN: Driver program
 ***********************************************************************/
int main()
{
      char board[8][8] =
      {
         { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
         { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
         { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' }
      };

      // forever
      for (;;)
      {
         Move move;

         // prompt
         std::cout << "What is the move? ";
         std::cin  >> move.text;
         if (move.text == std::string("quit"))
            return 0;

         // parse
               try
               {
                  moveParse(move, board);

                  // verify
                  std::cout << "\tSource:       ("
                            << (int)move.source.c << ", " << (int)move.source.r
                            << ")\n";
                  std::cout << "\tDestination:  ("
                            << (int)move.dest.c << ", " << (int)move.dest.r
                            << ")\n";
                  std::cout << "\tCapture?      "
                            << (move.capture ? "yes" : "no")
                            << std::endl;
                  std::cout << "\tKing Castle?  "
                            << (move.castleK ? "yes" : "no")
                            << std::endl;
                  std::cout << "\tQueen Castle? "
                            << (move.castleQ ? "yes" : "no")
                            << std::endl;
                  std::cout << "\tPromote?      "
                            << (move.promote ? "yes" : "no")
                            << std::endl;
                  std::cout << "\tEn Passant?   "
                            << (move.enpassant ? "yes" : "no")
                            << std::endl;
                  std::cout << "\tPiece:        "
                            << move.piece
                            << std::endl;
               }
               catch (std::string s)
               {
                  std::cout << "ERROR: " << s << std::endl;
               }
      }
      return 0;
}
