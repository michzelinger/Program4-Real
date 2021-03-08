#pragma once

#include "Population.h"
#include <memory>
#include "Puzzle.h"
#include "Sudoku.h"
#include "Separate.h"
using namespace std;

class SudokuPopulation : public Population{

  public:
    SudokuPopulation(int populationSize, shared_ptr<Puzzle> &puzzle);
    ~SudokuPopulation();
    void cull(double percent) override;
    void newGeneration() override;
    int bestFitness() override;
    Separate bestIndividual() override;
};