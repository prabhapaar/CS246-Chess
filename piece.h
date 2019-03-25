#ifndef _PIECE_H_
#define _PIECE_H_

#include <vector>
#include <string>
#include "piece.h"
#include "color.h"
#include "board.h"

class Piece {
	Color color;
	int value; 
	// value of the piece [pawn=1, knight,bishop=3, rook=5, queen=9, king=10]
public:
	bool attatcked();
	bool attacking();
	void move();
}

#endif