#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Fitness.h"
#include "PuzzleFactory.h"
//#include "Separate.h"
using namespace std;

// struct Separate{
  
using Separate = pair<int, shared_ptr<Puzzle>>;
class Population {
  // Puzzle individual = pair<int, Puzzle>;
   public:
      Population();
      virtual ~Population();

      virtual void cull(double percent) = 0;
      virtual void newGeneration() = 0;
      virtual int bestFitness() = 0;
      virtual Separate bestIndividual() = 0;

   protected:
      int populationSize_;
      vector<Separate> puzzles_;
      shared_ptr<Fitness> fitness_;
      shared_ptr<PuzzleFactory> factory_;
};