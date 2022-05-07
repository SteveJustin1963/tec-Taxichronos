# draft

# tec-Taxichronos
Time travel experiments using the tec-1
 


## Scale - SI prefixes
```
10^24	yotta	Y
10^21	zetta	Z
10^18	exa	E
10^15	peta	P
10^12	tera	T
10^9	giga	G
10^6	mega	M
10^3	kilo	k
10^2	hecto	h
10^1	deka	da
10^-1	deci	d
10^-2	centi	c
10^-3	milli	m
10^-6	micro	µ
10^-9	nano	n
10^-12	pico	p
10^-15	femto	f
10^-18	atto	a
10^-21	zepto	z
10^-24	yocto	y
```

so we build a circuit/apparatus and attached to tec1 via ADC 

## Measurement
time experiment needs time measurements. large time jumps can be checked personally but nano and smaller need finesse.
Ghx storage scopes are >$10,000 so circuits worth a few dollars is our domain. working in the 10^-3 to -6 is easy, -7 and beyond is a challenge.


## detectors 
- PLL phase- to measure the delay, feed clock frequency in, use a fast 74AHC XOR gate to compute the (input of X) XOR (output of X). RC filter the output. The average voltage is proportional to the time delay modulo clock period.

- feed the DUT with a 1 MHz clock, send a 1.0001 MHz clock (put a trim in the Vcc line) to the clock input of a D flop which samples the DUT output, and you got a ghetto 10Gsps sampler, 

## counters
## Sample and hold
## lasers
## electron gun/beam
- typical large TV with a width of 1 meter that equates to the electron beam moving at 96,000 m/s which is orders of magnitude slower than the speed of light which is just under 300,000,000 m/s. https://www.physicsforums.com/threads/faster-than-light.241389/ . 
1. Choose a known distance that light can travel in a reasonable amount of time, such as 1 meter.
2. Set up a timer, and start it when light is emitted at one end of the distance.
3. Stop the timer when the light reaches the other end of the distance.
4. Record the time it took for the light to travel the distance.
5. Now, do the same thing with the electron beam. Set up the timer, start it when the electron beam is emitted, and stop it when the electron beam reaches the other end of the distance.
6. Record the time it took for the electron beam to travel the distance.
7. Compare the two times. If the electron beam is significantly slower than the speed of light, then it will have taken longer for the electron beam to travel the distance than the light.




- electron gun, electrons boiled off the surface of a hot metal plate. They leave the plate with very small speeds, and then the electric field accelerates them towards the anode.  electron has a charge of e coulombs, and the potential difference between the filament and the anode is V volts. The energy transferred to each coulomb of charge is V joules.  energy transferred to electrons is eV joules. The electrons gain kinetic energy. Unlike electrons in a wire, these electrons have nothing to hit, nothing to transfer energy to, as they travel towards the anode. So each electron gains kinetic energy equal to the amount of energy transferred electrically. The electron starts from rest (near enough) so the kinetic energy gained is given by 

- ½mv^2 where m is its mass and v is its speed. 
- ½mv^2 = eV, The mass of the electron is m = 9 × 10-31 kg, 
- The electronic charge is e = 1.6 × 10-19 C. 
- For an electron gun with a voltage between its cathode and anode of V = 100V the electron will have a speed of about v = 6 × 106 m/s. (Relativistic effects have not been taken into account.) There will be no more acceleration once the electrons have passed through the anode. https://spark.iop.org/speed-electrons#gref

1. Gather the materials needed for the experiment, including a power supply, an electron gun, and a metal plate.
2. Set up the power supply and electron gun according to the instructions.
3. Turn on the power supply and electron gun.
4. Allow the metal plate to heat up until the electrons begin to boil off.
5. Connect the power supply to an anode, and position the anode near the hot plate.
6. Observe the electrons as they travel from the hot plate to the anode.
7. Measure the kinetic energy of the electrons as they hit the anode.
8. Compare the measured kinetic energy to the amount of energy transferred electrically.
9. Repeat the experiment for different values of the potential difference.
10. Plot the results to show how the kinetic energy of the electrons varies with the potential difference. and 
11. Compare the results to the expected values.
12. Repeat the experiment as necessary.
```

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

// forth

: main 
   1.6e-19 fstore e 
   100 fstore V 
   9e-31 fstore m 
   6e6 fstore v 
   e f@ V f@ f* E f! 
   "The energy transferred to the electron is " . 
   E f@ . 
   " joules." . 
   cr 
   "The speed of the electron is " . 
   v f@ . 
   " m/s." . 
   cr ;
   ```
   

   
   



- now consider the Relativistic effects as the voltage thus speed increases.
```
speed of light %
0% 1.00 second
25% 1.03 seconds
50% 1.15 seconds
75% 1.51 seconds
99% 7.09 seconds
```

apply Relativistic effects as the voltage thus speed increases and write a new program to take this into account.

```
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

convert to forth 83 code


: main 
   1.6e-19 fstore e 
   100 fstore V 
   9e-31 fstore m 
   3e8 fstore c 
   e f@ V f@ f* E f! 
   c f@ m f@ f* f* E f@ f/ f- 1 f^ 0.5 f/ v f! 
   "The energy transferred to the electron is " . 
   E f@ . 
   " joules." . 
   cr 
   "The relativistic speed of the electron is " . 
   v f@ . 
   " m/s." . 
   cr ;
 ```

main: The first line creates a function called "main".
1.6e-19 fstore e: This line stores the value 1.6e-19 in a variable called "e".
100 fstore V: This line stores the value 100 in a variable called "V".
9e-31 fstore m: This line stores the value 9e-31 in a variable called "m".
3e8 fstore c: This line stores the value 3e8 in a variable called "c".
e f@ V f@ f*: This line calculates the value of "e" times "V" and stores it in a variable called "E".
c f@ m f@ f* f*: This line calculates the value of "c" times "m" squared and stores it in a variable called "E".
E f@ f/: This line calculates the square root of "E" and stores it in a variable called "v".
"The energy transferred to the electron is " .: This line prints the text "The energy transferred to the electron is ".
E f@ .: This line prints the value of "E". 
"  joules." .: This line prints the text "joules."
cr: This line prints a blank line.
"The relativistic speed of the electron is " .: This line prints the text "The relativistic speed of the electron is ".
v f@ .: This line prints the value of "v".
"  m/s." .: This line prints the text "m/s."
   




### find V for 50% speed of light.
```

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

```
### answer
The voltage needed for an electron to travel at 50% the speed of light is 63281.3 volts.

```

convert to forth 83 code


: main 
   1.6e-19 fstore e 
   9e-31 fstore m 
   3e8 fstore c 
   c f@ 0.5 f* v f! 
   v f@ v f@ f* m f@ f/ 2 f/ E f! 
   E f@ e f@ f/ V f! 
   "The voltage needed for an electron to travel at 50% the speed of light is " . 
   V f@ . 
   " volts." . 
   cr ;
   
```
   


## Iterate
- https://github.com/SteveJustin1963/tec-Taxichronos/wiki
