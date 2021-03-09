#include "Element.h"

Element::Element(){
   value_ = 0;
   availability_ = true;
}
Element::Element(int value, bool availability){

    availability_ = availability;
    value_ = value;
  // else{
  //   cerr << "Value should always be between 0-9." << endl;
  // }
}
int Element::getValue() const{
  return value_;
}

bool Element::getAvalability() const{
  return availability_;
}

void Element::setValue(int newValue){
  value_ = newValue;
}

Element::~Element(){
  
}