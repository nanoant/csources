/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcgen545035 tcgen545035;
typedef struct tllstream212204 tllstream212204;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tidtable225867 tidtable225867;
typedef struct tidobj201015 tidobj201015;
typedef struct ttype225855 ttype225855;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct tnode225819 tnode225819;
typedef struct tsym225849 tsym225849;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct tidpairseq225865 tidpairseq225865;
typedef struct tidpair225863 tidpair225863;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc545031 tcproc545031;
typedef struct tnodetable225879 tnodetable225879;
typedef struct tnodepairseq225877 tnodepairseq225877;
typedef struct tnodepair225875 tnodepair225875;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct TY196552 TY196552;
typedef struct TY545102 TY545102;
typedef struct tblock545029 tblock545029;
typedef struct tmergesections546861 tmergesections546861;
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
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tident201021 tident201021;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tlib225837 tlib225837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY225939 TY225939;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tbaselexer214024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream212204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope178009* tcfilesections545019[18];
struct  tidpair225863  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable225867  {
NI Counter;
tidpairseq225865* Data;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair225875  {
NI H;
tnode225819* Key;
NI Val;
};
struct  tnodetable225879  {
NI Counter;
tnodepairseq225877* Data;
};
typedef trope178009* TY545138[10];
struct  tcgen545035  {
  tpasscontext286005 Sup;
tsym225849* Module;
NimStringDesc* Filename;
tcfilesections545019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable225867 Typecache;
tidtable225867 Forwtypecache;
intset222056 Declaredthings;
intset222056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset222056 Typeinfomarker;
tcproc545031* Initproc;
tcproc545031* Postinitproc;
tcproc545031* Preinitproc;
ttypeseq225851* Typestack;
tnodetable225879 Datacache;
tsymseq225821* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY545138 Extensionloaders;
trope178009* Injectstmt;
};
typedef trope178009* tcprocsections545023[3];
struct  tblock545029  {
NI Id;
trope178009* Label;
tcprocsections545023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc545031  {
tsym225849* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq225813* Nestedtrystmts;
NI Inexceptblock;
TY196552* Finallysafepoints;
NI Labels;
TY545102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen545035* Module;
NI Withinloop;
NI Gcframeid;
trope178009* Gcframetype;
};
struct  tmergesections546861  {
tcfilesections545019 F;
tcprocsections545023 P;
};
typedef NimStringDesc* TY546013[18];
typedef NimStringDesc* TY546019[3];
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
typedef NI TY26220[16];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26220 Bits;
};
struct  tllstream212204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
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
struct ttypeseq225851 {
  TGenericSeq Sup;
  ttype225855* data[SEQ_DECL_SIZE];
};
struct tidpairseq225865 {
  TGenericSeq Sup;
  tidpair225863 data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq225877 {
  TGenericSeq Sup;
  tnodepair225875 data[SEQ_DECL_SIZE];
};
struct tsymseq225821 {
  TGenericSeq Sup;
  tsym225849* data[SEQ_DECL_SIZE];
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct TY196552 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY545102 {
  TGenericSeq Sup;
  tblock545029 data[SEQ_DECL_SIZE];
};
struct TY225950 {
  TGenericSeq Sup;
  tinstantiation225839* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_214035)(tbaselexer214024* l, tllstream212204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_546402)(tbaselexer214024* l);
N_NIMCALL(NI, handlecr_214066)(tbaselexer214024* l, NI pos);
N_NIMCALL(NI, handlelf_214074)(tbaselexer214024* l, NI pos);
N_NIMCALL(void, readkey_546535)(tbaselexer214024* l, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_198989)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_546711)(tbaselexer214024* l, tcgen545035* m);
N_NIMCALL(void, skipwhite_546372)(tbaselexer214024* l);
N_NIMCALL(void, readtypecache_546607)(tbaselexer214024* l, tidtable225867* result);
N_NIMCALL(NI, decodevint_234359)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_234155)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_235196)(tidtable225867* t, tidobj201015* key, TNimObject* val);
N_NIMCALL(ttype225855*, newfaketype_546581)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(trope178009*, torope_178076)(NimStringDesc* s);
N_NIMCALL(void, readintset_546666)(tbaselexer214024* l, intset222056* result);
N_NIMCALL(void, incl_222869)(intset222056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_214045)(tbaselexer214024* l);
static N_INLINE(trope178009**, s_545183)(tcproc545031* p, NU8 s);
N_NIMCALL(void, readmergesections_546867)(NimStringDesc* cfilename, tmergesections546861* m);
N_NIMCALL(trope178009*, readverbatimsection_546489)(tbaselexer214024* l);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_546456)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_546914)(TY546013 a_546919, NimStringDesc* item_546921);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_547017)(TY546019 a_547022, NimStringDesc* item_547024);
N_NIMCALL(trope178009*, con_178024)(trope178009* a, trope178009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void, app_178060)(trope178009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_546224)(tidtable225867 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_234304)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_234042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, ropetostr_178101)(trope178009* p);
N_NIMCALL(void, writeintset_546271)(intset222056 a, NimStringDesc** s);
STRING_LITERAL(TMP4032, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4033, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4034, "typeCache", 9);
STRING_LITERAL(TMP4035, "declared", 8);
STRING_LITERAL(TMP4036, "typeInfo", 8);
STRING_LITERAL(TMP4037, "labels", 6);
STRING_LITERAL(TMP4038, "hasframe", 8);
STRING_LITERAL(TMP4039, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4040, "ccgmerge: unkown key: ", 22);
STRING_LITERAL(TMP4111, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4112, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4113, "", 0);
STRING_LITERAL(TMP4114, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4115, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4116, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4117, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4118, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4119, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4120, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4121, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4122, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4123, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4124, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4125, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4126, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4127, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4128, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4129, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4130, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY546013 cfilesectionnames_546012 = {((NimStringDesc*) &TMP4113),
((NimStringDesc*) &TMP4114),
((NimStringDesc*) &TMP4115),
((NimStringDesc*) &TMP4116),
((NimStringDesc*) &TMP4117),
((NimStringDesc*) &TMP4118),
((NimStringDesc*) &TMP4119),
((NimStringDesc*) &TMP4120),
((NimStringDesc*) &TMP4121),
((NimStringDesc*) &TMP4122),
((NimStringDesc*) &TMP4123),
((NimStringDesc*) &TMP4124),
((NimStringDesc*) &TMP4125),
((NimStringDesc*) &TMP4126),
((NimStringDesc*) &TMP4127),
((NimStringDesc*) &TMP4128),
((NimStringDesc*) &TMP4129),
((NimStringDesc*) &TMP4130)}
;
STRING_LITERAL(TMP4131, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4132, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4133, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY546019 cprocsectionnames_546018 = {((NimStringDesc*) &TMP4131),
((NimStringDesc*) &TMP4132),
((NimStringDesc*) &TMP4133)}
;
STRING_LITERAL(TMP4134, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4135, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4140, "/*\011", 3);
STRING_LITERAL(TMP4141, ":*/", 3);
STRING_LITERAL(TMP4151, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4152, "typeCache:{", 11);
STRING_LITERAL(TMP4153, "declared:{", 10);
STRING_LITERAL(TMP4154, "typeInfo:{", 10);
STRING_LITERAL(TMP4155, "labels:", 7);
STRING_LITERAL(TMP4156, " hasframe:", 10);
STRING_LITERAL(TMP4157, "*/", 2);
extern TNimType NTI214024; /* TBaseLexer */
extern TNimType NTI225815; /* PType */
extern TNimType NTI225855; /* TType */
extern NimStringDesc* tnl_175613;
extern tgcheap46816 gch_46844;
extern NU32 gglobaloptions_170118;

N_NIMCALL(void, skipuntilcmd_546402)(tbaselexer214024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_214066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_214074(l, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*l).Buf[(NI32)(pos + 1)]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*l).Buf[(NI32)(pos + 2)]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += 3;
					goto LA1;
				}
				LA11: ;
				pos += 1;
			}
			break;
			default:
			{
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(void, readkey_546535)(tbaselexer214024* l, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	(*result) = setLengthStr((*result), 0);
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += 1;
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_198989(((NimStringDesc*) &TMP4032));
	}
	LA5: ;
	(*l).Bufpos = (NI32)(pos + 1);
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

N_NIMCALL(void, skipwhite_546372)(tbaselexer214024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_214066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_214074(l, pos);
			}
			break;
			case 32:
			{
				pos += 1;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(ttype225855*, newfaketype_546581)(NI id) {
	ttype225855* result;
	result = 0;
	result = (ttype225855*) newObj((&NTI225815), sizeof(ttype225855));
	(*result).Sup.Sup.m_type = (&NTI225855);
	(*result).Sup.Id = id;
	return result;
}

N_NIMCALL(void, readtypecache_546607)(tbaselexer214024* l, tidtable225867* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_198989(((NimStringDesc*) &TMP4039));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			ttype225855* LOC11;
			trope178009* LOC12;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_546372(l);
			key = decodevint_234359((*l).Buf, &(*l).Bufpos);
			{
				if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_198989(((NimStringDesc*) &TMP4032));
			}
			LA9: ;
			(*l).Bufpos += 1;
			value = decodestr_234155((*l).Buf, &(*l).Bufpos);
			LOC11 = 0;
			LOC11 = newfaketype_546581(key);
			LOC12 = 0;
			LOC12 = torope_178076(value);
			idtableput_235196(result, &LOC11->Sup, &LOC12->Sup);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

N_NIMCALL(void, readintset_546666)(tbaselexer214024* l, intset222056* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_198989(((NimStringDesc*) &TMP4039));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_546372(l);
			key = decodevint_234359((*l).Buf, &(*l).Bufpos);
			incl_222869(result, key);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_546711)(tbaselexer214024* l, tcgen545035* m) {
	NimStringDesc* k;
	k = rawNewString(9);
	{
		while (1) {
			skipwhite_546372(l);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*l).Buf[(NI32)((*l).Bufpos + 1)]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*l).Bufpos += 2;
				goto LA1;
			}
			LA7: ;
			readkey_546535(l, &k);
			if (eqStrings(k, ((NimStringDesc*) &TMP4034))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4035))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4036))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4037))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4038))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_546607(l, &(*m).Typecache);
			}
			goto LA15;
			LA10: ;
			{
				readintset_546666(l, &(*m).Declaredthings);
			}
			goto LA15;
			LA11: ;
			{
				readintset_546666(l, &(*m).Typeinfomarker);
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_234359((*l).Buf, &(*l).Bufpos);
				(*m).Labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_234359((*l).Buf, &(*l).Bufpos);
				(*m).Framedeclared = !((LOC22 == 0));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 22);
appendString(LOC24, ((NimStringDesc*) &TMP4040));
appendString(LOC24, k);
				internalerror_198989(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_546815)(NimStringDesc* cfilename, tcgen545035* m) {
	tllstream212204* s_546820;
	tbaselexer214024 l;
	NimStringDesc* k;
	s_546820 = llstreamopen_212233(cfilename, ((NU8) 0));
	{
		if (!(s_546820 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.m_type = (&NTI214024);
	openbaselexer_214035(&l, s_546820, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_546402(&l);
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_546535(&l, &k);
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4033))) goto LA13;
				processmergeinfo_546711(&l, m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_214045(&l);
	BeforeRet: ;
}

static N_INLINE(trope178009**, s_545183)(tcproc545031* p, NU8 s) {
	trope178009** result;
	result = 0;
	result = &(*p).Blocks->data[(NI32)((*p).Blocks->Sup.len - 1)].Sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_547137)(tcgen545035* m) {
	NIM_BOOL result;
	result = 0;
	{
		NU8 i_547185;
		NU8 res_547270;
		i_547185 = 0;
		res_547270 = ((NU8) 1);
		{
			while (1) {
				if (!(res_547270 <= ((NU8) 10))) goto LA3;
				i_547185 = res_547270;
				{
					if (!!(((*m).S[(i_547185)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_547270 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_547249;
		NU8 res_547277;
		i_547249 = 0;
		res_547277 = ((NU8) 0);
		{
			while (1) {
				if (!(res_547277 <= ((NU8) 2))) goto LA10;
				i_547249 = res_547277;
				{
					trope178009** LOC13;
					LOC13 = 0;
					LOC13 = s_545183((*m).Initproc, i_547249);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_547277 += 1;
			} LA10: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_546456)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < 19);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI32)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4112)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += 1;
		} LA2: ;
	}
	result = (s == 19);
	return result;
}

N_NIMCALL(trope178009*, readverbatimsection_546489)(tbaselexer214024* l) {
	trope178009* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	r = rawNewString(30000);
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_214066(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_175613->Sup.len + 0);
appendString(r, tnl_175613);
			}
			break;
			case 10:
			{
				pos = handlelf_214074(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_175613->Sup.len + 0);
appendString(r, tnl_175613);
			}
			break;
			case 0:
			{
				internalerror_198989(((NimStringDesc*) &TMP4111));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_546456(buf, pos);
					if (!LOC9) goto LA10;
					pos += 19;
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
	result = torope_178076(r);
	return result;
}

static N_INLINE(NI, find_546914)(TY546013 a_546919, NimStringDesc* item_546921) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_546983;
		NU8 i_546999;
		i_546983 = 0;
		i_546999 = ((NU8) 0);
		{
			if (!(i_546999 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_546983 = a_546919[(i_546999)- 0];
					{
						if (!eqStrings(i_546983, item_546921)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 17) <= i_546999)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_546999 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_547017)(TY546019 a_547022, NimStringDesc* item_547024) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_547086;
		NU8 i_547102;
		i_547086 = 0;
		i_547102 = ((NU8) 0);
		{
			if (!(i_547102 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_547086 = a_547022[(i_547102)- 0];
					{
						if (!eqStrings(i_547086, item_547024)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 2) <= i_547102)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_547102 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_546867)(NimStringDesc* cfilename, tmergesections546861* m) {
	tllstream212204* s_546873;
	tbaselexer214024 l;
	NimStringDesc* k;
	s_546873 = llstreamopen_212233(cfilename, ((NU8) 0));
	{
		if (!(s_546873 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.m_type = (&NTI214024);
	openbaselexer_214035(&l, s_546873, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_546402(&l);
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_546535(&l, &k);
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4033))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				trope178009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(l.Buf[l.Bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(l.Buf[(NI32)(l.Bufpos + 1)]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				l.Bufpos += 2;
				skipwhite_546372(&l);
				verbatim = readverbatimsection_546489(&l);
				skipwhite_546372(&l);
				sectiona = find_546914(cfilesectionnames_546012, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (0 < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= 17);
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) &(*m).F[(sectiona)- 0], verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_547017(cprocsectionnames_546018, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (0 <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= 2);
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) &(*m).P[(sectionb)- 0], verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4134));
appendString(LOC34, k);
						internalerror_198989(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_198989(((NimStringDesc*) &TMP4135));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_214045(&l);
	BeforeRet: ;
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

N_NIMCALL(void, mergefiles_547303)(NimStringDesc* cfilename, tcgen545035* m) {
	tmergesections546861 old;
	memset((void*)&old, 0, sizeof(old));
	readmergesections_546867(cfilename, &old);
	{
		NU8 i_547321;
		NU8 res_547345;
		i_547321 = 0;
		res_547345 = ((NU8) 0);
		{
			while (1) {
				if (!(res_547345 <= ((NU8) 17))) goto LA3;
				i_547321 = res_547345;
				asgnRefNoCycle((void**) &(*m).S[(i_547321)- 0], con_178024(old.F[(i_547321)- 0], (*m).S[(i_547321)- 0]));
				res_547345 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_547336;
		NU8 res_547352;
		i_547336 = 0;
		res_547352 = ((NU8) 0);
		{
			while (1) {
				trope178009** LOC7;
				trope178009** LOC8;
				if (!(res_547352 <= ((NU8) 2))) goto LA6;
				i_547336 = res_547352;
				LOC7 = 0;
				LOC7 = s_545183((*m).Initproc, i_547336);
				LOC8 = 0;
				LOC8 = s_545183((*m).Initproc, i_547336);
				unsureAsgnRef((void**) &(*LOC7), con_178024(old.P[(i_547336)- 0], (*LOC8)));
				res_547352 += 1;
			} LA6: ;
		}
	}
}

N_NIMCALL(trope178009*, gensectionstart_546126)(NU8 ps) {
	trope178009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		result = torope_178076(tnl_175613);
		app_178060(&result, ((NimStringDesc*) &TMP4140));
		app_178060(&result, cprocsectionnames_546018[(ps)- 0]);
		app_178060(&result, ((NimStringDesc*) &TMP4141));
		app_178060(&result, tnl_175613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope178009*, gensectionend_546177)(NU8 ps) {
	trope178009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_175613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4112));
appendString(LOC5, tnl_175613);
		result = torope_178076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope178009*, gensectionstart_546028)(NU8 fs) {
	trope178009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		result = torope_178076(tnl_175613);
		app_178060(&result, ((NimStringDesc*) &TMP4140));
		app_178060(&result, cfilesectionnames_546012[(fs)- 0]);
		app_178060(&result, ((NimStringDesc*) &TMP4141));
		app_178060(&result, tnl_175613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope178009*, gensectionend_546079)(NU8 fs) {
	trope178009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_175613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4112));
appendString(LOC5, tnl_175613);
		result = torope_178076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_546224)(tidtable225867 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI id_546230;
		TNimObject* value_546231;
		id_546230 = 0;
		value_546231 = 0;
		{
			NI i_546248;
			NI HEX3Atmp_546250;
			NI res_546252;
			i_546248 = 0;
			HEX3Atmp_546250 = 0;
			HEX3Atmp_546250 = (a.Data->Sup.len-1);
			res_546252 = 0;
			{
				while (1) {
					if (!(res_546252 <= HEX3Atmp_546250)) goto LA4;
					i_546248 = res_546252;
					{
						NimStringDesc* LOC14;
						if (!!((a.Data->data[i_546248].Key == NIM_NIL))) goto LA7;
						id_546230 = (*a.Data->data[i_546248].Key).Id;
						value_546231 = a.Data->data[i_546248].Val;
						{
							if (!(i == 10)) goto LA11;
							i = 0;
							(*s) = resizeString((*s), tnl_175613->Sup.len + 0);
appendString((*s), tnl_175613);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_234304(id_546230, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = ropetostr_178101(((trope178009*) (value_546231)));
						encodestr_234042(LOC14, s);
						i += 1;
					}
					LA7: ;
					res_546252 += 1;
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_546271)(intset222056 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI x_546277;
		ttrunk222052* r_546295;
		x_546277 = 0;
		r_546295 = a.Head;
		{
			while (1) {
				NI i_546297;
				if (!!((r_546295 == NIM_NIL))) goto LA3;
				i_546297 = 0;
				{
					while (1) {
						NI w_546299;
						NI j_546301;
						if (!(i_546297 <= 15)) goto LA5;
						w_546299 = (*r_546295).Bits[(i_546297)- 0];
						j_546301 = 0;
						{
							while (1) {
								if (!!((w_546299 == 0))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_546299 & 1))) == 0))) goto LA10;
									x_546277 = (NI)((NI)((NU32)((*r_546295).Key) << (NU32)(9)) | (NI)((NU32)((NI)((NU32)(i_546297) << (NU32)(5))) + (NU32)(j_546301)));
									{
										if (!(i == 10)) goto LA14;
										i = 0;
										(*s) = resizeString((*s), tnl_175613->Sup.len + 0);
appendString((*s), tnl_175613);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_234304(x_546277, s);
									i += 1;
								}
								LA10: ;
								j_546301 += 1;
								w_546299 = (NI)((NU32)(w_546299) >> (NU32)(1));
							} LA7: ;
						}
						i_546297 += 1;
					} LA5: ;
				}
				r_546295 = (*r_546295).Next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(trope178009*, genmergeinfo_546329)(tcgen545035* m) {
	trope178009* result;
	NimStringDesc* s;
	result = 0;
	{
		if (!!(((gglobaloptions_170118 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4151));
	s = resizeString(s, tnl_175613->Sup.len + 0);
appendString(s, tnl_175613);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4152));
	writetypecache_546224((*m).Typecache, &s);
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4153));
	writeintset_546271((*m).Declaredthings, &s);
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4154));
	writeintset_546271((*m).Typeinfomarker, &s);
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4155));
	encodevint_234304(((NI) ((*m).Labels)), &s);
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4156));
	encodevint_234304(((NI) ((*m).Framedeclared)), &s);
	s = resizeString(s, tnl_175613->Sup.len + 0);
appendString(s, tnl_175613);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4157));
	result = torope_178076(s);
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeDatInit)(void) {
}

