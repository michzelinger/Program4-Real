/*
 * PuzzleFactory.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * PuzzleFactory header class that represents the puzzle objects with the 
 * factory design pattern.
 * 
*/
#pragma once
#include <iostream>
#include "Puzzle.h"
#include <memory>
#include "Reproduction.h"

using namespace std;

class PuzzleFactory {
public:
  /*
  * Description: creates a new puzzle
  * Return: the newly created puzzle
  */
  virtual shared_ptr<Puzzle> createPuzzle(shared_ptr<Puzzle> &puzzle);
  //destructor
  virtual ~PuzzleFactory();

protected:
    // reproduction object pointer
    shared_ptr<Reproduction> reproduction_;
};