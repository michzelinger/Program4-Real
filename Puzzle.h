#pragma once
#include <iostream>

using namespace std;

class Puzzle {
   friend ostream &operator <<(ostream &out, const Puzzle &puzzle);
   friend istream &operator>>(istream &in, Puzzle &puzzle);
   public:
      Puzzle();
      ~Puzzle();

   private:



};