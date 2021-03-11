/*
 * Puzzle.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Puzzle header class that represents the puzzle objects.
 * 
*/
#pragma once
#include <iostream>

using namespace std;

class Puzzle {
    // out operator overload method
    friend ostream &operator <<(ostream &out, const Puzzle &puzzle);
    // in operator overload method
    friend istream &operator>>(istream &in, Puzzle &puzzle);
    public:
      // constructor
      Puzzle();
      //destructor
      virtual ~Puzzle();
    private:
      /*
      * Description: gets the puzzle from the cin and adds it to the datastructure
      * Return: the puzzle istream
      */
      virtual istream &readin(istream &in) = 0;
      /*
      * Description: prints the puzzle in the right format 
      * Return: the puzzle ostream      
      */
      virtual ostream &printout(ostream &out) const = 0;


};