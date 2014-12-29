/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttrunk168039 ttrunk168039;
typedef struct tintset168043 tintset168043;
typedef struct ttrunkseq168041 ttrunkseq168041;
typedef struct tcell38848 tcell38848;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcellset38860 tcellset38860;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellseq38864 tcellseq38864;
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tintset168043 {
NI Counter;
NI Max;
ttrunk168039* Head;
ttrunkseq168041* Data;
};
typedef NI TY21418[16];
struct ttrunk168039 {
ttrunk168039* Next;
NI Key;
TY21418 Bits;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
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
struct ttrunkseq168041 {
  TGenericSeq Sup;
  ttrunk168039* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_168054)(NI length, NI counter);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_168205)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(ttrunk168039*, intsetget_168212)(tintset168043 t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_168233)(tintset168043 t, ttrunkseq168041** data, ttrunk168039* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44620)(tcell38848* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42257)(tcell38848* c);
static N_INLINE(void, rtladdcycleroot_43023)(tcell38848* c);
N_NOINLINE(void, incl_39649)(tcellset38860* s, tcell38848* cell);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, decref_44202)(tcell38848* c);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, intsetenlarge_168604)(tintset168043* t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1919)(void* p, NI op);
N_NIMCALL(void, TMP1920)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk168039*, intsetput_168661)(tintset168043* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_168817)(tintset168043 s, NI key);
N_NIMCALL(void, incl_168840)(tintset168043* s, NI key);
N_NIMCALL(void, excl_168851)(tintset168043* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_168874)(tintset168043* s, NI key);
N_NIMCALL(void, initintset_168899)(tintset168043* Result);
N_NIMCALL(void, assign_168914)(tintset168043* dest, tintset168043 src);
N_NIMCALL(NimStringDesc*, HEX24_169076)(tintset168043 s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_169096)(tintset168043 s);
STRING_LITERAL(TMP1906, "counter < length ", 17);
STRING_LITERAL(TMP1912, "not (data[h] == desc) ", 22);
STRING_LITERAL(TMP1913, "data[h] == nil ", 15);
STRING_LITERAL(TMP1922, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP1923, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP1924, "{", 1);
STRING_LITERAL(TMP1925, ", ", 2);
STRING_LITERAL(TMP1926, "}", 1);
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
TNimType NTI168039; /* TTrunk */
extern TNimType NTI105; /* int */
extern TNimType NTI21418; /* array[0..15, int] */
TNimType NTI168037; /* PTrunk */
TNimType NTI168041; /* TTrunkSeq */
TNimType NTI168043; /* TIntSet */

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
static N_INLINE(NIM_BOOL, mustrehash_168054)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP1907;
	NI TMP1908;
	NI TMP1909;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(47, "intsets.nim");
	{
		nimln(47, "intsets.nim");
		nimln(47, "intsets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "intsets.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP1906));	}	LA3: ;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	LOC5 = 0;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1907 = mulInt(length, 2);
	nimln(48, "intsets.nim");
	TMP1908 = mulInt(counter, 3);
	LOC5 = ((NI32)(TMP1907) < (NI32)(TMP1908));
	if (LOC5) goto LA6;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1909 = subInt(length, counter);
	LOC5 = ((NI32)(TMP1909) < 4);
	LA6: ;
	result = LOC5;
	popFrame();
	return result;
}
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
static N_INLINE(NI, nexttry_168205)(NI h, NI maxhash) {
	NI result;
	NI TMP1910;
	NI TMP1911;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	TMP1910 = mulInt(5, h);
	TMP1911 = addInt((NI32)(TMP1910), 1);
	result = (NI)((NI32)(TMP1911) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(ttrunk168039*, intsetget_168212)(tintset168043 t, NI key) {
	ttrunk168039* result;
	NI h;
	nimfr("IntSetGet", "intsets.nim")
	result = 0;
	nimln(54, "intsets.nim");
	nimln(54, "intsets.nim");
	h = (NI)(key & t.Max);
	nimln(55, "intsets.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h] == NIM_NIL))) goto LA1;
		nimln(56, "intsets.nim");
		{
			nimln(56, "intsets.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			if (!((*t.Data->data[h]).Key == key)) goto LA4;
			nimln(57, "intsets.nim");
			nimln(57, "intsets.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			result = t.Data->data[h];
			goto BeforeRet;
		}		LA4: ;
		nimln(58, "intsets.nim");
		h = nexttry_168205(h, t.Max);
	} LA1: ;
	nimln(59, "intsets.nim");
	result = NIM_NIL;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, canbecycleroot_42257)(tcell38848* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(119, "gc.nim");
	nimln(731, "system.nim");
	nimln(731, "system.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdcycleroot_43023)(tcell38848* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(187, "gc.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(132, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(137, "gc.nim");
		nimln(137, "gc.nim");
		nimln(137, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(189, "gc.nim");
		incl_39649(&gch_40844.Cycleroots, c);	}	LA3: ;
	popFrame();
}
static N_INLINE(void, incref_44620)(tcell38848* c) {
	nimfr("incRef", "gc.nim")
	nimln(214, "gc.nim");
	nimln(214, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(217, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(217, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_42257(c);
		if (!LOC3) goto LA4;
		nimln(218, "gc.nim");
		rtladdcycleroot_43023(c);	}	LA4: ;
	popFrame();
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
static N_INLINE(void, decref_44202)(tcell38848* c) {
	nimfr("decRef", "gc.nim")
	nimln(204, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(205, "gc.nim");
		rtladdzct_43802(c);	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(206, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_42257(c);
		if (!LOC6) goto LA7;
		nimln(209, "gc.nim");
		rtladdcycleroot_43023(c);	}	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(242, "gc.nim");
	{
		tcell38848* LOC5;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(242, "gc.nim");
		nimln(242, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_42239(src);
		incref_44620(LOC5);	}	LA3: ;
	nimln(243, "gc.nim");
	{
		tcell38848* LOC10;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(243, "gc.nim");
		nimln(243, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_42239((*dest));
		decref_44202(LOC10);	}	LA8: ;
	nimln(244, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, intsetrawinsert_168233)(tintset168043 t, ttrunkseq168041** data, ttrunk168039* desc) {
	NI h;
	nimfr("IntSetRawInsert", "intsets.nim")
	nimln(62, "intsets.nim");
	nimln(62, "intsets.nim");
	h = (NI)((*desc).Key & t.Max);
	nimln(63, "intsets.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA1;
		nimln(64, "intsets.nim");
		{
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(!(((*data)->data[h] == desc)))) goto LA4;
			nimln(64, "intsets.nim");
			hiddenraiseassert_76017(((NimStringDesc*) &TMP1912));		}		LA4: ;
		nimln(65, "intsets.nim");
		h = nexttry_168205(h, t.Max);
	} LA1: ;
	nimln(66, "intsets.nim");
	{
		nimln(66, "intsets.nim");
		nimln(66, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA8;
		nimln(66, "intsets.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP1913));	}	LA8: ;
	nimln(67, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*data)->data[h], desc);
	popFrame();
}N_NIMCALL(void, TMP1919)(void* p, NI op) {
	ttrunk168039* a;
	NI LOC1;
	a = (ttrunk168039*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP1920)(void* p, NI op) {
	ttrunkseq168041* a;
	NI LOC1;
	a = (ttrunkseq168041*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_168604)(tintset168043* t) {
	ttrunkseq168041* n;
	NI oldmax;
	NI TMP1914;
	NI TMP1915;
	NI TMP1916;
	NI TMP1917;
	NI i_168629;
	NI res_168656;
	ttrunkseq168041* LOC6;
	nimfr("IntSetEnlarge", "intsets.nim")
	n = 0;
	nimln(71, "intsets.nim");
	oldmax = (*t).Max;
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	TMP1914 = addInt((*t).Max, 1);
	TMP1915 = mulInt((NI32)(TMP1914), 2);
	TMP1916 = subInt((NI32)(TMP1915), 1);
	(*t).Max = (NI32)(TMP1916);
	nimln(73, "intsets.nim");
	nimln(73, "intsets.nim");
	TMP1917 = addInt((*t).Max, 1);
	n = (ttrunkseq168041*) newSeq((&NTI168041), (NI32)(TMP1917));
	i_168629 = 0;
	nimln(1301, "system.nim");
	res_168656 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_168656 <= oldmax)) goto LA1;
		nimln(1301, "system.nim");
		i_168629 = res_168656;
		nimln(75, "intsets.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if ((NU)(i_168629) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(((*t).Data->data[i_168629] == NIM_NIL))) goto LA4;
			nimln(75, "intsets.nim");
			if ((NU)(i_168629) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			intsetrawinsert_168233((*t), &n, (*t).Data->data[i_168629]);		}		LA4: ;
		nimln(1304, "system.nim");
		res_168656 = addInt(res_168656, 1);
	} LA1: ;
	nimln(76, "intsets.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(ttrunk168039*, intsetput_168661)(tintset168043* t, NI key) {
	ttrunk168039* result;
	NI h;
	nimfr("IntSetPut", "intsets.nim")
	result = 0;
	nimln(79, "intsets.nim");
	nimln(79, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(80, "intsets.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(81, "intsets.nim");
		{
			nimln(81, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(82, "intsets.nim");
			nimln(82, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}		LA4: ;
		nimln(83, "intsets.nim");
		h = nexttry_168205(h, (*t).Max);
	} LA1: ;
	nimln(84, "intsets.nim");
	{
		NI TMP1921;
		NIM_BOOL LOC8;
		nimln(84, "intsets.nim");
		nimln(84, "intsets.nim");
		TMP1921 = addInt((*t).Max, 1);
		LOC8 = 0;
		LOC8 = mustrehash_168054((NI32)(TMP1921), (*t).Counter);
		if (!LOC8) goto LA9;
		nimln(84, "intsets.nim");
		intsetenlarge_168604(t);	}	LA9: ;
	nimln(85, "intsets.nim");
	(*t).Counter = addInt((*t).Counter, 1);
	nimln(86, "intsets.nim");
	nimln(86, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(87, "intsets.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA11;
		nimln(87, "intsets.nim");
		h = nexttry_168205(h, (*t).Max);
	} LA11: ;
	nimln(88, "intsets.nim");
	{
		nimln(88, "intsets.nim");
		nimln(88, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA14;
		nimln(88, "intsets.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP1922));	}	LA14: ;
	nimln(89, "intsets.nim");
	result = (ttrunk168039*) newObj((&NTI168037), sizeof(ttrunk168039));
	nimln(90, "intsets.nim");
	asgnRef((void**) &(*result).Next, (*t).Head);
	nimln(91, "intsets.nim");
	(*result).Key = key;
	nimln(92, "intsets.nim");
	unsureAsgnRef((void**) &(*t).Head, result);
	nimln(93, "intsets.nim");
	if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*t).Data->data[h], result);
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, contains_168817)(tintset168043 s, NI key) {
	NIM_BOOL result;
	ttrunk168039* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(97, "intsets.nim");
	nimln(97, "intsets.nim");
	t = intsetget_168212(s, (NI)((NU32)(key) >> (NU32)(9)));
	nimln(98, "intsets.nim");
	{
		NI u;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(99, "intsets.nim");
		nimln(99, "intsets.nim");
		u = (NI)(key & 511);
		nimln(100, "intsets.nim");
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] & (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31)))))) == 0));
	}	goto LA1;
	LA3: ;
	{
		nimln(102, "intsets.nim");
		result = NIM_FALSE;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, incl_168840)(tintset168043* s, NI key) {
	ttrunk168039* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(106, "intsets.nim");
	nimln(106, "intsets.nim");
	t = intsetput_168661(s, (NI)((NU32)(key) >> (NU32)(9)));
	nimln(107, "intsets.nim");
	nimln(107, "intsets.nim");
	u = (NI)(key & 511);
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
	nimln(109, "intsets.nim");
	nimln(109, "intsets.nim");
	(*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] = (NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] | (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31))))));
	popFrame();
}
N_NIMCALL(void, excl_168851)(tintset168043* s, NI key) {
	ttrunk168039* t;
	nimfr("excl", "intsets.nim")
	nimln(113, "intsets.nim");
	nimln(113, "intsets.nim");
	t = intsetget_168212((*s), (NI)((NU32)(key) >> (NU32)(9)));
	nimln(114, "intsets.nim");
	{
		NI u;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(115, "intsets.nim");
		nimln(115, "intsets.nim");
		u = (NI)(key & 511);
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		(*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] = (NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] & (NI)((NU32) ~((NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31))))))));
	}	LA3: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, containsorincl_168874)(tintset168043* s, NI key) {
	NIM_BOOL result;
	ttrunk168039* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(122, "intsets.nim");
	nimln(122, "intsets.nim");
	t = intsetget_168212((*s), (NI)((NU32)(key) >> (NU32)(9)));
	nimln(123, "intsets.nim");
	{
		NI u;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(124, "intsets.nim");
		nimln(124, "intsets.nim");
		u = (NI)(key & 511);
		nimln(125, "intsets.nim");
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] & (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31)))))) == 0));
		nimln(126, "intsets.nim");
		{
			nimln(126, "intsets.nim");
			if (!!(result)) goto LA7;
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU32)(((NI) (u))) >> (NU32)(5))) > (NU)(15)) raiseIndexError();
			nimln(128, "intsets.nim");
			nimln(128, "intsets.nim");
			(*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] = (NI)((*t).Bits[((NI)((NU32)(((NI) (u))) >> (NU32)(5)))- 0] | (NI)((NU32)(1) << (NU32)(((NI) ((NI)(((NI) (u)) & 31))))));
		}		LA7: ;
	}	goto LA1;
	LA3: ;
	{
		nimln(130, "intsets.nim");
		incl_168840(s, key);		nimln(131, "intsets.nim");
		result = NIM_FALSE;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, initintset_168899)(tintset168043* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(135, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq168041*) newSeq((&NTI168041), 8));
	nimln(136, "intsets.nim");
	(*Result).Max = 7;
	nimln(137, "intsets.nim");
	(*Result).Counter = 0;
	nimln(138, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
	popFrame();
}
N_NIMCALL(void, assign_168914)(tintset168043* dest, tintset168043 src) {
	ttrunk168039* it;
	nimfr("assign", "intsets.nim")
	nimln(143, "intsets.nim");
	(*dest).Counter = src.Counter;
	nimln(144, "intsets.nim");
	(*dest).Max = src.Max;
	nimln(145, "intsets.nim");
	nimln(145, "intsets.nim");
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq168041*) newSeq((&NTI168041), src.Data->Sup.len));
	nimln(147, "intsets.nim");
	it = src.Head;
	nimln(148, "intsets.nim");
	while (1) {
		NI h;
		ttrunk168039* n;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(150, "intsets.nim");
		nimln(150, "intsets.nim");
		h = (NI)((*it).Key & (*dest).Max);
		nimln(151, "intsets.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = nexttry_168205(h, (*dest).Max);
		} LA2: ;
		nimln(152, "intsets.nim");
		{
			nimln(152, "intsets.nim");
			nimln(152, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA5;
			nimln(152, "intsets.nim");
			hiddenraiseassert_76017(((NimStringDesc*) &TMP1923));		}		LA5: ;
		n = 0;
		nimln(155, "intsets.nim");
		n = (ttrunk168039*) newObj((&NTI168037), sizeof(ttrunk168039));
		nimln(156, "intsets.nim");
		asgnRef((void**) &(*n).Next, (*dest).Head);
		nimln(157, "intsets.nim");
		(*n).Key = (*it).Key;
		nimln(158, "intsets.nim");
		memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
		nimln(159, "intsets.nim");
		unsureAsgnRef((void**) &(*dest).Head, n);
		nimln(160, "intsets.nim");
		if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
		asgnRef((void**) &(*dest).Data->data[h], n);
		nimln(162, "intsets.nim");
		it = (*it).Next;
	} LA1: ;
	popFrame();
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(NimStringDesc*, HEX24_169076)(tintset168043 s) {
	NimStringDesc* result;
	NI key_169081;
	ttrunk168039* r_169084;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(183, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP1924));
	key_169081 = 0;
	nimln(166, "intsets.nim");
	r_169084 = s.Head;
	nimln(167, "intsets.nim");
	while (1) {
		NI i_169086;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((r_169084 == NIM_NIL))) goto LA1;
		nimln(168, "intsets.nim");
		i_169086 = 0;
		nimln(169, "intsets.nim");
		while (1) {
			NI w_169088;
			NI j_169090;
			nimln(169, "intsets.nim");
			if (!(i_169086 <= 15)) goto LA2;
			nimln(170, "intsets.nim");
			if ((NU)(i_169086) > (NU)(15)) raiseIndexError();
			w_169088 = (*r_169084).Bits[(i_169086)- 0];
			nimln(173, "intsets.nim");
			j_169090 = 0;
			nimln(174, "intsets.nim");
			while (1) {
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (!!((w_169088 == 0))) goto LA3;
				nimln(175, "intsets.nim");
				{
					NimStringDesc* LOC12;
					nimln(698, "system.nim");
					nimln(698, "system.nim");
					nimln(175, "intsets.nim");
					if (!!((((NI) ((NI)(w_169088 & 1))) == 0))) goto LA6;
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					key_169081 = (NI)((NI)((NU32)((*r_169084).Key) << (NU32)(9)) | (NI)((NU32)((NI)((NU32)(i_169086) << (NU32)(5))) + (NU32)(j_169090)));
					nimln(185, "intsets.nim");
					{
						nimln(706, "system.nim");
						nimln(185, "intsets.nim");
						if (!(1 < result->Sup.len)) goto LA10;
						nimln(185, "intsets.nim");
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1925));
					}					LA10: ;
					nimln(186, "intsets.nim");
					nimln(186, "intsets.nim");
					LOC12 = 0;
					LOC12 = nimIntToStr(key_169081);
					result = resizeString(result, LOC12->Sup.len + 0);
appendString(result, LOC12);
				}				LA6: ;
				nimln(177, "intsets.nim");
				j_169090 = addInt(j_169090, 1);
				nimln(178, "intsets.nim");
				nimln(178, "intsets.nim");
				w_169088 = (NI)((NU32)(w_169088) >> (NU32)(1));
			} LA3: ;
			nimln(179, "intsets.nim");
			i_169086 = addInt(i_169086, 1);
		} LA2: ;
		nimln(180, "intsets.nim");
		r_169084 = (*r_169084).Next;
	} LA1: ;
	nimln(187, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1926));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, empty_169096)(tintset168043 s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(196, "intsets.nim");
	nimln(196, "intsets.nim");
	result = (s.Counter == 0);
	popFrame();
	return result;
}N_NOINLINE(void, collectionsintsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

N_NOINLINE(void, collectionsintsetsDatInit)(void) {
static TNimNode* TMP1918[3];
static TNimNode* TMP3344[4];
static TNimNode TMP1904[9];
NTI168039.size = sizeof(ttrunk168039);
NTI168039.kind = 18;
NTI168039.base = 0;
TMP1918[0] = &TMP1904[1];
TMP1904[1].kind = 1;
TMP1904[1].offset = offsetof(ttrunk168039, Next);
TMP1904[1].typ = (&NTI168037);
TMP1904[1].name = "next";
TMP1918[1] = &TMP1904[2];
TMP1904[2].kind = 1;
TMP1904[2].offset = offsetof(ttrunk168039, Key);
TMP1904[2].typ = (&NTI105);
TMP1904[2].name = "key";
TMP1918[2] = &TMP1904[3];
TMP1904[3].kind = 1;
TMP1904[3].offset = offsetof(ttrunk168039, Bits);
TMP1904[3].typ = (&NTI21418);
TMP1904[3].name = "bits";
TMP1904[0].len = 3; TMP1904[0].kind = 2; TMP1904[0].sons = &TMP1918[0];
NTI168039.node = &TMP1904[0];
NTI168037.size = sizeof(ttrunk168039*);
NTI168037.kind = 22;
NTI168037.base = (&NTI168039);
NTI168037.marker = TMP1919;
NTI168041.size = sizeof(ttrunkseq168041*);
NTI168041.kind = 24;
NTI168041.base = (&NTI168037);
NTI168041.flags = 2;
NTI168041.marker = TMP1920;
NTI168043.size = sizeof(tintset168043);
NTI168043.kind = 18;
NTI168043.base = 0;
NTI168043.flags = 2;
TMP3344[0] = &TMP1904[5];
TMP1904[5].kind = 1;
TMP1904[5].offset = offsetof(tintset168043, Counter);
TMP1904[5].typ = (&NTI105);
TMP1904[5].name = "counter";
TMP3344[1] = &TMP1904[6];
TMP1904[6].kind = 1;
TMP1904[6].offset = offsetof(tintset168043, Max);
TMP1904[6].typ = (&NTI105);
TMP1904[6].name = "max";
TMP3344[2] = &TMP1904[7];
TMP1904[7].kind = 1;
TMP1904[7].offset = offsetof(tintset168043, Head);
TMP1904[7].typ = (&NTI168037);
TMP1904[7].name = "head";
TMP3344[3] = &TMP1904[8];
TMP1904[8].kind = 1;
TMP1904[8].offset = offsetof(tintset168043, Data);
TMP1904[8].typ = (&NTI168041);
TMP1904[8].name = "data";
TMP1904[4].len = 4; TMP1904[4].kind = 2; TMP1904[4].sons = &TMP3344[0];
NTI168043.node = &TMP1904[4];
}

