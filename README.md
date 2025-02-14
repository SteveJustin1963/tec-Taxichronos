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
4. Record the time it took for the light to travel the distance. al this will be harder than this. will review this later. lets just assum the speed of light as it is.
5. Now, do the same thing with the electron beam. Set up the timer, start it when the electron beam is emitted, and stop it when the electron beam reaches the other end of the distance.
6. Record the time it took for the electron beam to travel the distance.
7. Compare the two times. If the electron beam is significantly slower than the speed of light, then it will have taken longer for the electron beam to travel the distance than the light. well dah!

Typical TV, CRT, CRO with a depth of 1 meter that equates to the electron beam moving at 96,000 m/s which is orders of magnitude slower than the speed of light which 0.032 % of the speed of light; 300,000,000 m/s (3x10^8). 
A typical color CRT only needs 27k to a max of 35k. “voltages used in diagnostic X-ray tubes range from roughly 20 kV to 150 kV and thus the highest energies of the X-ray photons range from roughly 20 keV to 150 keV.”

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


### Lab
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
 
# significant issues:

1. Scientific/Physics Issues:
- The text confuses time dilation with "time travel" - relativistic time dilation is not the same as traveling forward in time in the way described
- The calculations for time dilation effects are vastly oversimplified and incorrect - at 50% light speed, you wouldn't simply experience "1.15 seconds" for every second
- The voltage calculations for reaching relativistic speeds are far too low - 63kV would not accelerate electrons to 50% of light speed
- The basic electron speed calculations ignore relativistic effects while claiming to consider them

2. Practical/Engineering Issues:
- The proposed lab setup is extremely dangerous - working with high voltage electron beams requires extensive safety protocols, shielding, and expertise
- The measurement methods described (especially for timing) are impractical and wouldn't provide the precision needed
- The text suggests using household/consumer equipment (like CRTs) for physics experiments requiring extremely precise measurements
- The proposed voltage levels would cause electrical arcing in air - proper vacuum systems would be needed

3. Methodological Issues:
- The experimental design lacks proper controls
- There's no consideration of measurement error or uncertainty
- The methodology mixes concepts from different scales (household electronics vs. particle physics)
- The approach to data collection and analysis is oversimplified

4. Documentation Issues:
- References to code files (ENR.c, ER.c, etc.) without providing their contents
- Incomplete sections marked with "blah blah"
- Inconsistent formatting and organization
- Mixing of casual language ("now we're cooking") with technical content

5. Safety Issues:
- No mention of radiation safety protocols needed for high-energy electron beams
- No discussion of proper shielding requirements
- No warning about the lethal dangers of high voltage equipment
- Inadequate discussion of vacuum system requirements

The fundamental problem is that this appears to be an amateur attempt to explore relativistic physics effects using household-level equipment, which is simply not feasible or safe. Proper investigation of relativistic effects requires specialized particle accelerator facilities with appropriate safety measures and measurement equipment.

# Electron Beam Physics and Relativistic Effects: Theory and Safe Experimentation



## Introduction
This document outlines the theoretical foundation and experimental considerations for studying electron beam physics and relativistic effects. All experiments must be conducted in approved laboratory facilities with proper safety protocols and equipment. Note: This experiment must only be conducted in a properly equipped facility under the supervision of qualified personnel with appropriate safety training and certifications.

## Theoretical Background

### Basic Electron Physics
When electrons are accelerated by an electric potential difference V, they gain kinetic energy according to the work-energy theorem. However, at high velocities, relativistic effects become significant and must be considered.

### Non-Relativistic Calculations
For low velocities (v << c), the classical equation applies:
- Kinetic Energy (KE) = qV = ½mv²
- Where:
  - q = electron charge (1.602 × 10⁻¹⁹ C)
  - m = electron rest mass (9.109 × 10⁻³¹ kg)
  - v = velocity
  - V = accelerating potential

### Relativistic Effects
At higher velocities, relativistic calculations are necessary:
- Total Energy = E = γmc²
- Kinetic Energy = KE = mc²(γ - 1)
- Lorentz Factor γ = 1/√(1 - v²/c²)
- Where c = speed of light (2.998 × 10⁸ m/s)

### Time Dilation
Time dilation follows the equation:
- Δt' = Δt/√(1 - v²/c²)
- Where:
  - Δt' = time interval in moving frame
  - Δt = time interval in stationary frame

## Required Equipment and Safety Protocols

### Essential Equipment
1. Vacuum System
   - Ultra-high vacuum chamber (10⁻⁸ torr or better)
   - Ion pumps and turbomolecular pumps
   - Vacuum gauges and monitoring systems

2. Electron Source
   - Thermionic emission source or field emission source
   - Properly shielded cathode assembly
   - Water cooling system

3. Acceleration System
   - High-voltage power supply (properly isolated)
   - Acceleration tube with graduated potential rings
   - Electromagnetic focusing system

4. Detection and Measurement
   - Faraday cup or electron detector
   - High-speed oscilloscope (>1 GHz bandwidth)
   - Data acquisition system

5. Safety Equipment
   - Radiation shielding (lead and concrete)
   - Personal dosimeters
   - Emergency shutdown systems
   - Interlocked safety enclosures

### Safety Protocols

1. Radiation Safety
   - Regular radiation surveys
   - Controlled access to experimental area
   - Proper radiation warning signs
   - Regular dosimeter checks
   - Maintenance of radiation safety logs

2. High Voltage Safety
   - Proper grounding procedures
   - Discharge protocols
   - Safety interlocks on all access points
   - Regular insulation testing
   - Emergency power-off systems

3. Vacuum System Safety
   - Regular leak checking
   - Proper venting procedures
   - Backup power for critical pumps
   - Pressure monitoring systems

## Experimental Procedure

### Setup Phase
1. Verify all safety systems are operational
2. Establish proper vacuum conditions
3. Perform system diagnostics
4. Calibrate measurement equipment

### Operation Phase
1. Electron Source Operation
   - Gradually heat cathode to emission temperature
   - Monitor emission current
   - Establish stable beam conditions

2. Acceleration
   - Incrementally increase acceleration voltage
   - Monitor beam current and position
   - Record voltage and current relationships

3. Measurements
   - Record time-of-flight measurements
   - Monitor beam energy spread
   - Measure beam current and profile
   - Record vacuum conditions

### Data Analysis
1. Apply relativistic corrections to all measurements
2. Account for systematic errors
3. Calculate measurement uncertainties
4. Compare results with theoretical predictions

## Expected Results

### Electron Velocities
- At 50 kV: approximately 0.41c
- At 100 kV: approximately 0.55c
- At 500 kV: approximately 0.86c
- At 1 MV: approximately 0.94c

### Time Dilation Effects
Time dilation becomes measurable at high energies:
- At 0.5c: γ ≈ 1.15
- At 0.8c: γ ≈ 1.67
- At 0.9c: γ ≈ 2.29
- At 0.99c: γ ≈ 7.09

## Documentation Requirements
1. Maintain detailed laboratory notebooks
2. Record all experimental parameters
3. Document all safety checks
4. Log any equipment issues or anomalies
5. Archive raw data and analysis files

## References and Resources
1. Particle Accelerator Physics (Wiedemann)
2. Classical Electrodynamics (Jackson)
3. Special Relativity (French)
4. Laboratory Safety Guidelines (Your Institution)
5. Vacuum Technology Handbook (Author)

## Appendix: Common Issues and Troubleshooting
1. Beam instability
2. Vacuum system leaks
3. Power supply regulation
4. Detection system noise
5. Data acquisition problems

