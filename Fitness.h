/*
 * Fitness.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Fitness header class that represents the puzzle fitness object
 * 
*/
#pragma once

#include "Puzzle.h"
#include <memory>
using namespace std;

class Fitness {
public:
    //default destructor
    virtual ~Fitness() = default;
    /*
    * Parameters: the puzzle we need to take the fitness number
    * Description: Calculates the puzzles fitness number
    * Return: The puzzle fitness number type int
    */
    virtual int howFit(shared_ptr<Puzzle> &puzzle) = 0;
};