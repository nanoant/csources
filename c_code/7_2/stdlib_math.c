/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <math.h>

N_NIMCALL(NF, log2_146255)(NF x) {
	NF result;
	NF LOC1;
	NF LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = log(x);
	LOC2 = 0;
	LOC2 = log(2.0000000000000000e+000);
	result = ((NF)(LOC1) / (NF)(LOC2));
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, ispoweroftwo_145518)(NI x) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = !((x == 0));
	if (!(LOC1)) goto LA2;
	LOC1 = ((NI)(x & (NI64)(x - 1)) == 0);
	LA2: ;
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nextpoweroftwo_145528)(NI x) {
	NI result;
	result = 0;
	result = (NI64)(x - 1);
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(32)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(4)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(2)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(1)));
	result += ((NI) ((NI64)(1 + ((NI) ((x <= 0))))));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void) {
}

