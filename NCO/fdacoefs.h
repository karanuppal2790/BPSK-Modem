/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 *
 * Generated by MATLAB(R) 7.4 and the Signal Processing Toolbox 6.7.
 *
 * Generated on: 26-Jun-2010 10:44:21
 *
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 33
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * D:\MATLAB2\R2007a\extern\include\tmwtypes.h 
 */

double x[100]={
-0.2689,
0.639,
-0.9909,
0.7771,
0.6605,
-0.711,
-0.4926,
2.1751,
0.6019,
-0.9562,
-1.72,
-1.0625,
-0.4591,
-2.2322,
0.4915,
0.7556,
0.065,
0.7026,
-0.5297,
-0.3589,
0.0753,
-0.2942,
2.0456,
-1.168,
0.1711,
2.3209,
0.1362,
-0.7748,
1.2913,
-0.6397,
-0.5094,
0.1265,
-0.4469,
0.5227,
0.8767,
0.4405,
0.5864,
-1.2523,
-0.0586,
-0.0069,
0.0581,
0.5802,
1.1136,
0.1133,
0.2181,
0.8867,
-1.0297,
-2.2811,
1.7421,
-1.0884,
-0.9262,
-0.6029,
0.2768,
0.9209,
0.6339,
-0.267,
0.1178,
0.4093,
0.306,
0.6115,
-0.0944,
-0.3134,
-0.94,
-0.1251,
-1.5542,
-0.5791,
0.8338,
0.8112,
-0.7915,
-0.8476,
-0.2596,
0.5607,
0.1282,
-0.2506,
0.0605,
-1.2267,
-0.0841,
-0.8856,
-0.6771,
-0.456,
-2.0033,
0.6546,
-0.4193,
0.4119,
-1.9735,
-0.6128,
2.0984,
1.5226,
0.8322,
-0.481,
1.0044,
-0.8109,
-1.3733,
-0.0848,
0.0133,
0.5138,
-1.4843,
0.99,
-1.267,
0.4755};

const int BL = 33;
const real64_T B[33] = {
  -0.001856448021286,-0.002390696227284,-0.0008774192576521, 0.004540272805646,
    0.01340511644229,  0.02208107935981,  0.02456232602022,  0.01560716611445,
  -0.005049010152967, -0.02995088854106,  -0.0450693835042, -0.03541853069441,
   0.007018162627108,   0.0771708227542,   0.1564253368246,   0.2190251797019,
     0.2427985250412,   0.2190251797019,   0.1564253368246,   0.0771708227542,
   0.007018162627108, -0.03541853069441,  -0.0450693835042, -0.02995088854106,
  -0.005049010152967,  0.01560716611445,  0.02456232602022,  0.02208107935981,
    0.01340511644229, 0.004540272805646,-0.0008774192576521,-0.002390696227284,
  -0.001856448021286
};
