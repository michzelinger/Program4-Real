/*
 * SudokuPopulation.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * SudokuPopulation header class that represents the sudoku population.
 * 
*/
#pragma once

#include "Population.h"
#include <memory>
#include "Puzzle.h"
#include "Sudoku.h"
using namespace std;

class SudokuPopulation : public Population{

  public:
    //constructor
    SudokuPopulation(int populationSize, shared_ptr<Puzzle> &puzzle);
    //destructor
    ~SudokuPopulation();
    /*
    * Parameters: the percentage to cull
    * Description: culls a % from the population
    * Return: No returns
    */
    void cull(double percent) override;
    /*
    * Description: adds a new generation of puzzles to the population
    * Return: No returns
    */
    void newGeneration() override;
    /*
    * Description: gets the best fitness from the population
    * Return: the best fitness number as int
    */
    int bestFitness() override;
    /*
    * Description: gets the puzzle with best fitness from the population
    * Return: the best puzzle as separate pair
    */
    Separate bestIndividual() override;
};