/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsym224849 tsym224849;
typedef struct tnode224819 tnode224819;
typedef struct tpass285017 tpass285017;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct trodreader275030 trodreader275030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tllstream211204 tllstream211204;
typedef struct tparsers258035 tparsers258035;
typedef struct tparser243205 tparser243205;
typedef struct tlexer215186 tlexer215186;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct ttoken215184 ttoken215184;
typedef struct tident200021 tident200021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct ttype224855 ttype224855;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tlib224837 tlib224837;
typedef struct TY119608 TY119608;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct TY511908 TY511908;
typedef struct TY224939 TY224939;
typedef struct tindex275028 tindex275028;
typedef struct tiitable234274 tiitable234274;
typedef struct tiipairseq234272 tiipairseq234272;
typedef struct tiipair234270 tiipair234270;
typedef struct tidtable224867 tidtable224867;
typedef struct tidpairseq224865 tidpairseq224865;
typedef struct tidpair224863 tidpair224863;
typedef struct memfile273208 memfile273208;
typedef struct tlistentry127022 tlistentry127022;
typedef N_NIMCALL_PTR(tsym224849*, TY285064) (tsym224849* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode224819*, TY285069) (tsym224849* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tpasscontext285005*, tpassopen285009) (tsym224849* module);
typedef N_NIMCALL_PTR(tpasscontext285005*, tpassopencached285011) (tsym224849* module, trodreader275030* rd);
typedef N_NIMCALL_PTR(tnode224819*, tpassprocess285015) (tpasscontext285005* p, tnode224819* toplevelstmt);
typedef N_NIMCALL_PTR(tnode224819*, tpassclose285013) (tpasscontext285005* p, tnode224819* n);
struct tpass285017 {
tpassopen285009 Field0;
tpassopencached285011 Field1;
tpassprocess285015 Field2;
tpassclose285013 Field3;
};
typedef tpass285017 TY285197[10];
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
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer213024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream211204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer215186  {
  tbaselexer213024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  ttoken215184  {
NU8 Toktype;
NI Indent;
tident200021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser243205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer215186 Lex;
ttoken215184 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers258035  {
NU8 Skin;
tparser243205 Parser;
};
typedef tpasscontext285005* tpasscontextarray285192[10];
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct TY511908 {
tnode224819* Field0;
tnode224819* Field1;
};
struct  tiipair234270  {
NI Key;
NI Val;
};
struct  tiitable234274  {
NI Counter;
tiipairseq234272* Data;
};
struct  tindex275028  {
NI Lastidxkey;
NI Lastidxval;
tiitable234274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair224863  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable224867  {
NI Counter;
tidpairseq224865* Data;
};
struct  memfile273208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader275030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY224939* Moddeps;
TY224939* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex275028 Index;
tindex275028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable224867 Syms;
memfile273208 Memfile;
tsymseq224821* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct TY119608 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq234272 {
  TGenericSeq Sup;
  tiipair234270 data[SEQ_DECL_SIZE];
};
struct tidpairseq224865 {
  TGenericSeq Sup;
  tidpair224863 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_285326)(tpasscontext285005** a, tsym224849* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_258047)(tparsers258035* p, NI32 fileidx, tllstream211204* inputstream);
N_NIMCALL(void, processimplicits_285643)(TY119608* implicits, NU8 nodekind, tpasscontext285005** a);
N_NIMCALL(tnode224819*, newnodei_225141)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(tnode224819*, newstrnode_225121)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_225290)(tnode224819* father, tnode224819* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_285483)(tnode224819* n, tpasscontext285005** a);
N_NIMCALL(tnode224819*, parsetoplevelstmt_258070)(tparsers258035* p);
N_NIMCALL(void, closeparsers_258056)(tparsers258035* p);
N_NIMCALL(void, closepasses_285436)(tpasscontext285005** a);
N_NIMCALL(void, idsynchronizationpoint_223458)(NI idrange);
N_NIMCALL(void, openpassescached_285372)(tpasscontext285005** a, tsym224849* module, trodreader275030* rd);
N_NIMCALL(tnode224819*, loadinitsection_275077)(trodreader275030* r);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(void, processtoplevelstmtcached_285542)(tnode224819* n, tpasscontext285005** a);
N_NIMCALL(void, closepassescached_285589)(tpasscontext285005** a);
N_NIMCALL(void, carrypass_285235)(tpass285017* p, tsym224849* module, TY511908 m, TY511908* Result);
TY285064 gimportmodule_285068;
TY285069 gincludefile_285073;
TY285197 gpasses_285199;
NI gpasseslen_285200;
extern TNimType NTI3211; /* RootObj */
TNimType NTI285005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI258035; /* TParsers */
extern tlineinfo195539 gcmdlineinfo_196191;
extern TY119608* implicitimports_169282;
extern TY119608* implicitincludes_169304;

N_NIMCALL(void, openpasses_285326)(tpasscontext285005** a, tsym224849* module) {
	{
		NI i_285343;
		NI HEX3Atmp_285352;
		NI res_285355;
		i_285343 = 0;
		HEX3Atmp_285352 = 0;
		HEX3Atmp_285352 = (NI64)(gpasseslen_285200 - 1);
		res_285355 = 0;
		{
			while (1) {
				if (!(res_285355 <= HEX3Atmp_285352)) goto LA3;
				i_285343 = res_285355;
				{
					if (!!(gpasses_285199[(i_285343)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) &a[(i_285343)- 0], gpasses_285199[(i_285343)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) &a[(i_285343)- 0], NIM_NIL);
				}
				LA4: ;
				res_285355 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_285483)(tnode224819* n, tpasscontext285005** a) {
	NIM_BOOL result;
	tnode224819* m;
	result = 0;
	m = n;
	{
		NI i_285502;
		NI HEX3Atmp_285522;
		NI res_285525;
		i_285502 = 0;
		HEX3Atmp_285522 = 0;
		HEX3Atmp_285522 = (NI64)(gpasseslen_285200 - 1);
		res_285525 = 0;
		{
			while (1) {
				if (!(res_285525 <= HEX3Atmp_285522)) goto LA3;
				i_285502 = res_285525;
				{
					if (!!(gpasses_285199[(i_285502)- 0].Field2 == 0)) goto LA6;
					m = gpasses_285199[(i_285502)- 0].Field2(a[(i_285502)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_285525 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_285643)(TY119608* implicits, NU8 nodekind, tpasscontext285005** a) {
	{
		NimStringDesc* module_285662;
		NI i_285668;
		NI l_285670;
		module_285662 = 0;
		i_285668 = 0;
		l_285670 = implicits->Sup.len;
		{
			while (1) {
				tnode224819* importstmt;
				tnode224819* str;
				if (!(i_285668 < l_285670)) goto LA3;
				module_285662 = implicits->data[i_285668];
				importstmt = newnodei_225141(nodekind, gcmdlineinfo_196191);
				str = newstrnode_225121(((NU8) 20), module_285662);
				(*str).Info = gcmdlineinfo_196191;
				addson_225290(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_285483(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_285668 += 1;
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_285436)(tpasscontext285005** a) {
	tnode224819* m;
	m = NIM_NIL;
	{
		NI i_285453;
		NI HEX3Atmp_285463;
		NI res_285466;
		i_285453 = 0;
		HEX3Atmp_285463 = 0;
		HEX3Atmp_285463 = (NI64)(gpasseslen_285200 - 1);
		res_285466 = 0;
		{
			while (1) {
				if (!(res_285466 <= HEX3Atmp_285463)) goto LA3;
				i_285453 = res_285466;
				{
					if (!!(gpasses_285199[(i_285453)- 0].Field3 == 0)) goto LA6;
					m = gpasses_285199[(i_285453)- 0].Field3(a[(i_285453)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) &a[(i_285453)- 0], NIM_NIL);
				res_285466 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_285372)(tpasscontext285005** a, tsym224849* module, trodreader275030* rd) {
	{
		NI i_285390;
		NI HEX3Atmp_285416;
		NI res_285419;
		i_285390 = 0;
		HEX3Atmp_285416 = 0;
		HEX3Atmp_285416 = (NI64)(gpasseslen_285200 - 1);
		res_285419 = 0;
		{
			while (1) {
				if (!(res_285419 <= HEX3Atmp_285416)) goto LA3;
				i_285390 = res_285419;
				{
					if (!!(gpasses_285199[(i_285390)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) &a[(i_285390)- 0], gpasses_285199[(i_285390)- 0].Field1(module, rd));
					{
						if (!!((a[(i_285390)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_285390)- 0]).Fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) &a[(i_285390)- 0], NIM_NIL);
				}
				LA4: ;
				res_285419 += 1;
			} LA3: ;
		}
	}
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

N_NIMCALL(void, processtoplevelstmtcached_285542)(tnode224819* n, tpasscontext285005** a) {
	tnode224819* m;
	m = n;
	{
		NI i_285560;
		NI HEX3Atmp_285569;
		NI res_285572;
		i_285560 = 0;
		HEX3Atmp_285569 = 0;
		HEX3Atmp_285569 = (NI64)(gpasseslen_285200 - 1);
		res_285572 = 0;
		{
			while (1) {
				if (!(res_285572 <= HEX3Atmp_285569)) goto LA3;
				i_285560 = res_285572;
				{
					if (!!(gpasses_285199[(i_285560)- 0].Field1 == 0)) goto LA6;
					m = gpasses_285199[(i_285560)- 0].Field2(a[(i_285560)- 0], m);
				}
				LA6: ;
				res_285572 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_285589)(tpasscontext285005** a) {
	tnode224819* m;
	m = NIM_NIL;
	{
		NI i_285606;
		NI HEX3Atmp_285623;
		NI res_285626;
		i_285606 = 0;
		HEX3Atmp_285623 = 0;
		HEX3Atmp_285623 = (NI64)(gpasseslen_285200 - 1);
		res_285626 = 0;
		{
			while (1) {
				if (!(res_285626 <= HEX3Atmp_285623)) goto LA3;
				i_285606 = res_285626;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_285199[(i_285606)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_285199[(i_285606)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_285199[(i_285606)- 0].Field3(a[(i_285606)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) &a[(i_285606)- 0], NIM_NIL);
				res_285626 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_285056)(tsym224849* module, tllstream211204* stream, trodreader275030* rd) {
	tparsers258035 p;
	tpasscontextarray285192 a;
	tllstream211204* s;
	NI32 fileidx;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI258035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).Position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_285326(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpath_197037(fileidx);
			s = llstreamopen_211233(filename, ((NU8) 0));
			{
				if (!(s == NIM_NIL)) goto LA11;
				rawmessage_197733(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_258047(&p, fileidx, s);
				{
					if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA18;
					processimplicits_285643(implicitimports_169282, ((NU8) 115), a);
					processimplicits_285643(implicitincludes_169304, ((NU8) 120), a);
				}
				LA18: ;
				{
					while (1) {
						tnode224819* n;
						n = parsetoplevelstmt_258070(&p);
						{
							if (!((*n).Kind == ((NU8) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							NIM_BOOL LOC28;
							LOC28 = 0;
							LOC28 = processtoplevelstmt_285483(n, a);
							if (!!(LOC28)) goto LA29;
							goto LA20;
						}
						LA29: ;
					}
				} LA20: ;
				closeparsers_258056(&p);
				{
					if (!!(((*s).Kind == ((NU8) 3)))) goto LA33;
					goto LA14;
				}
				LA33: ;
			}
		} LA14: ;
		closepasses_285436(a);
		idsynchronizationpoint_223458(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode224819* n;
		openpassescached_285372(a, module, rd);
		n = loadinitsection_275077(rd);
		{
			NI i_285802;
			NI HEX3Atmp_285825;
			NI LOC37;
			NI res_285828;
			i_285802 = 0;
			HEX3Atmp_285825 = 0;
			LOC37 = 0;
			LOC37 = sonslen_225252(n);
			HEX3Atmp_285825 = (NI64)(LOC37 - 1);
			res_285828 = 0;
			{
				while (1) {
					if (!(res_285828 <= HEX3Atmp_285825)) goto LA39;
					i_285802 = res_285828;
					processtoplevelstmtcached_285542((*n).kindU.S6.Sons->data[i_285802], a);
					res_285828 += 1;
				} LA39: ;
			}
		}
		closepassescached_285589(a);
	}
	LA1: ;
	BeforeRet: ;
}

N_NIMCALL(void, clearpasses_285206)(void) {
	gpasseslen_285200 = 0;
}

N_NIMCALL(void, registerpass_285214)(tpass285017* p) {
	gpasses_285199[(gpasseslen_285200)- 0] = (*p);
	gpasseslen_285200 += 1;
}

N_NIMCALL(NIM_BOOL, astneeded_285094)(tsym224849* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_285235)(tpass285017* p, tsym224849* module, TY511908 m, TY511908* Result) {
	tpasscontext285005* c;
	c = (*p).Field0(module);
	unsureAsgnRef((void**) &(*Result).Field0, (*p).Field2(c, m.Field0));
	{
		if (!!(((*p).Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) &(*Result).Field1, (*p).Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_285257)(tnode224819* nodes, tsym224849* module, tpass285017* passes, NI passesLen0) {
	TY511908 passdata;
	memset((void*)&passdata, 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		tpass285017 pass_285305;
		NI i_285310;
		memset((void*)&pass_285305, 0, sizeof(pass_285305));
		i_285310 = 0;
		{
			while (1) {
				TY511908 LOC4;
				if (!(i_285310 < passesLen0)) goto LA3;
				pass_285305 = passes[i_285310];
				memset((void*)&LOC4, 0, sizeof(LOC4));
				carrypass_285235(&pass_285305, module, passdata, &LOC4);
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_285310 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_passesDatInit)(void) {
static TNimNode TMP830[1];
NTI285005.size = sizeof(tpasscontext285005);
NTI285005.kind = 17;
NTI285005.base = (&NTI3211);
NTI285005.flags = 1;
TMP830[0].kind = 1;
TMP830[0].offset = offsetof(tpasscontext285005, Fromcache);
TMP830[0].typ = (&NTI138);
TMP830[0].name = "fromCache";
NTI285005.node = &TMP830[0];
}

