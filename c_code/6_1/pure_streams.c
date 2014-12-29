/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct eio1033 eio1033;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct esystem1031 esystem1031;
typedef struct esynch1029 esynch1029;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tstream143629 tstream143629;
typedef struct tstringstream143999 tstringstream143999;
typedef struct tfilestream144109 tfilestream144109;
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
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct esynch1029 {
  E_Base Sup;
};
struct esystem1031 {
  esynch1029 Sup;
};
struct eio1033 {
  esystem1031 Sup;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef N_NIMCALL_PTR(void, TY143630) (tstream143629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY143634) (tstream143629* s);
typedef N_NIMCALL_PTR(void, TY143638) (tstream143629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY143643) (tstream143629* s);
typedef N_NIMCALL_PTR(NI, TY143647) (tstream143629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY143653) (tstream143629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY143659) (tstream143629* s);
struct tstream143629 {
  TNimObject Sup;
TY143630 Closeimpl;
TY143634 Atendimpl;
TY143638 Setpositionimpl;
TY143643 Getpositionimpl;
TY143647 Readdataimpl;
TY143653 Writedataimpl;
TY143659 Flushimpl;
};
struct tstringstream143999 {
  tstream143629 Sup;
NimStringDesc* Data;
NI Pos;
};
struct tfilestream144109 {
  tstream143629 Sup;
FILE* F;
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
N_NIMCALL(eio1033*, neweio_143607)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, flush_143664)(tstream143629* s);
N_NIMCALL(void, close_143675)(tstream143629* s);
N_NIMCALL(void, close_143686)(tstream143629* s, tstream143629* unused);
N_NIMCALL(NIM_BOOL, atend_143692)(tstream143629* s);
N_NIMCALL(NIM_BOOL, atend_143698)(tstream143629* s, tstream143629* unused);
N_NIMCALL(void, setposition_143705)(tstream143629* s, NI pos);
N_NIMCALL(void, setposition_143711)(tstream143629* s, tstream143629* unused, NI pos);
N_NIMCALL(NI, getposition_143718)(tstream143629* s);
N_NIMCALL(NI, getposition_143724)(tstream143629* s, tstream143629* unused);
N_NIMCALL(NI, readdata_143731)(tstream143629* s, void* buffer, NI buflen);
N_NIMCALL(NI, readdata_143739)(tstream143629* s, tstream143629* unused, void* buffer, NI buflen);
N_NIMCALL(void, writedata_143748)(tstream143629* s, void* buffer, NI buflen);
N_NIMCALL(void, writedata_143755)(tstream143629* s, tstream143629* unused, void* buffer, NI buflen);
N_NIMCALL(void, write_143772)(tstream143629* s, NimStringDesc* x);
N_NIMCALL(void, writeln_143778)(tstream143629* s, NimStringDesc** args, NI argsLen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NIM_CHAR, readchar_143808)(tstream143629* s);
N_NIMCALL(void, read_143821)(tstream143629* s, NIM_BOOL* result);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NIM_BOOL, readbool_143815)(tstream143629* s);
N_NIMCALL(void, read_143842)(tstream143629* s, NI8* result);
N_NIMCALL(NI8, readint8_143836)(tstream143629* s);
N_NIMCALL(void, read_143863)(tstream143629* s, NI16* result);
N_NIMCALL(NI16, readint16_143857)(tstream143629* s);
N_NIMCALL(void, read_143884)(tstream143629* s, NI32* result);
N_NIMCALL(NI32, readint32_143878)(tstream143629* s);
N_NIMCALL(void, read_143905)(tstream143629* s, NI64* result);
N_NIMCALL(NI64, readint64_143899)(tstream143629* s);
N_NIMCALL(void, read_143926)(tstream143629* s, NF32* result);
N_NIMCALL(NF32, readfloat32_143920)(tstream143629* s);
N_NIMCALL(void, read_143947)(tstream143629* s, NF* result);
N_NIMCALL(NF, readfloat64_143941)(tstream143629* s);
N_NIMCALL(NimStringDesc*, readstr_143962)(tstream143629* s, NI length);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NIM_BOOL, readline_143973)(tstream143629* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, readline_143986)(tstream143629* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ssatend_144003)(tstream143629* s_144005);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, clamp_144016)(NI x, NI a, NI b);
N_NIMCALL(void, sssetposition_144010)(tstream143629* s_144012, NI pos);
N_NIMCALL(NI, ssgetposition_144031)(tstream143629* s_144033);
N_NIMCALL(NI, ssreaddata_144038)(tstream143629* s_144040, void* buffer, NI buflen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, sswritedata_144062)(tstream143629* s_144064, void* buffer, NI buflen);
N_NIMCALL(void, ssclose_144082)(tstream143629* s_144084);
N_NIMCALL(tstringstream143999*, newstringstream_144088)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP932)(void* p, NI op);
N_NIMCALL(void, fsclose_144112)(tstream143629* s);
N_NIMCALL(void, fsflush_144129)(tstream143629* s);
N_NIMCALL(NIM_BOOL, fsatend_144134)(tstream143629* s);
N_NIMCALL(NIM_BOOL, endoffile_9424)(FILE* f);
N_NIMCALL(void, fssetposition_144140)(tstream143629* s, NI pos);
N_NIMCALL(void, setfilepos_9538)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_144146)(tstream143629* s);
N_NIMCALL(NI64, getfilepos_9542)(FILE* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, fsreaddata_144152)(tstream143629* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_9514)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_144160)(tstream143629* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_9533)(FILE* f, void* buffer, NI len);
N_NIMCALL(tfilestream144109*, newfilestream_144167)(FILE* f);
N_NIMCALL(void, TMP934)(void* p, NI op);
N_NIMCALL(tfilestream144109*, newfilestream_144185)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP951)(void* p, NI op);
STRING_LITERAL(TMP925, "\012", 1);
STRING_LITERAL(TMP926, "cannot read from stream", 23);
STRING_LITERAL(TMP927, "", 0);
STRING_LITERAL(TMP933, "cannot write to stream", 22);
extern TNimType NTI9401; /* ref EIO */
extern TNimType NTI1033; /* EIO */
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern TNimType NTI1009; /* TObject */
TNimType NTI143629; /* TStream */
TNimType NTI143630; /* proc (PStream) */
TNimType NTI143634; /* proc (PStream): bool */
TNimType NTI143638; /* proc (PStream, int) */
TNimType NTI143643; /* proc (PStream): int */
TNimType NTI143647; /* proc (PStream, pointer, int): int */
TNimType NTI143653; /* proc (PStream, pointer, int) */
TNimType NTI143659; /* proc (PStream) */
TNimType NTI143999; /* TStringStream */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
TNimType NTI143997; /* PStringStream */
TNimType NTI144109; /* TFileStream */
extern TNimType NTI9004; /* TFile */
TNimType NTI144107; /* PFileStream */
TNimType NTI143627; /* PStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
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
N_NIMCALL(eio1033*, neweio_143607)(NimStringDesc* msg) {
	eio1033* result;
	NimStringDesc* LOC1;
	nimfr("newEIO", "streams.nim")
	result = 0;
	nimln(16, "streams.nim");
	result = (eio1033*) newObj((&NTI9401), sizeof(eio1033));
	(*result).Sup.Sup.Sup.Sup.m_type = (&NTI1033);
	nimln(17, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.Sup.message; (*result).Sup.Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}
N_NIMCALL(void, flush_143664)(tstream143629* s) {
	nimfr("flush", "streams.nim")
	nimln(38, "streams.nim");
	{
		nimln(38, "streams.nim");
		nimln(38, "streams.nim");
		if (!!((*s).Flushimpl == 0)) goto LA3;
		nimln(38, "streams.nim");
		(*s).Flushimpl(s);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, close_143675)(tstream143629* s) {
	nimfr("close", "streams.nim")
	nimln(42, "streams.nim");
	{
		nimln(42, "streams.nim");
		nimln(42, "streams.nim");
		if (!!((*s).Closeimpl == 0)) goto LA3;
		nimln(42, "streams.nim");
		(*s).Closeimpl(s);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, close_143686)(tstream143629* s, tstream143629* unused) {
	nimfr("close", "streams.nim")
	nimln(46, "streams.nim");
	(*s).Closeimpl(s);	popFrame();
}
N_NIMCALL(NIM_BOOL, atend_143692)(tstream143629* s) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(51, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, atend_143698)(tstream143629* s, tstream143629* unused) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(56, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(void, setposition_143705)(tstream143629* s, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(60, "streams.nim");
	(*s).Setpositionimpl(s, pos);	popFrame();
}
N_NIMCALL(void, setposition_143711)(tstream143629* s, tstream143629* unused, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(64, "streams.nim");
	(*s).Setpositionimpl(s, pos);	popFrame();
}
N_NIMCALL(NI, getposition_143718)(tstream143629* s) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(68, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NI, getposition_143724)(tstream143629* s, tstream143629* unused) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(72, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NI, readdata_143731)(tstream143629* s, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(76, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(NI, readdata_143739)(tstream143629* s, tstream143629* unused, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(81, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(void, writedata_143748)(tstream143629* s, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(86, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);	popFrame();
}
N_NIMCALL(void, writedata_143755)(tstream143629* s, tstream143629* unused, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(92, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);	popFrame();
}
N_NIMCALL(void, write_143772)(tstream143629* s, NimStringDesc* x) {
	nimfr("write", "streams.nim")
	nimln(107, "streams.nim");
	nimln(107, "streams.nim");
	writedata_143748(s, ((void*) (x->data)), x->Sup.len);	popFrame();
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
N_NIMCALL(void, writeln_143778)(tstream143629* s, NimStringDesc** args, NI argsLen0) {
	NimStringDesc* str_143791;
	NI i_143793;
	nimfr("writeln", "streams.nim")
	str_143791 = 0;
	nimln(1377, "system.nim");
	i_143793 = 0;
	nimln(1378, "system.nim");
	while (1) {
		nimln(1378, "system.nim");
		nimln(1378, "system.nim");
		if (!(i_143793 < argsLen0)) goto LA1;
		nimln(1379, "system.nim");
		if ((NU)(i_143793) >= (NU)(argsLen0)) raiseIndexError();
		str_143791 = args[i_143793];
		nimln(112, "streams.nim");
		write_143772(s, str_143791);		nimln(1380, "system.nim");
		i_143793 = addInt(i_143793, 1);
	} LA1: ;
	nimln(113, "streams.nim");
	write_143772(s, ((NimStringDesc*) &TMP925));	popFrame();
}
N_NIMCALL(NIM_CHAR, readchar_143808)(tstream143629* s) {
	NIM_CHAR result;
	nimfr("readChar", "streams.nim")
	result = 0;
	nimln(123, "streams.nim");
	{
		NI LOC3;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(123, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (&result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(123, "streams.nim");
		result = 0;
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, read_143821)(tstream143629* s, NIM_BOOL* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, readbool_143815)(tstream143629* s) {
	NIM_BOOL result;
	nimfr("readBool", "streams.nim")
	result = 0;
	nimln(127, "streams.nim");
	read_143821(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_143842)(tstream143629* s, NI8* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI8, readint8_143836)(tstream143629* s) {
	NI8 result;
	nimfr("readInt8", "streams.nim")
	result = 0;
	nimln(131, "streams.nim");
	read_143842(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_143863)(tstream143629* s, NI16* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 2);
		if (!!((LOC3 == 2))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI16, readint16_143857)(tstream143629* s) {
	NI16 result;
	nimfr("readInt16", "streams.nim")
	result = 0;
	nimln(135, "streams.nim");
	read_143863(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_143884)(tstream143629* s, NI32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI32, readint32_143878)(tstream143629* s) {
	NI32 result;
	nimfr("readInt32", "streams.nim")
	result = 0;
	nimln(139, "streams.nim");
	read_143884(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_143905)(tstream143629* s, NI64* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI64, readint64_143899)(tstream143629* s) {
	NI64 result;
	nimfr("readInt64", "streams.nim")
	result = 0;
	nimln(143, "streams.nim");
	read_143905(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_143926)(tstream143629* s, NF32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NF32, readfloat32_143920)(tstream143629* s) {
	NF32 result;
	nimfr("readFloat32", "streams.nim")
	result = 0;
	nimln(147, "streams.nim");
	read_143926(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_143947)(tstream143629* s, NF* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_143731(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP926));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NF, readfloat64_143941)(tstream143629* s) {
	NF result;
	nimfr("readFloat64", "streams.nim")
	result = 0;
	nimln(151, "streams.nim");
	read_143947(s, &result);	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, readstr_143962)(tstream143629* s, NI length) {
	NimStringDesc* result;
	NI l;
	nimfr("readStr", "streams.nim")
	result = 0;
	nimln(156, "streams.nim");
	nimln(156, "streams.nim");
	result = mnewString(length);
	nimln(157, "streams.nim");
	if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
	l = readdata_143731(s, ((void*) (&result->data[0])), length);
	nimln(158, "streams.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((l == length))) goto LA3;
		nimln(158, "streams.nim");
		result = setLengthStr(result, l);
	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, readline_143973)(tstream143629* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(167, "streams.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(168, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(169, "streams.nim");
		c = readchar_143808(s);
		nimln(170, "streams.nim");
		{
			nimln(170, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(171, "streams.nim");
			c = readchar_143808(s);
			nimln(172, "streams.nim");
			goto LA1;
		}		goto LA2;
		LA4: ;
		{
			nimln(173, "streams.nim");
			if (!((NU8)(c) == (NU8)(10))) goto LA7;
			nimln(173, "streams.nim");
			goto LA1;
		}		goto LA2;
		LA7: ;
		{
			nimln(174, "streams.nim");
			if (!((NU8)(c) == (NU8)(0))) goto LA10;
			nimln(175, "streams.nim");
			{
				nimln(706, "system.nim");
				nimln(175, "streams.nim");
				if (!(0 < (*line)->Sup.len)) goto LA14;
				nimln(175, "streams.nim");
				goto LA1;
			}			goto LA12;
			LA14: ;
			{
				nimln(176, "streams.nim");
				nimln(176, "streams.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}			LA12: ;
		}		goto LA2;
		LA10: ;
		LA2: ;
		nimln(177, "streams.nim");
		(*line) = addChar((*line), c);
	} LA1: ;
	nimln(178, "streams.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, readline_143986)(tstream143629* s) {
	NimStringDesc* result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(183, "streams.nim");
	result = copyString(((NimStringDesc*) &TMP927));
	nimln(184, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(185, "streams.nim");
		c = readchar_143808(s);
		nimln(186, "streams.nim");
		{
			nimln(186, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(187, "streams.nim");
			c = readchar_143808(s);
			nimln(188, "streams.nim");
			goto LA1;
		}		LA4: ;
		nimln(189, "streams.nim");
		{
			NIM_BOOL LOC8;
			nimln(189, "streams.nim");
			LOC8 = 0;
			nimln(189, "streams.nim");
			LOC8 = ((NU8)(c) == (NU8)(10));
			if (LOC8) goto LA9;
			nimln(189, "streams.nim");
			LOC8 = ((NU8)(c) == (NU8)(0));
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(190, "streams.nim");
			goto LA1;
		}		goto LA6;
		LA10: ;
		{
			nimln(192, "streams.nim");
			result = addChar(result, c);
		}		LA6: ;
	} LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, ssatend_144003)(tstream143629* s_144005) {
	NIM_BOOL result;
	tstringstream143999* s;
	nimfr("ssAtEnd", "streams.nim")
	result = 0;
	nimln(201, "streams.nim");
	if (s_144005) chckObj((*s_144005).Sup.m_type, (&NTI143999));
	s = ((tstringstream143999*) (s_144005));
	nimln(202, "streams.nim");
	nimln(202, "streams.nim");
	nimln(702, "system.nim");
	nimln(202, "streams.nim");
	result = ((*s).Data->Sup.len <= (*s).Pos);
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, sssetposition_144010)(tstream143629* s_144012, NI pos) {
	tstringstream143999* s;
	nimfr("ssSetPosition", "streams.nim")
	nimln(205, "streams.nim");
	if (s_144012) chckObj((*s_144012).Sup.m_type, (&NTI143999));
	s = ((tstringstream143999*) (s_144012));
	nimln(206, "streams.nim");
	nimln(206, "streams.nim");
	(*s).Pos = clamp_144016(pos, 0, ((*s).Data->Sup.len-1));
	popFrame();
}
N_NIMCALL(NI, ssgetposition_144031)(tstream143629* s_144033) {
	NI result;
	tstringstream143999* s;
	nimfr("ssGetPosition", "streams.nim")
	result = 0;
	nimln(209, "streams.nim");
	if (s_144033) chckObj((*s_144033).Sup.m_type, (&NTI143999));
	s = ((tstringstream143999*) (s_144033));
	nimln(210, "streams.nim");
	nimln(210, "streams.nim");
	result = (*s).Pos;
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
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
N_NIMCALL(NI, ssreaddata_144038)(tstream143629* s_144040, void* buffer, NI buflen) {
	NI result;
	tstringstream143999* s;
	NI TMP930;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(213, "streams.nim");
	if (s_144040) chckObj((*s_144040).Sup.m_type, (&NTI143999));
	s = ((tstringstream143999*) (s_144040));
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	TMP930 = subInt((*s).Data->Sup.len, (*s).Pos);
	result = ((buflen <= (NI32)(TMP930)) ? buflen : (NI32)(TMP930));
	nimln(215, "streams.nim");
	{
		nimln(706, "system.nim");
		if (!(0 < result)) goto LA3;
		nimln(216, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(buffer, ((void*) (&(*s).Data->data[(*s).Pos])), result);		nimln(217, "streams.nim");
		(*s).Pos = addInt((*s).Pos, result);
	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(void, sswritedata_144062)(tstream143629* s_144064, void* buffer, NI buflen) {
	tstringstream143999* s;
	nimfr("ssWriteData", "streams.nim")
	nimln(220, "streams.nim");
	if (s_144064) chckObj((*s_144064).Sup.m_type, (&NTI143999));
	s = ((tstringstream143999*) (s_144064));
	nimln(221, "streams.nim");
	{
		NI TMP931;
		nimln(706, "system.nim");
		if (!(0 < buflen)) goto LA3;
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		TMP931 = addInt((*s).Data->Sup.len, buflen);
		(*s).Data = setLengthStr((*s).Data, (NI32)(TMP931));
		nimln(223, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(((void*) (&(*s).Data->data[(*s).Pos])), buffer, buflen);		nimln(224, "streams.nim");
		(*s).Pos = addInt((*s).Pos, buflen);
	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, ssclose_144082)(tstream143629* s_144084) {
	tstringstream143999* s;
	NimStringDesc* LOC1;
	nimfr("ssClose", "streams.nim")
	nimln(227, "streams.nim");
	if (s_144084) chckObj((*s_144084).Sup.m_type, (&NTI143999));
	s = ((tstringstream143999*) (s_144084));
	nimln(228, "streams.nim");
	LOC1 = 0;
	LOC1 = (*s).Data; (*s).Data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
}N_NIMCALL(void, TMP932)(void* p, NI op) {
	tstringstream143999* a;
	a = (tstringstream143999*)p;
	nimGCvisit((void*)(*a).Data, op);
}

N_NIMCALL(tstringstream143999*, newstringstream_144088)(NimStringDesc* s) {
	tstringstream143999* result;
	NimStringDesc* LOC1;
	nimfr("newStringStream", "streams.nim")
	result = 0;
	nimln(232, "streams.nim");
	result = (tstringstream143999*) newObj((&NTI143997), sizeof(tstringstream143999));
	(*result).Sup.Sup.m_type = (&NTI143999);
	nimln(233, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(234, "streams.nim");
	(*result).Pos = 0;
	nimln(235, "streams.nim");
	(*result).Sup.Closeimpl = ssclose_144082;
	nimln(236, "streams.nim");
	(*result).Sup.Atendimpl = ssatend_144003;
	nimln(237, "streams.nim");
	(*result).Sup.Setpositionimpl = sssetposition_144010;
	nimln(238, "streams.nim");
	(*result).Sup.Getpositionimpl = ssgetposition_144031;
	nimln(239, "streams.nim");
	(*result).Sup.Readdataimpl = ssreaddata_144038;
	nimln(240, "streams.nim");
	(*result).Sup.Writedataimpl = sswritedata_144062;
	popFrame();
	return result;
}
N_NIMCALL(void, fsclose_144112)(tstream143629* s) {
	nimfr("fsClose", "streams.nim")
	nimln(248, "streams.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI144109));
		if (!!(((*((tfilestream144109*) (s))).F == NIM_NIL))) goto LA3;
		nimln(249, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI144109));
		fclose((*((tfilestream144109*) (s))).F);		nimln(250, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI144109));
		(*((tfilestream144109*) (s))).F = NIM_NIL;
	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, fsflush_144129)(tstream143629* s) {
	nimfr("fsFlush", "streams.nim")
	nimln(251, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI144109));
	fflush((*((tfilestream144109*) (s))).F);	popFrame();
}
N_NIMCALL(NIM_BOOL, fsatend_144134)(tstream143629* s) {
	NIM_BOOL result;
	nimfr("fsAtEnd", "streams.nim")
	result = 0;
	nimln(252, "streams.nim");
	nimln(252, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI144109));
	result = endoffile_9424((*((tfilestream144109*) (s))).F);
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, fssetposition_144140)(tstream143629* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(253, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI144109));
	setfilepos_9538((*((tfilestream144109*) (s))).F, ((NI64) (pos)));	popFrame();
}
N_NIMCALL(NI, fsgetposition_144146)(tstream143629* s) {
	NI result;
	NI64 LOC1;
	nimfr("fsGetPosition", "streams.nim")
	result = 0;
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI144109));
	LOC1 = 0;
	LOC1 = getfilepos_9542((*((tfilestream144109*) (s))).F);
	result = ((NI)chckRange64(LOC1, (-2147483647 -1), 2147483647));
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI, fsreaddata_144152)(tstream143629* s, void* buffer, NI buflen) {
	NI result;
	nimfr("fsReadData", "streams.nim")
	result = 0;
	nimln(257, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI144109));
	result = readbuffer_9514((*((tfilestream144109*) (s))).F, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(void, fswritedata_144160)(tstream143629* s, void* buffer, NI buflen) {
	nimfr("fsWriteData", "streams.nim")
	nimln(260, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(260, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI144109));
		LOC3 = 0;
		LOC3 = writebuffer_9533((*((tfilestream144109*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(261, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_143607(((NimStringDesc*) &TMP933));
		nimln(261, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}N_NIMCALL(void, TMP934)(void* p, NI op) {
	tfilestream144109* a;
	a = (tfilestream144109*)p;
}

N_NIMCALL(tfilestream144109*, newfilestream_144167)(FILE* f) {
	tfilestream144109* result;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	nimln(265, "streams.nim");
	result = (tfilestream144109*) newObj((&NTI144107), sizeof(tfilestream144109));
	(*result).Sup.Sup.m_type = (&NTI144109);
	nimln(266, "streams.nim");
	(*result).F = f;
	nimln(267, "streams.nim");
	(*result).Sup.Closeimpl = fsclose_144112;
	nimln(268, "streams.nim");
	(*result).Sup.Atendimpl = fsatend_144134;
	nimln(269, "streams.nim");
	(*result).Sup.Setpositionimpl = fssetposition_144140;
	nimln(270, "streams.nim");
	(*result).Sup.Getpositionimpl = fsgetposition_144146;
	nimln(271, "streams.nim");
	(*result).Sup.Readdataimpl = fsreaddata_144152;
	nimln(272, "streams.nim");
	(*result).Sup.Writedataimpl = fswritedata_144160;
	nimln(273, "streams.nim");
	(*result).Sup.Flushimpl = fsflush_144129;
	popFrame();
	return result;
}
N_NIMCALL(tfilestream144109*, newfilestream_144185)(NimStringDesc* filename, NU8 mode) {
	tfilestream144109* result;
	FILE* f;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	f = 0;
	nimln(280, "streams.nim");
	{
		NIM_BOOL LOC3;
		nimln(280, "streams.nim");
		LOC3 = 0;
		LOC3 = open_9203(&f, filename, mode, -1);
		if (!LOC3) goto LA4;
		nimln(280, "streams.nim");
		result = newfilestream_144167(f);
	}	LA4: ;
	popFrame();
	return result;
}N_NIMCALL(void, TMP951)(void* p, NI op) {
	tstream143629* a;
	a = (tstream143629*)p;
}
N_NOINLINE(void, purestreamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

N_NOINLINE(void, purestreamsDatInit)(void) {
static TNimNode* TMP928[7];
static TNimNode* TMP929[2];
static TNimNode TMP923[12];
NTI143629.size = sizeof(tstream143629);
NTI143629.kind = 17;
NTI143629.base = (&NTI1009);
NTI143629.flags = 3;
TMP928[0] = &TMP923[1];
NTI143630.size = sizeof(TY143630);
NTI143630.kind = 25;
NTI143630.base = 0;
NTI143630.flags = 3;
TMP923[1].kind = 1;
TMP923[1].offset = offsetof(tstream143629, Closeimpl);
TMP923[1].typ = (&NTI143630);
TMP923[1].name = "closeImpl";
TMP928[1] = &TMP923[2];
NTI143634.size = sizeof(TY143634);
NTI143634.kind = 25;
NTI143634.base = 0;
NTI143634.flags = 3;
TMP923[2].kind = 1;
TMP923[2].offset = offsetof(tstream143629, Atendimpl);
TMP923[2].typ = (&NTI143634);
TMP923[2].name = "atEndImpl";
TMP928[2] = &TMP923[3];
NTI143638.size = sizeof(TY143638);
NTI143638.kind = 25;
NTI143638.base = 0;
NTI143638.flags = 3;
TMP923[3].kind = 1;
TMP923[3].offset = offsetof(tstream143629, Setpositionimpl);
TMP923[3].typ = (&NTI143638);
TMP923[3].name = "setPositionImpl";
TMP928[3] = &TMP923[4];
NTI143643.size = sizeof(TY143643);
NTI143643.kind = 25;
NTI143643.base = 0;
NTI143643.flags = 3;
TMP923[4].kind = 1;
TMP923[4].offset = offsetof(tstream143629, Getpositionimpl);
TMP923[4].typ = (&NTI143643);
TMP923[4].name = "getPositionImpl";
TMP928[4] = &TMP923[5];
NTI143647.size = sizeof(TY143647);
NTI143647.kind = 25;
NTI143647.base = 0;
NTI143647.flags = 3;
TMP923[5].kind = 1;
TMP923[5].offset = offsetof(tstream143629, Readdataimpl);
TMP923[5].typ = (&NTI143647);
TMP923[5].name = "readDataImpl";
TMP928[5] = &TMP923[6];
NTI143653.size = sizeof(TY143653);
NTI143653.kind = 25;
NTI143653.base = 0;
NTI143653.flags = 3;
TMP923[6].kind = 1;
TMP923[6].offset = offsetof(tstream143629, Writedataimpl);
TMP923[6].typ = (&NTI143653);
TMP923[6].name = "writeDataImpl";
TMP928[6] = &TMP923[7];
NTI143659.size = sizeof(TY143659);
NTI143659.kind = 25;
NTI143659.base = 0;
NTI143659.flags = 3;
TMP923[7].kind = 1;
TMP923[7].offset = offsetof(tstream143629, Flushimpl);
TMP923[7].typ = (&NTI143659);
TMP923[7].name = "flushImpl";
TMP923[0].len = 7; TMP923[0].kind = 2; TMP923[0].sons = &TMP928[0];
NTI143629.node = &TMP923[0];
NTI143999.size = sizeof(tstringstream143999);
NTI143999.kind = 17;
NTI143999.base = (&NTI143629);
NTI143999.flags = 2;
TMP929[0] = &TMP923[9];
TMP923[9].kind = 1;
TMP923[9].offset = offsetof(tstringstream143999, Data);
TMP923[9].typ = (&NTI142);
TMP923[9].name = "data";
TMP929[1] = &TMP923[10];
TMP923[10].kind = 1;
TMP923[10].offset = offsetof(tstringstream143999, Pos);
TMP923[10].typ = (&NTI105);
TMP923[10].name = "pos";
TMP923[8].len = 2; TMP923[8].kind = 2; TMP923[8].sons = &TMP929[0];
NTI143999.node = &TMP923[8];
NTI143997.size = sizeof(tstringstream143999*);
NTI143997.kind = 22;
NTI143997.base = (&NTI143999);
NTI143997.flags = 2;
NTI143997.marker = TMP932;
NTI144109.size = sizeof(tfilestream144109);
NTI144109.kind = 17;
NTI144109.base = (&NTI143629);
NTI144109.flags = 3;
TMP923[11].kind = 1;
TMP923[11].offset = offsetof(tfilestream144109, F);
TMP923[11].typ = (&NTI9004);
TMP923[11].name = "f";
NTI144109.node = &TMP923[11];
NTI144107.size = sizeof(tfilestream144109*);
NTI144107.kind = 22;
NTI144107.base = (&NTI144109);
NTI144107.flags = 2;
NTI144107.marker = TMP934;
NTI143627.size = sizeof(tstream143629*);
NTI143627.kind = 22;
NTI143627.base = (&NTI143629);
NTI143627.flags = 2;
NTI143627.marker = TMP951;
}

