/*
 * Sudoku.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Sudoku header class that represents the Sudoku puzzles objects
 * 
*/
#pragma once
#include "Puzzle.h"
#include "Element.h"
#include <string>
#include <vector>
using namespace std;

//Sudoku inherets all the puzzle methods
class Sudoku : public Puzzle{

public:
  //constructor
  Sudoku();
  //destructor
  ~Sudoku();
  /*
  * Parameters: The row and the column of sudoku
  * Description: Gets the sudoku value based on row and column
  * Return: returns the sudoku value type int
  */
  int getValue(int row, int column);
  /*
  * Parameters: The row and the column of sudoku
  * Description: Gets the sudoku availability based on row and column
  * Return: returns the sudoku availability type bool
  */
  bool getChangeAvailability(int row, int column);
  /*
  * Parameters: The row and the column, the new value and the new availability
  * Description: Sets the sudoku value and availability based on row and column
  * Return: No returns
  */
  void setValue(int row, int column, int value, bool availability);
  /*
  * Description: gets the sudoku puzzle from the cin and adds it to sudokuGrid_.
  * Return: the sudoku puzzle istream
  */
  istream &readin(istream &in) override;
  /*
  * Description: prints the puzzle in the right format 
  * Return: the sudoku puzzle ostream      
  */
  ostream &printout(ostream &out) const override;


private:
    //vector to hold each sudoku puzzle
    vector<Element> sudokuGrid_;
};