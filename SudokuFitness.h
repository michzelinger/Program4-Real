#pragma once

#include "Fitness.h"
#include <memory>
using namespace std;

class SudokuFitness : public Fitness {
public:
    int howFit(shared_ptr<Puzzle> &puzzle) override;
};