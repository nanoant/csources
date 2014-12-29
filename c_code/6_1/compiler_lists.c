/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tlinkedlist109020 tlinkedlist109020;
typedef struct tlistentry109014 tlistentry109014;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell38848 tcell38848;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tstrentry109016 tstrentry109016;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct tlinkedlist109020 {
tlistentry109014* Head;
tlistentry109014* Tail;
NI Counter;
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
struct TNimObject {
TNimType* m_type;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tstrentry109016 {
  tlistentry109014 Sup;
NimStringDesc* Data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tcompareproc109022) (tlistentry109014* entry, void* closure);
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
N_NIMCALL(void, initlinkedlist_109033)(tlinkedlist109020* list);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, append_109039)(tlinkedlist109020* list, tlistentry109014* entry);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44620)(tcell38848* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42257)(tcell38848* c);
static N_INLINE(void, rtladdcycleroot_43023)(tcell38848* c);
N_NOINLINE(void, incl_39649)(tcellset38860* s, tcell38848* cell);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, decref_44202)(tcell38848* c);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(NIM_BOOL, contains_109215)(tlinkedlist109020 list, NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP262)(void* p, NI op);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(tstrentry109016*, newstrentry_109236)(NimStringDesc* data);
N_NIMCALL(void, TMP263)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, appendstr_109254)(tlinkedlist109020* list, NimStringDesc* data);
N_NIMCALL(NIM_BOOL, includestr_109261)(tlinkedlist109020* list, NimStringDesc* data);
N_NIMCALL(void, prepend_109269)(tlinkedlist109020* list, tlistentry109014* entry);
N_NIMCALL(void, prependstr_109415)(tlinkedlist109020* list, NimStringDesc* data);
N_NIMCALL(void, insertbefore_109422)(tlinkedlist109020* list, tlistentry109014* pos, tlistentry109014* entry);
N_NIMCALL(void, remove_109636)(tlinkedlist109020* list, tlistentry109014* entry);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, bringtofront_109699)(tlinkedlist109020* list, tlistentry109014* entry);
N_NIMCALL(void, excludestr_109803)(tlinkedlist109020* list, NimStringDesc* data);
N_NIMCALL(tlistentry109014*, find_109825)(tlinkedlist109020 list, tcompareproc109022 fn, void* closure);
STRING_LITERAL(TMP260, "list.tail.next == nil ", 22);
STRING_LITERAL(TMP264, "list.head.prev == nil ", 22);
STRING_LITERAL(TMP265, "not (pos == nil) ", 17);
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern TNimType NTI1009; /* TObject */
TNimType NTI109014; /* TListEntry */
TNimType NTI109012; /* PListEntry */
TNimType NTI109016; /* TStrEntry */
extern TNimType NTI142; /* string */
TNimType NTI109018; /* PStrEntry */
TNimType NTI109020; /* TLinkedList */
extern TNimType NTI105; /* int */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, initlinkedlist_109033)(tlinkedlist109020* list) {
	nimfr("InitLinkedList", "lists.nim")
	nimln(28, "lists.nim");
	(*list).Counter = 0;
	nimln(29, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, NIM_NIL);
	nimln(30, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, NIM_NIL);
	popFrame();
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
N_NIMCALL(void, append_109039)(tlinkedlist109020* list, tlistentry109014* entry) {
	nimfr("Append", "lists.nim")
	nimln(33, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(34, "lists.nim");
	asgnRef((void**) &(*entry).Next, NIM_NIL);
	nimln(35, "lists.nim");
	asgnRef((void**) &(*entry).Prev, (*list).Tail);
	nimln(36, "lists.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*list).Tail == NIM_NIL))) goto LA3;
		nimln(37, "lists.nim");
		{
			nimln(37, "lists.nim");
			nimln(37, "lists.nim");
			if (!!(((*(*list).Tail).Next == NIM_NIL))) goto LA7;
			nimln(37, "lists.nim");
			hiddenraiseassert_76017(((NimStringDesc*) &TMP260));		}		LA7: ;
		nimln(38, "lists.nim");
		asgnRef((void**) &(*(*list).Tail).Next, entry);
	}	LA3: ;
	nimln(39, "lists.nim");
	unsureAsgnRef((void**) &(*list).Tail, entry);
	nimln(40, "lists.nim");
	{
		nimln(40, "lists.nim");
		if (!((*list).Head == NIM_NIL)) goto LA11;
		nimln(40, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, entry);
	}	LA11: ;
	popFrame();
}N_NIMCALL(void, TMP262)(void* p, NI op) {
	tlistentry109014* a;
	a = (tlistentry109014*)p;
	nimGCvisit((void*)(*a).Prev, op);
	nimGCvisit((void*)(*a).Next, op);
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
	}	LA3: ;
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
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, contains_109215)(tlinkedlist109020 list, NimStringDesc* data) {
	NIM_BOOL result;
	tlistentry109014* it;
	nimfr("Contains", "lists.nim")
	result = 0;
	nimln(43, "lists.nim");
	it = list.Head;
	nimln(44, "lists.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(45, "lists.nim");
		{
			nimln(45, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI109016));
			if (!eqStrings((*((tstrentry109016*) (it))).Data, data)) goto LA4;
			nimln(46, "lists.nim");
			nimln(46, "lists.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}		LA4: ;
		nimln(47, "lists.nim");
		it = (*it).Next;
	} LA1: ;
	BeforeRet: ;	popFrame();
	return result;
}N_NIMCALL(void, TMP263)(void* p, NI op) {
	tstrentry109016* a;
	a = (tstrentry109016*)p;
	nimGCvisit((void*)(*a).Sup.Prev, op);
	nimGCvisit((void*)(*a).Sup.Next, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38848* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42239(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(tstrentry109016*, newstrentry_109236)(NimStringDesc* data) {
	tstrentry109016* result;
	NimStringDesc* LOC1;
	nimfr("newStrEntry", "lists.nim")
	result = 0;
	nimln(50, "lists.nim");
	result = (tstrentry109016*) newObj((&NTI109018), sizeof(tstrentry109016));
	(*result).Sup.Sup.m_type = (&NTI109016);
	nimln(51, "lists.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}
N_NIMCALL(void, appendstr_109254)(tlinkedlist109020* list, NimStringDesc* data) {
	tstrentry109016* LOC1;
	nimfr("AppendStr", "lists.nim")
	nimln(54, "lists.nim");
	nimln(54, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_109236(data);
	append_109039(list, &LOC1->Sup);	popFrame();
}
N_NIMCALL(NIM_BOOL, includestr_109261)(tlinkedlist109020* list, NimStringDesc* data) {
	NIM_BOOL result;
	nimfr("IncludeStr", "lists.nim")
	result = 0;
	nimln(57, "lists.nim");
	{
		NIM_BOOL LOC3;
		nimln(57, "lists.nim");
		LOC3 = 0;
		LOC3 = contains_109215((*list), data);
		if (!LOC3) goto LA4;
		nimln(57, "lists.nim");
		nimln(57, "lists.nim");
		result = NIM_TRUE;
		goto BeforeRet;
	}	LA4: ;
	nimln(58, "lists.nim");
	appendstr_109254(list, data);	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, prepend_109269)(tlinkedlist109020* list, tlistentry109014* entry) {
	nimfr("Prepend", "lists.nim")
	nimln(61, "lists.nim");
	(*list).Counter = addInt((*list).Counter, 1);
	nimln(62, "lists.nim");
	asgnRef((void**) &(*entry).Prev, NIM_NIL);
	nimln(63, "lists.nim");
	asgnRef((void**) &(*entry).Next, (*list).Head);
	nimln(64, "lists.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*list).Head == NIM_NIL))) goto LA3;
		nimln(65, "lists.nim");
		{
			nimln(65, "lists.nim");
			nimln(65, "lists.nim");
			if (!!(((*(*list).Head).Prev == NIM_NIL))) goto LA7;
			nimln(65, "lists.nim");
			hiddenraiseassert_76017(((NimStringDesc*) &TMP264));		}		LA7: ;
		nimln(66, "lists.nim");
		asgnRef((void**) &(*(*list).Head).Prev, entry);
	}	LA3: ;
	nimln(67, "lists.nim");
	unsureAsgnRef((void**) &(*list).Head, entry);
	nimln(68, "lists.nim");
	{
		nimln(68, "lists.nim");
		if (!((*list).Tail == NIM_NIL)) goto LA11;
		nimln(68, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, entry);
	}	LA11: ;
	popFrame();
}
N_NIMCALL(void, prependstr_109415)(tlinkedlist109020* list, NimStringDesc* data) {
	tstrentry109016* LOC1;
	nimfr("PrependStr", "lists.nim")
	nimln(71, "lists.nim");
	nimln(71, "lists.nim");
	LOC1 = 0;
	LOC1 = newstrentry_109236(data);
	prepend_109269(list, &LOC1->Sup);	popFrame();
}
N_NIMCALL(void, insertbefore_109422)(tlinkedlist109020* list, tlistentry109014* pos, tlistentry109014* entry) {
	nimfr("InsertBefore", "lists.nim")
	nimln(74, "lists.nim");
	{
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		nimln(74, "lists.nim");
		if (!!(!((pos == NIM_NIL)))) goto LA3;
		nimln(74, "lists.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP265));	}	LA3: ;
	nimln(75, "lists.nim");
	{
		nimln(75, "lists.nim");
		if (!(pos == (*list).Head)) goto LA7;
		nimln(76, "lists.nim");
		prepend_109269(list, entry);	}	goto LA5;
	LA7: ;
	{
		nimln(78, "lists.nim");
		(*list).Counter = addInt((*list).Counter, 1);
		nimln(79, "lists.nim");
		asgnRef((void**) &(*entry).Next, pos);
		nimln(80, "lists.nim");
		asgnRef((void**) &(*entry).Prev, (*pos).Prev);
		nimln(81, "lists.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!(((*pos).Prev == NIM_NIL))) goto LA12;
			nimln(81, "lists.nim");
			asgnRef((void**) &(*(*pos).Prev).Next, entry);
		}		LA12: ;
		nimln(82, "lists.nim");
		asgnRef((void**) &(*pos).Prev, entry);
	}	LA5: ;
	popFrame();
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
N_NIMCALL(void, remove_109636)(tlinkedlist109020* list, tlistentry109014* entry) {
	nimfr("Remove", "lists.nim")
	nimln(85, "lists.nim");
	(*list).Counter = subInt((*list).Counter, 1);
	nimln(86, "lists.nim");
	{
		nimln(86, "lists.nim");
		if (!(entry == (*list).Tail)) goto LA3;
		nimln(87, "lists.nim");
		unsureAsgnRef((void**) &(*list).Tail, (*entry).Prev);
	}	LA3: ;
	nimln(88, "lists.nim");
	{
		nimln(88, "lists.nim");
		if (!(entry == (*list).Head)) goto LA7;
		nimln(89, "lists.nim");
		unsureAsgnRef((void**) &(*list).Head, (*entry).Next);
	}	LA7: ;
	nimln(90, "lists.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*entry).Next == NIM_NIL))) goto LA11;
		nimln(90, "lists.nim");
		asgnRef((void**) &(*(*entry).Next).Prev, (*entry).Prev);
	}	LA11: ;
	nimln(91, "lists.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*entry).Prev == NIM_NIL))) goto LA15;
		nimln(91, "lists.nim");
		asgnRef((void**) &(*(*entry).Prev).Next, (*entry).Next);
	}	LA15: ;
	popFrame();
}
N_NIMCALL(void, bringtofront_109699)(tlinkedlist109020* list, tlistentry109014* entry) {
	nimfr("bringToFront", "lists.nim")
	nimln(95, "lists.nim");
	remove_109636(list, entry);	nimln(96, "lists.nim");
	prepend_109269(list, entry);	popFrame();
}
N_NIMCALL(void, excludestr_109803)(tlinkedlist109020* list, NimStringDesc* data) {
	tlistentry109014* it;
	nimfr("ExcludeStr", "lists.nim")
	nimln(107, "lists.nim");
	it = (*list).Head;
	nimln(108, "lists.nim");
	while (1) {
		tlistentry109014* nxt;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(109, "lists.nim");
		nxt = (*it).Next;
		nimln(110, "lists.nim");
		{
			nimln(110, "lists.nim");
			if (it) chckObj((*it).Sup.m_type, (&NTI109016));
			if (!eqStrings((*((tstrentry109016*) (it))).Data, data)) goto LA4;
			nimln(110, "lists.nim");
			remove_109636(list, it);		}		LA4: ;
		nimln(111, "lists.nim");
		it = nxt;
	} LA1: ;
	popFrame();
}
N_NIMCALL(tlistentry109014*, find_109825)(tlinkedlist109020 list, tcompareproc109022 fn, void* closure) {
	tlistentry109014* result;
	nimfr("Find", "lists.nim")
	result = 0;
	nimln(114, "lists.nim");
	result = list.Head;
	nimln(115, "lists.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(116, "lists.nim");
		{
			NIM_BOOL LOC4;
			nimln(116, "lists.nim");
			LOC4 = 0;
			LOC4 = fn(result, closure);
			if (!LOC4) goto LA5;
			nimln(116, "lists.nim");
			goto BeforeRet;
		}		LA5: ;
		nimln(117, "lists.nim");
		result = (*result).Next;
	} LA1: ;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerlistsInit)(void) {
	nimfr("lists", "lists.nim")
	popFrame();
}

N_NOINLINE(void, compilerlistsDatInit)(void) {
static TNimNode* TMP261[2];
static TNimNode* TMP3582[3];
static TNimNode TMP258[8];
NTI109014.size = sizeof(tlistentry109014);
NTI109014.kind = 17;
NTI109014.base = (&NTI1009);
TMP261[0] = &TMP258[1];
NTI109012.size = sizeof(tlistentry109014*);
NTI109012.kind = 22;
NTI109012.base = (&NTI109014);
NTI109012.marker = TMP262;
TMP258[1].kind = 1;
TMP258[1].offset = offsetof(tlistentry109014, Prev);
TMP258[1].typ = (&NTI109012);
TMP258[1].name = "prev";
TMP261[1] = &TMP258[2];
TMP258[2].kind = 1;
TMP258[2].offset = offsetof(tlistentry109014, Next);
TMP258[2].typ = (&NTI109012);
TMP258[2].name = "next";
TMP258[0].len = 2; TMP258[0].kind = 2; TMP258[0].sons = &TMP261[0];
NTI109014.node = &TMP258[0];
NTI109016.size = sizeof(tstrentry109016);
NTI109016.kind = 17;
NTI109016.base = (&NTI109014);
NTI109016.flags = 2;
TMP258[3].kind = 1;
TMP258[3].offset = offsetof(tstrentry109016, Data);
TMP258[3].typ = (&NTI142);
TMP258[3].name = "data";
NTI109016.node = &TMP258[3];
NTI109018.size = sizeof(tstrentry109016*);
NTI109018.kind = 22;
NTI109018.base = (&NTI109016);
NTI109018.flags = 2;
NTI109018.marker = TMP263;
NTI109020.size = sizeof(tlinkedlist109020);
NTI109020.kind = 18;
NTI109020.base = 0;
NTI109020.flags = 2;
TMP3582[0] = &TMP258[5];
TMP258[5].kind = 1;
TMP258[5].offset = offsetof(tlinkedlist109020, Head);
TMP258[5].typ = (&NTI109012);
TMP258[5].name = "head";
TMP3582[1] = &TMP258[6];
TMP258[6].kind = 1;
TMP258[6].offset = offsetof(tlinkedlist109020, Tail);
TMP258[6].typ = (&NTI109012);
TMP258[6].name = "tail";
TMP3582[2] = &TMP258[7];
TMP258[7].kind = 1;
TMP258[7].offset = offsetof(tlinkedlist109020, Counter);
TMP258[7].typ = (&NTI105);
TMP258[7].name = "Counter";
TMP258[4].len = 3; TMP258[4].kind = 2; TMP258[4].sons = &TMP3582[0];
NTI109020.node = &TMP258[4];
}

