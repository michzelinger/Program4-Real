/*
 * SudokuFitness.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuFitness header class that represents the fitness object within
 * a Sudoku puzzle.
 * 
*/
#pragma once

#include "Fitness.h"
#include <memory>
using namespace std;

class SudokuFitness : public Fitness {
public:
    /*
    * Parameters: the puzzle we need to take the fitness number
    * Description: Calculates the puzzles fitness number
    * Return: The puzzle fitness number type int
    */
    int howFit(shared_ptr<Puzzle> &puzzle) override;
};