/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trstnode342011 trstnode342011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trstnodeseq342009 trstnodeseq342009;
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
struct  trstnode342011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq342009* Sons;
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
struct trstnodeseq342009 {
  TGenericSeq Sup;
  trstnode342011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2452)(void* p, NI op);
N_NIMCALL(void, TMP2453)(void* p, NI op);
N_NIMCALL(trstnode342011*, newrstnode_342105)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_342183)(trstnode342011* father, trstnode342011* son);
TNimType NTI342011; /* TRstNode */
TNimType NTI342005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI342009; /* TRstNodeSeq */
TNimType NTI342007; /* PRstNode */
extern tgcheap46816 gch_46844;

N_NIMCALL(NI, len_342084)(trstnode342011* n) {
	NI result;
	result = 0;
	result = (*n).Sons->Sup.len;
	return result;
}

N_NIMCALL(trstnode342011*, lastson_342162)(trstnode342011* n) {
	trstnode342011* result;
	result = 0;
	result = (*n).Sons->data[(NI64)((*n).Sons->Sup.len - 1)];
	return result;
}
N_NIMCALL(void, TMP2452)(void* p, NI op) {
	trstnodeseq342009* a;
	NI LOC1;
	a = (trstnodeseq342009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2453)(void* p, NI op) {
	trstnode342011* a;
	a = (trstnode342011*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
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

N_NIMCALL(trstnode342011*, newrstnode_342105)(NU8 kind) {
	trstnode342011* result;
	result = 0;
	result = (trstnode342011*) newObj((&NTI342007), sizeof(trstnode342011));
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (trstnodeseq342009*) newSeqRC1((&NTI342009), 0);
	(*result).Kind = kind;
	return result;
}

N_NIMCALL(trstnode342011*, newrstnode_342151)(NU8 kind, NimStringDesc* s) {
	trstnode342011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_342105(kind);
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, add_342183)(trstnode342011* father, trstnode342011* son) {
	(*father).Sons = (trstnodeseq342009*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode342011*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
}

N_NIMCALL(void, addifnotnil_342211)(trstnode342011* father, trstnode342011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_342183(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2448[4];
static TNimNode* TMP2449[65];
NI TMP2451;
static char* NIM_CONST TMP2450[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP876[71];
NTI342011.size = sizeof(trstnode342011);
NTI342011.kind = 18;
NTI342011.base = 0;
NTI342011.flags = 2;
TMP2448[0] = &TMP876[1];
NTI342005.size = sizeof(NU8);
NTI342005.kind = 14;
NTI342005.base = 0;
NTI342005.flags = 3;
for (TMP2451 = 0; TMP2451 < 65; TMP2451++) {
TMP876[TMP2451+2].kind = 1;
TMP876[TMP2451+2].offset = TMP2451;
TMP876[TMP2451+2].name = TMP2450[TMP2451];
TMP2449[TMP2451] = &TMP876[TMP2451+2];
}
TMP876[67].len = 65; TMP876[67].kind = 2; TMP876[67].sons = &TMP2449[0];
NTI342005.node = &TMP876[67];
TMP876[1].kind = 1;
TMP876[1].offset = offsetof(trstnode342011, Kind);
TMP876[1].typ = (&NTI342005);
TMP876[1].name = "kind";
TMP2448[1] = &TMP876[68];
TMP876[68].kind = 1;
TMP876[68].offset = offsetof(trstnode342011, Text);
TMP876[68].typ = (&NTI149);
TMP876[68].name = "text";
TMP2448[2] = &TMP876[69];
TMP876[69].kind = 1;
TMP876[69].offset = offsetof(trstnode342011, Level);
TMP876[69].typ = (&NTI108);
TMP876[69].name = "level";
TMP2448[3] = &TMP876[70];
NTI342009.size = sizeof(trstnodeseq342009*);
NTI342009.kind = 24;
NTI342009.base = (&NTI342007);
NTI342009.flags = 2;
NTI342009.marker = TMP2452;
TMP876[70].kind = 1;
TMP876[70].offset = offsetof(trstnode342011, Sons);
TMP876[70].typ = (&NTI342009);
TMP876[70].name = "sons";
TMP876[0].len = 4; TMP876[0].kind = 2; TMP876[0].sons = &TMP2448[0];
NTI342011.node = &TMP876[0];
NTI342007.size = sizeof(trstnode342011*);
NTI342007.kind = 22;
NTI342007.base = (&NTI342011);
NTI342007.flags = 2;
NTI342007.marker = TMP2453;
}

