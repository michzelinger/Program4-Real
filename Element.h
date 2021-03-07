#pragma once
#include <iostream>
using namespace std;

class Element{

  public:
    Element();
    Element(int a);

    int getValue() const;
    bool getAvalability() const;
  

    void setValue(int newValue);
  private:

      int value = 0;
      bool availability = true;
};