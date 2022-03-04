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


## Measurement
time experiment needs time measurements. large time jumps can be checked personally but nano and smaller need finesse.
Ghx storage scopes are >$10,000 so circuits worth a few dollars is our domain. working in the 10^-3 to -6 is easy, -7 and beyond is a challenge.


## detectors 
- PLL phase- to measure the delay, feed clock frequency in, use a fast 74AHC XOR gate to compute the (input of X) XOR (output of X). RC filter the output. The average voltage is proportional to the time delay modulo clock period.

- feed the DUT with a 1 MHz clock, send a 1.0001 MHz clock (put a trim in the Vcc line) to the clock input of a D flop which samples the DUT output, and you got a ghetto 10Gsps sampler, 

## counters
## Sample and hold

## electron beams/gun
- typical large TV with a width of 1 meter that equates to the electron beam moving at 96,000 m/s which is orders of magnitude slower than the speed of light which is just under 300,000,000 m/s. https://www.physicsforums.com/threads/faster-than-light.241389/
- electron gun, electrons boiled off the surface of a hot metal plate. They leave the plate with very small speeds, and then the electric field accelerates them towards the anode.  electron has a charge of e coulombs, and the potential difference between the filament and the anode is V volts. The energy transferred to each coulomb of charge is V joules.  energy transferred to electrons is eV joules. The electrons gain kinetic energy. Unlike electrons in a wire, these electrons have nothing to hit, nothing to transfer energy to, as they travel towards the anode. So each electron gains kinetic energy equal to the amount of energy transferred electrically. The electron starts from rest (near enough) so the kinetic energy gained is given by 
- ½mv^2 where m is its mass and v is its speed. 
- ½mv^2 = eV, The mass of the electron is m = 9 × 10-31 kg, 
- The electronic charge is e = 1.6 × 10-19 C. 
- For an electron gun with a voltage between its cathode and anode of V = 100V the electron will have a speed of about v = 6 × 106 m/s. (Relativistic effects have not been taken into account.) There will be no more acceleration once the electrons have passed through the anode. https://spark.iop.org/speed-electrons#gref


- now consider the Relativistic effects as the voltage thus speed increases.
```
speed of light %
0% 1.00 second
25% 1.03 seconds
50% 1.15 seconds
75% 1.51 seconds
99% 7.09 seconds
```
find V for 50% speed of light.

## Iterate
- https://github.com/SteveJustin1963/tec-Taxichronos/wiki
