#pragma once
#include "board.h"

struct MoveGen {
    // Generate white pawn single pushes (ignoring captures and promotions for now)
    static Bitboard white_pawn_single_pushes(const Board& board);
};
