/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode224819 tnode224819;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tbitset282012 tbitset282012;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tcell44533 tcell44533;
typedef struct tcellseq44549 tcellseq44549;
typedef struct tgcheap46616 tgcheap46616;
typedef struct tcellset44545 tcellset44545;
typedef struct tpagedesc44541 tpagedesc44541;
typedef struct tmemregion26810 tmemregion26810;
typedef struct tsmallchunk26040 tsmallchunk26040;
typedef struct tllchunk26804 tllchunk26804;
typedef struct tbigchunk26042 tbigchunk26042;
typedef struct tintset26017 tintset26017;
typedef struct ttrunk26013 ttrunk26013;
typedef struct tavlnode26808 tavlnode26808;
typedef struct tgcstat46614 tgcstat46614;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlib224837 tlib224837;
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
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
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tcell44533  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44549  {
NI Len;
NI Cap;
tcell44533** D;
};
struct  tcellset44545  {
NI Counter;
NI Max;
tpagedesc44541* Head;
tpagedesc44541** Data;
};
typedef tsmallchunk26040* TY26822[512];
typedef ttrunk26013* ttrunkbuckets26015[256];
struct  tintset26017  {
ttrunkbuckets26015 Data;
};
struct  tmemregion26810  {
NI Minlargeobj;
NI Maxlargeobj;
TY26822 Freesmallchunks;
tllchunk26804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26042* Freechunkslist;
tintset26017 Chunkstarts;
tavlnode26808* Root;
tavlnode26808* Deleted;
tavlnode26808* Last;
tavlnode26808* Freeavlnodes;
};
struct  tgcstat46614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44549 Zct;
tcellseq44549 Decstack;
tcellset44545 Cycleroots;
tcellseq44549 Tempstack;
NI Recgclock;
tmemregion26810 Region;
tgcstat46614 Stat;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26020[16];
struct  tpagedesc44541  {
tpagedesc44541* Next;
NI Key;
TY26020 Bits;
};
struct  tbasechunk26038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26040  {
  tbasechunk26038 Sup;
tsmallchunk26040* Next;
tsmallchunk26040* Prev;
tfreecell26030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26804  {
NI Size;
NI Acc;
tllchunk26804* Next;
};
struct  tbigchunk26042  {
  tbasechunk26038 Sup;
tbigchunk26042* Next;
tbigchunk26042* Prev;
NI Align;
NF Data;
};
struct  ttrunk26013  {
ttrunk26013* Next;
NI Key;
TY26020 Bits;
};
typedef tavlnode26808* TY26814[2];
struct  tavlnode26808  {
TY26814 Link;
NI Key;
NI Upperbound;
NI Level;
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
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct tbitset282012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(NIM_BOOL, levalue_234487)(tnode224819* a, tnode224819* b);
N_NIMCALL(NIM_BOOL, samevalue_234350)(tnode224819* a, tnode224819* b);
N_NIMCALL(void, tobitset_283004)(tnode224819* s, tbitset282012** b);
N_NIMCALL(NI64, firstord_261004)(ttype224855* t);
N_NIMCALL(void, bitsetinit_282021)(tbitset282012** b, NI length);
N_NIMCALL(NI64, getsize_261199)(ttype224855* typ);
N_NIMCALL(NI64, getordvalue_261187)(tnode224819* n);
N_NIMCALL(void, bitsetincl_282061)(tbitset282012** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_282037)(tbitset282012** x, tbitset282012* y);
N_NIMCALL(tnode224819*, totreeset_283753)(tbitset282012* s, ttype224855* settype, tlineinfo195539 info);
N_NIMCALL(tnode224819*, newnodei_225141)(NU8 kind, tlineinfo195539 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
N_NIMCALL(NIM_BOOL, bitsetin_282077)(tbitset282012* x, NI64 e);
N_NIMCALL(void, addson_225290)(tnode224819* father, tnode224819* son);
N_NIMCALL(tnode224819*, newinttypenode_225106)(NU8 kind, NI64 intval, ttype224855* typ);
N_NIMCALL(NIM_BOOL, bitsetcontains_282091)(tbitset282012* x, tbitset282012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_282084)(tbitset282012* x, tbitset282012* y);
N_NIMCALL(void, bitsetintersect_282053)(tbitset282012** x, tbitset282012* y);
N_NIMCALL(void, bitsetunion_282029)(tbitset282012** x, tbitset282012* y);
N_NIMCALL(void, bitsetsymdiff_282045)(tbitset282012** x, tbitset282012* y);
STRING_LITERAL(TMP2808, "inSet", 5);
extern tgcheap46616 gch_46644;

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

N_NIMCALL(NIM_BOOL, inset_283019)(tnode224819* s, tnode224819* elem) {
	NIM_BOOL result;
	result = 0;
	{
		if (!!(((*s).Kind == ((NU8) 39)))) goto LA3;
		internalerror_197970((*s).Info, ((NimStringDesc*) &TMP2808));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_283121;
		NI HEX3Atmp_283216;
		NI LOC6;
		NI res_283219;
		i_283121 = 0;
		HEX3Atmp_283216 = 0;
		LOC6 = 0;
		LOC6 = sonslen_225252(s);
		HEX3Atmp_283216 = (NI32)(LOC6 - 1);
		res_283219 = 0;
		{
			while (1) {
				if (!(res_283219 <= HEX3Atmp_283216)) goto LA8;
				i_283121 = res_283219;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_283121]).Kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_234487((*(*s).kindU.S6.Sons->data[i_283121]).kindU.S6.Sons->data[0], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_234487(elem, (*(*s).kindU.S6.Sons->data[i_283121]).kindU.S6.Sons->data[1]);
						LA16: ;
						if (!LOC15) goto LA17;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					{
						NIM_BOOL LOC22;
						LOC22 = 0;
						LOC22 = samevalue_234350((*s).kindU.S6.Sons->data[i_283121], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_283219 += 1;
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_283004)(tnode224819* s, tbitset282012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_261004((*(*s).Typ).Sons->data[0]);
	LOC1 = 0;
	LOC1 = getsize_261199((*s).Typ);
	bitsetinit_282021(b, ((NI) (LOC1)));
	{
		NI i_283617;
		NI HEX3Atmp_283727;
		NI LOC3;
		NI res_283730;
		i_283617 = 0;
		HEX3Atmp_283727 = 0;
		LOC3 = 0;
		LOC3 = sonslen_225252(s);
		HEX3Atmp_283727 = (NI32)(LOC3 - 1);
		res_283730 = 0;
		{
			while (1) {
				if (!(res_283730 <= HEX3Atmp_283727)) goto LA5;
				i_283617 = res_283730;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_283617]).Kind == ((NU8) 44))) goto LA8;
					j = getordvalue_261187((*(*s).kindU.S6.Sons->data[i_283617]).kindU.S6.Sons->data[0]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_261187((*(*s).kindU.S6.Sons->data[i_283617]).kindU.S6.Sons->data[1]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_282061(b, (NI64)(j - first));
							j += 1;
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_261187((*s).kindU.S6.Sons->data[i_283617]);
					bitsetincl_282061(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_283730 += 1;
			} LA5: ;
		}
	}
}

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44533))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(tcell44533* c) {
	addzct_48217(&gch_46644.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44533* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44533* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_49804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode224819*, totreeset_283753)(tbitset282012* s, ttype224855* settype, tlineinfo195539 info) {
	tnode224819* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	ttype224855* elemtype;
	tnode224819* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).Sons->data[0];
	first = firstord_261004(elemtype);
	result = newnodei_225141(((NU8) 39), info);
	asgnRefNoCycle((void**) &(*result).Typ, settype);
	(*result).Info = info;
	e = 0;
	{
		while (1) {
			if (!(e < ((NI64) ((NI32)(s->Sup.len * 8))))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = bitsetin_282077(s, e);
				if (!LOC5) goto LA6;
				a = e;
				b = e;
				{
					while (1) {
						b += 1;
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = 0;
							LOC12 = (((NI64) ((NI32)(s->Sup.len * 8))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_282077(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= 1;
				{
					tnode224819* LOC21;
					if (!(a == b)) goto LA19;
					LOC21 = 0;
					LOC21 = newinttypenode_225106(((NU8) 6), (NI64)(a + first), elemtype);
					addson_225290(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					tnode224819* LOC23;
					tnode224819* LOC24;
					n = newnodei_225141(((NU8) 44), info);
					asgnRefNoCycle((void**) &(*n).Typ, elemtype);
					LOC23 = 0;
					LOC23 = newinttypenode_225106(((NU8) 6), (NI64)(a + first), elemtype);
					addson_225290(n, LOC23);
					LOC24 = 0;
					LOC24 = newinttypenode_225106(((NU8) 6), (NI64)(b + first), elemtype);
					addson_225290(n, LOC24);
					addson_225290(result, n);
				}
				LA17: ;
				e = b;
			}
			LA6: ;
			e += 1;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(tnode224819*, diffsets_283054)(tnode224819* a, tnode224819* b) {
	tnode224819* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, &x);
	tobitset_283004(b, &y);
	bitsetdiff_282037(&x, y);
	result = totreeset_283753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NI64, cardset_283089)(tnode224819* s) {
	NI64 result;
	result = 0;
	result = 0;
	{
		NI i_284022;
		NI HEX3Atmp_284115;
		NI LOC2;
		NI res_284118;
		i_284022 = 0;
		HEX3Atmp_284115 = 0;
		LOC2 = 0;
		LOC2 = sonslen_225252(s);
		HEX3Atmp_284115 = (NI32)(LOC2 - 1);
		res_284118 = 0;
		{
			while (1) {
				if (!(res_284118 <= HEX3Atmp_284115)) goto LA4;
				i_284022 = res_284118;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.Sons->data[i_284022]).Kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_261187((*(*s).kindU.S6.Sons->data[i_284022]).kindU.S6.Sons->data[1]);
					LOC10 = 0;
					LOC10 = getordvalue_261187((*(*s).kindU.S6.Sons->data[i_284022]).kindU.S6.Sons->data[0]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + 1);
				}
				goto LA5;
				LA7: ;
				{
					result += 1;
				}
				LA5: ;
				res_284118 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_283075)(tnode224819* a, tnode224819* b) {
	NIM_BOOL result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, &x);
	tobitset_283004(b, &y);
	result = bitsetcontains_282091(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_283082)(tnode224819* a, tnode224819* b) {
	NIM_BOOL result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, &x);
	tobitset_283004(b, &y);
	result = bitsetequals_282084(x, y);
	return result;
}

N_NIMCALL(tnode224819*, intersectsets_283061)(tnode224819* a, tnode224819* b) {
	tnode224819* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, &x);
	tobitset_283004(b, &y);
	bitsetintersect_282053(&x, y);
	result = totreeset_283753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode224819*, unionsets_283047)(tnode224819* a, tnode224819* b) {
	tnode224819* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, &x);
	tobitset_283004(b, &y);
	bitsetunion_282029(&x, y);
	result = totreeset_283753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode224819*, symdiffsets_283068)(tnode224819* a, tnode224819* b) {
	tnode224819* result;
	tbitset282012* x;
	tbitset282012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_283004(a, &x);
	tobitset_283004(b, &y);
	bitsetsymdiff_282045(&x, y);
	result = totreeset_283753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_283012)(tnode224819* a, tnode224819* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).Kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).Kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_234487((*a).kindU.S6.Sons->data[0], (*b).kindU.S6.Sons->data[1]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_234487((*b).kindU.S6.Sons->data[0], (*a).kindU.S6.Sons->data[1]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_234487((*a).kindU.S6.Sons->data[0], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_234487(b, (*a).kindU.S6.Sons->data[1]);
			LA13: ;
			result = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC19;
			if (!((*b).Kind == ((NU8) 44))) goto LA17;
			LOC19 = 0;
			LOC19 = levalue_234487((*b).kindU.S6.Sons->data[0], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_234487(a, (*b).kindU.S6.Sons->data[1]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_234350(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode224819*, complement_283965)(tnode224819* a) {
	tnode224819* result;
	tbitset282012* x;
	result = 0;
	x = 0;
	tobitset_283004(a, &x);
	{
		NI i_283983;
		NI HEX3Atmp_283986;
		NI res_283989;
		i_283983 = 0;
		HEX3Atmp_283986 = 0;
		HEX3Atmp_283986 = (x->Sup.len-1);
		res_283989 = 0;
		{
			while (1) {
				if (!(res_283989 <= HEX3Atmp_283986)) goto LA3;
				i_283983 = res_283989;
				x->data[i_283983] = (NI8)((NU8) ~(x->data[i_283983]));
				res_283989 += 1;
			} LA3: ;
		}
	}
	result = totreeset_283753(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_283034)(tnode224819* a, tnode224819* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_234487(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsDatInit)(void) {
}

