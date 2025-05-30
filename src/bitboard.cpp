#include "bitboard.h"
#include <iostream>

void print_bitboard(Bitboard b) {
    for (int rank = 7; rank >= 0; --rank) {
        for (int file = 0; file < 8; ++file) {
            int sq = rank * 8 + file;
            std::cout << ((b & (1ULL << sq)) ? "1 " : ". ");
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
