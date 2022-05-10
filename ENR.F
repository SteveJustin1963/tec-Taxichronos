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
 
   
