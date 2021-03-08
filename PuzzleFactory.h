#pragma once
#include <iostream>
#include "Puzzle.h"
#include <memory>
#include "Reproduction.h"

using namespace std;

class PuzzleFactory {
public:
  // Puzzle createPuzzle()
  virtual shared_ptr<Puzzle> createPuzzle(shared_ptr<Puzzle> &puzzle);
 // PuzzleFactory();
  virtual ~PuzzleFactory();

protected:
    shared_ptr<Reproduction> reproduction_;
};