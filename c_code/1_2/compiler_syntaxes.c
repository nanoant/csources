/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode173659 tnode173659;
typedef struct tparsers199026 tparsers199026;
typedef struct tparser187203 tparser187203;
typedef struct tlexer166166 tlexer166166;
typedef struct tbaselexer164018 tbaselexer164018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream163204 tllstream163204;
typedef struct ttoken166164 ttoken166164;
typedef struct tident141017 tident141017;
typedef struct tidobj141011 tidobj141011;
typedef struct ttype173693 ttype173693;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tsym173689 tsym173689;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct tloc173673 tloc173673;
typedef struct trope122007 trope122007;
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tsymseq173661 tsymseq173661;
typedef struct tlib173677 tlib173677;
typedef struct TY173775 TY173775;
typedef struct tlistentry110014 tlistentry110014;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY199015[3];
typedef NimStringDesc* TY199020[4];
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
struct TNimObject {
TNimType* m_type;
};
struct tbaselexer164018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream163204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer166166 {
  tbaselexer164018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken166164 {
NU8 Toktype;
NI Indent;
tident141017* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser187203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer166166 Lex;
ttoken166164 Tok;
};
struct tparsers199026 {
NU8 Skin;
tparser187203 Parser;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tnode173659 {
ttype173693* Typ;
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
struct {tsym173689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq173653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY173865[20];
typedef NimStringDesc* TY150228[1];
struct tllstream163204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct tloc173673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173693* T;
trope122007* R;
trope122007* Heaproot;
NI A;
};
struct ttype173693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq173691* Sons;
tnode173659* N;
tsym173689* Destructor;
tsym173689* Owner;
tsym173689* Sym;
NI64 Size;
NI Align;
tloc173673 Loc;
};
struct tstrtable173663 {
NI Counter;
tsymseq173661* Data;
};
struct tsym173689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq173691* Typeinstcache;
tscope173683* Typscope;
} S1;
struct {TY173786* Procinstcache;
tscope173683* Scope;
} S2;
struct {TY173786* Usedgenerics;
tstrtable173663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype173693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym173689* Owner;
NU32 Flags;
tnode173659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc173673 Loc;
tlib173677* Annex;
tnode173659* Constraint;
};
struct trope122007 {
  TNimObject Sup;
trope122007* Left;
trope122007* Right;
NI Length;
NimStringDesc* Data;
};
struct tscope173683 {
NI Depthlevel;
tstrtable173663 Symbols;
tnodeseq173653* Usingsyms;
tscope173683* Parent;
};
struct tinstantiation173679 {
tsym173689* Sym;
ttypeseq173691* Concretetypes;
TY173775* Usedby;
};
struct tlistentry110014 {
  TNimObject Sup;
tlistentry110014* Prev;
tlistentry110014* Next;
};
struct tlib173677 {
  tlistentry110014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope122007* Name;
tnode173659* Path;
};
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct ttypeseq173691 {
  TGenericSeq Sup;
  ttype173693* data[SEQ_DECL_SIZE];
};
struct TY173786 {
  TGenericSeq Sup;
  tinstantiation173679* data[SEQ_DECL_SIZE];
};
struct tsymseq173661 {
  TGenericSeq Sup;
  tsym173689* data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode173659*, parsefile_199030)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_138708)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_139191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream163204*, llstreamopen_163222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode173659*, parseall_199046)(tparsers199026* p);
N_NIMCALL(tnode173659*, parseall_187209)(tparser187203* p);
N_NIMCALL(tnode173659*, parseall_190005)(tparser187203* p);
N_NIMCALL(void, internalerror_139383)(NimStringDesc* errmsg);
N_NIMCALL(tnode173659*, parsetoplevelstmt_199051)(tparsers199026* p);
N_NIMCALL(tnode173659*, parsetoplevelstmt_187226)(tparser187203* p);
N_NIMCALL(tnode173659*, parsetoplevelstmt_190012)(tparser187203* p);
N_NIMCALL(NI, utf8bom_199091)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_199097)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode173659*, parsepipe_199126)(NimStringDesc* filename, tllstream163204* inputstream);
N_NIMCALL(tllstream163204*, llstreamopen_163227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_163248)(tllstream163204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_187214)(tparser187203* p, NimStringDesc* filename, tllstream163204* inputstream);
N_NIMCALL(tllstream163204*, llstreamopen_163218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_187221)(tparser187203* p);
N_NIMCALL(void, llstreamclose_163238)(tllstream163204* s);
N_NIMCALL(NU8, getfilter_199187)(tident141017* ident);
N_NIMCALL(NIM_BOOL, identeq_141456)(tident141017* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_199234)(tident141017* ident);
N_NIMCALL(tident141017*, getcallee_199281)(tnode173659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_191048)(tnode173659* n, NU8 renderflags);
N_NIMCALL(tllstream163204*, applyfilter_199357)(tparsers199026* p, tnode173659* n, NimStringDesc* filename, tllstream163204* stdin_199363);
N_NIMCALL(tllstream163204*, filtertmpl_198006)(tllstream163204* stdin_198008, NimStringDesc* filename, tnode173659* call);
N_NIMCALL(tllstream163204*, filterstrip_197008)(tllstream163204* stdin_197010, NimStringDesc* filename, tnode173659* call);
N_NIMCALL(tllstream163204*, filterreplace_197002)(tllstream163204* stdin_197004, NimStringDesc* filename, tnode173659* call);
N_NIMCALL(void, rawmessage_139121)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_138839)(NimStringDesc* s);
N_NIMCALL(tllstream163204*, evalpipe_199391)(tparsers199026* p, tnode173659* n, NimStringDesc* filename, tllstream163204* start);
N_NIMCALL(void, openparsers_199034)(tparsers199026* p, NI32 fileidx, tllstream163204* inputstream);
N_NIMCALL(void, openparser_187360)(tparser187203* p, NI32 fileidx, tllstream163204* inputstream);
N_NIMCALL(void, closeparsers_199041)(tparsers199026* p);
STRING_LITERAL(TMP2611, "standard", 8);
STRING_LITERAL(TMP2612, "braces", 6);
STRING_LITERAL(TMP2613, "endx", 4);
NIM_CONST TY199015 parsernames_199014 = {((NimStringDesc*) &TMP2611),
((NimStringDesc*) &TMP2612),
((NimStringDesc*) &TMP2613)}
;
STRING_LITERAL(TMP2614, "none", 4);
STRING_LITERAL(TMP2615, "stdtmpl", 7);
STRING_LITERAL(TMP2616, "replace", 7);
STRING_LITERAL(TMP2617, "strip", 5);
NIM_CONST TY199020 filternames_199019 = {((NimStringDesc*) &TMP2614),
((NimStringDesc*) &TMP2615),
((NimStringDesc*) &TMP2616),
((NimStringDesc*) &TMP2617)}
;
STRING_LITERAL(TMP2622, "parser to implement", 19);
static NIM_CONST TY173865 TMP2626 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2627, "sons", 4);
static NIM_CONST TY173865 TMP2628 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2629, "ident", 5);
STRING_LITERAL(TMP2630, "|", 1);
TNimType NTI199026; /* TParsers */
TNimType NTI199005; /* TParserKind */
extern TNimType NTI187203; /* TParser */
extern TFrame* frameptr_12037;
extern tnode173659* emptynode_174505;
extern NI gverbosity_115117;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tnode173659*, parsefile_199030)(NI32 fileidx) {
	tnode173659* result;
	tparsers199026 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream163204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI199026));
	f = 0;
	nimln(47, "syntaxes.nim");
	filename = tofullpath_138708(fileidx);
	nimln(48, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(48, "syntaxes.nim");
		nimln(48, "syntaxes.nim");
		LOC3 = 0;
		LOC3 = open_9203(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(49, "syntaxes.nim");
		rawmessage_139191(((NU16) 3), filename);		nimln(50, "syntaxes.nim");
		goto BeforeRet;
	}	LA4: ;
	nimln(51, "syntaxes.nim");
	nimln(51, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_163222(&f);
	openparsers_199034(&p, fileidx, LOC6);	nimln(52, "syntaxes.nim");
	result = parseall_199046(&p);
	nimln(53, "syntaxes.nim");
	closeparsers_199041(&p);	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tnode173659*, parseall_199046)(tparsers199026* p) {
	tnode173659* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(56, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	{
		nimln(58, "syntaxes.nim");
		result = parseall_187209(&(*p).Parser);
	}	break;
	case ((NU8) 1):
	{
		nimln(60, "syntaxes.nim");
		result = parseall_190005(&(*p).Parser);
	}	break;
	case ((NU8) 2):
	{
		nimln(62, "syntaxes.nim");
		internalerror_139383(((NimStringDesc*) &TMP2622));		nimln(63, "syntaxes.nim");
		result = emptynode_174505;
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(tnode173659*, parsetoplevelstmt_199051)(tparsers199026* p) {
	tnode173659* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_187226(&(*p).Parser);
	}	break;
	case ((NU8) 1):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_190012(&(*p).Parser);
	}	break;
	case ((NU8) 2):
	{
		nimln(73, "syntaxes.nim");
		internalerror_139383(((NimStringDesc*) &TMP2622));		nimln(74, "syntaxes.nim");
		result = emptynode_174505;
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(NI, utf8bom_199091)(NimStringDesc* s) {
	NI result;
	nimfr("UTF8_BOM", "syntaxes.nim")
	result = 0;
	nimln(78, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(78, "syntaxes.nim");
		LOC3 = 0;
		nimln(78, "syntaxes.nim");
		LOC4 = 0;
		nimln(78, "syntaxes.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(78, "syntaxes.nim");
		if ((NU)(1) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(78, "syntaxes.nim");
		if ((NU)(2) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(79, "syntaxes.nim");
		result = 3;
	}	goto LA1;
	LA7: ;
	{
		nimln(81, "syntaxes.nim");
		result = 0;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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
N_NIMCALL(NIM_BOOL, containsshebang_199097)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(84, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2623;
		NI j;
		NI TMP2624;
		nimln(84, "syntaxes.nim");
		LOC3 = 0;
		nimln(84, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2623 = addInt(i, 1);
		if ((NU)((NI64)(TMP2623)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI64)(TMP2623)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(85, "syntaxes.nim");
		nimln(85, "syntaxes.nim");
		TMP2624 = addInt(i, 2);
		j = (NI64)(TMP2624);
		nimln(86, "syntaxes.nim");
		while (1) {
			nimln(730, "system.nim");
			if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA7;
			nimln(86, "syntaxes.nim");
			j = addInt(j, 1);
		} LA7: ;
		nimln(87, "syntaxes.nim");
		nimln(87, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}	LA5: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode173659*, parsepipe_199126)(NimStringDesc* filename, tllstream163204* inputstream) {
	tnode173659* result;
	tllstream163204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(90, "syntaxes.nim");
	result = emptynode_174505;
	nimln(91, "syntaxes.nim");
	s = llstreamopen_163227(filename, ((NU8) 0));
	nimln(92, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(93, "syntaxes.nim");
		nimln(93, "syntaxes.nim");
		line = rawNewString(80);
		nimln(94, "syntaxes.nim");
		nimln(94, "syntaxes.nim");
		LOC5 = 0;
		LOC5 = llstreamreadline_163248(s, &line);
		nimln(95, "syntaxes.nim");
		i = utf8bom_199091(line);
		nimln(96, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(96, "syntaxes.nim");
			LOC8 = 0;
			LOC8 = containsshebang_199097(line, i);
			if (!LOC8) goto LA9;
			nimln(97, "syntaxes.nim");
			nimln(97, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_163248(s, &line);
			nimln(98, "syntaxes.nim");
			i = 0;
		}		LA9: ;
		nimln(99, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2625;
			tparser187203 q;
			NimStringDesc* LOC19;
			tllstream163204* LOC20;
			nimln(99, "syntaxes.nim");
			LOC14 = 0;
			nimln(99, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(99, "syntaxes.nim");
			nimln(99, "syntaxes.nim");
			TMP2625 = addInt(i, 1);
			if ((NU)((NI64)(TMP2625)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI64)(TMP2625)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(100, "syntaxes.nim");
			i = addInt(i, 2);
			nimln(101, "syntaxes.nim");
			while (1) {
				nimln(730, "system.nim");
				if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
				if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA18;
				nimln(101, "syntaxes.nim");
				i = addInt(i, 1);
			} LA18: ;
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI187203));
			nimln(103, "syntaxes.nim");
			nimln(103, "syntaxes.nim");
			nimln(103, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_163218(LOC19);
			openparser_187214(&q, filename, LOC20);			nimln(104, "syntaxes.nim");
			result = parseall_187209(&q);
			nimln(105, "syntaxes.nim");
			closeparser_187221(&q);		}		LA16: ;
		nimln(106, "syntaxes.nim");
		llstreamclose_163238(s);	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(NU8, getfilter_199187)(tident141017* ident) {
	NU8 result;
	NU8 i_199225;
	NU8 res_199229;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_199225 = 0;
	nimln(1301, "system.nim");
	res_199229 = ((NU8) 0);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_199229 <= ((NU8) 3))) goto LA1;
		nimln(1301, "system.nim");
		i_199225 = res_199229;
		nimln(110, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(110, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_141456(ident, filternames_199019[(i_199225)- 0]);
			if (!LOC4) goto LA5;
			nimln(111, "syntaxes.nim");
			nimln(111, "syntaxes.nim");
			result = i_199225;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_199229 = addInt(res_199229, 1);
	} LA1: ;
	nimln(112, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NU8, getparser_199234)(tident141017* ident) {
	NU8 result;
	NU8 i_199272;
	NU8 res_199276;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_199272 = 0;
	nimln(1301, "system.nim");
	res_199276 = ((NU8) 0);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_199276 <= ((NU8) 2))) goto LA1;
		nimln(1301, "system.nim");
		i_199272 = res_199276;
		nimln(116, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(116, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_141456(ident, parsernames_199014[(i_199272)- 0]);
			if (!LOC4) goto LA5;
			nimln(117, "syntaxes.nim");
			nimln(117, "syntaxes.nim");
			result = i_199272;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_199276 = addInt(res_199276, 1);
	} LA1: ;
	nimln(118, "syntaxes.nim");
	rawmessage_139191(((NU16) 30), (*ident).S);	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tident141017*, getcallee_199281)(tnode173659* n) {
	tident141017* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(121, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(121, "syntaxes.nim");
		LOC3 = 0;
		nimln(730, "system.nim");
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		nimln(121, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(122, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2628[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2629));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}	goto LA1;
	LA5: ;
	{
		nimln(123, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(124, "syntaxes.nim");
		if (!(((TMP2628[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2629));
		result = (*n).kindU.S5.Ident;
	}	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(126, "syntaxes.nim");
		nimln(126, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_191048(n, 0);
		rawmessage_139191(((NU16) 163), LOC11);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream163204*, applyfilter_199357)(tparsers199026* p, tnode173659* n, NimStringDesc* filename, tllstream163204* stdin_199363) {
	tllstream163204* result;
	tident141017* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(130, "syntaxes.nim");
	ident = getcallee_199281(n);
	nimln(131, "syntaxes.nim");
	f = getfilter_199187(ident);
	nimln(132, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(134, "syntaxes.nim");
		(*p).Skin = getparser_199234(ident);
		nimln(135, "syntaxes.nim");
		result = stdin_199363;
	}	break;
	case ((NU8) 1):
	{
		nimln(137, "syntaxes.nim");
		result = filtertmpl_198006(stdin_199363, filename, n);
	}	break;
	case ((NU8) 3):
	{
		nimln(139, "syntaxes.nim");
		result = filterstrip_197008(stdin_199363, filename, n);
	}	break;
	case ((NU8) 2):
	{
		nimln(141, "syntaxes.nim");
		result = filterreplace_197002(stdin_199363, filename, n);
	}	break;
	}
	nimln(142, "syntaxes.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(143, "syntaxes.nim");
		{
			TY150228 LOC13;
			TY150228 LOC14;
			nimln(702, "system.nim");
			if (!(2 <= gverbosity_115117)) goto LA11;
			nimln(144, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_139121(((NU16) 255), LOC13, 0);			nimln(145, "syntaxes.nim");
			msgwriteln_138839((*result).S);			nimln(146, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_139121(((NU16) 256), LOC14, 0);		}		LA11: ;
	}	LA7: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream163204*, evalpipe_199391)(tparsers199026* p, tnode173659* n, NimStringDesc* filename, tllstream163204* start) {
	tllstream163204* result;
	nimfr("evalPipe", "syntaxes.nim")
	result = 0;
	nimln(150, "syntaxes.nim");
	result = start;
	nimln(151, "syntaxes.nim");
	{
		nimln(151, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		nimln(151, "syntaxes.nim");
		goto BeforeRet;
	}	LA3: ;
	nimln(152, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		NI i_199465;
		NI res_199527;
		nimln(152, "syntaxes.nim");
		LOC7 = 0;
		nimln(152, "syntaxes.nim");
		LOC8 = 0;
		nimln(152, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(152, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(153, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2628[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2629));
		LOC7 = identeq_141456((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2630));
		LA10: ;
		if (!LOC7) goto LA11;
		i_199465 = 0;
		nimln(1301, "system.nim");
		res_199527 = 1;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_199527 <= 2)) goto LA13;
			nimln(1301, "system.nim");
			i_199465 = res_199527;
			nimln(155, "syntaxes.nim");
			{
				nimln(155, "syntaxes.nim");
				if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
				if ((NU)(i_199465) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_199465]).Kind == ((NU8) 29))) goto LA16;
				nimln(156, "syntaxes.nim");
				if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
				if ((NU)(i_199465) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_199391(p, (*n).kindU.S6.Sons->data[i_199465], filename, result);
			}			goto LA14;
			LA16: ;
			{
				nimln(158, "syntaxes.nim");
				if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
				if ((NU)(i_199465) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_199357(p, (*n).kindU.S6.Sons->data[i_199465], filename, result);
			}			LA14: ;
			nimln(1304, "system.nim");
			res_199527 = addInt(res_199527, 1);
		} LA13: ;
	}	goto LA5;
	LA11: ;
	{
		nimln(159, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(160, "syntaxes.nim");
		if (((TMP2626[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2627));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_199391(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}	goto LA5;
	LA20: ;
	{
		nimln(162, "syntaxes.nim");
		result = applyfilter_199357(p, n, filename, result);
	}	LA5: ;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, openparsers_199034)(tparsers199026* p, NI32 fileidx, tllstream163204* inputstream) {
	tllstream163204* s;
	NimStringDesc* filename;
	tnode173659* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(166, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(167, "syntaxes.nim");
	filename = tofullpath_138708(fileidx);
	nimln(168, "syntaxes.nim");
	pipe = parsepipe_199126(filename, inputstream);
	nimln(169, "syntaxes.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(169, "syntaxes.nim");
		s = evalpipe_199391(p, pipe, filename, inputstream);
	}	goto LA1;
	LA3: ;
	{
		nimln(170, "syntaxes.nim");
		s = inputstream;
	}	LA1: ;
	nimln(171, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 2):
	{
		nimln(173, "syntaxes.nim");
		openparser_187360(&(*p).Parser, fileidx, s);	}	break;
	}
	popFrame();
}
N_NIMCALL(void, closeparsers_199041)(tparsers199026* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(176, "syntaxes.nim");
	closeparser_187221(&(*p).Parser);	popFrame();
}N_NOINLINE(void, compilersyntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, compilersyntaxesDatInit)(void) {
static TNimNode* TMP2618[2];
static TNimNode* TMP2619[3];
NI TMP2621;
static char* NIM_CONST TMP2620[3] = {
"skinStandard", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2247[7];
NTI199026.size = sizeof(tparsers199026);
NTI199026.kind = 18;
NTI199026.base = 0;
NTI199026.flags = 2;
TMP2618[0] = &TMP2247[1];
NTI199005.size = sizeof(NU8);
NTI199005.kind = 14;
NTI199005.base = 0;
NTI199005.flags = 3;
for (TMP2621 = 0; TMP2621 < 3; TMP2621++) {
TMP2247[TMP2621+2].kind = 1;
TMP2247[TMP2621+2].offset = TMP2621;
TMP2247[TMP2621+2].name = TMP2620[TMP2621];
TMP2619[TMP2621] = &TMP2247[TMP2621+2];
}
TMP2247[5].len = 3; TMP2247[5].kind = 2; TMP2247[5].sons = &TMP2619[0];
NTI199005.node = &TMP2247[5];
TMP2247[1].kind = 1;
TMP2247[1].offset = offsetof(tparsers199026, Skin);
TMP2247[1].typ = (&NTI199005);
TMP2247[1].name = "skin";
TMP2618[1] = &TMP2247[6];
TMP2247[6].kind = 1;
TMP2247[6].offset = offsetof(tparsers199026, Parser);
TMP2247[6].typ = (&NTI187203);
TMP2247[6].name = "parser";
TMP2247[0].len = 2; TMP2247[0].kind = 2; TMP2247[0].sons = &TMP2618[0];
NTI199026.node = &TMP2247[0];
}

