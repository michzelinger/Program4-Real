/*
 * PuzzleFactory.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * PuzzleFactory class that implements the puzzlefactory objects methods.
 * 
*/
#include "PuzzleFactory.h"

/*
* Description: creates a new puzzle
* Return: the newly created puzzle
*/
shared_ptr<Puzzle> PuzzleFactory::createPuzzle(shared_ptr<Puzzle> &puzzle) {
    return reproduction_->makeOffspring(puzzle);
}

// destructor
PuzzleFactory::~PuzzleFactory() {
}
