/*
 * SudokuOffspring.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuOffspring header class that represents the new Reproduction
 * sudoku puzzle objects.
 * 
*/
#pragma once
#include "Sudoku.h"
#include "Reproduction.h"
#include <memory>
#include <random>
#include <functional>
using namespace std;

class SudokuOffspring : public Reproduction{
  public:
    //constructor
    SudokuOffspring();
    //destructor
    ~SudokuOffspring();
    /*
    * Parameters: the sudoku puzzle we need to reproduce
    * Description: makes a new sudoku puzzle based on randomness
    * Return: The new sudoku puzzle
    */
    shared_ptr<Puzzle> makeOffspring(shared_ptr<Puzzle> &puzzle) override;
  private:
    //varible to hold the probability
    const int probability_ = 5;
};