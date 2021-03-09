


#include "Sudoku.h"
#include "SudokuFactory.h"
#include "SudokuFitness.h"
#include "SudokuPopulation.h"
#include <algorithm>
#include <memory>
using namespace std;


SudokuPopulation::SudokuPopulation(int populationSize, shared_ptr<Puzzle> &puzzle){
  populationSize_ = populationSize;
  fitness_ = make_shared<SudokuFitness>();
  factory_ = make_shared<SudokuFactory>();
  for(int i = 0; i < populationSize; i++){
      shared_ptr<Puzzle> sudokuPuzzle = factory_->createPuzzle(puzzle);
      puzzles_.emplace_back(fitness_->howFit(sudokuPuzzle), sudokuPuzzle);
  }
}

SudokuPopulation::~SudokuPopulation(){

}

  void SudokuPopulation::cull(double percent){
    sort(puzzles_.begin(), puzzles_.end());
    int cullFrom = (1 -percent) * populationSize_;
    cullFrom = max(cullFrom, 1);
    puzzles_.erase(puzzles_.begin() + cullFrom, puzzles_.end());
  }
  
  void SudokuPopulation::newGeneration(){
    
  }
  int SudokuPopulation::bestFitness(){
    Separate s = *min_element(puzzles_.begin(), puzzles_.end());
    return s.first;
    
  }
  Separate SudokuPopulation::bestIndividual(){
      return *min_element(puzzles_.begin(), puzzles_.end());
}