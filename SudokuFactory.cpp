#include "SudokuFactory.h"
#include "SudokuOffspring.h"
#include <memory>
using namespace std;

// Sudoku Factory
SudokuFactory::SudokuFactory() {
    reproduction_ = make_shared<SudokuOffspring>();
}