/*
 * SudokuPopulation.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuPopulation class that implements the sudoku population methods.
 * 
*/
#include "Sudoku.h"
#include "SudokuFactory.h"
#include "SudokuFitness.h"
#include "SudokuPopulation.h"
#include <algorithm>
#include <memory>
using namespace std;

//constructor
SudokuPopulation::SudokuPopulation(int populationSize, shared_ptr<Puzzle> &puzzle){
  populationSize_ = populationSize;
  fitness_ = make_shared<SudokuFitness>();
  factory_ = make_shared<SudokuFactory>();
  for(int i = 0; i < populationSize; i++){
      shared_ptr<Puzzle> sudokuPuzzle = factory_->createPuzzle(puzzle);
      puzzles_.emplace_back(fitness_->howFit(sudokuPuzzle), sudokuPuzzle);
  }
}

//default destructor
SudokuPopulation::~SudokuPopulation(){
}
/*
* Parameters: the percentage to cull
* Description: culls a % from the population
* Return: No returns
*/
void SudokuPopulation::cull(double percent){
  sort(puzzles_.begin(), puzzles_.end());
  int cullFrom = (1 -percent) * populationSize_;
  cullFrom = max(cullFrom, 1);
  puzzles_.erase(puzzles_.begin() + cullFrom, puzzles_.end());
}

/*
* Description: adds a new generation of puzzles to the population
* Return: No returns
*/
void SudokuPopulation::newGeneration(){
  int remain = puzzles_.size();
  int i =0;
  while(puzzles_.size() < populationSize_){
    shared_ptr<Puzzle> sudokuPuzzle = factory_->createPuzzle(puzzles_[i].second);
    puzzles_.emplace_back(fitness_->howFit(sudokuPuzzle), sudokuPuzzle);
    if(i+1 != remain){
      i = i+1;
    }
  }
}

/*
* Description: gets the best fitness from the population
* Return: the best fitness number as int
*/
int SudokuPopulation::bestFitness(){
  Separate s = *min_element(puzzles_.begin(), puzzles_.end());
  return s.first;    
}

/*
* Description: gets the puzzle with best fitness from the population
* Return: the best puzzle as separate pair
*/
Separate SudokuPopulation::bestIndividual(){
  return *min_element(puzzles_.begin(), puzzles_.end());
}