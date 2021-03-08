


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

}
SudokuPopulation::~SudokuPopulation(){

}

  void SudokuPopulation::cull(double percent){
    
  }
  void SudokuPopulation::newGeneration(){
    
  }
  int SudokuPopulation::bestFitness(){
    return 5;
  }
  Separate SudokuPopulation::bestIndividual(){
      return *min_element(puzzles_.begin(), puzzles_.end());
}