# tec-Taxichronos
Time travel experiments using the tec-1
 
- Do nothing, the future is inevitable, you will travel into the future at a normal rate. Read the news to see what happend, maybe with predictions into the future. 
- Move faster and time dilates, a small increment into the future relative to your surroundings.   
- "Does time actually exist? Time is a prime conflict between relativity and quantum mechanics, measured and malleable in relativity while assumed as background (and not an observable) in quantum mechanics. To many physicists, while we experience time as psychologically real, time is not fundamentally real. (https://www.space.com/29859-the-illusion-of-time.html)
- Time travel via speed. What does Einstein say about time? In the Special Theory of Relativity, Einstein determined that time is relative—in other words, the rate at which time passes depends on your frame of reference. (https://www.amnh.org/exhibitions/einstein/time/a-matter-of-time)
- Time travel via gravity. Does time create gravity? Yes. Time causes gravity. Gravity is not a force, it is an effect of spacetime curvature, a pseudo-force. (https://www.quora.com/Does-time-cause-gravity)
- Time travel via suspended animation, sleep, coma, death. 
- Time travel via wormholes. Use a spinning tube that makes negative energy inside then pseudo shrink or lens focus that negative energy to a singularity to make a small worm hole. "Can a wormhole exist? Einstein's theory of general relativity mathematically predicts the existence of wormholes, but none have been discovered to date. A negative mass wormhole might be spotted by the way its gravity affects light that passes by." (https://www.space.com/20881-wormholes.html)
- Time travel using light. Can time be stopped? The simple answer is, "Yes, it is possible to stop time. All you need to do is travel at light speed." ... Special Relativity pertains specifically to light. The fundamental tenet is that light speed is constant in all inertial reference frames, hence the denotation of "c" in reference to light. (https://usm.maine.edu/planet/how-does-time-stop)
- According to quantum mechanics, is time a quanta, the answer appears to be “no”, and time appears to be in fact smooth and continuous (contrary to common belief, not everything in quantum theory is quantized). (http://www.exactlywhatistime.com/physics-of-time/quantum-time/)
- Is there a particle of time? Time comes from every particle within our bodies, including our DNA that is made of these same atoms and particles. Time is the frequency of longitudinal energy waves. ... The evidence for time's relation to wave frequency is based on Einstein's relativity." Is time a wave? Time is the frequency of longitudinal energy waves. It changes with motion. The evidence for time's relation to wave frequency is based on Einstein's relativity. If the wave's frequency changed today, we would not know the difference. (https://energywavetheory.com/explanations/time/)
- How could time not exist? The problem, in brief, is that time may not exist at the most fundamental level of physical reality. As Rovelli explains it, in quantum mechanics all particles of matter and energy can also be described as waves. And waves have an unusual property: An infinite number of them can exist in the same location. (https://www.discovermagazine.com/the-sciences/newsflash-time-may-not-exist)
- Does time exist without space? Time cannot exist without space and the existence of time does require energy.(https://www.researchgate.net/post/Does-the-time-exist)
- Can the future be changed? The future can always be changed. However, this does depend on an individual's awareness of the possible outcomes of a situation. If a person is able to work out the most likely outcome that depends on the current situation, then they will be able to influence the factors of that situation to change its outcome. (https://www.quora.com/Can-the-future-be-changed-1)
- There have been suggestions to look at the concept of time as an emergent phenomenon that is a side effect of quantum entanglement. In other words, time is an entanglement phenomenon, which places all equal clock readings (of correctly prepared clocks, or of any objects usable as clocks) into the same history. (https://en.wikipedia.org/wiki/Quantum_entanglement#:~:text=There%20have%20been%20suggestions%20to,clocks)%20into%20the%20same%20history.)
- Entangled Quantum Particles Can "Communicate" Through Time. "spooky action at a delay," (https://www.discovery.com/science/Entangled-Quantum-Particles-Communicate)
 
- https://en.wikipedia.org/wiki/Time_in_physics
- https://spaceplace.nasa.gov/time-travel/en/
- https://www.bbc.com/news/science-environment-44771942
- https://en.wikipedia.org/wiki/Causality_(physics)
- https://physics.stackexchange.com/questions/356936/causality-and-speed-of-light



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
