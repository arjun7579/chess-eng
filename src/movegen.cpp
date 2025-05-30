#include "movegen.h"

// Single white pawn pushes: shift white pawns by 8, then remove occupied squares

Bitboard MoveGen::white_pawn_single_pushes(const Board& board) {
    Bitboard empty = ~(board.whitePawns | board.whiteKnights | board.whiteBishops | board.whiteRooks |
                       board.whiteQueens | board.whiteKing | board.blackPawns | board.blackKnights |
                       board.blackBishops | board.blackRooks | board.blackQueens | board.blackKing);

    Bitboard single_pushes = (board.whitePawns << 8) & empty;
    return single_pushes;
}
