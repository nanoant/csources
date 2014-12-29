/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct jsonnodeobj335042 jsonnodeobj335042;
typedef struct TY335611 TY335611;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY335057 TY335057;
typedef struct TY335062 TY335062;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY335611 {
NimStringDesc* Field0;
jsonnodeobj335042* Field1;
};
struct  jsonnodeobj335042  {
NU8 Kind;
union {
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY335057* Fields;
} S6;
struct {TY335062* Elems;
} S7;
} kindU;
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
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
typedef NI TY26420[16];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY335057 {
  TGenericSeq Sup;
  TY335611 data[SEQ_DECL_SIZE];
};
struct TY335062 {
  TGenericSeq Sup;
  jsonnodeobj335042* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4726)(void* p, NI op);
N_NIMCALL(void, TMP4727)(void* p, NI op);
N_NIMCALL(void, TMP4728)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_336082)(TY335062* x_336088, TY335062* y_336093);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_336237)(TY335057* x_336243, TY335057* y_336248);
N_NIMCALL(void, topretty_339353)(NimStringDesc** result, jsonnodeobj335042* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent);
N_NIMCALL(void, nl_339305)(NimStringDesc** s, NIM_BOOL ml);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, indent_339282)(NimStringDesc** s, NI i);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NI, newindent_339293)(NI curr, NI indent, NIM_BOOL ml);
N_NIMCALL(NimStringDesc*, escapejson_339316)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
TNimNode* NimDT_335042_kind[8];
STRING_LITERAL(TMP4733, "", 0);
STRING_LITERAL(TMP4734, "\012", 1);
STRING_LITERAL(TMP4735, "{", 1);
STRING_LITERAL(TMP4736, ", ", 2);
STRING_LITERAL(TMP4737, "\"", 1);
STRING_LITERAL(TMP4738, "\\\"", 2);
STRING_LITERAL(TMP4739, "\\\\", 2);
STRING_LITERAL(TMP4740, "\\u", 2);
STRING_LITERAL(TMP4741, ": ", 2);
STRING_LITERAL(TMP4742, "}", 1);
STRING_LITERAL(TMP4743, "{}", 2);
STRING_LITERAL(TMP4746, "[", 1);
STRING_LITERAL(TMP4747, "]", 1);
STRING_LITERAL(TMP4748, "[]", 2);
STRING_LITERAL(TMP4749, "null", 4);
TNimType NTI335042; /* JsonNodeObj */
TNimType NTI335038; /* JsonNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI5510; /* BiggestInt */
extern TNimType NTI128; /* float */
extern TNimType NTI138; /* bool */
TNimType NTI335611; /* tuple[key: string, val: JsonNode] */
TNimType NTI335057; /* seq[tuple[key: string, val: JsonNode]] */
TNimType NTI335062; /* seq[JsonNode] */
TNimType NTI335040; /* JsonNode */
extern tgcheap47016 gch_47044;
N_NIMCALL(void, TMP4726)(void* p, NI op) {
	TY335057* a;
	NI LOC1;
	a = (TY335057*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP4727)(void* p, NI op) {
	TY335062* a;
	NI LOC1;
	a = (TY335062*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP4728)(void* p, NI op) {
	jsonnodeobj335042* a;
	a = (jsonnodeobj335042*)p;
	switch ((*a).Kind) {
	case ((NU8) 4):
	nimGCvisit((void*)(*a).kindU.S1.Str, op);
	break;
	case ((NU8) 2):
	break;
	case ((NU8) 3):
	break;
	case ((NU8) 1):
	break;
	case ((NU8) 0):
	break;
	case ((NU8) 5):
	nimGCvisit((void*)(*a).kindU.S6.Fields, op);
	break;
	case ((NU8) 6):
	nimGCvisit((void*)(*a).kindU.S7.Elems, op);
	break;
	} 
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617(&gch_47044.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(jsonnodeobj335042*, HEX25_335608)(TY335611* keyvals, NI keyvalsLen0) {
	jsonnodeobj335042* result;
	result = 0;
	result = (jsonnodeobj335042*) newObj((&NTI335040), sizeof(jsonnodeobj335042));
	(*result).Kind = ((NU8) 5);
	if ((*result).kindU.S6.Fields) nimGCunrefNoCycle((*result).kindU.S6.Fields);
	(*result).kindU.S6.Fields = (TY335057*) newSeqRC1((&NTI335057), keyvalsLen0);
	{
		NI i_335717;
		TY335611 p_335718;
		NI i_335736;
		i_335717 = 0;
		memset((void*)&p_335718, 0, sizeof(p_335718));
		i_335736 = 0;
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_335736 < keyvalsLen0)) goto LA3;
				i_335717 = i_335736;
				p_335718.Field0 = keyvals[i_335736].Field0;
				p_335718.Field1 = keyvals[i_335736].Field1;
				LOC4 = 0;
				LOC4 = (*result).kindU.S6.Fields->data[i_335717].Field0; (*result).kindU.S6.Fields->data[i_335717].Field0 = copyStringRC1(p_335718.Field0);
				if (LOC4) nimGCunrefNoCycle(LOC4);
				asgnRefNoCycle((void**) &(*result).kindU.S6.Fields->data[i_335717].Field1, p_335718.Field1);
				i_335736 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(jsonnodeobj335042*, HEX25_335448)(NimStringDesc* s) {
	jsonnodeobj335042* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (jsonnodeobj335042*) newObj((&NTI335040), sizeof(jsonnodeobj335042));
	(*result).Kind = ((NU8) 4);
	LOC1 = 0;
	LOC1 = (*result).kindU.S1.Str; (*result).kindU.S1.Str = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
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

N_NIMCALL(void, HEX5BHEX5DHEX3D_338240)(jsonnodeobj335042* obj, NimStringDesc* key, jsonnodeobj335042* val) {
	TY335611 LOC8;
	NimStringDesc* LOC9;
	{
		NI i_338436;
		NI HEX3Atmp_338499;
		NI res_338502;
		i_338436 = 0;
		HEX3Atmp_338499 = 0;
		HEX3Atmp_338499 = (NI32)((*obj).kindU.S6.Fields->Sup.len - 1);
		res_338502 = 0;
		{
			while (1) {
				if (!(res_338502 <= HEX3Atmp_338499)) goto LA3;
				i_338436 = res_338502;
				{
					if (!eqStrings((*obj).kindU.S6.Fields->data[i_338436].Field0, key)) goto LA6;
					asgnRefNoCycle((void**) &(*obj).kindU.S6.Fields->data[i_338436].Field1, val);
					goto BeforeRet;
				}
				LA6: ;
				res_338502 += 1;
			} LA3: ;
		}
	}
	memset((void*)&LOC8, 0, sizeof(LOC8));
	LOC8.Field0 = copyString(key);
	LOC8.Field1 = val;
	(*obj).kindU.S6.Fields = (TY335057*) incrSeq(&((*obj).kindU.S6.Fields)->Sup, sizeof(TY335611));
	LOC9 = 0;
	LOC9 = (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0; (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0 = copyStringRC1(LOC8.Field0);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	asgnRefNoCycle((void**) &(*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field1, LOC8.Field1);
	BeforeRet: ;
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_335893)(jsonnodeobj335042* a, jsonnodeobj335042* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!a == 0) goto LA3;
		{
			if (!b == 0) goto LA7;
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA7: ;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC10;
		LOC10 = 0;
		LOC10 = b == 0;
		if (LOC10) goto LA11;
		LOC10 = !(((*a).Kind == (*b).Kind));
		LA11: ;
		if (!LOC10) goto LA12;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA12: ;
	{
		switch ((*a).Kind) {
		case ((NU8) 4):
		{
			result = eqStrings((*a).kindU.S1.Str, (*b).kindU.S1.Str);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*a).kindU.S2.Num == (*b).kindU.S2.Num);
		}
		break;
		case ((NU8) 3):
		{
			result = ((*a).kindU.S3.Fnum == (*b).kindU.S3.Fnum);
		}
		break;
		case ((NU8) 1):
		{
			result = ((*a).kindU.S4.Bval == (*b).kindU.S4.Bval);
		}
		break;
		case ((NU8) 0):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 6):
		{
			result = HEX3DHEX3D_336082((*a).kindU.S7.Elems, (*b).kindU.S7.Elems);
		}
		break;
		case ((NU8) 5):
		{
			result = HEX3DHEX3D_336237((*a).kindU.S6.Fields, (*b).kindU.S6.Fields);
		}
		break;
		}
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(jsonnodeobj335042*, newjarray_335389)(void) {
	jsonnodeobj335042* result;
	result = 0;
	result = (jsonnodeobj335042*) newObj((&NTI335040), sizeof(jsonnodeobj335042));
	(*result).Kind = ((NU8) 6);
	if ((*result).kindU.S7.Elems) nimGCunrefNoCycle((*result).kindU.S7.Elems);
	(*result).kindU.S7.Elems = (TY335062*) newSeqRC1((&NTI335062), 0);
	return result;
}

N_NIMCALL(void, add_337862)(jsonnodeobj335042* father, jsonnodeobj335042* child) {
	(*father).kindU.S7.Elems = (TY335062*) incrSeq(&((*father).kindU.S7.Elems)->Sup, sizeof(jsonnodeobj335042*));
	asgnRefNoCycle((void**) &(*father).kindU.S7.Elems->data[(*father).kindU.S7.Elems->Sup.len-1], child);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, nl_339305)(NimStringDesc** s, NIM_BOOL ml) {
	{
		if (!ml) goto LA3;
		(*s) = resizeString((*s), 1);
appendString((*s), ((NimStringDesc*) &TMP4734));
	}
	LA3: ;
}

N_NIMCALL(void, indent_339282)(NimStringDesc** s, NI i) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(i, 32);
	(*s) = resizeString((*s), LOC1->Sup.len + 0);
appendString((*s), LOC1);
}

N_NIMCALL(NI, newindent_339293)(NI curr, NI indent, NIM_BOOL ml) {
	NI result;
	result = 0;
	{
		if (!ml) goto LA3;
		result = (NI32)(curr + indent);
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		result = indent;
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, escapejson_339316)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI32)(s->Sup.len + (NI)((NU32)(s->Sup.len) >> (NU32)(3))));
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4737));
	{
		NI x_339320;
		NI i_339328;
		NI result_339330;
		x_339320 = 0;
		i_339328 = 0;
		result_339330 = 0;
		{
			while (1) {
				NI r;
				if (!(i_339328 < s->Sup.len)) goto LA3;
				{
					if (!((NU32)(((NU8)(s->data[i_339328]))) <= (NU32)(127))) goto LA6;
					result_339330 = ((NI) (((NU8)(s->data[i_339328]))));
					i_339328 += 1;
				}
				goto LA4;
				LA6: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_339328]))))) >> (NU32)(5)) == 6)) goto LA9;
					result_339330 = (NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_339328])))) & 31)))) << (NU32)(6)) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 1)])))) & 63))));
					i_339328 += 2;
				}
				goto LA4;
				LA9: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_339328]))))) >> (NU32)(4)) == 14)) goto LA12;
					result_339330 = (NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_339328])))) & 15)))) << (NU32)(12)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 1)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 2)])))) & 63))));
					i_339328 += 3;
				}
				goto LA4;
				LA12: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_339328]))))) >> (NU32)(3)) == 30)) goto LA15;
					result_339330 = (NI)((NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_339328])))) & 7)))) << (NU32)(18)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 1)])))) & 63)))) << (NU32)(12))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 2)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 3)])))) & 63))));
					i_339328 += 4;
				}
				goto LA4;
				LA15: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_339328]))))) >> (NU32)(2)) == 62)) goto LA18;
					result_339330 = (NI)((NI)((NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_339328])))) & 3)))) << (NU32)(24)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 1)])))) & 63)))) << (NU32)(18))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 2)])))) & 63)))) << (NU32)(12))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 3)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 4)])))) & 63))));
					i_339328 += 5;
				}
				goto LA4;
				LA18: ;
				{
					if (!((NI)((NU32)(((NI) (((NU8)(s->data[i_339328]))))) >> (NU32)(1)) == 126)) goto LA21;
					result_339330 = (NI)((NI)((NI)((NI)((NI)((NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[i_339328])))) & 1)))) << (NU32)(30)) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 1)])))) & 63)))) << (NU32)(24))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 2)])))) & 63)))) << (NU32)(18))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 3)])))) & 63)))) << (NU32)(12))) | (NI)((NU32)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 4)])))) & 63)))) << (NU32)(6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI32)(i_339328 + 5)])))) & 63))));
					i_339328 += 6;
				}
				goto LA4;
				LA21: ;
				{
					result_339330 = ((NI) (((NU8)(s->data[i_339328]))));
					i_339328 += 1;
				}
				LA4: ;
				x_339320 = result_339330;
				r = x_339320;
				{
					NIM_BOOL LOC26;
					NIM_CHAR c;
					LOC26 = 0;
					LOC26 = (32 <= r);
					if (!(LOC26)) goto LA27;
					LOC26 = (r <= 127);
					LA27: ;
					if (!LOC26) goto LA28;
					c = ((NIM_CHAR) (((NI) (r))));
					switch (((NU8)(c))) {
					case 34:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4738));
					}
					break;
					case 92:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4739));
					}
					break;
					default:
					{
						result = addChar(result, c);
					}
					break;
					}
				}
				goto LA24;
				LA28: ;
				{
					NimStringDesc* LOC34;
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4740));
					LOC34 = 0;
					LOC34 = nsuToHex(((NI64) (r)), 4);
					result = resizeString(result, LOC34->Sup.len + 0);
appendString(result, LOC34);
				}
				LA24: ;
			} LA3: ;
		}
	}
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4737));
	return result;
}

N_NIMCALL(void, topretty_339353)(NimStringDesc** result, jsonnodeobj335042* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent) {
	switch ((*node).Kind) {
	case ((NU8) 5):
	{
		{
			NIM_BOOL LOC4;
			LOC4 = 0;
			LOC4 = !((currindent == 0));
			if (!(LOC4)) goto LA5;
			LOC4 = !(lstarr);
			LA5: ;
			if (!LOC4) goto LA6;
			nl_339305(result, ml);
		}
		LA6: ;
		indent_339282(result, currindent);
		{
			if (!(0 < (*node).kindU.S6.Fields->Sup.len)) goto LA10;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4735));
			nl_339305(result, ml);
			{
				NI i_339423;
				NI HEX3Atmp_339586;
				NI res_339589;
				i_339423 = 0;
				HEX3Atmp_339586 = 0;
				HEX3Atmp_339586 = (NI32)((*node).kindU.S6.Fields->Sup.len - 1);
				res_339589 = 0;
				{
					while (1) {
						NI LOC19;
						NimStringDesc* LOC20;
						NI LOC21;
						if (!(res_339589 <= HEX3Atmp_339586)) goto LA14;
						i_339423 = res_339589;
						{
							if (!(0 < i_339423)) goto LA17;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4736));
							nl_339305(result, ml);
						}
						LA17: ;
						LOC19 = 0;
						LOC19 = newindent_339293(currindent, indent, ml);
						indent_339282(result, LOC19);
						LOC20 = 0;
						LOC20 = escapejson_339316((*node).kindU.S6.Fields->data[i_339423].Field0);
						(*result) = resizeString((*result), LOC20->Sup.len + 0);
appendString((*result), LOC20);
						(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4741));
						LOC21 = 0;
						LOC21 = newindent_339293(currindent, indent, ml);
						topretty_339353(result, (*node).kindU.S6.Fields->data[i_339423].Field1, indent, ml, NIM_FALSE, LOC21);
						res_339589 += 1;
					} LA14: ;
				}
			}
			nl_339305(result, ml);
			indent_339282(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4742));
		}
		goto LA8;
		LA10: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4743));
		}
		LA8: ;
	}
	break;
	case ((NU8) 4):
	{
		NimStringDesc* LOC28;
		{
			if (!lstarr) goto LA26;
			indent_339282(result, currindent);
		}
		LA26: ;
		LOC28 = 0;
		LOC28 = escapejson_339316((*node).kindU.S1.Str);
		(*result) = resizeString((*result), LOC28->Sup.len + 0);
appendString((*result), LOC28);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* LOC34;
		{
			if (!lstarr) goto LA32;
			indent_339282(result, currindent);
		}
		LA32: ;
		LOC34 = 0;
		LOC34 = nimInt64ToStr((*node).kindU.S2.Num);
		(*result) = resizeString((*result), LOC34->Sup.len + 0);
appendString((*result), LOC34);
	}
	break;
	case ((NU8) 3):
	{
		NimStringDesc* LOC40;
		{
			if (!lstarr) goto LA38;
			indent_339282(result, currindent);
		}
		LA38: ;
		LOC40 = 0;
		LOC40 = nimFloatToStr((*node).kindU.S3.Fnum);
		(*result) = resizeString((*result), LOC40->Sup.len + 0);
appendString((*result), LOC40);
	}
	break;
	case ((NU8) 1):
	{
		NimStringDesc* LOC46;
		{
			if (!lstarr) goto LA44;
			indent_339282(result, currindent);
		}
		LA44: ;
		LOC46 = 0;
		LOC46 = nimBoolToStr((*node).kindU.S4.Bval);
		(*result) = resizeString((*result), LOC46->Sup.len + 0);
appendString((*result), LOC46);
	}
	break;
	case ((NU8) 6):
	{
		{
			if (!lstarr) goto LA50;
			indent_339282(result, currindent);
		}
		LA50: ;
		{
			if (!!(((*node).kindU.S7.Elems->Sup.len == 0))) goto LA54;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4746));
			nl_339305(result, ml);
			{
				NI i_339569;
				NI HEX3Atmp_339592;
				NI res_339595;
				i_339569 = 0;
				HEX3Atmp_339592 = 0;
				HEX3Atmp_339592 = (NI32)((*node).kindU.S7.Elems->Sup.len - 1);
				res_339595 = 0;
				{
					while (1) {
						NI LOC63;
						if (!(res_339595 <= HEX3Atmp_339592)) goto LA58;
						i_339569 = res_339595;
						{
							if (!(0 < i_339569)) goto LA61;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4736));
							nl_339305(result, ml);
						}
						LA61: ;
						LOC63 = 0;
						LOC63 = newindent_339293(currindent, indent, ml);
						topretty_339353(result, (*node).kindU.S7.Elems->data[i_339569], indent, ml, NIM_TRUE, LOC63);
						res_339595 += 1;
					} LA58: ;
				}
			}
			nl_339305(result, ml);
			indent_339282(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4747));
		}
		goto LA52;
		LA54: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4748));
		}
		LA52: ;
	}
	break;
	case ((NU8) 0):
	{
		{
			if (!lstarr) goto LA68;
			indent_339282(result, currindent);
		}
		LA68: ;
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4749));
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, pretty_339621)(jsonnodeobj335042* node, NI indent) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4733));
	topretty_339353(&result, node, indent, NIM_TRUE, NIM_FALSE, 0);
	return result;
}

N_NIMCALL(NimStringDesc*, HEX24_339633)(jsonnodeobj335042* node) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4733));
	topretty_339353(&result, node, 1, NIM_FALSE, NIM_FALSE, 0);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void) {
static TNimNode* TMP4722[7];
NI TMP4724;
static char* NIM_CONST TMP4723[7] = {
"JNull", 
"JBool", 
"JInt", 
"JFloat", 
"JString", 
"JObject", 
"JArray"};
static TNimNode* TMP4725[2];
static TNimNode TMP876[19];
NTI335042.size = sizeof(jsonnodeobj335042);
NTI335042.kind = 18;
NTI335042.base = 0;
NTI335042.flags = 2;
NTI335038.size = sizeof(NU8);
NTI335038.kind = 14;
NTI335038.base = 0;
NTI335038.flags = 3;
for (TMP4724 = 0; TMP4724 < 7; TMP4724++) {
TMP876[TMP4724+1].kind = 1;
TMP876[TMP4724+1].offset = TMP4724;
TMP876[TMP4724+1].name = TMP4723[TMP4724];
TMP4722[TMP4724] = &TMP876[TMP4724+1];
}
TMP876[8].len = 7; TMP876[8].kind = 2; TMP876[8].sons = &TMP4722[0];
NTI335038.node = &TMP876[8];
TMP876[0].kind = 3;
TMP876[0].offset = offsetof(jsonnodeobj335042, Kind);
TMP876[0].typ = (&NTI335038);
TMP876[0].name = "kind";
TMP876[0].sons = &NimDT_335042_kind[0];
TMP876[0].len = 7;
TMP876[9].kind = 1;
TMP876[9].offset = offsetof(jsonnodeobj335042, kindU.S1.Str);
TMP876[9].typ = (&NTI149);
TMP876[9].name = "str";
NimDT_335042_kind[4] = &TMP876[9];
TMP876[10].kind = 1;
TMP876[10].offset = offsetof(jsonnodeobj335042, kindU.S2.Num);
TMP876[10].typ = (&NTI5510);
TMP876[10].name = "num";
NimDT_335042_kind[2] = &TMP876[10];
TMP876[11].kind = 1;
TMP876[11].offset = offsetof(jsonnodeobj335042, kindU.S3.Fnum);
TMP876[11].typ = (&NTI128);
TMP876[11].name = "fnum";
NimDT_335042_kind[3] = &TMP876[11];
TMP876[12].kind = 1;
TMP876[12].offset = offsetof(jsonnodeobj335042, kindU.S4.Bval);
TMP876[12].typ = (&NTI138);
TMP876[12].name = "bval";
NimDT_335042_kind[1] = &TMP876[12];
TMP876[13].len = 0; TMP876[13].kind = 2;
NimDT_335042_kind[0] = &TMP876[13];
NTI335611.size = sizeof(TY335611);
NTI335611.kind = 18;
NTI335611.base = 0;
NTI335611.flags = 2;
TMP4725[0] = &TMP876[16];
TMP876[16].kind = 1;
TMP876[16].offset = offsetof(TY335611, Field0);
TMP876[16].typ = (&NTI149);
TMP876[16].name = "Field0";
TMP4725[1] = &TMP876[17];
TMP876[17].kind = 1;
TMP876[17].offset = offsetof(TY335611, Field1);
TMP876[17].typ = (&NTI335040);
TMP876[17].name = "Field1";
TMP876[15].len = 2; TMP876[15].kind = 2; TMP876[15].sons = &TMP4725[0];
NTI335611.node = &TMP876[15];
NTI335057.size = sizeof(TY335057*);
NTI335057.kind = 24;
NTI335057.base = (&NTI335611);
NTI335057.flags = 2;
NTI335057.marker = TMP4726;
TMP876[14].kind = 1;
TMP876[14].offset = offsetof(jsonnodeobj335042, kindU.S6.Fields);
TMP876[14].typ = (&NTI335057);
TMP876[14].name = "fields";
NimDT_335042_kind[5] = &TMP876[14];
NTI335062.size = sizeof(TY335062*);
NTI335062.kind = 24;
NTI335062.base = (&NTI335040);
NTI335062.flags = 2;
NTI335062.marker = TMP4727;
TMP876[18].kind = 1;
TMP876[18].offset = offsetof(jsonnodeobj335042, kindU.S7.Elems);
TMP876[18].typ = (&NTI335062);
TMP876[18].name = "elems";
NimDT_335042_kind[6] = &TMP876[18];
NTI335042.node = &TMP876[0];
NTI335040.size = sizeof(jsonnodeobj335042*);
NTI335040.kind = 22;
NTI335040.base = (&NTI335042);
NTI335040.flags = 2;
NTI335040.marker = TMP4728;
}

