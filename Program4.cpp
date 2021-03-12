/*
 * Program4.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * hours spent on design, modifications and error handling: 20+
 *
 * description:
 * The Program 4 is the main class that creates a sudoku puzzle based on the input values,
 * solves it using a genetic algorithm depending on the population size and number of 
 * generations provided as args and prints the result with a fitness score.
 *
 * program details:
 * The purpose of this program is to use a read-in a sudoku puzzle using cin, get the population
 * and number of generations from args and solve the sudoku puzzle. The genetic algorithm
 * first takes the population and number of generations. Based on the population size it creates
 * a number of puzzles. Then it culls 90% of the puzzles with the worst fitness and depending
 * on the number of generations it creates new puzzles and continues this process until either
 * the puzzle is solved (fitness) is 0 or the number of generations is finished. This program
 * uses design patterns to improve the flow of the program and the readability.
 * If the fitness of the final puzzle is 0 that means the puzzle is totally solved otherwise
 * any other fitness number would indicate taht the puzzle is close to being solved but its 
 * not there yet.
 *
 * The input will be the command line in the following order 
 * 1.population Number 2.Number of Generations
 *
 * To run the program just provide the these args in the command call
 *
 * The puzzle input from the cin would be 81chars from the user when the program asks for it.
 */


#include <iostream>
#include <vector>
#include "Puzzle.h"
#include <memory>
#include "Element.h"
#include "Sudoku.h"
#include "GeneticAlgorithm.h"
#include "Fitness.h"
#include "SudokuFitness.h"


#include "SudokuOffspring.h"

using namespace std;

int main(int argc, char * const argv[])
{
  //Checks if exactly 3 arguments (including a.out/programName.exe) were passed in by the user, and if not prints an error message.
  if(argc != 3)
  {
     cerr << "Not enough arguments passed in. It is expected that 3 arguments (including execution file) will be passed in." << endl;
     return 0;
  }
  int population = atoi(argv[1]);
  int generations = atoi(argv[2]);

  cout << "Please Insert 81 characters for the initial puzzle. " << endl;
  cout << "Insert Here: ";
  shared_ptr<Puzzle> p = make_shared<Sudoku>();

  cin >> *p;
  cout << "Initial puzzle is: " << endl;
  cout << *p << endl;

  GeneticAlgorithm ga(population,generations,p);

  Separate best = ga.run();
  cout << "Best fit puzzle is: " << endl;
  cout << *best.second << endl;
  cout << "Best Fit of best puzzle is: " << best.first << endl;
  return 0;
}
