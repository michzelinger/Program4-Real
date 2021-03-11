/*
 * SudokuFactory.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuFactory header class that represents the sudoku objects with the 
 * factory design pattern.
 * 
*/
#pragma once

#include <iostream>
#include "PuzzleFactory.h"
#include "SudokuOffspring.h"
using namespace std;

// inherets the PuzzleFactory methods
class SudokuFactory : public PuzzleFactory {
public:
    //SudokuFactory contructor
    SudokuFactory();    
};