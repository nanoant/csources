/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tnode225819 tnode225819;
typedef struct tparsers259035 tparsers259035;
typedef struct tparser244205 tparser244205;
typedef struct tlexer216186 tlexer216186;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream212204 tllstream212204;
typedef struct ttoken216184 ttoken216184;
typedef struct tident201021 tident201021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype225855 ttype225855;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tsym225849 tsym225849;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tlib225837 tlib225837;
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
struct  tlexer216186  {
  tbaselexer214024 Sup;
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
struct  ttoken216184  {
NU8 Toktype;
NI Indent;
tident201021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser244205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer216186 Lex;
ttoken216184 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers259035  {
NU8 Skin;
tparser244205 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NimStringDesc* TY259026[4];
typedef NimStringDesc* TY259020[4];
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
typedef NimStringDesc* TY259532[1];
struct  tllstream212204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_198037)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_12403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_198733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_259047)(tparsers259035* p, NI32 fileidx, tllstream212204* inputstream);
N_NIMCALL(tnode225819*, parsepipe_259177)(NimStringDesc* filename, tllstream212204* inputstream);
N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_212264)(tllstream212204* s, NimStringDesc** line);
N_NIMCALL(NI, utf8bom_259123)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, containsshebang_259133)(NimStringDesc* s, NI i);
N_NIMCALL(void, openparser_244425)(tparser244205* p, NimStringDesc* filename, tllstream212204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream212204*, llstreamopen_212220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(tnode225819*, parseall_244216)(tparser244205* p);
N_NIMCALL(void, closeparser_244223)(tparser244205* p);
N_NIMCALL(void, llstreamclose_212250)(tllstream212204* s);
N_NIMCALL(tllstream212204*, evalpipe_259546)(tparsers259035* p, tnode225819* n, NimStringDesc* filename, tllstream212204* start);
N_NIMCALL(NIM_BOOL, identeq_201493)(tident201021* id, NimStringDesc* name);
N_NIMCALL(tllstream212204*, applyfilter_259507)(tparsers259035* p, tnode225819* n, NimStringDesc* filename, tllstream212204* stdin_259513);
N_NIMCALL(tident201021*, getcallee_259410)(tnode225819* n);
N_NIMCALL(NimStringDesc*, rendertree_250057)(tnode225819* n, NU8 renderflags);
N_NIMCALL(NU8, getfilter_259260)(tident201021* ident);
N_NIMCALL(NU8, getparser_259335)(tident201021* ident);
N_NIMCALL(tllstream212204*, filtertmpl_258009)(tllstream212204* stdin_258011, NimStringDesc* filename, tnode225819* call);
N_NIMCALL(tllstream212204*, filterstrip_257012)(tllstream212204* stdin_257014, NimStringDesc* filename, tnode225819* call);
N_NIMCALL(tllstream212204*, filterreplace_257004)(tllstream212204* stdin_257006, NimStringDesc* filename, tnode225819* call);
N_NIMCALL(void, rawmessage_198643)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_198236)(NimStringDesc* s);
N_NIMCALL(void, openparser_244410)(tparser244205* p, NI32 fileidx, tllstream212204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream212204*, llstreamopen_212226)(FILE** f);
N_NIMCALL(tnode225819*, parseall_259063)(tparsers259035* p);
N_NIMCALL(tnode225819*, parseall_249009)(tparser244205* p);
N_NIMCALL(void, internalerror_198989)(NimStringDesc* errmsg);
N_NIMCALL(void, closeparsers_259056)(tparsers259035* p);
N_NIMCALL(tnode225819*, parsetoplevelstmt_244230)(tparser244205* p);
N_NIMCALL(tnode225819*, parsetoplevelstmt_249020)(tparser244205* p);
STRING_LITERAL(TMP1202, "|", 1);
STRING_LITERAL(TMP1311, "none", 4);
STRING_LITERAL(TMP1312, "stdtmpl", 7);
STRING_LITERAL(TMP1313, "replace", 7);
STRING_LITERAL(TMP1314, "strip", 5);
NIM_CONST TY259026 filternames_259025 = {((NimStringDesc*) &TMP1311),
((NimStringDesc*) &TMP1312),
((NimStringDesc*) &TMP1313),
((NimStringDesc*) &TMP1314)}
;
STRING_LITERAL(TMP1315, "standard", 8);
STRING_LITERAL(TMP1316, "strongspaces", 12);
STRING_LITERAL(TMP1317, "braces", 6);
STRING_LITERAL(TMP1318, "endx", 4);
NIM_CONST TY259020 parsernames_259019 = {((NimStringDesc*) &TMP1315),
((NimStringDesc*) &TMP1316),
((NimStringDesc*) &TMP1317),
((NimStringDesc*) &TMP1318)}
;
STRING_LITERAL(TMP1349, "parser to implement", 19);
TNimType NTI259035; /* TParsers */
TNimType NTI259007; /* TParserKind */
extern TNimType NTI244205; /* TParser */
extern tnode225819* emptynode_226738;
extern NI gverbosity_170127;

N_NIMCALL(NI, utf8bom_259123)(NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		result = 0;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_259133)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI j;
		LOC3 = 0;
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s->data[(NI32)(i + 1)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j = (NI32)(i + 2);
		{
			while (1) {
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				j += 1;
			} LA8: ;
		}
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	return result;
}

N_NIMCALL(tnode225819*, parsepipe_259177)(NimStringDesc* filename, tllstream212204* inputstream) {
	tnode225819* result;
	tllstream212204* s;
	result = 0;
	result = emptynode_226738;
	s = llstreamopen_212233(filename, ((NU8) 0));
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		if (!!((s == NIM_NIL))) goto LA3;
		line = rawNewString(80);
		LOC5 = 0;
		LOC5 = llstreamreadline_212264(s, &line);
		i = utf8bom_259123(line);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_259133(line, i);
			if (!LOC8) goto LA9;
			LOC11 = 0;
			LOC11 = llstreamreadline_212264(s, &line);
			i = 0;
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			tparser244205 q;
			NimStringDesc* LOC20;
			tllstream212204* LOC21;
			LOC14 = 0;
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = ((NU8)(line->data[(NI32)(i + 1)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			i += 2;
			{
				while (1) {
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					i += 1;
				} LA19: ;
			}
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI244205));
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_212220(LOC20);
			openparser_244425(&q, filename, LOC21, NIM_FALSE);
			result = parseall_244216(&q);
			closeparser_244223(&q);
		}
		LA16: ;
		llstreamclose_212250(s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tident201021*, getcallee_259410)(tnode225819* n) {
	tident201021* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = rendertree_250057(n, 0);
		rawmessage_198733(((NU16) 163), LOC11);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, getfilter_259260)(tident201021* ident) {
	NU8 result;
	result = 0;
	{
		NU8 i_259312;
		NU8 res_259318;
		i_259312 = 0;
		res_259318 = ((NU8) 0);
		{
			while (1) {
				if (!(res_259318 <= ((NU8) 3))) goto LA3;
				i_259312 = res_259318;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_201493(ident, filternames_259025[(i_259312)- 0]);
					if (!LOC6) goto LA7;
					result = i_259312;
					goto BeforeRet;
				}
				LA7: ;
				res_259318 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getparser_259335)(tident201021* ident) {
	NU8 result;
	result = 0;
	{
		NU8 i_259387;
		NU8 res_259393;
		i_259387 = 0;
		res_259393 = ((NU8) 0);
		{
			while (1) {
				if (!(res_259393 <= ((NU8) 3))) goto LA3;
				i_259387 = res_259393;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_201493(ident, parsernames_259019[(i_259387)- 0]);
					if (!LOC6) goto LA7;
					result = i_259387;
					goto BeforeRet;
				}
				LA7: ;
				res_259393 += 1;
			} LA3: ;
		}
	}
	rawmessage_198733(((NU16) 30), (*ident).S);
	BeforeRet: ;
	return result;
}

N_NIMCALL(tllstream212204*, applyfilter_259507)(tparsers259035* p, tnode225819* n, NimStringDesc* filename, tllstream212204* stdin_259513) {
	tllstream212204* result;
	tident201021* ident;
	NU8 f;
	result = 0;
	ident = getcallee_259410(n);
	f = getfilter_259260(ident);
	switch (f) {
	case ((NU8) 0):
	{
		(*p).Skin = getparser_259335(ident);
		result = stdin_259513;
	}
	break;
	case ((NU8) 1):
	{
		result = filtertmpl_258009(stdin_259513, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		result = filterstrip_257012(stdin_259513, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		result = filterreplace_257004(stdin_259513, filename, n);
	}
	break;
	}
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		{
			TY259532 LOC13;
			TY259532 LOC14;
			if (!(2 <= gverbosity_170127)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_198643(((NU16) 267), LOC13, 0);
			msgwriteln_198236((*result).S);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_198643(((NU16) 268), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result;
}

N_NIMCALL(tllstream212204*, evalpipe_259546)(tparsers259035* p, tnode225819* n, NimStringDesc* filename, tllstream212204* start) {
	tllstream212204* result;
	result = 0;
	result = start;
	{
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_201493((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP1202));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_259635;
			NI res_259713;
			i_259635 = 0;
			res_259713 = 1;
			{
				while (1) {
					if (!(res_259713 <= 2)) goto LA15;
					i_259635 = res_259713;
					{
						if (!((*(*n).kindU.S6.Sons->data[i_259635]).Kind == ((NU8) 29))) goto LA18;
						result = evalpipe_259546(p, (*n).kindU.S6.Sons->data[i_259635], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						result = applyfilter_259507(p, (*n).kindU.S6.Sons->data[i_259635], filename, result);
					}
					LA16: ;
					res_259713 += 1;
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n).Kind == ((NU8) 114))) goto LA22;
		result = evalpipe_259546(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		result = applyfilter_259507(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, openparsers_259047)(tparsers259035* p, NI32 fileidx, tllstream212204* inputstream) {
	tllstream212204* s;
	NimStringDesc* filename;
	tnode225819* pipe;
	s = 0;
	(*p).Skin = ((NU8) 0);
	filename = tofullpath_198037(fileidx);
	pipe = parsepipe_259177(filename, inputstream);
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_259546(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		s = inputstream;
	}
	LA1: ;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		openparser_244410(&(*p).Parser, fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		openparser_244410(&(*p).Parser, fileidx, s, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(tnode225819*, parseall_259063)(tparsers259035* p) {
	tnode225819* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parseall_244216(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		result = parseall_249009(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		internalerror_198989(((NimStringDesc*) &TMP1349));
		result = emptynode_226738;
	}
	break;
	}
	return result;
}

N_NIMCALL(void, closeparsers_259056)(tparsers259035* p) {
	closeparser_244223(&(*p).Parser);
}

N_NIMCALL(tnode225819*, parsefile_259041)(NI32 fileidx) {
	tnode225819* result;
	tparsers259035 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream212204* LOC6;
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI259035));
	f = 0;
	filename = tofullpath_198037(fileidx);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12403(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		rawmessage_198733(((NU16) 3), filename);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = 0;
	LOC6 = llstreamopen_212226(&f);
	openparsers_259047(&p, fileidx, LOC6);
	result = parseall_259063(&p);
	closeparsers_259056(&p);
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode225819*, parsetoplevelstmt_259070)(tparsers259035* p) {
	tnode225819* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parsetoplevelstmt_244230(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		result = parsetoplevelstmt_249020(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		internalerror_198989(((NimStringDesc*) &TMP1349));
		result = emptynode_226738;
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesDatInit)(void) {
static TNimNode* TMP1000[2];
static TNimNode* TMP1001[4];
NI TMP1003;
static char* NIM_CONST TMP1002[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP793[8];
NTI259035.size = sizeof(tparsers259035);
NTI259035.kind = 18;
NTI259035.base = 0;
TMP1000[0] = &TMP793[1];
NTI259007.size = sizeof(NU8);
NTI259007.kind = 14;
NTI259007.base = 0;
NTI259007.flags = 3;
for (TMP1003 = 0; TMP1003 < 4; TMP1003++) {
TMP793[TMP1003+2].kind = 1;
TMP793[TMP1003+2].offset = TMP1003;
TMP793[TMP1003+2].name = TMP1002[TMP1003];
TMP1001[TMP1003] = &TMP793[TMP1003+2];
}
TMP793[6].len = 4; TMP793[6].kind = 2; TMP793[6].sons = &TMP1001[0];
NTI259007.node = &TMP793[6];
TMP793[1].kind = 1;
TMP793[1].offset = offsetof(tparsers259035, Skin);
TMP793[1].typ = (&NTI259007);
TMP793[1].name = "skin";
TMP1000[1] = &TMP793[7];
TMP793[7].kind = 1;
TMP793[7].offset = offsetof(tparsers259035, Parser);
TMP793[7].typ = (&NTI244205);
TMP793[7].name = "parser";
TMP793[0].len = 2; TMP793[0].kind = 2; TMP793[0].sons = &TMP1000[0];
NTI259035.node = &TMP793[0];
}

