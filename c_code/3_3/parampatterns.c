/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode224819 tnode224819;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
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
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct TY84735 TY84735;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef NIM_BOOL TY321386[65];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct TY84735 {
NimStringDesc* Field0;
NI Field1;
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
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib224837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
typedef NI TY26420[8];
struct  tpagedesc44941  {
tpagedesc44941* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
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
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isatom_231963)(tnode224819* n);
N_NIMCALL(NU8, isassignable_321003)(tsym224849* owner, tnode224819* n);
N_NIMCALL(ttype224855*, skiptypes_229245)(ttype224855* t, NU64 kinds);
N_NIMCALL(NIM_BOOL, comparetypes_268771)(ttype224855* x, ttype224855* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU16, getmagic_259845)(tnode224819* op);
N_NIMCALL(NU8, checkforsideeffects_320747)(tnode224819* n);
static N_INLINE(NIM_BOOL, isroutine_231781)(tsym224849* s);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(tnode224819*, newnodei_225141)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, compileconstraints_320129)(tnode224819* p, NimStringDesc** result);
N_NIMCALL(void, patternerror_320051)(tnode224819* n);
N_NIMCALL(void, localerror_197938)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_249057)(tnode224819* n, NU8 renderflags);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, add_320061)(NimStringDesc** code, NU8 op);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, internalerror_197989)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_198109)(TY84735 x_198113);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_80907, TNimType* typ);
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP2973, "|", 1);
STRING_LITERAL(TMP2974, "&", 1);
STRING_LITERAL(TMP2975, "~", 1);
STRING_LITERAL(TMP2976, "atom", 4);
STRING_LITERAL(TMP2977, "lit", 3);
STRING_LITERAL(TMP2978, "sym", 3);
STRING_LITERAL(TMP2979, "ident", 5);
STRING_LITERAL(TMP2980, "call", 4);
STRING_LITERAL(TMP2981, "alias", 5);
STRING_LITERAL(TMP2982, "noalias", 7);
STRING_LITERAL(TMP2983, "lvalue", 6);
STRING_LITERAL(TMP2984, "local", 5);
STRING_LITERAL(TMP2985, "sideeffect", 10);
STRING_LITERAL(TMP2986, "nosideeffect", 12);
STRING_LITERAL(TMP2988, "parampatterns.nim", 17);
NIM_CONST TY84735 TMP2987 = {((NimStringDesc*) &TMP2988),
100}
;
NIM_CONST TY84735 TMP2989 = {((NimStringDesc*) &TMP2988),
107}
;
STRING_LITERAL(TMP2990, "parameter pattern too complex", 29);
extern tgcheap47016 gch_47044;
extern TNimType NTI224445; /* TSymKind */
extern TNimType NTI224029; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_231963)(tnode224819* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, isassignable_321003)(tsym224849* owner, tnode224819* n) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).Kind) {
	case ((NU8) 3):
	{
		{
			if (!((2336 &(1<<(((*(*n).kindU.S4.Sym).Kind)&31)))!=0)) goto LA4;
			{
				NIM_BOOL LOC8;
				NIM_BOOL LOC9;
				LOC8 = 0;
				LOC9 = 0;
				LOC9 = !((owner == NIM_NIL));
				if (!(LOC9)) goto LA10;
				LOC9 = ((*owner).Sup.Id == (*(*(*n).kindU.S4.Sym).Owner).Sup.Id);
				LA10: ;
				LOC8 = LOC9;
				if (!(LOC8)) goto LA11;
				LOC8 = !((((*(*n).kindU.S4.Sym).Flags &(1<<((((NU8) 3))&31)))!=0));
				LA11: ;
				if (!LOC8) goto LA12;
				result = ((NU8) 2);
			}
			goto LA6;
			LA12: ;
			{
				result = ((NU8) 1);
			}
			LA6: ;
		}
		LA4: ;
	}
	break;
	case ((NU8) 45):
	{
		{
			ttype224855* LOC18;
			LOC18 = 0;
			LOC18 = skiptypes_229245((*(*n).kindU.S6.Sons->data[0]).Typ, IL64(211106232576000));
			if (!((14680064 &(IL64(1)<<(((*LOC18).Kind)&IL64(63))))!=0)) goto LA19;
			result = ((NU8) 1);
		}
		goto LA16;
		LA19: ;
		{
			result = isassignable_321003(owner, (*n).kindU.S6.Sons->data[0]);
		}
		LA16: ;
		{
			NIM_BOOL LOC24;
			LOC24 = 0;
			LOC24 = !((result == ((NU8) 0)));
			if (!(LOC24)) goto LA25;
			LOC24 = (((*(*(*n).kindU.S6.Sons->data[1]).kindU.S4.Sym).Flags &(1<<((((NU8) 18))&31)))!=0);
			LA25: ;
			if (!LOC24) goto LA26;
			result = ((NU8) 3);
		}
		LA26: ;
	}
	break;
	case ((NU8) 42):
	{
		{
			ttype224855* LOC31;
			LOC31 = 0;
			LOC31 = skiptypes_229245((*(*n).kindU.S6.Sons->data[0]).Typ, IL64(211106232576000));
			if (!((14680064 &(IL64(1)<<(((*LOC31).Kind)&IL64(63))))!=0)) goto LA32;
			result = ((NU8) 1);
		}
		goto LA29;
		LA32: ;
		{
			result = isassignable_321003(owner, (*n).kindU.S6.Sons->data[0]);
		}
		LA29: ;
	}
	break;
	case ((NU8) 58):
	case ((NU8) 59):
	case ((NU8) 60):
	{
		{
			ttype224855* LOC38;
			LOC38 = 0;
			LOC38 = skiptypes_229245((*n).Typ, IL64(211106247256064));
			if (!((134610944 &(IL64(1)<<(((*LOC38).Kind)&IL64(63))))!=0)) goto LA39;
			result = isassignable_321003(owner, (*n).kindU.S6.Sons->data[1]);
		}
		goto LA36;
		LA39: ;
		{
			NIM_BOOL LOC42;
			LOC42 = 0;
			LOC42 = comparetypes_268771((*n).Typ, (*(*n).kindU.S6.Sons->data[1]).Typ, ((NU8) 1), 0);
			if (!LOC42) goto LA43;
			result = isassignable_321003(owner, (*n).kindU.S6.Sons->data[1]);
		}
		goto LA36;
		LA43: ;
		LA36: ;
	}
	break;
	case ((NU8) 65):
	case ((NU8) 47):
	{
		result = ((NU8) 1);
	}
	break;
	case ((NU8) 67):
	case ((NU8) 66):
	case ((NU8) 46):
	{
		result = isassignable_321003(owner, (*n).kindU.S6.Sons->data[0]);
	}
	break;
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		{
			NU16 LOC50;
			LOC50 = 0;
			LOC50 = getmagic_259845(n);
			if (!(LOC50 == ((NU16) 151))) goto LA51;
			result = isassignable_321003(owner, (*n).kindU.S6.Sons->data[1]);
		}
		LA51: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_231781)(tsym224849* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).Kind)&31)))!=0);
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

N_NIMCALL(NU8, checkforsideeffects_320747)(tnode224819* n) {
	NU8 result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		tnode224819* op;
		op = (*n).kindU.S6.Sons->data[0];
		{
			NIM_BOOL LOC4;
			tsym224849* s;
			LOC4 = 0;
			LOC4 = ((*op).Kind == ((NU8) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_231781((*op).kindU.S4.Sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s = (*op).kindU.S4.Sym;
			{
				if (!(((*s).Flags &(1<<((((NU8) 11))&31)))!=0)) goto LA10;
				result = ((NU8) 1);
				goto BeforeRet;
			}
			LA10: ;
			result = ((NU8) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op).Typ).Flags &(1<<((((NU8) 1))&31)))!=0)) goto LA13;
			result = ((NU8) 2);
		}
		goto LA2;
		LA13: ;
		{
			result = ((NU8) 1);
			goto BeforeRet;
		}
		LA2: ;
		{
			NI i_320851;
			NI HEX3Atmp_320959;
			NI LOC17;
			NI res_320962;
			i_320851 = 0;
			HEX3Atmp_320959 = 0;
			LOC17 = 0;
			LOC17 = len_225367(n);
			HEX3Atmp_320959 = (LOC17 - 1);
			res_320962 = 0;
			{
				while (1) {
					NU8 ret;
					if (!(res_320962 <= HEX3Atmp_320959)) goto LA19;
					i_320851 = res_320962;
					ret = checkforsideeffects_320747((*n).kindU.S6.Sons->data[i_320851]);
					{
						if (!(ret == ((NU8) 1))) goto LA22;
						result = ret;
						goto BeforeRet;
					}
					goto LA20;
					LA22: ;
					{
						NIM_BOOL LOC25;
						LOC25 = 0;
						LOC25 = (ret == ((NU8) 0));
						if (!(LOC25)) goto LA26;
						LOC25 = (result == ((NU8) 2));
						LA26: ;
						if (!LOC25) goto LA27;
						result = ((NU8) 0);
					}
					goto LA20;
					LA27: ;
					LA20: ;
					res_320962 += 1;
				} LA19: ;
			}
		}
	}
	break;
	case ((NU8) 0) ... ((NU8) 23):
	{
		result = ((NU8) 2);
	}
	break;
	default:
	{
		{
			NI i_320915;
			NI HEX3Atmp_320965;
			NI LOC32;
			NI res_320968;
			i_320915 = 0;
			HEX3Atmp_320965 = 0;
			LOC32 = 0;
			LOC32 = len_225367(n);
			HEX3Atmp_320965 = (LOC32 - 1);
			res_320968 = 0;
			{
				while (1) {
					NU8 ret;
					if (!(res_320968 <= HEX3Atmp_320965)) goto LA34;
					i_320915 = res_320968;
					ret = checkforsideeffects_320747((*n).kindU.S6.Sons->data[i_320915]);
					{
						if (!(ret == ((NU8) 1))) goto LA37;
						result = ret;
						goto BeforeRet;
					}
					goto LA35;
					LA37: ;
					{
						NIM_BOOL LOC40;
						LOC40 = 0;
						LOC40 = (ret == ((NU8) 0));
						if (!(LOC40)) goto LA41;
						LOC40 = (result == ((NU8) 2));
						LA41: ;
						if (!LOC40) goto LA42;
						result = ((NU8) 0);
					}
					goto LA35;
					LA42: ;
					LA35: ;
					res_320968 += 1;
				} LA34: ;
			}
		}
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_321381)(tnode224819* p, tnode224819* n) {
	NIM_BOOL result;
	TY321386 stack;
	NI sp;
	NimStringDesc* code;
	NI pc;
	result = 0;
	stack[(0)- 0] = NIM_TRUE;
	sp = 1;
	code = (*p).kindU.S3.Strval;
	pc = 1;
	{
		while (1) {
			switch (((NU8) (((NU8)(code->data[pc]))))) {
			case ((NU8) 1):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = stack[((NI64)(sp - 1))- 0];
				if (LOC5) goto LA6;
				LOC5 = stack[((NI64)(sp - 2))- 0];
				LA6: ;
				stack[((NI64)(sp - 2))- 0] = LOC5;
				sp -= 1;
			}
			break;
			case ((NU8) 3):
			{
				NIM_BOOL LOC8;
				LOC8 = 0;
				LOC8 = stack[((NI64)(sp - 1))- 0];
				if (!(LOC8)) goto LA9;
				LOC8 = stack[((NI64)(sp - 2))- 0];
				LA9: ;
				stack[((NI64)(sp - 2))- 0] = LOC8;
				sp -= 1;
			}
			break;
			case ((NU8) 4):
			{
				stack[((NI64)(sp - 1))- 0] = !(stack[((NI64)(sp - 1))- 0]);
			}
			break;
			case ((NU8) 5):
			{
				stack[(sp)- 0] = ((*n).Kind == ((NU8) 3));
				sp += 1;
			}
			break;
			case ((NU8) 6):
			{
				stack[(sp)- 0] = isatom_231963(n);
				sp += 1;
			}
			break;
			case ((NU8) 7):
			{
				stack[(sp)- 0] = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 23));
				sp += 1;
			}
			break;
			case ((NU8) 8):
			{
				stack[(sp)- 0] = ((*n).Kind == ((NU8) 2));
				sp += 1;
			}
			break;
			case ((NU8) 9):
			{
				stack[(sp)- 0] = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
				sp += 1;
			}
			break;
			case ((NU8) 10):
			{
				NU8 kind;
				NIM_BOOL LOC17;
				kind = ((NU8) (((NU8)(code->data[(NI64)(pc + 1)]))));
				LOC17 = 0;
				LOC17 = ((*n).Kind == ((NU8) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n).kindU.S4.Sym).Kind == kind);
				LA18: ;
				stack[(sp)- 0] = LOC17;
				sp += 1;
				pc += 1;
			}
			break;
			case ((NU8) 11):
			{
				NU8 kind;
				kind = ((NU8) (((NU8)(code->data[(NI64)(pc + 1)]))));
				stack[(sp)- 0] = ((*n).Kind == kind);
				sp += 1;
				pc += 1;
			}
			break;
			case ((NU8) 12):
			{
				NU8 LOC21;
				LOC21 = 0;
				LOC21 = isassignable_321003(NIM_NIL, n);
				stack[(sp)- 0] = ((6 &(1<<((LOC21)&7)))!=0);
				sp += 1;
			}
			break;
			case ((NU8) 13):
			{
				NU8 LOC23;
				LOC23 = 0;
				LOC23 = isassignable_321003(NIM_NIL, n);
				stack[(sp)- 0] = (LOC23 == ((NU8) 2));
				sp += 1;
			}
			break;
			case ((NU8) 14):
			{
				NU8 LOC25;
				LOC25 = 0;
				LOC25 = checkforsideeffects_320747(n);
				stack[(sp)- 0] = (LOC25 == ((NU8) 1));
				sp += 1;
			}
			break;
			case ((NU8) 15):
			{
				NU8 LOC27;
				LOC27 = 0;
				LOC27 = checkforsideeffects_320747(n);
				stack[(sp)- 0] = !((LOC27 == ((NU8) 1)));
				sp += 1;
			}
			break;
			}
			pc += 1;
		}
	} LA1: ;
	result = stack[((NI64)(sp - 1))- 0];
	return result;
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617(&gch_47044.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44933* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44933* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, patternerror_320051)(tnode224819* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_249057(n, 4);
	localerror_197938((*n).Info, ((NU16) 1), LOC1);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, add_320061)(NimStringDesc** code, NU8 op) {
	(*code) = addChar((*code), ((NIM_CHAR) (((NI) (op)))));
}

N_NIMCALL(void, compileconstraints_320129)(tnode224819* p, NimStringDesc** result) {
	switch ((*p).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		tident200021* op;
		{
			if (!!(((*(*p).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA4;
			patternerror_320051((*p).kindU.S6.Sons->data[0]);
			goto BeforeRet;
		}
		LA4: ;
		op = (*(*p).kindU.S6.Sons->data[0]).kindU.S5.Ident;
		{
			NI LOC8;
			LOC8 = 0;
			LOC8 = len_225367(p);
			if (!(LOC8 == 3)) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = eqStrings((*op).S, ((NimStringDesc*) &TMP2973));
				if (LOC13) goto LA14;
				LOC13 = ((*op).Sup.Id == 46);
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_320129((*p).kindU.S6.Sons->data[1], result);
				compileconstraints_320129((*p).kindU.S6.Sons->data[2], result);
				add_320061(result, ((NU8) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = eqStrings((*op).S, ((NimStringDesc*) &TMP2974));
				if (LOC18) goto LA19;
				LOC18 = ((*op).Sup.Id == 2);
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_320129((*p).kindU.S6.Sons->data[1], result);
				compileconstraints_320129((*p).kindU.S6.Sons->data[2], result);
				add_320061(result, ((NU8) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_320051(p);
			}
			LA11: ;
		}
		goto LA6;
		LA9: ;
		{
			NIM_BOOL LOC24;
			NI LOC25;
			NIM_BOOL LOC27;
			LOC24 = 0;
			LOC25 = 0;
			LOC25 = len_225367(p);
			LOC24 = (LOC25 == 2);
			if (!(LOC24)) goto LA26;
			LOC27 = 0;
			LOC27 = eqStrings((*op).S, ((NimStringDesc*) &TMP2975));
			if (LOC27) goto LA28;
			LOC27 = ((*op).Sup.Id == 42);
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_320129((*p).kindU.S6.Sons->data[1], result);
			add_320061(result, ((NU8) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_320051(p);
		}
		LA6: ;
	}
	break;
	case ((NU8) 53):
	case ((NU8) 37):
	{
		{
			NI LOC35;
			LOC35 = 0;
			LOC35 = len_225367(p);
			if (!(LOC35 == 1)) goto LA36;
			compileconstraints_320129((*p).kindU.S6.Sons->data[0], result);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_320051(p);
		}
		LA33: ;
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* spec;
		spec = nsuNormalize((*(*p).kindU.S5.Ident).S);
		switch (hashString(spec) & 15) {
		case 2: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2986))) goto LA50;
break;
		case 4: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2978))) goto LA42;
if (eqStrings(spec, ((NimStringDesc*) &TMP2983))) goto LA47;
if (eqStrings(spec, ((NimStringDesc*) &TMP2985))) goto LA49;
break;
		case 6: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2979))) goto LA43;
break;
		case 10: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2982))) goto LA46;
break;
		case 11: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2976))) goto LA40;
break;
		case 12: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2977))) goto LA41;
break;
		case 13: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2980))) goto LA44;
break;
		case 14: 
if (eqStrings(spec, ((NimStringDesc*) &TMP2981))) goto LA45;
if (eqStrings(spec, ((NimStringDesc*) &TMP2984))) goto LA48;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_320061(result, ((NU8) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_320061(result, ((NU8) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_320061(result, ((NU8) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_320061(result, ((NU8) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_320061(result, ((NU8) 9));
		}
		goto LA52;
		LA45: ;
		{
			(*result)->data[0] = 2;
		}
		goto LA52;
		LA46: ;
		{
			(*result)->data[0] = 3;
		}
		goto LA52;
		LA47: ;
		{
			add_320061(result, ((NU8) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_320061(result, ((NU8) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_320061(result, ((NU8) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_320061(result, ((NU8) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = 0;
				LOC69 = HEX24_198109(TMP2987);
				internalerror_197989(LOC69);
			}
			LA67: ;
			{
				NU8 i_320398;
				NU8 res_320494;
				i_320398 = 0;
				res_320494 = ((NU8) 0);
				{
					while (1) {
						if (!(res_320494 <= ((NU8) 25))) goto LA72;
						i_320398 = res_320494;
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = 0;
							LOC75 = copyStr(reprEnum(i_320398, (&NTI224445)), 2);
							LOC76 = 0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec);
							if (!(LOC76 == 0)) goto LA77;
							add_320061(result, ((NU8) 10));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_320398)))));
							goto BeforeRet;
						}
						LA77: ;
						res_320494 += 1;
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = 0;
				LOC83 = HEX24_198109(TMP2989);
				internalerror_197989(LOC83);
			}
			LA81: ;
			{
				NU8 i_320473;
				NU8 res_320501;
				i_320473 = 0;
				res_320501 = ((NU8) 0);
				{
					while (1) {
						if (!(res_320501 <= ((NU8) 156))) goto LA86;
						i_320473 = res_320501;
						{
							NI LOC89;
							LOC89 = 0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum(i_320473, (&NTI224029)), spec);
							if (!(LOC89 == 0)) goto LA90;
							add_320061(result, ((NU8) 11));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_320473)))));
							goto BeforeRet;
						}
						LA90: ;
						res_320501 += 1;
					} LA86: ;
				}
			}
			patternerror_320051(p);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_320051(p);
	}
	break;
	}
	BeforeRet: ;
}

N_NIMCALL(tnode224819*, semnodekindconstraints_320527)(tnode224819* p) {
	tnode224819* result;
	result = 0;
	result = newnodei_225141(((NU8) 20), (*p).Info);
	asgnRefNoCycle((void**) &(*result).kindU.S3.Strval, rawNewString(10));
	(*result).kindU.S3.Strval = addChar((*result).kindU.S3.Strval, 1);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_225367(p);
		if (!(2 <= LOC3)) goto LA4;
		{
			NI i_320658;
			NI HEX3Atmp_320719;
			NI LOC7;
			NI res_320722;
			i_320658 = 0;
			HEX3Atmp_320719 = 0;
			LOC7 = 0;
			LOC7 = len_225367(p);
			HEX3Atmp_320719 = (LOC7 - 1);
			res_320722 = 1;
			{
				while (1) {
					if (!(res_320722 <= HEX3Atmp_320719)) goto LA9;
					i_320658 = res_320722;
					compileconstraints_320129((*p).kindU.S6.Sons->data[i_320658], &(*result).kindU.S3.Strval);
					res_320722 += 1;
				} LA9: ;
			}
		}
		{
			if (!(63 < (*result).kindU.S3.Strval->Sup.len)) goto LA12;
			internalerror_197970((*p).Info, ((NimStringDesc*) &TMP2990));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_320051(p);
	}
	LA1: ;
	add_320061(&(*result).kindU.S3.Strval, ((NU8) 1));
	return result;
}

N_NIMCALL(NU8, whichalias_320080)(tsym224849* p) {
	NU8 result;
	result = 0;
	{
		if (!!(((*p).Constraint == NIM_NIL))) goto LA3;
		result = ((NU8) (((NU8)((*(*p).Constraint).kindU.S3.Strval->data[0]))));
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_parampatternsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_parampatternsDatInit)(void) {
}

