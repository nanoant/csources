/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tident141017 tident141017;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef tident141017* TY141026[8192];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY21418[16];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
N_NIMCALL(NI, cmpignorestyle_141034)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, cmpexact_141152)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(tident141017*, getident_141202)(NCSTRING identifier, NI length, NI h);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP893)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(tident141017*, getident_141443)(NimStringDesc* identifier);
N_NIMCALL(NI, hashignorestyle_110856)(NimStringDesc* x);
N_NIMCALL(tident141017*, getident_141449)(NimStringDesc* identifier, NI h);
N_NIMCALL(NIM_BOOL, identeq_141456)(tident141017* id, NimStringDesc* name);
N_NIMCALL(void, TMP2022)(void* p, NI op);
STRING_LITERAL(TMP891, "id == 0 or id == result.id ", 27);
STRING_LITERAL(TMP895, ":anonymous", 10);
STRING_LITERAL(TMP896, ":delegator", 10);
NIM_BOOL firstchariscs_141023;
TY141026 buckets_141031;
extern TFrame* frameptr_12037;
NI wordcounter_141200;
extern tgcheap40816 gch_40844;
extern TNimType NTI1009; /* TObject */
TNimType NTI141011; /* TIdObj */
extern TNimType NTI105; /* int */
TNimType NTI141017; /* TIdent */
extern TNimType NTI142; /* string */
extern TNimType NTI110011; /* THash */
TNimType NTI141015; /* PIdent */
tident141017* idanon_141463;
tident141017* iddelegator_141465;
TNimType NTI141013; /* PIdObj */

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NI, cmpignorestyle_141034)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpIgnoreStyle", "idents.nim")
	result = 0;
	nimln(32, "idents.nim");
	{
		if (!firstchariscs_141023) goto LA3;
		nimln(33, "idents.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!(((NU8)(a[0]) == (NU8)(b[0])))) goto LA7;
			nimln(33, "idents.nim");
			nimln(33, "idents.nim");
			result = 1;
			goto BeforeRet;
		}		LA7: ;
	}	LA3: ;
	nimln(34, "idents.nim");
	i = 0;
	nimln(35, "idents.nim");
	j = 0;
	nimln(36, "idents.nim");
	result = 1;
	nimln(37, "idents.nim");
	while (1) {
		NIM_CHAR aa;
		NIM_CHAR bb;
		NI TMP889;
		nimln(37, "idents.nim");
		if (!(j < blen)) goto LA9;
		nimln(38, "idents.nim");
		while (1) {
			nimln(38, "idents.nim");
			if (!((NU8)(a[i]) == (NU8)(95))) goto LA10;
			nimln(38, "idents.nim");
			i = addInt(i, 1);
		} LA10: ;
		nimln(39, "idents.nim");
		while (1) {
			nimln(39, "idents.nim");
			if (!((NU8)(b[j]) == (NU8)(95))) goto LA11;
			nimln(39, "idents.nim");
			j = addInt(j, 1);
		} LA11: ;
		nimln(41, "idents.nim");
		aa = a[i];
		nimln(42, "idents.nim");
		bb = b[j];
		nimln(43, "idents.nim");
		{
			NIM_BOOL LOC14;
			NI TMP887;
			nimln(43, "idents.nim");
			LOC14 = 0;
			nimln(702, "system.nim");
			LOC14 = ((NU8)(65) <= (NU8)(aa));
			if (!(LOC14)) goto LA15;
			nimln(43, "idents.nim");
			LOC14 = ((NU8)(aa) <= (NU8)(90));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(43, "idents.nim");
			nimln(43, "idents.nim");
			nimln(43, "idents.nim");
			nimln(43, "idents.nim");
			TMP887 = addInt(((NI) (((NU8)(aa)))), 32);
			aa = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP887), 0, 255))));
		}		LA16: ;
		nimln(44, "idents.nim");
		{
			NIM_BOOL LOC20;
			NI TMP888;
			nimln(44, "idents.nim");
			LOC20 = 0;
			nimln(702, "system.nim");
			LOC20 = ((NU8)(65) <= (NU8)(bb));
			if (!(LOC20)) goto LA21;
			nimln(44, "idents.nim");
			LOC20 = ((NU8)(bb) <= (NU8)(90));
			LA21: ;
			if (!LOC20) goto LA22;
			nimln(44, "idents.nim");
			nimln(44, "idents.nim");
			nimln(44, "idents.nim");
			nimln(44, "idents.nim");
			TMP888 = addInt(((NI) (((NU8)(bb)))), 32);
			bb = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP888), 0, 255))));
		}		LA22: ;
		nimln(45, "idents.nim");
		nimln(45, "idents.nim");
		nimln(45, "idents.nim");
		nimln(45, "idents.nim");
		TMP889 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
		result = (NI32)(TMP889);
		nimln(46, "idents.nim");
		{
			NIM_BOOL LOC26;
			nimln(46, "idents.nim");
			LOC26 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !((result == 0));
			if (LOC26) goto LA27;
			nimln(46, "idents.nim");
			LOC26 = ((NU8)(aa) == (NU8)(0));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(46, "idents.nim");
			goto LA9;
		}		LA28: ;
		nimln(47, "idents.nim");
		i = addInt(i, 1);
		nimln(48, "idents.nim");
		j = addInt(j, 1);
	} LA9: ;
	nimln(49, "idents.nim");
	{
		nimln(49, "idents.nim");
		if (!(result == 0)) goto LA32;
		nimln(50, "idents.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA36;
			nimln(50, "idents.nim");
			result = 1;
		}		LA36: ;
	}	LA32: ;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI, cmpexact_141152)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	nimfr("cmpExact", "idents.nim")
	result = 0;
	nimln(53, "idents.nim");
	i = 0;
	nimln(54, "idents.nim");
	j = 0;
	nimln(55, "idents.nim");
	result = 1;
	nimln(56, "idents.nim");
	while (1) {
		NIM_CHAR aa;
		NIM_CHAR bb;
		NI TMP890;
		nimln(56, "idents.nim");
		if (!(j < blen)) goto LA1;
		nimln(57, "idents.nim");
		aa = a[i];
		nimln(58, "idents.nim");
		bb = b[j];
		nimln(59, "idents.nim");
		nimln(59, "idents.nim");
		nimln(59, "idents.nim");
		nimln(59, "idents.nim");
		TMP890 = subInt(((NI) (((NU8)(aa)))), ((NI) (((NU8)(bb)))));
		result = (NI32)(TMP890);
		nimln(60, "idents.nim");
		{
			NIM_BOOL LOC4;
			nimln(60, "idents.nim");
			LOC4 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC4 = !((result == 0));
			if (LOC4) goto LA5;
			nimln(60, "idents.nim");
			LOC4 = ((NU8)(aa) == (NU8)(0));
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(60, "idents.nim");
			goto LA1;
		}		LA6: ;
		nimln(61, "idents.nim");
		i = addInt(i, 1);
		nimln(62, "idents.nim");
		j = addInt(j, 1);
	} LA1: ;
	nimln(63, "idents.nim");
	{
		nimln(63, "idents.nim");
		if (!(result == 0)) goto LA10;
		nimln(64, "idents.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA14;
			nimln(64, "idents.nim");
			result = 1;
		}		LA14: ;
	}	LA10: ;
	popFrame();
	return result;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}N_NIMCALL(void, TMP893)(void* p, NI op) {
	tident141017* a;
	a = (tident141017*)p;
	nimGCvisit((void*)(*a).S, op);
	nimGCvisit((void*)(*a).Next, op);
}

N_NIMCALL(tident141017*, getident_141202)(NCSTRING identifier, NI length, NI h) {
	tident141017* result;
	NI idx;
	tident141017* last;
	NI id;
	NI i_141422;
	NI HEX3Atmp_141435;
	NI TMP894;
	NI res_141437;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(69, "idents.nim");
	nimln(69, "idents.nim");
	idx = (NI)(h & 8191);
	nimln(70, "idents.nim");
	result = buckets_141031[(idx)- 0];
	nimln(71, "idents.nim");
	last = NIM_NIL;
	nimln(72, "idents.nim");
	id = 0;
	nimln(73, "idents.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(74, "idents.nim");
		{
			NI LOC4;
			nimln(74, "idents.nim");
			nimln(74, "idents.nim");
			LOC4 = 0;
			LOC4 = cmpexact_141152((*result).S->data, identifier, length);
			if (!(LOC4 == 0)) goto LA5;
			nimln(75, "idents.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (!!((last == NIM_NIL))) goto LA9;
				nimln(77, "idents.nim");
				asgnRefNoCycle((void**) &(*last).Next, (*result).Next);
				nimln(78, "idents.nim");
				asgnRefNoCycle((void**) &(*result).Next, buckets_141031[(idx)- 0]);
				nimln(79, "idents.nim");
				asgnRefNoCycle((void**) &buckets_141031[(idx)- 0], result);
			}			LA9: ;
			nimln(80, "idents.nim");
			goto BeforeRet;
		}		goto LA2;
		LA5: ;
		{
			NI LOC12;
			nimln(81, "idents.nim");
			nimln(81, "idents.nim");
			LOC12 = 0;
			LOC12 = cmpignorestyle_141034((*result).S->data, identifier, length);
			if (!(LOC12 == 0)) goto LA13;
			nimln(82, "idents.nim");
			{
				NIM_BOOL LOC17;
				nimln(82, "idents.nim");
				nimln(82, "idents.nim");
				LOC17 = 0;
				nimln(82, "idents.nim");
				LOC17 = (id == 0);
				if (LOC17) goto LA18;
				nimln(82, "idents.nim");
				LOC17 = (id == (*result).Sup.Id);
				LA18: ;
				if (!!(LOC17)) goto LA19;
				nimln(82, "idents.nim");
				hiddenraiseassert_76017(((NimStringDesc*) &TMP891));			}			LA19: ;
			nimln(83, "idents.nim");
			id = (*result).Sup.Id;
		}		goto LA2;
		LA13: ;
		LA2: ;
		nimln(84, "idents.nim");
		last = result;
		nimln(85, "idents.nim");
		result = (*result).Next;
	} LA1: ;
	nimln(86, "idents.nim");
	result = (tident141017*) newObj((&NTI141015), sizeof(tident141017));
	(*result).Sup.Sup.m_type = (&NTI141017);
	nimln(87, "idents.nim");
	(*result).H = h;
	nimln(88, "idents.nim");
	nimln(88, "idents.nim");
	asgnRefNoCycle((void**) &(*result).S, mnewString(length));
	i_141422 = 0;
	HEX3Atmp_141435 = 0;
	nimln(89, "idents.nim");
	nimln(89, "idents.nim");
	TMP894 = subInt(length, 1);
	HEX3Atmp_141435 = (NI32)(TMP894);
	nimln(1301, "system.nim");
	res_141437 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_141437 <= HEX3Atmp_141435)) goto LA21;
		nimln(1301, "system.nim");
		i_141422 = res_141437;
		nimln(89, "idents.nim");
		if ((NU)(i_141422) > (NU)((*result).S->Sup.len)) raiseIndexError();
		(*result).S->data[i_141422] = identifier[i_141422];
		nimln(1304, "system.nim");
		res_141437 = addInt(res_141437, 1);
	} LA21: ;
	nimln(90, "idents.nim");
	asgnRefNoCycle((void**) &(*result).Next, buckets_141031[(idx)- 0]);
	nimln(91, "idents.nim");
	asgnRefNoCycle((void**) &buckets_141031[(idx)- 0], result);
	nimln(92, "idents.nim");
	{
		nimln(92, "idents.nim");
		if (!(id == 0)) goto LA24;
		nimln(93, "idents.nim");
		wordcounter_141200 = addInt(wordcounter_141200, 1);
		nimln(94, "idents.nim");
		nimln(94, "idents.nim");
		if (wordcounter_141200 == (-2147483647 -1)) raiseOverflow();
		(*result).Sup.Id = ((NI32)-(wordcounter_141200));
	}	goto LA22;
	LA24: ;
	{
		nimln(96, "idents.nim");
		(*result).Sup.Id = id;
	}	LA22: ;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tident141017*, getident_141443)(NimStringDesc* identifier) {
	tident141017* result;
	NI LOC1;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(99, "idents.nim");
	nimln(99, "idents.nim");
	nimln(100, "idents.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_110856(identifier);
	result = getident_141202(identifier->data, identifier->Sup.len, LOC1);
	popFrame();
	return result;
}
N_NIMCALL(tident141017*, getident_141449)(NimStringDesc* identifier, NI h) {
	tident141017* result;
	nimfr("getIdent", "idents.nim")
	result = 0;
	nimln(103, "idents.nim");
	nimln(103, "idents.nim");
	result = getident_141202(identifier->data, identifier->Sup.len, h);
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, identeq_141456)(tident141017* id, NimStringDesc* name) {
	NIM_BOOL result;
	tident141017* LOC1;
	nimfr("IdentEq", "idents.nim")
	result = 0;
	nimln(106, "idents.nim");
	nimln(106, "idents.nim");
	nimln(106, "idents.nim");
	LOC1 = 0;
	LOC1 = getident_141443(name);
	result = ((*id).Sup.Id == (*LOC1).Sup.Id);
	popFrame();
	return result;
}N_NIMCALL(void, TMP2022)(void* p, NI op) {
	tidobj141011* a;
	a = (tidobj141011*)p;
}
N_NOINLINE(void, compileridentsInit)(void) {
	nimfr("idents", "idents.nim")
	nimln(66, "idents.nim");
	wordcounter_141200 = 1;
	nimln(108, "idents.nim");
	asgnRefNoCycle((void**) &idanon_141463, getident_141443(((NimStringDesc*) &TMP895)));
	nimln(109, "idents.nim");
	asgnRefNoCycle((void**) &iddelegator_141465, getident_141443(((NimStringDesc*) &TMP896)));
	popFrame();
}

N_NOINLINE(void, compileridentsDatInit)(void) {
static TNimNode* TMP892[3];
static TNimNode TMP885[5];
NTI141011.size = sizeof(tidobj141011);
NTI141011.kind = 17;
NTI141011.base = (&NTI1009);
NTI141011.flags = 3;
TMP885[0].kind = 1;
TMP885[0].offset = offsetof(tidobj141011, Id);
TMP885[0].typ = (&NTI105);
TMP885[0].name = "id";
NTI141011.node = &TMP885[0];
NTI141017.size = sizeof(tident141017);
NTI141017.kind = 17;
NTI141017.base = (&NTI141011);
NTI141017.flags = 2;
TMP892[0] = &TMP885[2];
TMP885[2].kind = 1;
TMP885[2].offset = offsetof(tident141017, S);
TMP885[2].typ = (&NTI142);
TMP885[2].name = "s";
TMP892[1] = &TMP885[3];
TMP885[3].kind = 1;
TMP885[3].offset = offsetof(tident141017, Next);
TMP885[3].typ = (&NTI141015);
TMP885[3].name = "next";
TMP892[2] = &TMP885[4];
TMP885[4].kind = 1;
TMP885[4].offset = offsetof(tident141017, H);
TMP885[4].typ = (&NTI110011);
TMP885[4].name = "h";
TMP885[1].len = 3; TMP885[1].kind = 2; TMP885[1].sons = &TMP892[0];
NTI141017.node = &TMP885[1];
NTI141015.size = sizeof(tident141017*);
NTI141015.kind = 22;
NTI141015.base = (&NTI141017);
NTI141015.flags = 2;
NTI141015.marker = TMP893;
NTI141013.size = sizeof(tidobj141011*);
NTI141013.kind = 22;
NTI141013.base = (&NTI141011);
NTI141013.flags = 2;
NTI141013.marker = TMP2022;
}

