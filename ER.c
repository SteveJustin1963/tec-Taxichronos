; 1.6e-19 fstore e: This line stores the value 1.6e-19 in a variable called "e".
;100 fstore V: This line stores the value 100 in a variable called "V".
; 9e-31 fstore m: This line stores the value 9e-31 in a variable called "m".
; 3e8 fstore c: This line stores the value 3e8 in a variable called "c".
; e f@ V f@ f*: This line calculates the value of "e" times "V" and stores it in a variable called "E".
; c f@ m f@ f* f*: This line calculates the value of "c" times "m" squared and stores it in a variable called "E".
; E f@ f/: This line calculates the square root of "E" and stores it in a variable called "v".
; "The energy transferred to the electron is " .: This line prints the text "The energy transferred to the electron is ".
; E f@ .: This line prints the value of "E". 
; "  joules." .: This line prints the text "joules."
; cr: This line prints a blank line.
; "The relativistic speed of the electron is " .: This line prints the text "The relativistic speed of the electron is ".
; v f@ .: This line prints the value of "v".
; "  m/s." .: This line prints the text "m/s."
;
;
;
;
#include <iostream>
#include <math.h>

int main () {
  float e = 1.6*pow(10,-19); //electronic charge
  float V = 100; //voltage
  float m = 9*pow(10,-31); //mass of electron
  float c = 3*pow(10,8); //speed of light
  float E = e*V; //energy transferred to electron
  float v = c*sqrt(1-pow(m*c/E,2)); //relativistic speed
  
  std::cout << "The energy transferred to the electron is " << E << " joules." << std::endl;
  std::cout << "The relativistic speed of the electron is " << v << " m/s." << std::endl;
  
  return 0;
}


