/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tctx289048 tctx289048;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct TNimObject TNimObject;
typedef struct TY289247 TY289247;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY197414 TY197414;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tnode225819 tnode225819;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct ttype225855 ttype225855;
typedef struct pprocHEX3Aobjecttype289228 pprocHEX3Aobjecttype289228;
typedef struct tsym225849 tsym225849;
typedef struct TY289266 TY289266;
typedef struct TY289267 TY289267;
typedef struct NimStringDesc NimStringDesc;
typedef struct vmargs289042 vmargs289042;
typedef struct TY289229 TY289229;
typedef struct tblock289030 tblock289030;
typedef struct TY289210 TY289210;
typedef struct TY289235 TY289235;
typedef struct TY613411 TY613411;
typedef struct TY613414 TY613414;
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
typedef struct tident201021 tident201021;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct tidobj201015 tidobj201015;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  vmargs289042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs289042* args, void* ClEnv);
void* ClEnv;
} vmcallback289044;
struct TY289267 {
NimStringDesc* Field0;
vmcallback289044 Field1;
};
struct  tctx289048  {
  tpasscontext286005 Sup;
TY289247* Code;
TY197414* Debug;
tnode225819* Globals;
tnode225819* Constants;
ttypeseq225851* Types;
tnode225819* Currentexceptiona;
tnode225819* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype289228* Prc;
tsym225849* Module;
tnode225819* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo196539 Comesfromheuristic;
TY289266* Callbacks;
};
struct  tblock289030  {
tsym225849* Label;
TY289210* Fixups;
};
struct TY289235 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY289235 TY289232[256];
struct  pprocHEX3Aobjecttype289228  {
TY289229* Blocks;
tsym225849* Sym;
TY289232 Slots;
NI Maxslots;
};
struct TY613411 {
void* Field0;
TY613414* Field1;
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
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tloc225833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225855* T;
trope178009* R;
trope178009* Heaproot;
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
struct  tstrtable225823  {
NI Counter;
tsymseq225821* Data;
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
struct TY613414 {
char dummy;
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
struct TY289247 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY197414 {
  TGenericSeq Sup;
  tlineinfo196539 data[SEQ_DECL_SIZE];
};
struct ttypeseq225851 {
  TGenericSeq Sup;
  ttype225855* data[SEQ_DECL_SIZE];
};
struct TY289266 {
  TGenericSeq Sup;
  TY289267 data[SEQ_DECL_SIZE];
};
struct TY289210 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY289229 {
  TGenericSeq Sup;
  tblock289030 data[SEQ_DECL_SIZE];
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP1944)(void* p, NI op);
N_NIMCALL(void, TMP1947)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1948)(void* p, NI op);
N_NIMCALL(void, TMP1953)(void* p, NI op);
N_NIMCALL(void, TMP1962)(void* p, NI op);
N_NIMCALL(void, TMP1963)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode225819*, newnode_226093)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tlineinfo196539, unknownlineinfo_197405)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50404)(tcell44735* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c);
N_NOINLINE(void, incl_45471)(tcellset44747* s, tcell44735* cell);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44735* c);
extern TNimType NTI286005; /* TPassContext */
TNimType NTI289048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI289247; /* seq[TInstr] */
extern TNimType NTI197414; /* seq[TLineInfo] */
extern TNimType NTI225811; /* PNode */
extern TNimType NTI225851; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI289228; /* PProc:ObjectType */
TNimType NTI289030; /* TBlock */
extern TNimType NTI225817; /* PSym */
TNimType NTI289210; /* seq[TPosition] */
TNimType NTI289229; /* seq[TBlock] */
TNimType NTI289235; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI289038; /* TSlotKind */
TNimType NTI289232; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI289040; /* PProc */
TNimType NTI289032; /* TEvalMode */
TNimType NTI289034; /* TSandboxFlag */
TNimType NTI289036; /* TSandboxFlags */
extern TNimType NTI196539; /* TLineInfo */
TNimType NTI289267; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI289044; /* tuple[pointer, ref tuple[]] */
extern TNimType NTI153; /* pointer */
extern TNimType NTI613413; /* ref tuple[] */
TNimType NTI289266; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI289046; /* PCtx */
extern tgcheap46816 gch_46844;
TNimType NTI289028; /* TOpcode */
N_NIMCALL(void, TMP1944)(void* p, NI op) {
	TY289247* a;
	NI LOC1;
	a = (TY289247*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1947)(void* p, NI op) {
	TY289210* a;
	NI LOC1;
	a = (TY289210*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1948)(void* p, NI op) {
	TY289229* a;
	NI LOC1;
	a = (TY289229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP1953)(void* p, NI op) {
	pprocHEX3Aobjecttype289228* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype289228*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1962)(void* p, NI op) {
	TY289266* a;
	NI LOC1;
	a = (TY289266*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1963)(void* p, NI op) {
	tctx289048* a;
	a = (tctx289048*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
	nimGCvisit((void*)(*a).Callbacks, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
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

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471(&gch_46844.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, decref_50404)(tcell44735* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell44735* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_48446(p);
	decref_50404(LOC1);
}

N_NIMCALL(tctx289048*, newctx_289275)(tsym225849* module) {
	tctx289048* result;
	tctx289048* LOC1;
	pprocHEX3Aobjecttype289228* LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = (tctx289048*) newObj((&NTI289046), sizeof(tctx289048));
	(*LOC1).Sup.Sup.m_type = (&NTI289048);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY289247*) newSeqRC1((&NTI289247), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY197414*) newSeqRC1((&NTI197414), 0);
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_226093(((NU8) 125)));
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_226093(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq225851*) newSeqRC1((&NTI225851), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype289228*) newObj((&NTI289040), sizeof(pprocHEX3Aobjecttype289228));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY289229*) newSeqRC1((&NTI289229), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	(*LOC1).Comesfromheuristic = unknownlineinfo_197405();
	if ((*LOC1).Callbacks) nimGCunref((*LOC1).Callbacks);
	(*LOC1).Callbacks = (TY289266*) newSeqRC1((&NTI289266), 0);
	result = LOC1;
	return result;
}

N_NIMCALL(void, refresh_289387)(tctx289048* c, tsym225849* module) {
	pprocHEX3Aobjecttype289228* LOC1;
	asgnRefNoCycle((void**) &(*c).Module, module);
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype289228*) newObj((&NTI289040), sizeof(pprocHEX3Aobjecttype289228));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY289229*) newSeqRC1((&NTI289229), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
}

static N_INLINE(void, incref_50825)(tcell44735* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49229(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44735* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44735* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registercallback_289418)(tctx289048* c, NimStringDesc* name, vmcallback289044 callback) {
	TY289267 LOC1;
	NimStringDesc* LOC2;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).Callbacks = (TY289266*) incrSeq(&((*c).Callbacks)->Sup, sizeof(TY289267));
	LOC2 = 0;
	LOC2 = (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0; (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) &(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClEnv, LOC1.Field1.ClEnv);
	(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefDatInit)(void) {
static TNimNode* TMP1943[17];
static TNimNode* TMP1945[4];
static TNimNode* TMP1946[2];
static TNimNode* TMP1949[2];
static TNimNode* TMP1950[8];
NI TMP1952;
static char* NIM_CONST TMP1951[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP1954[5];
NI TMP1956;
static char* NIM_CONST TMP1955[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1957[3];
NI TMP1959;
static char* NIM_CONST TMP1958[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1960[2];
static TNimNode* TMP1961[2];
static TNimNode* TMP2826[154];
NI TMP2828;
static char* NIM_CONST TMP2827[154] = {
"opcEof", 
"opcRet", 
"opcYldYoid", 
"opcYldVal", 
"opcAsgnInt", 
"opcAsgnStr", 
"opcAsgnFloat", 
"opcAsgnRef", 
"opcAsgnComplex", 
"opcRegToNode", 
"opcNodeToReg", 
"opcLdArr", 
"opcWrArr", 
"opcLdObj", 
"opcWrObj", 
"opcAddrReg", 
"opcAddrNode", 
"opcLdDeref", 
"opcWrDeref", 
"opcWrStrIdx", 
"opcLdStrIdx", 
"opcAddInt", 
"opcAddImmInt", 
"opcSubInt", 
"opcSubImmInt", 
"opcLenSeq", 
"opcLenStr", 
"opcIncl", 
"opcInclRange", 
"opcExcl", 
"opcCard", 
"opcMulInt", 
"opcDivInt", 
"opcModInt", 
"opcAddFloat", 
"opcSubFloat", 
"opcMulFloat", 
"opcDivFloat", 
"opcShrInt", 
"opcShlInt", 
"opcBitandInt", 
"opcBitorInt", 
"opcBitxorInt", 
"opcAddu", 
"opcSubu", 
"opcMulu", 
"opcDivu", 
"opcModu", 
"opcEqInt", 
"opcLeInt", 
"opcLtInt", 
"opcEqFloat", 
"opcLeFloat", 
"opcLtFloat", 
"opcLeu", 
"opcLtu", 
"opcEqRef", 
"opcEqNimrodNode", 
"opcXor", 
"opcNot", 
"opcUnaryMinusInt", 
"opcUnaryMinusFloat", 
"opcBitnotInt", 
"opcEqStr", 
"opcLeStr", 
"opcLtStr", 
"opcEqSet", 
"opcLeSet", 
"opcLtSet", 
"opcMulSet", 
"opcPlusSet", 
"opcMinusSet", 
"opcSymdiffSet", 
"opcConcatStr", 
"opcContainsSet", 
"opcRepr", 
"opcSetLenStr", 
"opcSetLenSeq", 
"opcSwap", 
"opcIsNil", 
"opcOf", 
"opcIs", 
"opcSubStr", 
"opcParseFloat", 
"opcConv", 
"opcCast", 
"opcQuit", 
"opcReset", 
"opcNarrowS", 
"opcNarrowU", 
"opcAddStrCh", 
"opcAddStrStr", 
"opcAddSeqElem", 
"opcRangeChck", 
"opcNAdd", 
"opcNAddMultiple", 
"opcNKind", 
"opcNIntVal", 
"opcNFloatVal", 
"opcNSymbol", 
"opcNIdent", 
"opcNGetType", 
"opcNStrVal", 
"opcNSetIntVal", 
"opcNSetFloatVal", 
"opcNSetSymbol", 
"opcNSetIdent", 
"opcNSetType", 
"opcNSetStrVal", 
"opcNNewNimNode", 
"opcNCopyNimNode", 
"opcNCopyNimTree", 
"opcNDel", 
"opcGenSym", 
"opcSlurp", 
"opcGorge", 
"opcParseExprToAst", 
"opcParseStmtToAst", 
"opcNError", 
"opcNWarning", 
"opcNHint", 
"opcNLineInfo", 
"opcEqIdent", 
"opcStrToIdent", 
"opcIdentToStr", 
"opcEcho", 
"opcIndCall", 
"opcIndCallAsgn", 
"opcRaise", 
"opcNChild", 
"opcNSetChild", 
"opcCallSite", 
"opcNewStr", 
"opcTJmp", 
"opcFJmp", 
"opcJmp", 
"opcJmpBack", 
"opcBranch", 
"opcTry", 
"opcExcept", 
"opcFinally", 
"opcFinallyEnd", 
"opcNew", 
"opcNewSeq", 
"opcLdNull", 
"opcLdNullReg", 
"opcLdConst", 
"opcAsgnConst", 
"opcLdGlobal", 
"opcLdGlobalAddr", 
"opcLdImmInt", 
"opcNBindSym", 
"opcSetType", 
"opcTypeTrait"};
static TNimNode TMP848[210];
NTI289048.size = sizeof(tctx289048);
NTI289048.kind = 17;
NTI289048.base = (&NTI286005);
TMP1943[0] = &TMP848[1];
NTI289247.size = sizeof(TY289247*);
NTI289247.kind = 24;
NTI289247.base = (&NTI124);
NTI289247.flags = 2;
NTI289247.marker = TMP1944;
TMP848[1].kind = 1;
TMP848[1].offset = offsetof(tctx289048, Code);
TMP848[1].typ = (&NTI289247);
TMP848[1].name = "code";
TMP1943[1] = &TMP848[2];
TMP848[2].kind = 1;
TMP848[2].offset = offsetof(tctx289048, Debug);
TMP848[2].typ = (&NTI197414);
TMP848[2].name = "debug";
TMP1943[2] = &TMP848[3];
TMP848[3].kind = 1;
TMP848[3].offset = offsetof(tctx289048, Globals);
TMP848[3].typ = (&NTI225811);
TMP848[3].name = "globals";
TMP1943[3] = &TMP848[4];
TMP848[4].kind = 1;
TMP848[4].offset = offsetof(tctx289048, Constants);
TMP848[4].typ = (&NTI225811);
TMP848[4].name = "constants";
TMP1943[4] = &TMP848[5];
TMP848[5].kind = 1;
TMP848[5].offset = offsetof(tctx289048, Types);
TMP848[5].typ = (&NTI225851);
TMP848[5].name = "types";
TMP1943[5] = &TMP848[6];
TMP848[6].kind = 1;
TMP848[6].offset = offsetof(tctx289048, Currentexceptiona);
TMP848[6].typ = (&NTI225811);
TMP848[6].name = "currentExceptionA";
TMP1943[6] = &TMP848[7];
TMP848[7].kind = 1;
TMP848[7].offset = offsetof(tctx289048, Currentexceptionb);
TMP848[7].typ = (&NTI225811);
TMP848[7].name = "currentExceptionB";
TMP1943[7] = &TMP848[8];
TMP848[8].kind = 1;
TMP848[8].offset = offsetof(tctx289048, Exceptioninstr);
TMP848[8].typ = (&NTI108);
TMP848[8].name = "exceptionInstr";
TMP1943[8] = &TMP848[9];
NTI289228.size = sizeof(pprocHEX3Aobjecttype289228);
NTI289228.kind = 18;
NTI289228.base = 0;
NTI289228.flags = 2;
TMP1945[0] = &TMP848[11];
NTI289030.size = sizeof(tblock289030);
NTI289030.kind = 18;
NTI289030.base = 0;
NTI289030.flags = 2;
TMP1946[0] = &TMP848[13];
TMP848[13].kind = 1;
TMP848[13].offset = offsetof(tblock289030, Label);
TMP848[13].typ = (&NTI225817);
TMP848[13].name = "label";
TMP1946[1] = &TMP848[14];
NTI289210.size = sizeof(TY289210*);
NTI289210.kind = 24;
NTI289210.base = (&NTI108);
NTI289210.flags = 2;
NTI289210.marker = TMP1947;
TMP848[14].kind = 1;
TMP848[14].offset = offsetof(tblock289030, Fixups);
TMP848[14].typ = (&NTI289210);
TMP848[14].name = "fixups";
TMP848[12].len = 2; TMP848[12].kind = 2; TMP848[12].sons = &TMP1946[0];
NTI289030.node = &TMP848[12];
NTI289229.size = sizeof(TY289229*);
NTI289229.kind = 24;
NTI289229.base = (&NTI289030);
NTI289229.flags = 2;
NTI289229.marker = TMP1948;
TMP848[11].kind = 1;
TMP848[11].offset = offsetof(pprocHEX3Aobjecttype289228, Blocks);
TMP848[11].typ = (&NTI289229);
TMP848[11].name = "blocks";
TMP1945[1] = &TMP848[15];
TMP848[15].kind = 1;
TMP848[15].offset = offsetof(pprocHEX3Aobjecttype289228, Sym);
TMP848[15].typ = (&NTI225817);
TMP848[15].name = "sym";
TMP1945[2] = &TMP848[16];
NTI289235.size = sizeof(TY289235);
NTI289235.kind = 18;
NTI289235.base = 0;
NTI289235.flags = 3;
TMP1949[0] = &TMP848[18];
TMP848[18].kind = 1;
TMP848[18].offset = offsetof(TY289235, Field0);
TMP848[18].typ = (&NTI138);
TMP848[18].name = "Field0";
TMP1949[1] = &TMP848[19];
NTI289038.size = sizeof(NU8);
NTI289038.kind = 14;
NTI289038.base = 0;
NTI289038.flags = 3;
for (TMP1952 = 0; TMP1952 < 8; TMP1952++) {
TMP848[TMP1952+20].kind = 1;
TMP848[TMP1952+20].offset = TMP1952;
TMP848[TMP1952+20].name = TMP1951[TMP1952];
TMP1950[TMP1952] = &TMP848[TMP1952+20];
}
TMP848[28].len = 8; TMP848[28].kind = 2; TMP848[28].sons = &TMP1950[0];
NTI289038.node = &TMP848[28];
TMP848[19].kind = 1;
TMP848[19].offset = offsetof(TY289235, Field1);
TMP848[19].typ = (&NTI289038);
TMP848[19].name = "Field1";
TMP848[17].len = 2; TMP848[17].kind = 2; TMP848[17].sons = &TMP1949[0];
NTI289235.node = &TMP848[17];
NTI289232.size = sizeof(TY289232);
NTI289232.kind = 16;
NTI289232.base = (&NTI289235);
NTI289232.flags = 3;
TMP848[16].kind = 1;
TMP848[16].offset = offsetof(pprocHEX3Aobjecttype289228, Slots);
TMP848[16].typ = (&NTI289232);
TMP848[16].name = "slots";
TMP1945[3] = &TMP848[29];
TMP848[29].kind = 1;
TMP848[29].offset = offsetof(pprocHEX3Aobjecttype289228, Maxslots);
TMP848[29].typ = (&NTI108);
TMP848[29].name = "maxSlots";
TMP848[10].len = 4; TMP848[10].kind = 2; TMP848[10].sons = &TMP1945[0];
NTI289228.node = &TMP848[10];
NTI289040.size = sizeof(pprocHEX3Aobjecttype289228*);
NTI289040.kind = 22;
NTI289040.base = (&NTI289228);
NTI289040.flags = 2;
NTI289040.marker = TMP1953;
TMP848[9].kind = 1;
TMP848[9].offset = offsetof(tctx289048, Prc);
TMP848[9].typ = (&NTI289040);
TMP848[9].name = "prc";
TMP1943[9] = &TMP848[30];
TMP848[30].kind = 1;
TMP848[30].offset = offsetof(tctx289048, Module);
TMP848[30].typ = (&NTI225817);
TMP848[30].name = "module";
TMP1943[10] = &TMP848[31];
TMP848[31].kind = 1;
TMP848[31].offset = offsetof(tctx289048, Callsite);
TMP848[31].typ = (&NTI225811);
TMP848[31].name = "callsite";
TMP1943[11] = &TMP848[32];
NTI289032.size = sizeof(NU8);
NTI289032.kind = 14;
NTI289032.base = 0;
NTI289032.flags = 3;
for (TMP1956 = 0; TMP1956 < 5; TMP1956++) {
TMP848[TMP1956+33].kind = 1;
TMP848[TMP1956+33].offset = TMP1956;
TMP848[TMP1956+33].name = TMP1955[TMP1956];
TMP1954[TMP1956] = &TMP848[TMP1956+33];
}
TMP848[38].len = 5; TMP848[38].kind = 2; TMP848[38].sons = &TMP1954[0];
NTI289032.node = &TMP848[38];
TMP848[32].kind = 1;
TMP848[32].offset = offsetof(tctx289048, Mode);
TMP848[32].typ = (&NTI289032);
TMP848[32].name = "mode";
TMP1943[12] = &TMP848[39];
NTI289034.size = sizeof(NU8);
NTI289034.kind = 14;
NTI289034.base = 0;
NTI289034.flags = 3;
for (TMP1959 = 0; TMP1959 < 3; TMP1959++) {
TMP848[TMP1959+40].kind = 1;
TMP848[TMP1959+40].offset = TMP1959;
TMP848[TMP1959+40].name = TMP1958[TMP1959];
TMP1957[TMP1959] = &TMP848[TMP1959+40];
}
TMP848[43].len = 3; TMP848[43].kind = 2; TMP848[43].sons = &TMP1957[0];
NTI289034.node = &TMP848[43];
NTI289036.size = sizeof(NU8);
NTI289036.kind = 19;
NTI289036.base = (&NTI289034);
NTI289036.flags = 3;
TMP848[44].len = 0; TMP848[44].kind = 0;
NTI289036.node = &TMP848[44];
TMP848[39].kind = 1;
TMP848[39].offset = offsetof(tctx289048, Features);
TMP848[39].typ = (&NTI289036);
TMP848[39].name = "features";
TMP1943[13] = &TMP848[45];
TMP848[45].kind = 1;
TMP848[45].offset = offsetof(tctx289048, Traceactive);
TMP848[45].typ = (&NTI138);
TMP848[45].name = "traceActive";
TMP1943[14] = &TMP848[46];
TMP848[46].kind = 1;
TMP848[46].offset = offsetof(tctx289048, Loopiterations);
TMP848[46].typ = (&NTI108);
TMP848[46].name = "loopIterations";
TMP1943[15] = &TMP848[47];
TMP848[47].kind = 1;
TMP848[47].offset = offsetof(tctx289048, Comesfromheuristic);
TMP848[47].typ = (&NTI196539);
TMP848[47].name = "comesFromHeuristic";
TMP1943[16] = &TMP848[48];
NTI289267.size = sizeof(TY289267);
NTI289267.kind = 18;
NTI289267.base = 0;
TMP1960[0] = &TMP848[50];
TMP848[50].kind = 1;
TMP848[50].offset = offsetof(TY289267, Field0);
TMP848[50].typ = (&NTI149);
TMP848[50].name = "Field0";
TMP1960[1] = &TMP848[51];
NTI289044.size = sizeof(TY613411);
NTI289044.kind = 18;
NTI289044.base = 0;
NTI289044.flags = 2;
TMP1961[0] = &TMP848[53];
TMP848[53].kind = 1;
TMP848[53].offset = offsetof(TY613411, Field0);
TMP848[53].typ = (&NTI153);
TMP848[53].name = "Field0";
TMP1961[1] = &TMP848[54];
TMP848[54].kind = 1;
TMP848[54].offset = offsetof(TY613411, Field1);
TMP848[54].typ = (&NTI613413);
TMP848[54].name = "Field1";
TMP848[52].len = 2; TMP848[52].kind = 2; TMP848[52].sons = &TMP1961[0];
NTI289044.node = &TMP848[52];
TMP848[51].kind = 1;
TMP848[51].offset = offsetof(TY289267, Field1);
TMP848[51].typ = (&NTI289044);
TMP848[51].name = "Field1";
TMP848[49].len = 2; TMP848[49].kind = 2; TMP848[49].sons = &TMP1960[0];
NTI289267.node = &TMP848[49];
NTI289266.size = sizeof(TY289266*);
NTI289266.kind = 24;
NTI289266.base = (&NTI289267);
NTI289266.marker = TMP1962;
TMP848[48].kind = 1;
TMP848[48].offset = offsetof(tctx289048, Callbacks);
TMP848[48].typ = (&NTI289266);
TMP848[48].name = "callbacks";
TMP848[0].len = 17; TMP848[0].kind = 2; TMP848[0].sons = &TMP1943[0];
NTI289048.node = &TMP848[0];
NTI289046.size = sizeof(tctx289048*);
NTI289046.kind = 22;
NTI289046.base = (&NTI289048);
NTI289046.marker = TMP1963;
NTI289028.size = sizeof(NU8);
NTI289028.kind = 14;
NTI289028.base = 0;
NTI289028.flags = 3;
for (TMP2828 = 0; TMP2828 < 154; TMP2828++) {
TMP848[TMP2828+55].kind = 1;
TMP848[TMP2828+55].offset = TMP2828;
TMP848[TMP2828+55].name = TMP2827[TMP2828];
TMP2826[TMP2828] = &TMP848[TMP2828+55];
}
TMP848[209].len = 154; TMP848[209].kind = 2; TMP848[209].sons = &TMP2826[0];
NTI289028.node = &TMP848[209];
}

