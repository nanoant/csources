/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trope178009 trope178009;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct tsym225849 tsym225849;
typedef struct tgen604016 tgen604016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tnode225819 tnode225819;
typedef struct ttype225855 ttype225855;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident201021 tident201021;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tloc225833 tloc225833;
typedef struct tlib225837 tlib225837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY225939 TY225939;
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
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen604016  {
  tpasscontext286005 Sup;
tsym225849* Module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tlineinfo196539  {
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
struct  tnode225819  {
ttype225855* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225849* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq225813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef trope178009* TY585096[2];
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225823  {
NI Counter;
tsymseq225821* Data;
};
struct  tloc225833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225855* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym225849  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq225851* Typeinstcache;
tscope225843* Typscope;
} S1;
struct {TY225950* Procinstcache;
tscope225843* Scope;
} S2;
struct {TY225950* Usedgenerics;
tstrtable225823 Tab;
} S3;
struct {tsym225849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225855* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym225849* Owner;
NU32 Flags;
tnode225819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225833 Loc;
tlib225837* Annex;
tnode225819* Constraint;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct  ttype225855  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225851* Sons;
tnode225819* N;
tsym225849* Owner;
tsym225849* Sym;
tsym225849* Destructor;
tsym225849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225833 Loc;
};
struct  tscope225843  {
NI Depthlevel;
tstrtable225823 Symbols;
tnodeseq225813* Usingsyms;
tscope225843* Parent;
};
struct  tinstantiation225839  {
tsym225849* Sym;
ttypeseq225851* Concretetypes;
TY225939* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode225819* Path;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct ttypeseq225851 {
  TGenericSeq Sup;
  ttype225855* data[SEQ_DECL_SIZE];
};
struct TY225950 {
  TGenericSeq Sup;
  tinstantiation225839* data[SEQ_DECL_SIZE];
};
struct tsymseq225821 {
  TGenericSeq Sup;
  tsym225849* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4798)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
static N_INLINE(NI, sonslen_226252)(tnode225819* n);
N_NIMCALL(NimStringDesc*, getmodulename_298018)(tnode225819* n);
N_NIMCALL(void, adddependencyaux_604028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_178115)(trope178009** c, NimStringDesc* frmt, trope178009** args, NI argsLen0);
N_NIMCALL(trope178009*, torope_178076)(NimStringDesc* s);
N_NIMCALL(tnode225819*, adddotdependency_604043)(tpasscontext286005* c, tnode225819* n);
N_NIMCALL(void, writerope_179423)(trope178009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope178009*, ropef_178107)(NimStringDesc* frmt, trope178009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4799, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4801, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4802, "", 0);
STRING_LITERAL(TMP4803, "dot", 3);
trope178009* gdotgraph_604023;
extern TNimType NTI286005; /* TPassContext */
TNimType NTI604016; /* TGen */
extern TNimType NTI225817; /* PSym */
TNimType NTI604018; /* PGen */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP4798)(void* p, NI op) {
	tgen604016* a;
	a = (tgen604016*)p;
	nimGCvisit((void*)(*a).Module, op);
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tpasscontext286005*, myopen_604168)(tsym225849* module) {
	tpasscontext286005* result;
	tgen604016* g;
	result = 0;
	g = 0;
	g = (tgen604016*) newObj((&NTI604018), sizeof(tgen604016));
	(*g).Sup.Sup.m_type = (&NTI604016);
	asgnRefNoCycle((void**) &(*g).Module, module);
	result = &g->Sup;
	return result;
}

static N_INLINE(NI, sonslen_226252)(tnode225819* n) {
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

N_NIMCALL(void, adddependencyaux_604028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY585096 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = torope_178076(importing);
	LOC1[1] = torope_178076(imported);
	appf_178115(&gdotgraph_604023, ((NimStringDesc*) &TMP4799), LOC1, 2);
}

N_NIMCALL(tnode225819*, adddotdependency_604043)(tpasscontext286005* c, tnode225819* n) {
	tnode225819* result;
	tgen604016* g;
	result = 0;
	result = n;
	g = ((tgen604016*) (c));
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		{
			NI i_604061;
			NI HEX3Atmp_604120;
			NI LOC3;
			NI res_604123;
			i_604061 = 0;
			HEX3Atmp_604120 = 0;
			LOC3 = 0;
			LOC3 = sonslen_226252(n);
			HEX3Atmp_604120 = (NI32)(LOC3 - 1);
			res_604123 = 0;
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_604123 <= HEX3Atmp_604120)) goto LA5;
					i_604061 = res_604123;
					imported = getmodulename_298018((*n).kindU.S6.Sons->data[i_604061]);
					adddependencyaux_604028((*(*(*g).Module).Name).S, imported);
					res_604123 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		imported = getmodulename_298018((*n).kindU.S6.Sons->data[0]);
		adddependencyaux_604028((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 125):
	case ((NU8) 126):
	{
		{
			NI i_604104;
			NI HEX3Atmp_604126;
			NI LOC9;
			NI res_604129;
			i_604104 = 0;
			HEX3Atmp_604126 = 0;
			LOC9 = 0;
			LOC9 = sonslen_226252(n);
			HEX3Atmp_604126 = (NI32)(LOC9 - 1);
			res_604129 = 0;
			{
				while (1) {
					tnode225819* LOC12;
					if (!(res_604129 <= HEX3Atmp_604126)) goto LA11;
					i_604104 = res_604129;
					LOC12 = 0;
					LOC12 = adddotdependency_604043(c, (*n).kindU.S6.Sons->data[i_604104]);
					res_604129 += 1;
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

N_NIMCALL(void, generatedot_604009)(NimStringDesc* project) {
	TY585096 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope178009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4802));
	LOC1[0] = torope_178076(LOC3);
	LOC1[1] = gdotgraph_604023;
	LOC4 = 0;
	LOC4 = ropef_178107(((NimStringDesc*) &TMP4801), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4803));
	writerope_179423(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_dependsDatInit)(void) {
static TNimNode TMP983[1];
NTI604016.size = sizeof(tgen604016);
NTI604016.kind = 17;
NTI604016.base = (&NTI286005);
TMP983[0].kind = 1;
TMP983[0].offset = offsetof(tgen604016, Module);
TMP983[0].typ = (&NTI225817);
TMP983[0].name = "module";
NTI604016.node = &TMP983[0];
NTI604018.size = sizeof(tgen604016*);
NTI604018.kind = 22;
NTI604018.base = (&NTI604016);
NTI604018.marker = TMP4798;
}

