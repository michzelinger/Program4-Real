#pragma once
#include <iostream>

using namespace std;

class Puzzle {
   friend ostream &operator <<(ostream &out, const Puzzle &puzzle);
   friend istream &operator>>(istream &in, Puzzle &puzzle);
   public:
      Puzzle();
      virtual ~Puzzle();
   private:

    virtual istream &readin(istream &in) = 0;
    virtual ostream &printout(ostream &out) const = 0;


};