/*
 * GeneticAlgorithm.h file
 * author: Clyde Gjeci
 * date: 2/25/2021
 * 
 * description:
 * GeneticAlgorithm class gets population number and number of generations
 * It then based on these parameters calls the run method which creates all
 * the sudoku puzzles in the initial generation. Then it calclates the fitness
 * numbers of each of these puzzles. After it culls the sudoku puzzles with 
 * the lowerst fitness number. After thats done it starts with generations and
 * after each generation it performs the same processes. If a puzzle solution is 
 * found (fitness number 0) It stops the genetic algorithm and returns that puzzles.
 *
 */

#pragma once

#include "Puzzle.h"
#include "Population.h"
#include "SudokuPopulation.h"
#include <limits>
#include <memory>
using namespace std;

class GeneticAlgorithm{
  public:
    // genetic algorithm contructor
    GeneticAlgorithm(int populationSize, int maxGeneration, shared_ptr<Puzzle> &initialPuzzle);
    /*
    * Description: Method that runs the genetic algorithm
    * Return: The puzzle with the lowest fitness score
    */
    Separate run();
  private:
    //int to hold the number of generations
    int maxGeneration_ = 0;
    //shared pointer to population
    shared_ptr<Population> population_;
};

// genetic algorithm contructor
GeneticAlgorithm::GeneticAlgorithm(int populationSize, int maxGeneration, shared_ptr<Puzzle> &initialPuzzle) {
   population_ = make_shared<SudokuPopulation>(populationSize, initialPuzzle);
   maxGeneration_ = maxGeneration;
}

/*
* Description: Method that runs the genetic algorithm
* Return: The puzzle with the lowest fitness score
*/
Separate GeneticAlgorithm::run() {
   Separate best{ 10000, nullptr };
   for (int i = 0; i < maxGeneration_; i++) {
      Separate current = population_->bestIndividual();

      if (current.first == 0) {
         best = current;
         return best;
      }

      if (current.first < best.first) {
         best = current;
      }

      population_->cull(0.9);
      population_->newGeneration();
      if (i == maxGeneration_ - 1)
      {
         Separate current = population_->bestIndividual();

         if (current.first == 0) {
            best = current;
            return best;
         }

         if (current.first < best.first) {
            best = current;
         }
      }
   }
   return best;

}

