/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct table196576 table196576;
typedef struct keyvaluepairseq196579 keyvaluepairseq196579;
typedef struct keyvaluepair196582 keyvaluepair196582;
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
typedef struct table357050 table357050;
typedef struct keyvaluepairseq357053 keyvaluepairseq357053;
typedef struct keyvaluepair357056 keyvaluepair357056;
typedef struct table358277 table358277;
typedef struct keyvaluepairseq358280 keyvaluepairseq358280;
typedef struct keyvaluepair358283 keyvaluepair358283;
typedef struct tindexentry358264 tindexentry358264;
typedef struct TY360804 TY360804;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct keyvaluepair196582 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct  table196576  {
keyvaluepairseq196579* Data;
NI Counter;
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
struct keyvaluepair357056 {
NU8 Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table357050  {
keyvaluepairseq357053* Data;
NI Counter;
};
struct  tindexentry358264  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
struct keyvaluepair358283 {
NU8 Field0;
tindexentry358264 Field1;
TY360804* Field2;
};
struct  table358277  {
keyvaluepairseq358280* Data;
NI Counter;
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
struct keyvaluepairseq196579 {
  TGenericSeq Sup;
  keyvaluepair196582 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq357053 {
  TGenericSeq Sup;
  keyvaluepair357056 data[SEQ_DECL_SIZE];
};
struct TY360804 {
  TGenericSeq Sup;
  tindexentry358264 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq358280 {
  TGenericSeq Sup;
  keyvaluepair358283 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP136)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_196770)(table196576 t_196777, NimStringDesc* key_196780);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_172409)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_172302)(NI length, NI counter);
N_NIMCALL(void, enlarge_196924)(table196576* t_196933);
N_NIMCALL(void, rawinsert_196994)(table196576* t_197003, keyvaluepairseq196579** data_197011, NimStringDesc* key_197015, NI32 val_197017);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(NI, rawget_357894)(table357050 t_357901, NimStringDesc* key_357904);
N_NIMCALL(void, enlarge_358019)(table357050* t_358028);
N_NIMCALL(void, TMP2430)(void* p, NI op);
N_NIMCALL(void, rawinsert_358089)(table357050* t_358098, keyvaluepairseq357053** data_358106, NimStringDesc* key_358110, NI val_358112);
N_NIMCALL(void, TMP4759)(void* p, NI op);
N_NIMCALL(NI, rawget_360312)(table358277 t_360319, tindexentry358264 key_360322);
N_NIMCALL(NI, hash_358309)(tindexentry358264 x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_360335)(tindexentry358264 x_360339, tindexentry358264 y_360341);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_79604, TNimType* mt);
N_NIMCALL(void, enlarge_361346)(table358277* t_361355);
N_NIMCALL(void, rawinsert_361416)(table358277* t_361425, keyvaluepairseq358280** data_361433, tindexentry358264 key_361437, TY360804* val_361439);
TNimType NTI196582; /* KeyValuePair */
TNimType NTI172017; /* SlotEnum */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI196579; /* KeyValuePairSeq */
TNimType NTI196576; /* Table */
extern TNimType NTI108; /* int */
extern tgcheap46816 gch_46844;
TNimType NTI357056; /* KeyValuePair */
TNimType NTI357053; /* KeyValuePairSeq */
TNimType NTI357050; /* Table */
TNimType NTI358283; /* KeyValuePair */
extern TNimType NTI358264; /* TIndexEntry */
extern TNimType NTI360804; /* seq[TIndexEntry] */
TNimType NTI358280; /* KeyValuePairSeq */
N_NIMCALL(void, TMP136)(void* p, NI op) {
	keyvaluepairseq196579* a;
	NI LOC1;
	a = (keyvaluepairseq196579*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_196568)(NI initialsize_196573, table196576* Result) {
	(*Result).Counter = 0;
	unsureAsgnRef((void**) &(*Result).Data, (keyvaluepairseq196579*) newSeq((&NTI196579), initialsize_196573));
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

static N_INLINE(NI, nexttry_172409)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_196770)(table196576 t_196777, NimStringDesc* key_196780) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hash_128839(key_196780);
	h = (NI)(LOC1 & (t_196777.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t_196777.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = eqStrings(t_196777.Data->data[h].Field1, key_196780);
				if (!(LOC6)) goto LA7;
				LOC6 = (t_196777.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_172409(h, (t_196777.Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_196756)(table196576 t_196763, NimStringDesc* key_196766) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_196770(t_196763, key_196766);
	result = (0 <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_196817)(table196576 t_196824, NimStringDesc* key_196827) {
	NI32 result;
	NI index;
	result = 0;
	index = rawget_196770(t_196824, key_196827);
	{
		if (!(0 <= index)) goto LA3;
		result = t_196824.Data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_172302)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI32)(length * 2) < (NI32)(counter * 3));
	if (LOC1) goto LA2;
	LOC1 = ((NI32)(length - counter) < 4);
	LA2: ;
	result = LOC1;
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

N_NIMCALL(void, rawinsert_196994)(table196576* t_197003, keyvaluepairseq196579** data_197011, NimStringDesc* key_197015, NI32 val_197017) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = hash_128839(key_197015);
	h = (NI)(LOC1 & ((*data_197011)->Sup.len-1));
	{
		while (1) {
			if (!((*data_197011)->data[h].Field0 == ((NU8) 1))) goto LA3;
			h = nexttry_172409(h, ((*data_197011)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data_197011)->data[h].Field1; (*data_197011)->data[h].Field1 = copyStringRC1(key_197015);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	(*data_197011)->data[h].Field2 = val_197017;
	(*data_197011)->data[h].Field0 = ((NU8) 1);
}

N_NIMCALL(void, enlarge_196924)(table196576* t_196933) {
	keyvaluepairseq196579* n;
	keyvaluepairseq196579* LOC8;
	n = 0;
	n = (keyvaluepairseq196579*) newSeq((&NTI196579), (NI32)((*t_196933).Data->Sup.len * 2));
	{
		NI i_196979;
		NI HEX3Atmp_197058;
		NI res_197061;
		i_196979 = 0;
		HEX3Atmp_197058 = 0;
		HEX3Atmp_197058 = ((*t_196933).Data->Sup.len-1);
		res_197061 = 0;
		{
			while (1) {
				if (!(res_197061 <= HEX3Atmp_197058)) goto LA3;
				i_196979 = res_197061;
				{
					if (!((*t_196933).Data->data[i_196979].Field0 == ((NU8) 1))) goto LA6;
					rawinsert_196994(t_196933, &n, (*t_196933).Data->data[i_196979].Field1, (*t_196933).Data->data[i_196979].Field2);
				}
				LA6: ;
				res_197061 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t_196933).Data;
	unsureAsgnRef((void**) &(*t_196933).Data, n);
	n = LOC8;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_196879)(table196576* t_196888, NimStringDesc* key_196892, NI32 val_196894) {
	NI index;
	index = rawget_196770((*t_196888), key_196892);
	{
		if (!(0 <= index)) goto LA3;
		(*t_196888).Data->data[index].Field2 = val_196894;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_172302((*t_196888).Data->Sup.len, (*t_196888).Counter);
			if (!LOC8) goto LA9;
			enlarge_196924(t_196888);
		}
		LA9: ;
		rawinsert_196994(t_196888, &(*t_196888).Data, key_196892, val_196894);
		(*t_196888).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, rawget_357894)(table357050 t_357901, NimStringDesc* key_357904) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hash_128839(key_357904);
	h = (NI)(LOC1 & (t_357901.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t_357901.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = eqStrings(t_357901.Data->data[h].Field1, key_357904);
				if (!(LOC6)) goto LA7;
				LOC6 = (t_357901.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_172409(h, (t_357901.Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_357880)(table357050 t_357887, NimStringDesc* key_357890) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_357894(t_357887, key_357890);
	result = (0 <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2430)(void* p, NI op) {
	keyvaluepairseq357053* a;
	NI LOC1;
	a = (keyvaluepairseq357053*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, rawinsert_358089)(table357050* t_358098, keyvaluepairseq357053** data_358106, NimStringDesc* key_358110, NI val_358112) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = hash_128839(key_358110);
	h = (NI)(LOC1 & ((*data_358106)->Sup.len-1));
	{
		while (1) {
			if (!((*data_358106)->data[h].Field0 == ((NU8) 1))) goto LA3;
			h = nexttry_172409(h, ((*data_358106)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data_358106)->data[h].Field1; (*data_358106)->data[h].Field1 = copyStringRC1(key_358110);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	(*data_358106)->data[h].Field2 = val_358112;
	(*data_358106)->data[h].Field0 = ((NU8) 1);
}

N_NIMCALL(void, enlarge_358019)(table357050* t_358028) {
	keyvaluepairseq357053* n;
	keyvaluepairseq357053* LOC8;
	n = 0;
	n = (keyvaluepairseq357053*) newSeq((&NTI357053), (NI32)((*t_358028).Data->Sup.len * 2));
	{
		NI i_358074;
		NI HEX3Atmp_358153;
		NI res_358156;
		i_358074 = 0;
		HEX3Atmp_358153 = 0;
		HEX3Atmp_358153 = ((*t_358028).Data->Sup.len-1);
		res_358156 = 0;
		{
			while (1) {
				if (!(res_358156 <= HEX3Atmp_358153)) goto LA3;
				i_358074 = res_358156;
				{
					if (!((*t_358028).Data->data[i_358074].Field0 == ((NU8) 1))) goto LA6;
					rawinsert_358089(t_358028, &n, (*t_358028).Data->data[i_358074].Field1, (*t_358028).Data->data[i_358074].Field2);
				}
				LA6: ;
				res_358156 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t_358028).Data;
	unsureAsgnRef((void**) &(*t_358028).Data, n);
	n = LOC8;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_357974)(table357050* t_357983, NimStringDesc* key_357987, NI val_357989) {
	NI index;
	index = rawget_357894((*t_357983), key_357987);
	{
		if (!(0 <= index)) goto LA3;
		(*t_357983).Data->data[index].Field2 = val_357989;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_172302((*t_357983).Data->Sup.len, (*t_357983).Counter);
			if (!LOC8) goto LA9;
			enlarge_358019(t_357983);
		}
		LA9: ;
		rawinsert_358089(t_357983, &(*t_357983).Data, key_357987, val_357989);
		(*t_357983).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_357943)(table357050 t_357950, NimStringDesc* key_357953) {
	NI result;
	NI index;
	result = 0;
	index = rawget_357894(t_357950, key_357953);
	{
		if (!(0 <= index)) goto LA3;
		result = t_357950.Data->data[index].Field2;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, inittable_357104)(NI initialsize_357109, table357050* Result) {
	(*Result).Counter = 0;
	unsureAsgnRef((void**) &(*Result).Data, (keyvaluepairseq357053*) newSeq((&NTI357053), initialsize_357109));
}
N_NIMCALL(void, TMP4759)(void* p, NI op) {
	keyvaluepairseq358280* a;
	NI LOC1;
	a = (keyvaluepairseq358280*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_360830)(NI initialsize_360835, table358277* Result) {
	(*Result).Counter = 0;
	unsureAsgnRef((void**) &(*Result).Data, (keyvaluepairseq358280*) newSeq((&NTI358280), initialsize_360835));
}

N_NIMCALL(NI, len_361285)(table358277 t_361292) {
	NI result;
	result = 0;
	result = t_361292.Counter;
	return result;
}

N_NIMCALL(NI, rawget_360312)(table358277 t_360319, tindexentry358264 key_360322) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hash_358309(key_360322);
	h = (NI)(LOC1 & (t_360319.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t_360319.Data->data[h].Field0 == ((NU8) 0)))) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = HEX3DHEX3D_360335(t_360319.Data->data[h].Field1, key_360322);
				if (!(LOC6)) goto LA7;
				LOC6 = (t_360319.Data->data[h].Field0 == ((NU8) 1));
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_172409(h, (t_360319.Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_361416)(table358277* t_361425, keyvaluepairseq358280** data_361433, tindexentry358264 key_361437, TY360804* val_361439) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	LOC1 = 0;
	LOC1 = hash_358309(key_361437);
	h = (NI)(LOC1 & ((*data_361433)->Sup.len-1));
	{
		while (1) {
			if (!((*data_361433)->data[h].Field0 == ((NU8) 1))) goto LA3;
			h = nexttry_172409(h, ((*data_361433)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data_361433)->data[h].Field1.Keyword; (*data_361433)->data[h].Field1.Keyword = copyStringRC1(key_361437.Keyword);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data_361433)->data[h].Field1.Link; (*data_361433)->data[h].Field1.Link = copyStringRC1(key_361437.Link);
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = (*data_361433)->data[h].Field1.Linktitle; (*data_361433)->data[h].Field1.Linktitle = copyStringRC1(key_361437.Linktitle);
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = (*data_361433)->data[h].Field1.Linkdesc; (*data_361433)->data[h].Field1.Linkdesc = copyStringRC1(key_361437.Linkdesc);
	if (LOC7) nimGCunrefNoCycle(LOC7);
	genericSeqAssign(&(*data_361433)->data[h].Field2, val_361439, (&NTI360804));
	(*data_361433)->data[h].Field0 = ((NU8) 1);
}

N_NIMCALL(void, enlarge_361346)(table358277* t_361355) {
	keyvaluepairseq358280* n;
	keyvaluepairseq358280* LOC8;
	n = 0;
	n = (keyvaluepairseq358280*) newSeq((&NTI358280), (NI32)((*t_361355).Data->Sup.len * 2));
	{
		NI i_361401;
		NI HEX3Atmp_361480;
		NI res_361483;
		i_361401 = 0;
		HEX3Atmp_361480 = 0;
		HEX3Atmp_361480 = ((*t_361355).Data->Sup.len-1);
		res_361483 = 0;
		{
			while (1) {
				if (!(res_361483 <= HEX3Atmp_361480)) goto LA3;
				i_361401 = res_361483;
				{
					if (!((*t_361355).Data->data[i_361401].Field0 == ((NU8) 1))) goto LA6;
					rawinsert_361416(t_361355, &n, (*t_361355).Data->data[i_361401].Field1, (*t_361355).Data->data[i_361401].Field2);
				}
				LA6: ;
				res_361483 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t_361355).Data;
	unsureAsgnRef((void**) &(*t_361355).Data, n);
	n = LOC8;
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_361301)(table358277* t_361310, tindexentry358264 key_361314, TY360804* val_361316) {
	NI index;
	index = rawget_360312((*t_361310), key_361314);
	{
		if (!(0 <= index)) goto LA3;
		genericSeqAssign(&(*t_361310).Data->data[index].Field2, val_361316, (&NTI360804));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_172302((*t_361310).Data->Sup.len, (*t_361310).Counter);
			if (!LOC8) goto LA9;
			enlarge_361346(t_361310);
		}
		LA9: ;
		rawinsert_361416(t_361310, &(*t_361310).Data, key_361314, val_361316);
		(*t_361310).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(TY360804*, HEX5BHEX5D_360298)(table358277 t_360305, tindexentry358264 key_360308) {
	TY360804* result;
	NI index;
	result = 0;
	index = rawget_360312(t_360305, key_360308);
	{
		if (!(0 <= index)) goto LA3;
		genericSeqAssign(&result, t_360305.Data->data[index].Field2, (&NTI360804));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP132[3];
static TNimNode* TMP133[3];
NI TMP135;
static char* NIM_CONST TMP134[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP139[2];
static TNimNode* TMP2429[3];
static TNimNode* TMP4600[2];
static TNimNode* TMP4756[3];
static TNimNode TMP55[22];
NTI196582.size = sizeof(keyvaluepair196582);
NTI196582.kind = 18;
NTI196582.base = 0;
NTI196582.flags = 2;
TMP132[0] = &TMP55[1];
NTI172017.size = sizeof(NU8);
NTI172017.kind = 14;
NTI172017.base = 0;
NTI172017.flags = 3;
for (TMP135 = 0; TMP135 < 3; TMP135++) {
TMP55[TMP135+2].kind = 1;
TMP55[TMP135+2].offset = TMP135;
TMP55[TMP135+2].name = TMP134[TMP135];
TMP133[TMP135] = &TMP55[TMP135+2];
}
TMP55[5].len = 3; TMP55[5].kind = 2; TMP55[5].sons = &TMP133[0];
NTI172017.node = &TMP55[5];
TMP55[1].kind = 1;
TMP55[1].offset = offsetof(keyvaluepair196582, Field0);
TMP55[1].typ = (&NTI172017);
TMP55[1].name = "Field0";
TMP132[1] = &TMP55[6];
TMP55[6].kind = 1;
TMP55[6].offset = offsetof(keyvaluepair196582, Field1);
TMP55[6].typ = (&NTI149);
TMP55[6].name = "Field1";
TMP132[2] = &TMP55[7];
TMP55[7].kind = 1;
TMP55[7].offset = offsetof(keyvaluepair196582, Field2);
TMP55[7].typ = (&NTI114);
TMP55[7].name = "Field2";
TMP55[0].len = 3; TMP55[0].kind = 2; TMP55[0].sons = &TMP132[0];
NTI196582.node = &TMP55[0];
NTI196579.size = sizeof(keyvaluepairseq196579*);
NTI196579.kind = 24;
NTI196579.base = (&NTI196582);
NTI196579.flags = 2;
NTI196579.marker = TMP136;
NTI196576.size = sizeof(table196576);
NTI196576.kind = 18;
NTI196576.base = 0;
NTI196576.flags = 2;
TMP139[0] = &TMP55[9];
TMP55[9].kind = 1;
TMP55[9].offset = offsetof(table196576, Data);
TMP55[9].typ = (&NTI196579);
TMP55[9].name = "data";
TMP139[1] = &TMP55[10];
TMP55[10].kind = 1;
TMP55[10].offset = offsetof(table196576, Counter);
TMP55[10].typ = (&NTI108);
TMP55[10].name = "counter";
TMP55[8].len = 2; TMP55[8].kind = 2; TMP55[8].sons = &TMP139[0];
NTI196576.node = &TMP55[8];
NTI357056.size = sizeof(keyvaluepair357056);
NTI357056.kind = 18;
NTI357056.base = 0;
NTI357056.flags = 2;
TMP2429[0] = &TMP55[12];
TMP55[12].kind = 1;
TMP55[12].offset = offsetof(keyvaluepair357056, Field0);
TMP55[12].typ = (&NTI172017);
TMP55[12].name = "Field0";
TMP2429[1] = &TMP55[13];
TMP55[13].kind = 1;
TMP55[13].offset = offsetof(keyvaluepair357056, Field1);
TMP55[13].typ = (&NTI149);
TMP55[13].name = "Field1";
TMP2429[2] = &TMP55[14];
TMP55[14].kind = 1;
TMP55[14].offset = offsetof(keyvaluepair357056, Field2);
TMP55[14].typ = (&NTI108);
TMP55[14].name = "Field2";
TMP55[11].len = 3; TMP55[11].kind = 2; TMP55[11].sons = &TMP2429[0];
NTI357056.node = &TMP55[11];
NTI357053.size = sizeof(keyvaluepairseq357053*);
NTI357053.kind = 24;
NTI357053.base = (&NTI357056);
NTI357053.flags = 2;
NTI357053.marker = TMP2430;
NTI357050.size = sizeof(table357050);
NTI357050.kind = 18;
NTI357050.base = 0;
NTI357050.flags = 2;
TMP4600[0] = &TMP55[16];
TMP55[16].kind = 1;
TMP55[16].offset = offsetof(table357050, Data);
TMP55[16].typ = (&NTI357053);
TMP55[16].name = "data";
TMP4600[1] = &TMP55[17];
TMP55[17].kind = 1;
TMP55[17].offset = offsetof(table357050, Counter);
TMP55[17].typ = (&NTI108);
TMP55[17].name = "counter";
TMP55[15].len = 2; TMP55[15].kind = 2; TMP55[15].sons = &TMP4600[0];
NTI357050.node = &TMP55[15];
NTI358283.size = sizeof(keyvaluepair358283);
NTI358283.kind = 18;
NTI358283.base = 0;
NTI358283.flags = 2;
TMP4756[0] = &TMP55[19];
TMP55[19].kind = 1;
TMP55[19].offset = offsetof(keyvaluepair358283, Field0);
TMP55[19].typ = (&NTI172017);
TMP55[19].name = "Field0";
TMP4756[1] = &TMP55[20];
TMP55[20].kind = 1;
TMP55[20].offset = offsetof(keyvaluepair358283, Field1);
TMP55[20].typ = (&NTI358264);
TMP55[20].name = "Field1";
TMP4756[2] = &TMP55[21];
TMP55[21].kind = 1;
TMP55[21].offset = offsetof(keyvaluepair358283, Field2);
TMP55[21].typ = (&NTI360804);
TMP55[21].name = "Field2";
TMP55[18].len = 3; TMP55[18].kind = 2; TMP55[18].sons = &TMP4756[0];
NTI358283.node = &TMP55[18];
NTI358280.size = sizeof(keyvaluepairseq358280*);
NTI358280.kind = 24;
NTI358280.base = (&NTI358283);
NTI358280.flags = 2;
NTI358280.marker = TMP4759;
}

