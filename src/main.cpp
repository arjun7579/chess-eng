#include "bitboard.h"
#include "board.h"
#include "movegen.h"
#include <iostream>

int main() {
    Board board;
    board.init_startpos();

    std::cout << "White Pawns:" << std::endl;
    print_bitboard(board.whitePawns);

    Bitboard single_pushes = MoveGen::white_pawn_single_pushes(board);
    std::cout << "White pawn single pushes:" << std::endl;
    print_bitboard(single_pushes);

    return 0;
}
