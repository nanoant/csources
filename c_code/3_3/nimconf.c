/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY220171 TY220171;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer215186 tlexer215186;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct TNimObject TNimObject;
typedef struct tllstream211204 tllstream211204;
typedef struct ttoken215184 ttoken215184;
typedef struct tident200021 tident200021;
typedef struct tidobj200015 tidobj200015;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
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
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
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
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY208063[3];
typedef NI TY26420[8];
struct  tpagedesc44941  {
tpagedesc44941* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
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
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY220171 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP714)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_169379)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_220573)(NimStringDesc* filename);
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_215473)(ttoken215184* l);
N_NIMCALL(void, openlexer_215268)(tlexer215186* lex, NimStringDesc* filename, tllstream211204* inputstream);
N_NIMCALL(void, conftok_220412)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, ppgettok_220009)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, rawgettok_215229)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, parsedirective_220369)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NU8, whichkeyword_204379)(tident200021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_220149)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NIM_BOOL, parseexpr_220042)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_220090)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NIM_BOOL, parseatom_220051)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, lexmessage_215280)(tlexer215186* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_201046)(tident200021* symbol);
N_NIMCALL(void, jumptodirective_220233)(tlexer215186* l, ttoken215184* tok, NU8 dest);
N_NIMCALL(void, doelse_220243)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, doelif_220265)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, doend_220197)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, msgwriteln_197236)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, toktostr_215262)(ttoken215184* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_120267)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_120242)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_220485)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
static N_INLINE(tlineinfo195539, getlineinfo_215238)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(tlineinfo195539, newlineinfo_196128)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_220448)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_208040)(NimStringDesc* switch_208042, NimStringDesc* arg, NU8 pass, tlineinfo195539 info);
N_NIMCALL(void, closelexer_215249)(tlexer215186* lex);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_220652)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_220640)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_117099)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_116010)(NimStringDesc* filename);
STRING_LITERAL(TMP1877, "/usr", 4);
STRING_LITERAL(TMP1878, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1879, "/usr/local", 10);
STRING_LITERAL(TMP1880, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1881, "lib", 3);
STRING_LITERAL(TMP1882, "@", 1);
STRING_LITERAL(TMP1883, "\')\'", 3);
STRING_LITERAL(TMP1884, "\':\'", 3);
STRING_LITERAL(TMP1885, "@if", 3);
STRING_LITERAL(TMP1886, "@end", 4);
STRING_LITERAL(TMP1887, "putenv", 6);
STRING_LITERAL(TMP1888, "prependenv", 10);
STRING_LITERAL(TMP1889, "appendenv", 9);
STRING_LITERAL(TMP1890, "-", 1);
STRING_LITERAL(TMP1891, "--", 2);
STRING_LITERAL(TMP1892, "", 0);
STRING_LITERAL(TMP1893, "\']\'", 3);
STRING_LITERAL(TMP1894, "&", 1);
STRING_LITERAL(TMP1895, "config", 6);
STRING_LITERAL(TMP1896, "etc", 3);
STRING_LITERAL(TMP1897, "/etc/", 5);
STRING_LITERAL(TMP1899, "nim.cfg", 7);
STRING_LITERAL(TMP1900, "nimrod.cfg", 10);
TY220171* condstack_220192;
extern TNimType NTI138; /* bool */
TNimType NTI220171; /* seq[bool] */
extern tgcheap47016 gch_47044;
extern NimStringDesc* libpath_169231;
extern NU32 gglobaloptions_169118;
extern TNimType NTI215186; /* TLexer */
extern NI gverbosity_169127;
extern NimStringDesc* gprojectpath_169233;
extern NimStringDesc* gprojectname_169232;
extern NimStringDesc* gprojectfull_169234;
N_NIMCALL(void, TMP714)(void* p, NI op) {
	TY220171* a;
	NI LOC1;
	a = (TY220171*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617(&gch_47044.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44933* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44933* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44933* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_220009)(tlexer215186* l, ttoken215184* tok) {
	rawgettok_215229(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 110))) goto LA2;
			rawgettok_215229(l, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_220051)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 90))) goto LA3;
		ppgettok_220009(l, tok);
		result = parseexpr_220042(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 91))) goto LA7;
			ppgettok_220009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1883));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == 42)) goto LA11;
		ppgettok_220009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_220051(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_201046((*tok).Ident);
		ppgettok_220009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_220090)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_220051(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 2)) goto LA2;
			ppgettok_220009(l, tok);
			b = parseatom_220051(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_220042)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_220090(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 46)) goto LA2;
			ppgettok_220009(l, tok);
			b = parseandexpr_220090(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_220149)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_220009(l, tok);
	result = parseexpr_220042(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 104))) goto LA3;
		ppgettok_220009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1884));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_220243)(tlexer215186* l, ttoken215184* tok) {
	{
		if (!((condstack_220192->Sup.len-1) < 0)) goto LA3;
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1885));
	}
	LA3: ;
	ppgettok_220009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 104))) goto LA7;
		ppgettok_220009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_220192->data[(condstack_220192->Sup.len-1)]) goto LA11;
		jumptodirective_220233(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_220265)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_220192->Sup.len-1) < 0)) goto LA3;
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1885));
	}
	LA3: ;
	res = evalppif_220149(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_220192->data[(condstack_220192->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_220233(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_220192->data[(condstack_220192->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_220197)(tlexer215186* l, ttoken215184* tok) {
	{
		if (!((condstack_220192->Sup.len-1) < 0)) goto LA3;
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1885));
	}
	LA3: ;
	ppgettok_220009(l, tok);
	condstack_220192 = (TY220171*) setLengthSeq(&(condstack_220192)->Sup, sizeof(NIM_BOOL), (condstack_220192->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_220233)(tlexer215186* l, ttoken215184* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = 0;
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1882));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_220009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_204379((*tok).Ident);
				switch (LOC9) {
				case ((NU8) 28):
				{
					nestedifs += 1;
				}
				break;
				case ((NU8) 19):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == 0);
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_220243(l, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU8) 18):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == 0);
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_220265(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 20):
				{
					{
						if (!(nestedifs == 0)) goto LA28;
						doend_220197(l, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(0 < nestedifs)) goto LA32;
						nestedifs -= 1;
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_220009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1886));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_220009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_220369)(tlexer215186* l, ttoken215184* tok) {
	NU8 LOC1;
	ppgettok_220009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_204379((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 28):
	{
		NIM_BOOL res;
		condstack_220192 = (TY220171*) setLengthSeq(&(condstack_220192)->Sup, sizeof(NIM_BOOL), (NI64)(condstack_220192->Sup.len + 1));
		res = evalppif_220149(l, tok);
		condstack_220192->data[(condstack_220192->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_220233(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 18):
	{
		doelif_220265(l, tok);
	}
	break;
	case ((NU8) 19):
	{
		doelse_220243(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doend_220197(l, tok);
	}
	break;
	case ((NU8) 175):
	{
		NimStringDesc* LOC11;
		ppgettok_220009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_215262(&(*tok));
		msgwriteln_197236(LOC11);
		ppgettok_220009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC13;
		LOC13 = 0;
		LOC13 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1887))) goto LA14;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1888))) goto LA15;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1889))) goto LA16;
		goto LA17;
		LA14: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC20;
			ppgettok_220009(l, tok);
			key = toktostr_215262(&(*tok));
			ppgettok_220009(l, tok);
			LOC20 = 0;
			LOC20 = toktostr_215262(&(*tok));
			putenv_120267(key, LOC20);
			ppgettok_220009(l, tok);
		}
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC22;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			ppgettok_220009(l, tok);
			key = toktostr_215262(&(*tok));
			ppgettok_220009(l, tok);
			LOC22 = 0;
			LOC23 = 0;
			LOC23 = toktostr_215262(&(*tok));
			LOC24 = 0;
			LOC24 = getenv_120242(key);
			LOC22 = rawNewString(LOC23->Sup.len + LOC24->Sup.len + 0);
appendString(LOC22, LOC23);
appendString(LOC22, LOC24);
			putenv_120267(key, LOC22);
			ppgettok_220009(l, tok);
		}
		goto LA18;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC26;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			ppgettok_220009(l, tok);
			key = toktostr_215262(&(*tok));
			ppgettok_220009(l, tok);
			LOC26 = 0;
			LOC27 = 0;
			LOC27 = getenv_120242(key);
			LOC28 = 0;
			LOC28 = toktostr_215262(&(*tok));
			LOC26 = rawNewString(LOC27->Sup.len + LOC28->Sup.len + 0);
appendString(LOC26, LOC27);
appendString(LOC26, LOC28);
			putenv_120267(key, LOC26);
			ppgettok_220009(l, tok);
		}
		goto LA18;
		LA17: ;
		{
			NimStringDesc* LOC30;
			LOC30 = 0;
			LOC30 = toktostr_215262(&(*tok));
			lexmessage_215280(&(*l), ((NU16) 30), LOC30);
		}
		LA18: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_220412)(tlexer215186* l, ttoken215184* tok) {
	ppgettok_220009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1882));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_220369(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo195539, getlineinfo_215238)(tlexer215186* l, ttoken215184* tok) {
	tlineinfo195539 result;
	memset((void*)&result, 0, sizeof(result));
	result = newlineinfo_196128((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_220448)(tlexer215186* l, ttoken215184* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 69) || (*tok).Toktype >= ((NU8) 84) && (*tok).Toktype <= ((NU8) 86)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_215262(tok);
		lexmessage_215280(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_220485)(tlexer215186* l, ttoken215184* tok) {
	tlineinfo195539 info;
	NimStringDesc* s;
	NimStringDesc* val;
	{
		NIM_BOOL LOC3;
		tident200021* LOC4;
		tident200021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_200472(((NimStringDesc*) &TMP1890));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_200472(((NimStringDesc*) &TMP1891));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_220412(l, tok);
	}
	LA7: ;
	info = getlineinfo_215238(&(*l), &(*tok));
	checksymbol_220448(&(*l), &(*tok));
	s = toktostr_215262(&(*tok));
	conftok_220412(l, tok);
	val = copyString(((NimStringDesc*) &TMP1892));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 107))) goto LA10;
			s = addChar(s, 46);
			conftok_220412(l, tok);
			checksymbol_220448(&(*l), &(*tok));
			LOC11 = 0;
			LOC11 = toktostr_215262(&(*tok));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_220412(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 92))) goto LA14;
		conftok_220412(l, tok);
		checksymbol_220448(&(*l), &(*tok));
		LOC16 = 0;
		LOC16 = toktostr_215262(&(*tok));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_220412(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA19;
			conftok_220412(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1893));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	{
		NimStringDesc* LOC30;
		if (!((*tok).Toktype == ((NU8) 104) || (*tok).Toktype == ((NU8) 106))) goto LA24;
		{
			if (!(0 < val->Sup.len)) goto LA28;
			val = addChar(val, 58);
		}
		LA28: ;
		conftok_220412(l, tok);
		checksymbol_220448(&(*l), &(*tok));
		LOC30 = 0;
		LOC30 = toktostr_215262(&(*tok));
		val = resizeString(val, LOC30->Sup.len + 0);
appendString(val, LOC30);
		conftok_220412(l, tok);
		{
			while (1) {
				NIM_BOOL LOC33;
				tident200021* LOC35;
				NimStringDesc* LOC36;
				LOC33 = 0;
				LOC33 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC33)) goto LA34;
				LOC35 = 0;
				LOC35 = getident_200472(((NimStringDesc*) &TMP1894));
				LOC33 = ((*(*tok).Ident).Sup.Id == (*LOC35).Sup.Id);
				LA34: ;
				if (!LOC33) goto LA32;
				conftok_220412(l, tok);
				checksymbol_220448(&(*l), &(*tok));
				LOC36 = 0;
				LOC36 = toktostr_215262(&(*tok));
				val = resizeString(val, LOC36->Sup.len + 0);
appendString(val, LOC36);
				conftok_220412(l, tok);
			} LA32: ;
		}
	}
	LA24: ;
	processswitch_208040(s, val, ((NU8) 2), info);
}

N_NIMCALL(void, readconfigfile_220573)(NimStringDesc* filename) {
	tlexer215186 l;
	ttoken215184 tok;
	tllstream211204* stream;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI215186);
	memset((void*)&tok, 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_211233(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_215473(&tok);
		openlexer_215268(&l, filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_220412(&l, &tok);
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_220485(&l, &tok);
			} LA6: ;
		}
		{
			if (!(0 < condstack_220192->Sup.len)) goto LA9;
			lexmessage_215280(&l, ((NU16) 23), ((NimStringDesc*) &TMP1886));
		}
		LA9: ;
		closelexer_215249(&l);
		{
			if (!(1 <= gverbosity_169127)) goto LA13;
			rawmessage_197733(((NU16) 269), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_220652)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY208063 LOC1;
	result = 0;
	p = getprefixdir_169379();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1895));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY208063 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1896));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP1897));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_220640)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_116010)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_220811)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_169231) && (libpath_169231)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_169379();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1877))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_169231; libpath_169231 = copyStringRC1(((NimStringDesc*) &TMP1878));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1879))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_169231; libpath_169231 = copyStringRC1(((NimStringDesc*) &TMP1880));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) &libpath_169231, nosjoinPath(prefix, ((NimStringDesc*) &TMP1881)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_220652(cfg);
		readconfigfile_220573(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_220640(cfg);
		readconfigfile_220573(LOC24);
	}
	LA22: ;
	{
		if (!(0 < gprojectpath_169233->Sup.len)) goto LA27;
		pd = copyString(gprojectpath_169233);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_220858;
			dir_220858 = 0;
			{
				NimStringDesc* current_220878;
				if (!NIM_FALSE) goto LA37;
				current_220878 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_220858 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_117099(dir_220858, cfg);
					readconfigfile_220573(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_220878);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_220878 = nosparentDir(current_220878);
						dir_220858 = current_220878;
						LOC51 = 0;
						LOC51 = HEX2F_117099(dir_220858, cfg);
						readconfigfile_220573(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_220880;
					NI HEX3Atmp_220882;
					NI res_220884;
					i_220880 = 0;
					HEX3Atmp_220882 = 0;
					HEX3Atmp_220882 = (NI64)(pd->Sup.len - 2);
					res_220884 = 0;
					{
						while (1) {
							if (!(res_220884 <= HEX3Atmp_220882)) goto LA55;
							i_220880 = res_220884;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_220880])) == ((NU8)(47)) || ((NU8)(pd->data[i_220880])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_220880 == 0);
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI64)(i_220880 - 1)])) == ((NU8)(47)) || ((NU8)(pd->data[(NI64)(i_220880 - 1)])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_220858 = copyStrLast(pd, 0, i_220880);
								LOC64 = 0;
								LOC64 = HEX2F_117099(dir_220858, cfg);
								readconfigfile_220573(LOC64);
							}
							LA62: ;
							res_220884 += 1;
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_220858 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_117099(dir_220858, cfg);
					readconfigfile_220573(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_117099(pd, cfg);
		readconfigfile_220573(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_169232->Sup.len == 0))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP1899));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_116010(projectconfig);
				if (!LOC81) goto LA82;
				readconfigfile_220573(projectconfig);
			}
			goto LA79;
			LA82: ;
			{
				NimStringDesc* LOC85;
				LOC85 = 0;
				LOC85 = noschangeFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP1900));
				readconfigfile_220573(LOC85);
			}
			LA79: ;
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfInit)(void) {
	if (condstack_220192) nimGCunrefNoCycle(condstack_220192);
	condstack_220192 = (TY220171*) newSeqRC1((&NTI220171), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfDatInit)(void) {
NTI220171.size = sizeof(TY220171*);
NTI220171.kind = 24;
NTI220171.base = (&NTI138);
NTI220171.flags = 2;
NTI220171.marker = TMP714;
}

