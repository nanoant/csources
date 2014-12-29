/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct stringtableobj132012 stringtableobj132012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq132010 keyvaluepairseq132010;
typedef struct keyvaluepair132008 keyvaluepair132008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct keyvaluepair132008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj132012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq132010* Data;
NU8 Mode;
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
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct keyvaluepairseq132010 {
  TGenericSeq Sup;
  keyvaluepair132008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP44)(void* p, NI op);
N_NIMCALL(void, TMP48)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_132420)(stringtableobj132012* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_132171)(stringtableobj132012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_129839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_129977)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_129885)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_132182)(stringtableobj132012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4528)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_132409)(NI h, NI maxhash);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_132194)(NI length, NI counter);
N_NIMCALL(void, enlarge_132520)(stringtableobj132012* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_132498)(stringtableobj132012* t, keyvaluepairseq132010** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP1356, "", 0);
extern TNimType NTI3211; /* RootObj */
TNimType NTI132012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI132008; /* KeyValuePair */
extern TNimType NTI149; /* string */
TNimType NTI132010; /* KeyValuePairSeq */
TNimType NTI132006; /* StringTableMode */
TNimType NTI132014; /* StringTableRef */
extern tgcheap46616 gch_46644;
N_NIMCALL(void, TMP44)(void* p, NI op) {
	keyvaluepairseq132010* a;
	NI LOC1;
	a = (keyvaluepairseq132010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP48)(void* p, NI op) {
	stringtableobj132012* a;
	a = (stringtableobj132012*)p;
	nimGCvisit((void*)(*a).Data, op);
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

N_NIMCALL(stringtableobj132012*, nstnewStringTable)(NU8 mode) {
	stringtableobj132012* result;
	result = 0;
	result = (stringtableobj132012*) newObj((&NTI132014), sizeof(stringtableobj132012));
	(*result).Sup.m_type = (&NTI132012);
	(*result).Mode = mode;
	(*result).Counter = 0;
	if ((*result).Data) nimGCunrefNoCycle((*result).Data);
	(*result).Data = (keyvaluepairseq132010*) newSeqRC1((&NTI132010), 64);
	return result;
}

N_NIMCALL(NI, myhash_132171)(stringtableobj132012* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).Mode) {
	case ((NU8) 0):
	{
		result = hash_129839(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_129977(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_129885(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_132182)(stringtableobj132012* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	switch ((*t).Mode) {
	case ((NU8) 0):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = cmp_4528(a, b);
		result = (LOC2 == 0);
	}
	break;
	case ((NU8) 1):
	{
		NI LOC4;
		LOC4 = 0;
		LOC4 = nsuCmpIgnoreCase(a, b);
		result = (LOC4 == 0);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC6;
		LOC6 = 0;
		LOC6 = nsuCmpIgnoreStyle(a, b);
		result = (LOC6 == 0);
	}
	break;
	}
	return result;
}

static N_INLINE(NI, nexttry_132409)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_132420)(stringtableobj132012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = myhash_132171(t, key);
	h = (NI)(LOC1 & ((*t).Data->Sup.len-1));
	{
		while (1) {
			if (!!((*t).Data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_132182(t, (*t).Data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_132409(h, ((*t).Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj132012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_132420(t, key);
	result = (0 <= LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj132012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_132420(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = copyString((*t).Data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1356));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_132194)(NI length, NI counter) {
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

N_NIMCALL(void, rawinsert_132498)(stringtableobj132012* t, keyvaluepairseq132010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_132171(t, key);
	h = (NI)(LOC1 & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_132409(h, ((*data)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (LOC5) nimGCunrefNoCycle(LOC5);
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

N_NIMCALL(void, enlarge_132520)(stringtableobj132012* t) {
	keyvaluepairseq132010* n;
	keyvaluepairseq132010* LOC8;
	n = 0;
	n = (keyvaluepairseq132010*) newSeq((&NTI132010), (NI32)((*t).Data->Sup.len * 2));
	{
		NI i_132563;
		NI HEX3Atmp_132582;
		NI res_132585;
		i_132563 = 0;
		HEX3Atmp_132582 = 0;
		HEX3Atmp_132582 = ((*t).Data->Sup.len-1);
		res_132585 = 0;
		{
			while (1) {
				if (!(res_132585 <= HEX3Atmp_132582)) goto LA3;
				i_132563 = res_132585;
				{
					if (!!((*t).Data->data[i_132563].Field0 == 0)) goto LA6;
					rawinsert_132498(t, &n, (*t).Data->data[i_132563].Field0, (*t).Data->data[i_132563].Field1);
				}
				LA6: ;
				res_132585 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	asgnRefNoCycle((void**) &(*t).Data, n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(stringtableobj132012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_132420(t, key);
	{
		NimStringDesc* LOC5;
		if (!(0 <= index)) goto LA3;
		LOC5 = 0;
		LOC5 = (*t).Data->data[index].Field1; (*t).Data->data[index].Field1 = copyStringRC1(val);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC9;
			LOC9 = 0;
			LOC9 = mustrehash_132194((*t).Data->Sup.len, (*t).Counter);
			if (!LOC9) goto LA10;
			enlarge_132520(t);
		}
		LA10: ;
		rawinsert_132498(t, &(*t).Data, key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP42[3];
static TNimNode* TMP43[2];
static TNimNode* TMP45[3];
NI TMP47;
static char* NIM_CONST TMP46[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP27[11];
NTI132012.size = sizeof(stringtableobj132012);
NTI132012.kind = 17;
NTI132012.base = (&NTI3211);
TMP42[0] = &TMP27[1];
TMP27[1].kind = 1;
TMP27[1].offset = offsetof(stringtableobj132012, Counter);
TMP27[1].typ = (&NTI108);
TMP27[1].name = "counter";
TMP42[1] = &TMP27[2];
NTI132008.size = sizeof(keyvaluepair132008);
NTI132008.kind = 18;
NTI132008.base = 0;
NTI132008.flags = 2;
TMP43[0] = &TMP27[4];
TMP27[4].kind = 1;
TMP27[4].offset = offsetof(keyvaluepair132008, Field0);
TMP27[4].typ = (&NTI149);
TMP27[4].name = "Field0";
TMP43[1] = &TMP27[5];
TMP27[5].kind = 1;
TMP27[5].offset = offsetof(keyvaluepair132008, Field1);
TMP27[5].typ = (&NTI149);
TMP27[5].name = "Field1";
TMP27[3].len = 2; TMP27[3].kind = 2; TMP27[3].sons = &TMP43[0];
NTI132008.node = &TMP27[3];
NTI132010.size = sizeof(keyvaluepairseq132010*);
NTI132010.kind = 24;
NTI132010.base = (&NTI132008);
NTI132010.flags = 2;
NTI132010.marker = TMP44;
TMP27[2].kind = 1;
TMP27[2].offset = offsetof(stringtableobj132012, Data);
TMP27[2].typ = (&NTI132010);
TMP27[2].name = "data";
TMP42[2] = &TMP27[6];
NTI132006.size = sizeof(NU8);
NTI132006.kind = 14;
NTI132006.base = 0;
NTI132006.flags = 3;
for (TMP47 = 0; TMP47 < 3; TMP47++) {
TMP27[TMP47+7].kind = 1;
TMP27[TMP47+7].offset = TMP47;
TMP27[TMP47+7].name = TMP46[TMP47];
TMP45[TMP47] = &TMP27[TMP47+7];
}
TMP27[10].len = 3; TMP27[10].kind = 2; TMP27[10].sons = &TMP45[0];
NTI132006.node = &TMP27[10];
TMP27[6].kind = 1;
TMP27[6].offset = offsetof(stringtableobj132012, Mode);
TMP27[6].typ = (&NTI132006);
TMP27[6].name = "mode";
TMP27[0].len = 3; TMP27[0].kind = 2; TMP27[0].sons = &TMP42[0];
NTI132012.node = &TMP27[0];
NTI132014.size = sizeof(stringtableobj132012*);
NTI132014.kind = 22;
NTI132014.base = (&NTI132012);
NTI132014.marker = TMP48;
}

