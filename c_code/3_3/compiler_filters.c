/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode171659 tnode171659;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype171693 ttype171693;
typedef struct tsym171689 tsym171689;
typedef struct tident140017 tident140017;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct tllstream161204 tllstream161204;
typedef struct tidobj140011 tidobj140011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tsymseq171661 tsymseq171661;
typedef struct tlib171677 tlib171677;
typedef struct TY171775 TY171775;
typedef struct tlistentry109014 tlistentry109014;
struct tlineinfo136509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode171659 {
ttype171693* Typ;
tlineinfo136509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym171689* Sym;
} S4;
struct {tident140017* Ident;
} S5;
struct {tnodeseq171653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY171865[20];
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
struct tidobj140011 {
  TNimObject Sup;
NI Id;
};
struct tloc171673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype171693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct ttype171693 {
  tidobj140011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq171691* Sons;
tnode171659* N;
tsym171689* Destructor;
tsym171689* Owner;
tsym171689* Sym;
NI64 Size;
NI Align;
tloc171673 Loc;
};
struct tstrtable171663 {
NI Counter;
tsymseq171661* Data;
};
struct tsym171689 {
  tidobj140011 Sup;
NU8 Kind;
union {
struct {ttypeseq171691* Typeinstcache;
tscope171683* Typscope;
} S1;
struct {TY171786* Procinstcache;
tscope171683* Scope;
} S2;
struct {TY171786* Usedgenerics;
tstrtable171663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype171693* Typ;
tident140017* Name;
tlineinfo136509 Info;
tsym171689* Owner;
NU32 Flags;
tnode171659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc171673 Loc;
tlib171677* Annex;
tnode171659* Constraint;
};
struct tident140017 {
  tidobj140011 Sup;
NimStringDesc* S;
tident140017* Next;
NI H;
};
struct tllstream161204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tscope171683 {
NI Depthlevel;
tstrtable171663 Symbols;
tnodeseq171653* Usingsyms;
tscope171683* Parent;
};
struct tinstantiation171679 {
tsym171689* Sym;
ttypeseq171691* Concretetypes;
TY171775* Usedby;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib171677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode171659* Path;
};
struct tnodeseq171653 {
  TGenericSeq Sup;
  tnode171659* data[SEQ_DECL_SIZE];
};
struct ttypeseq171691 {
  TGenericSeq Sup;
  ttype171693* data[SEQ_DECL_SIZE];
};
struct TY171786 {
  TGenericSeq Sup;
  tinstantiation171679* data[SEQ_DECL_SIZE];
};
struct tsymseq171661 {
  TGenericSeq Sup;
  tsym171689* data[SEQ_DECL_SIZE];
};
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, invalidpragma_195036)(tnode171659* n);
N_NIMCALL(void, localerror_138349)(tlineinfo136509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_189048)(tnode171659* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode171659*, getarg_195042)(tnode171659* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_172022)(tnode171659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_140456)(tident140017* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_195014)(tnode171659* n, NimStringDesc* name, NI pos, NIM_CHAR default_195019);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_195021)(tnode171659* n, NimStringDesc* name, NI pos, NimStringDesc* default_195026);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_195028)(tnode171659* n, NimStringDesc* name, NI pos, NIM_BOOL default_195033);
N_NIMCALL(tllstream161204*, filterstrip_195008)(tllstream161204* stdin_195010, NimStringDesc* filename, tnode171659* call);
N_NIMCALL(tllstream161204*, llstreamopen_161218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_161248)(tllstream161204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_161274)(tllstream161204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_161238)(tllstream161204* s);
N_NIMCALL(tllstream161204*, filterreplace_195002)(tllstream161204* stdin_195004, NimStringDesc* filename, tnode171659* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY171865 TMP2567 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2568, "sons", 4);
static NIM_CONST TY171865 TMP2570 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2571, "ident", 5);
static NIM_CONST TY171865 TMP2572 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2573, "intVal", 6);
static NIM_CONST TY171865 TMP2574 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2575, "strVal", 6);
STRING_LITERAL(TMP2576, "true", 4);
STRING_LITERAL(TMP2577, "false", 5);
STRING_LITERAL(TMP2578, "startswith", 10);
STRING_LITERAL(TMP2579, "", 0);
STRING_LITERAL(TMP2580, "leading", 7);
STRING_LITERAL(TMP2581, "trailing", 8);
STRING_LITERAL(TMP2583, "sub", 3);
STRING_LITERAL(TMP2584, "by", 2);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, invalidpragma_195036)(tnode171659* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_189048(n, 4);
	localerror_138349((*n).Info, ((NU16) 163), LOC1);	popFrame();
}
static N_INLINE(NI, sonslen_172022)(tnode171659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
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
N_NIMCALL(tnode171659*, getarg_195042)(tnode171659* n, NimStringDesc* name, NI pos) {
	tnode171659* result;
	NI i_195068;
	NI HEX3Atmp_195184;
	NI LOC5;
	NI TMP2569;
	NI res_195186;
	nimfr("getArg", "filters.nim")
	result = 0;
	nimln(28, "filters.nim");
	result = NIM_NIL;
	nimln(29, "filters.nim");
	{
		nimln(730, "system.nim");
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		nimln(29, "filters.nim");
		goto BeforeRet;
	}	LA3: ;
	i_195068 = 0;
	HEX3Atmp_195184 = 0;
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	LOC5 = 0;
	LOC5 = sonslen_172022(n);
	TMP2569 = subInt(LOC5, 1);
	HEX3Atmp_195184 = (NI64)(TMP2569);
	nimln(1301, "system.nim");
	res_195186 = 1;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_195186 <= HEX3Atmp_195184)) goto LA6;
		nimln(1301, "system.nim");
		i_195068 = res_195186;
		nimln(31, "filters.nim");
		{
			nimln(31, "filters.nim");
			if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
			if ((NU)(i_195068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[i_195068]).Kind == ((NU8) 33))) goto LA9;
			nimln(32, "filters.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(i_195068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2567[(*(*n).kindU.S6.Sons->data[i_195068]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_195068]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!!(((*(*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA13;
				nimln(32, "filters.nim");
				invalidpragma_195036(n);			}			LA13: ;
			nimln(33, "filters.nim");
			{
				NIM_BOOL LOC17;
				nimln(33, "filters.nim");
				if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(i_195068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2567[(*(*n).kindU.S6.Sons->data[i_195068]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_195068]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!(((TMP2570[(*(*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2571));
				LOC17 = 0;
				LOC17 = identeq_140456((*(*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
				if (!LOC17) goto LA18;
				nimln(34, "filters.nim");
				nimln(34, "filters.nim");
				if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(i_195068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2567[(*(*n).kindU.S6.Sons->data[i_195068]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_195068]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
				if ((NU)(1) >= (NU)((*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = (*(*n).kindU.S6.Sons->data[i_195068]).kindU.S6.Sons->data[1];
				goto BeforeRet;
			}			LA18: ;
		}		goto LA7;
		LA9: ;
		{
			nimln(35, "filters.nim");
			if (!(i_195068 == pos)) goto LA21;
			nimln(36, "filters.nim");
			nimln(36, "filters.nim");
			if (((TMP2567[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2568));
			if ((NU)(i_195068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*n).kindU.S6.Sons->data[i_195068];
			goto BeforeRet;
		}		goto LA7;
		LA21: ;
		LA7: ;
		nimln(1304, "system.nim");
		res_195186 = addInt(res_195186, 1);
	} LA6: ;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_CHAR, chararg_195014)(tnode171659* n, NimStringDesc* name, NI pos, NIM_CHAR default_195019) {
	NIM_CHAR result;
	tnode171659* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_195042(n, name, pos);
	nimln(40, "filters.nim");
	{
		nimln(40, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(40, "filters.nim");
		result = default_195019;
	}	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		nimln(41, "filters.nim");
		nimln(41, "filters.nim");
		if (!(((TMP2572[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2573));
		result = ((NIM_CHAR) (((NI)chckRange(((NI) ((*x).kindU.S1.Intval)), 0, 255))));
	}	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_195036(n);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, strarg_195021)(tnode171659* n, NimStringDesc* name, NI pos, NimStringDesc* default_195026) {
	NimStringDesc* result;
	tnode171659* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_195042(n, name, pos);
	nimln(46, "filters.nim");
	{
		nimln(46, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(46, "filters.nim");
		result = copyString(default_195026);
	}	goto LA1;
	LA3: ;
	{
		nimln(730, "system.nim");
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		nimln(47, "filters.nim");
		if (!(((TMP2574[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2575));
		result = copyString((*x).kindU.S3.Strval);
	}	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_195036(n);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, boolarg_195028)(tnode171659* n, NimStringDesc* name, NI pos, NIM_BOOL default_195033) {
	NIM_BOOL result;
	tnode171659* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_195042(n, name, pos);
	nimln(52, "filters.nim");
	{
		nimln(52, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(52, "filters.nim");
		result = default_195033;
	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		LOC6 = 0;
		nimln(53, "filters.nim");
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		nimln(53, "filters.nim");
		if (!(((TMP2570[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2571));
		LOC6 = identeq_140456((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2576));
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(53, "filters.nim");
		result = NIM_TRUE;
	}	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		nimln(54, "filters.nim");
		LOC11 = 0;
		nimln(54, "filters.nim");
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		nimln(54, "filters.nim");
		if (!(((TMP2570[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2571));
		LOC11 = identeq_140456((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2577));
		LA12: ;
		if (!LOC11) goto LA13;
		nimln(54, "filters.nim");
		result = NIM_FALSE;
	}	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_195036(n);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, filterstrip_195008)(tllstream161204* stdin_195010, NimStringDesc* filename, tnode171659* call) {
	tllstream161204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_195021(call, ((NimStringDesc*) &TMP2578), 1, ((NimStringDesc*) &TMP2579));
	nimln(59, "filters.nim");
	leading = boolarg_195028(call, ((NimStringDesc*) &TMP2580), 2, NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_195028(call, ((NimStringDesc*) &TMP2581), 3, NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_161218(((NimStringDesc*) &TMP2579));
	nimln(62, "filters.nim");
	nimln(62, "filters.nim");
	line = rawNewString(80);
	nimln(63, "filters.nim");
	while (1) {
		NIM_BOOL LOC2;
		NimStringDesc* stripped;
		nimln(63, "filters.nim");
		LOC2 = 0;
		LOC2 = llstreamreadline_161248(stdin_195010, &line);
		if (!LOC2) goto LA1;
		nimln(64, "filters.nim");
		stripped = nsuStrip(line, leading, trailing);
		nimln(65, "filters.nim");
		{
			NIM_BOOL LOC5;
			nimln(65, "filters.nim");
			LOC5 = 0;
			nimln(65, "filters.nim");
			nimln(65, "filters.nim");
			LOC5 = (pattern->Sup.len == 0);
			if (LOC5) goto LA6;
			nimln(65, "filters.nim");
			LOC5 = nsuStartsWith(stripped, pattern);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(66, "filters.nim");
			llstreamwriteln_161274(result, stripped);		}		goto LA3;
		LA7: ;
		{
			nimln(68, "filters.nim");
			llstreamwriteln_161274(result, line);		}		LA3: ;
	} LA1: ;
	nimln(69, "filters.nim");
	llstreamclose_161238(stdin_195010);	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, filterreplace_195002)(tllstream161204* stdin_195004, NimStringDesc* filename, tnode171659* call) {
	tllstream161204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_195021(call, ((NimStringDesc*) &TMP2583), 1, ((NimStringDesc*) &TMP2579));
	nimln(73, "filters.nim");
	{
		nimln(73, "filters.nim");
		nimln(73, "filters.nim");
		if (!(sub->Sup.len == 0)) goto LA3;
		nimln(73, "filters.nim");
		invalidpragma_195036(call);	}	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_195021(call, ((NimStringDesc*) &TMP2584), 2, ((NimStringDesc*) &TMP2579));
	nimln(75, "filters.nim");
	result = llstreamopen_161218(((NimStringDesc*) &TMP2579));
	nimln(76, "filters.nim");
	nimln(76, "filters.nim");
	line = rawNewString(80);
	nimln(77, "filters.nim");
	while (1) {
		NIM_BOOL LOC6;
		NimStringDesc* LOC7;
		nimln(77, "filters.nim");
		LOC6 = 0;
		LOC6 = llstreamreadline_161248(stdin_195004, &line);
		if (!LOC6) goto LA5;
		nimln(78, "filters.nim");
		nimln(78, "filters.nim");
		LOC7 = 0;
		LOC7 = nsuReplaceStr(line, sub, by);
		llstreamwriteln_161274(result, LOC7);	} LA5: ;
	nimln(79, "filters.nim");
	llstreamclose_161238(stdin_195004);	popFrame();
	return result;
}N_NOINLINE(void, compilerfiltersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

N_NOINLINE(void, compilerfiltersDatInit)(void) {
}

