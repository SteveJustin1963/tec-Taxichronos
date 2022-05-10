\\ convert to forth 83 code


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

