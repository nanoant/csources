/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
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
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP42)(void* p, NI op);
N_NIMCALL(void, TMP46)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_131420)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_131171)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_128977)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_128885)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_131182)(stringtableobj131012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4528)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_131409)(NI h, NI maxhash);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_131194)(NI length, NI counter);
N_NIMCALL(void, enlarge_131520)(stringtableobj131012* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_131498)(stringtableobj131012* t, keyvaluepairseq131010** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP1348, "", 0);
extern TNimType NTI3211; /* RootObj */
TNimType NTI131012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI131008; /* KeyValuePair */
extern TNimType NTI149; /* string */
TNimType NTI131010; /* KeyValuePairSeq */
TNimType NTI131006; /* StringTableMode */
TNimType NTI131014; /* StringTableRef */
extern tgcheap46816 gch_46844;
N_NIMCALL(void, TMP42)(void* p, NI op) {
	keyvaluepairseq131010* a;
	NI LOC1;
	a = (keyvaluepairseq131010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP46)(void* p, NI op) {
	stringtableobj131012* a;
	a = (stringtableobj131012*)p;
	nimGCvisit((void*)(*a).Data, op);
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

N_NIMCALL(stringtableobj131012*, nstnewStringTable)(NU8 mode) {
	stringtableobj131012* result;
	result = 0;
	result = (stringtableobj131012*) newObj((&NTI131014), sizeof(stringtableobj131012));
	(*result).Sup.m_type = (&NTI131012);
	(*result).Mode = mode;
	(*result).Counter = 0;
	if ((*result).Data) nimGCunrefNoCycle((*result).Data);
	(*result).Data = (keyvaluepairseq131010*) newSeqRC1((&NTI131010), 64);
	return result;
}

N_NIMCALL(NI, myhash_131171)(stringtableobj131012* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).Mode) {
	case ((NU8) 0):
	{
		result = hash_128839(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_128977(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_128885(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_131182)(stringtableobj131012* t, NimStringDesc* a, NimStringDesc* b) {
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

static N_INLINE(NI, nexttry_131409)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_131420)(stringtableobj131012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = myhash_131171(t, key);
	h = (NI)(LOC1 & ((*t).Data->Sup.len-1));
	{
		while (1) {
			if (!!((*t).Data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_131182(t, (*t).Data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_131409(h, ((*t).Data->Sup.len-1));
		} LA3: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj131012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_131420(t, key);
	result = (0 <= LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj131012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_131420(t, key);
	{
		if (!(0 <= index)) goto LA3;
		result = copyString((*t).Data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1348));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_131194)(NI length, NI counter) {
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

N_NIMCALL(void, rawinsert_131498)(stringtableobj131012* t, keyvaluepairseq131010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_131171(t, key);
	h = (NI)(LOC1 & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_131409(h, ((*data)->Sup.len-1));
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

N_NIMCALL(void, enlarge_131520)(stringtableobj131012* t) {
	keyvaluepairseq131010* n;
	keyvaluepairseq131010* LOC8;
	n = 0;
	n = (keyvaluepairseq131010*) newSeq((&NTI131010), (NI32)((*t).Data->Sup.len * 2));
	{
		NI i_131563;
		NI HEX3Atmp_131582;
		NI res_131585;
		i_131563 = 0;
		HEX3Atmp_131582 = 0;
		HEX3Atmp_131582 = ((*t).Data->Sup.len-1);
		res_131585 = 0;
		{
			while (1) {
				if (!(res_131585 <= HEX3Atmp_131582)) goto LA3;
				i_131563 = res_131585;
				{
					if (!!((*t).Data->data[i_131563].Field0 == 0)) goto LA6;
					rawinsert_131498(t, &n, (*t).Data->data[i_131563].Field0, (*t).Data->data[i_131563].Field1);
				}
				LA6: ;
				res_131585 += 1;
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	asgnRefNoCycle((void**) &(*t).Data, n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(stringtableobj131012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_131420(t, key);
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
			LOC9 = mustrehash_131194((*t).Data->Sup.len, (*t).Counter);
			if (!LOC9) goto LA10;
			enlarge_131520(t);
		}
		LA10: ;
		rawinsert_131498(t, &(*t).Data, key, val);
		(*t).Counter += 1;
	}
	LA1: ;
}

N_NIMCALL(NI, nstlen)(stringtableobj131012* t) {
	NI result;
	result = 0;
	result = (*t).Counter;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP40[3];
static TNimNode* TMP41[2];
static TNimNode* TMP43[3];
NI TMP45;
static char* NIM_CONST TMP44[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP25[11];
NTI131012.size = sizeof(stringtableobj131012);
NTI131012.kind = 17;
NTI131012.base = (&NTI3211);
TMP40[0] = &TMP25[1];
TMP25[1].kind = 1;
TMP25[1].offset = offsetof(stringtableobj131012, Counter);
TMP25[1].typ = (&NTI108);
TMP25[1].name = "counter";
TMP40[1] = &TMP25[2];
NTI131008.size = sizeof(keyvaluepair131008);
NTI131008.kind = 18;
NTI131008.base = 0;
NTI131008.flags = 2;
TMP41[0] = &TMP25[4];
TMP25[4].kind = 1;
TMP25[4].offset = offsetof(keyvaluepair131008, Field0);
TMP25[4].typ = (&NTI149);
TMP25[4].name = "Field0";
TMP41[1] = &TMP25[5];
TMP25[5].kind = 1;
TMP25[5].offset = offsetof(keyvaluepair131008, Field1);
TMP25[5].typ = (&NTI149);
TMP25[5].name = "Field1";
TMP25[3].len = 2; TMP25[3].kind = 2; TMP25[3].sons = &TMP41[0];
NTI131008.node = &TMP25[3];
NTI131010.size = sizeof(keyvaluepairseq131010*);
NTI131010.kind = 24;
NTI131010.base = (&NTI131008);
NTI131010.flags = 2;
NTI131010.marker = TMP42;
TMP25[2].kind = 1;
TMP25[2].offset = offsetof(stringtableobj131012, Data);
TMP25[2].typ = (&NTI131010);
TMP25[2].name = "data";
TMP40[2] = &TMP25[6];
NTI131006.size = sizeof(NU8);
NTI131006.kind = 14;
NTI131006.base = 0;
NTI131006.flags = 3;
for (TMP45 = 0; TMP45 < 3; TMP45++) {
TMP25[TMP45+7].kind = 1;
TMP25[TMP45+7].offset = TMP45;
TMP25[TMP45+7].name = TMP44[TMP45];
TMP43[TMP45] = &TMP25[TMP45+7];
}
TMP25[10].len = 3; TMP25[10].kind = 2; TMP25[10].sons = &TMP43[0];
NTI131006.node = &TMP25[10];
TMP25[6].kind = 1;
TMP25[6].offset = offsetof(stringtableobj131012, Mode);
TMP25[6].typ = (&NTI131006);
TMP25[6].name = "mode";
TMP25[0].len = 3; TMP25[0].kind = 2; TMP25[0].sons = &TMP40[0];
NTI131012.node = &TMP25[0];
NTI131014.size = sizeof(stringtableobj131012*);
NTI131014.kind = 22;
NTI131014.base = (&NTI131012);
NTI131014.marker = TMP46;
}

