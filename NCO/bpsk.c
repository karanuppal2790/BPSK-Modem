#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include "NCO_OUT.txt"

//----------------------------------------------------------//

extern int SRC[1024];
extern float NCO_SAMPLES_SINE[1024];
extern float nco_sample[1024];

//----------------------------------------------------------//
//----------------------------------------------------------//

int j=0;

float bpsk_out(int n)
{
bpsk_out = SRC(j)* nco_sample(j);

j=j+1;

if(j>1024)
j=0;    
					
return bpsk_out;
}
//----------------------------------------------------------//
//----------------------------------------------------------//
