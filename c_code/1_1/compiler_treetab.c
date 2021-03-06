/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnodetable192873 Tnodetable192873;
typedef struct Tnode192813 Tnode192813;
typedef struct Tnodepairseq192871 Tnodepairseq192871;
typedef struct Tnodepair192869 Tnodepair192869;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype192849 Ttype192849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym192843 Tsym192843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib192831 Tlib192831;
typedef struct Tcell46146 Tcell46146;
typedef struct Tcellseq46162 Tcellseq46162;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46158 Tcellset46158;
typedef struct Tpagedesc46154 Tpagedesc46154;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct TY192933 TY192933;
struct  Tnodepair192869  {
NI h;
Tnode192813* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode192813  {
Ttype192849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym192843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq192807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym192843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq192845* typeinstcache;
Tscope192837* typscope;
} S1;
struct {TY192944* procinstcache;
Tsym192843* gcunsafetyreason;
} S2;
struct {TY192944* usedgenerics;
Tstrtable192817 tab;
} S3;
struct {Tsym192843* guard;
} S4;
} kindU;
NU16 magic;
Ttype192849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym192843* owner;
NU32 flags;
Tnode192813* ast;
NU32 options;
NI position;
NI offset;
Tloc192827 loc;
Tlib192831* annex;
Tnode192813* constraint;
};
struct  Tnodetable192873  {
NI counter;
Tnodepairseq192871* data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46146  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46162  {
NI len;
NI cap;
Tcell46146** d;
};
struct  Tcellset46158  {
NI counter;
NI max;
Tpagedesc46154* head;
Tpagedesc46154** data;
};
typedef Tsmallchunk27240* TY28022[512];
typedef Ttrunk27213* Ttrunkbuckets27215[256];
struct  Tintset27217  {
Ttrunkbuckets27215 data;
};
struct  Tmemregion28010  {
NI minlargeobj;
NI maxlargeobj;
TY28022 freesmallchunks;
Tllchunk28004* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27242* freechunkslist;
Tintset27217 chunkstarts;
Tavlnode28008* root;
Tavlnode28008* deleted;
Tavlnode28008* last;
Tavlnode28008* freeavlnodes;
};
struct  Tgcstat48014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48016  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46162 zct;
Tcellseq46162 decstack;
Tcellset46158 cycleroots;
Tcellseq46162 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct  Ttype192849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq192845* sons;
Tnode192813* n;
Tsym192843* owner;
Tsym192843* sym;
Tsym192843* destructor;
Tsym192843* deepcopy;
Tsym192843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc192827 loc;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib192831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
typedef NI TY27220[16];
struct  Tpagedesc46154  {
Tpagedesc46154* next;
NI key;
TY27220 bits;
};
struct  Tbasechunk27238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27240  {
  Tbasechunk27238 Sup;
Tsmallchunk27240* next;
Tsmallchunk27240* prev;
Tfreecell27230* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28004  {
NI size;
NI acc;
Tllchunk28004* next;
};
struct  Tbigchunk27242  {
  Tbasechunk27238 Sup;
Tbigchunk27242* next;
Tbigchunk27242* prev;
NI align;
NF data;
};
struct  Ttrunk27213  {
Ttrunk27213* next;
NI key;
TY27220 bits;
};
typedef Tavlnode28008* TY28014[2];
struct  Tavlnode28008  {
TY28014 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct Tnodepairseq192871 {
  TGenericSeq Sup;
  Tnodepair192869 data[SEQ_DECL_SIZE];
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_243027)(Tnode192813* n);
static N_INLINE(NI, HEX21HEX26_133025)(NI h, NI val);
N_NIMCALL(NI, hash_133839)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_195403)(Tnode192813* n);
N_NIMCALL(NI, nodetablerawget_243210)(Tnodetable192873 t, NI k, Tnode192813* key);
N_NIMCALL(NIM_BOOL, treesequivalent_243111)(Tnode192813* a, Tnode192813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_227110)(Ttype192849* a, Ttype192849* b, NU8 flags);
static N_INLINE(NI, nexttry_200256)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_200249)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_243258)(Tnodepairseq192871** data, NI k, Tnode192813* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI192871; /* TNodePairSeq */
extern Tgcheap48016 gch_48044;

static N_INLINE(NI, HEX21HEX26_133025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)(val));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 6))));
	return result;
}

N_NIMCALL(NI, hashtree_243027)(Tnode192813* n) {
	NI result;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).kind));
	switch ((*n).kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_133025(result, (*(*n).kindU.S5.ident).h);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_133025(result, (*(*(*n).kindU.S4.sym).name).h);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (IL64(-2147483648) <= (*n).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_133025(result, ((NI) ((*n).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_133025(result, float64ToInt32((*n).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			NI LOC27;
			if (!!((*n).kindU.S3.strval == 0)) goto LA25;
			LOC27 = 0;
			LOC27 = hash_133839((*n).kindU.S3.strval);
			result = HEX21HEX26_133025(result, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_243082;
			NI HEX3Atmp_243089;
			NI LOC30;
			NI res_243092;
			i_243082 = 0;
			HEX3Atmp_243089 = 0;
			LOC30 = 0;
			LOC30 = sonslen_195403(n);
			HEX3Atmp_243089 = (NI)(LOC30 - ((NI) 1));
			res_243092 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_243092 <= HEX3Atmp_243089)) goto LA32;
					i_243082 = res_243092;
					LOC33 = 0;
					LOC33 = hashtree_243027((*n).kindU.S6.sons->data[i_243082]);
					result = HEX21HEX26_133025(result, LOC33);
					res_243092 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, treesequivalent_243111)(Tnode192813* a, Tnode192813* b) {
	NIM_BOOL result;
{	result = 0;
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
		LOC6 = ((*a).kind == (*b).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.strval, (*b).kindU.S3.strval);
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_195403(a);
				LOC22 = 0;
				LOC22 = sonslen_195403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_243184;
					NI HEX3Atmp_243188;
					NI LOC26;
					NI res_243191;
					i_243184 = 0;
					HEX3Atmp_243188 = 0;
					LOC26 = 0;
					LOC26 = sonslen_195403(a);
					HEX3Atmp_243188 = (NI)(LOC26 - ((NI) 1));
					res_243191 = ((NI) 0);
					{
						while (1) {
							if (!(res_243191 <= HEX3Atmp_243188)) goto LA28;
							i_243184 = res_243191;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_243111((*a).kindU.S6.sons->data[i_243184], (*b).kindU.S6.sons->data[i_243184]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_243191 += ((NI) 1);
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
			result = sametypeornil_227110((*a).typ, (*b).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_200256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_243210)(Tnodetable192873 t, NI k, Tnode192813* key) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(k & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((t.data->data[h].key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.data->data[h].h == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_243111(t.data->data[h].key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_200256(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46146))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46146* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46146* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46146* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, nodetablerawinsert_243258)(Tnodepairseq192871** data, NI k, Tnode192813* key, NI val) {
	NI h;
	h = (NI)(k & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA2;
			h = nexttry_200256(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data)->data[h].h = k;
	asgnRefNoCycle((void**) (&(*data)->data[h].key), key);
	(*data)->data[h].val = val;
}

N_NIMCALL(NI, nodetabletestorset_243698)(Tnodetable192873* t, Tnode192813* key, NI val) {
	NI result;
	Tnodepairseq192871* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_243027(key);
	index = nodetablerawget_243210((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = (*t).data->data[index].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq192871* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_200249(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			n = (Tnodepairseq192871*) newSeq((&NTI192871), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_243839;
				NI HEX3Atmp_243876;
				NI res_243879;
				i_243839 = 0;
				HEX3Atmp_243876 = 0;
				HEX3Atmp_243876 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				res_243879 = ((NI) 0);
				{
					while (1) {
						if (!(res_243879 <= HEX3Atmp_243876)) goto LA13;
						i_243839 = res_243879;
						{
							if (!!(((*t).data->data[i_243839].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_243258((&n), (*t).data->data[i_243839].h, (*t).data->data[i_243839].key, (*t).data->data[i_243839].val);
						}
						LA16: ;
						res_243879 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_243258((&(*t).data), k, key, val);
		result = val;
		(*t).counter += ((NI) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit)(void) {
}

