/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode224819 tnode224819;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tlib224837 tlib224837;
typedef struct intset221056 intset221056;
typedef struct ttrunk221052 ttrunk221052;
typedef struct ttrunkseq221054 ttrunkseq221054;
typedef struct TY224939 TY224939;
typedef struct tlistentry128022 tlistentry128022;
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode224819  {
ttype224855* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224849* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq224813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym224849  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq224851* Typeinstcache;
tscope224843* Typscope;
} S1;
struct {TY224950* Procinstcache;
tscope224843* Scope;
} S2;
struct {TY224950* Usedgenerics;
tstrtable224823 Tab;
} S3;
struct {tsym224849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224855* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym224849* Owner;
NU32 Flags;
tnode224819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224833 Loc;
tlib224837* Annex;
tnode224819* Constraint;
};
struct  intset221056  {
NI Counter;
NI Max;
ttrunk221052* Head;
ttrunkseq221054* Data;
};
struct  ttype224855  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224851* Sons;
tnode224819* N;
tsym224849* Owner;
tsym224849* Sym;
tsym224849* Destructor;
tsym224849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224833 Loc;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
};
struct  tinstantiation224839  {
tsym224849* Sym;
ttypeseq224851* Concretetypes;
TY224939* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib224837  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
typedef NI TY26020[8];
struct  ttrunk221052  {
ttrunk221052* Next;
NI Key;
TY26020 Bits;
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct ttrunkseq221054 {
  TGenericSeq Sup;
  ttrunk221052* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_474417)(ttype224855* a, ttype224855* b);
N_NIMCALL(void, initintset_221950)(intset221056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_474020)(ttype224855* a, ttype224855* b, intset221056* marker);
N_NIMCALL(NIM_BOOL, containsorincl_221916)(intset221056* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_268771)(ttype224855* x, ttype224855* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_474029)(tnode224819* n, ttype224855* b, intset221056* marker);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
static N_INLINE(tnode224819*, lastson_225264)(tnode224819* n);
N_NIMCALL(void, internalerror_197989)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(ttype224855*, lastson_225270)(ttype224855* n);
static N_INLINE(NI, sonslen_225258)(ttype224855* n);
N_NIMCALL(NU8, ispartof_474430)(tnode224819* a, tnode224819* b);
static N_INLINE(tnode224819*, HEX5BHEX5D_225698)(tnode224819* n, NI i);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_259958)(tnode224819* n);
N_NIMCALL(NIM_BOOL, samevalue_234350)(tnode224819* a, tnode224819* b);
STRING_LITERAL(TMP3044, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3045, "isPartOfAux()", 13);

static N_INLINE(NI, sonslen_225252)(tnode224819* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(tnode224819*, lastson_225264)(tnode224819* n) {
	tnode224819* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_225252(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(NU8, ispartofaux_474029)(tnode224819* n, ttype224855* b, intset221056* marker) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		{
			NI i_474048;
			NI HEX3Atmp_474289;
			NI LOC3;
			NI res_474292;
			i_474048 = 0;
			HEX3Atmp_474289 = 0;
			LOC3 = 0;
			LOC3 = sonslen_225252(n);
			HEX3Atmp_474289 = (NI64)(LOC3 - 1);
			res_474292 = 0;
			{
				while (1) {
					if (!(res_474292 <= HEX3Atmp_474289)) goto LA5;
					i_474048 = res_474292;
					result = ispartofaux_474029((*n).kindU.S6.Sons->data[i_474048], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_474292 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 137):
	{
		result = ispartofaux_474029((*n).kindU.S6.Sons->data[0], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_474236;
			NI HEX3Atmp_474295;
			NI LOC16;
			NI res_474298;
			i_474236 = 0;
			HEX3Atmp_474295 = 0;
			LOC16 = 0;
			LOC16 = sonslen_225252(n);
			HEX3Atmp_474295 = (NI64)(LOC16 - 1);
			res_474298 = 1;
			{
				while (1) {
					if (!(res_474298 <= HEX3Atmp_474295)) goto LA18;
					i_474236 = res_474298;
					switch ((*(*n).kindU.S6.Sons->data[i_474236]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode224819* LOC20;
						LOC20 = 0;
						LOC20 = lastson_225264((*n).kindU.S6.Sons->data[i_474236]);
						result = ispartofaux_474029(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_197989(((NimStringDesc*) &TMP3044));
					}
					break;
					}
					res_474298 += 1;
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_474020((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3045));
	}
	break;
	}
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, sonslen_225258)(ttype224855* n) {
	NI result;
	result = 0;
	{
		if (!(*n).Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(ttype224855*, lastson_225270)(ttype224855* n) {
	ttype224855* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_225258(n);
	result = (*n).Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(NU8, ispartofaux_474020)(ttype224855* a, ttype224855* b, intset221056* marker) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_221916(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_268771(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).Kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_474020((*a).Sons->data[0], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_474029((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype224855* LOC23;
		LOC23 = 0;
		LOC23 = lastson_225270(a);
		result = ispartofaux_474020(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_474386;
			NI HEX3Atmp_474397;
			NI LOC26;
			NI res_474400;
			i_474386 = 0;
			HEX3Atmp_474397 = 0;
			LOC26 = 0;
			LOC26 = sonslen_225258(a);
			HEX3Atmp_474397 = (NI64)(LOC26 - 1);
			res_474400 = 0;
			{
				while (1) {
					if (!(res_474400 <= HEX3Atmp_474397)) goto LA28;
					i_474386 = res_474400;
					result = ispartofaux_474020((*a).Sons->data[i_474386], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_474400 += 1;
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartof_474417)(ttype224855* a, ttype224855* b) {
	NU8 result;
	intset221056 marker;
	result = 0;
	memset((void*)&marker, 0, sizeof(marker));
	chckNil((void*)&marker);
	memset((void*)&marker, 0, sizeof(marker));
	initintset_221950(&marker);
	result = ispartofaux_474020(b, a, &marker);
	return result;
}

static N_INLINE(tnode224819*, HEX5BHEX5D_225698)(tnode224819* n, NI i) {
	tnode224819* result;
	result = 0;
	result = (*n).kindU.S6.Sons->data[i];
	return result;
}

static N_INLINE(NI, len_225367)(tnode224819* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_474430)(tnode224819* a, tnode224819* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).Kind == (*b).Kind)) goto LA3;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.Sym).Kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					NU8 LOC18;
					LOC18 = 0;
					LOC18 = ispartof_474417((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			tnode224819* LOC22;
			tnode224819* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_225698(a, 0);
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_225698(b, 0);
			result = ispartof_474430(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_225367(a);
				LOC26 = (2 <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_225367(b);
				LOC26 = (2 <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode224819* LOC37;
					tnode224819* LOC39;
					tnode224819* x;
					tnode224819* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_225698(a, 1);
					LOC35 = isdeepconstexpr_259958(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_225698(b, 1);
					LOC34 = isdeepconstexpr_259958(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						tnode224819* LOC44;
						tnode224819* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_225698(a, 1);
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_225698(a, 1);
						x = HEX5BHEX5D_225698(LOC47, 1);
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_225698(a, 1);
					}
					LA42: ;
					{
						tnode224819* LOC51;
						tnode224819* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_225698(b, 1);
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_225698(b, 1);
						y = HEX5BHEX5D_225698(LOC54, 1);
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_225698(b, 1);
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_234350(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_474417((*a).Typ, (*b).Typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			tnode224819* LOC73;
			tnode224819* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_225698(a, 0);
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_225698(b, 0);
			result = ispartof_474430(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					tnode224819* LOC81;
					tnode224819* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_225698(a, 1);
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_225698(b, 1);
					if (!!(((*(*LOC81).kindU.S4.Sym).Sup.Id == (*(*LOC82).kindU.S4.Sym).Sup.Id))) goto LA83;
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			tnode224819* LOC86;
			tnode224819* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_225698(a, 0);
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_225698(b, 0);
			result = ispartof_474430(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_474417((*a).Typ, (*b).Typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode224819* LOC98;
			tnode224819* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_225698(a, 1);
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_225698(b, 1);
			result = ispartof_474430(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode224819* LOC101;
			tnode224819* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_225698(a, 0);
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_225698(b, 0);
			result = ispartof_474430(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		switch ((*b).Kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode224819* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_225698(b, 0);
			result = ispartof_474430(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				tnode224819* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_474417((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_225698(b, 0);
				result = ispartof_474430(a, LOC113);
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode224819* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_225698(b, 1);
			result = ispartof_474430(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).Kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				tnode224819* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_225698(a, 0);
				result = ispartof_474430(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode224819* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_225698(a, 1);
				result = ispartof_474430(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					tnode224819* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_474417((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_225698(a, 0);
					result = ispartof_474430(LOC131, b);
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_aliasesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_aliasesDatInit)(void) {
}

