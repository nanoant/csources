/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym224849 tsym224849;
typedef struct tsymseq224821 tsymseq224821;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY119408 TY119408;
typedef struct tindexentry357264 tindexentry357264;
typedef struct TY359804 TY359804;
typedef struct tentry414478 tentry414478;
typedef struct TY414485 TY414485;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct ttype224855 ttype224855;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tident200021 tident200021;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tnode224819 tnode224819;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tlib224837 tlib224837;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym224849* x_411632, tsym224849* y_411634, void* ClEnv);
void* ClEnv;
} TY411638;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP2611) (tsym224849* x_411707, tsym224849* y_411709);
typedef N_CLOSURE_PTR(NI, TMP2612) (tsym224849* x_411707, tsym224849* y_411709);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_360564, NimStringDesc* y_360566, void* ClEnv);
void* ClEnv;
} TY360570;
typedef N_CLOSURE_PTR(NI, TMP4762) (NimStringDesc* x_360639, NimStringDesc* y_360641);
typedef N_CLOSURE_PTR(NI, TMP4763) (NimStringDesc* x_360639, NimStringDesc* y_360641);
struct  tindexentry357264  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tindexentry357264 x_358566, tindexentry357264 y_358568, void* ClEnv);
void* ClEnv;
} TY358572;
typedef N_CLOSURE_PTR(NI, TMP4766) (tindexentry357264 x_358641, tindexentry357264 y_358643);
typedef N_CLOSURE_PTR(NI, TMP4767) (tindexentry357264 x_358641, tindexentry357264 y_358643);
struct  tentry414478  {
NI Pos;
tsym224849* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry414478 x_415138, tentry414478 y_415140, void* ClEnv);
void* ClEnv;
} TY415144;
typedef N_CLOSURE_PTR(NI, TMP4825) (tentry414478 x_415213, tentry414478 y_415215);
typedef N_CLOSURE_PTR(NI, TMP4826) (tentry414478 x_415213, tentry414478 y_415215);
struct  TNimObject  {
TNimType* m_type;
};
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY119408 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY359804 {
  TGenericSeq Sup;
  tindexentry357264 data[SEQ_DECL_SIZE];
};
struct TY414485 {
  TGenericSeq Sup;
  tentry414478 data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_411680)(tsym224849** a_411688, NI a_411688Len0, tsym224849** b_411696, NI b_411696Len0, NI lo_411700, NI m_411702, NI hi_411704, TY411638 cmp_411712, NU8 order_411715);
static N_INLINE(NI, HEX2A_355020)(NI x, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_360612)(NimStringDesc** a_360620, NI a_360620Len0, NimStringDesc** b_360628, NI b_360628Len0, NI lo_360632, NI m_360634, NI hi_360636, TY360570 cmp_360644, NU8 order_360647);
N_NIMCALL(void, merge_358614)(tindexentry357264* a_358622, NI a_358622Len0, tindexentry357264* b_358630, NI b_358630Len0, NI lo_358634, NI m_358636, NI hi_358638, TY358572 cmp_358646, NU8 order_358649);
N_NIMCALL(void, HEX3CHEX2D_357607)(tindexentry357264* a, tindexentry357264 b);
N_NIMCALL(void, merge_415186)(tentry414478* a_415194, NI a_415194Len0, tentry414478* b_415202, NI b_415202Len0, NI lo_415206, NI m_415208, NI hi_415210, TY415144 cmp_415218, NU8 order_415221);
extern TNimType NTI224821; /* TSymSeq */
extern TNimType NTI108; /* int */
TNimType NTI355033; /* range -1..0(int) */
extern TNimType NTI119408; /* seq[string] */
extern TNimType NTI359804; /* seq[TIndexEntry] */
extern TNimType NTI414485; /* seq[TEntry] */

static N_INLINE(NI, HEX2A_355020)(NI x, NU8 order) {
	NI result;
	NI y;
	result = 0;
	y = (NI32)(((NI) (order)) - 1);
	result = (NI32)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_411680)(tsym224849** a_411688, NI a_411688Len0, tsym224849** b_411696, NI b_411696Len0, NI lo_411700, NI m_411702, NI hi_411704, TY411638 cmp_411712, NU8 order_411715) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_411712.ClEnv? cmp_411712.ClPrc(a_411688[m_411702], a_411688[(NI32)(m_411702 + 1)], cmp_411712.ClEnv):((TMP2611)(cmp_411712.ClPrc))(a_411688[m_411702], a_411688[(NI32)(m_411702 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_355020(LOC3, order_411715);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_411700;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_411702)) goto LA8;
			unsureAsgnRef((void**) &b_411696[bb], a_411688[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_411700;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_411704);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_411712.ClEnv? cmp_411712.ClPrc(b_411696[i], a_411688[j], cmp_411712.ClEnv):((TMP2612)(cmp_411712.ClPrc))(b_411696[i], a_411688[j]);
				LOC16 = 0;
				LOC16 = HEX2A_355020(LOC15, order_411715);
				if (!(LOC16 <= 0)) goto LA17;
				unsureAsgnRef((void**) &a_411688[k], b_411696[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) &a_411688[k], a_411688[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) &a_411688[k], b_411696[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_411619)(tsym224849** a_411627, NI a_411627Len0, TY411638 cmp_411637, NU8 order_411640) {
	NI n;
	tsymseq224821* b;
	NI s;
	n = a_411627Len0;
	b = 0;
	b = (tsymseq224821*) newSeq((&NTI224821), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_411680(a_411627, a_411627Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_411637, order_411640);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_360612)(NimStringDesc** a_360620, NI a_360620Len0, NimStringDesc** b_360628, NI b_360628Len0, NI lo_360632, NI m_360634, NI hi_360636, TY360570 cmp_360644, NU8 order_360647) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_360644.ClEnv? cmp_360644.ClPrc(a_360620[m_360634], a_360620[(NI32)(m_360634 + 1)], cmp_360644.ClEnv):((TMP4762)(cmp_360644.ClPrc))(a_360620[m_360634], a_360620[(NI32)(m_360634 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_355020(LOC3, order_360647);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_360632;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_360634)) goto LA8;
			unsureAsgnRef((void**) &b_360628[bb], a_360620[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_360632;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_360636);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_360644.ClEnv? cmp_360644.ClPrc(b_360628[i], a_360620[j], cmp_360644.ClEnv):((TMP4763)(cmp_360644.ClPrc))(b_360628[i], a_360620[j]);
				LOC16 = 0;
				LOC16 = HEX2A_355020(LOC15, order_360647);
				if (!(LOC16 <= 0)) goto LA17;
				unsureAsgnRef((void**) &a_360620[k], b_360628[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) &a_360620[k], a_360620[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) &a_360620[k], b_360628[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_360551)(NimStringDesc** a_360559, NI a_360559Len0, TY360570 cmp_360569, NU8 order_360572) {
	NI n;
	TY119408* b;
	NI s;
	n = a_360559Len0;
	b = 0;
	b = (TY119408*) newSeq((&NTI119408), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_360612(a_360559, a_360559Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_360569, order_360572);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_358614)(tindexentry357264* a_358622, NI a_358622Len0, tindexentry357264* b_358630, NI b_358630Len0, NI lo_358634, NI m_358636, NI hi_358638, TY358572 cmp_358646, NU8 order_358649) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_358646.ClEnv? cmp_358646.ClPrc(a_358622[m_358636], a_358622[(NI32)(m_358636 + 1)], cmp_358646.ClEnv):((TMP4766)(cmp_358646.ClPrc))(a_358622[m_358636], a_358622[(NI32)(m_358636 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_355020(LOC3, order_358649);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_358634;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_358636)) goto LA8;
			HEX3CHEX2D_357607(&b_358630[bb], a_358622[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_358634;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_358638);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_358646.ClEnv? cmp_358646.ClPrc(b_358630[i], a_358622[j], cmp_358646.ClEnv):((TMP4767)(cmp_358646.ClPrc))(b_358630[i], a_358622[j]);
				LOC16 = 0;
				LOC16 = HEX2A_355020(LOC15, order_358649);
				if (!(LOC16 <= 0)) goto LA17;
				HEX3CHEX2D_357607(&a_358622[k], b_358630[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_357607(&a_358622[k], a_358622[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			HEX3CHEX2D_357607(&a_358622[k], b_358630[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_358553)(tindexentry357264* a_358561, NI a_358561Len0, TY358572 cmp_358571, NU8 order_358574) {
	NI n;
	TY359804* b;
	NI s;
	n = a_358561Len0;
	b = 0;
	b = (TY359804*) newSeq((&NTI359804), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_358614(a_358561, a_358561Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_358571, order_358574);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_415186)(tentry414478* a_415194, NI a_415194Len0, tentry414478* b_415202, NI b_415202Len0, NI lo_415206, NI m_415208, NI hi_415210, TY415144 cmp_415218, NU8 order_415221) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_415218.ClEnv? cmp_415218.ClPrc(a_415194[m_415208], a_415194[(NI32)(m_415208 + 1)], cmp_415218.ClEnv):((TMP4825)(cmp_415218.ClPrc))(a_415194[m_415208], a_415194[(NI32)(m_415208 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_355020(LOC3, order_415221);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_415206;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_415208)) goto LA8;
			b_415202[bb].Pos = a_415194[j].Pos;
			unsureAsgnRef((void**) &b_415202[bb].Sym, a_415194[j].Sym);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_415206;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_415210);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_415218.ClEnv? cmp_415218.ClPrc(b_415202[i], a_415194[j], cmp_415218.ClEnv):((TMP4826)(cmp_415218.ClPrc))(b_415202[i], a_415194[j]);
				LOC16 = 0;
				LOC16 = HEX2A_355020(LOC15, order_415221);
				if (!(LOC16 <= 0)) goto LA17;
				a_415194[k].Pos = b_415202[i].Pos;
				unsureAsgnRef((void**) &a_415194[k].Sym, b_415202[i].Sym);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				a_415194[k].Pos = a_415194[j].Pos;
				unsureAsgnRef((void**) &a_415194[k].Sym, a_415194[j].Sym);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			a_415194[k].Pos = b_415202[i].Pos;
			unsureAsgnRef((void**) &a_415194[k].Sym, b_415202[i].Sym);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_415125)(tentry414478* a_415133, NI a_415133Len0, TY415144 cmp_415143, NU8 order_415146) {
	NI n;
	TY414485* b;
	NI s;
	n = a_415133Len0;
	b = 0;
	b = (TY414485*) newSeq((&NTI414485), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_415186(a_415133, a_415133Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_415143, order_415146);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void) {
NTI355033.size = sizeof(NI);
NTI355033.kind = 20;
NTI355033.base = (&NTI108);
NTI355033.flags = 3;
}

