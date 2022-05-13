; find V for 50% speed of light.

#include <iostream>
#include <math.h>

int main () 
{
  float e = 1.6*pow(10,-19); //electronic charge
  float m = 9*pow(10,-31); //mass of electron
  float c = 3*pow(10,8); //speed of light
  float v = c*0.5; //speed
  float E = m*pow(v,2)/2; //energy
  float V = E/e; //voltage
  
  std::cout << "The voltage needed for an electron to travel at 50% the speed of light is " << V << " volts." << std::endl;
  
  return 0;
}

matlab

% find V for 50% speed of light.

e = 1.6*10^(-19); %electronic charge
m = 9*10^(-31); %mass of electron
c = 3*10^8; %speed of light
v = c*0.5; %speed
E = m*v^2/2; %energy
V = E/e; %voltage

fprintf('The voltage needed for an electron to travel at 50%% the speed of light is %f volts.\n', V)
