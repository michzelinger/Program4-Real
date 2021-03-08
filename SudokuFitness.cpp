#include "Sudoku.h"
#include "SudokuFitness.h"
#include <set>

int SudokuFitness::howFit(shared_ptr<Puzzle> &puzzle_){
   shared_ptr<Sudoku> sudokuPuzzle = dynamic_pointer_cast<Sudoku>(puzzle_);
    
   cout << "Got here" << endl;
   int conflicts_ = 0;
   int valueToCheck = 0;
   set<int> valuesHolder;
   // void updateConflicts() 

  for(int row = 1;row<10; row++){
    cout << "Got 2 here" << endl;
    valuesHolder.clear();
    for(int i=1;i<10;i++){
      
      valuesHolder.insert(sudokuPuzzle->getValue(row, i));
    }
    conflicts_ += 9 - valuesHolder.size();
  }
  

  
  for(int column = 1;column<10; column++){
    valuesHolder.clear();
    for(int i=1;i<10;i++){
      
      valuesHolder.insert(sudokuPuzzle->getValue(i, column));
      
    }
    conflicts_ += 9 - valuesHolder.size();
  }
  
  for(int block = 0; block <9; ++block){
    int x = (block / 3) * 3;
    int y = (block % 3) * 3;
    valuesHolder.clear(); 
    for(int i = x; i < x+3; ++i){
      for(int j = y; j < y+3; ++j){
        cout << "Got here 5" << endl;
        valuesHolder.insert(sudokuPuzzle->getValue(i+1,j+1));
      }
    }
    conflicts_ += 9 - valuesHolder.size();
  }
   return conflicts_;
}


