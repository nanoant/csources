/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY294019 TY294019;
typedef struct tsourcefile294008 tsourcefile294008;
typedef struct TY119408 TY119408;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tsym225849 tsym225849;
typedef struct tident201021 tident201021;
typedef struct TY117204 TY117204;
typedef struct baselexer292024 baselexer292024;
typedef struct TNimObject TNimObject;
typedef struct streamobj135035 streamobj135035;
typedef struct filestreamobj135742 filestreamobj135742;
typedef struct slice83970 slice83970;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct ttype225855 ttype225855;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tnode225819 tnode225819;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tlib225837 tlib225837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct TY225939 TY225939;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsourcefile294008  {
TY119408* Lines;
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
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY117204 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer292024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj135035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice83970  {
NI A;
NI B;
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
struct  tstrtable225823  {
NI Counter;
tsymseq225821* Data;
};
struct  tloc225833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225855* T;
trope178009* R;
trope178009* Heaproot;
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
typedef N_NIMCALL_PTR(void, TY135036) (streamobj135035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY135040) (streamobj135035* s);
typedef N_NIMCALL_PTR(void, TY135044) (streamobj135035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY135049) (streamobj135035* s);
typedef N_NIMCALL_PTR(NI, TY135053) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135059) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135065) (streamobj135035* s);
struct  streamobj135035  {
  TNimObject Sup;
TY135036 Closeimpl;
TY135040 Atendimpl;
TY135044 Setpositionimpl;
TY135049 Getpositionimpl;
TY135053 Readdataimpl;
TY135059 Writedataimpl;
TY135065 Flushimpl;
};
struct  filestreamobj135742  {
  streamobj135035 Sup;
FILE* F;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY119408 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY294019 {
  TGenericSeq Sup;
  tsourcefile294008 data[SEQ_DECL_SIZE];
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
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP855)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_294247)(tlineinfo196539 info, tident201021* oldsym, tident201021* newsym);
N_NIMCALL(void, loadfile_294045)(tlineinfo196539 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_198037)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117204* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_12417)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_12689)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_292040)(baselexer292024* l, streamobj135035* input, NI buflen);
N_NIMCALL(filestreamobj135742*, newfilestream_135836)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_292050)(baselexer292024* l);
N_NIMCALL(NI, identlen_294178)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_83963)(NimStringDesc* s, slice83970 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice83970, HEX2EHEX2E_92494)(NI a_92498, NI b_92500);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2688, ".nimfix", 7);
STRING_LITERAL(TMP2696, "\015\012", 2);
STRING_LITERAL(TMP2697, "\012", 1);
TY294019* gsourcefiles_294040;
TNimType NTI294008; /* TSourceFile */
extern TNimType NTI119408; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI294019; /* seq[TSourceFile] */
extern tgcheap46816 gch_46844;
extern TNimType NTI292024; /* BaseLexer */
N_NIMCALL(void, TMP855)(void* p, NI op) {
	TY294019* a;
	NI LOC1;
	a = (TY294019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44733* c;
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

N_NIMCALL(void, loadfile_294045)(tlineinfo196539 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_294040->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_294040 = (TY294019*) setLengthSeq(&(gsourcefiles_294040)->Sup, sizeof(tsourcefile294008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY117204 LOC10;
		baselexer292024 lex;
		filestreamobj135742* LOC16;
		NI pos;
		if (!gsourcefiles_294040->data[i].Lines == 0) goto LA7;
		gsourcefiles_294040->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_294040->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_294040->data[i].Lines);
		gsourcefiles_294040->data[i].Lines = (TY119408*) newSeqRC1((&NTI119408), 0);
		path = tofullpath_198037(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_294040->data[i].Fullpath; gsourcefiles_294040->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)&LOC10, 0, sizeof(LOC10));
		nossplitFile(path, &LOC10);
		gsourcefiles_294040->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2688));
		{
			NimStringDesc* line_294108;
			FILE* f_294146;
			NimStringDesc* res_294148;
			line_294108 = 0;
			f_294146 = open_12417(path, ((NU8) 0), 8000);
			res_294148 = rawNewString(80);
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_12689(f_294146, &res_294148);
					if (!LOC14) goto LA13;
					line_294108 = res_294148;
					gsourcefiles_294040->data[i].Lines = (TY119408*) incrSeq(&(gsourcefiles_294040->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_294040->data[i].Lines->data[gsourcefiles_294040->data[i].Lines->Sup.len-1]; gsourcefiles_294040->data[i].Lines->data[gsourcefiles_294040->data[i].Lines->Sup.len-1] = copyStringRC1(line_294108);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_294146);
		}
		memset((void*)&lex, 0, sizeof(lex));
		lex.Sup.m_type = (&NTI292024);
		LOC16 = 0;
		LOC16 = newfilestream_135836(path, ((NU8) 0));
		open_292040(&lex, &LOC16->Sup, 8192);
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC20;
					LOC20 = 0;
					LOC20 = gsourcefiles_294040->data[i].Newline; gsourcefiles_294040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2696));
					if (LOC20) nimGCunrefNoCycle(LOC20);
					goto LA17;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC22;
					LOC22 = 0;
					LOC22 = gsourcefiles_294040->data[i].Newline; gsourcefiles_294040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2697));
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
		close_292050(&lex);
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_294178)(NimStringDesc* line, NI start) {
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

static N_INLINE(NimStringDesc*, HEX5BHEX5D_83963)(NimStringDesc* s, slice83970 x) {
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

static N_INLINE(slice83970, HEX2EHEX2E_92494)(NI a_92498, NI b_92500) {
	slice83970 result;
	memset((void*)&result, 0, sizeof(result));
	result.A = a_92498;
	result.B = b_92500;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replacedeprecated_294247)(tlineinfo196539 info, tident201021* oldsym, tident201021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
	loadfile_294045(info);
	line = gsourcefiles_294040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
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
	LOC17 = identlen_294178(line, first);
	last = (NI32)((NI32)(first + LOC17) - 1);
	{
		slice83970 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_92494(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_83963(line, LOC20);
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
		asgnRefNoCycle((void**) &gsourcefiles_294040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))], x);
		gsourcefiles_294040->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_294324)(tlineinfo196539 info, tsym225849* oldsym, tsym225849* newsym) {
	replacedeprecated_294247(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseInit)(void) {
	if (gsourcefiles_294040) nimGCunrefNoCycle(gsourcefiles_294040);
	gsourcefiles_294040 = (TY294019*) newSeqRC1((&NTI294019), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseDatInit)(void) {
static TNimNode* TMP854[6];
static TNimNode TMP850[7];
NTI294008.size = sizeof(tsourcefile294008);
NTI294008.kind = 18;
NTI294008.base = 0;
NTI294008.flags = 2;
TMP854[0] = &TMP850[1];
TMP850[1].kind = 1;
TMP850[1].offset = offsetof(tsourcefile294008, Lines);
TMP850[1].typ = (&NTI119408);
TMP850[1].name = "lines";
TMP854[1] = &TMP850[2];
TMP850[2].kind = 1;
TMP850[2].offset = offsetof(tsourcefile294008, Dirty);
TMP850[2].typ = (&NTI138);
TMP850[2].name = "dirty";
TMP854[2] = &TMP850[3];
TMP850[3].kind = 1;
TMP850[3].offset = offsetof(tsourcefile294008, Isnimfixfile);
TMP850[3].typ = (&NTI138);
TMP850[3].name = "isNimfixFile";
TMP854[3] = &TMP850[4];
TMP850[4].kind = 1;
TMP850[4].offset = offsetof(tsourcefile294008, Fullpath);
TMP850[4].typ = (&NTI149);
TMP850[4].name = "fullpath";
TMP854[4] = &TMP850[5];
TMP850[5].kind = 1;
TMP850[5].offset = offsetof(tsourcefile294008, Newline);
TMP850[5].typ = (&NTI149);
TMP850[5].name = "newline";
TMP854[5] = &TMP850[6];
TMP850[6].kind = 1;
TMP850[6].offset = offsetof(tsourcefile294008, Fileidx);
TMP850[6].typ = (&NTI114);
TMP850[6].name = "fileIdx";
TMP850[0].len = 6; TMP850[0].kind = 2; TMP850[0].sons = &TMP854[0];
NTI294008.node = &TMP850[0];
NTI294019.size = sizeof(TY294019*);
NTI294019.kind = 24;
NTI294019.base = (&NTI294008);
NTI294019.flags = 2;
NTI294019.marker = TMP855;
}

