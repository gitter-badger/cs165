#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <cassert>
#include <iostream>

#define NO_PIECE '*'   // There is no piece on this location of the board
#define INVALID 127    // invalid row or column value

/********************************************
 * COORD
 * A single r,c coordinate
 * Written by Br. Helfrich
 *******************************************/
struct Coord
{
   char r;   // row, from 0..7
   char c;   // col, from 0..7
};

/*********************************************
 * MOVE
 * A single move, including the textual description
 * and what it breaks down to
 * Written by Br. Helfrich
 ********************************************/
struct Move
{
   std::string text;           // textual description of the move
   char   piece;          // unknown piece
   bool   capture;        // did a capture happen this move?
   Coord  source;         // where the move originated from
   Coord  dest;           // where the move finished
   bool   enpassant;      // Enpassant pawn capture
   bool   castleK;        // kingside castle
   bool   castleQ;        // queenside castle
   bool   promote;        // promote to move.piece
};

/**************************************************************
 * MOVE PARSE
 * Accept the user's input in algebra notation and determine
 * if it is valid
 *    INPUT  move.text    The Smith Notation of the move
 *           board[][]    The current state of the board
 *    OUTPUT move.*       All the fields of the move filled in
 *           EXCEPTION    String of error message
 * Written by Br. Helfrich
 *************************************************************/
void moveParse(Move & move, char board[][8]) throw(std::string);

#endif
