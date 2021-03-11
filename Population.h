/*
 * Population.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Population header class that represents the puzzle population
 * 
*/
#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Fitness.h"
#include "PuzzleFactory.h"
using namespace std;
  
//each puzzle is a seperate pair with fitness number and a shared pointer
using Separate = pair<int, shared_ptr<Puzzle>>;
class Population {

   public:
      // population constructor
      Population();
      // population destructor
      virtual ~Population();
      /*
      * Parameters: the percentage to cull
      * Description: culls a % from the population
      * Return: No returns
      */
      virtual void cull(double percent) = 0;
      /*
      * Description: adds a new generation of puzzles to the population
      * Return: No returns
      */
      virtual void newGeneration() = 0;
      /*
      * Description: gets the best fitness from the population
      * Return: the best fitness number as int
      */
      virtual int bestFitness() = 0;
      /*
      * Description: gets the puzzle with best fitness from the population
      * Return: the best puzzle as separate pair
      */
      virtual Separate bestIndividual() = 0;

   protected:
      // int for the population size
      int populationSize_;
      // vector to hold all the puzzles in the population
      vector<Separate> puzzles_;
      // shared pointer for the fitness
      shared_ptr<Fitness> fitness_;
      // shared pointer for the puzzle factory
      shared_ptr<PuzzleFactory> factory_;
};