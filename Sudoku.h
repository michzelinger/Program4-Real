#pragma once
#include "Puzzle.h"
#include "Element.h"
#include <string>
#include <vector>
using namespace std;

class Sudoku : public Puzzle{


public:
  Sudoku();
  ~Sudoku();
  int getValue(int row, int column);
  bool getChangeAvailability(int row, int column);
  void setValue(int row, int column, int value, bool availability);

  istream &readin(istream &in) override;
  ostream &printout(ostream &out) const override;


private:
    vector<Element> sudokuGrid_;
};