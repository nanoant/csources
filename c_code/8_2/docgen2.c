/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct tpasscontext284005 tpasscontext284005;
typedef struct tsym223849 tsym223849;
typedef struct tgen603010 tgen603010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tdocumentor395007 tdocumentor395007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct stringtableobj130012 stringtableobj130012;
typedef struct tidobj199015 tidobj199015;
typedef struct ttypeseq223851 ttypeseq223851;
typedef struct ttype223855 ttype223855;
typedef struct tscope223843 tscope223843;
typedef struct TY223950 TY223950;
typedef struct tinstantiation223839 tinstantiation223839;
typedef struct tstrtable223823 tstrtable223823;
typedef struct tsymseq223821 tsymseq223821;
typedef struct tident199021 tident199021;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct tnode223819 tnode223819;
typedef struct tloc223833 tloc223833;
typedef struct trope176009 trope176009;
typedef struct tlib223837 tlib223837;
typedef struct trstgenerator355016 trstgenerator355016;
typedef struct TY355032 TY355032;
typedef struct ttocentry355012 ttocentry355012;
typedef struct trstnode340011 trstnode340011;
typedef struct table355050 table355050;
typedef struct keyvaluepairseq355053 keyvaluepairseq355053;
typedef struct keyvaluepair355056 keyvaluepair355056;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct keyvaluepairseq130010 keyvaluepairseq130010;
typedef struct keyvaluepair130008 keyvaluepair130008;
typedef struct tnodeseq223813 tnodeseq223813;
typedef struct TY223939 TY223939;
typedef struct tlistentry126022 tlistentry126022;
typedef struct trstnodeseq340009 trstnodeseq340009;
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
struct  tpasscontext284005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen603010  {
  tpasscontext284005 Sup;
tdocumentor395007* Doc;
tsym223849* Module;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable223823  {
NI Counter;
tsymseq223821* Data;
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  ttocentry355012  {
trstnode340011* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler341023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler341021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY355040[5];
struct keyvaluepair355056 {
NU8 Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table355050  {
keyvaluepairseq355053* Data;
NI Counter;
};
struct  trstgenerator355016  {
  TNimObject Sup;
NU8 Target;
stringtableobj130012* Config;
NI Splitafter;
TY355032* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler341023 Findfile;
tmsghandler341021 Msghandler;
NimStringDesc* Filename;
TY355040 Meta;
NimStringDesc* Currentsection;
table355050 Seenindexterms;
};
typedef trope176009* tsections395005[26];
struct  tdocumentor395007  {
  trstgenerator355016 Sup;
trope176009* Moddesc;
NI Id;
tsections395005 Toc;
tsections395005 Section;
NimStringDesc* Indexvalfilename;
stringtableobj130012* Seensymbols;
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
struct keyvaluepair130008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj130012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq130010* Data;
NU8 Mode;
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
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
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
struct  trstnode340011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq340009* Sons;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
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
struct TY355032 {
  TGenericSeq Sup;
  ttocentry355012 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq355053 {
  TGenericSeq Sup;
  keyvaluepair355056 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq130010 {
  TGenericSeq Sup;
  keyvaluepair130008 data[SEQ_DECL_SIZE];
};
struct tnodeseq223813 {
  TGenericSeq Sup;
  tnode223819* data[SEQ_DECL_SIZE];
};
struct TY223939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct trstnodeseq340009 {
  TGenericSeq Sup;
  trstnode340011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4718)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(tdocumentor395007*, newdocumentor_395064)(NimStringDesc* filename, stringtableobj130012* config);
N_NIMCALL(NimStringDesc*, tofilename_196025)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44735* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c);
N_NOINLINE(void, incl_45471)(tcellset44747* s, tcell44735* cell);
static N_INLINE(void, decref_50404)(tcell44735* c);
N_NIMCALL(void, generatedoc_396685)(tdocumentor395007* d, tnode223819* n);
N_NIMCALL(void, writeoutput_398920)(tdocumentor395007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_398897)(tdocumentor395007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4719, "html", 4);
extern TNimType NTI284005; /* TPassContext */
TNimType NTI603010; /* TGen */
extern TNimType NTI395009; /* PDoc */
extern TNimType NTI223817; /* PSym */
TNimType NTI603012; /* PGen */
extern tgcheap46816 gch_46844;
extern stringtableobj130012* gconfigvars_168229;
extern NIM_BOOL gwholeproject_168129;
extern TSafePoint* exchandler_16043;
extern TNimType NTI3231; /* IOError */
extern Exception* currexception_16045;
N_NIMCALL(void, TMP4718)(void* p, NI op) {
	tgen603010* a;
	a = (tgen603010*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
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

N_NIMCALL(tpasscontext284005*, myopen_603069)(tsym223849* module) {
	tpasscontext284005* result;
	tgen603010* g;
	tdocumentor395007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (tgen603010*) newObj((&NTI603012), sizeof(tgen603010));
	(*g).Sup.Sup.m_type = (&NTI603010);
	asgnRefNoCycle((void**) &(*g).Module, module);
	LOC1 = 0;
	LOC1 = tofilename_196025(((NI32) ((*module).Position)));
	d = newdocumentor_395064(LOC1, gconfigvars_168229);
	(*d).Sup.Hastoc = NIM_TRUE;
	asgnRef((void**) &(*g).Doc, d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(tnode223819*, processnode_603057)(tpasscontext284005* c, tnode223819* n) {
	tnode223819* result;
	tgen603010* g;
	result = 0;
	result = n;
	g = ((tgen603010*) (c));
	generatedoc_396685((*g).Doc, n);
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

N_NIMCALL(tnode223819*, close_603018)(tpasscontext284005* p, tnode223819* n) {
	tnode223819* result;
	tgen603010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((tgen603010*) (p));
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4720;
		LOC3 = 0;
		LOC3 = gwholeproject_168129;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_196025(((NI32) ((*(*g).Module).Position)));
		writeoutput_398920((*g).Doc, LOC7, ((NimStringDesc*) &TMP4719), usewarning);
		pushSafePoint(&TMP4720);
		TMP4720.status = setjmp(TMP4720.context);
		if (TMP4720.status == 0) {
			generateindex_398897((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3231))) {
				TMP4720.status = 0;
				popCurrentException();
			}
		}
		if (TMP4720.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_603112)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, HEX00_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_docgen2DatInit)(void) {
static TNimNode* TMP4717[2];
static TNimNode TMP983[3];
NTI603010.size = sizeof(tgen603010);
NTI603010.kind = 17;
NTI603010.base = (&NTI284005);
TMP4717[0] = &TMP983[1];
TMP983[1].kind = 1;
TMP983[1].offset = offsetof(tgen603010, Doc);
TMP983[1].typ = (&NTI395009);
TMP983[1].name = "doc";
TMP4717[1] = &TMP983[2];
TMP983[2].kind = 1;
TMP983[2].offset = offsetof(tgen603010, Module);
TMP983[2].typ = (&NTI223817);
TMP983[2].name = "module";
TMP983[0].len = 2; TMP983[0].kind = 2; TMP983[0].sons = &TMP4717[0];
NTI603010.node = &TMP983[0];
NTI603012.size = sizeof(tgen603010*);
NTI603012.kind = 22;
NTI603012.base = (&NTI603010);
NTI603012.marker = TMP4718;
}

