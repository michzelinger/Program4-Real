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
SudokuFactory::SudokuFactory() {
    reproduction_ = make_shared<SudokuOffspring>();
}