#include "Sudoku.h"
#include "Element.h"
  Sudoku::Sudoku() {
    sudokuGrid_.resize(81);
  }
  Sudoku::~Sudoku(){

  }

void Sudoku::setValue(int r, int c, int val) {
    
    if(getChangeAvailability(r, c) == true){
      sudokuGrid_[(r-1)*9+c-1] = Element(val);
    } 
    else {
      cerr << "Value cant be changed" << endl;
    }
     
}

//  int Sudoku::value(int r, int c) {
//     return grid[r*9+c].first;
// }



// [5 7 9 3 3 5  6 7 7 ---- 8 89  0 0]

// void Sudoku::setValue(int r, int c, int val, bool deter) {
//     grid[r*9+c] = {val, deter};
// }
istream &Sudoku::readin(istream &in) {
    // first clear grid
    sudokuGrid_.clear();
    char c;
    while (in >> c) {
        // read finished, break
   
                // only use in digit
        if (isdigit(c)) {
          Element e(c-'0');
          sudokuGrid_.push_back(e);

         // cout <<sudokuGrid_.size() <<endl;
          cout <<sudokuGrid_.size() <<endl;
        }
        if (sudokuGrid_.size() == 81) {
           break;
        }
    }
    return in;
}

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

bool Sudoku::getChangeAvailability(int row, int column){
  return sudokuGrid_[(row-1)*9+column-1].getAvalability();
}

int Sudoku::getValue(int row, int column){
  return sudokuGrid_[(row-1)*9+column-1].getValue();
}