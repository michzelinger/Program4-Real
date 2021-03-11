/*
 * Element.h file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 * 
 * description:
 * Element header class to represent all the individual elements (squares)
 * in a sudoku puzzle.  
 * 
*/

#pragma once
#include <iostream>
using namespace std;

/*
* Element class to create individual puzzle elements 
*/
class Element{

  public:

    // default constructor
    Element();
    // parametrised constructor
    Element(int value, bool availability);
    // default destructor
    ~Element();
    /*
    * Description: Gets the elements value
    * Return: returns the elements value type int
    */
    int getValue() const;
    /*
    * Description: Gets the elements availability
    * Return: returns the elements availability type bool
    */
    bool getAvalability() const;  
    /*
    * Parameters: new value
    * Description: Sets the elements value
    * Return: No returns
    */
    void setValue(int newValue);
  private:
      //holds the elements value
      int value_ = 0;
      //holds the elements availability
      bool availability_;
};