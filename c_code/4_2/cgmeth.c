/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TY418291 TY418291;
typedef struct TY418292 TY418292;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tsym224849 tsym224849;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct intset221056 intset221056;
typedef struct ttrunk221052 ttrunk221052;
typedef struct ttrunkseq221054 ttrunkseq221054;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY418292 {
tsymseq224821* Field0;
tsym224849* Field1;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
typedef NimStringDesc* TY169969[2];
typedef tsym224849* TY289498[1];
struct  intset221056  {
NI Counter;
NI Max;
ttrunk221052* Head;
ttrunkseq221054* Data;
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
struct  ttrunk221052  {
ttrunk221052* Next;
NI Key;
TY26220 Bits;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY418291 {
  TGenericSeq Sup;
  TY418292 data[SEQ_DECL_SIZE];
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
struct ttrunkseq221054 {
  TGenericSeq Sup;
  ttrunk221052* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP927)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, samemethodbucket_418320)(tsym224849* a, tsym224849* b);
static N_INLINE(NI, sonslen_225258)(ttype224855* n);
N_NIMCALL(NIM_BOOL, sametypeornil_266367)(ttype224855* a, ttype224855* b, NU8 flags);
N_NIMCALL(ttype224855*, skiptypes_229245)(ttype224855* t, NU64 kinds);
static N_INLINE(ttype224855*, lastson_225270)(ttype224855* n);
N_NIMCALL(NIM_BOOL, sametype_266351)(ttype224855* a, ttype224855* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_268788)(ttype224855* a, ttype224855* b);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_418412)(tsym224849* s, tnode224819* dispatcher);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(void, add_225501)(tnode224819* father, tnode224819* son);
static N_INLINE(tnode224819*, lastson_225264)(tnode224819* n);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
N_NIMCALL(void, fixupdispatcher_418628)(tsym224849* meth, tsym224849* disp);
N_NIMCALL(tnode224819*, copytree_225332)(tnode224819* src);
N_NIMCALL(void, message_197959)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_227488)(NI16 x);
N_NIMCALL(void, checkmethodeffects_379471)(tsym224849* disp, tsym224849* branch);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tsym224849*, createdispatcher_418488)(tsym224849* s);
N_NIMCALL(tsym224849*, copysym_225206)(tsym224849* s, NIM_BOOL keepid);
N_NIMCALL(ttype224855*, copytype_225198)(ttype224855* t, tsym224849* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_225290)(tnode224819* father, tnode224819* son);
N_NIMCALL(tnode224819*, newsymnode_225135)(tsym224849* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_79404, TNimType* mt);
N_NIMCALL(void, internalerror_197970)(tlineinfo195539 info, NimStringDesc* errmsg);
N_NIMCALL(tnode224819*, genconv_418017)(tnode224819* n, ttype224855* d, NIM_BOOL downcast);
N_NIMCALL(tnode224819*, newnodeit_225148)(NU8 kind, tlineinfo195539 info, ttype224855* typ);
N_NIMCALL(tnode224819*, newnode_225093)(NU8 kind);
N_NIMCALL(void, initintset_221950)(intset221056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_419061)(tsymseq224821* methods, NI col);
N_NIMCALL(void, incl_221869)(intset221056* s, NI key);
N_NIMCALL(void, sortbucket_419158)(tsymseq224821** a, intset221056* relevantcols);
N_NIMCALL(NI, cmpsignatures_419111)(tsym224849* a, tsym224849* b, intset221056* relevantcols);
N_NIMCALL(NIM_BOOL, contains_221837)(intset221056* s, NI key);
N_NIMCALL(tsym224849*, gendispatcher_419235)(tsymseq224821* methods, intset221056* relevantcols);
N_NIMCALL(tnode224819*, newnodei_225141)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(tsym224849*, getsyssym_281054)(NimStringDesc* name);
N_NIMCALL(ttype224855*, getsystype_281030)(NU8 kind);
STRING_LITERAL(TMP3116, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3124, "no method dispatcher found", 26);
STRING_LITERAL(TMP3125, "cgmeth.genConv", 14);
STRING_LITERAL(TMP3126, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3127, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4048, "and", 3);
STRING_LITERAL(TMP4049, "of", 2);
TY418291* gmethods_418315;
TNimType NTI418292; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI224821; /* TSymSeq */
extern TNimType NTI224817; /* PSym */
TNimType NTI418291; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern tgcheap46816 gch_46844;
extern tnode224819* emptynode_225738;
N_NIMCALL(void, TMP927)(void* p, NI op) {
	TY418291* a;
	NI LOC1;
	a = (TY418291*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

static N_INLINE(NI, sonslen_225258)(ttype224855* n) {
	NI result;
	result = 0;
	{
		if (!(*n).Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(ttype224855*, lastson_225270)(ttype224855* n) {
	ttype224855* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_225258(n);
	result = (*n).Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(NIM_BOOL, samemethodbucket_418320)(tsym224849* a, tsym224849* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		if (!!(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_225258((*a).Typ);
		LOC8 = 0;
		LOC8 = sonslen_225258((*b).Typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_266367((*(*a).Typ).Sons->data[0], (*(*b).Typ).Sons->data[0], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_418337;
		NI HEX3Atmp_418386;
		NI LOC17;
		NI res_418389;
		i_418337 = 0;
		HEX3Atmp_418386 = 0;
		LOC17 = 0;
		LOC17 = sonslen_225258((*a).Typ);
		HEX3Atmp_418386 = (NI64)(LOC17 - 1);
		res_418389 = 1;
		{
			while (1) {
				ttype224855* aa;
				ttype224855* bb;
				if (!(res_418389 <= HEX3Atmp_418386)) goto LA19;
				i_418337 = res_418389;
				aa = (*(*a).Typ).Sons->data[i_418337];
				bb = (*(*b).Typ).Sons->data[i_418337];
				{
					while (1) {
						aa = skiptypes_229245(aa, 2048);
						bb = skiptypes_229245(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).Kind == (*bb).Kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((14680064 &(IL64(1)<<(((*aa).Kind)&IL64(63))))!=0);
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_225270(aa);
							bb = lastson_225270(bb);
						}
						goto LA22;
						LA26: ;
						{
							goto LA20;
						}
						LA22: ;
					}
				} LA20: ;
				{
					NIM_BOOL LOC31;
					NIM_BOOL LOC33;
					NIM_BOOL LOC34;
					NI LOC37;
					LOC31 = 0;
					LOC31 = sametype_266351(aa, bb, 0);
					if (LOC31) goto LA32;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = ((*aa).Kind == ((NU8) 17));
					if (!(LOC34)) goto LA35;
					LOC34 = ((*bb).Kind == ((NU8) 17));
					LA35: ;
					LOC33 = LOC34;
					if (!(LOC33)) goto LA36;
					LOC37 = 0;
					LOC37 = inheritancediff_268788(bb, aa);
					LOC33 = (LOC37 < 0);
					LA36: ;
					LOC31 = LOC33;
					LA32: ;
					if (!LOC31) goto LA38;
				}
				goto LA29;
				LA38: ;
				{
					goto BeforeRet;
				}
				LA29: ;
				res_418389 += 1;
			} LA19: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
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

N_NIMCALL(void, attachdispatcher_418412)(tsym224849* s, tnode224819* dispatcher) {
	NI l;
	NI LOC1;
	tnode224819* x;
	LOC1 = 0;
	LOC1 = len_225367((*s).Ast);
	l = (NI64)(LOC1 - 1);
	x = (*(*s).Ast).kindU.S6.Sons->data[l];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).Kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.Sym).Flags &(1<<((((NU8) 25))&31)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[l], dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_225501((*s).Ast, dispatcher);
	}
	LA2: ;
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

static N_INLINE(tnode224819*, lastson_225264)(tnode224819* n) {
	tnode224819* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_225252(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(void, fixupdispatcher_418628)(tsym224849* meth, tsym224849* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_225252((*disp).Ast);
		LOC4 = (7 < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_225252((*meth).Ast);
		LOC4 = (7 < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).Ast).kindU.S6.Sons->data[7] == emptynode_225738);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) &(*(*disp).Ast).kindU.S6.Sons->data[7], copytree_225332((*(*meth).Ast).kindU.S6.Sons->data[7]));
	}
	LA9: ;
	{
		if (!((*(*disp).Typ).Locklevel == ((NI16) -1))) goto LA13;
		(*(*disp).Typ).Locklevel = (*(*meth).Typ).Locklevel;
	}
	goto LA11;
	LA13: ;
	{
		NIM_BOOL LOC16;
		TY169969 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).Typ).Locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).Typ).Locklevel == (*(*disp).Typ).Locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_227488((*(*meth).Typ).Locklevel);
		LOC20[1] = HEX24_227488((*(*disp).Typ).Locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3116), LOC20, 2);
		message_197959((*meth).Info, ((NU16) 256), LOC21);
		{
			if (!((*(*disp).Typ).Locklevel < (*(*meth).Typ).Locklevel)) goto LA24;
			(*(*disp).Typ).Locklevel = (*(*meth).Typ).Locklevel;
		}
		LA24: ;
	}
	goto LA11;
	LA18: ;
	LA11: ;
}

N_NIMCALL(tsym224849*, createdispatcher_418488)(tsym224849* s) {
	tsym224849* result;
	tsym224849* disp;
	tnode224819* LOC15;
	tnode224819* LOC16;
	result = 0;
	disp = copysym_225206(s, NIM_FALSE);
	(*disp).Flags |= ((NI32)1)<<((((NU8) 25))%(sizeof(NI32)*8));
	(*disp).Flags &= ~(((NI32)1) << ((((NU8) 1)) % (sizeof(NI32)*8)));
	asgnRefNoCycle((void**) &(*disp).Typ, copytype_225198((*disp).Typ, (*(*disp).Typ).Owner, NIM_FALSE));
	{
		if (!((*(*disp).Typ).Callconv == ((NU8) 5))) goto LA3;
		(*(*disp).Typ).Callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) &(*disp).Ast, copytree_225332((*s).Ast));
	asgnRefNoCycle((void**) &(*(*disp).Ast).kindU.S6.Sons->data[6], emptynode_225738);
	asgnRefNoCycle((void**) &(*disp).Loc.R, NIM_NIL);
	{
		if (!!(((*(*s).Typ).Sons->data[0] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_225252((*disp).Ast);
			if (!(7 < LOC11)) goto LA12;
			asgnRefNoCycle((void**) &(*(*(*disp).Ast).kindU.S6.Sons->data[7]).kindU.S4.Sym, copysym_225206((*(*(*s).Ast).kindU.S6.Sons->data[7]).kindU.S4.Sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_225290((*disp).Ast, emptynode_225738);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_225135(disp);
	attachdispatcher_418412(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_225135(disp);
	attachdispatcher_418412(disp, LOC16);
	result = disp;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, methoddef_418824)(tsym224849* s, NIM_BOOL fromcache) {
	NI l;
	TY418292 LOC10;
	TY289498 LOC11;
	l = gmethods_418315->Sup.len;
	{
		NI i_418852;
		NI HEX3Atmp_419041;
		NI res_419044;
		i_418852 = 0;
		HEX3Atmp_419041 = 0;
		HEX3Atmp_419041 = (NI64)(l - 1);
		res_419044 = 0;
		{
			while (1) {
				tsym224849* disp;
				if (!(res_419044 <= HEX3Atmp_419041)) goto LA3;
				i_418852 = res_419044;
				disp = gmethods_418315->data[i_418852].Field1;
				{
					NIM_BOOL LOC6;
					tnode224819* LOC9;
					LOC6 = 0;
					LOC6 = samemethodbucket_418320(disp, s);
					if (!LOC6) goto LA7;
					gmethods_418315->data[i_418852].Field0 = (tsymseq224821*) incrSeq(&(gmethods_418315->data[i_418852].Field0)->Sup, sizeof(tsym224849*));
					asgnRefNoCycle((void**) &gmethods_418315->data[i_418852].Field0->data[gmethods_418315->data[i_418852].Field0->Sup.len-1], s);
					LOC9 = 0;
					LOC9 = lastson_225264((*disp).Ast);
					attachdispatcher_418412(s, LOC9);
					fixupdispatcher_418628(s, disp);
					checkmethodeffects_379471(disp, s);
					goto BeforeRet;
				}
				LA7: ;
				res_419044 += 1;
			} LA3: ;
		}
	}
	memset((void*)&LOC10, 0, sizeof(LOC10));
	LOC10.Field0 = (tsymseq224821*) newSeq((&NTI224821), 1);
	memset((void*)LOC11, 0, sizeof(LOC11));
	LOC11[0] = s;
	asgnRefNoCycle((void**) &LOC10.Field0->data[0], LOC11[0]);
	LOC10.Field1 = createdispatcher_418488(s);
	gmethods_418315 = (TY418291*) incrSeq(&(gmethods_418315)->Sup, sizeof(TY418292));
	genericSeqAssign(&gmethods_418315->data[gmethods_418315->Sup.len-1].Field0, LOC10.Field0, (&NTI224821));
	asgnRefNoCycle((void**) &gmethods_418315->data[gmethods_418315->Sup.len-1].Field1, LOC10.Field1);
	{
		if (!fromcache) goto LA14;
		internalerror_197970((*s).Info, ((NimStringDesc*) &TMP3124));
	}
	LA14: ;
	BeforeRet: ;
}

N_NIMCALL(tnode224819*, genconv_418017)(tnode224819* n, ttype224855* d, NIM_BOOL downcast) {
	tnode224819* result;
	ttype224855* dest;
	ttype224855* source;
	result = 0;
	dest = skiptypes_229245(d, IL64(211106247256320));
	source = skiptypes_229245((*n).Typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).Kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).Kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_268788(dest, source);
		{
			if (!(diff == IL64(9223372036854775807))) goto LA9;
			internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3125));
		}
		LA9: ;
		{
			if (!(diff < 0)) goto LA13;
			result = newnodeit_225148(((NU8) 67), (*n).Info, d);
			addson_225290(result, n);
			{
				if (!downcast) goto LA17;
				internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3126));
			}
			LA17: ;
		}
		goto LA11;
		LA13: ;
		{
			if (!(0 < diff)) goto LA20;
			result = newnodeit_225148(((NU8) 66), (*n).Info, d);
			addson_225290(result, n);
			{
				if (!!(downcast)) goto LA24;
				internalerror_197970((*n).Info, ((NimStringDesc*) &TMP3127));
			}
			LA24: ;
		}
		goto LA11;
		LA20: ;
		{
			result = n;
		}
		LA11: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode224819*, methodcall_418056)(tnode224819* n) {
	tnode224819* result;
	tsym224849* disp;
	tnode224819* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_225264((*(*(*result).kindU.S6.Sons->data[0]).kindU.S4.Sym).Ast);
	disp = (*LOC1).kindU.S4.Sym;
	asgnRefNoCycle((void**) &(*(*result).kindU.S6.Sons->data[0]).kindU.S4.Sym, disp);
	{
		NI i_418241;
		NI HEX3Atmp_418271;
		NI LOC3;
		NI res_418274;
		i_418241 = 0;
		HEX3Atmp_418271 = 0;
		LOC3 = 0;
		LOC3 = sonslen_225252(result);
		HEX3Atmp_418271 = (NI64)(LOC3 - 1);
		res_418274 = 1;
		{
			while (1) {
				if (!(res_418274 <= HEX3Atmp_418271)) goto LA5;
				i_418241 = res_418274;
				asgnRefNoCycle((void**) &(*result).kindU.S6.Sons->data[i_418241], genconv_418017((*result).kindU.S6.Sons->data[i_418241], (*(*disp).Typ).Sons->data[i_418241], NIM_TRUE));
				res_418274 += 1;
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_419061)(tsymseq224821* methods, NI col) {
	NIM_BOOL result;
	ttype224855* t;
	result = 0;
	t = skiptypes_229245((*(*methods->data[0]).Typ).Sons->data[col], IL64(211106247215360));
	{
		if (!((*t).Kind == ((NU8) 17))) goto LA3;
		{
			NI i_419088;
			NI HEX3Atmp_419091;
			NI res_419094;
			i_419088 = 0;
			HEX3Atmp_419091 = 0;
			HEX3Atmp_419091 = (methods->Sup.len-1);
			res_419094 = 1;
			{
				while (1) {
					ttype224855* t2;
					if (!(res_419094 <= HEX3Atmp_419091)) goto LA7;
					i_419088 = res_419094;
					t2 = skiptypes_229245((*(*methods->data[i_419088]).Typ).Sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_266351(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_419094 += 1;
				} LA7: ;
			}
		}
	}
	LA3: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_419111)(tsym224849* a, tsym224849* b, intset221056* relevantcols) {
	NI result;
	result = 0;
	{
		NI col_419129;
		NI HEX3Atmp_419138;
		NI LOC2;
		NI res_419141;
		col_419129 = 0;
		HEX3Atmp_419138 = 0;
		LOC2 = 0;
		LOC2 = sonslen_225258((*a).Typ);
		HEX3Atmp_419138 = (NI64)(LOC2 - 1);
		res_419141 = 1;
		{
			while (1) {
				if (!(res_419141 <= HEX3Atmp_419138)) goto LA4;
				col_419129 = res_419141;
				{
					NIM_BOOL LOC7;
					ttype224855* aa;
					ttype224855* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_221837(relevantcols, col_419129);
					if (!LOC7) goto LA8;
					aa = skiptypes_229245((*(*a).Typ).Sons->data[col_419129], IL64(211106247215360));
					bb = skiptypes_229245((*(*b).Typ).Sons->data[col_419129], IL64(211106247215360));
					d = inheritancediff_268788(aa, bb);
					{
						if (!!((d == IL64(9223372036854775807)))) goto LA12;
						result = d;
						goto BeforeRet;
					}
					LA12: ;
				}
				LA8: ;
				res_419141 += 1;
			} LA4: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_419158)(tsymseq224821** a, intset221056* relevantcols) {
	NI n;
	NI h;
	n = (*a)->Sup.len;
	h = 1;
	{
		while (1) {
			h = (NI64)((NI64)(3 * h) + 1);
			{
				if (!(n < h)) goto LA5;
				goto LA1;
			}
			LA5: ;
		}
	} LA1: ;
	{
		while (1) {
			h = (NI64)(h / 3);
			{
				NI i_419189;
				NI HEX3Atmp_419197;
				NI res_419200;
				i_419189 = 0;
				HEX3Atmp_419197 = 0;
				HEX3Atmp_419197 = (NI64)(n - 1);
				res_419200 = h;
				{
					while (1) {
						tsym224849* v;
						NI j;
						if (!(res_419200 <= HEX3Atmp_419197)) goto LA11;
						i_419189 = res_419200;
						v = (*a)->data[i_419189];
						j = i_419189;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_419111((*a)->data[(NI64)(j - h)], v, relevantcols);
								if (!(0 <= LOC14)) goto LA13;
								asgnRefNoCycle((void**) &(*a)->data[j], (*a)->data[(NI64)(j - h)]);
								j = (NI64)(j - h);
								{
									if (!(j < h)) goto LA17;
									goto LA12;
								}
								LA17: ;
							} LA13: ;
						} LA12: ;
						asgnRefNoCycle((void**) &(*a)->data[j], v);
						res_419200 += 1;
					} LA11: ;
				}
			}
			{
				if (!(h == 1)) goto LA21;
				goto LA7;
			}
			LA21: ;
		}
	} LA7: ;
}

N_NIMCALL(tsym224849*, gendispatcher_419235)(tsymseq224821* methods, intset221056* relevantcols) {
	tsym224849* result;
	tsym224849* base;
	tnode224819* LOC1;
	NI paramlen;
	tnode224819* disp;
	tsym224849* ands;
	tsym224849* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_225264((*methods->data[0]).Ast);
	base = (*LOC1).kindU.S4.Sym;
	result = base;
	paramlen = sonslen_225258((*base).Typ);
	disp = newnodei_225141(((NU8) 92), (*base).Info);
	ands = getsyssym_281054(((NimStringDesc*) &TMP4048));
	iss = getsyssym_281054(((NimStringDesc*) &TMP4049));
	{
		NI meth_419271;
		NI HEX3Atmp_419470;
		NI res_419473;
		meth_419271 = 0;
		HEX3Atmp_419470 = 0;
		HEX3Atmp_419470 = (methods->Sup.len-1);
		res_419473 = 0;
		{
			while (1) {
				tsym224849* curr;
				tnode224819* cond;
				tnode224819* call;
				tnode224819* LOC24;
				tnode224819* ret;
				if (!(res_419473 <= HEX3Atmp_419470)) goto LA4;
				meth_419271 = res_419473;
				curr = methods->data[meth_419271];
				cond = NIM_NIL;
				{
					NI col_419286;
					NI HEX3Atmp_419458;
					NI res_419461;
					col_419286 = 0;
					HEX3Atmp_419458 = 0;
					HEX3Atmp_419458 = (NI64)(paramlen - 1);
					res_419461 = 1;
					{
						while (1) {
							if (!(res_419461 <= HEX3Atmp_419458)) goto LA7;
							col_419286 = res_419461;
							{
								NIM_BOOL LOC10;
								tnode224819* isn;
								ttype224855* LOC13;
								tnode224819* LOC14;
								tnode224819* LOC15;
								tnode224819* LOC16;
								LOC10 = 0;
								LOC10 = contains_221837(relevantcols, col_419286);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_281030(((NU8) 1));
								isn = newnodeit_225148(((NU8) 27), (*base).Info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_225135(iss);
								addson_225290(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_225135((*(*(*(*base).Typ).N).kindU.S6.Sons->data[col_419286]).kindU.S4.Sym);
								addson_225290(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_225148(((NU8) 4), (*base).Info, (*(*curr).Typ).Sons->data[col_419286]);
								addson_225290(isn, LOC16);
								{
									tnode224819* a;
									ttype224855* LOC21;
									tnode224819* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_281030(((NU8) 1));
									a = newnodeit_225148(((NU8) 27), (*base).Info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_225135(ands);
									addson_225290(a, LOC22);
									addson_225290(a, cond);
									addson_225290(a, isn);
									cond = a;
								}
								goto LA17;
								LA19: ;
								{
									cond = isn;
								}
								LA17: ;
							}
							LA11: ;
							res_419461 += 1;
						} LA7: ;
					}
				}
				call = newnodei_225141(((NU8) 27), (*base).Info);
				LOC24 = 0;
				LOC24 = newsymnode_225135(curr);
				addson_225290(call, LOC24);
				{
					NI col_419347;
					NI HEX3Atmp_419464;
					NI res_419467;
					col_419347 = 0;
					HEX3Atmp_419464 = 0;
					HEX3Atmp_419464 = (NI64)(paramlen - 1);
					res_419467 = 1;
					{
						while (1) {
							tnode224819* LOC28;
							tnode224819* LOC29;
							if (!(res_419467 <= HEX3Atmp_419464)) goto LA27;
							col_419347 = res_419467;
							LOC28 = 0;
							LOC28 = newsymnode_225135((*(*(*(*base).Typ).N).kindU.S6.Sons->data[col_419347]).kindU.S4.Sym);
							LOC29 = 0;
							LOC29 = genconv_418017(LOC28, (*(*curr).Typ).Sons->data[col_419347], NIM_FALSE);
							addson_225290(call, LOC29);
							res_419467 += 1;
						} LA27: ;
					}
				}
				ret = 0;
				{
					tnode224819* a;
					tnode224819* LOC34;
					if (!!(((*(*base).Typ).Sons->data[0] == NIM_NIL))) goto LA32;
					a = newnodei_225141(((NU8) 73), (*base).Info);
					LOC34 = 0;
					LOC34 = newsymnode_225135((*(*(*base).Ast).kindU.S6.Sons->data[7]).kindU.S4.Sym);
					addson_225290(a, LOC34);
					addson_225290(a, call);
					ret = newnodei_225141(((NU8) 108), (*base).Info);
					addson_225290(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					tnode224819* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_225141(((NU8) 86), (*base).Info);
					addson_225290(a, cond);
					addson_225290(a, ret);
					addson_225290(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_419473 += 1;
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) &(*(*result).Ast).kindU.S6.Sons->data[6], disp);
	return result;
}

N_NIMCALL(tnode224819*, generatemethoddispatchers_419508)(void) {
	tnode224819* result;
	result = 0;
	result = newnode_225093(((NU8) 114));
	{
		NI bucket_419534;
		NI HEX3Atmp_419558;
		NI res_419561;
		bucket_419534 = 0;
		HEX3Atmp_419558 = 0;
		HEX3Atmp_419558 = (NI64)(gmethods_418315->Sup.len - 1);
		res_419561 = 0;
		{
			while (1) {
				intset221056 relevantcols;
				tsym224849* LOC13;
				tnode224819* LOC14;
				if (!(res_419561 <= HEX3Atmp_419558)) goto LA3;
				bucket_419534 = res_419561;
				memset((void*)&relevantcols, 0, sizeof(relevantcols));
				chckNil((void*)&relevantcols);
				memset((void*)&relevantcols, 0, sizeof(relevantcols));
				initintset_221950(&relevantcols);
				{
					NI col_419548;
					NI HEX3Atmp_419553;
					NI LOC5;
					NI res_419556;
					col_419548 = 0;
					HEX3Atmp_419553 = 0;
					LOC5 = 0;
					LOC5 = sonslen_225258((*gmethods_418315->data[bucket_419534].Field0->data[0]).Typ);
					HEX3Atmp_419553 = (NI64)(LOC5 - 1);
					res_419556 = 1;
					{
						while (1) {
							if (!(res_419556 <= HEX3Atmp_419553)) goto LA7;
							col_419548 = res_419556;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_419061(gmethods_418315->data[bucket_419534].Field0, col_419548);
								if (!LOC10) goto LA11;
								incl_221869(&relevantcols, col_419548);
							}
							LA11: ;
							res_419556 += 1;
						} LA7: ;
					}
				}
				sortbucket_419158(&gmethods_418315->data[bucket_419534].Field0, &relevantcols);
				LOC13 = 0;
				LOC13 = gendispatcher_419235(gmethods_418315->data[bucket_419534].Field0, &relevantcols);
				LOC14 = 0;
				LOC14 = newsymnode_225135(LOC13);
				addson_225290(result, LOC14);
				res_419561 += 1;
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_cgmethInit)(void) {
	if (gmethods_418315) nimGCunrefNoCycle(gmethods_418315);
	gmethods_418315 = (TY418291*) newSeqRC1((&NTI418291), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_cgmethDatInit)(void) {
static TNimNode* TMP926[2];
static TNimNode TMP924[3];
NTI418292.size = sizeof(TY418292);
NTI418292.kind = 18;
NTI418292.base = 0;
NTI418292.flags = 2;
TMP926[0] = &TMP924[1];
TMP924[1].kind = 1;
TMP924[1].offset = offsetof(TY418292, Field0);
TMP924[1].typ = (&NTI224821);
TMP924[1].name = "Field0";
TMP926[1] = &TMP924[2];
TMP924[2].kind = 1;
TMP924[2].offset = offsetof(TY418292, Field1);
TMP924[2].typ = (&NTI224817);
TMP924[2].name = "Field1";
TMP924[0].len = 2; TMP924[0].kind = 2; TMP924[0].sons = &TMP926[0];
NTI418292.node = &TMP924[0];
NTI418291.size = sizeof(TY418291*);
NTI418291.kind = 24;
NTI418291.base = (&NTI418292);
NTI418291.flags = 2;
NTI418291.marker = TMP927;
}

