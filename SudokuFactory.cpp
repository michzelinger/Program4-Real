/*
 * SudokuFactory.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuFactory class that implements the sudokuFactory objects methods.
 * 
*/
#include "SudokuFactory.h"
#include "SudokuOffspring.h"
#include <memory>
using namespace std;

// Sudoku Factory constructor
// sets reporduction variable to a make_shared ptr of SudokuOffspring.
SudokuFactory::SudokuFactory() {
    reproduction_ = make_shared<SudokuOffspring>();
}
