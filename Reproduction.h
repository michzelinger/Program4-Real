/*
 * Reproduction.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Reproduction header class that represents the puzzles getting reproduced
 * 
*/
#pragma once
#include "Puzzle.h"
#include <iostream>
#include <memory>
using namespace std;

class Reproduction
{
   public:
      //default constructor
      Reproduction() = default;
      //default destructor
      ~Reproduction()= default;
      /*
      * Description: creates a new puzzle based on randomness
      * Return: the newly created puzzle
      */
      virtual shared_ptr<Puzzle> makeOffspring(shared_ptr<Puzzle> &puzzle) = 0;
};