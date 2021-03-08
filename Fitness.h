#pragma once

#include "Puzzle.h"
#include <memory>
using namespace std;

class Fitness {
public:
    virtual ~Fitness() = default;
    virtual int howFit(shared_ptr<Puzzle> &puzzle) = 0;
};