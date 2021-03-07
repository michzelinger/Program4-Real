#include "Puzzle.h"

ostream &operator<<(ostream &out, const Puzzle &puzzle) {
    return puzzle.printout(out);
}

istream &operator>>(istream &in, Puzzle &puzzle) {
    return puzzle.readin(in);
}

Puzzle::Puzzle()= default;

// destructor
Puzzle::~Puzzle() {
}