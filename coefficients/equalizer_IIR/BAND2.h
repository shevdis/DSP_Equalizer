/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 19:41:41
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 7
 * Denominator Length  : 7
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 7;
const real64_T NUM[7] = {
   3.72561641686e-05,-0.0001459956173869,0.0001802227522743,                 0,
  -0.0001802227522743,0.0001459956173869,-3.72561641686e-05
};
const int DL = 7;
const real64_T DEN[7] = {
                   1,   -5.961938384575,    14.81195476214,    -19.6283893731,
      14.63282456702,   -5.818608130199,   0.9641565588466
};
