#pragma once
#include <iostream>
using namespace std;

class Element{

  public:
    Element();
    Element(int value, bool availability);
    ~Element();
    int getValue() const;
    bool getAvalability() const;
  

    void setValue(int newValue);
  private:

      int value_ = 0;
      bool availability_;
};