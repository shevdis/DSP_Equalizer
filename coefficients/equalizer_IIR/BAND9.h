/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 29-May-2023 19:57:42
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 33
 * Denominator Length  : 33
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int NL = 33;
const real64_T NUM[33] = {
   0.002897153186662,  0.01350208749583,  0.02001925902794, 0.008244135496997,
    0.01834800401057,  0.06550372123825,  0.04124181160958, -0.03421517969552,
    0.04288212508872,   0.1302771459249, -0.04204468706271,  -0.1100510891371,
     0.1442335974053,   0.1120490871991,  -0.1954248856882, -0.03815096739879,
     0.2300143481223, -0.03815096739878,  -0.1954248856882,   0.1120490871991,
     0.1442335974053,  -0.1100510891371, -0.04204468706271,   0.1302771459249,
    0.04288212508872, -0.03421517969552,  0.04124181160958,  0.06550372123825,
    0.01834800401057, 0.008244135496997,  0.02001925902794,  0.01350208749583,
   0.002897153186662
};
const int DL = 33;
const real64_T DEN[33] = {
                   1,    7.003264376333,    25.45736275434,    64.99739256428,
      132.8649277481,    231.3297180977,    352.8005960615,    479.3355585128,
      588.6062797756,    660.0577530708,    679.8241402019,    645.8435735369,
      568.4629099242,    464.8628025057,    353.4107765668,     250.012786789,
      164.8217159136,    101.1804990116,     57.6883536134,    30.54082713185,
      15.01460594692,    6.808929432677,     2.82683234122,    1.079965685404,
     0.3790652047147,   0.1172794039503,  0.03148507515339, 0.008245500536809,
   0.001983940581687,0.0002033733950466,-1.090692016225e-05,2.348104594449e-05,
  8.619758545183e-06
};