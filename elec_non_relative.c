 ; electron

#include <iostream>
#include <math.h>

int main () {
  float e = 1.6*pow(10,-19); //electronic charge
  float V = 100; //voltage
  float m = 9*pow(10,-31); //mass of electron
  float v = 6*pow(10,6); //speed of electron
  float E = e*V; //energy transferred to electron
  
  std::cout << "The energy transferred to the electron is " << E << " joules." << std::endl;
  std::cout << "The speed of the electron is " << v << " m/s." << std::endl;
  
  return 0;
}

