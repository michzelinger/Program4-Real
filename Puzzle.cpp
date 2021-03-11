/*
 * Puzzle.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Puzzle implementation class that represents the puzzle objects.
 * 
*/
#include "Puzzle.h"

// out operator overload method
ostream &operator<<(ostream &out, const Puzzle &puzzle) {
    return puzzle.printout(out);
}
// in operator overload method
istream &operator>>(istream &in, Puzzle &puzzle) {
    return puzzle.readin(in);
}

//default constructor
Puzzle::Puzzle()= default;

// destructor
Puzzle::~Puzzle() {
}