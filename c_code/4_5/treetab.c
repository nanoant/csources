/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnodetable224879 tnodetable224879;
typedef struct tnode224819 tnode224819;
typedef struct tnodepairseq224877 tnodepairseq224877;
typedef struct tnodepair224875 tnodepair224875;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
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
typedef struct tcell44733 tcell44733;
typedef struct tcellseq44749 tcellseq44749;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44745 tcellset44745;
typedef struct tpagedesc44741 tpagedesc44741;
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
struct  tnodepair224875  {
NI H;
tnode224819* Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct  tnodetable224879  {
NI Counter;
tnodepairseq224877* Data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell44733  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44749  {
NI Len;
NI Cap;
tcell44733** D;
};
struct  tcellset44745  {
NI Counter;
NI Max;
tpagedesc44741* Head;
tpagedesc44741** Data;
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
tcellseq44749 Zct;
tcellseq44749 Decstack;
tcellset44745 Cycleroots;
tcellseq44749 Tempstack;
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
struct  tpagedesc44741  {
tpagedesc44741* Next;
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
struct tnodepairseq224877 {
  TGenericSeq Sup;
  tnodepair224875 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_286027)(tnode224819* n);
static N_INLINE(NI, HEX21HEX26_128025)(NI h, NI val);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(NI, nodetablerawget_286508)(tnodetable224879 t, NI k, tnode224819* key);
N_NIMCALL(NIM_BOOL, treesequivalent_286242)(tnode224819* a, tnode224819* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_266367)(ttype224855* a, ttype224855* b, NU8 flags);
static N_INLINE(NI, nexttry_234256)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_234249)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_286561)(tnodepairseq224877** data, NI k, tnode224819* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI224877; /* TNodePairSeq */
extern tgcheap46816 gch_46844;

static N_INLINE(NI, HEX21HEX26_128025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)(val));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	return result;
}

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

N_NIMCALL(NI, hashtree_286027)(tnode224819* n) {
	NI result;
	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).Kind));
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_128025(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_128025(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_128025(result, ((NI) ((*n).kindU.S1.Intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_128025(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		LOC23 = 0;
		LOC23 = hash_128839((*n).kindU.S3.Strval);
		result = HEX21HEX26_128025(result, LOC23);
	}
	break;
	default:
	{
		{
			NI i_286202;
			NI HEX3Atmp_286222;
			NI LOC26;
			NI res_286225;
			i_286202 = 0;
			HEX3Atmp_286222 = 0;
			LOC26 = 0;
			LOC26 = sonslen_225252(n);
			HEX3Atmp_286222 = (NI32)(LOC26 - 1);
			res_286225 = 0;
			{
				while (1) {
					NI LOC29;
					if (!(res_286225 <= HEX3Atmp_286222)) goto LA28;
					i_286202 = res_286225;
					LOC29 = 0;
					LOC29 = hashtree_286027((*n).kindU.S6.Sons->data[i_286202]);
					result = HEX21HEX26_128025(result, LOC29);
					res_286225 += 1;
				} LA28: ;
			}
		}
	}
	break;
	}
	BeforeRet: ;
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

N_NIMCALL(NIM_BOOL, treesequivalent_286242)(tnode224819* a, tnode224819* b) {
	NIM_BOOL result;
	result = 0;
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
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
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
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_225252(a);
				LOC22 = 0;
				LOC22 = sonslen_225252(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_286458;
					NI HEX3Atmp_286488;
					NI LOC26;
					NI res_286491;
					i_286458 = 0;
					HEX3Atmp_286488 = 0;
					LOC26 = 0;
					LOC26 = sonslen_225252(a);
					HEX3Atmp_286488 = (NI32)(LOC26 - 1);
					res_286491 = 0;
					{
						while (1) {
							if (!(res_286491 <= HEX3Atmp_286488)) goto LA28;
							i_286458 = res_286491;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_286242((*a).kindU.S6.Sons->data[i_286458], (*b).kindU.S6.Sons->data[i_286458]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_286491 += 1;
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result) goto LA36;
			result = sametypeornil_266367((*a).Typ, (*b).Typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_234256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_286508)(tnodetable224879 t, NI k, tnode224819* key) {
	NI result;
	NI h;
	result = 0;
	h = (NI)(k & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.Data->data[h].H == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_286242(t.Data->data[h].Key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_234256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44733* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44733* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, nodetablerawinsert_286561)(tnodepairseq224877** data, NI k, tnode224819* key, NI val) {
	NI h;
	h = (NI)(k & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_234256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].H = k;
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	(*data)->data[h].Val = val;
}

N_NIMCALL(NI, nodetabletestorset_287121)(tnodetable224879* t, tnode224819* key, NI val) {
	NI result;
	tnodepairseq224877* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_286027(key);
	index = nodetablerawget_286508((*t), k, key);
	{
		if (!(0 <= index)) goto LA3;
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tnodepairseq224877* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_234249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tnodepairseq224877*) newSeq((&NTI224877), (NI32)((*t).Data->Sup.len * 2));
			{
				NI i_287251;
				NI HEX3Atmp_287301;
				NI res_287304;
				i_287251 = 0;
				HEX3Atmp_287301 = 0;
				HEX3Atmp_287301 = ((*t).Data->Sup.len-1);
				res_287304 = 0;
				{
					while (1) {
						if (!(res_287304 <= HEX3Atmp_287301)) goto LA13;
						i_287251 = res_287304;
						{
							if (!!(((*t).Data->data[i_287251].Key == NIM_NIL))) goto LA16;
							nodetablerawinsert_286561(&n, (*t).Data->data[i_287251].H, (*t).Data->data[i_287251].Key, (*t).Data->data[i_287251].Val);
						}
						LA16: ;
						res_287304 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_286561(&(*t).Data, k, key, val);
		result = val;
		(*t).Counter += 1;
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_treetabInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_treetabDatInit)(void) {
}

