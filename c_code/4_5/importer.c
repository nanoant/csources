/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode224819 tnode224819;
typedef struct tcontext289021 tcontext289021;
typedef struct intset221056 intset221056;
typedef struct ttrunk221052 ttrunk221052;
typedef struct ttrunkseq221054 ttrunkseq221054;
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
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct tproccon289011 tproccon289011;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tidtable224867 tidtable224867;
typedef struct tidpairseq224865 tidpairseq224865;
typedef struct tidpair224863 tidpair224863;
typedef struct tctx288048 tctx288048;
typedef struct TY289133 TY289133;
typedef struct tinstantiationpair289013 tinstantiationpair289013;
typedef struct ttabiter234119 ttabiter234119;
typedef struct tidentiter234141 tidentiter234141;
typedef struct TY224939 TY224939;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY288247 TY288247;
typedef struct TY196414 TY196414;
typedef struct pprocHEX3Aobjecttype288228 pprocHEX3Aobjecttype288228;
typedef struct TY288266 TY288266;
typedef struct TY288267 TY288267;
typedef struct vmargs288042 vmargs288042;
typedef struct TY288229 TY288229;
typedef struct tblock288030 tblock288030;
typedef struct TY288210 TY288210;
typedef struct TY288235 TY288235;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  intset221056  {
NI Counter;
NI Max;
ttrunk221052* Head;
ttrunkseq221054* Data;
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
typedef N_NIMCALL_PTR(tsym224849*, TY285064) (tsym224849* m, NI32 fileidx);
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tidpair224863  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable224867  {
NI Counter;
tidpairseq224865* Data;
};
typedef N_NIMCALL_PTR(tnode224819*, TY289064) (tcontext289021* c, tnode224819* n);
typedef N_NIMCALL_PTR(tnode224819*, TY289069) (tcontext289021* c, tnode224819* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode224819*, TY289077) (tcontext289021* c, tnode224819* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode224819*, TY289085) (tcontext289021* c, tnode224819* n);
typedef N_NIMCALL_PTR(tnode224819*, TY289090) (tcontext289021* c, tnode224819* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode224819*, TY289098) (tcontext289021* c, tnode224819* n);
typedef N_NIMCALL_PTR(tnode224819*, TY289103) (tcontext289021* c, tnode224819* n, tnode224819* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype224855*, TY289110) (tcontext289021* c, tnode224819* n, ttype224855* prev);
typedef struct {
N_NIMCALL_PTR(tnode224819*, ClPrc) (tcontext289021* c, tidtable224867 pt, tnode224819* n, void* ClEnv);
void* ClEnv;
} TY289116;
typedef struct {
N_NIMCALL_PTR(tsym224849*, ClPrc) (tcontext289021* c, tsym224849* fn, tidtable224867 pt, tlineinfo195539 info, void* ClEnv);
void* ClEnv;
} TY289122;
struct  tinstantiationpair289013  {
tsym224849* Genericsym;
tinstantiation224839* Inst;
};
typedef N_NIMCALL_PTR(tsym224849*, TY289138) (tcontext289021* c, tsym224849* dc, ttype224855* t, tlineinfo195539 info);
struct  tcontext289021  {
  tpasscontext285005 Sup;
tsym224849* Module;
tscope224843* Currentscope;
tscope224843* Importtable;
tscope224843* Toplevelscope;
tproccon289011* P;
tsymseq224821* Friendmodules;
NI Instcounter;
intset221056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq224821* Converters;
tsymseq224821* Patterns;
tlinkedlist127028 Optionstack;
tidtable224867 Symmapping;
tlinkedlist127028 Libs;
TY289064 Semconstexpr;
TY289069 Semexpr;
TY289077 Semtryexpr;
TY289085 Semtryconstexpr;
TY289090 Semoperand;
TY289098 Semconstboolexpr;
TY289103 Semoverloadedcall;
TY289110 Semtypenode;
TY289116 Seminferredlambda;
TY289122 Semgenerateinstance;
intset221056 Includedfiles;
tstrtable224823 Userpragmas;
tctx288048* Evalcontext;
intset221056 Unknownidents;
TY289133* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY289138 Instdeepcopy;
};
struct  ttabiter234119  {
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
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
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
struct  tidentiter234141  {
NI H;
tident200021* Name;
};
typedef NI TY26220[16];
struct  ttrunk221052  {
ttrunk221052* Next;
NI Key;
TY26220 Bits;
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
struct  tproccon289011  {
tsym224849* Owner;
tsym224849* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon289011* Next;
};
struct  vmargs288042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs288042 args, void* ClEnv);
void* ClEnv;
} vmcallback288044;
struct TY288267 {
NimStringDesc* Field0;
vmcallback288044 Field1;
};
struct  tctx288048  {
  tpasscontext285005 Sup;
TY288247* Code;
TY196414* Debug;
tnode224819* Globals;
tnode224819* Constants;
ttypeseq224851* Types;
tnode224819* Currentexceptiona;
tnode224819* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype288228* Prc;
tsym224849* Module;
tnode224819* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo195539 Comesfromheuristic;
TY288266* Callbacks;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct  tblock288030  {
tsym224849* Label;
TY288210* Fixups;
};
struct TY288235 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY288235 TY288232[256];
struct  pprocHEX3Aobjecttype288228  {
TY288229* Blocks;
tsym224849* Sym;
TY288232 Slots;
NI Maxslots;
};
struct ttrunkseq221054 {
  TGenericSeq Sup;
  ttrunk221052* data[SEQ_DECL_SIZE];
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
struct tidpairseq224865 {
  TGenericSeq Sup;
  tidpair224863 data[SEQ_DECL_SIZE];
};
struct TY289133 {
  TGenericSeq Sup;
  tinstantiationpair289013 data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY288247 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY196414 {
  TGenericSeq Sup;
  tlineinfo195539 data[SEQ_DECL_SIZE];
};
struct TY288266 {
  TGenericSeq Sup;
  TY288267 data[SEQ_DECL_SIZE];
};
struct TY288210 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY288229 {
  TGenericSeq Sup;
  tblock288030 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(tsym224849*, myimportmodule_297991)(tcontext289021* c, tnode224819* n);
N_NIMCALL(NI32, checkmodulename_297237)(tnode224819* n);
N_NIMCALL(NimStringDesc*, getmodulename_297018)(tnode224819* n);
N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rendertree_249057)(tnode224819* n, NU8 renderflags);
N_NIMCALL(void, localerror_197938)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NIMCALL(NimStringDesc*, findmodule_170366)(NimStringDesc* modulename, NimStringDesc* currentmodule);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(NI32, fileinfoidx_195747)(NimStringDesc* filename);
N_NIMCALL(tsym224849*, importmoduleas_297892)(tnode224819* n, tsym224849* realmodule);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(tsym224849*, createmodulealias_228287)(tsym224849* s, tident200021* newident, tlineinfo195539 info);
N_NIMCALL(void, message_197959)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, adddecl_294694)(tcontext289021* c, tsym224849* sym);
N_NIMCALL(void, importallsymbolsexcept_297573)(tcontext289021* c, tsym224849* frommod, intset221056 exceptset);
N_NIMCALL(tsym224849*, inittabiter_234124)(ttabiter234119* ti, tstrtable224823 tab);
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_80907, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NIM_BOOL, empty_222383)(intset221056 s);
N_NIMCALL(NIM_BOOL, contains_221837)(intset221056 s, NI key);
N_NIMCALL(void, rawimportsymbol_297249)(tcontext289021* c, tsym224849* s);
N_NIMCALL(tsym224849*, strtableget_234111)(tstrtable224823 t, tident200021* name);
N_NIMCALL(void, incl_221869)(intset221056* s, NI key);
N_NIMCALL(void, strtableadd_234103)(tstrtable224823* t, tsym224849* n);
N_NIMCALL(tsym224849*, initidentiter_234147)(tidentiter234141* ti, tstrtable224823 tab, tident200021* s);
N_NIMCALL(tsym224849*, nextidentiter_234156)(tidentiter234141* ti, tstrtable224823 tab);
N_NIMCALL(void, addconverter_289635)(tcontext289021* c, tsym224849* conv);
static N_INLINE(NIM_BOOL, haspattern_231803)(tsym224849* s);
static N_INLINE(NIM_BOOL, isroutine_231780)(tsym224849* s);
N_NIMCALL(void, addpattern_289646)(tcontext289021* c, tsym224849* p);
N_NIMCALL(tsym224849*, nextiter_234132)(ttabiter234119* ti, tstrtable224823 tab);
N_NIMCALL(void, checkminsonslen_290426)(tnode224819* n, NI length);
N_NIMCALL(tnode224819*, newsymnode_225135)(tsym224849* sym);
N_NIMCALL(void, initintset_221950)(intset221056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(tident200021*, considerquotedident_294010)(tnode224819* n);
N_NIMCALL(void, importsymbol_297450)(tcontext289021* c, tnode224819* n, tsym224849* frommod);
N_NIMCALL(void, loadstub_278261)(tsym224849* s);
STRING_LITERAL(TMP3294, "", 0);
STRING_LITERAL(TMP3295, "as", 2);
STRING_LITERAL(TMP3296, " ", 1);
STRING_LITERAL(TMP3297, ".", 1);
STRING_LITERAL(TMP3298, "/", 1);
STRING_LITERAL(TMP3299, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3300, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3301, "A module cannot import itself", 29);
STRING_LITERAL(TMP3302, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3303, "rawImportSymbol", 15);
STRING_LITERAL(TMP3305, "importSymbol: 2", 15);
STRING_LITERAL(TMP3306, "importSymbol: 3", 15);
extern tgcheap46816 gch_46844;
extern TY285064 gimportmodule_285068;
extern TNimType NTI224445; /* TSymKind */

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

N_NIMCALL(NimStringDesc*, getmodulename_297018)(tnode224819* n) {
	NimStringDesc* result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 20):
	case ((NU8) 21):
	case ((NU8) 22):
	{
		result = nosunixToNativePath((*n).kindU.S3.Strval, ((NimStringDesc*) &TMP3294));
	}
	break;
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		result = copyString((*(*(*n).kindU.S4.Sym).Name).S);
	}
	break;
	case ((NU8) 29):
	{
		NimStringDesc* LOC12;
		{
			NIM_BOOL LOC7;
			tident200021* LOC9;
			LOC7 = 0;
			LOC7 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
			if (!(LOC7)) goto LA8;
			LOC9 = 0;
			LOC9 = getident_200472(((NimStringDesc*) &TMP3295));
			LOC7 = ((*(*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident).Sup.Id == (*LOC9).Sup.Id);
			LA8: ;
			if (!LOC7) goto LA10;
			(*n).Kind = ((NU8) 78);
			asgnRefNoCycle((void**) &(*n).kindU.S6.Sons->data[0], (*n).kindU.S6.Sons->data[1]);
			asgnRefNoCycle((void**) &(*n).kindU.S6.Sons->data[1], (*n).kindU.S6.Sons->data[2]);
			(*n).kindU.S6.Sons = (tnodeseq224813*) setLengthSeq(&((*n).kindU.S6.Sons)->Sup, sizeof(tnode224819*), 2);
			result = getmodulename_297018((*n).kindU.S6.Sons->data[0]);
			goto BeforeRet;
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = rendertree_249057(n, 4);
		result = nsuReplaceStr(LOC12, ((NimStringDesc*) &TMP3296), ((NimStringDesc*) &TMP3294));
	}
	break;
	case ((NU8) 45):
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = rendertree_249057(n, 4);
		result = nsuReplaceStr(LOC14, ((NimStringDesc*) &TMP3297), ((NimStringDesc*) &TMP3298));
	}
	break;
	case ((NU8) 78):
	{
		result = getmodulename_297018((*n).kindU.S6.Sons->data[0]);
	}
	break;
	default:
	{
		NimStringDesc* LOC17;
		NimStringDesc* LOC18;
		LOC17 = 0;
		LOC17 = rendertree_249057(n, 0);
		LOC18 = 0;
		LOC18 = nsuFormatSingleElem(((NimStringDesc*) &TMP3299), LOC17);
		localerror_197938((*n).Info, ((NU16) 4), LOC18);
		result = copyString(((NimStringDesc*) &TMP3294));
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI32, checkmodulename_297237)(tnode224819* n) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullpath;
	NimStringDesc* LOC1;
	result = 0;
	modulename = getmodulename_297018(n);
	LOC1 = 0;
	LOC1 = tofullpath_197037((*n).Info.Fileindex);
	fullpath = findmodule_170366(modulename, LOC1);
	{
		if (!(fullpath->Sup.len == 0)) goto LA4;
		localerror_197938((*n).Info, ((NU16) 3), modulename);
		result = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result = fileinfoidx_195747(fullpath);
	}
	LA2: ;
	return result;
}

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

N_NIMCALL(tsym224849*, importmoduleas_297892)(tnode224819* n, tsym224849* realmodule) {
	tsym224849* result;
	result = 0;
	result = realmodule;
	{
		if (!!(((*n).Kind == ((NU8) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = len_225367(n);
		LOC6 = !((LOC7 == 2));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n).kindU.S6.Sons->data[1]).Kind == ((NU8) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_197938((*n).Info, ((NU16) 4), ((NimStringDesc*) &TMP3300));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n).kindU.S6.Sons->data[1]).kindU.S5.Ident).Sup.Id == (*(*realmodule).Name).Sup.Id))) goto LA12;
		result = createmodulealias_228287(realmodule, (*(*n).kindU.S6.Sons->data[1]).kindU.S5.Ident, (*realmodule).Info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result;
}

N_NIMCALL(tsym224849*, myimportmodule_297991)(tcontext289021* c, tnode224819* n) {
	tsym224849* result;
	NI32 f;
	result = 0;
	f = checkmodulename_297237(n);
	{
		tsym224849* LOC5;
		if (!!((f == ((NI32) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = gimportmodule_285068((*c).Module, f);
		result = importmoduleas_297892(n, LOC5);
		{
			if (!((*result).Info.Fileindex == (*n).Info.Fileindex)) goto LA8;
			localerror_197938((*n).Info, ((NU16) 4), ((NimStringDesc*) &TMP3301));
		}
		LA8: ;
		{
			if (!(((*result).Flags &(1<<((((NU8) 19))&31)))!=0)) goto LA12;
			message_197959((*n).Info, ((NU16) 234), (*(*result).Name).S);
		}
		LA12: ;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NIM_BOOL, empty_222383)(intset221056 s) {
	NIM_BOOL result;
	result = 0;
	result = (s.Counter == 0);
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_231780)(tsym224849* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).Kind)&31)))!=0);
	return result;
}

static N_INLINE(NIM_BOOL, haspattern_231803)(tsym224849* s) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isroutine_231780(s);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s).Ast).kindU.S6.Sons->data[1]).Kind == ((NU8) 1)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, rawimportsymbol_297249)(tcontext289021* c, tsym224849* s) {
	tsym224849* check;
	check = strtableget_234111((*(*c).Importtable).Symbols, (*s).Name);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !((check == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check).Sup.Id == (*s).Sup.Id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((520256 &(1<<(((*s).Kind)&31)))!=0))) goto LA9;
			incl_221869(&(*c).Ambiguoussymbols, (*s).Sup.Id);
			incl_221869(&(*c).Ambiguoussymbols, (*check).Sup.Id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_234103(&(*(*c).Importtable).Symbols, s);
	{
		ttype224855* etyp;
		if (!((*s).Kind == ((NU8) 7))) goto LA13;
		etyp = (*s).Typ;
		{
			NIM_BOOL LOC17;
			LOC17 = 0;
			LOC17 = ((*etyp).Kind == ((NU8) 1) || (*etyp).Kind == ((NU8) 14));
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s).Flags &(1<<((((NU8) 9))&31)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_297336;
				NI HEX3Atmp_297424;
				NI LOC22;
				NI res_297427;
				j_297336 = 0;
				HEX3Atmp_297424 = 0;
				LOC22 = 0;
				LOC22 = sonslen_225252((*etyp).N);
				HEX3Atmp_297424 = (NI32)(LOC22 - 1);
				res_297427 = 0;
				{
					while (1) {
						tsym224849* e;
						tidentiter234141 it;
						if (!(res_297427 <= HEX3Atmp_297424)) goto LA24;
						j_297336 = res_297427;
						e = (*(*(*etyp).N).kindU.S6.Sons->data[j_297336]).kindU.S4.Sym;
						{
							if (!!(((*e).Kind == ((NU8) 20)))) goto LA27;
							internalerror_197970((*s).Info, ((NimStringDesc*) &TMP3303));
						}
						LA27: ;
						memset((void*)&it, 0, sizeof(it));
						check = initidentiter_234147(&it, (*(*c).Importtable).Symbols, (*e).Name);
						{
							while (1) {
								if (!!((check == NIM_NIL))) goto LA30;
								{
									if (!((*check).Sup.Id == (*e).Sup.Id)) goto LA33;
									e = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check = nextidentiter_234156(&it, (*(*c).Importtable).Symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e == NIM_NIL))) goto LA37;
							rawimportsymbol_297249(c, e);
						}
						LA37: ;
						res_297427 += 1;
					} LA24: ;
				}
			}
		}
		LA19: ;
	}
	goto LA11;
	LA13: ;
	{
		{
			if (!((*s).Kind == ((NU8) 16))) goto LA42;
			addconverter_289635(c, s);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = 0;
			LOC46 = haspattern_231803(s);
			if (!LOC46) goto LA47;
			addpattern_289646(c, s);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_297573)(tcontext289021* c, tsym224849* frommod, intset221056 exceptset) {
	ttabiter234119 i;
	tsym224849* s;
	memset((void*)&i, 0, sizeof(i));
	s = inittabiter_234124(&i, (*frommod).kindU.S3.Tab);
	{
		while (1) {
			if (!!((s == NIM_NIL))) goto LA2;
			{
				if (!!(((*s).Kind == ((NU8) 6)))) goto LA5;
				{
					if (!!(((*s).Kind == ((NU8) 20)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((43513728 &(1<<(((*s).Kind)&31)))!=0))) goto LA13;
						LOC15 = 0;
						LOC15 = rawNewString(reprEnum((*s).Kind, (&NTI224445))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3302));
appendString(LOC15, reprEnum((*s).Kind, (&NTI224445)));
						internalerror_197970((*s).Info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = 0;
						LOC18 = empty_222383(exceptset);
						if (LOC18) goto LA19;
						LOC20 = 0;
						LOC20 = contains_221837(exceptset, (*(*s).Name).Sup.Id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_297249(c, s);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s = nextiter_234132(&i, (*frommod).kindU.S3.Tab);
		} LA2: ;
	}
}

N_NIMCALL(tnode224819*, evalimport_297004)(tcontext289021* c, tnode224819* n) {
	tnode224819* result;
	intset221056 emptyset;
	result = 0;
	result = n;
	memset((void*)&emptyset, 0, sizeof(emptyset));
	{
		NI i_298034;
		NI HEX3Atmp_298069;
		NI LOC2;
		NI res_298072;
		i_298034 = 0;
		HEX3Atmp_298069 = 0;
		LOC2 = 0;
		LOC2 = sonslen_225252(n);
		HEX3Atmp_298069 = (NI32)(LOC2 - 1);
		res_298072 = 0;
		{
			while (1) {
				tsym224849* m;
				if (!(res_298072 <= HEX3Atmp_298069)) goto LA4;
				i_298034 = res_298072;
				m = myimportmodule_297991(c, (*n).kindU.S6.Sons->data[i_298034]);
				{
					if (!!((m == NIM_NIL))) goto LA7;
					adddecl_294694(c, m);
					importallsymbolsexcept_297573(c, m, emptyset);
				}
				LA7: ;
				res_298072 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(tnode224819*, evalimportexcept_298211)(tcontext289021* c, tnode224819* n) {
	tnode224819* result;
	tsym224849* m;
	result = 0;
	result = n;
	checkminsonslen_290426(n, 2);
	m = myimportmodule_297991(c, (*n).kindU.S6.Sons->data[0]);
	{
		intset221056 exceptset;
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) &(*n).kindU.S6.Sons->data[0], newsymnode_225135(m));
		adddecl_294694(c, m);
		memset((void*)&exceptset, 0, sizeof(exceptset));
		chckNil((void*)&exceptset);
		memset((void*)&exceptset, 0, sizeof(exceptset));
		initintset_221950(&exceptset);
		{
			NI i_298275;
			NI HEX3Atmp_298293;
			NI LOC6;
			NI res_298296;
			i_298275 = 0;
			HEX3Atmp_298293 = 0;
			LOC6 = 0;
			LOC6 = sonslen_225252(n);
			HEX3Atmp_298293 = (NI32)(LOC6 - 1);
			res_298296 = 1;
			{
				while (1) {
					tident200021* ident;
					if (!(res_298296 <= HEX3Atmp_298293)) goto LA8;
					i_298275 = res_298296;
					ident = considerquotedident_294010((*n).kindU.S6.Sons->data[i_298275]);
					incl_221869(&exceptset, (*ident).Sup.Id);
					res_298296 += 1;
				} LA8: ;
			}
		}
		importallsymbolsexcept_297573(c, m, exceptset);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importsymbol_297450)(tcontext289021* c, tnode224819* n, tsym224849* frommod) {
	tident200021* ident;
	tsym224849* s;
	ident = considerquotedident_294010(n);
	s = strtableget_234111((*frommod).kindU.S3.Tab, ident);
	{
		if (!(s == NIM_NIL)) goto LA3;
		localerror_197938((*n).Info, ((NU16) 61), (*ident).S);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s).Kind == ((NU8) 23))) goto LA8;
			loadstub_278261(s);
		}
		LA8: ;
		{
			if (!!(((43513728 &(1<<(((*s).Kind)&31)))!=0))) goto LA12;
			internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3305));
		}
		LA12: ;
		switch ((*s).Kind) {
		case ((NU8) 12):
		case ((NU8) 18):
		case ((NU8) 17):
		case ((NU8) 14):
		case ((NU8) 15):
		case ((NU8) 13):
		case ((NU8) 16):
		{
			tidentiter234141 it;
			tsym224849* e;
			memset((void*)&it, 0, sizeof(it));
			e = initidentiter_234147(&it, (*frommod).kindU.S3.Tab, (*s).Name);
			{
				while (1) {
					if (!!((e == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e).Name).Sup.Id == (*(*s).Name).Sup.Id))) goto LA19;
						internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3306));
					}
					LA19: ;
					rawimportsymbol_297249(c, e);
					e = nextidentiter_234156(&it, (*frommod).kindU.S3.Tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_297249(c, s);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(tnode224819*, evalfrom_297011)(tcontext289021* c, tnode224819* n) {
	tnode224819* result;
	tsym224849* m;
	result = 0;
	result = n;
	checkminsonslen_290426(n, 2);
	m = myimportmodule_297991(c, (*n).kindU.S6.Sons->data[0]);
	{
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) &(*n).kindU.S6.Sons->data[0], newsymnode_225135(m));
		adddecl_294694(c, m);
		{
			NI i_298152;
			NI HEX3Atmp_298191;
			NI LOC6;
			NI res_298194;
			i_298152 = 0;
			HEX3Atmp_298191 = 0;
			LOC6 = 0;
			LOC6 = sonslen_225252(n);
			HEX3Atmp_298191 = (NI32)(LOC6 - 1);
			res_298194 = 1;
			{
				while (1) {
					if (!(res_298194 <= HEX3Atmp_298191)) goto LA8;
					i_298152 = res_298194;
					{
						if (!!(((*(*n).kindU.S6.Sons->data[i_298152]).Kind == ((NU8) 23)))) goto LA11;
						importsymbol_297450(c, (*n).kindU.S6.Sons->data[i_298152], m);
					}
					LA11: ;
					res_298194 += 1;
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importallsymbols_297679)(tcontext289021* c, tsym224849* frommod) {
	intset221056 exceptset;
	memset((void*)&exceptset, 0, sizeof(exceptset));
	importallsymbolsexcept_297573(c, frommod, exceptset);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_importerInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_importerDatInit)(void) {
}

