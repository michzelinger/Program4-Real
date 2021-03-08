#pragma once
#include "Puzzle.h"
#include <iostream>
#include <memory>
using namespace std;

class Reproduction
{
   public:
      Reproduction() = default;
      ~Reproduction()= default;
      virtual shared_ptr<Puzzle> makeOffspring(shared_ptr<Puzzle> &puzzle) = 0;
};