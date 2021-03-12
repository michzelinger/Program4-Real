/*
 * SudokuFitness.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuFitness class that implements the how fit method for the
 * Sudoku puzzles.
 * 
*/
#include "Sudoku.h"
#include "SudokuFitness.h"
#include <set>

/*
* Parameters: the puzzle we need to take the fitness number
* Description: Calculates the puzzles fitness number
* Return: The puzzle fitness number type int
*/
int SudokuFitness::howFit(shared_ptr<Puzzle> &puzzle_){
   shared_ptr<Sudoku> sudokuPuzzle = dynamic_pointer_cast<Sudoku>(puzzle_);

  // holds all the conflicts  
  int conflicts_ = 0;
  int valueToCheck = 0;

  //We are using a set when counting the number of conflicts in a puzzle
  //because sets cannot have duplicates in them. Therefore, after we are done
  //adding number to the set, we will take the sets size minus 9 and get how many
  //conflicts are in the row/column/or 3x3.
  set<int> valuesHolder;
   
  //checks rows for conflicts
  for(int row = 1;row<10; row++){
    valuesHolder.clear();
    for(int i=1;i<10;i++){
      
      valuesHolder.insert(sudokuPuzzle->getValue(row, i));
    }
    conflicts_ += 9 - valuesHolder.size();
  }
  

  //checks columns for conflicts
  for(int column = 1;column<10; column++){
    valuesHolder.clear();
    for(int i=1;i<10;i++){
      
      valuesHolder.insert(sudokuPuzzle->getValue(i, column));
      
    }
    conflicts_ += 9 - valuesHolder.size();
  }
  
  //checks 3x3 blocks for conflicts
  for(int block = 0; block <9; ++block){
    int x = (block / 3) * 3;
    int y = (block % 3) * 3;
    valuesHolder.clear(); 
    for(int i = x; i < x+3; ++i){
      for(int j = y; j < y+3; ++j){
        valuesHolder.insert(sudokuPuzzle->getValue(i+1,j+1));
      }
    }
    conflicts_ += 9 - valuesHolder.size();
  }
  
  return conflicts_;
}


