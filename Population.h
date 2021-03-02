#pragma once
#include <iostream>
#include <vector>
#include "Fitness.h"
#include "PuzzleFactory.h"
using namespace std;

class Population {
  // Puzzle individual = pair<int, Puzzle>;
   public:
      Population();
      ~Population();

      void cull(double percent);
      void newGeneration();
      int bestFitness();
      pair<int, Puzzle> bestIndividual();

   private:
      int size_;
      vector<pair<int, Puzzle>> puzzles_;
      Fitness fitness_;
      PuzzleFactory factory_;
};