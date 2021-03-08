#include "PuzzleFactory.h"

shared_ptr<Puzzle> PuzzleFactory::createPuzzle(shared_ptr<Puzzle> &puzzle) {
    return reproduction_->makeOffspring(puzzle);
}

// destructor
PuzzleFactory::~PuzzleFactory() {
}
