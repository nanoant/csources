/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY221171 TY221171;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer216186 tlexer216186;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct TNimObject TNimObject;
typedef struct tllstream212204 tllstream212204;
typedef struct ttoken216184 ttoken216184;
typedef struct tident201021 tident201021;
typedef struct tidobj201015 tidobj201015;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY209063[3];
typedef NI TY26220[16];
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
struct  tllstream212204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY221171 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP716)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_170379)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_221573)(NimStringDesc* filename);
N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_216473)(ttoken216184* l);
N_NIMCALL(void, openlexer_216268)(tlexer216186* lex, NimStringDesc* filename, tllstream212204* inputstream);
N_NIMCALL(void, conftok_221412)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, ppgettok_221009)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, rawgettok_216229)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, parsedirective_221369)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(NU8, whichkeyword_205379)(tident201021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_221149)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(NIM_BOOL, parseexpr_221042)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_221090)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(NIM_BOOL, parseatom_221051)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, lexmessage_216280)(tlexer216186* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_202046)(tident201021* symbol);
N_NIMCALL(void, jumptodirective_221233)(tlexer216186* l, ttoken216184* tok, NU8 dest);
N_NIMCALL(void, doelse_221243)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, doelif_221265)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, doend_221197)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(void, msgwriteln_198236)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, toktostr_216262)(ttoken216184* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_120067)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_120042)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_221485)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(tident201021*, getident_201472)(NimStringDesc* identifier);
static N_INLINE(tlineinfo196539, getlineinfo_216238)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(tlineinfo196539, newlineinfo_197129)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_221448)(tlexer216186* l, ttoken216184* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_209040)(NimStringDesc* switch_209042, NimStringDesc* arg, NU8 pass, tlineinfo196539 info);
N_NIMCALL(void, closelexer_216249)(tlexer216186* lex);
N_NIMCALL(void, rawmessage_198733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_221652)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_221640)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_116899)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_115810)(NimStringDesc* filename);
STRING_LITERAL(TMP1881, "/usr", 4);
STRING_LITERAL(TMP1882, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1883, "/usr/local", 10);
STRING_LITERAL(TMP1884, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1885, "lib", 3);
STRING_LITERAL(TMP1886, "@", 1);
STRING_LITERAL(TMP1887, "\')\'", 3);
STRING_LITERAL(TMP1888, "\':\'", 3);
STRING_LITERAL(TMP1889, "@if", 3);
STRING_LITERAL(TMP1890, "@end", 4);
STRING_LITERAL(TMP1891, "putenv", 6);
STRING_LITERAL(TMP1892, "prependenv", 10);
STRING_LITERAL(TMP1893, "appendenv", 9);
STRING_LITERAL(TMP1894, "-", 1);
STRING_LITERAL(TMP1895, "--", 2);
STRING_LITERAL(TMP1896, "", 0);
STRING_LITERAL(TMP1897, "\']\'", 3);
STRING_LITERAL(TMP1898, "&", 1);
STRING_LITERAL(TMP1899, "config", 6);
STRING_LITERAL(TMP1900, "etc", 3);
STRING_LITERAL(TMP1901, "/etc/", 5);
STRING_LITERAL(TMP1903, "nim.cfg", 7);
STRING_LITERAL(TMP1904, "nimrod.cfg", 10);
TY221171* condstack_221192;
extern TNimType NTI138; /* bool */
TNimType NTI221171; /* seq[bool] */
extern tgcheap46816 gch_46844;
extern NimStringDesc* libpath_170231;
extern NU32 gglobaloptions_170118;
extern TNimType NTI216186; /* TLexer */
extern NI gverbosity_170127;
extern NimStringDesc* gprojectpath_170233;
extern NimStringDesc* gprojectname_170232;
extern NimStringDesc* gprojectfull_170234;
N_NIMCALL(void, TMP716)(void* p, NI op) {
	TY221171* a;
	NI LOC1;
	a = (TY221171*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44735))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_221009)(tlexer216186* l, ttoken216184* tok) {
	rawgettok_216229(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 110))) goto LA2;
			rawgettok_216229(l, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_221051)(tlexer216186* l, ttoken216184* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 90))) goto LA3;
		ppgettok_221009(l, tok);
		result = parseexpr_221042(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 91))) goto LA7;
			ppgettok_221009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1887));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == 42)) goto LA11;
		ppgettok_221009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_221051(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_202046((*tok).Ident);
		ppgettok_221009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_221090)(tlexer216186* l, ttoken216184* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_221051(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 2)) goto LA2;
			ppgettok_221009(l, tok);
			b = parseatom_221051(l, tok);
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

N_NIMCALL(NIM_BOOL, parseexpr_221042)(tlexer216186* l, ttoken216184* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_221090(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 46)) goto LA2;
			ppgettok_221009(l, tok);
			b = parseandexpr_221090(l, tok);
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

N_NIMCALL(NIM_BOOL, evalppif_221149)(tlexer216186* l, ttoken216184* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_221009(l, tok);
	result = parseexpr_221042(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 104))) goto LA3;
		ppgettok_221009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1888));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_221243)(tlexer216186* l, ttoken216184* tok) {
	{
		if (!((condstack_221192->Sup.len-1) < 0)) goto LA3;
		lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1889));
	}
	LA3: ;
	ppgettok_221009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 104))) goto LA7;
		ppgettok_221009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_221192->data[(condstack_221192->Sup.len-1)]) goto LA11;
		jumptodirective_221233(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_221265)(tlexer216186* l, ttoken216184* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_221192->Sup.len-1) < 0)) goto LA3;
		lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1889));
	}
	LA3: ;
	res = evalppif_221149(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_221192->data[(condstack_221192->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_221233(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_221192->data[(condstack_221192->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_221197)(tlexer216186* l, ttoken216184* tok) {
	{
		if (!((condstack_221192->Sup.len-1) < 0)) goto LA3;
		lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1889));
	}
	LA3: ;
	ppgettok_221009(l, tok);
	condstack_221192 = (TY221171*) setLengthSeq(&(condstack_221192)->Sup, sizeof(NIM_BOOL), (condstack_221192->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_221233)(tlexer216186* l, ttoken216184* tok, NU8 dest) {
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
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1886));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_221009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_205379((*tok).Ident);
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
						doelse_221243(l, tok);
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
						doelif_221265(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 20):
				{
					{
						if (!(nestedifs == 0)) goto LA28;
						doend_221197(l, tok);
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
				ppgettok_221009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1890));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_221009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_221369)(tlexer216186* l, ttoken216184* tok) {
	NU8 LOC1;
	ppgettok_221009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_205379((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 28):
	{
		NIM_BOOL res;
		condstack_221192 = (TY221171*) setLengthSeq(&(condstack_221192)->Sup, sizeof(NIM_BOOL), (NI32)(condstack_221192->Sup.len + 1));
		res = evalppif_221149(l, tok);
		condstack_221192->data[(condstack_221192->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_221233(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 18):
	{
		doelif_221265(l, tok);
	}
	break;
	case ((NU8) 19):
	{
		doelse_221243(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doend_221197(l, tok);
	}
	break;
	case ((NU8) 175):
	{
		NimStringDesc* LOC11;
		ppgettok_221009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_216262(&(*tok));
		msgwriteln_198236(LOC11);
		ppgettok_221009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC13;
		LOC13 = 0;
		LOC13 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1891))) goto LA14;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1892))) goto LA15;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1893))) goto LA16;
		goto LA17;
		LA14: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC20;
			ppgettok_221009(l, tok);
			key = toktostr_216262(&(*tok));
			ppgettok_221009(l, tok);
			LOC20 = 0;
			LOC20 = toktostr_216262(&(*tok));
			putenv_120067(key, LOC20);
			ppgettok_221009(l, tok);
		}
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC22;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			ppgettok_221009(l, tok);
			key = toktostr_216262(&(*tok));
			ppgettok_221009(l, tok);
			LOC22 = 0;
			LOC23 = 0;
			LOC23 = toktostr_216262(&(*tok));
			LOC24 = 0;
			LOC24 = getenv_120042(key);
			LOC22 = rawNewString(LOC23->Sup.len + LOC24->Sup.len + 0);
appendString(LOC22, LOC23);
appendString(LOC22, LOC24);
			putenv_120067(key, LOC22);
			ppgettok_221009(l, tok);
		}
		goto LA18;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC26;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			ppgettok_221009(l, tok);
			key = toktostr_216262(&(*tok));
			ppgettok_221009(l, tok);
			LOC26 = 0;
			LOC27 = 0;
			LOC27 = getenv_120042(key);
			LOC28 = 0;
			LOC28 = toktostr_216262(&(*tok));
			LOC26 = rawNewString(LOC27->Sup.len + LOC28->Sup.len + 0);
appendString(LOC26, LOC27);
appendString(LOC26, LOC28);
			putenv_120067(key, LOC26);
			ppgettok_221009(l, tok);
		}
		goto LA18;
		LA17: ;
		{
			NimStringDesc* LOC30;
			LOC30 = 0;
			LOC30 = toktostr_216262(&(*tok));
			lexmessage_216280(&(*l), ((NU16) 30), LOC30);
		}
		LA18: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_221412)(tlexer216186* l, ttoken216184* tok) {
	ppgettok_221009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1886));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_221369(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo196539, getlineinfo_216238)(tlexer216186* l, ttoken216184* tok) {
	tlineinfo196539 result;
	memset((void*)&result, 0, sizeof(result));
	result = newlineinfo_197129((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_221448)(tlexer216186* l, ttoken216184* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 69) || (*tok).Toktype >= ((NU8) 84) && (*tok).Toktype <= ((NU8) 86)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_216262(tok);
		lexmessage_216280(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_221485)(tlexer216186* l, ttoken216184* tok) {
	tlineinfo196539 info;
	NimStringDesc* s;
	NimStringDesc* val;
	{
		NIM_BOOL LOC3;
		tident201021* LOC4;
		tident201021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_201472(((NimStringDesc*) &TMP1894));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_201472(((NimStringDesc*) &TMP1895));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_221412(l, tok);
	}
	LA7: ;
	info = getlineinfo_216238(&(*l), &(*tok));
	checksymbol_221448(&(*l), &(*tok));
	s = toktostr_216262(&(*tok));
	conftok_221412(l, tok);
	val = copyString(((NimStringDesc*) &TMP1896));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 107))) goto LA10;
			s = addChar(s, 46);
			conftok_221412(l, tok);
			checksymbol_221448(&(*l), &(*tok));
			LOC11 = 0;
			LOC11 = toktostr_216262(&(*tok));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_221412(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 92))) goto LA14;
		conftok_221412(l, tok);
		checksymbol_221448(&(*l), &(*tok));
		LOC16 = 0;
		LOC16 = toktostr_216262(&(*tok));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_221412(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA19;
			conftok_221412(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_216280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1897));
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
		conftok_221412(l, tok);
		checksymbol_221448(&(*l), &(*tok));
		LOC30 = 0;
		LOC30 = toktostr_216262(&(*tok));
		val = resizeString(val, LOC30->Sup.len + 0);
appendString(val, LOC30);
		conftok_221412(l, tok);
		{
			while (1) {
				NIM_BOOL LOC33;
				tident201021* LOC35;
				NimStringDesc* LOC36;
				LOC33 = 0;
				LOC33 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC33)) goto LA34;
				LOC35 = 0;
				LOC35 = getident_201472(((NimStringDesc*) &TMP1898));
				LOC33 = ((*(*tok).Ident).Sup.Id == (*LOC35).Sup.Id);
				LA34: ;
				if (!LOC33) goto LA32;
				conftok_221412(l, tok);
				checksymbol_221448(&(*l), &(*tok));
				LOC36 = 0;
				LOC36 = toktostr_216262(&(*tok));
				val = resizeString(val, LOC36->Sup.len + 0);
appendString(val, LOC36);
				conftok_221412(l, tok);
			} LA32: ;
		}
	}
	LA24: ;
	processswitch_209040(s, val, ((NU8) 2), info);
}

N_NIMCALL(void, readconfigfile_221573)(NimStringDesc* filename) {
	tlexer216186 l;
	ttoken216184 tok;
	tllstream212204* stream;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI216186);
	memset((void*)&tok, 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_212233(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_216473(&tok);
		openlexer_216268(&l, filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_221412(&l, &tok);
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_221485(&l, &tok);
			} LA6: ;
		}
		{
			if (!(0 < condstack_221192->Sup.len)) goto LA9;
			lexmessage_216280(&l, ((NU16) 23), ((NimStringDesc*) &TMP1890));
		}
		LA9: ;
		closelexer_216249(&l);
		{
			if (!(1 <= gverbosity_170127)) goto LA13;
			rawmessage_198733(((NU16) 269), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_221652)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY209063 LOC1;
	result = 0;
	p = getprefixdir_170379();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1899));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY209063 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1900));
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
appendString(LOC13, ((NimStringDesc*) &TMP1901));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_221640)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_115810)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_221811)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_170231) && (libpath_170231)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_170379();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1881))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_170231; libpath_170231 = copyStringRC1(((NimStringDesc*) &TMP1882));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1883))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_170231; libpath_170231 = copyStringRC1(((NimStringDesc*) &TMP1884));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) &libpath_170231, nosjoinPath(prefix, ((NimStringDesc*) &TMP1885)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_170118 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_221652(cfg);
		readconfigfile_221573(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_170118 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_221640(cfg);
		readconfigfile_221573(LOC24);
	}
	LA22: ;
	{
		if (!(0 < gprojectpath_170233->Sup.len)) goto LA27;
		pd = copyString(gprojectpath_170233);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_170118 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_221858;
			dir_221858 = 0;
			{
				NimStringDesc* current_221878;
				if (!NIM_FALSE) goto LA37;
				current_221878 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_221858 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_116899(dir_221858, cfg);
					readconfigfile_221573(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_221878);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_221878 = nosparentDir(current_221878);
						dir_221858 = current_221878;
						LOC51 = 0;
						LOC51 = HEX2F_116899(dir_221858, cfg);
						readconfigfile_221573(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_221880;
					NI HEX3Atmp_221882;
					NI res_221884;
					i_221880 = 0;
					HEX3Atmp_221882 = 0;
					HEX3Atmp_221882 = (NI32)(pd->Sup.len - 2);
					res_221884 = 0;
					{
						while (1) {
							if (!(res_221884 <= HEX3Atmp_221882)) goto LA55;
							i_221880 = res_221884;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_221880])) == ((NU8)(47)) || ((NU8)(pd->data[i_221880])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_221880 == 0);
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI32)(i_221880 - 1)])) == ((NU8)(47)) || ((NU8)(pd->data[(NI32)(i_221880 - 1)])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_221858 = copyStrLast(pd, 0, i_221880);
								LOC64 = 0;
								LOC64 = HEX2F_116899(dir_221858, cfg);
								readconfigfile_221573(LOC64);
							}
							LA62: ;
							res_221884 += 1;
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_221858 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_116899(dir_221858, cfg);
					readconfigfile_221573(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_170118 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_116899(pd, cfg);
		readconfigfile_221573(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_170232->Sup.len == 0))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_170234, ((NimStringDesc*) &TMP1903));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_115810(projectconfig);
				if (!LOC81) goto LA82;
				readconfigfile_221573(projectconfig);
			}
			goto LA79;
			LA82: ;
			{
				NimStringDesc* LOC85;
				LOC85 = 0;
				LOC85 = noschangeFileExt(gprojectfull_170234, ((NimStringDesc*) &TMP1904));
				readconfigfile_221573(LOC85);
			}
			LA79: ;
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfInit)(void) {
	if (condstack_221192) nimGCunrefNoCycle(condstack_221192);
	condstack_221192 = (TY221171*) newSeqRC1((&NTI221171), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfDatInit)(void) {
NTI221171.size = sizeof(TY221171*);
NTI221171.kind = 24;
NTI221171.base = (&NTI138);
NTI221171.flags = 2;
NTI221171.marker = TMP716;
}

