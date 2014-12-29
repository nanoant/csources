/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>

#include <stdlib.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream212204 tllstream212204;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 TY212607[32];
typedef NI TY26220[8];
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1010)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_12403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readline_12689)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, readbuffer_12827)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llreadfromstdin_212749)(tllstream212204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readlinefromstdin_212447)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_12665)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, counttriples_212694)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueline_212666)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NIM_BOOL, endswith_212604)(NimStringDesc* x, TY212607 s);
N_NIMCALL(NI, writebuffer_12846)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_212278)(tllstream212204* s, NimStringDesc* data);
STRING_LITERAL(TMP1024, "", 0);
STRING_LITERAL(TMP1025, "\012", 1);
STRING_LITERAL(TMP1026, ">>> ", 4);
STRING_LITERAL(TMP1027, "... ", 4);
static NIM_CONST TY212607 TMP1028 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY212607 TMP1329 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3211; /* RootObj */
TNimType NTI212204; /* TLLStream */
TNimType NTI212202; /* TLLStreamKind */
extern TNimType NTI12204; /* File */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI212206; /* PLLStream */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP1010)(void* p, NI op) {
	tllstream212204* a;
	a = (tllstream212204*)p;
	nimGCvisit((void*)(*a).S, op);
}

N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode) {
	tllstream212204* result;
	result = 0;
	result = (tllstream212204*) newObj((&NTI212206), sizeof(tllstream212204));
	(*result).Sup.m_type = (&NTI212204);
	(*result).Kind = ((NU8) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12403(&(*result).F, filename, mode, -1);
		if (!!(LOC3)) goto LA4;
		result = NIM_NIL;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_212264)(tllstream212204* s, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	(*line) = setLengthStr((*line), 0);
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s).Rd < (*s).S->Sup.len)) goto LA4;
				switch (((NU8)((*s).S->data[(*s).Rd]))) {
				case 13:
				{
					(*s).Rd += 1;
					{
						if (!((NU8)((*s).S->data[(*s).Rd]) == (NU8)(10))) goto LA8;
						(*s).Rd += 1;
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).Rd += 1;
					goto LA3;
				}
				break;
				default:
				{
					(*line) = addChar((*line), (*s).S->data[(*s).Rd]);
					(*s).Rd += 1;
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = 0;
		LOC12 = (0 < (*line)->Sup.len);
		if (LOC12) goto LA13;
		LOC12 = ((*s).Rd < (*s).S->Sup.len);
		LA13: ;
		result = LOC12;
	}
	break;
	case ((NU8) 2):
	{
		result = readline_12689((*s).F, line);
	}
	break;
	case ((NU8) 3):
	{
		result = readline_12689(stdin, line);
	}
	break;
	}
	return result;
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44733))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_212447)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	write_12665(stdout, prompt);
	result = readline_12689(stdin, line);
	{
		if (!!(result)) goto LA3;
		write_12665(stdout, ((NimStringDesc*) &TMP1025));
		exit(0);
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, counttriples_212694)(NimStringDesc* s) {
	NI result;
	NI i;
	result = 0;
	i = 0;
	{
		while (1) {
			if (!(i < s->Sup.len)) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = 0;
				LOC6 = 0;
				LOC6 = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s->data[(NI64)(i + 1)]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s->data[(NI64)(i + 2)]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result += 1;
				i += 2;
			}
			LA9: ;
			i += 1;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, endswith_212604)(NimStringDesc* x, TY212607 s) {
	NIM_BOOL result;
	NI i;
	result = 0;
	i = (NI64)(x->Sup.len - 1);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (0 <= i);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x->data[i]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i -= 1;
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (0 <= i);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_TRUE;
	}
	LA9: ;
	return result;
}

static N_INLINE(NIM_BOOL, continueline_212666)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line->data[0]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_212604(line, TMP1028);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, llreadfromstdin_212749)(tllstream212204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	result = 0;
	LOC1 = 0;
	LOC1 = (*s).S; (*s).S = copyStringRC1(((NimStringDesc*) &TMP1024));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s).Rd = 0;
	line = rawNewString(120);
	triples = 0;
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = 0;
			{
				if (!((*s).S->Sup.len == 0)) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP1026));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1027));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_212447(LOC4, &line);
			if (!LOC10) goto LA3;
			(*s).S = resizeString((*s).S, line->Sup.len + 0);
appendString((*s).S, line);
			(*s).S = resizeString((*s).S, 1);
appendString((*s).S, ((NimStringDesc*) &TMP1025));
			LOC11 = 0;
			LOC11 = counttriples_212694(line);
			triples += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = continueline_212666(line, (((NI) ((NI)(triples & 1))) == 1));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s).Lineoffset += 1;
	result = ((buflen <= (NI64)((*s).S->Sup.len - (*s).Rd)) ? buflen : (NI64)((*s).S->Sup.len - (*s).Rd));
	{
		if (!(0 < result)) goto LA19;
		memcpy(buf, ((void*) (&(*s).S->data[(*s).Rd])), result);
		(*s).Rd += result;
	}
	LA19: ;
	return result;
}

N_NIMCALL(NI, llstreamread_212256)(tllstream212204* s, void* buf, NI buflen) {
	NI result;
	result = 0;
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		result = 0;
	}
	break;
	case ((NU8) 1):
	{
		result = ((buflen <= (NI64)((*s).S->Sup.len - (*s).Rd)) ? buflen : (NI64)((*s).S->Sup.len - (*s).Rd));
		{
			if (!(0 < result)) goto LA5;
			memcpy(buf, ((void*) (&(*s).S->data[(NI64)(0 + (*s).Rd)])), result);
			(*s).Rd += result;
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		result = readbuffer_12827((*s).F, buf, buflen);
	}
	break;
	case ((NU8) 3):
	{
		result = llreadfromstdin_212749(s, buf, buflen);
	}
	break;
	}
	return result;
}

N_NIMCALL(tllstream212204*, llstreamopen_212220)(NimStringDesc* data) {
	tllstream212204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tllstream212204*) newObj((&NTI212206), sizeof(tllstream212204));
	(*result).Sup.m_type = (&NTI212204);
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).Kind = ((NU8) 1);
	return result;
}

N_NIMCALL(void, llstreamclose_212250)(tllstream212204* s) {
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		fclose((*s).F);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_212278)(tllstream212204* s, NimStringDesc* data) {
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).S = resizeString((*s).S, data->Sup.len + 0);
appendString((*s).S, data);
		(*s).Wr += data->Sup.len;
	}
	break;
	case ((NU8) 2):
	{
		write_12665((*s).F, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_212656)(NimStringDesc* x) {
	NIM_BOOL result;
	result = 0;
	result = endswith_212604(x, TMP1329);
	return result;
}

N_NIMCALL(void, llstreamwrite_212285)(tllstream212204* s, NIM_CHAR data) {
	NIM_CHAR c;
	c = 0;
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).S = addChar((*s).S, data);
		(*s).Wr += 1;
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		c = data;
		LOC4 = 0;
		LOC4 = writebuffer_12846((*s).F, ((void*) (&c)), 1);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_212300)(tllstream212204* s, NimStringDesc* data) {
	llstreamwrite_212278(s, data);
	llstreamwrite_212278(s, ((NimStringDesc*) &TMP1025));
}

N_NIMCALL(tllstream212204*, llstreamopen_212226)(FILE** f) {
	tllstream212204* result;
	result = 0;
	result = (tllstream212204*) newObj((&NTI212206), sizeof(tllstream212204));
	(*result).Sup.m_type = (&NTI212204);
	(*result).F = (*f);
	(*result).Kind = ((NU8) 2);
	return result;
}

N_NIMCALL(tllstream212204*, llstreamopenstdin_212245)(void) {
	tllstream212204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tllstream212204*) newObj((&NTI212206), sizeof(tllstream212204));
	(*result).Sup.m_type = (&NTI212204);
	(*result).Kind = ((NU8) 3);
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(((NimStringDesc*) &TMP1024));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).Lineoffset = -1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_llstreamInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_llstreamDatInit)(void) {
static TNimNode* TMP1006[6];
static TNimNode* TMP1007[4];
NI TMP1009;
static char* NIM_CONST TMP1008[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP711[12];
NTI212204.size = sizeof(tllstream212204);
NTI212204.kind = 17;
NTI212204.base = (&NTI3211);
TMP1006[0] = &TMP711[1];
NTI212202.size = sizeof(NU8);
NTI212202.kind = 14;
NTI212202.base = 0;
NTI212202.flags = 3;
for (TMP1009 = 0; TMP1009 < 4; TMP1009++) {
TMP711[TMP1009+2].kind = 1;
TMP711[TMP1009+2].offset = TMP1009;
TMP711[TMP1009+2].name = TMP1008[TMP1009];
TMP1007[TMP1009] = &TMP711[TMP1009+2];
}
TMP711[6].len = 4; TMP711[6].kind = 2; TMP711[6].sons = &TMP1007[0];
NTI212202.node = &TMP711[6];
TMP711[1].kind = 1;
TMP711[1].offset = offsetof(tllstream212204, Kind);
TMP711[1].typ = (&NTI212202);
TMP711[1].name = "kind";
TMP1006[1] = &TMP711[7];
TMP711[7].kind = 1;
TMP711[7].offset = offsetof(tllstream212204, F);
TMP711[7].typ = (&NTI12204);
TMP711[7].name = "f";
TMP1006[2] = &TMP711[8];
TMP711[8].kind = 1;
TMP711[8].offset = offsetof(tllstream212204, S);
TMP711[8].typ = (&NTI149);
TMP711[8].name = "s";
TMP1006[3] = &TMP711[9];
TMP711[9].kind = 1;
TMP711[9].offset = offsetof(tllstream212204, Rd);
TMP711[9].typ = (&NTI108);
TMP711[9].name = "rd";
TMP1006[4] = &TMP711[10];
TMP711[10].kind = 1;
TMP711[10].offset = offsetof(tllstream212204, Wr);
TMP711[10].typ = (&NTI108);
TMP711[10].name = "wr";
TMP1006[5] = &TMP711[11];
TMP711[11].kind = 1;
TMP711[11].offset = offsetof(tllstream212204, Lineoffset);
TMP711[11].typ = (&NTI108);
TMP711[11].name = "lineOffset";
TMP711[0].len = 6; TMP711[0].kind = 2; TMP711[0].sons = &TMP1006[0];
NTI212204.node = &TMP711[0];
NTI212206.size = sizeof(tllstream212204*);
NTI212206.kind = 22;
NTI212206.base = (&NTI212204);
NTI212206.marker = TMP1010;
}

