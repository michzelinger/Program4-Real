#pragma once
#include <iostream>
#include <vector>
#include "Fitness.h"
#include "PuzzleFactory.h"
using namespace std;

class Population {
   public:
   void cull();
   void newGeneration();
   int bestFitness();

   private:
   
}