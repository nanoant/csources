/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode224819 tnode224819;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype224855 ttype224855;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tllstream211204 tllstream211204;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlib224837 tlib224837;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode224819*, getarg_256057)(tnode224819* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(void, invalidpragma_256047)(tnode224819* n);
N_NIMCALL(void, localerror_197938)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_249057)(tnode224819* n, NU8 renderflags);
N_NIMCALL(NIM_BOOL, identeq_200493)(tident200021* id, NimStringDesc* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, strarg_256029)(tnode224819* n, NimStringDesc* name, NI pos, NimStringDesc* default_256034);
N_NIMCALL(NIM_BOOL, boolarg_256038)(tnode224819* n, NimStringDesc* name, NI pos, NIM_BOOL default_256043);
N_NIMCALL(tllstream211204*, llstreamopen_211220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_211264)(tllstream211204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_211300)(tllstream211204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_211250)(tllstream211204* s);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TMP1339, "startswith", 10);
STRING_LITERAL(TMP1340, "", 0);
STRING_LITERAL(TMP1341, "true", 4);
STRING_LITERAL(TMP1342, "false", 5);
STRING_LITERAL(TMP1343, "leading", 7);
STRING_LITERAL(TMP1344, "trailing", 8);
STRING_LITERAL(TMP1345, "sub", 3);
STRING_LITERAL(TMP1346, "by", 2);

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

N_NIMCALL(void, invalidpragma_256047)(tnode224819* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_249057(n, 4);
	localerror_197938((*n).Info, ((NU16) 163), LOC1);
}

N_NIMCALL(tnode224819*, getarg_256057)(tnode224819* n, NimStringDesc* name, NI pos) {
	tnode224819* result;
	result = 0;
	result = NIM_NIL;
	{
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_256089;
		NI HEX3Atmp_256235;
		NI LOC6;
		NI res_256238;
		i_256089 = 0;
		HEX3Atmp_256235 = 0;
		LOC6 = 0;
		LOC6 = sonslen_225252(n);
		HEX3Atmp_256235 = (NI64)(LOC6 - 1);
		res_256238 = 1;
		{
			while (1) {
				if (!(res_256238 <= HEX3Atmp_256235)) goto LA8;
				i_256089 = res_256238;
				{
					if (!((*(*n).kindU.S6.Sons->data[i_256089]).Kind == ((NU8) 33))) goto LA11;
					{
						if (!!(((*(*(*n).kindU.S6.Sons->data[i_256089]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA15;
						invalidpragma_256047(n);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = identeq_200493((*(*(*n).kindU.S6.Sons->data[i_256089]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
						if (!LOC19) goto LA20;
						result = (*(*n).kindU.S6.Sons->data[i_256089]).kindU.S6.Sons->data[1];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_256089 == pos)) goto LA23;
					result = (*n).kindU.S6.Sons->data[i_256089];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_256238 += 1;
			} LA8: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, chararg_256020)(tnode224819* n, NimStringDesc* name, NI pos, NIM_CHAR default_256025) {
	NIM_CHAR result;
	tnode224819* x;
	result = 0;
	x = getarg_256057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_256025;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.Intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_256047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_256029)(tnode224819* n, NimStringDesc* name, NI pos, NimStringDesc* default_256034) {
	NimStringDesc* result;
	tnode224819* x;
	result = 0;
	x = getarg_256057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_256034);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		result = copyString((*x).kindU.S3.Strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_256047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_256038)(tnode224819* n, NimStringDesc* name, NI pos, NIM_BOOL default_256043) {
	NIM_BOOL result;
	tnode224819* x;
	result = 0;
	x = getarg_256057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_256043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_200493((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP1341));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_200493((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP1342));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_256047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tllstream211204*, filterstrip_256012)(tllstream211204* stdin_256014, NimStringDesc* filename, tnode224819* call) {
	tllstream211204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = 0;
	pattern = strarg_256029(call, ((NimStringDesc*) &TMP1339), 1, ((NimStringDesc*) &TMP1340));
	leading = boolarg_256038(call, ((NimStringDesc*) &TMP1343), 2, NIM_TRUE);
	trailing = boolarg_256038(call, ((NimStringDesc*) &TMP1344), 3, NIM_TRUE);
	result = llstreamopen_211220(((NimStringDesc*) &TMP1340));
	line = rawNewString(80);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_211264(stdin_256014, &line);
			if (!LOC3) goto LA2;
			stripped = nsuStrip(line, leading, trailing);
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (pattern->Sup.len == 0);
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_211300(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_211300(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_211250(stdin_256014);
	return result;
}

N_NIMCALL(tllstream211204*, filterreplace_256004)(tllstream211204* stdin_256006, NimStringDesc* filename, tnode224819* call) {
	tllstream211204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = 0;
	sub = strarg_256029(call, ((NimStringDesc*) &TMP1345), 1, ((NimStringDesc*) &TMP1340));
	{
		if (!(sub->Sup.len == 0)) goto LA3;
		invalidpragma_256047(call);
	}
	LA3: ;
	by = strarg_256029(call, ((NimStringDesc*) &TMP1346), 2, ((NimStringDesc*) &TMP1340));
	result = llstreamopen_211220(((NimStringDesc*) &TMP1340));
	line = rawNewString(80);
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_211264(stdin_256006, &line);
			if (!LOC7) goto LA6;
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_211300(result, LOC8);
		} LA6: ;
	}
	llstreamclose_211250(stdin_256006);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_filtersInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_filtersDatInit)(void) {
}

