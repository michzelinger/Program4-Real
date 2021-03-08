#include <iostream>
#include <vector>
#include "Puzzle.h"
#include <memory>
#include "Element.h"
#include "Sudoku.h"
#include "Fitness.h"
#include "SudokuFitness.h"
#include "SudokuOffspring.h"

using namespace std;

int main(/*int argc, char * const argv[]*/)
{
   /*
   if(argc != 3)
   {
      cerr << "Not enough arguments passed in. It is expected that 3
      arguments (including execution file) will be passed in." << endl;
      return 0;
   }
   int population = 0;
   int generations = 0;
   popultaion = atoi(argv[1]);
   generations = atoi(argv[2]);*/
  //  cout << b.getValue() <<endl;
  //  cout << b.getAvalability() << endl;

  //  Sudoku sudoku;
  //  vector<Element> vec;
  //  vec.push_back(a);
  //  vec.push_back(b);
  //  vec[1].setValue(5);
  //  for(int i =0; i<vec.size(); i++)
  //  {
  //    cout << vec[i].getValue() << endl;
  //    cout << vec[i].getAvalability() << endl;
  //  }

  //  cout << b.getValue() <<endl;
  //  cout << b.getAvalability() << endl;

  //  Sudoku sudoku;
  //  vector<Element> vec;
  //  vec.push_back(a);
  //  vec.push_back(b);
  //  vec[1].setValue(5);
  //  for(int i =0; i<vec.size(); i++)
  //  {
  //    cout << vec[i].getValue() << endl;
  //    cout << vec[i].getAvalability() << endl;
  //  }

   
  //  Puzzle a;
   string initialSudokuPuzzle;
   cout << "Please Insert 81 characters for the initial puzzle. " << endl;
   cout << "Insert Here: ";
   //cin >> initialSudokuPuzzle;
   shared_ptr<Puzzle> p = make_shared<Sudoku>();
  
   //cout << initialSudokuPuzzle;
   cin >> *p;
  //udoku >> initialSudokuPuzzle;
   cout << *p << endl;
   shared_ptr<Fitness> f = make_shared<SudokuFitness>();
   cout << f->howFit(p) << endl;

   //s.readin();
   return 0;
}