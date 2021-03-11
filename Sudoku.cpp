/*
 * Sudoku.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Sudoku class that implements the Sudoku puzzles object methods
 * 
*/
#include "Sudoku.h"
#include "Element.h"
 
//constructor
Sudoku::Sudoku() {
  sudokuGrid_.resize(81);
}

//destructor
Sudoku::~Sudoku(){
}

/*
* Parameters: The row and the column, the new value and the new availability
* Description: Sets the sudoku value and availability based on row and column
* Return: No returns
*/
void Sudoku::setValue(int r, int c, int val, bool availability) {
    
  if(availability == true){
    sudokuGrid_[(r-1)*9+c-1] = Element(val,availability);
  } 

}
/*
* Description: gets the sudoku puzzle from the cin and adds it to sudokuGrid_.
* Return: the sudoku puzzle istream
*/
istream &Sudoku::readin(istream &in) {
    bool availability;
    sudokuGrid_.clear();
    char c;
    //reads all the chars
    while (in >> c) {
        if (isdigit(c)) {
          if(c-'0' > 0){
            availability = false;
          }
          else{
            availability = true;
          }
          Element e(c-'0',availability);
          //adds to the sudoku vector
          sudokuGrid_.push_back(e);
        }
        if (sudokuGrid_.size() == 81) {
          break;
        }
    }
    return in;
}

/*
* Description: prints the puzzle in the right format 
* Return: the sudoku puzzle ostream      
*/
ostream &Sudoku::printout(ostream &out) const {

    // header and footer string    
    const string hdr_ftr = "+-------+-------+-------+\n";
    out << hdr_ftr;
    for (int i=0; i<9; ++i) {
        // border
        out << "|";
        for (int j=0; j<9; ++j) {
            out << " " << sudokuGrid_[i*9+j].getValue();
            // inner border
            if (j % 3 == 2) out << " |";
        }
        out << endl;
        if (i % 3 == 2) out << hdr_ftr;
    }
    return out;
}

/*
* Parameters: The row and the column of sudoku
* Description: Gets the sudoku availability based on row and column
* Return: returns the sudoku availability type bool
*/
bool Sudoku::getChangeAvailability(int row, int column){
  return sudokuGrid_[(row-1)*9+column-1].getAvalability();
}

/*
* Parameters: The row and the column of sudoku
* Description: Gets the sudoku value based on row and column
* Return: returns the sudoku value type int
*/
int Sudoku::getValue(int row, int column){
  return sudokuGrid_[(row-1)*9+column-1].getValue();
}