/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode224819 tnode224819;
typedef struct tsym224849 tsym224849;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype224855 ttype224855;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
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
typedef struct templctx451019 templctx451019;
typedef struct tidtable224867 tidtable224867;
typedef struct tidpairseq224865 tidpairseq224865;
typedef struct tidpair224863 tidpair224863;
typedef struct TY84535 TY84535;
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
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  tidpair224863  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable224867  {
NI Counter;
tidpairseq224865* Data;
};
struct  templctx451019  {
tsym224849* Owner;
tsym224849* Gensymowner;
NIM_BOOL Instlines;
tidtable224867 Mapping;
};
struct TY84535 {
NimStringDesc* Field0;
NI Field1;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
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
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
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
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_197917)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode224819*, evaltemplateargs_451217)(tnode224819* n, tsym224849* s);
static N_INLINE(NI, sonslen_225252)(tnode224819* n);
static N_INLINE(NI, sonslen_225258)(ttype224855* n);
N_NIMCALL(tnode224819*, newnodei_225141)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(tnode224819*, copytree_225332)(tnode224819* src);
N_NIMCALL(void, localerror_197938)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_225290)(tnode224819* father, tnode224819* son);
N_NIMCALL(void, initidtable_225170)(tidtable224867* x);
N_NIMCALL(tnode224819*, getbody_278269)(tsym224849* s);
static N_INLINE(NIM_BOOL, isatom_231963)(tnode224819* n);
N_NIMCALL(void, evaltemplateaux_451039)(tnode224819* templ, tnode224819* actual, templctx451019* c, tnode224819* result);
static N_INLINE(NI, len_225367)(tnode224819* n);
N_NIMCALL(void, add_225501)(tnode224819* father, tnode224819* son);
N_NIMCALL(void, internalerror_197989)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_198109)(TY84535 x_198113);
N_NIMCALL(TNimObject*, idtableget_234182)(tidtable224867 t, tidobj200015* key);
N_NIMCALL(tsym224849*, copysym_225206)(tsym224849* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void, idtableput_234196)(tidtable224867* t, tidobj200015* key, TNimObject* val);
N_NIMCALL(tnode224819*, newsymnode_226754)(tsym224849* sym, tlineinfo195539 info);
N_NIMCALL(tnode224819*, copynode_451027)(templctx451019* ctx, tnode224819* a, tnode224819* b);
N_NIMCALL(tnode224819*, copynode_225326)(tnode224819* src);
N_NIMCALL(NimStringDesc*, rendertree_249057)(tnode224819* n, NU8 renderflags);
static N_INLINE(NI, safelen_225427)(tnode224819* n);
STRING_LITERAL(TMP2813, "", 0);
STRING_LITERAL(TMP2815, "evaltempl.nim", 13);
NIM_CONST TY84535 TMP2814 = {((NimStringDesc*) &TMP2815),
39}
;
NI evaltemplatecounter_451330;
extern tgcheap46816 gch_46844;

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

N_NIMCALL(tnode224819*, evaltemplateargs_451217)(tnode224819* n, tsym224849* s) {
	tnode224819* result;
	NI a;
	NI f;
	result = 0;
	a = 0;
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		a = sonslen_225252(n);
	}
	break;
	default:
	{
		a = 0;
	}
	break;
	}
	f = sonslen_225258((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_197917((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2813));
	}
	LA5: ;
	result = newnodei_225141(((NU8) 150), (*n).Info);
	{
		NI i_451237;
		NI HEX3Atmp_451310;
		NI res_451313;
		i_451237 = 0;
		HEX3Atmp_451310 = 0;
		HEX3Atmp_451310 = (NI64)(f - 1);
		res_451313 = 1;
		{
			while (1) {
				tnode224819* arg;
				if (!(res_451313 <= HEX3Atmp_451310)) goto LA9;
				i_451237 = res_451313;
				{
					if (!(i_451237 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_451237];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_225332((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_451237]).kindU.S4.Sym).Ast);
				}
				LA10: ;
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).Kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					localerror_197938((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2813));
				}
				LA19: ;
				addson_225290(result, arg);
				res_451313 += 1;
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_231963)(tnode224819* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
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

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
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

N_NIMCALL(tnode224819*, copynode_451027)(templctx451019* ctx, tnode224819* a, tnode224819* b) {
	tnode224819* result;
	result = 0;
	result = copynode_225326(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_451039)(tnode224819* templ, tnode224819* actual, templctx451019* c, tnode224819* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym224849* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				tnode224819* x;
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				{
					if (!((*x).Kind == ((NU8) 150))) goto LA12;
					{
						tnode224819* y_451094;
						y_451094 = 0;
						{
							NI i_451179;
							NI HEX3Atmp_451181;
							NI LOC16;
							NI res_451183;
							i_451179 = 0;
							HEX3Atmp_451181 = 0;
							LOC16 = 0;
							LOC16 = len_225367(x);
							HEX3Atmp_451181 = (LOC16 - 1);
							res_451183 = 0;
							{
								while (1) {
									if (!(res_451183 <= HEX3Atmp_451181)) goto LA18;
									i_451179 = res_451183;
									y_451094 = (*x).kindU.S6.Sons->data[i_451179];
									add_225501(result, y_451094);
									res_451183 += 1;
								} LA18: ;
							}
						}
					}
				}
				goto LA10;
				LA12: ;
				{
					tnode224819* LOC20;
					LOC20 = 0;
					LOC20 = copytree_225332(x);
					add_225501(result, LOC20);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym224849* x;
				TNimObject* LOC27;
				tlineinfo195539 LOC32;
				tnode224819* LOC38;
				{
					NimStringDesc* LOC26;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA24;
					LOC26 = 0;
					LOC26 = HEX24_198109(TMP2814);
					internalerror_197989(LOC26);
				}
				LA24: ;
				LOC27 = 0;
				LOC27 = idtableget_234182((*c).Mapping, &s->Sup);
				x = ((tsym224849*) (LOC27));
				{
					if (!(x == NIM_NIL)) goto LA30;
					x = copysym_225206(s, NIM_FALSE);
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					idtableput_234196(&(*c).Mapping, &s->Sup, &x->Sup.Sup);
				}
				LA30: ;
				{
					if (!(*c).Instlines) goto LA35;
					LOC32 = (*actual).Info;
				}
				goto LA33;
				LA35: ;
				{
					LOC32 = (*templ).Info;
				}
				LA33: ;
				LOC38 = 0;
				LOC38 = newsymnode_226754(x, LOC32);
				add_225501(result, LOC38);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode224819* LOC40;
			LOC40 = 0;
			LOC40 = copynode_451027(&(*c), templ, actual);
			add_225501(result, LOC40);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode224819* LOC42;
		LOC42 = 0;
		LOC42 = copynode_451027(&(*c), templ, actual);
		add_225501(result, LOC42);
	}
	break;
	default:
	{
		tnode224819* res;
		res = copynode_451027(&(*c), templ, actual);
		{
			NI i_451160;
			NI HEX3Atmp_451185;
			NI LOC45;
			NI res_451188;
			i_451160 = 0;
			HEX3Atmp_451185 = 0;
			LOC45 = 0;
			LOC45 = sonslen_225252(templ);
			HEX3Atmp_451185 = (NI64)(LOC45 - 1);
			res_451188 = 0;
			{
				while (1) {
					if (!(res_451188 <= HEX3Atmp_451185)) goto LA47;
					i_451160 = res_451188;
					evaltemplateaux_451039((*templ).kindU.S6.Sons->data[i_451160], actual, c, res);
					res_451188 += 1;
				} LA47: ;
			}
		}
		add_225501(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_225427)(tnode224819* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = 0;
	}
	goto LA1;
	LA5: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode224819*, evaltemplate_451334)(tnode224819* n, tsym224849* tmpl, tsym224849* gensymowner) {
	tnode224819* result;
	tnode224819* args;
	templctx451019 ctx;
	tnode224819* body;
	result = 0;
	evaltemplatecounter_451330 += 1;
	{
		if (!(100 < evaltemplatecounter_451330)) goto LA3;
		globalerror_197917((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2813));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_451217(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_225170(&ctx.Mapping);
	body = getbody_278269(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_231963(body);
		if (!LOC7) goto LA8;
		result = newnodei_225141(((NU8) 37), (*body).Info);
		evaltemplateaux_451039(body, args, &ctx, result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_225367(result);
			if (!(LOC12 == 1)) goto LA13;
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_249057(result, 4);
			globalerror_197917((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_225326(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 114) || (*body).Kind == ((NU8) 125) || (*body).Kind == ((NU8) 111) || (*body).Kind == ((NU8) 126)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_451400;
			NI HEX3Atmp_451430;
			NI LOC23;
			NI res_451433;
			i_451400 = 0;
			HEX3Atmp_451430 = 0;
			LOC23 = 0;
			LOC23 = safelen_225427(body);
			HEX3Atmp_451430 = (NI64)(LOC23 - 1);
			res_451433 = 0;
			{
				while (1) {
					if (!(res_451433 <= HEX3Atmp_451430)) goto LA25;
					i_451400 = res_451433;
					evaltemplateaux_451039((*body).kindU.S6.Sons->data[i_451400], args, &ctx, result);
					res_451433 += 1;
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_451330 -= 1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplInit)(void) {
	evaltemplatecounter_451330 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplDatInit)(void) {
}

