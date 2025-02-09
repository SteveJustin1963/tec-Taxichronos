# tec-Taxichronos

![](https://github.com/SteveJustin1963/tec-Taxichronos/blob/main/pics/tardis-time-machine-570x298.jpg) 
![](https://github.com/SteveJustin1963/tec-Taxichronos/blob/main/pics/bttf1.png)

BTTF console

![f5615ce8de11dc2ecbf0d21ad1a51167](https://user-images.githubusercontent.com/58069246/202954768-bfa3a7d4-b7ed-40fa-9538-56cd3380a81f.jpg)




Time travel experiments (as if) using the Tec-1 with circuit and apparatus attached, eg ADC 

### Measurement
Time experiment needs time measurements. Large time jumps can be checked personally but nano and smaller need finesse.
Giga Hz storage scopes are >$10,000 so circuits worth a few dollars is our domain. Working in the 10^-3 to -6 is easy, -7 and beyond is a challenge.

### Detectors 
- PLL phase- to measure the delay, feed clock frequency in, use a fast 74AHC XOR gate to compute the (input of X) XOR (output of X). RC filters the output. The average voltage is proportional to the time delay modulo clock period.
- feed the DUT with a 1 MHz clock, send a 1.0001 MHz clock (put a trim in the Vcc line) to the clock input of a D flop which samples the DUT output, and you got a ghetto 10 Gsps sampler, 

### Counters
 blah blah
### Sample and hold
 blah blah
### Lasers
 blah blah
### Electron gun / beam - now we're cooking
For an electron gun with a voltage between its cathode and anode of V = 100V the electron will have a speed of about v = 6 × 10^6 m/s. (Relativistic effects have not been taken into account.) There will be no more acceleration once the electrons have passed through the anode. 
- https://spark.iop.org/speed-electrons#gref
- https://www.physicsforums.com/threads/faster-than-light.241389/

Electrons boiled off the surface of a hot metal plate. They leave the plate with very small speeds, and then the electric field accelerates them towards the anode.  Electron has a charge of e coulombs, and the potential difference between the filament and the anode is V volts. The energy transferred to each coulomb of charge is V joules.  Energy transferred to electrons is eV joules. The electrons gain kinetic energy. Unlike electrons in a wire, these electrons have nothing to hit, nothing to transfer energy to, as they travel towards the anode. So each electron gains kinetic energy equal to the amount of energy transferred electrically. The electron starts from rest (near enough) so 
- kinetic energy gained = ½mv^2 where m is its mass and v is its speed. 
- ½mv^2 = eV, The mass of the electron is m = 9 × 10-31 kg, 
- The electronic charge is e = 1.6 × 10-19 C. 

1. Choose a known distance that light can travel in a reasonable amount of time, such as 1 meter.
2. Set up a timer, and start it when light is emitted at one end of the distance.
3. Stop the timer when the light reaches the other end of the distance.
4. Record the time it took for the light to travel the distance.
5. Now, do the same thing with the electron beam. Set up the timer, start it when the electron beam is emitted, and stop it when the electron beam reaches the other end of the distance.
6. Record the time it took for the electron beam to travel the distance.
7. Compare the two times. If the electron beam is significantly slower than the speed of light, then it will have taken longer for the electron beam to travel the distance than the light.

Typical TV, CRT, CRO with a depth of 1 meter that equates to the electron beam moving at 96,000 m/s which is orders of magnitude slower than the speed of light which 0.032 % of the speed of light; 300,000,000 m/s. A typical color CRT only needs 27k to a max of 35k. “voltages used in diagnostic X-ray tubes range from roughly 20 kV to 150 kV and thus the highest energies of the X-ray photons range from roughly 20 keV to 150 keV.”

code

ENR.c

### Consider Relativistic effects 
Look at relativistic effects as the voltage increase thus speed increases.  

code

ER.c

The electron will experience "time travel" and move forward in time, so as % of speed of light we can say
- 0% 1.00 second
- 25% 1.03 seconds
- 50% 1.15 seconds
- 75% 1.51 seconds
- 99% 7.09 seconds

So if we want to travel 15 seconds into the future over 1 minute, the voltage needed to accelerate the electron to 50% the speed of light is only 63,281.3 volts or 63kV. Thats hot. 

code

- findV_percentSpeed.c
- ER_50percent.c 


### Look at kinetic energy 
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
 


 



