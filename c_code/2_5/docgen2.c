/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct tsym225849 tsym225849;
typedef struct tgen605010 tgen605010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tdocumentor397007 tdocumentor397007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct ttype225855 ttype225855;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tident201021 tident201021;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tnode225819 tnode225819;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tlib225837 tlib225837;
typedef struct trstgenerator357016 trstgenerator357016;
typedef struct TY357032 TY357032;
typedef struct ttocentry357012 ttocentry357012;
typedef struct trstnode342011 trstnode342011;
typedef struct table357050 table357050;
typedef struct keyvaluepairseq357053 keyvaluepairseq357053;
typedef struct keyvaluepair357056 keyvaluepair357056;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct TY225939 TY225939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct trstnodeseq342009 trstnodeseq342009;
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
struct  tgen605010  {
  tpasscontext286005 Sup;
tdocumentor397007* Doc;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225823  {
NI Counter;
tsymseq225821* Data;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  ttocentry357012  {
trstnode342011* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler343023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler343021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY357040[5];
struct keyvaluepair357056 {
NU8 Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table357050  {
keyvaluepairseq357053* Data;
NI Counter;
};
struct  trstgenerator357016  {
  TNimObject Sup;
NU8 Target;
stringtableobj131012* Config;
NI Splitafter;
TY357032* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler343023 Findfile;
tmsghandler343021 Msghandler;
NimStringDesc* Filename;
TY357040 Meta;
NimStringDesc* Currentsection;
table357050 Seenindexterms;
};
typedef trope178009* tsections397005[26];
struct  tdocumentor397007  {
  trstgenerator357016 Sup;
trope178009* Moddesc;
NI Id;
tsections397005 Toc;
tsections397005 Section;
NimStringDesc* Indexvalfilename;
stringtableobj131012* Seensymbols;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY14609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14609 raiseAction;
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
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
NU8 Mode;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct  trstnode342011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq342009* Sons;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
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
struct TY357032 {
  TGenericSeq Sup;
  ttocentry357012 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq357053 {
  TGenericSeq Sup;
  keyvaluepair357056 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct trstnodeseq342009 {
  TGenericSeq Sup;
  trstnode342011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4720)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(tdocumentor397007*, newdocumentor_397064)(NimStringDesc* filename, stringtableobj131012* config);
N_NIMCALL(NimStringDesc*, tofilename_198025)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44733* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44733* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44733* c);
N_NOINLINE(void, incl_45471)(tcellset44745* s, tcell44733* cell);
static N_INLINE(void, decref_50404)(tcell44733* c);
N_NIMCALL(void, generatedoc_398685)(tdocumentor397007* d, tnode225819* n);
N_NIMCALL(void, writeoutput_400920)(tdocumentor397007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_400897)(tdocumentor397007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4721, "html", 4);
extern TNimType NTI286005; /* TPassContext */
TNimType NTI605010; /* TGen */
extern TNimType NTI397009; /* PDoc */
extern TNimType NTI225817; /* PSym */
TNimType NTI605012; /* PGen */
extern tgcheap46816 gch_46844;
extern stringtableobj131012* gconfigvars_170229;
extern NIM_BOOL gwholeproject_170129;
extern TSafePoint* exchandler_16043;
extern TNimType NTI3231; /* IOError */
extern Exception* currexception_16045;
N_NIMCALL(void, TMP4720)(void* p, NI op) {
	tgen605010* a;
	a = (tgen605010*)p;
	nimGCvisit((void*)(*a).Doc, op);
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

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44733* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44733* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471(&gch_46844.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_50825)(tcell44733* c) {
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

static N_INLINE(void, decref_50404)(tcell44733* c) {
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

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44733* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44733* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(tpasscontext286005*, myopen_605070)(tsym225849* module) {
	tpasscontext286005* result;
	tgen605010* g;
	tdocumentor397007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (tgen605010*) newObj((&NTI605012), sizeof(tgen605010));
	(*g).Sup.Sup.m_type = (&NTI605010);
	asgnRefNoCycle((void**) &(*g).Module, module);
	LOC1 = 0;
	LOC1 = tofilename_198025(((NI32) ((*module).Position)));
	d = newdocumentor_397064(LOC1, gconfigvars_170229);
	(*d).Sup.Hastoc = NIM_TRUE;
	asgnRef((void**) &(*g).Doc, d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(tnode225819*, processnode_605058)(tpasscontext286005* c, tnode225819* n) {
	tnode225819* result;
	tgen605010* g;
	result = 0;
	result = n;
	g = ((tgen605010*) (c));
	generatedoc_398685((*g).Doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16043;
	exchandler_16043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16043 = (*exchandler_16043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16045;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_16045, (*currexception_16045).parent);
}

N_NIMCALL(tnode225819*, close_605018)(tpasscontext286005* p, tnode225819* n) {
	tnode225819* result;
	tgen605010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((tgen605010*) (p));
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4722;
		LOC3 = 0;
		LOC3 = gwholeproject_170129;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_198025(((NI32) ((*(*g).Module).Position)));
		writeoutput_400920((*g).Doc, LOC7, ((NimStringDesc*) &TMP4721), usewarning);
		pushSafePoint(&TMP4722);
		TMP4722.status = setjmp(TMP4722.context);
		if (TMP4722.status == 0) {
			generateindex_400897((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3231))) {
				TMP4722.status = 0;
				popCurrentException();
			}
		}
		if (TMP4722.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_605114)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, HEX00_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_docgen2DatInit)(void) {
static TNimNode* TMP4719[2];
static TNimNode TMP985[3];
NTI605010.size = sizeof(tgen605010);
NTI605010.kind = 17;
NTI605010.base = (&NTI286005);
TMP4719[0] = &TMP985[1];
TMP985[1].kind = 1;
TMP985[1].offset = offsetof(tgen605010, Doc);
TMP985[1].typ = (&NTI397009);
TMP985[1].name = "doc";
TMP4719[1] = &TMP985[2];
TMP985[2].kind = 1;
TMP985[2].offset = offsetof(tgen605010, Module);
TMP985[2].typ = (&NTI225817);
TMP985[2].name = "module";
TMP985[0].len = 2; TMP985[0].kind = 2; TMP985[0].sons = &TMP4719[0];
NTI605010.node = &TMP985[0];
NTI605012.size = sizeof(tgen605010*);
NTI605012.kind = 22;
NTI605012.base = (&NTI605010);
NTI605012.marker = TMP4720;
}

