/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tbitset281012 tbitset281012;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tbitset281012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP2802)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI110; /* int8 */
TNimType NTI281012; /* TBitSet */
N_NIMCALL(void, TMP2802)(void* p, NI op) {
	tbitset281012* a;
	NI LOC1;
	a = (tbitset281012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_281021)(tbitset281012** b, NI length) {
	unsureAsgnRef((void**) &(*b), (tbitset281012*) newSeq((&NTI281012), length));
}

N_NIMCALL(void, bitsetincl_281061)(tbitset281012** x, NI64 elem) {
	(*x)->data[(NI64)(elem / 8)] = (NI8)((*x)->data[(NI64)(elem / 8)] | ((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(elem % 8))))))));
}

N_NIMCALL(void, bitsetdiff_281037)(tbitset281012** x, tbitset281012* y) {
	{
		NI i_281305;
		NI HEX3Atmp_281307;
		NI res_281310;
		i_281305 = 0;
		HEX3Atmp_281307 = 0;
		HEX3Atmp_281307 = ((*x)->Sup.len-1);
		res_281310 = 0;
		{
			while (1) {
				if (!(res_281310 <= HEX3Atmp_281307)) goto LA3;
				i_281305 = res_281310;
				(*x)->data[i_281305] = (NI8)((*x)->data[i_281305] & (NI8)((NU8) ~(y->data[i_281305])));
				res_281310 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, bitsetin_281077)(tbitset281012* x, NI64 e) {
	NIM_BOOL result;
	result = 0;
	result = !(((NI8)(x->data[(NI64)(e / 8)] & ((NI8)(NU8)(NU)((NI)((NU64)(1) << (NU64)(((NI) ((NI64)(e % 8)))))))) == ((NI8) 0)));
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_281091)(tbitset281012* x, tbitset281012* y) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_281461;
		NI HEX3Atmp_281463;
		NI res_281466;
		i_281461 = 0;
		HEX3Atmp_281463 = 0;
		HEX3Atmp_281463 = (x->Sup.len-1);
		res_281466 = 0;
		{
			while (1) {
				if (!(res_281466 <= HEX3Atmp_281463)) goto LA3;
				i_281461 = res_281466;
				{
					if (!!(((NI8)(x->data[i_281461] & (NI8)((NU8) ~(y->data[i_281461]))) == ((NI8) 0)))) goto LA6;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_281466 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetequals_281084)(tbitset281012* x, tbitset281012* y) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_281422;
		NI HEX3Atmp_281424;
		NI res_281427;
		i_281422 = 0;
		HEX3Atmp_281424 = 0;
		HEX3Atmp_281424 = (x->Sup.len-1);
		res_281427 = 0;
		{
			while (1) {
				if (!(res_281427 <= HEX3Atmp_281424)) goto LA3;
				i_281422 = res_281427;
				{
					if (!!((x->data[i_281422] == y->data[i_281422]))) goto LA6;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_281427 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, bitsetintersect_281053)(tbitset281012** x, tbitset281012* y) {
	{
		NI i_281383;
		NI HEX3Atmp_281385;
		NI res_281388;
		i_281383 = 0;
		HEX3Atmp_281385 = 0;
		HEX3Atmp_281385 = ((*x)->Sup.len-1);
		res_281388 = 0;
		{
			while (1) {
				if (!(res_281388 <= HEX3Atmp_281385)) goto LA3;
				i_281383 = res_281388;
				(*x)->data[i_281383] = (NI8)((*x)->data[i_281383] & y->data[i_281383]);
				res_281388 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetunion_281029)(tbitset281012** x, tbitset281012* y) {
	{
		NI i_281266;
		NI HEX3Atmp_281268;
		NI res_281271;
		i_281266 = 0;
		HEX3Atmp_281268 = 0;
		HEX3Atmp_281268 = ((*x)->Sup.len-1);
		res_281271 = 0;
		{
			while (1) {
				if (!(res_281271 <= HEX3Atmp_281268)) goto LA3;
				i_281266 = res_281271;
				(*x)->data[i_281266] = (NI8)((*x)->data[i_281266] | y->data[i_281266]);
				res_281271 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetsymdiff_281045)(tbitset281012** x, tbitset281012* y) {
	{
		NI i_281344;
		NI HEX3Atmp_281346;
		NI res_281349;
		i_281344 = 0;
		HEX3Atmp_281346 = 0;
		HEX3Atmp_281346 = ((*x)->Sup.len-1);
		res_281349 = 0;
		{
			while (1) {
				if (!(res_281349 <= HEX3Atmp_281346)) goto LA3;
				i_281344 = res_281349;
				(*x)->data[i_281344] = (NI8)((*x)->data[i_281344] ^ y->data[i_281344]);
				res_281349 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_bitsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_bitsetsDatInit)(void) {
NTI281012.size = sizeof(tbitset281012*);
NTI281012.kind = 24;
NTI281012.base = (&NTI110);
NTI281012.flags = 2;
NTI281012.marker = TMP2802;
}

