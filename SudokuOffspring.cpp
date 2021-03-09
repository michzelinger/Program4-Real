#include "SudokuOffspring.h"

SudokuOffspring::SudokuOffspring(){
  
}

SudokuOffspring::~SudokuOffspring(){
  
}
shared_ptr<Puzzle> SudokuOffspring::makeOffspring(shared_ptr<Puzzle> &puzzle){
  shared_ptr<Sudoku> sudokuPuzzle = dynamic_pointer_cast<Sudoku>(puzzle);
  default_random_engine probabilityGenerator;
  default_random_engine valueGenerator;
  
  uniform_int_distribution<int> probabilityUniform(1,100);
  uniform_int_distribution<int> valueUniform(1,9);
  int newVal = 0;
  //shared_ptr<Sudoku> sudoku = make_shared<Sudoku>();
  for(int i = 0; i <9; i++){
    for(int j=0; j<9; j++){
      int value = sudokuPuzzle->getValue(i+1,j+1);
      bool availability = sudokuPuzzle->getChangeAvailability(i+1,j+1);
      // cout << avalability<< endl;
      int newProbability = probabilityUniform(probabilityGenerator);
      
      if(value == 0 || (newProbability < probability_ && availability == true)){
        newVal = valueUniform(valueGenerator);
      }
//      if(availability){
        sudokuPuzzle->setValue(i+1, j+1, newVal, availability);
//      }
    }
  }
  return sudokuPuzzle;
}