/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY292019 TY292019;
typedef struct tsourcefile292008 tsourcefile292008;
typedef struct TY118408 TY118408;
typedef struct NimStringDesc NimStringDesc;
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
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct tsym223849 tsym223849;
typedef struct tident199021 tident199021;
typedef struct TY116204 TY116204;
typedef struct baselexer290024 baselexer290024;
typedef struct TNimObject TNimObject;
typedef struct streamobj134035 streamobj134035;
typedef struct filestreamobj134742 filestreamobj134742;
typedef struct slice83965 slice83965;
typedef struct tidobj199015 tidobj199015;
typedef struct ttypeseq223851 ttypeseq223851;
typedef struct ttype223855 ttype223855;
typedef struct tscope223843 tscope223843;
typedef struct TY223950 TY223950;
typedef struct tinstantiation223839 tinstantiation223839;
typedef struct tstrtable223823 tstrtable223823;
typedef struct tsymseq223821 tsymseq223821;
typedef struct tnode223819 tnode223819;
typedef struct tloc223833 tloc223833;
typedef struct trope176009 trope176009;
typedef struct tlib223837 tlib223837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct tnodeseq223813 tnodeseq223813;
typedef struct TY223939 TY223939;
typedef struct tlistentry126022 tlistentry126022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsourcefile292008  {
TY118408* Lines;
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
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY116204 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer290024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj134035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice83965  {
NI A;
NI B;
};
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  tstrtable223823  {
NI Counter;
tsymseq223821* Data;
};
struct  tloc223833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype223855* T;
trope176009* R;
trope176009* Heaproot;
};
struct  tsym223849  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq223851* Typeinstcache;
tscope223843* Typscope;
} S1;
struct {TY223950* Procinstcache;
tscope223843* Scope;
} S2;
struct {TY223950* Usedgenerics;
tstrtable223823 Tab;
} S3;
struct {tsym223849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype223855* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym223849* Owner;
NU32 Flags;
tnode223819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc223833 Loc;
tlib223837* Annex;
tnode223819* Constraint;
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
typedef N_NIMCALL_PTR(void, TY134036) (streamobj134035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY134040) (streamobj134035* s);
typedef N_NIMCALL_PTR(void, TY134044) (streamobj134035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY134049) (streamobj134035* s);
typedef N_NIMCALL_PTR(NI, TY134053) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134059) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134065) (streamobj134035* s);
struct  streamobj134035  {
  TNimObject Sup;
TY134036 Closeimpl;
TY134040 Atendimpl;
TY134044 Setpositionimpl;
TY134049 Getpositionimpl;
TY134053 Readdataimpl;
TY134059 Writedataimpl;
TY134065 Flushimpl;
};
struct  filestreamobj134742  {
  streamobj134035 Sup;
FILE* F;
};
struct  ttype223855  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq223851* Sons;
tnode223819* N;
tsym223849* Owner;
tsym223849* Sym;
tsym223849* Destructor;
tsym223849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc223833 Loc;
};
struct  tscope223843  {
NI Depthlevel;
tstrtable223823 Symbols;
tnodeseq223813* Usingsyms;
tscope223843* Parent;
};
struct  tinstantiation223839  {
tsym223849* Sym;
ttypeseq223851* Concretetypes;
TY223939* Usedby;
};
struct  tnode223819  {
ttype223855* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym223849* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq223813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib223837  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode223819* Path;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY118408 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY292019 {
  TGenericSeq Sup;
  tsourcefile292008 data[SEQ_DECL_SIZE];
};
struct ttypeseq223851 {
  TGenericSeq Sup;
  ttype223855* data[SEQ_DECL_SIZE];
};
struct TY223950 {
  TGenericSeq Sup;
  tinstantiation223839* data[SEQ_DECL_SIZE];
};
struct tsymseq223821 {
  TGenericSeq Sup;
  tsym223849* data[SEQ_DECL_SIZE];
};
struct tnodeseq223813 {
  TGenericSeq Sup;
  tnode223819* data[SEQ_DECL_SIZE];
};
struct TY223939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP853)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_292247)(tlineinfo194539 info, tident199021* oldsym, tident199021* newsym);
N_NIMCALL(void, loadfile_292045)(tlineinfo194539 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_196037)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY116204* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_12417)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_12689)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_290040)(baselexer290024* l, streamobj134035* input, NI buflen);
N_NIMCALL(filestreamobj134742*, newfilestream_134837)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_290050)(baselexer290024* l);
N_NIMCALL(NI, identlen_292178)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_83958)(NimStringDesc* s, slice83965 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice83965, HEX2EHEX2E_92494)(NI a_92498, NI b_92500);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2686, ".nimfix", 7);
STRING_LITERAL(TMP2694, "\015\012", 2);
STRING_LITERAL(TMP2695, "\012", 1);
TY292019* gsourcefiles_292040;
TNimType NTI292008; /* TSourceFile */
extern TNimType NTI118408; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI292019; /* seq[TSourceFile] */
extern tgcheap46816 gch_46844;
extern TNimType NTI290024; /* BaseLexer */
N_NIMCALL(void, TMP853)(void* p, NI op) {
	TY292019* a;
	NI LOC1;
	a = (TY292019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
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

N_NIMCALL(void, loadfile_292045)(tlineinfo194539 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_292040->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_292040 = (TY292019*) setLengthSeq(&(gsourcefiles_292040)->Sup, sizeof(tsourcefile292008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY116204 LOC10;
		baselexer290024 lex;
		filestreamobj134742* LOC16;
		NI pos;
		if (!gsourcefiles_292040->data[i].Lines == 0) goto LA7;
		gsourcefiles_292040->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_292040->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_292040->data[i].Lines);
		gsourcefiles_292040->data[i].Lines = (TY118408*) newSeqRC1((&NTI118408), 0);
		path = tofullpath_196037(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_292040->data[i].Fullpath; gsourcefiles_292040->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)&LOC10, 0, sizeof(LOC10));
		nossplitFile(path, &LOC10);
		gsourcefiles_292040->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2686));
		{
			NimStringDesc* line_292108;
			FILE* f_292146;
			NimStringDesc* res_292148;
			line_292108 = 0;
			f_292146 = open_12417(path, ((NU8) 0), 8000);
			res_292148 = rawNewString(80);
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_12689(f_292146, &res_292148);
					if (!LOC14) goto LA13;
					line_292108 = res_292148;
					gsourcefiles_292040->data[i].Lines = (TY118408*) incrSeq(&(gsourcefiles_292040->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_292040->data[i].Lines->data[gsourcefiles_292040->data[i].Lines->Sup.len-1]; gsourcefiles_292040->data[i].Lines->data[gsourcefiles_292040->data[i].Lines->Sup.len-1] = copyStringRC1(line_292108);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_292146);
		}
		memset((void*)&lex, 0, sizeof(lex));
		lex.Sup.m_type = (&NTI290024);
		LOC16 = 0;
		LOC16 = newfilestream_134837(path, ((NU8) 0));
		open_290040(&lex, &LOC16->Sup, 8192);
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC20;
					LOC20 = 0;
					LOC20 = gsourcefiles_292040->data[i].Newline; gsourcefiles_292040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2694));
					if (LOC20) nimGCunrefNoCycle(LOC20);
					goto LA17;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC22;
					LOC22 = 0;
					LOC22 = gsourcefiles_292040->data[i].Newline; gsourcefiles_292040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2695));
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
		close_290050(&lex);
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_292178)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI64)(start + result) < line->Sup.len);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI64)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += 1;
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_83958)(NimStringDesc* s, slice83965 x) {
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
		LOC1 = (NI64)(s->Sup.len + x.A);
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
		LOC7 = (NI64)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice83965, HEX2EHEX2E_92494)(NI a_92498, NI b_92500) {
	slice83965 result;
	memset((void*)&result, 0, sizeof(result));
	result.A = a_92498;
	result.B = b_92500;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replacedeprecated_292247)(tlineinfo194539 info, tident199021* oldsym, tident199021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
	loadfile_292045(info);
	line = gsourcefiles_292040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
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
			LOC7 = (((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI64)(first - 1)])) == ((NU8)(95)));
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
	LOC17 = identlen_292178(line, first);
	last = (NI64)((NI64)(first + LOC17) - 1);
	{
		slice83965 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_92494(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_83958(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).S);
		if (!(LOC22 == 0)) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, 0, (NI64)(first - 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI64)(last + 1));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).S->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).S);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) &gsourcefiles_292040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))], x);
		gsourcefiles_292040->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_292324)(tlineinfo194539 info, tsym223849* oldsym, tsym223849* newsym) {
	replacedeprecated_292247(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseInit)(void) {
	if (gsourcefiles_292040) nimGCunrefNoCycle(gsourcefiles_292040);
	gsourcefiles_292040 = (TY292019*) newSeqRC1((&NTI292019), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseDatInit)(void) {
static TNimNode* TMP852[6];
static TNimNode TMP848[7];
NTI292008.size = sizeof(tsourcefile292008);
NTI292008.kind = 18;
NTI292008.base = 0;
NTI292008.flags = 2;
TMP852[0] = &TMP848[1];
TMP848[1].kind = 1;
TMP848[1].offset = offsetof(tsourcefile292008, Lines);
TMP848[1].typ = (&NTI118408);
TMP848[1].name = "lines";
TMP852[1] = &TMP848[2];
TMP848[2].kind = 1;
TMP848[2].offset = offsetof(tsourcefile292008, Dirty);
TMP848[2].typ = (&NTI138);
TMP848[2].name = "dirty";
TMP852[2] = &TMP848[3];
TMP848[3].kind = 1;
TMP848[3].offset = offsetof(tsourcefile292008, Isnimfixfile);
TMP848[3].typ = (&NTI138);
TMP848[3].name = "isNimfixFile";
TMP852[3] = &TMP848[4];
TMP848[4].kind = 1;
TMP848[4].offset = offsetof(tsourcefile292008, Fullpath);
TMP848[4].typ = (&NTI149);
TMP848[4].name = "fullpath";
TMP852[4] = &TMP848[5];
TMP848[5].kind = 1;
TMP848[5].offset = offsetof(tsourcefile292008, Newline);
TMP848[5].typ = (&NTI149);
TMP848[5].name = "newline";
TMP852[5] = &TMP848[6];
TMP848[6].kind = 1;
TMP848[6].offset = offsetof(tsourcefile292008, Fileidx);
TMP848[6].typ = (&NTI114);
TMP848[6].name = "fileIdx";
TMP848[0].len = 6; TMP848[0].kind = 2; TMP848[0].sons = &TMP852[0];
NTI292008.node = &TMP848[0];
NTI292019.size = sizeof(TY292019*);
NTI292019.kind = 24;
NTI292019.base = (&NTI292008);
NTI292019.flags = 2;
NTI292019.marker = TMP853;
}

