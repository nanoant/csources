/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode223819 tnode223819;
typedef struct ttype223855 ttype223855;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym223849 tsym223849;
typedef struct tident199021 tident199021;
typedef struct tnodeseq223813 tnodeseq223813;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq223851 ttypeseq223851;
typedef struct tscope223843 tscope223843;
typedef struct TY223950 TY223950;
typedef struct tinstantiation223839 tinstantiation223839;
typedef struct tstrtable223823 tstrtable223823;
typedef struct tsymseq223821 tsymseq223821;
typedef struct tloc223833 tloc223833;
typedef struct trope176009 trope176009;
typedef struct tlib223837 tlib223837;
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
typedef struct TY223939 TY223939;
typedef struct tlistentry126022 tlistentry126022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  tlineinfo194539  {
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
struct  tnode223819  {
ttype223855* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym223849* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq223813* Sons;
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
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable223823  {
NI Counter;
tsymseq223821* Data;
};
struct  tloc223833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype223855* T;
trope176009* R;
trope176009* Heaproot;
};
struct  tsym223849  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq223851* Typeinstcache;
tscope223843* Typscope;
} S1;
struct {TY223950* Procinstcache;
tscope223843* Scope;
} S2;
struct {TY223950* Usedgenerics;
tstrtable223823 Tab;
} S3;
struct {tsym223849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype223855* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym223849* Owner;
NU32 Flags;
tnode223819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc223833 Loc;
tlib223837* Annex;
tnode223819* Constraint;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
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
struct  ttype223855  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq223851* Sons;
tnode223819* N;
tsym223849* Owner;
tsym223849* Sym;
tsym223849* Destructor;
tsym223849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc223833 Loc;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tscope223843  {
NI Depthlevel;
tstrtable223823 Symbols;
tnodeseq223813* Usingsyms;
tscope223843* Parent;
};
struct  tinstantiation223839  {
tsym223849* Sym;
ttypeseq223851* Concretetypes;
TY223939* Usedby;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib223837  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode223819* Path;
};
typedef NI TY26220[8];
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
struct tnodeseq223813 {
  TGenericSeq Sup;
  tnode223819* data[SEQ_DECL_SIZE];
};
struct ttypeseq223851 {
  TGenericSeq Sup;
  ttype223855* data[SEQ_DECL_SIZE];
};
struct TY223950 {
  TGenericSeq Sup;
  tinstantiation223839* data[SEQ_DECL_SIZE];
};
struct tsymseq223821 {
  TGenericSeq Sup;
  tsym223849* data[SEQ_DECL_SIZE];
};
struct TY223939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_224252)(tnode223819* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_258184)(tnode223819* a, tnode223819* b);
N_NIMCALL(tnode223819*, newnodei_224141)(NU8 kind, tlineinfo194539 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_258088)(tnode223819* n, tnode223819* s);
N_NIMCALL(NIM_BOOL, hasson_258019)(tnode223819* father, tnode223819* son);
N_NIMCALL(void, addson_224290)(tnode223819* father, tnode223819* son);
N_NIMCALL(void, delson_224297)(tnode223819* father, NI idx);
N_NIMCALL(void, unneststmts_259340)(tnode223819* n, tnode223819* result);
static N_INLINE(NI, len_224367)(tnode223819* n);
N_NIMCALL(void, add_224501)(tnode223819* father, tnode223819* son);
N_NIMCALL(tnode223819*, newnodei_226007)(NU8 kind, tlineinfo194539 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_258958)(tnode223819* n);
N_NIMCALL(NU8, whichkeyword_203379)(tident199021* id);
extern tgcheap46816 gch_46844;

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

static N_INLINE(NI, sonslen_224252)(tnode223819* n) {
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

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_258184)(tnode223819* a, tnode223819* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.Sym).Name).Sup.Id == (*(*(*b).kindU.S4.Sym).Name).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_224252(a);
				LOC22 = 0;
				LOC22 = sonslen_224252(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_258400;
					NI HEX3Atmp_258430;
					NI LOC26;
					NI res_258433;
					i_258400 = 0;
					HEX3Atmp_258430 = 0;
					LOC26 = 0;
					LOC26 = sonslen_224252(a);
					HEX3Atmp_258430 = (NI64)(LOC26 - 1);
					res_258433 = 0;
					{
						while (1) {
							if (!(res_258433 <= HEX3Atmp_258430)) goto LA28;
							i_258400 = res_258433;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_258184((*a).kindU.S6.Sons->data[i_258400], (*b).kindU.S6.Sons->data[i_258400]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_258433 += 1;
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_258845)(tnode223819* op) {
	NU16 result;
	result = 0;
	switch ((*op).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.Sons->data[0]).Kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.Sons->data[0]).kindU.S4.Sym).Magic;
		}
		break;
		default:
		{
			result = ((NU16) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((NU16) 0);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, hasson_258019)(tnode223819* father, tnode223819* son) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_258036;
		NI HEX3Atmp_258068;
		NI LOC2;
		NI res_258071;
		i_258036 = 0;
		HEX3Atmp_258068 = 0;
		LOC2 = 0;
		LOC2 = sonslen_224252(father);
		HEX3Atmp_258068 = (NI64)(LOC2 - 1);
		res_258071 = 0;
		{
			while (1) {
				if (!(res_258071 <= HEX3Atmp_258068)) goto LA4;
				i_258036 = res_258071;
				{
					if (!((*father).kindU.S6.Sons->data[i_258036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_258071 += 1;
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_258088)(tnode223819* n, tnode223819* s) {
	NIM_BOOL result;
	NI m;
	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_258019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_224252(s);
	addson_224290(s, n);
	{
		if (!!(((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_258137;
			NI HEX3Atmp_258153;
			NI LOC15;
			NI res_258156;
			i_258137 = 0;
			HEX3Atmp_258153 = 0;
			LOC15 = 0;
			LOC15 = sonslen_224252(n);
			HEX3Atmp_258153 = (NI64)(LOC15 - 1);
			res_258156 = 0;
			{
				while (1) {
					if (!(res_258156 <= HEX3Atmp_258153)) goto LA17;
					i_258137 = res_258156;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_258088((*n).kindU.S6.Sons->data[i_258137], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_258156 += 1;
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_224297(s, m);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_258173)(tnode223819* n) {
	NIM_BOOL result;
	tnode223819* s;
	result = 0;
	s = newnodei_224141(((NU8) 1), (*n).Info);
	result = cyclictreeaux_258088(n, s);
	return result;
}

static N_INLINE(NI, len_224367)(tnode223819* n) {
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

N_NIMCALL(void, unneststmts_259340)(tnode223819* n, tnode223819* result) {
	{
		if (!((*n).Kind == ((NU8) 114))) goto LA3;
		{
			tnode223819* x_259353;
			x_259353 = 0;
			{
				NI i_259372;
				NI HEX3Atmp_259374;
				NI LOC7;
				NI res_259376;
				i_259372 = 0;
				HEX3Atmp_259374 = 0;
				LOC7 = 0;
				LOC7 = len_224367(n);
				HEX3Atmp_259374 = (LOC7 - 1);
				res_259376 = 0;
				{
					while (1) {
						if (!(res_259376 <= HEX3Atmp_259374)) goto LA9;
						i_259372 = res_259376;
						x_259353 = (*n).kindU.S6.Sons->data[i_259372];
						unneststmts_259340(x_259353, result);
						res_259376 += 1;
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).Kind == ((NU8) 124) || (*n).Kind == ((NU8) 23)))) goto LA11;
		add_224501(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(tnode223819*, flattenstmts_259395)(tnode223819* n) {
	tnode223819* result;
	result = 0;
	result = newnodei_224141(((NU8) 114), (*n).Info);
	unneststmts_259340(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_224367(result);
		if (!(LOC3 == 1)) goto LA4;
		result = (*result).kindU.S6.Sons->data[0];
	}
	LA4: ;
	return result;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44735* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44735* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode223819*, extractrange_259419)(NU8 k, tnode223819* n, NI a, NI b) {
	tnode223819* result;
	result = 0;
	result = newnodei_226007(k, (*n).Info, (NI64)((NI64)(b - a) + 1));
	{
		NI i_259436;
		NI HEX3Atmp_259466;
		NI res_259469;
		i_259436 = 0;
		HEX3Atmp_259466 = 0;
		HEX3Atmp_259466 = (NI64)(b - a);
		res_259469 = 0;
		{
			while (1) {
				if (!(res_259469 <= HEX3Atmp_259466)) goto LA3;
				i_259436 = res_259469;
				asgnRefNoCycle((void**) &(*result).kindU.S6.Sons->data[i_259436], (*n).kindU.S6.Sons->data[(NI64)(i_259436 + a)]);
				res_259469 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_258958)(tnode223819* n) {
	NIM_BOOL result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	case ((NU8) 20) ... ((NU8) 22):
	case ((NU8) 16) ... ((NU8) 18):
	case ((NU8) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 33):
	case ((NU8) 34):
	case ((NU8) 58):
	case ((NU8) 59):
	{
		result = isdeepconstexpr_258958((*n).kindU.S6.Sons->data[1]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 153):
	{
		{
			NI i_258997;
			NI HEX3Atmp_259013;
			NI LOC5;
			NI res_259016;
			i_258997 = 0;
			HEX3Atmp_259013 = 0;
			LOC5 = 0;
			LOC5 = len_224367(n);
			HEX3Atmp_259013 = (LOC5 - 1);
			res_259016 = 0;
			{
				while (1) {
					if (!(res_259016 <= HEX3Atmp_259013)) goto LA7;
					i_258997 = res_259016;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_258958((*n).kindU.S6.Sons->data[i_258997]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_259016 += 1;
				} LA7: ;
			}
		}
		result = NIM_TRUE;
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

N_NIMCALL(NIM_BOOL, isconstexpr_258921)(tnode223819* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 10) || (*n).Kind >= ((NU8) 20) && (*n).Kind <= ((NU8) 22) || (*n).Kind >= ((NU8) 16) && (*n).Kind <= ((NU8) 18) || (*n).Kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).Flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, whichpragma_259283)(tnode223819* n) {
	NU8 result;
	tnode223819* key;
	result = 0;
	{
		if (!((*n).Kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.Sons->data[0];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).Kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_203379((*key).kindU.S5.Ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_treesDatInit)(void) {
}

