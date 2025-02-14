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
 


# summary of notes from above 
It looks like **tec-Taxichronos** is a project that explores **time measurement and relativistic effects** using the **TEC-1** computer, possibly with external sensors like an **ADC** (analog-to-digital converter) and fast timing circuits.

## **Summary of Key Ideas in tec-Taxichronos**
1. **Time Travel Experiments (Hypothetical)**
   - Inspired by *Back to the Future* (BTTF) and *Doctor Who’s TARDIS*.
   - Investigating timing delays using **affordable circuits** rather than expensive GHz oscilloscopes.
   - Working in **millisecond (10^-3 s) to microsecond (10^-6 s) ranges is easy**; nanosecond (10^-7 s) and beyond is a challenge.

2. **Measurement Techniques**
   - **PLL Phase Detector**: Uses a **fast XOR gate (74AHC)** to measure phase differences at high frequencies.
   - **D-flip-flop sampling method**: Uses a **1 MHz reference clock** and a slightly different frequency (1.0001 MHz) to achieve a **10 Gsps (giga samples per second) "ghetto" sampler**.

3. **Advanced Detectors**
   - **Counters, Sample and Hold, Lasers** (mentioned but not detailed).
   - **Electron Beam Experiments**:
     - Electron beams accelerated to high speeds using **high-voltage electron guns**.
     - Theoretical calculations of relativistic time dilation as speed increases.

4. **Electron Gun Experiment**
   - Accelerate electrons using a potential difference.
   - Compare **electron beam speed vs. speed of light** using relativistic equations.
   - Relativistic effects:
     - At **99% speed of light**, time dilation is **7.09 seconds per second**.
     - **63kV required** to accelerate electrons to **50% the speed of light**.

5. **Kinetic Energy Calculations**
   - **Energy gained by electrons**:
   -  ![image](https://github.com/user-attachments/assets/358ef883-39f2-408d-961c-25758bd98c69)
   -  
\( KE = \frac{1}{2} m v^2 = eV \)

   - Experiment setup:
     - Heat metal plate → **boil off electrons**.
     - Accelerate towards **anode**.
     - Measure **kinetic energy** and compare to theoretical values.

6. **Relevant Code**
   - **ENR.c** → Electron gun simulation.
   - **ER.c** → Relativistic calculations.
   - **findV_percentSpeed.c** → Calculates voltage needed for a given fraction of the speed of light.
   - **ER_50percent.c** → Specific case for 50% speed of light.

## **Conclusion**
**tec-Taxichronos** is a mix of **realistic time measurement techniques** (phase detectors, ADCs) and **theoretical relativistic experiments** using high-energy electrons. While the "time travel" aspect is **fictional**, the experiments are grounded in real physics, especially in measuring **high-speed electron beams and their relativistic effects**.


# structured **step-by-step lab experiment** 
based on the **tec-Taxichronos** concept, focusing on **electron acceleration, relativistic effects, and time measurement**.

---

# **Experiment: Measuring Relativistic Effects in High-Speed Electrons**
### **Objective:**
To measure the relativistic effects on time dilation as electrons are accelerated to high speeds using a controlled voltage, and compare experimental data with theoretical predictions.

---

## **Equipment & Materials:**
1. **High-voltage power supply** (adjustable up to **75kV** for relativistic speeds)
2. **Electron gun** (e.g., CRT or vacuum tube with a heated cathode and an anode)
3. **Oscilloscope** (capable of measuring time-of-flight in nanoseconds)
4. **Fast XOR Phase Detector** (74AHC series for measuring delays)
5. **D-flip-flop circuit** (for high-speed sampling)
6. **Two parallel plates** (for defining a known travel distance)
7. **Light pulse system** (LED or laser with a known trigger)
8. **Vacuum chamber** (optional but recommended)
9. **Faraday cage** (to shield external noise)
10. **TEC-1 or microcontroller** (to process timing data)

---

## **Step-by-Step Procedure**

### **Phase 1: Calibrating the Time Measurement System**
1. **Set up the test environment**:
   - Place two parallel plates **1 meter apart** inside the vacuum chamber.
   - Connect the electron gun with the adjustable high-voltage supply.
   - Attach a **light emitter (LED or laser) and detector** next to the electron source.

2. **Synchronizing the Time Measurement**:
   - Generate a **1 MHz reference clock** and a **1.0001 MHz clock** for a **D-flip-flop sampler**.
   - Use the **XOR phase detector** (74AHC) to measure time delay.
   - Record and verify the response time of the measurement system.

3. **Baseline Measurement with Light**:
   - Emit a **light pulse** at **t = 0**.
   - Detect the pulse at the **1-meter distance** and record the exact time-of-flight.
   - This will serve as our reference for **speed of light travel**.

---

### **Phase 2: Accelerating Electrons**
4. **Electron Acceleration & Time-of-Flight Measurement**:
   - Heat the **electron gun cathode** to emit electrons.
   - Apply different voltages to the **anode** (start at **10kV** and increase up to **75kV**).
   - Emit the **electron pulse** at **t = 0** (synchronized with a trigger).
   - Detect the electrons at the **1-meter distance** using a **collector plate**.
   - Record the time taken for the electrons to reach the collector.

---

### **Phase 3: Data Analysis & Relativistic Effects**
5. **Compare Electron Travel Time vs. Light Travel Time**:
   - Convert the applied voltage into **electron velocity** using:
   - 
    ![image](https://github.com/user-attachments/assets/b002f882-8039-499e-aa76-5ac94cfce79d)

     \[
     v = \sqrt{\frac{2eV}{m}}
     \]
     (where **e = 1.6 × 10⁻¹⁹ C**, **m = 9.11 × 10⁻³¹ kg**).
   - Use **time dilation formula**:
   - 
    ![image](https://github.com/user-attachments/assets/a3de2a2f-134d-4d6a-a92f-48e9f4545c4d)

      \[
     t' = \frac{t}{\sqrt{1 - \frac{v^2}{c^2}}}
     \]
     where **c = 3 × 10⁸ m/s**.

7. **Plot Experimental vs. Theoretical Results**:
   - **X-axis**: Electron speed as a percentage of **c**.
   - **Y-axis**: Measured vs. calculated **time dilation**.
   - Identify if any discrepancies arise due to **instrument limitations**.

---

## **Expected Observations**
| Voltage (kV) | Electron Speed (m/s) | % Speed of Light | Expected Time Dilation |
|-------------|----------------------|------------------|----------------------|
| 10kV       | 5.93 × 10⁶             | 1.98%           | 1.0002 sec          |
| 25kV       | 9.39 × 10⁶             | 3.13%           | 1.0005 sec          |
| 50kV       | 1.33 × 10⁷             | 4.44%           | 1.001 sec           |
| 75kV       | 1.63 × 10⁷             | 5.43%           | 1.002 sec           |

If we push towards **99% speed of light**, time dilation should be around **7 seconds per second**!

---

## **Extensions**
- Increase the acceleration voltage to explore higher relativistic effects.
- Introduce **magnetic deflection** to measure momentum changes.
- Use **photoelectric sensors** for more precise electron detection.

---

### **Conclusion**
This experiment provides a **practical way to observe relativistic effects** without needing a particle accelerator. By precisely measuring **electron time-of-flight**, we can verify Einstein’s predictions and push the limits of affordable experimental physics.

---

Would you like a circuit schematic for the **time delay measurement system**? 🚀

### **How to Measure Time Dilation in the Electron Experiment**
Time dilation is a relativistic effect that causes moving clocks to **tick slower** compared to stationary ones. In this experiment, we measure the difference between:
- **Classical time-of-flight (Newtonian)**
- **Relativistic time-of-flight (Einstein’s predictions)**

Since we cannot observe time dilation directly at small speeds, we compare **electron travel times** with theoretical calculations to see the deviation.

---

## **Step 1: Define the Expected Travel Time Without Relativity**
Using classical mechanics, the **expected travel time** for an electron traveling **1 meter** is:
![image](https://github.com/user-attachments/assets/f32b0aea-6810-43d6-bda0-bb25a67206f4)

\[
t_{\text{classical}} = \frac{d}{v}
\]

where:
- \( d = 1 \) meter (known travel distance)
- \( v = \sqrt{\frac{2 e V}{m}} \) is the velocity of the electron
- \( e = 1.6 \times 10^{-19} \) C (elementary charge)
- \( m = 9.11 \times 10^{-31} \) kg (electron mass)
- \( V \) is the accelerating voltage

For example, at **50kV**, the velocity is:
![image](https://github.com/user-attachments/assets/e6c1fd36-37f7-491f-afee-7935d623fad5)

\[
v = \sqrt{\frac{2 \times (1.6 \times 10^{-19}) \times (50 \times 10^3)}{9.11 \times 10^{-31}}}
\]

\[
v \approx 1.33 \times 10^7 \text{ m/s}
\]

Classical time-of-flight:
![image](https://github.com/user-attachments/assets/65f43aed-d20f-48bd-ac49-4af75d375479)

\[
t_{\text{classical}} = \frac{1}{1.33 \times 10^7} = 7.52 \times 10^{-8} \text{ sec} \text{ (or 75.2 ns)}
\]

---

## **Step 2: Apply the Relativistic Correction**
According to **Einstein’s time dilation formula**:
![image](https://github.com/user-attachments/assets/1a03884b-f3f1-4980-9f42-27254e049e3a)

\[
t' = \frac{t_{\text{classical}}}{\sqrt{1 - \frac{v^2}{c^2}}}
\]

where:
- \( t' \) is the **relativistic** time-of-flight.
- \( c = 3.0 \times 10^8 \) m/s (speed of light).
- \( v \) is the velocity from the classical calculation.

At **50kV**, we plug in the velocity:
![image](https://github.com/user-attachments/assets/eff95910-f00b-44f6-8c52-4e01a2c383d8)

\[
t' = \frac{7.52 \times 10^{-8}}{\sqrt{1 - \left(\frac{1.33 \times 10^7}{3 \times 10^8}\right)^2}}
\]

\[
t' = \frac{7.52 \times 10^{-8}}{\sqrt{1 - 0.00196}}
\]

\[
t' = \frac{7.52 \times 10^{-8}}{0.99902}
\]

\[
t' = 7.53 \times 10^{-8} \text{ sec} \text{ (or 75.3 ns)}
\]

The relativistic effect at **50kV** is **tiny**, but at **higher voltages** (closer to **99% speed of light**), the deviation becomes significant.

---

## **Step 3: Measure the Electron Travel Time Experimentally**
### **Setup:**
1. **Trigger Signal**:
   - A **high-frequency pulse** (e.g., 10 MHz clock) triggers both the **electron gun** and a **light pulse** at the same instant.
   - The **light pulse** reaches the detector **instantaneously** (~3 ns over 1 meter).
   - The **electron pulse** takes a **longer time** to arrive.

2. **Detection System**:
   - A **high-speed detector** (Faraday plate or photomultiplier tube) detects the **electron arrival**.
   - A **fast XOR phase detector** (74AHC series) measures phase shifts at the nanosecond scale.

3. **Oscilloscope Measurement**:
   - Compare **electron arrival time** to **light arrival time**.
   - Calculate **actual time-of-flight**.

---

## **Step 4: Compare Measured vs. Predicted Times**
| Voltage (kV) | Newtonian Time (ns) | Relativistic Time (ns) | Expected Dilation (%) |
|-------------|----------------------|----------------------|----------------------|
| 10kV       | 126 ns               | 126.01 ns           | 0.01%               |
| 50kV       | 75.2 ns               | 75.3 ns             | 0.1%                |
| 100kV      | 53.2 ns               | 53.4 ns             | 0.4%                |
| 500kV      | 23.1 ns               | 24.1 ns             | 4.3%                |
| 1MV        | 16.4 ns               | 18.3 ns             | 11.6%               |

- At **low voltages (~50kV)**, the difference is too small to measure.
- At **higher voltages (~500kV - 1MV)**, time dilation is measurable.

---

## **Step 5: Visualizing the Effect**
- Plot **voltage vs. time dilation percentage**.
- Use a TEC-1 or microcontroller to **log real-time flight data** and compare.

---

## **Conclusion**
- This experiment **directly observes time dilation** by measuring **electron time-of-flight**.
- At **higher voltages**, relativistic effects **increase non-linearly**.
- With precise detectors, **relativistic corrections become necessary** for accurate measurements.

---

Would you like **a circuit schematic** for the measurement setup? 🚀

///
# To measure **electron time-of-flight in nanoseconds**, 
we need an oscilloscope with **sufficient bandwidth and sampling rate** to resolve time differences in the range of **10 ns to 100 ps** (for high-energy electrons). 

---

## **Required Oscilloscope Specifications**
### **1. Bandwidth (BW)**
The **minimum bandwidth** required is based on the fastest signal we need to resolve. The rise time (\( t_r \)) of an oscilloscope is related to its bandwidth by:

![image](https://github.com/user-attachments/assets/8e20a4a2-bf5e-4719-aad4-dda4d8112073)

\[
t_r \approx \frac{0.35}{BW}
\]

For example:
- If we need to measure **10 ns time differences**, we need at least:

![image](https://github.com/user-attachments/assets/6e1ac70d-cbab-4226-b8ed-ac76ff5aa37f)

  \[
  BW = \frac{0.35}{10 \times 10^{-9}} = 35 \text{ MHz}
  \]

- For **1 ns time differences**, we need:

![image](https://github.com/user-attachments/assets/784b9c46-cbf6-4605-bc0d-9d913d887c16)

  \[
  BW = \frac{0.35}{1 \times 10^{-9}} = 350 \text{ MHz}
  \]

- For **100 ps time differences** (high-energy relativistic electrons), we need:

![image](https://github.com/user-attachments/assets/6eaedc34-9c46-4740-b8e2-f03f685a5bdf)

  \[
  BW = \frac{0.35}{0.1 \times 10^{-9}} = 3.5 \text{ GHz}
  \]

Thus, **for reasonable electron speeds**, a **500 MHz to 1 GHz oscilloscope** should be sufficient.

---

### **2. Sampling Rate**
The oscilloscope’s **sampling rate** should be at least **10× the bandwidth** to properly capture high-speed events:

![image](https://github.com/user-attachments/assets/fb556944-bacd-469d-a73f-1e9d9825c153)

\[
\text{Sampling Rate} = 10 \times BW
\]

- **500 MHz BW** → **5 GSa/s** (5 gigasamples per second)
- **1 GHz BW** → **10 GSa/s**
- **3 GHz BW** → **30 GSa/s**

For **nanosecond-scale time-of-flight measurements**, an oscilloscope with **at least 5 GSa/s** is recommended.

---

## **Recommended Oscilloscope**
| Application | Time-of-Flight Scale | Required Bandwidth | Recommended Sampling Rate |
|------------|--------------------|-------------------|----------------------|
| Low voltage (< 50kV) | 100 ns | 50 MHz | 500 MSa/s |
| Medium voltage (50-200kV) | 10 ns | 500 MHz | 5 GSa/s |
| High voltage (200kV - 1MV) | 1 ns | 1 GHz | 10 GSa/s |
| Extreme relativistic speeds | 100 ps | 3 GHz | 30 GSa/s |

### **Affordable Lab Options**
- **Rigol DS7054 (500 MHz, 5 GSa/s)**
- **Siglent SDS6204A (2 GHz, 10 GSa/s)**
- **Keysight InfiniiVision DSOX3104T (1 GHz, 5 GSa/s)**

For advanced cases, a **Tektronix or Keysight 3-5 GHz oscilloscope** is ideal.

---

### **Conclusion**
To measure **nanosecond-scale electron time-of-flight**, we need:
✅ **500 MHz - 1 GHz bandwidth**  
✅ **5-10 GSa/s sampling rate**  
✅ **High-speed triggers & delay measurement tools**  

Would you like a **detailed circuit for pulse detection**? 🚀
