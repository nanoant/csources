/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj140027 Streamobj140027;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj140692 Filestreamobj140692;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ioerror3431 Ioerror3431;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct Tcell46146 Tcell46146;
typedef struct Tcellseq46162 Tcellseq46162;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46158 Tcellset46158;
typedef struct Tpagedesc46154 Tpagedesc46154;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Stringstreamobj140554 Stringstreamobj140554;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY140028) (Streamobj140027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY140032) (Streamobj140027* s);
typedef N_NIMCALL_PTR(void, TY140036) (Streamobj140027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY140041) (Streamobj140027* s);
typedef N_NIMCALL_PTR(NI, TY140045) (Streamobj140027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY140051) (Streamobj140027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY140057) (Streamobj140027* s);
struct  Streamobj140027  {
  TNimObject Sup;
TY140028 closeimpl;
TY140032 atendimpl;
TY140036 setpositionimpl;
TY140041 getpositionimpl;
TY140045 readdataimpl;
TY140051 writedataimpl;
TY140057 flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Filestreamobj140692  {
  Streamobj140027 Sup;
FILE* f;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Systemerror3429  {
  Exception Sup;
};
struct  Ioerror3431  {
  Systemerror3429 Sup;
};
struct  Tcell46146  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46162  {
NI len;
NI cap;
Tcell46146** d;
};
struct  Tcellset46158  {
NI counter;
NI max;
Tpagedesc46154* head;
Tpagedesc46154** data;
};
typedef Tsmallchunk27240* TY28022[512];
typedef Ttrunk27213* Ttrunkbuckets27215[256];
struct  Tintset27217  {
Ttrunkbuckets27215 data;
};
struct  Tmemregion28010  {
NI minlargeobj;
NI maxlargeobj;
TY28022 freesmallchunks;
Tllchunk28004* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27242* freechunkslist;
Tintset27217 chunkstarts;
Tavlnode28008* root;
Tavlnode28008* deleted;
Tavlnode28008* last;
Tavlnode28008* freeavlnodes;
};
struct  Tgcstat48014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48016  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46162 zct;
Tcellseq46162 decstack;
Tcellset46158 cycleroots;
Tcellseq46162 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct  Stringstreamobj140554  {
  Streamobj140027 Sup;
NimStringDesc* data;
NI pos;
};
typedef NI TY27220[8];
struct  Tpagedesc46154  {
Tpagedesc46154* next;
NI key;
TY27220 bits;
};
struct  Tbasechunk27238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27240  {
  Tbasechunk27238 Sup;
Tsmallchunk27240* next;
Tsmallchunk27240* prev;
Tfreecell27230* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28004  {
NI size;
NI acc;
Tllchunk28004* next;
};
struct  Tbigchunk27242  {
  Tbasechunk27238 Sup;
Tbigchunk27242* next;
Tbigchunk27242* prev;
NI align;
NF data;
};
struct  Ttrunk27213  {
Ttrunk27213* next;
NI key;
TY27220 bits;
};
typedef Tavlnode28008* TY28014[2];
struct  Tavlnode28008  {
TY28014 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
N_NIMCALL(void, TMP2685)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(Filestreamobj140692*, newfilestream_140759)(FILE* f);
N_NIMCALL(void, TMP2686)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_140696)(Streamobj140027* s);
N_NIMCALL(NIM_BOOL, fsatend_140720)(Streamobj140027* s);
N_NIMCALL(NIM_BOOL, endoffile_13422)(FILE* f);
N_NIMCALL(void, fssetposition_140727)(Streamobj140027* s, NI pos);
N_NIMCALL(void, setfilepos_13542)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_140734)(Streamobj140027* s);
N_NIMCALL(NI64, getfilepos_13546)(FILE* f);
N_NIMCALL(NI, fsreaddata_140742)(Streamobj140027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_140751)(Streamobj140027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(Ioerror3431*, neweio_140005)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_140714)(Streamobj140027* s);
N_NIMCALL(void, writedata_140199)(Streamobj140027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_140287)(Streamobj140027* s);
N_NIMCALL(NI, readdata_140174)(Streamobj140027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2936)(void* p, NI op);
N_NIMCALL(void, ssclose_140661)(Streamobj140027* s_140663);
N_NIMCALL(NIM_BOOL, ssatend_140565)(Streamobj140027* s_140567);
N_NIMCALL(void, sssetposition_140576)(Streamobj140027* s_140578, NI pos);
N_NIMCALL(NI, clamp_140582)(NI x, NI a, NI b);
N_NIMCALL(NI, ssgetposition_140601)(Streamobj140027* s_140603);
N_NIMCALL(NI, ssreaddata_140612)(Streamobj140027* s_140614, void* buffer, NI buflen);
N_NIMCALL(void, sswritedata_140639)(Streamobj140027* s_140641, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
STRING_LITERAL(TMP2689, "cannot write to stream", 22);
STRING_LITERAL(TMP2896, "", 0);
extern TNimType NTI3411; /* RootObj */
TNimType NTI140027; /* StreamObj */
TNimType NTI140028; /* proc (s: Stream){.gcsafe.} */
TNimType NTI140032; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI140036; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI140041; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI140045; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI140051; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI140057; /* proc (s: Stream){.gcsafe.} */
TNimType NTI140025; /* Stream */
TNimType NTI140692; /* FileStreamObj */
extern TNimType NTI13004; /* File */
TNimType NTI140690; /* FileStream */
extern TNimType NTI78201; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern Tgcheap48016 gch_48044;
TNimType NTI140554; /* StringStreamObj */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI140552; /* StringStream */
N_NIMCALL(void, TMP2685)(void* p, NI op) {
	Streamobj140027* a;
	a = (Streamobj140027*)p;
}

N_NIMCALL(NI, readdata_140174)(Streamobj140027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2686)(void* p, NI op) {
	Filestreamobj140692* a;
	a = (Filestreamobj140692*)p;
}

N_NIMCALL(void, fsclose_140696)(Streamobj140027* s) {
	{
		if (!!(((*((Filestreamobj140692*) (s))).f == NIM_NIL))) goto LA3;
		fclose((*((Filestreamobj140692*) (s))).f);
		(*((Filestreamobj140692*) (s))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_140720)(Streamobj140027* s) {
	NIM_BOOL result;
{	result = 0;
	result = endoffile_13422((*((Filestreamobj140692*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_140727)(Streamobj140027* s, NI pos) {
	setfilepos_13542((*((Filestreamobj140692*) (s))).f, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_140734)(Streamobj140027* s) {
	NI result;
	NI64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_13546((*((Filestreamobj140692*) (s))).f);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_140742)(Streamobj140027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_13515((*((Filestreamobj140692*) (s))).f, buffer, ((NI) (buflen)));
	return result;
}

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46146))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46146* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46146* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(Ioerror3431*, neweio_140005)(NimStringDesc* msg) {
	Ioerror3431* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Ioerror3431*) newObj((&NTI78201), sizeof(Ioerror3431));
	(*result).Sup.Sup.Sup.m_type = (&NTI3431);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_140751)(Streamobj140027* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_13537((*((Filestreamobj140692*) (s))).f, buffer, ((NI) (buflen)));
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_140005(((NimStringDesc*) &TMP2689));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_140714)(Streamobj140027* s) {
	fflush((*((Filestreamobj140692*) (s))).f);
}

N_NIMCALL(Filestreamobj140692*, newfilestream_140759)(FILE* f) {
	Filestreamobj140692* result;
	result = 0;
	result = (Filestreamobj140692*) newObj((&NTI140690), sizeof(Filestreamobj140692));
	(*result).Sup.Sup.m_type = (&NTI140692);
	(*result).f = f;
	(*result).Sup.closeimpl = fsclose_140696;
	(*result).Sup.atendimpl = fsatend_140720;
	(*result).Sup.setpositionimpl = fssetposition_140727;
	(*result).Sup.getpositionimpl = fsgetposition_140734;
	(*result).Sup.readdataimpl = fsreaddata_140742;
	(*result).Sup.writedataimpl = fswritedata_140751;
	(*result).Sup.flushimpl = fsflush_140714;
	return result;
}

N_NIMCALL(Filestreamobj140692*, newfilestream_140774)(NimStringDesc* filename, NU8 mode) {
	Filestreamobj140692* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_140759(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_140085)(Streamobj140027* s) {
	{
		if (!!((*s).closeimpl == 0)) goto LA3;
		(*s).closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_140199)(Streamobj140027* s, void* buffer, NI buflen) {
	(*s).writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_140233)(Streamobj140027* s, NimStringDesc* x) {
	writedata_140199(s, ((void*) (x->data)), (x ? x->Sup.len : 0));
}

N_NIMCALL(NIM_BOOL, atend_140111)(Streamobj140027* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_140287)(Streamobj140027* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_140174(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_140531)(Streamobj140027* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2896));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_140287(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_140287(s);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((NU8)(c) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result = addChar(result, c);
			}
			LA7: ;
		}
	} LA1: ;
	return result;
}
N_NIMCALL(void, TMP2936)(void* p, NI op) {
	Stringstreamobj140554* a;
	a = (Stringstreamobj140554*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_140661)(Streamobj140027* s_140663) {
	Stringstreamobj140554* s;
	NimStringDesc* LOC1;
	s = ((Stringstreamobj140554*) (s_140663));
	LOC1 = 0;
	LOC1 = (*s).data; (*s).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_140565)(Streamobj140027* s_140567) {
	NIM_BOOL result;
	Stringstreamobj140554* s;
{	result = 0;
	s = ((Stringstreamobj140554*) (s_140567));
	result = (((*s).data ? (*s).data->Sup.len : 0) <= (*s).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sssetposition_140576)(Streamobj140027* s_140578, NI pos) {
	Stringstreamobj140554* s;
	s = ((Stringstreamobj140554*) (s_140578));
	(*s).pos = clamp_140582(pos, ((NI) 0), ((*s).data ? ((*s).data->Sup.len-1) : -1));
}

N_NIMCALL(NI, ssgetposition_140601)(Streamobj140027* s_140603) {
	NI result;
	Stringstreamobj140554* s;
{	result = 0;
	s = ((Stringstreamobj140554*) (s_140603));
	result = (*s).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, ssreaddata_140612)(Streamobj140027* s_140614, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj140554* s;
	result = 0;
	s = ((Stringstreamobj140554*) (s_140614));
	result = ((buflen <= (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos)) ? buflen : (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos));
	{
		if (!(((NI) 0) < result)) goto LA3;
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI) (result)));
		(*s).pos += result;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, sswritedata_140639)(Streamobj140027* s_140641, void* buffer, NI buflen) {
	Stringstreamobj140554* s;
{	s = ((Stringstreamobj140554*) (s_140641));
	{
		if (!(buflen <= ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((*s).data ? (*s).data->Sup.len : 0) < (NI)((*s).pos + buflen))) goto LA7;
		(*s).data = setLengthStr((*s).data, ((NI) ((NI)((*s).pos + buflen))));
	}
	LA7: ;
	memcpy(((void*) ((&(*s).data->data[(*s).pos]))), buffer, ((NI) (buflen)));
	(*s).pos += buflen;
	}BeforeRet: ;
}

N_NIMCALL(Stringstreamobj140554*, newstringstream_140671)(NimStringDesc* s) {
	Stringstreamobj140554* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Stringstreamobj140554*) newObj((&NTI140552), sizeof(Stringstreamobj140554));
	(*result).Sup.Sup.m_type = (&NTI140554);
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).pos = ((NI) 0);
	(*result).Sup.closeimpl = ssclose_140661;
	(*result).Sup.atendimpl = ssatend_140565;
	(*result).Sup.setpositionimpl = sssetposition_140576;
	(*result).Sup.getpositionimpl = ssgetposition_140601;
	(*result).Sup.readdataimpl = ssreaddata_140612;
	(*result).Sup.writedataimpl = sswritedata_140639;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP2684[7];
static TNimNode* TMP2935[2];
static TNimNode TMP33[12];
NTI140027.size = sizeof(Streamobj140027);
NTI140027.kind = 17;
NTI140027.base = (&NTI3411);
NTI140027.flags = 1;
TMP2684[0] = &TMP33[1];
NTI140028.size = sizeof(TY140028);
NTI140028.kind = 25;
NTI140028.base = 0;
NTI140028.flags = 3;
TMP33[1].kind = 1;
TMP33[1].offset = offsetof(Streamobj140027, closeimpl);
TMP33[1].typ = (&NTI140028);
TMP33[1].name = "closeImpl";
TMP2684[1] = &TMP33[2];
NTI140032.size = sizeof(TY140032);
NTI140032.kind = 25;
NTI140032.base = 0;
NTI140032.flags = 3;
TMP33[2].kind = 1;
TMP33[2].offset = offsetof(Streamobj140027, atendimpl);
TMP33[2].typ = (&NTI140032);
TMP33[2].name = "atEndImpl";
TMP2684[2] = &TMP33[3];
NTI140036.size = sizeof(TY140036);
NTI140036.kind = 25;
NTI140036.base = 0;
NTI140036.flags = 3;
TMP33[3].kind = 1;
TMP33[3].offset = offsetof(Streamobj140027, setpositionimpl);
TMP33[3].typ = (&NTI140036);
TMP33[3].name = "setPositionImpl";
TMP2684[3] = &TMP33[4];
NTI140041.size = sizeof(TY140041);
NTI140041.kind = 25;
NTI140041.base = 0;
NTI140041.flags = 3;
TMP33[4].kind = 1;
TMP33[4].offset = offsetof(Streamobj140027, getpositionimpl);
TMP33[4].typ = (&NTI140041);
TMP33[4].name = "getPositionImpl";
TMP2684[4] = &TMP33[5];
NTI140045.size = sizeof(TY140045);
NTI140045.kind = 25;
NTI140045.base = 0;
NTI140045.flags = 3;
TMP33[5].kind = 1;
TMP33[5].offset = offsetof(Streamobj140027, readdataimpl);
TMP33[5].typ = (&NTI140045);
TMP33[5].name = "readDataImpl";
TMP2684[5] = &TMP33[6];
NTI140051.size = sizeof(TY140051);
NTI140051.kind = 25;
NTI140051.base = 0;
NTI140051.flags = 3;
TMP33[6].kind = 1;
TMP33[6].offset = offsetof(Streamobj140027, writedataimpl);
TMP33[6].typ = (&NTI140051);
TMP33[6].name = "writeDataImpl";
TMP2684[6] = &TMP33[7];
NTI140057.size = sizeof(TY140057);
NTI140057.kind = 25;
NTI140057.base = 0;
NTI140057.flags = 3;
TMP33[7].kind = 1;
TMP33[7].offset = offsetof(Streamobj140027, flushimpl);
TMP33[7].typ = (&NTI140057);
TMP33[7].name = "flushImpl";
TMP33[0].len = 7; TMP33[0].kind = 2; TMP33[0].sons = &TMP2684[0];
NTI140027.node = &TMP33[0];
NTI140025.size = sizeof(Streamobj140027*);
NTI140025.kind = 22;
NTI140025.base = (&NTI140027);
NTI140025.marker = TMP2685;
NTI140692.size = sizeof(Filestreamobj140692);
NTI140692.kind = 17;
NTI140692.base = (&NTI140027);
NTI140692.flags = 1;
TMP33[8].kind = 1;
TMP33[8].offset = offsetof(Filestreamobj140692, f);
TMP33[8].typ = (&NTI13004);
TMP33[8].name = "f";
NTI140692.node = &TMP33[8];
NTI140690.size = sizeof(Filestreamobj140692*);
NTI140690.kind = 22;
NTI140690.base = (&NTI140692);
NTI140690.marker = TMP2686;
NTI140554.size = sizeof(Stringstreamobj140554);
NTI140554.kind = 17;
NTI140554.base = (&NTI140027);
TMP2935[0] = &TMP33[10];
TMP33[10].kind = 1;
TMP33[10].offset = offsetof(Stringstreamobj140554, data);
TMP33[10].typ = (&NTI149);
TMP33[10].name = "data";
TMP2935[1] = &TMP33[11];
TMP33[11].kind = 1;
TMP33[11].offset = offsetof(Stringstreamobj140554, pos);
TMP33[11].typ = (&NTI108);
TMP33[11].name = "pos";
TMP33[9].len = 2; TMP33[9].kind = 2; TMP33[9].sons = &TMP2935[0];
NTI140554.node = &TMP33[9];
NTI140552.size = sizeof(Stringstreamobj140554*);
NTI140552.kind = 22;
NTI140552.base = (&NTI140554);
NTI140552.marker = TMP2936;
}

