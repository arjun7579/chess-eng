# 🧠 Chess Engine (C++ Bitboard-Based)

A work-in-progress chess engine written in C++ using **bitboards** for efficient board representation and move generation. The project is structured to eventually support integration with Python and machine learning-based evaluation.

---

## ✅ Features Implemented

- 🧩 **Bitboard infrastructure**
  - `uint64_t` representation of chess boards.
  - Bitboard visualization utility (`print_bitboard`).

- ♟️ **Initial board setup**
  - Standard starting positions for all pieces.
  - `Board` struct with separate bitboards for each piece and color.

- 🔍 **Basic move generation**
  - White pawn single-square advances (ignores captures and promotions for now).
  - Infrastructure in place to extend to other piece types and move types.

- 🚀 **Working main program**
  - `main.cpp` demonstrates board initialization and printing valid pawn pushes.



