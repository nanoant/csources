/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tctx287048 tctx287048;
typedef struct tpasscontext284005 tpasscontext284005;
typedef struct TNimObject TNimObject;
typedef struct TY287247 TY287247;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY195414 TY195414;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct tnode223819 tnode223819;
typedef struct ttypeseq223851 ttypeseq223851;
typedef struct ttype223855 ttype223855;
typedef struct pprocHEX3Aobjecttype287228 pprocHEX3Aobjecttype287228;
typedef struct tsym223849 tsym223849;
typedef struct TY287266 TY287266;
typedef struct TY287267 TY287267;
typedef struct NimStringDesc NimStringDesc;
typedef struct vmargs287042 vmargs287042;
typedef struct TY287229 TY287229;
typedef struct tblock287030 tblock287030;
typedef struct TY287210 TY287210;
typedef struct TY287235 TY287235;
typedef struct TY611411 TY611411;
typedef struct TY611414 TY611414;
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
typedef struct tident199021 tident199021;
typedef struct tnodeseq223813 tnodeseq223813;
typedef struct tidobj199015 tidobj199015;
typedef struct tloc223833 tloc223833;
typedef struct trope176009 trope176009;
typedef struct tscope223843 tscope223843;
typedef struct TY223950 TY223950;
typedef struct tinstantiation223839 tinstantiation223839;
typedef struct tstrtable223823 tstrtable223823;
typedef struct tsymseq223821 tsymseq223821;
typedef struct tlib223837 tlib223837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY223939 TY223939;
typedef struct tlistentry126022 tlistentry126022;
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
struct  tpasscontext284005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  vmargs287042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs287042 args, void* ClEnv);
void* ClEnv;
} vmcallback287044;
struct TY287267 {
NimStringDesc* Field0;
vmcallback287044 Field1;
};
struct  tctx287048  {
  tpasscontext284005 Sup;
TY287247* Code;
TY195414* Debug;
tnode223819* Globals;
tnode223819* Constants;
ttypeseq223851* Types;
tnode223819* Currentexceptiona;
tnode223819* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype287228* Prc;
tsym223849* Module;
tnode223819* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo194539 Comesfromheuristic;
TY287266* Callbacks;
};
struct  tblock287030  {
tsym223849* Label;
TY287210* Fixups;
};
struct TY287235 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY287235 TY287232[256];
struct  pprocHEX3Aobjecttype287228  {
TY287229* Blocks;
tsym223849* Sym;
TY287232 Slots;
NI Maxslots;
};
struct TY611411 {
void* Field0;
TY611414* Field1;
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
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tloc223833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype223855* T;
trope176009* R;
trope176009* Heaproot;
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
struct  tstrtable223823  {
NI Counter;
tsymseq223821* Data;
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
struct TY611414 {
char dummy;
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
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY287247 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY195414 {
  TGenericSeq Sup;
  tlineinfo194539 data[SEQ_DECL_SIZE];
};
struct ttypeseq223851 {
  TGenericSeq Sup;
  ttype223855* data[SEQ_DECL_SIZE];
};
struct TY287266 {
  TGenericSeq Sup;
  TY287267 data[SEQ_DECL_SIZE];
};
struct TY287210 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY287229 {
  TGenericSeq Sup;
  tblock287030 data[SEQ_DECL_SIZE];
};
struct tnodeseq223813 {
  TGenericSeq Sup;
  tnode223819* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP1942)(void* p, NI op);
N_NIMCALL(void, TMP1945)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1946)(void* p, NI op);
N_NIMCALL(void, TMP1951)(void* p, NI op);
N_NIMCALL(void, TMP1960)(void* p, NI op);
N_NIMCALL(void, TMP1961)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode223819*, newnode_224093)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tlineinfo194539, unknownlineinfo_195405)(void);
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
extern TNimType NTI284005; /* TPassContext */
TNimType NTI287048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI287247; /* seq[TInstr] */
extern TNimType NTI195414; /* seq[TLineInfo] */
extern TNimType NTI223811; /* PNode */
extern TNimType NTI223851; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI287228; /* PProc:ObjectType */
TNimType NTI287030; /* TBlock */
extern TNimType NTI223817; /* PSym */
TNimType NTI287210; /* seq[TPosition] */
TNimType NTI287229; /* seq[TBlock] */
TNimType NTI287235; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI287038; /* TSlotKind */
TNimType NTI287232; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI287040; /* PProc */
TNimType NTI287032; /* TEvalMode */
TNimType NTI287034; /* TSandboxFlag */
TNimType NTI287036; /* TSandboxFlags */
extern TNimType NTI194539; /* TLineInfo */
TNimType NTI287267; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI287044; /* tuple[pointer, ref tuple[]] */
extern TNimType NTI153; /* pointer */
extern TNimType NTI611413; /* ref tuple[] */
TNimType NTI287266; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI287046; /* PCtx */
extern tgcheap46816 gch_46844;
TNimType NTI287028; /* TOpcode */
N_NIMCALL(void, TMP1942)(void* p, NI op) {
	TY287247* a;
	NI LOC1;
	a = (TY287247*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1945)(void* p, NI op) {
	TY287210* a;
	NI LOC1;
	a = (TY287210*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1946)(void* p, NI op) {
	TY287229* a;
	NI LOC1;
	a = (TY287229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP1951)(void* p, NI op) {
	pprocHEX3Aobjecttype287228* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype287228*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1960)(void* p, NI op) {
	TY287266* a;
	NI LOC1;
	a = (TY287266*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1961)(void* p, NI op) {
	tctx287048* a;
	a = (tctx287048*)p;
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
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

N_NIMCALL(tctx287048*, newctx_287275)(tsym223849* module) {
	tctx287048* result;
	tctx287048* LOC1;
	pprocHEX3Aobjecttype287228* LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = (tctx287048*) newObj((&NTI287046), sizeof(tctx287048));
	(*LOC1).Sup.Sup.m_type = (&NTI287048);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY287247*) newSeqRC1((&NTI287247), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY195414*) newSeqRC1((&NTI195414), 0);
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_224093(((NU8) 125)));
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_224093(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq223851*) newSeqRC1((&NTI223851), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype287228*) newObj((&NTI287040), sizeof(pprocHEX3Aobjecttype287228));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY287229*) newSeqRC1((&NTI287229), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	(*LOC1).Comesfromheuristic = unknownlineinfo_195405();
	if ((*LOC1).Callbacks) nimGCunref((*LOC1).Callbacks);
	(*LOC1).Callbacks = (TY287266*) newSeqRC1((&NTI287266), 0);
	result = LOC1;
	return result;
}

N_NIMCALL(void, refresh_287387)(tctx287048* c, tsym223849* module) {
	pprocHEX3Aobjecttype287228* LOC1;
	asgnRefNoCycle((void**) &(*c).Module, module);
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype287228*) newObj((&NTI287040), sizeof(pprocHEX3Aobjecttype287228));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY287229*) newSeqRC1((&NTI287229), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
}

static N_INLINE(void, incref_50825)(tcell44735* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
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

N_NIMCALL(void, registercallback_287418)(tctx287048* c, NimStringDesc* name, vmcallback287044 callback) {
	TY287267 LOC1;
	NimStringDesc* LOC2;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).Callbacks = (TY287266*) incrSeq(&((*c).Callbacks)->Sup, sizeof(TY287267));
	LOC2 = 0;
	LOC2 = (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0; (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) &(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClEnv, LOC1.Field1.ClEnv);
	(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefDatInit)(void) {
static TNimNode* TMP1941[17];
static TNimNode* TMP1943[4];
static TNimNode* TMP1944[2];
static TNimNode* TMP1947[2];
static TNimNode* TMP1948[8];
NI TMP1950;
static char* NIM_CONST TMP1949[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP1952[5];
NI TMP1954;
static char* NIM_CONST TMP1953[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1955[3];
NI TMP1957;
static char* NIM_CONST TMP1956[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1958[2];
static TNimNode* TMP1959[2];
static TNimNode* TMP2824[154];
NI TMP2826;
static char* NIM_CONST TMP2825[154] = {
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
static TNimNode TMP846[210];
NTI287048.size = sizeof(tctx287048);
NTI287048.kind = 17;
NTI287048.base = (&NTI284005);
TMP1941[0] = &TMP846[1];
NTI287247.size = sizeof(TY287247*);
NTI287247.kind = 24;
NTI287247.base = (&NTI124);
NTI287247.flags = 2;
NTI287247.marker = TMP1942;
TMP846[1].kind = 1;
TMP846[1].offset = offsetof(tctx287048, Code);
TMP846[1].typ = (&NTI287247);
TMP846[1].name = "code";
TMP1941[1] = &TMP846[2];
TMP846[2].kind = 1;
TMP846[2].offset = offsetof(tctx287048, Debug);
TMP846[2].typ = (&NTI195414);
TMP846[2].name = "debug";
TMP1941[2] = &TMP846[3];
TMP846[3].kind = 1;
TMP846[3].offset = offsetof(tctx287048, Globals);
TMP846[3].typ = (&NTI223811);
TMP846[3].name = "globals";
TMP1941[3] = &TMP846[4];
TMP846[4].kind = 1;
TMP846[4].offset = offsetof(tctx287048, Constants);
TMP846[4].typ = (&NTI223811);
TMP846[4].name = "constants";
TMP1941[4] = &TMP846[5];
TMP846[5].kind = 1;
TMP846[5].offset = offsetof(tctx287048, Types);
TMP846[5].typ = (&NTI223851);
TMP846[5].name = "types";
TMP1941[5] = &TMP846[6];
TMP846[6].kind = 1;
TMP846[6].offset = offsetof(tctx287048, Currentexceptiona);
TMP846[6].typ = (&NTI223811);
TMP846[6].name = "currentExceptionA";
TMP1941[6] = &TMP846[7];
TMP846[7].kind = 1;
TMP846[7].offset = offsetof(tctx287048, Currentexceptionb);
TMP846[7].typ = (&NTI223811);
TMP846[7].name = "currentExceptionB";
TMP1941[7] = &TMP846[8];
TMP846[8].kind = 1;
TMP846[8].offset = offsetof(tctx287048, Exceptioninstr);
TMP846[8].typ = (&NTI108);
TMP846[8].name = "exceptionInstr";
TMP1941[8] = &TMP846[9];
NTI287228.size = sizeof(pprocHEX3Aobjecttype287228);
NTI287228.kind = 18;
NTI287228.base = 0;
NTI287228.flags = 2;
TMP1943[0] = &TMP846[11];
NTI287030.size = sizeof(tblock287030);
NTI287030.kind = 18;
NTI287030.base = 0;
NTI287030.flags = 2;
TMP1944[0] = &TMP846[13];
TMP846[13].kind = 1;
TMP846[13].offset = offsetof(tblock287030, Label);
TMP846[13].typ = (&NTI223817);
TMP846[13].name = "label";
TMP1944[1] = &TMP846[14];
NTI287210.size = sizeof(TY287210*);
NTI287210.kind = 24;
NTI287210.base = (&NTI108);
NTI287210.flags = 2;
NTI287210.marker = TMP1945;
TMP846[14].kind = 1;
TMP846[14].offset = offsetof(tblock287030, Fixups);
TMP846[14].typ = (&NTI287210);
TMP846[14].name = "fixups";
TMP846[12].len = 2; TMP846[12].kind = 2; TMP846[12].sons = &TMP1944[0];
NTI287030.node = &TMP846[12];
NTI287229.size = sizeof(TY287229*);
NTI287229.kind = 24;
NTI287229.base = (&NTI287030);
NTI287229.flags = 2;
NTI287229.marker = TMP1946;
TMP846[11].kind = 1;
TMP846[11].offset = offsetof(pprocHEX3Aobjecttype287228, Blocks);
TMP846[11].typ = (&NTI287229);
TMP846[11].name = "blocks";
TMP1943[1] = &TMP846[15];
TMP846[15].kind = 1;
TMP846[15].offset = offsetof(pprocHEX3Aobjecttype287228, Sym);
TMP846[15].typ = (&NTI223817);
TMP846[15].name = "sym";
TMP1943[2] = &TMP846[16];
NTI287235.size = sizeof(TY287235);
NTI287235.kind = 18;
NTI287235.base = 0;
NTI287235.flags = 3;
TMP1947[0] = &TMP846[18];
TMP846[18].kind = 1;
TMP846[18].offset = offsetof(TY287235, Field0);
TMP846[18].typ = (&NTI138);
TMP846[18].name = "Field0";
TMP1947[1] = &TMP846[19];
NTI287038.size = sizeof(NU8);
NTI287038.kind = 14;
NTI287038.base = 0;
NTI287038.flags = 3;
for (TMP1950 = 0; TMP1950 < 8; TMP1950++) {
TMP846[TMP1950+20].kind = 1;
TMP846[TMP1950+20].offset = TMP1950;
TMP846[TMP1950+20].name = TMP1949[TMP1950];
TMP1948[TMP1950] = &TMP846[TMP1950+20];
}
TMP846[28].len = 8; TMP846[28].kind = 2; TMP846[28].sons = &TMP1948[0];
NTI287038.node = &TMP846[28];
TMP846[19].kind = 1;
TMP846[19].offset = offsetof(TY287235, Field1);
TMP846[19].typ = (&NTI287038);
TMP846[19].name = "Field1";
TMP846[17].len = 2; TMP846[17].kind = 2; TMP846[17].sons = &TMP1947[0];
NTI287235.node = &TMP846[17];
NTI287232.size = sizeof(TY287232);
NTI287232.kind = 16;
NTI287232.base = (&NTI287235);
NTI287232.flags = 3;
TMP846[16].kind = 1;
TMP846[16].offset = offsetof(pprocHEX3Aobjecttype287228, Slots);
TMP846[16].typ = (&NTI287232);
TMP846[16].name = "slots";
TMP1943[3] = &TMP846[29];
TMP846[29].kind = 1;
TMP846[29].offset = offsetof(pprocHEX3Aobjecttype287228, Maxslots);
TMP846[29].typ = (&NTI108);
TMP846[29].name = "maxSlots";
TMP846[10].len = 4; TMP846[10].kind = 2; TMP846[10].sons = &TMP1943[0];
NTI287228.node = &TMP846[10];
NTI287040.size = sizeof(pprocHEX3Aobjecttype287228*);
NTI287040.kind = 22;
NTI287040.base = (&NTI287228);
NTI287040.flags = 2;
NTI287040.marker = TMP1951;
TMP846[9].kind = 1;
TMP846[9].offset = offsetof(tctx287048, Prc);
TMP846[9].typ = (&NTI287040);
TMP846[9].name = "prc";
TMP1941[9] = &TMP846[30];
TMP846[30].kind = 1;
TMP846[30].offset = offsetof(tctx287048, Module);
TMP846[30].typ = (&NTI223817);
TMP846[30].name = "module";
TMP1941[10] = &TMP846[31];
TMP846[31].kind = 1;
TMP846[31].offset = offsetof(tctx287048, Callsite);
TMP846[31].typ = (&NTI223811);
TMP846[31].name = "callsite";
TMP1941[11] = &TMP846[32];
NTI287032.size = sizeof(NU8);
NTI287032.kind = 14;
NTI287032.base = 0;
NTI287032.flags = 3;
for (TMP1954 = 0; TMP1954 < 5; TMP1954++) {
TMP846[TMP1954+33].kind = 1;
TMP846[TMP1954+33].offset = TMP1954;
TMP846[TMP1954+33].name = TMP1953[TMP1954];
TMP1952[TMP1954] = &TMP846[TMP1954+33];
}
TMP846[38].len = 5; TMP846[38].kind = 2; TMP846[38].sons = &TMP1952[0];
NTI287032.node = &TMP846[38];
TMP846[32].kind = 1;
TMP846[32].offset = offsetof(tctx287048, Mode);
TMP846[32].typ = (&NTI287032);
TMP846[32].name = "mode";
TMP1941[12] = &TMP846[39];
NTI287034.size = sizeof(NU8);
NTI287034.kind = 14;
NTI287034.base = 0;
NTI287034.flags = 3;
for (TMP1957 = 0; TMP1957 < 3; TMP1957++) {
TMP846[TMP1957+40].kind = 1;
TMP846[TMP1957+40].offset = TMP1957;
TMP846[TMP1957+40].name = TMP1956[TMP1957];
TMP1955[TMP1957] = &TMP846[TMP1957+40];
}
TMP846[43].len = 3; TMP846[43].kind = 2; TMP846[43].sons = &TMP1955[0];
NTI287034.node = &TMP846[43];
NTI287036.size = sizeof(NU8);
NTI287036.kind = 19;
NTI287036.base = (&NTI287034);
NTI287036.flags = 3;
TMP846[44].len = 0; TMP846[44].kind = 0;
NTI287036.node = &TMP846[44];
TMP846[39].kind = 1;
TMP846[39].offset = offsetof(tctx287048, Features);
TMP846[39].typ = (&NTI287036);
TMP846[39].name = "features";
TMP1941[13] = &TMP846[45];
TMP846[45].kind = 1;
TMP846[45].offset = offsetof(tctx287048, Traceactive);
TMP846[45].typ = (&NTI138);
TMP846[45].name = "traceActive";
TMP1941[14] = &TMP846[46];
TMP846[46].kind = 1;
TMP846[46].offset = offsetof(tctx287048, Loopiterations);
TMP846[46].typ = (&NTI108);
TMP846[46].name = "loopIterations";
TMP1941[15] = &TMP846[47];
TMP846[47].kind = 1;
TMP846[47].offset = offsetof(tctx287048, Comesfromheuristic);
TMP846[47].typ = (&NTI194539);
TMP846[47].name = "comesFromHeuristic";
TMP1941[16] = &TMP846[48];
NTI287267.size = sizeof(TY287267);
NTI287267.kind = 18;
NTI287267.base = 0;
TMP1958[0] = &TMP846[50];
TMP846[50].kind = 1;
TMP846[50].offset = offsetof(TY287267, Field0);
TMP846[50].typ = (&NTI149);
TMP846[50].name = "Field0";
TMP1958[1] = &TMP846[51];
NTI287044.size = sizeof(TY611411);
NTI287044.kind = 18;
NTI287044.base = 0;
NTI287044.flags = 2;
TMP1959[0] = &TMP846[53];
TMP846[53].kind = 1;
TMP846[53].offset = offsetof(TY611411, Field0);
TMP846[53].typ = (&NTI153);
TMP846[53].name = "Field0";
TMP1959[1] = &TMP846[54];
TMP846[54].kind = 1;
TMP846[54].offset = offsetof(TY611411, Field1);
TMP846[54].typ = (&NTI611413);
TMP846[54].name = "Field1";
TMP846[52].len = 2; TMP846[52].kind = 2; TMP846[52].sons = &TMP1959[0];
NTI287044.node = &TMP846[52];
TMP846[51].kind = 1;
TMP846[51].offset = offsetof(TY287267, Field1);
TMP846[51].typ = (&NTI287044);
TMP846[51].name = "Field1";
TMP846[49].len = 2; TMP846[49].kind = 2; TMP846[49].sons = &TMP1958[0];
NTI287267.node = &TMP846[49];
NTI287266.size = sizeof(TY287266*);
NTI287266.kind = 24;
NTI287266.base = (&NTI287267);
NTI287266.marker = TMP1960;
TMP846[48].kind = 1;
TMP846[48].offset = offsetof(tctx287048, Callbacks);
TMP846[48].typ = (&NTI287266);
TMP846[48].name = "callbacks";
TMP846[0].len = 17; TMP846[0].kind = 2; TMP846[0].sons = &TMP1941[0];
NTI287048.node = &TMP846[0];
NTI287046.size = sizeof(tctx287048*);
NTI287046.kind = 22;
NTI287046.base = (&NTI287048);
NTI287046.marker = TMP1961;
NTI287028.size = sizeof(NU8);
NTI287028.kind = 14;
NTI287028.base = 0;
NTI287028.flags = 3;
for (TMP2826 = 0; TMP2826 < 154; TMP2826++) {
TMP846[TMP2826+55].kind = 1;
TMP846[TMP2826+55].offset = TMP2826;
TMP846[TMP2826+55].name = TMP2825[TMP2826];
TMP2824[TMP2826] = &TMP846[TMP2826+55];
}
TMP846[209].len = 154; TMP846[209].kind = 2; TMP846[209].sons = &TMP2824[0];
NTI287028.node = &TMP846[209];
}

