/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
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
typedef struct tstream142629 tstream142629;
typedef struct tstringstream142999 tstringstream142999;
typedef struct tfilestream143109 tfilestream143109;
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
typedef N_NIMCALL_PTR(void, TY142630) (tstream142629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY142634) (tstream142629* s);
typedef N_NIMCALL_PTR(void, TY142638) (tstream142629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY142643) (tstream142629* s);
typedef N_NIMCALL_PTR(NI, TY142647) (tstream142629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY142653) (tstream142629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY142659) (tstream142629* s);
struct tstream142629 {
  TNimObject Sup;
TY142630 Closeimpl;
TY142634 Atendimpl;
TY142638 Setpositionimpl;
TY142643 Getpositionimpl;
TY142647 Readdataimpl;
TY142653 Writedataimpl;
TY142659 Flushimpl;
};
struct tstringstream142999 {
  tstream142629 Sup;
NimStringDesc* Data;
NI Pos;
};
struct tfilestream143109 {
  tstream142629 Sup;
FILE* F;
};
typedef NI TY21418[8];
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
N_NIMCALL(eio1033*, neweio_142607)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, flush_142664)(tstream142629* s);
N_NIMCALL(void, close_142675)(tstream142629* s);
N_NIMCALL(void, close_142686)(tstream142629* s, tstream142629* unused);
N_NIMCALL(NIM_BOOL, atend_142692)(tstream142629* s);
N_NIMCALL(NIM_BOOL, atend_142698)(tstream142629* s, tstream142629* unused);
N_NIMCALL(void, setposition_142705)(tstream142629* s, NI pos);
N_NIMCALL(void, setposition_142711)(tstream142629* s, tstream142629* unused, NI pos);
N_NIMCALL(NI, getposition_142718)(tstream142629* s);
N_NIMCALL(NI, getposition_142724)(tstream142629* s, tstream142629* unused);
N_NIMCALL(NI, readdata_142731)(tstream142629* s, void* buffer, NI buflen);
N_NIMCALL(NI, readdata_142739)(tstream142629* s, tstream142629* unused, void* buffer, NI buflen);
N_NIMCALL(void, writedata_142748)(tstream142629* s, void* buffer, NI buflen);
N_NIMCALL(void, writedata_142755)(tstream142629* s, tstream142629* unused, void* buffer, NI buflen);
N_NIMCALL(void, write_142772)(tstream142629* s, NimStringDesc* x);
N_NIMCALL(void, writeln_142778)(tstream142629* s, NimStringDesc** args, NI argsLen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NIM_CHAR, readchar_142808)(tstream142629* s);
N_NIMCALL(void, read_142821)(tstream142629* s, NIM_BOOL* result);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
N_NIMCALL(NIM_BOOL, readbool_142815)(tstream142629* s);
N_NIMCALL(void, read_142842)(tstream142629* s, NI8* result);
N_NIMCALL(NI8, readint8_142836)(tstream142629* s);
N_NIMCALL(void, read_142863)(tstream142629* s, NI16* result);
N_NIMCALL(NI16, readint16_142857)(tstream142629* s);
N_NIMCALL(void, read_142884)(tstream142629* s, NI32* result);
N_NIMCALL(NI32, readint32_142878)(tstream142629* s);
N_NIMCALL(void, read_142905)(tstream142629* s, NI64* result);
N_NIMCALL(NI64, readint64_142899)(tstream142629* s);
N_NIMCALL(void, read_142926)(tstream142629* s, NF32* result);
N_NIMCALL(NF32, readfloat32_142920)(tstream142629* s);
N_NIMCALL(void, read_142947)(tstream142629* s, NF* result);
N_NIMCALL(NF, readfloat64_142941)(tstream142629* s);
N_NIMCALL(NimStringDesc*, readstr_142962)(tstream142629* s, NI length);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NIM_BOOL, readline_142973)(tstream142629* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, readline_142986)(tstream142629* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, ssatend_143003)(tstream142629* s_143005);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NI, clamp_143016)(NI x, NI a, NI b);
N_NIMCALL(void, sssetposition_143010)(tstream142629* s_143012, NI pos);
N_NIMCALL(NI, ssgetposition_143031)(tstream142629* s_143033);
N_NIMCALL(NI, ssreaddata_143038)(tstream142629* s_143040, void* buffer, NI buflen);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, sswritedata_143062)(tstream142629* s_143064, void* buffer, NI buflen);
N_NIMCALL(void, ssclose_143082)(tstream142629* s_143084);
N_NIMCALL(tstringstream142999*, newstringstream_143088)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP924)(void* p, NI op);
N_NIMCALL(void, fsclose_143112)(tstream142629* s);
N_NIMCALL(void, fsflush_143129)(tstream142629* s);
N_NIMCALL(NIM_BOOL, fsatend_143134)(tstream142629* s);
N_NIMCALL(NIM_BOOL, endoffile_9424)(FILE* f);
N_NIMCALL(void, fssetposition_143140)(tstream142629* s, NI pos);
N_NIMCALL(void, setfilepos_9538)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_143146)(tstream142629* s);
N_NIMCALL(NI64, getfilepos_9542)(FILE* f);
N_NIMCALL(NI, fsreaddata_143153)(tstream142629* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_9514)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_143161)(tstream142629* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_9533)(FILE* f, void* buffer, NI len);
N_NIMCALL(tfilestream143109*, newfilestream_143168)(FILE* f);
N_NIMCALL(void, TMP926)(void* p, NI op);
N_NIMCALL(tfilestream143109*, newfilestream_143186)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, TMP943)(void* p, NI op);
STRING_LITERAL(TMP917, "\012", 1);
STRING_LITERAL(TMP918, "cannot read from stream", 23);
STRING_LITERAL(TMP919, "", 0);
STRING_LITERAL(TMP925, "cannot write to stream", 22);
extern TNimType NTI9401; /* ref EIO */
extern TNimType NTI1033; /* EIO */
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern TNimType NTI1009; /* TObject */
TNimType NTI142629; /* TStream */
TNimType NTI142630; /* proc (PStream) */
TNimType NTI142634; /* proc (PStream): bool */
TNimType NTI142638; /* proc (PStream, int) */
TNimType NTI142643; /* proc (PStream): int */
TNimType NTI142647; /* proc (PStream, pointer, int): int */
TNimType NTI142653; /* proc (PStream, pointer, int) */
TNimType NTI142659; /* proc (PStream) */
TNimType NTI142999; /* TStringStream */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
TNimType NTI142997; /* PStringStream */
TNimType NTI143109; /* TFileStream */
extern TNimType NTI9004; /* TFile */
TNimType NTI143107; /* PFileStream */
TNimType NTI142627; /* PStream */

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
	result = ((tcell38848*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38848))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(eio1033*, neweio_142607)(NimStringDesc* msg) {
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
N_NIMCALL(void, flush_142664)(tstream142629* s) {
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
N_NIMCALL(void, close_142675)(tstream142629* s) {
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
N_NIMCALL(void, close_142686)(tstream142629* s, tstream142629* unused) {
	nimfr("close", "streams.nim")
	nimln(46, "streams.nim");
	(*s).Closeimpl(s);	popFrame();
}
N_NIMCALL(NIM_BOOL, atend_142692)(tstream142629* s) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(51, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, atend_142698)(tstream142629* s, tstream142629* unused) {
	NIM_BOOL result;
	nimfr("atEnd", "streams.nim")
	result = 0;
	nimln(56, "streams.nim");
	result = (*s).Atendimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(void, setposition_142705)(tstream142629* s, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(60, "streams.nim");
	(*s).Setpositionimpl(s, pos);	popFrame();
}
N_NIMCALL(void, setposition_142711)(tstream142629* s, tstream142629* unused, NI pos) {
	nimfr("setPosition", "streams.nim")
	nimln(64, "streams.nim");
	(*s).Setpositionimpl(s, pos);	popFrame();
}
N_NIMCALL(NI, getposition_142718)(tstream142629* s) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(68, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NI, getposition_142724)(tstream142629* s, tstream142629* unused) {
	NI result;
	nimfr("getPosition", "streams.nim")
	result = 0;
	nimln(72, "streams.nim");
	result = (*s).Getpositionimpl(s);
	popFrame();
	return result;
}
N_NIMCALL(NI, readdata_142731)(tstream142629* s, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(76, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(NI, readdata_142739)(tstream142629* s, tstream142629* unused, void* buffer, NI buflen) {
	NI result;
	nimfr("readData", "streams.nim")
	result = 0;
	nimln(81, "streams.nim");
	result = (*s).Readdataimpl(s, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(void, writedata_142748)(tstream142629* s, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(86, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);	popFrame();
}
N_NIMCALL(void, writedata_142755)(tstream142629* s, tstream142629* unused, void* buffer, NI buflen) {
	nimfr("writeData", "streams.nim")
	nimln(92, "streams.nim");
	(*s).Writedataimpl(s, buffer, buflen);	popFrame();
}
N_NIMCALL(void, write_142772)(tstream142629* s, NimStringDesc* x) {
	nimfr("write", "streams.nim")
	nimln(107, "streams.nim");
	nimln(107, "streams.nim");
	writedata_142748(s, ((void*) (x->data)), x->Sup.len);	popFrame();
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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
N_NIMCALL(void, writeln_142778)(tstream142629* s, NimStringDesc** args, NI argsLen0) {
	NimStringDesc* str_142791;
	NI i_142793;
	nimfr("writeln", "streams.nim")
	str_142791 = 0;
	nimln(1377, "system.nim");
	i_142793 = 0;
	nimln(1378, "system.nim");
	while (1) {
		nimln(1378, "system.nim");
		nimln(1378, "system.nim");
		if (!(i_142793 < argsLen0)) goto LA1;
		nimln(1379, "system.nim");
		if ((NU)(i_142793) >= (NU)(argsLen0)) raiseIndexError();
		str_142791 = args[i_142793];
		nimln(112, "streams.nim");
		write_142772(s, str_142791);		nimln(1380, "system.nim");
		i_142793 = addInt(i_142793, 1);
	} LA1: ;
	nimln(113, "streams.nim");
	write_142772(s, ((NimStringDesc*) &TMP917));	popFrame();
}
N_NIMCALL(NIM_CHAR, readchar_142808)(tstream142629* s) {
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
		LOC3 = readdata_142731(s, ((void*) (&result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(123, "streams.nim");
		result = 0;
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, read_142821)(tstream142629* s, NIM_BOOL* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, readbool_142815)(tstream142629* s) {
	NIM_BOOL result;
	nimfr("readBool", "streams.nim")
	result = 0;
	nimln(127, "streams.nim");
	read_142821(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_142842)(tstream142629* s, NI8* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 1);
		if (!!((LOC3 == 1))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI8, readint8_142836)(tstream142629* s) {
	NI8 result;
	nimfr("readInt8", "streams.nim")
	result = 0;
	nimln(131, "streams.nim");
	read_142842(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_142863)(tstream142629* s, NI16* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 2);
		if (!!((LOC3 == 2))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI16, readint16_142857)(tstream142629* s) {
	NI16 result;
	nimfr("readInt16", "streams.nim")
	result = 0;
	nimln(135, "streams.nim");
	read_142863(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_142884)(tstream142629* s, NI32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI32, readint32_142878)(tstream142629* s) {
	NI32 result;
	nimfr("readInt32", "streams.nim")
	result = 0;
	nimln(139, "streams.nim");
	read_142884(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_142905)(tstream142629* s, NI64* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NI64, readint64_142899)(tstream142629* s) {
	NI64 result;
	nimfr("readInt64", "streams.nim")
	result = 0;
	nimln(143, "streams.nim");
	read_142905(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_142926)(tstream142629* s, NF32* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 4);
		if (!!((LOC3 == 4))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NF32, readfloat32_142920)(tstream142629* s) {
	NF32 result;
	nimfr("readFloat32", "streams.nim")
	result = 0;
	nimln(147, "streams.nim");
	read_142926(s, &result);	popFrame();
	return result;
}
N_NIMCALL(void, read_142947)(tstream142629* s, NF* result) {
	nimfr("read", "streams.nim")
	nimln(117, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(117, "streams.nim");
		LOC3 = 0;
		LOC3 = readdata_142731(s, ((void*) (result)), 8);
		if (!!((LOC3 == 8))) goto LA4;
		nimln(118, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP918));
		nimln(118, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}
N_NIMCALL(NF, readfloat64_142941)(tstream142629* s) {
	NF result;
	nimfr("readFloat64", "streams.nim")
	result = 0;
	nimln(151, "streams.nim");
	read_142947(s, &result);	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, readstr_142962)(tstream142629* s, NI length) {
	NimStringDesc* result;
	NI l;
	nimfr("readStr", "streams.nim")
	result = 0;
	nimln(156, "streams.nim");
	nimln(156, "streams.nim");
	result = mnewString(length);
	nimln(157, "streams.nim");
	if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
	l = readdata_142731(s, ((void*) (&result->data[0])), length);
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
N_NIMCALL(NIM_BOOL, readline_142973)(tstream142629* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(167, "streams.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(168, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(169, "streams.nim");
		c = readchar_142808(s);
		nimln(170, "streams.nim");
		{
			nimln(170, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(171, "streams.nim");
			c = readchar_142808(s);
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
N_NIMCALL(NimStringDesc*, readline_142986)(tstream142629* s) {
	NimStringDesc* result;
	nimfr("readLine", "streams.nim")
	result = 0;
	nimln(183, "streams.nim");
	result = copyString(((NimStringDesc*) &TMP919));
	nimln(184, "streams.nim");
	while (1) {
		NIM_CHAR c;
		nimln(185, "streams.nim");
		c = readchar_142808(s);
		nimln(186, "streams.nim");
		{
			nimln(186, "streams.nim");
			if (!((NU8)(c) == (NU8)(13))) goto LA4;
			nimln(187, "streams.nim");
			c = readchar_142808(s);
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
N_NIMCALL(NIM_BOOL, ssatend_143003)(tstream142629* s_143005) {
	NIM_BOOL result;
	tstringstream142999* s;
	nimfr("ssAtEnd", "streams.nim")
	result = 0;
	nimln(201, "streams.nim");
	if (s_143005) chckObj((*s_143005).Sup.m_type, (&NTI142999));
	s = ((tstringstream142999*) (s_143005));
	nimln(202, "streams.nim");
	nimln(202, "streams.nim");
	nimln(702, "system.nim");
	nimln(202, "streams.nim");
	result = ((*s).Data->Sup.len <= (*s).Pos);
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, sssetposition_143010)(tstream142629* s_143012, NI pos) {
	tstringstream142999* s;
	nimfr("ssSetPosition", "streams.nim")
	nimln(205, "streams.nim");
	if (s_143012) chckObj((*s_143012).Sup.m_type, (&NTI142999));
	s = ((tstringstream142999*) (s_143012));
	nimln(206, "streams.nim");
	nimln(206, "streams.nim");
	(*s).Pos = clamp_143016(pos, 0, ((*s).Data->Sup.len-1));
	popFrame();
}
N_NIMCALL(NI, ssgetposition_143031)(tstream142629* s_143033) {
	NI result;
	tstringstream142999* s;
	nimfr("ssGetPosition", "streams.nim")
	result = 0;
	nimln(209, "streams.nim");
	if (s_143033) chckObj((*s_143033).Sup.m_type, (&NTI142999));
	s = ((tstringstream142999*) (s_143033));
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
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NI, ssreaddata_143038)(tstream142629* s_143040, void* buffer, NI buflen) {
	NI result;
	tstringstream142999* s;
	NI TMP922;
	nimfr("ssReadData", "streams.nim")
	result = 0;
	nimln(213, "streams.nim");
	if (s_143040) chckObj((*s_143040).Sup.m_type, (&NTI142999));
	s = ((tstringstream142999*) (s_143040));
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	nimln(214, "streams.nim");
	TMP922 = subInt((*s).Data->Sup.len, (*s).Pos);
	result = ((buflen <= (NI64)(TMP922)) ? buflen : (NI64)(TMP922));
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
N_NIMCALL(void, sswritedata_143062)(tstream142629* s_143064, void* buffer, NI buflen) {
	tstringstream142999* s;
	nimfr("ssWriteData", "streams.nim")
	nimln(220, "streams.nim");
	if (s_143064) chckObj((*s_143064).Sup.m_type, (&NTI142999));
	s = ((tstringstream142999*) (s_143064));
	nimln(221, "streams.nim");
	{
		NI TMP923;
		nimln(706, "system.nim");
		if (!(0 < buflen)) goto LA3;
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		nimln(222, "streams.nim");
		TMP923 = addInt((*s).Data->Sup.len, buflen);
		(*s).Data = setLengthStr((*s).Data, (NI64)(TMP923));
		nimln(223, "streams.nim");
		if ((NU)((*s).Pos) > (NU)((*s).Data->Sup.len)) raiseIndexError();
		memcpy(((void*) (&(*s).Data->data[(*s).Pos])), buffer, buflen);		nimln(224, "streams.nim");
		(*s).Pos = addInt((*s).Pos, buflen);
	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, ssclose_143082)(tstream142629* s_143084) {
	tstringstream142999* s;
	NimStringDesc* LOC1;
	nimfr("ssClose", "streams.nim")
	nimln(227, "streams.nim");
	if (s_143084) chckObj((*s_143084).Sup.m_type, (&NTI142999));
	s = ((tstringstream142999*) (s_143084));
	nimln(228, "streams.nim");
	LOC1 = 0;
	LOC1 = (*s).Data; (*s).Data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
}N_NIMCALL(void, TMP924)(void* p, NI op) {
	tstringstream142999* a;
	a = (tstringstream142999*)p;
	nimGCvisit((void*)(*a).Data, op);
}

N_NIMCALL(tstringstream142999*, newstringstream_143088)(NimStringDesc* s) {
	tstringstream142999* result;
	NimStringDesc* LOC1;
	nimfr("newStringStream", "streams.nim")
	result = 0;
	nimln(232, "streams.nim");
	result = (tstringstream142999*) newObj((&NTI142997), sizeof(tstringstream142999));
	(*result).Sup.Sup.m_type = (&NTI142999);
	nimln(233, "streams.nim");
	LOC1 = 0;
	LOC1 = (*result).Data; (*result).Data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(234, "streams.nim");
	(*result).Pos = 0;
	nimln(235, "streams.nim");
	(*result).Sup.Closeimpl = ssclose_143082;
	nimln(236, "streams.nim");
	(*result).Sup.Atendimpl = ssatend_143003;
	nimln(237, "streams.nim");
	(*result).Sup.Setpositionimpl = sssetposition_143010;
	nimln(238, "streams.nim");
	(*result).Sup.Getpositionimpl = ssgetposition_143031;
	nimln(239, "streams.nim");
	(*result).Sup.Readdataimpl = ssreaddata_143038;
	nimln(240, "streams.nim");
	(*result).Sup.Writedataimpl = sswritedata_143062;
	popFrame();
	return result;
}
N_NIMCALL(void, fsclose_143112)(tstream142629* s) {
	nimfr("fsClose", "streams.nim")
	nimln(248, "streams.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI143109));
		if (!!(((*((tfilestream143109*) (s))).F == NIM_NIL))) goto LA3;
		nimln(249, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI143109));
		fclose((*((tfilestream143109*) (s))).F);		nimln(250, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI143109));
		(*((tfilestream143109*) (s))).F = NIM_NIL;
	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, fsflush_143129)(tstream142629* s) {
	nimfr("fsFlush", "streams.nim")
	nimln(251, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI143109));
	fflush((*((tfilestream143109*) (s))).F);	popFrame();
}
N_NIMCALL(NIM_BOOL, fsatend_143134)(tstream142629* s) {
	NIM_BOOL result;
	nimfr("fsAtEnd", "streams.nim")
	result = 0;
	nimln(252, "streams.nim");
	nimln(252, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI143109));
	result = endoffile_9424((*((tfilestream143109*) (s))).F);
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, fssetposition_143140)(tstream142629* s, NI pos) {
	nimfr("fsSetPosition", "streams.nim")
	nimln(253, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI143109));
	setfilepos_9538((*((tfilestream143109*) (s))).F, ((NI64) (pos)));	popFrame();
}
N_NIMCALL(NI, fsgetposition_143146)(tstream142629* s) {
	NI result;
	NI64 LOC1;
	nimfr("fsGetPosition", "streams.nim")
	result = 0;
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	nimln(254, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI143109));
	LOC1 = 0;
	LOC1 = getfilepos_9542((*((tfilestream143109*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI, fsreaddata_143153)(tstream142629* s, void* buffer, NI buflen) {
	NI result;
	nimfr("fsReadData", "streams.nim")
	result = 0;
	nimln(257, "streams.nim");
	if (s) chckObj((*s).Sup.m_type, (&NTI143109));
	result = readbuffer_9514((*((tfilestream143109*) (s))).F, buffer, buflen);
	popFrame();
	return result;
}
N_NIMCALL(void, fswritedata_143161)(tstream142629* s, void* buffer, NI buflen) {
	nimfr("fsWriteData", "streams.nim")
	nimln(260, "streams.nim");
	{
		NI LOC3;
		eio1033* LOC6;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(260, "streams.nim");
		if (s) chckObj((*s).Sup.m_type, (&NTI143109));
		LOC3 = 0;
		LOC3 = writebuffer_9533((*((tfilestream143109*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		nimln(261, "streams.nim");
		LOC6 = 0;
		LOC6 = neweio_142607(((NimStringDesc*) &TMP925));
		nimln(261, "streams.nim");
		raiseException((E_Base*)LOC6, "EIO");
	}	LA4: ;
	popFrame();
}N_NIMCALL(void, TMP926)(void* p, NI op) {
	tfilestream143109* a;
	a = (tfilestream143109*)p;
}

N_NIMCALL(tfilestream143109*, newfilestream_143168)(FILE* f) {
	tfilestream143109* result;
	nimfr("newFileStream", "streams.nim")
	result = 0;
	nimln(265, "streams.nim");
	result = (tfilestream143109*) newObj((&NTI143107), sizeof(tfilestream143109));
	(*result).Sup.Sup.m_type = (&NTI143109);
	nimln(266, "streams.nim");
	(*result).F = f;
	nimln(267, "streams.nim");
	(*result).Sup.Closeimpl = fsclose_143112;
	nimln(268, "streams.nim");
	(*result).Sup.Atendimpl = fsatend_143134;
	nimln(269, "streams.nim");
	(*result).Sup.Setpositionimpl = fssetposition_143140;
	nimln(270, "streams.nim");
	(*result).Sup.Getpositionimpl = fsgetposition_143146;
	nimln(271, "streams.nim");
	(*result).Sup.Readdataimpl = fsreaddata_143153;
	nimln(272, "streams.nim");
	(*result).Sup.Writedataimpl = fswritedata_143161;
	nimln(273, "streams.nim");
	(*result).Sup.Flushimpl = fsflush_143129;
	popFrame();
	return result;
}
N_NIMCALL(tfilestream143109*, newfilestream_143186)(NimStringDesc* filename, NU8 mode) {
	tfilestream143109* result;
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
		result = newfilestream_143168(f);
	}	LA4: ;
	popFrame();
	return result;
}N_NIMCALL(void, TMP943)(void* p, NI op) {
	tstream142629* a;
	a = (tstream142629*)p;
}
N_NOINLINE(void, purestreamsInit)(void) {
	nimfr("streams", "streams.nim")
	popFrame();
}

N_NOINLINE(void, purestreamsDatInit)(void) {
static TNimNode* TMP920[7];
static TNimNode* TMP921[2];
static TNimNode TMP915[12];
NTI142629.size = sizeof(tstream142629);
NTI142629.kind = 17;
NTI142629.base = (&NTI1009);
NTI142629.flags = 3;
TMP920[0] = &TMP915[1];
NTI142630.size = sizeof(TY142630);
NTI142630.kind = 25;
NTI142630.base = 0;
NTI142630.flags = 3;
TMP915[1].kind = 1;
TMP915[1].offset = offsetof(tstream142629, Closeimpl);
TMP915[1].typ = (&NTI142630);
TMP915[1].name = "closeImpl";
TMP920[1] = &TMP915[2];
NTI142634.size = sizeof(TY142634);
NTI142634.kind = 25;
NTI142634.base = 0;
NTI142634.flags = 3;
TMP915[2].kind = 1;
TMP915[2].offset = offsetof(tstream142629, Atendimpl);
TMP915[2].typ = (&NTI142634);
TMP915[2].name = "atEndImpl";
TMP920[2] = &TMP915[3];
NTI142638.size = sizeof(TY142638);
NTI142638.kind = 25;
NTI142638.base = 0;
NTI142638.flags = 3;
TMP915[3].kind = 1;
TMP915[3].offset = offsetof(tstream142629, Setpositionimpl);
TMP915[3].typ = (&NTI142638);
TMP915[3].name = "setPositionImpl";
TMP920[3] = &TMP915[4];
NTI142643.size = sizeof(TY142643);
NTI142643.kind = 25;
NTI142643.base = 0;
NTI142643.flags = 3;
TMP915[4].kind = 1;
TMP915[4].offset = offsetof(tstream142629, Getpositionimpl);
TMP915[4].typ = (&NTI142643);
TMP915[4].name = "getPositionImpl";
TMP920[4] = &TMP915[5];
NTI142647.size = sizeof(TY142647);
NTI142647.kind = 25;
NTI142647.base = 0;
NTI142647.flags = 3;
TMP915[5].kind = 1;
TMP915[5].offset = offsetof(tstream142629, Readdataimpl);
TMP915[5].typ = (&NTI142647);
TMP915[5].name = "readDataImpl";
TMP920[5] = &TMP915[6];
NTI142653.size = sizeof(TY142653);
NTI142653.kind = 25;
NTI142653.base = 0;
NTI142653.flags = 3;
TMP915[6].kind = 1;
TMP915[6].offset = offsetof(tstream142629, Writedataimpl);
TMP915[6].typ = (&NTI142653);
TMP915[6].name = "writeDataImpl";
TMP920[6] = &TMP915[7];
NTI142659.size = sizeof(TY142659);
NTI142659.kind = 25;
NTI142659.base = 0;
NTI142659.flags = 3;
TMP915[7].kind = 1;
TMP915[7].offset = offsetof(tstream142629, Flushimpl);
TMP915[7].typ = (&NTI142659);
TMP915[7].name = "flushImpl";
TMP915[0].len = 7; TMP915[0].kind = 2; TMP915[0].sons = &TMP920[0];
NTI142629.node = &TMP915[0];
NTI142999.size = sizeof(tstringstream142999);
NTI142999.kind = 17;
NTI142999.base = (&NTI142629);
NTI142999.flags = 2;
TMP921[0] = &TMP915[9];
TMP915[9].kind = 1;
TMP915[9].offset = offsetof(tstringstream142999, Data);
TMP915[9].typ = (&NTI142);
TMP915[9].name = "data";
TMP921[1] = &TMP915[10];
TMP915[10].kind = 1;
TMP915[10].offset = offsetof(tstringstream142999, Pos);
TMP915[10].typ = (&NTI105);
TMP915[10].name = "pos";
TMP915[8].len = 2; TMP915[8].kind = 2; TMP915[8].sons = &TMP921[0];
NTI142999.node = &TMP915[8];
NTI142997.size = sizeof(tstringstream142999*);
NTI142997.kind = 22;
NTI142997.base = (&NTI142999);
NTI142997.flags = 2;
NTI142997.marker = TMP924;
NTI143109.size = sizeof(tfilestream143109);
NTI143109.kind = 17;
NTI143109.base = (&NTI142629);
NTI143109.flags = 3;
TMP915[11].kind = 1;
TMP915[11].offset = offsetof(tfilestream143109, F);
TMP915[11].typ = (&NTI9004);
TMP915[11].name = "f";
NTI143109.node = &TMP915[11];
NTI143107.size = sizeof(tfilestream143109*);
NTI143107.kind = 22;
NTI143107.base = (&NTI143109);
NTI143107.flags = 2;
NTI143107.marker = TMP926;
NTI142627.size = sizeof(tstream142629*);
NTI142627.kind = 22;
NTI142627.base = (&NTI142629);
NTI142627.flags = 2;
NTI142627.marker = TMP943;
}

