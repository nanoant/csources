/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trope121007 trope121007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode172659 tnode172659;
typedef struct tpasscontext223003 tpasscontext223003;
typedef struct tgen415011 tgen415011;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tsym172689 tsym172689;
typedef struct ttype172693 ttype172693;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tident141017 tident141017;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct tidobj141011 tidobj141011;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tloc172673 tloc172673;
typedef struct tlib172677 tlib172677;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tpass223015 tpass223015;
typedef struct trodreader212023 trodreader212023;
typedef struct TY172775 TY172775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef struct tindex212021 tindex212021;
typedef struct tiitable179211 tiitable179211;
typedef struct tiipairseq179209 tiipairseq179209;
typedef struct tiipair179207 tiipair179207;
typedef struct tidtable172705 tidtable172705;
typedef struct tidpairseq172703 tidpairseq172703;
typedef struct tidpair172701 tidpair172701;
typedef struct tmemfile210204 tmemfile210204;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef trope121007* TY180142[2];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct tpasscontext223003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tgen415011 {
  tpasscontext223003 Sup;
tsym172689* Module;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tnode172659 {
ttype172693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym172689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq172653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY172865[20];
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable172663 {
NI Counter;
tsymseq172661* Data;
};
struct tloc172673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype172693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym172689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq172691* Typeinstcache;
tscope172683* Typscope;
} S1;
struct {TY172786* Procinstcache;
tscope172683* Scope;
} S2;
struct {TY172786* Usedgenerics;
tstrtable172663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype172693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym172689* Owner;
NU32 Flags;
tnode172659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc172673 Loc;
tlib172677* Annex;
tnode172659* Constraint;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
typedef N_NIMCALL_PTR(tpasscontext223003*, tpassopen223007) (tsym172689* module);
typedef N_NIMCALL_PTR(tpasscontext223003*, tpassopencached223009) (tsym172689* module, trodreader212023* rd);
typedef N_NIMCALL_PTR(tnode172659*, tpassprocess223013) (tpasscontext223003* p, tnode172659* toplevelstmt);
typedef N_NIMCALL_PTR(tnode172659*, tpassclose223011) (tpasscontext223003* p, tnode172659* n);
struct tpass223015 {
tpassopen223007 Field0;
tpassopencached223009 Field1;
tpassprocess223013 Field2;
tpassclose223011 Field3;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct ttype172693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq172691* Sons;
tnode172659* N;
tsym172689* Destructor;
tsym172689* Owner;
tsym172689* Sym;
NI64 Size;
NI Align;
tloc172673 Loc;
};
struct tscope172683 {
NI Depthlevel;
tstrtable172663 Symbols;
tnodeseq172653* Usingsyms;
tscope172683* Parent;
};
struct tinstantiation172679 {
tsym172689* Sym;
ttypeseq172691* Concretetypes;
TY172775* Usedby;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
};
typedef NI TY21418[16];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tiipair179207 {
NI Key;
NI Val;
};
struct tiitable179211 {
NI Counter;
tiipairseq179209* Data;
};
struct tindex212021 {
NI Lastidxkey;
NI Lastidxval;
tiitable179211 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair172701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable172705 {
NI Counter;
tidpairseq172703* Data;
};
struct tmemfile210204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader212023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY172775* Moddeps;
TY172775* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex212021 Index;
tindex212021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable172705 Syms;
tmemfile210204 Memfile;
tsymseq172661* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq179209 {
  TGenericSeq Sup;
  tiipair179207 data[SEQ_DECL_SIZE];
};
struct tidpairseq172703 {
  TGenericSeq Sup;
  tidpair172701 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_415019)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_121085)(trope121007** c, NimStringDesc* frmt, trope121007** args, NI argsLen0);
N_NIMCALL(trope121007*, torope_121058)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode172659*, adddotdependency_415031)(tpasscontext223003* c, tnode172659* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NI, sonslen_173022)(tnode172659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_266012)(tnode172659* n);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_415006)(NimStringDesc* project);
N_NIMCALL(void, writerope_122407)(trope121007* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope121007*, ropef_121079)(NimStringDesc* frmt, trope121007** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(tpasscontext223003*, myopen_415114)(tsym172689* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7023)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
STRING_LITERAL(TMP7015, "$1 -> $2;$n", 11);
static NIM_CONST TY172865 TMP7016 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7017, "sons", 4);
STRING_LITERAL(TMP7020, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP7021, "", 0);
STRING_LITERAL(TMP7022, "dot", 3);
NIM_CONST tpass223015 gendependpass_415134 = {myopen_415114,
NIM_NIL,
adddotdependency_415031,
NIM_NIL}
;
trope121007* gdotgraph_415016;
extern TFrame* frameptr_12037;
extern TNimType NTI223003; /* TPassContext */
TNimType NTI415011; /* TGen */
extern TNimType NTI172657; /* PSym */
TNimType NTI415013; /* PGen */
extern tgcheap40816 gch_40844;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, adddependencyaux_415019)(NimStringDesc* importing, NimStringDesc* imported) {
	TY180142 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(25, "depends.nim");
	LOC1[0] = torope_121058(importing);
	nimln(25, "depends.nim");
	LOC1[1] = torope_121058(imported);
	appf_121085(&gdotgraph_415016, ((NimStringDesc*) &TMP7015), LOC1, 2);	popFrame();
}
static N_INLINE(NI, sonslen_173022)(tnode172659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP7016[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7017));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP7016[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7017));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(tnode172659*, adddotdependency_415031)(tpasscontext223003* c, tnode172659* n) {
	tnode172659* result;
	tgen415011* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI415011));
	g = ((tgen415011*) (c));
	nimln(31, "depends.nim");
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		NI i_415046;
		NI HEX3Atmp_415092;
		NI LOC2;
		NI TMP7018;
		NI res_415094;
		i_415046 = 0;
		HEX3Atmp_415092 = 0;
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		LOC2 = 0;
		LOC2 = sonslen_173022(n);
		TMP7018 = subInt(LOC2, 1);
		HEX3Atmp_415092 = (NI32)(TMP7018);
		nimln(1301, "system.nim");
		res_415094 = 0;
		nimln(1302, "system.nim");
		while (1) {
			NimStringDesc* imported;
			nimln(1302, "system.nim");
			if (!(res_415094 <= HEX3Atmp_415092)) goto LA3;
			nimln(1301, "system.nim");
			i_415046 = res_415094;
			nimln(34, "depends.nim");
			if (((TMP7016[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7017));
			if ((NU)(i_415046) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			imported = getmodulename_266012((*n).kindU.S6.Sons->data[i_415046]);
			nimln(35, "depends.nim");
			adddependencyaux_415019((*(*(*g).Module).Name).S, imported);			nimln(1304, "system.nim");
			res_415094 = addInt(res_415094, 1);
		} LA3: ;
	}	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP7016[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7017));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		imported = getmodulename_266012((*n).kindU.S6.Sons->data[0]);
		nimln(38, "depends.nim");
		adddependencyaux_415019((*(*(*g).Module).Name).S, imported);	}	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 125):
	case ((NU8) 126):
	{
		NI i_415080;
		NI HEX3Atmp_415096;
		NI LOC6;
		NI TMP7019;
		NI res_415098;
		i_415080 = 0;
		HEX3Atmp_415096 = 0;
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		LOC6 = 0;
		LOC6 = sonslen_173022(n);
		TMP7019 = subInt(LOC6, 1);
		HEX3Atmp_415096 = (NI32)(TMP7019);
		nimln(1301, "system.nim");
		res_415098 = 0;
		nimln(1302, "system.nim");
		while (1) {
			tnode172659* LOC8;
			nimln(1302, "system.nim");
			if (!(res_415098 <= HEX3Atmp_415096)) goto LA7;
			nimln(1301, "system.nim");
			i_415080 = res_415098;
			nimln(40, "depends.nim");
			nimln(40, "depends.nim");
			if (((TMP7016[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7017));
			if ((NU)(i_415080) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = adddotdependency_415031(c, (*n).kindU.S6.Sons->data[i_415080]);
			nimln(1304, "system.nim");
			res_415098 = addInt(res_415098, 1);
		} LA7: ;
	}	break;
	default:
	{
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(void, generatedot_415006)(NimStringDesc* project) {
	TY180142 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope121007* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP7021));
	LOC1[0] = torope_121058(LOC3);
	LOC1[1] = gdotgraph_415016;
	LOC4 = 0;
	LOC4 = ropef_121079(((NimStringDesc*) &TMP7020), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = nosChangeFileExt(project, ((NimStringDesc*) &TMP7022));
	writerope_122407(LOC4, LOC5, NIM_FALSE);	popFrame();
}N_NIMCALL(void, TMP7023)(void* p, NI op) {
	tgen415011* a;
	a = (tgen415011*)p;
	nimGCvisit((void*)(*a).Module, op);
}

static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(tpasscontext223003*, myopen_415114)(tsym172689* module) {
	tpasscontext223003* result;
	tgen415011* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (tgen415011*) newObj((&NTI415013), sizeof(tgen415011));
	(*g).Sup.Sup.m_type = (&NTI415011);
	nimln(52, "depends.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(53, "depends.nim");
	result = &g->Sup;
	popFrame();
	return result;
}N_NOINLINE(void, compilerdependsInit)(void) {
	nimfr("depends", "depends.nim")
	popFrame();
}

N_NOINLINE(void, compilerdependsDatInit)(void) {
static TNimNode TMP7013[1];
NTI415011.size = sizeof(tgen415011);
NTI415011.kind = 17;
NTI415011.base = (&NTI223003);
NTI415011.flags = 2;
TMP7013[0].kind = 1;
TMP7013[0].offset = offsetof(tgen415011, Module);
TMP7013[0].typ = (&NTI172657);
TMP7013[0].name = "module";
NTI415011.node = &TMP7013[0];
NTI415013.size = sizeof(tgen415011*);
NTI415013.kind = 22;
NTI415013.base = (&NTI415011);
NTI415013.flags = 2;
NTI415013.marker = TMP7023;
}

