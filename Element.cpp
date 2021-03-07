#include "Element.h"

Element::Element(){
  value = 0;
  availability = true;
}
Element::Element(int a){
  if(a > 0)
  {
    value = a;
    availability = false;
  }
  else if(a == 0)
  {
    value = a;
    availability = true;
  }
  else{
    cerr << "Value should always be between 0-9." << endl;
  }
}
int Element::getValue() const{
  return value;
}

bool::Element::getAvalability() const{
  return availability;
}

void Element::setValue(int newValue){
  value = newValue;
}