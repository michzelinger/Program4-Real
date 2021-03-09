#pragma once

#include "Puzzle.h"
#include "Population.h"
#include "SudokuPopulation.h"
#include <limits>
#include <memory>
using namespace std;

class GeneticAlgorithm{
  public:
    GeneticAlgorithm(int populationSize, int maxGeneration, shared_ptr<Puzzle> &initialPuzzle);
    Separate run();
  private:
  int maxGeneration_ = 0;
  shared_ptr<Population> population_;
};

GeneticAlgorithm::GeneticAlgorithm(int populationSize, int maxGeneration, shared_ptr<Puzzle> &initialPuzzle){
  population_ = make_shared<SudokuPopulation>(populationSize, initialPuzzle);
  maxGeneration_ =maxGeneration;
}

Separate GeneticAlgorithm::run(){
   Separate best{10000, nullptr};
   for(int i = 0; i <maxGeneration_; i++){
        Separate current = population_->bestIndividual();

        if(current.first == 0){
          best = current;
          return best;
        }

        if(current.first < best.first){
          best = current;
        }

        population_->cull(0.9);
        population_->newGeneration();
   }
   return best;


}

