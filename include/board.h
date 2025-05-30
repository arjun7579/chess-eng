#pragma once
#include "bitboard.h"

struct Board {
    Bitboard whitePawns, whiteKnights, whiteBishops, whiteRooks, whiteQueens, whiteKing;
    Bitboard blackPawns, blackKnights, blackBishops, blackRooks, blackQueens, blackKing;

    void init_startpos();
};
