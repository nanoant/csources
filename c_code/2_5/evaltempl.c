/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode225819 tnode225819;
typedef struct tsym225849 tsym225849;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype225855 ttype225855;
typedef struct tident201021 tident201021;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tlib225837 tlib225837;
typedef struct templctx452019 templctx452019;
typedef struct tidtable225867 tidtable225867;
typedef struct tidpairseq225865 tidpairseq225865;
typedef struct tidpair225863 tidpair225863;
typedef struct TY84735 TY84735;
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
typedef struct TY225939 TY225939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  tlineinfo196539  {
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
struct  tidpair225863  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable225867  {
NI Counter;
tidpairseq225865* Data;
};
struct  templctx452019  {
tsym225849* Owner;
tsym225849* Gensymowner;
NIM_BOOL Instlines;
tidtable225867 Mapping;
};
struct TY84735 {
NimStringDesc* Field0;
NI Field1;
};
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
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
typedef NI TY26220[16];
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
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
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
struct tidpairseq225865 {
  TGenericSeq Sup;
  tidpair225863 data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_198917)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode225819*, evaltemplateargs_452217)(tnode225819* n, tsym225849* s);
static N_INLINE(NI, sonslen_226252)(tnode225819* n);
static N_INLINE(NI, sonslen_226258)(ttype225855* n);
N_NIMCALL(tnode225819*, newnodei_226141)(NU8 kind, tlineinfo196539 info);
N_NIMCALL(tnode225819*, copytree_226332)(tnode225819* src);
N_NIMCALL(void, localerror_198938)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_226290)(tnode225819* father, tnode225819* son);
N_NIMCALL(void, initidtable_226170)(tidtable225867* x);
N_NIMCALL(tnode225819*, getbody_279270)(tsym225849* s);
static N_INLINE(NIM_BOOL, isatom_232962)(tnode225819* n);
N_NIMCALL(void, evaltemplateaux_452039)(tnode225819* templ, tnode225819* actual, templctx452019* c, tnode225819* result);
static N_INLINE(NI, len_226367)(tnode225819* n);
N_NIMCALL(void, add_226501)(tnode225819* father, tnode225819* son);
N_NIMCALL(void, internalerror_198989)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_199109)(TY84735 x_199113);
N_NIMCALL(TNimObject*, idtableget_235182)(tidtable225867 t, tidobj201015* key);
N_NIMCALL(tsym225849*, copysym_226206)(tsym225849* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void, idtableput_235196)(tidtable225867* t, tidobj201015* key, TNimObject* val);
N_NIMCALL(tnode225819*, newsymnode_227755)(tsym225849* sym, tlineinfo196539 info);
N_NIMCALL(tnode225819*, copynode_452027)(templctx452019* ctx, tnode225819* a, tnode225819* b);
N_NIMCALL(tnode225819*, copynode_226326)(tnode225819* src);
N_NIMCALL(NimStringDesc*, rendertree_250057)(tnode225819* n, NU8 renderflags);
static N_INLINE(NI, safelen_226427)(tnode225819* n);
STRING_LITERAL(TMP2814, "", 0);
STRING_LITERAL(TMP2816, "evaltempl.nim", 13);
NIM_CONST TY84735 TMP2815 = {((NimStringDesc*) &TMP2816),
39}
;
NI evaltemplatecounter_452330;
extern tgcheap46816 gch_46844;

static N_INLINE(NI, sonslen_226252)(tnode225819* n) {
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

static N_INLINE(NI, sonslen_226258)(ttype225855* n) {
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

N_NIMCALL(tnode225819*, evaltemplateargs_452217)(tnode225819* n, tsym225849* s) {
	tnode225819* result;
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
		a = sonslen_226252(n);
	}
	break;
	default:
	{
		a = 0;
	}
	break;
	}
	f = sonslen_226258((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_198917((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2814));
	}
	LA5: ;
	result = newnodei_226141(((NU8) 150), (*n).Info);
	{
		NI i_452237;
		NI HEX3Atmp_452310;
		NI res_452313;
		i_452237 = 0;
		HEX3Atmp_452310 = 0;
		HEX3Atmp_452310 = (NI32)(f - 1);
		res_452313 = 1;
		{
			while (1) {
				tnode225819* arg;
				if (!(res_452313 <= HEX3Atmp_452310)) goto LA9;
				i_452237 = res_452313;
				{
					if (!(i_452237 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_452237];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_226332((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_452237]).kindU.S4.Sym).Ast);
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
					localerror_198938((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2814));
				}
				LA19: ;
				addson_226290(result, arg);
				res_452313 += 1;
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_232962)(tnode225819* n) {
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

static N_INLINE(NI, len_226367)(tnode225819* n) {
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

N_NIMCALL(tnode225819*, copynode_452027)(templctx452019* ctx, tnode225819* a, tnode225819* b) {
	tnode225819* result;
	result = 0;
	result = copynode_226326(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_452039)(tnode225819* templ, tnode225819* actual, templctx452019* c, tnode225819* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym225849* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				tnode225819* x;
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				{
					if (!((*x).Kind == ((NU8) 150))) goto LA12;
					{
						tnode225819* y_452094;
						y_452094 = 0;
						{
							NI i_452179;
							NI HEX3Atmp_452181;
							NI LOC16;
							NI res_452183;
							i_452179 = 0;
							HEX3Atmp_452181 = 0;
							LOC16 = 0;
							LOC16 = len_226367(x);
							HEX3Atmp_452181 = (LOC16 - 1);
							res_452183 = 0;
							{
								while (1) {
									if (!(res_452183 <= HEX3Atmp_452181)) goto LA18;
									i_452179 = res_452183;
									y_452094 = (*x).kindU.S6.Sons->data[i_452179];
									add_226501(result, y_452094);
									res_452183 += 1;
								} LA18: ;
							}
						}
					}
				}
				goto LA10;
				LA12: ;
				{
					tnode225819* LOC20;
					LOC20 = 0;
					LOC20 = copytree_226332(x);
					add_226501(result, LOC20);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym225849* x;
				TNimObject* LOC27;
				tlineinfo196539 LOC32;
				tnode225819* LOC38;
				{
					NimStringDesc* LOC26;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA24;
					LOC26 = 0;
					LOC26 = HEX24_199109(TMP2815);
					internalerror_198989(LOC26);
				}
				LA24: ;
				LOC27 = 0;
				LOC27 = idtableget_235182((*c).Mapping, &s->Sup);
				x = ((tsym225849*) (LOC27));
				{
					if (!(x == NIM_NIL)) goto LA30;
					x = copysym_226206(s, NIM_FALSE);
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					idtableput_235196(&(*c).Mapping, &s->Sup, &x->Sup.Sup);
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
				LOC38 = newsymnode_227755(x, LOC32);
				add_226501(result, LOC38);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode225819* LOC40;
			LOC40 = 0;
			LOC40 = copynode_452027(&(*c), templ, actual);
			add_226501(result, LOC40);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode225819* LOC42;
		LOC42 = 0;
		LOC42 = copynode_452027(&(*c), templ, actual);
		add_226501(result, LOC42);
	}
	break;
	default:
	{
		tnode225819* res;
		res = copynode_452027(&(*c), templ, actual);
		{
			NI i_452160;
			NI HEX3Atmp_452185;
			NI LOC45;
			NI res_452188;
			i_452160 = 0;
			HEX3Atmp_452185 = 0;
			LOC45 = 0;
			LOC45 = sonslen_226252(templ);
			HEX3Atmp_452185 = (NI32)(LOC45 - 1);
			res_452188 = 0;
			{
				while (1) {
					if (!(res_452188 <= HEX3Atmp_452185)) goto LA47;
					i_452160 = res_452188;
					evaltemplateaux_452039((*templ).kindU.S6.Sons->data[i_452160], actual, c, res);
					res_452188 += 1;
				} LA47: ;
			}
		}
		add_226501(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_226427)(tnode225819* n) {
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

N_NIMCALL(tnode225819*, evaltemplate_452334)(tnode225819* n, tsym225849* tmpl, tsym225849* gensymowner) {
	tnode225819* result;
	tnode225819* args;
	templctx452019 ctx;
	tnode225819* body;
	result = 0;
	evaltemplatecounter_452330 += 1;
	{
		if (!(100 < evaltemplatecounter_452330)) goto LA3;
		globalerror_198917((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2814));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_452217(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_226170(&ctx.Mapping);
	body = getbody_279270(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_232962(body);
		if (!LOC7) goto LA8;
		result = newnodei_226141(((NU8) 37), (*body).Info);
		evaltemplateaux_452039(body, args, &ctx, result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_226367(result);
			if (!(LOC12 == 1)) goto LA13;
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_250057(result, 4);
			globalerror_198917((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_226326(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 114) || (*body).Kind == ((NU8) 125) || (*body).Kind == ((NU8) 111) || (*body).Kind == ((NU8) 126)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_452400;
			NI HEX3Atmp_452430;
			NI LOC23;
			NI res_452433;
			i_452400 = 0;
			HEX3Atmp_452430 = 0;
			LOC23 = 0;
			LOC23 = safelen_226427(body);
			HEX3Atmp_452430 = (NI32)(LOC23 - 1);
			res_452433 = 0;
			{
				while (1) {
					if (!(res_452433 <= HEX3Atmp_452430)) goto LA25;
					i_452400 = res_452433;
					evaltemplateaux_452039((*body).kindU.S6.Sons->data[i_452400], args, &ctx, result);
					res_452433 += 1;
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_452330 -= 1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplInit)(void) {
	evaltemplatecounter_452330 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplDatInit)(void) {
}

