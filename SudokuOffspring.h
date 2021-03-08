#pragma once
#include "Sudoku.h"
#include "Reproduction.h"
#include <memory>
#include <random>
#include <functional>
using namespace std;

class SudokuOffspring : public Reproduction{
  public:
    SudokuOffspring();
    ~SudokuOffspring();
    shared_ptr<Puzzle> makeOffspring(shared_ptr<Puzzle> &puzzle) override;
  private:
    const int probability_ = 5;
};