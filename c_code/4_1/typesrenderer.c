/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode224819 tnode224819;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY119408 TY119408;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tlib224837 tlib224837;
typedef struct tcell44735 tcell44735;
typedef struct tcellseq44751 tcellseq44751;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44747 tcellset44747;
typedef struct tpagedesc44743 tpagedesc44743;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
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
struct  tcell44735  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44751  {
NI Len;
NI Cap;
tcell44735** D;
};
struct  tcellset44747  {
NI Counter;
NI Max;
tpagedesc44743* Head;
tpagedesc44743** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44751 Zct;
tcellseq44751 Decstack;
tcellset44747 Cycleroots;
tcellseq44751 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
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
typedef NI TY26220[16];
struct  tpagedesc44743  {
tpagedesc44743* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct TY119408 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_393013)(tnode224819* n);
static N_INLINE(tnode224819*, HEX5BHEX5D_225698)(tnode224819* n, NI i);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_249133)(tsym224849* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_80707, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, renderparamtypes_395467)(TY119408** found, tnode224819* n);
N_NIMCALL(NimStringDesc*, rendertype_393222)(tnode224819* n);
N_NIMCALL(NimStringDesc*, typetostring_261031)(ttype224855* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4631, "", 0);
STRING_LITERAL(TMP4632, "*", 1);
STRING_LITERAL(TMP4633, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4640, "ref.", 4);
STRING_LITERAL(TMP4641, "ptr.", 4);
STRING_LITERAL(TMP4642, "proc(", 5);
STRING_LITERAL(TMP4643, "tuple[", 6);
STRING_LITERAL(TMP4644, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI224029; /* TNodeKind */
extern TNimType NTI119408; /* seq[string] */
extern tgcheap46816 gch_46844;

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

static N_INLINE(tnode224819*, HEX5BHEX5D_225698)(tnode224819* n, NI i) {
	tnode224819* result;
	result = 0;
	result = (*n).kindU.S6.Sons->data[i];
	return result;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_393013)(tnode224819* n) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4631));
	switch ((*n).Kind) {
	case ((NU8) 31):
	{
		{
			NI i_393038;
			NI HEX3Atmp_393202;
			NI LOC3;
			NI res_393205;
			i_393038 = 0;
			HEX3Atmp_393202 = 0;
			LOC3 = 0;
			LOC3 = len_225367(n);
			HEX3Atmp_393202 = (LOC3 - 1);
			res_393205 = 0;
			{
				while (1) {
					NI LOC6;
					tnode224819* LOC7;
					if (!(res_393205 <= HEX3Atmp_393202)) goto LA5;
					i_393038 = res_393205;
					LOC6 = 0;
					LOC6 = len_225367(n);
					LOC7 = 0;
					LOC7 = HEX5BHEX5D_225698(n, (LOC6 - 1));
					result = renderplainsymbolname_393013(LOC7);
					{
						if (!(0 < result->Sup.len)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					res_393205 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 2):
	{
		{
			if (!!(eqStrings((*(*n).kindU.S5.Ident).S, ((NimStringDesc*) &TMP4632)))) goto LA15;
			result = copyString((*(*n).kindU.S5.Ident).S);
		}
		LA15: ;
	}
	break;
	case ((NU8) 3):
	{
		result = renderdefinitionname_249133((*n).kindU.S4.Sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		tnode224819* LOC19;
		LOC19 = 0;
		LOC19 = HEX5BHEX5D_225698(n, 0);
		result = renderplainsymbolname_393013(LOC19);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC21;
		tnode224819* LOC22;
		LOC21 = 0;
		LOC21 = len_225367(n);
		LOC22 = 0;
		LOC22 = HEX5BHEX5D_225698(n, (LOC21 - 1));
		result = renderplainsymbolname_393013(LOC22);
	}
	break;
	default:
	{
		NimStringDesc* LOC24;
		LOC24 = 0;
		LOC24 = rawNewString(reprEnum((*n).Kind, (&NTI224029))->Sup.len + 29);
appendString(LOC24, ((NimStringDesc*) &TMP4633));
appendString(LOC24, reprEnum((*n).Kind, (&NTI224029)));
		internalerror_197970((*n).Info, LOC24);
	}
	break;
	}
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, rendertype_393222)(tnode224819* n) {
	NimStringDesc* result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		result = typetostring_261031((*(*n).kindU.S4.Sym).Typ, ((NU8) 0));
	}
	break;
	case ((NU8) 141):
	{
		tnode224819* LOC4;
		LOC4 = 0;
		LOC4 = HEX5BHEX5D_225698(n, 0);
		result = rendertype_393222(LOC4);
	}
	break;
	case ((NU8) 139):
	{
		NimStringDesc* LOC6;
		tnode224819* LOC7;
		NimStringDesc* LOC8;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX5BHEX5D_225698(n, 0);
		LOC8 = 0;
		LOC8 = rendertype_393222(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &TMP4640));
appendString(LOC6, LOC8);
		result = LOC6;
	}
	break;
	case ((NU8) 140):
	{
		NimStringDesc* LOC10;
		tnode224819* LOC11;
		NimStringDesc* LOC12;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_225698(n, 0);
		LOC12 = 0;
		LOC12 = rendertype_393222(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &TMP4641));
appendString(LOC10, LOC12);
		result = LOC10;
	}
	break;
	case ((NU8) 145):
	{
		tnode224819* params;
		params = HEX5BHEX5D_225698(n, 0);
		result = copyString(((NimStringDesc*) &TMP4642));
		{
			NI i_394422;
			NI HEX3Atmp_395402;
			NI LOC15;
			NI res_395405;
			i_394422 = 0;
			HEX3Atmp_395402 = 0;
			LOC15 = 0;
			LOC15 = len_225367(params);
			HEX3Atmp_395402 = (LOC15 - 1);
			res_395405 = 1;
			{
				while (1) {
					NimStringDesc* LOC18;
					tnode224819* LOC19;
					NimStringDesc* LOC20;
					if (!(res_395405 <= HEX3Atmp_395402)) goto LA17;
					i_394422 = res_395405;
					LOC18 = 0;
					LOC19 = 0;
					LOC19 = HEX5BHEX5D_225698(params, i_394422);
					LOC20 = 0;
					LOC20 = rendertype_393222(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result = resizeString(result, LOC18->Sup.len + 0);
appendString(result, LOC18);
					res_395405 += 1;
				} LA17: ;
			}
		}
		result->data[(result->Sup.len - 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC22;
		NimStringDesc* typestr;
		tnode224819* LOC23;
		LOC22 = 0;
		LOC22 = len_225367(n);
		typepos = (NI32)(LOC22 - 2);
		LOC23 = 0;
		LOC23 = HEX5BHEX5D_225698(n, typepos);
		typestr = rendertype_393222(LOC23);
		result = copyString(typestr);
		{
			NI i_394624;
			NI HEX3Atmp_395408;
			NI res_395411;
			i_394624 = 0;
			HEX3Atmp_395408 = 0;
			HEX3Atmp_395408 = (typepos - 1);
			res_395411 = 1;
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_395411 <= HEX3Atmp_395408)) goto LA26;
					i_394624 = res_395411;
					LOC27 = 0;
					LOC27 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr);
					result = resizeString(result, LOC27->Sup.len + 0);
appendString(result, LOC27);
					res_395411 += 1;
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 133):
	{
		result = copyString(((NimStringDesc*) &TMP4643));
		{
			NI i_395022;
			NI HEX3Atmp_395414;
			NI LOC30;
			NI res_395417;
			i_395022 = 0;
			HEX3Atmp_395414 = 0;
			LOC30 = 0;
			LOC30 = len_225367(n);
			HEX3Atmp_395414 = (LOC30 - 1);
			res_395417 = 0;
			{
				while (1) {
					NimStringDesc* LOC33;
					tnode224819* LOC34;
					NimStringDesc* LOC35;
					if (!(res_395417 <= HEX3Atmp_395414)) goto LA32;
					i_395022 = res_395417;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = HEX5BHEX5D_225698(n, i_395022);
					LOC35 = 0;
					LOC35 = rendertype_393222(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result = resizeString(result, LOC33->Sup.len + 0);
appendString(result, LOC33);
					res_395417 += 1;
				} LA32: ;
			}
		}
		result->data[(result->Sup.len - 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC37;
		tnode224819* LOC38;
		NimStringDesc* LOC39;
		LOC37 = 0;
		LOC38 = 0;
		LOC38 = HEX5BHEX5D_225698(n, 0);
		LOC39 = 0;
		LOC39 = rendertype_393222(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result = LOC37;
		{
			NI i_395222;
			NI HEX3Atmp_395420;
			NI LOC41;
			NI res_395423;
			i_395222 = 0;
			HEX3Atmp_395420 = 0;
			LOC41 = 0;
			LOC41 = len_225367(n);
			HEX3Atmp_395420 = (LOC41 - 1);
			res_395423 = 1;
			{
				while (1) {
					NimStringDesc* LOC44;
					tnode224819* LOC45;
					NimStringDesc* LOC46;
					if (!(res_395423 <= HEX3Atmp_395420)) goto LA43;
					i_395222 = res_395423;
					LOC44 = 0;
					LOC45 = 0;
					LOC45 = HEX5BHEX5D_225698(n, i_395222);
					LOC46 = 0;
					LOC46 = rendertype_393222(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result = resizeString(result, LOC44->Sup.len + 0);
appendString(result, LOC44);
					res_395423 += 1;
				} LA43: ;
			}
		}
		result->data[(result->Sup.len - 1)] = 93;
	}
	break;
	default:
	{
		result = copyString(((NimStringDesc*) &TMP4631));
	}
	break;
	}
	return result;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_395467)(TY119408** found, tnode224819* n) {
	switch ((*n).Kind) {
	case ((NU8) 76):
	{
		{
			NI i_395494;
			NI HEX3Atmp_395827;
			NI LOC3;
			NI res_395830;
			i_395494 = 0;
			HEX3Atmp_395827 = 0;
			LOC3 = 0;
			LOC3 = len_225367(n);
			HEX3Atmp_395827 = (LOC3 - 1);
			res_395830 = 1;
			{
				while (1) {
					tnode224819* LOC6;
					if (!(res_395830 <= HEX3Atmp_395827)) goto LA5;
					i_395494 = res_395830;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_225698(n, i_395494);
					renderparamtypes_395467(found, LOC6);
					res_395830 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC8;
		NimStringDesc* typestr;
		tnode224819* LOC9;
		LOC8 = 0;
		LOC8 = len_225367(n);
		typepos = (NI32)(LOC8 - 2);
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_225698(n, typepos);
		typestr = rendertype_393222(LOC9);
		{
			NIM_BOOL LOC12;
			tnode224819* LOC14;
			ttype224855* typ;
			tnode224819* LOC17;
			LOC12 = 0;
			LOC12 = (typestr->Sup.len < 1);
			if (!(LOC12)) goto LA13;
			LOC14 = 0;
			LOC14 = HEX5BHEX5D_225698(n, (NI32)(typepos + 1));
			LOC12 = !(((*LOC14).Kind == ((NU8) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = 0;
			LOC17 = HEX5BHEX5D_225698(n, (NI32)(typepos + 1));
			typ = (*LOC17).Typ;
			{
				if (!!(typ == 0)) goto LA20;
				typestr = typetostring_261031(typ, ((NU8) 2));
			}
			LA20: ;
			{
				if (!(typestr->Sup.len < 1)) goto LA24;
				goto BeforeRet;
			}
			LA24: ;
		}
		LA15: ;
		{
			NI i_395646;
			NI HEX3Atmp_395833;
			NI res_395836;
			i_395646 = 0;
			HEX3Atmp_395833 = 0;
			HEX3Atmp_395833 = (typepos - 1);
			res_395836 = 0;
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_395836 <= HEX3Atmp_395833)) goto LA28;
					i_395646 = res_395836;
					(*found) = (TY119408*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
					LOC29 = 0;
					LOC29 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					res_395836 += 1;
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum((*n).Kind, (&NTI224029))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &TMP4644));
appendString(LOC31, reprEnum((*n).Kind, (&NTI224029)));
		internalerror_197970((*n).Info, LOC31);
	}
	break;
	}
	BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_395862)(tnode224819* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY119408* found;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4631));
	found = (TY119408*) newSeq((&NTI119408), 0);
	renderparamtypes_395467(&found, n);
	{
		if (!(0 < found->Sup.len)) goto LA3;
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_typesrendererInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_typesrendererDatInit)(void) {
}

