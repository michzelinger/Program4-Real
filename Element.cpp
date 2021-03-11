/*
 * Element.cpp file
 * author: Michael Zelinger & Clyde Gjeci
 * date: 3/10/2021
 *
 * description:
 * Element class to implement all the element methods
 * in a sudoku puzzle.
 *
*/
#include "Element.h"

//default constructor
Element::Element() {
   value_ = 0;
	availability_ = true;
}

//parametrised constructor
Element::Element(int value, bool availability) {

	availability_ = availability;
	value_ = value;
}
/*
* Description: Gets the elements value
* Return: returns the elements value type int
*/
int Element::getValue() const {
	return value_;
}
/*
* Description: Gets the elements availability
* Return: returns the elements availability type bool
*/
bool Element::getAvalability() const {
	return availability_;
}
/*
* Parameters: new value
* Description: Sets the elements value
* Return: No returns
*/
void Element::setValue(int newValue) {
	value_ = newValue;
}

//default destructor
Element::~Element() {
}