/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY293019 TY293019;
typedef struct tsourcefile293008 tsourcefile293008;
typedef struct TY120208 TY120208;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44533 tcell44533;
typedef struct tcellseq44549 tcellseq44549;
typedef struct tgcheap46616 tgcheap46616;
typedef struct tcellset44545 tcellset44545;
typedef struct tpagedesc44541 tpagedesc44541;
typedef struct tmemregion26810 tmemregion26810;
typedef struct tsmallchunk26040 tsmallchunk26040;
typedef struct tllchunk26804 tllchunk26804;
typedef struct tbigchunk26042 tbigchunk26042;
typedef struct tintset26017 tintset26017;
typedef struct ttrunk26013 ttrunk26013;
typedef struct tavlnode26808 tavlnode26808;
typedef struct tgcstat46614 tgcstat46614;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct TY116404 TY116404;
typedef struct baselexer291024 baselexer291024;
typedef struct TNimObject TNimObject;
typedef struct streamobj136035 streamobj136035;
typedef struct filestreamobj136742 filestreamobj136742;
typedef struct slice85571 slice85571;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct ttype224855 ttype224855;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tnode224819 tnode224819;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tlib224837 tlib224837;
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct TY224939 TY224939;
typedef struct tlistentry128022 tlistentry128022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsourcefile293008  {
TY120208* Lines;
NIM_BOOL Dirty;
NIM_BOOL Isnimfixfile;
NimStringDesc* Fullpath;
NimStringDesc* Newline;
NI32 Fileidx;
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
struct  tcell44533  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44549  {
NI Len;
NI Cap;
tcell44533** D;
};
struct  tcellset44545  {
NI Counter;
NI Max;
tpagedesc44541* Head;
tpagedesc44541** Data;
};
typedef tsmallchunk26040* TY26822[512];
typedef ttrunk26013* ttrunkbuckets26015[256];
struct  tintset26017  {
ttrunkbuckets26015 Data;
};
struct  tmemregion26810  {
NI Minlargeobj;
NI Maxlargeobj;
TY26822 Freesmallchunks;
tllchunk26804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26042* Freechunkslist;
tintset26017 Chunkstarts;
tavlnode26808* Root;
tavlnode26808* Deleted;
tavlnode26808* Last;
tavlnode26808* Freeavlnodes;
};
struct  tgcstat46614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44549 Zct;
tcellseq44549 Decstack;
tcellset44545 Cycleroots;
tcellseq44549 Tempstack;
NI Recgclock;
tmemregion26810 Region;
tgcstat46614 Stat;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY116404 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer291024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj136035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice85571  {
NI A;
NI B;
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
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
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
typedef NI TY26020[16];
struct  tpagedesc44541  {
tpagedesc44541* Next;
NI Key;
TY26020 Bits;
};
struct  tbasechunk26038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26040  {
  tbasechunk26038 Sup;
tsmallchunk26040* Next;
tsmallchunk26040* Prev;
tfreecell26030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26804  {
NI Size;
NI Acc;
tllchunk26804* Next;
};
struct  tbigchunk26042  {
  tbasechunk26038 Sup;
tbigchunk26042* Next;
tbigchunk26042* Prev;
NI Align;
NF Data;
};
struct  ttrunk26013  {
ttrunk26013* Next;
NI Key;
TY26020 Bits;
};
typedef tavlnode26808* TY26814[2];
struct  tavlnode26808  {
TY26814 Link;
NI Key;
NI Upperbound;
NI Level;
};
typedef N_NIMCALL_PTR(void, TY136036) (streamobj136035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY136040) (streamobj136035* s);
typedef N_NIMCALL_PTR(void, TY136044) (streamobj136035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY136049) (streamobj136035* s);
typedef N_NIMCALL_PTR(NI, TY136053) (streamobj136035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY136059) (streamobj136035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY136065) (streamobj136035* s);
struct  streamobj136035  {
  TNimObject Sup;
TY136036 Closeimpl;
TY136040 Atendimpl;
TY136044 Setpositionimpl;
TY136049 Getpositionimpl;
TY136053 Readdataimpl;
TY136059 Writedataimpl;
TY136065 Flushimpl;
};
struct  filestreamobj136742  {
  streamobj136035 Sup;
FILE* F;
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
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib224837  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct TY120208 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY293019 {
  TGenericSeq Sup;
  tsourcefile293008 data[SEQ_DECL_SIZE];
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
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP866)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_293247)(tlineinfo195539 info, tident200021* oldsym, tident200021* newsym);
N_NIMCALL(void, loadfile_293045)(tlineinfo195539 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY116404* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_12417)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_12689)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_291040)(baselexer291024* l, streamobj136035* input, NI buflen);
N_NIMCALL(filestreamobj136742*, newfilestream_136836)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_291050)(baselexer291024* l);
N_NIMCALL(NI, identlen_293178)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_85564)(NimStringDesc* s, slice85571 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74428, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice85571, HEX2EHEX2E_93694)(NI a_93698, NI b_93700);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2693, ".nimfix", 7);
STRING_LITERAL(TMP2701, "\015\012", 2);
STRING_LITERAL(TMP2702, "\012", 1);
TY293019* gsourcefiles_293040;
TNimType NTI293008; /* TSourceFile */
extern TNimType NTI120208; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI293019; /* seq[TSourceFile] */
extern tgcheap46616 gch_46644;
extern TNimType NTI291024; /* BaseLexer */
N_NIMCALL(void, TMP866)(void* p, NI op) {
	TY293019* a;
	NI LOC1;
	a = (TY293019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
	}
}

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44533))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(tcell44533* c) {
	addzct_48217(&gch_46644.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44533* c;
	c = usrtocell_48246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_49804(c);
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

N_NIMCALL(void, loadfile_293045)(tlineinfo195539 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_293040->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_293040 = (TY293019*) setLengthSeq(&(gsourcefiles_293040)->Sup, sizeof(tsourcefile293008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY116404 LOC10;
		baselexer291024 lex;
		filestreamobj136742* LOC16;
		NI pos;
		if (!gsourcefiles_293040->data[i].Lines == 0) goto LA7;
		gsourcefiles_293040->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_293040->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_293040->data[i].Lines);
		gsourcefiles_293040->data[i].Lines = (TY120208*) newSeqRC1((&NTI120208), 0);
		path = tofullpath_197037(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_293040->data[i].Fullpath; gsourcefiles_293040->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)&LOC10, 0, sizeof(LOC10));
		nossplitFile(path, &LOC10);
		gsourcefiles_293040->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2693));
		{
			NimStringDesc* line_293108;
			FILE* f_293146;
			NimStringDesc* res_293148;
			line_293108 = 0;
			f_293146 = open_12417(path, ((NU8) 0), 8000);
			res_293148 = rawNewString(80);
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_12689(f_293146, &res_293148);
					if (!LOC14) goto LA13;
					line_293108 = res_293148;
					gsourcefiles_293040->data[i].Lines = (TY120208*) incrSeq(&(gsourcefiles_293040->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_293040->data[i].Lines->data[gsourcefiles_293040->data[i].Lines->Sup.len-1]; gsourcefiles_293040->data[i].Lines->data[gsourcefiles_293040->data[i].Lines->Sup.len-1] = copyStringRC1(line_293108);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_293146);
		}
		memset((void*)&lex, 0, sizeof(lex));
		lex.Sup.m_type = (&NTI291024);
		LOC16 = 0;
		LOC16 = newfilestream_136836(path, ((NU8) 0));
		open_291040(&lex, &LOC16->Sup, 8192);
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC20;
					LOC20 = 0;
					LOC20 = gsourcefiles_293040->data[i].Newline; gsourcefiles_293040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2701));
					if (LOC20) nimGCunrefNoCycle(LOC20);
					goto LA17;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC22;
					LOC22 = 0;
					LOC22 = gsourcefiles_293040->data[i].Newline; gsourcefiles_293040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2702));
					if (LOC22) nimGCunrefNoCycle(LOC22);
					goto LA17;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += 1;
			}
		} LA17: ;
		close_291050(&lex);
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_293178)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI32)(start + result) < line->Sup.len);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += 1;
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_85564)(NimStringDesc* s, slice85571 x) {
	NimStringDesc* result;
	NI LOC1;
	NI LOC7;
	result = 0;
	LOC1 = 0;
	{
		if (!(0 <= x.A)) goto LA4;
		LOC1 = x.A;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (NI32)(s->Sup.len + x.A);
	}
	LA2: ;
	LOC7 = 0;
	{
		if (!(0 <= x.B)) goto LA10;
		LOC7 = x.B;
	}
	goto LA8;
	LA10: ;
	{
		LOC7 = (NI32)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice85571, HEX2EHEX2E_93694)(NI a_93698, NI b_93700) {
	slice85571 result;
	memset((void*)&result, 0, sizeof(result));
	result.A = a_93698;
	result.B = b_93700;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44533* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44533* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_49804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, replacedeprecated_293247)(tlineinfo195539 info, tident200021* oldsym, tident200021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
	loadfile_293045(info);
	line = gsourcefiles_293040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
	first = ((((NI) (info.Col)) <= line->Sup.len) ? ((NI) (info.Col)) : line->Sup.len);
	{
		if (!(first < 0)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (0 < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(first - 1)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= 1;
		} LA6: ;
	}
	{
		if (!(first < 0)) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += 1;
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_293178(line, first);
	last = (NI32)((NI32)(first + LOC17) - 1);
	{
		slice85571 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_93694(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_85564(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).S);
		if (!(LOC22 == 0)) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, 0, (NI32)(first - 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI32)(last + 1));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).S->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).S);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) &gsourcefiles_293040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))], x);
		gsourcefiles_293040->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_293324)(tlineinfo195539 info, tsym224849* oldsym, tsym224849* newsym) {
	replacedeprecated_293247(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseInit)(void) {
	if (gsourcefiles_293040) nimGCunrefNoCycle(gsourcefiles_293040);
	gsourcefiles_293040 = (TY293019*) newSeqRC1((&NTI293019), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseDatInit)(void) {
static TNimNode* TMP865[6];
static TNimNode TMP861[7];
NTI293008.size = sizeof(tsourcefile293008);
NTI293008.kind = 18;
NTI293008.base = 0;
NTI293008.flags = 2;
TMP865[0] = &TMP861[1];
TMP861[1].kind = 1;
TMP861[1].offset = offsetof(tsourcefile293008, Lines);
TMP861[1].typ = (&NTI120208);
TMP861[1].name = "lines";
TMP865[1] = &TMP861[2];
TMP861[2].kind = 1;
TMP861[2].offset = offsetof(tsourcefile293008, Dirty);
TMP861[2].typ = (&NTI138);
TMP861[2].name = "dirty";
TMP865[2] = &TMP861[3];
TMP861[3].kind = 1;
TMP861[3].offset = offsetof(tsourcefile293008, Isnimfixfile);
TMP861[3].typ = (&NTI138);
TMP861[3].name = "isNimfixFile";
TMP865[3] = &TMP861[4];
TMP861[4].kind = 1;
TMP861[4].offset = offsetof(tsourcefile293008, Fullpath);
TMP861[4].typ = (&NTI149);
TMP861[4].name = "fullpath";
TMP865[4] = &TMP861[5];
TMP861[5].kind = 1;
TMP861[5].offset = offsetof(tsourcefile293008, Newline);
TMP861[5].typ = (&NTI149);
TMP861[5].name = "newline";
TMP865[5] = &TMP861[6];
TMP861[6].kind = 1;
TMP861[6].offset = offsetof(tsourcefile293008, Fileidx);
TMP861[6].typ = (&NTI114);
TMP861[6].name = "fileIdx";
TMP861[0].len = 6; TMP861[0].kind = 2; TMP861[0].sons = &TMP865[0];
NTI293008.node = &TMP861[0];
NTI293019.size = sizeof(TY293019*);
NTI293019.kind = 24;
NTI293019.base = (&NTI293008);
NTI293019.flags = 2;
NTI293019.marker = TMP866;
}

