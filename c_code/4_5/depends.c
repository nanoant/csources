/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trope177009 trope177009;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct tsym224849 tsym224849;
typedef struct tgen603016 tgen603016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tnode224819 tnode224819;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tloc224833 tloc224833;
typedef struct tlib224837 tlib224837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
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
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen603016  {
  tpasscontext285005 Sup;
tsym224849* Module;
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
typedef trope177009* TY584096[2];
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell26230  {
tfreecell26230* Next;
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4796)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(NimStringDesc*, getmodulename_297018)(tnode224819* n);
N_NIMCALL(void, adddependencyaux_603028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_177115)(trope177009** c, NimStringDesc* frmt, trope177009** args, NI argsLen0);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(tnode224819*, adddotdependency_603043)(tpasscontext285005* c, tnode224819* n);
N_NIMCALL(void, writerope_178423)(trope177009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope177009*, ropef_177107)(NimStringDesc* frmt, trope177009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4797, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4799, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4800, "", 0);
STRING_LITERAL(TMP4801, "dot", 3);
trope177009* gdotgraph_603023;
extern TNimType NTI285005; /* TPassContext */
TNimType NTI603016; /* TGen */
extern TNimType NTI224817; /* PSym */
TNimType NTI603018; /* PGen */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP4796)(void* p, NI op) {
	tgen603016* a;
	a = (tgen603016*)p;
	nimGCvisit((void*)(*a).Module, op);
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

N_NIMCALL(tpasscontext285005*, myopen_603168)(tsym224849* module) {
	tpasscontext285005* result;
	tgen603016* g;
	result = 0;
	g = 0;
	g = (tgen603016*) newObj((&NTI603018), sizeof(tgen603016));
	(*g).Sup.Sup.m_type = (&NTI603016);
	asgnRefNoCycle((void**) &(*g).Module, module);
	result = &g->Sup;
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

N_NIMCALL(void, adddependencyaux_603028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY584096 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = torope_177076(importing);
	LOC1[1] = torope_177076(imported);
	appf_177115(&gdotgraph_603023, ((NimStringDesc*) &TMP4797), LOC1, 2);
}

N_NIMCALL(tnode224819*, adddotdependency_603043)(tpasscontext285005* c, tnode224819* n) {
	tnode224819* result;
	tgen603016* g;
	result = 0;
	result = n;
	g = ((tgen603016*) (c));
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		{
			NI i_603061;
			NI HEX3Atmp_603120;
			NI LOC3;
			NI res_603123;
			i_603061 = 0;
			HEX3Atmp_603120 = 0;
			LOC3 = 0;
			LOC3 = sonslen_225252(n);
			HEX3Atmp_603120 = (NI32)(LOC3 - 1);
			res_603123 = 0;
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_603123 <= HEX3Atmp_603120)) goto LA5;
					i_603061 = res_603123;
					imported = getmodulename_297018((*n).kindU.S6.Sons->data[i_603061]);
					adddependencyaux_603028((*(*(*g).Module).Name).S, imported);
					res_603123 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		imported = getmodulename_297018((*n).kindU.S6.Sons->data[0]);
		adddependencyaux_603028((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 125):
	case ((NU8) 126):
	{
		{
			NI i_603104;
			NI HEX3Atmp_603126;
			NI LOC9;
			NI res_603129;
			i_603104 = 0;
			HEX3Atmp_603126 = 0;
			LOC9 = 0;
			LOC9 = sonslen_225252(n);
			HEX3Atmp_603126 = (NI32)(LOC9 - 1);
			res_603129 = 0;
			{
				while (1) {
					tnode224819* LOC12;
					if (!(res_603129 <= HEX3Atmp_603126)) goto LA11;
					i_603104 = res_603129;
					LOC12 = 0;
					LOC12 = adddotdependency_603043(c, (*n).kindU.S6.Sons->data[i_603104]);
					res_603129 += 1;
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(void, generatedot_603009)(NimStringDesc* project) {
	TY584096 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope177009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4800));
	LOC1[0] = torope_177076(LOC3);
	LOC1[1] = gdotgraph_603023;
	LOC4 = 0;
	LOC4 = ropef_177107(((NimStringDesc*) &TMP4799), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4801));
	writerope_178423(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_dependsDatInit)(void) {
static TNimNode TMP981[1];
NTI603016.size = sizeof(tgen603016);
NTI603016.kind = 17;
NTI603016.base = (&NTI285005);
TMP981[0].kind = 1;
TMP981[0].offset = offsetof(tgen603016, Module);
TMP981[0].typ = (&NTI224817);
TMP981[0].name = "module";
NTI603016.node = &TMP981[0];
NTI603018.size = sizeof(tgen603016*);
NTI603018.kind = 22;
NTI603018.base = (&NTI603016);
NTI603018.marker = TMP4796;
}

