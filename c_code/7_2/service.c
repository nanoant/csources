/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell44735 tcell44735;
typedef struct TNimType TNimType;
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
typedef struct optparser206011 optparser206011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct tsocketimpl181607 tsocketimpl181607;
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
struct  optparser206011  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY257532[1];
typedef N_NIMCALL_PTR(void, TY604261) (void);
typedef NIM_CHAR TY181632[4001];
struct  tsocketimpl181607  {
int Fd;
NIM_BOOL Isbuffered;
union {
struct {TY181632 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NIM_BOOL Nonblocking;
};
typedef NI TY26220[8];
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
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void, initoptparser_206030)(NimStringDesc* cmdline, optparser206011* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(optparser206011* p);
N_NIMCALL(void, processswitch_209148)(NU8 pass, optparser206011* p);
N_NIMCALL(NIM_BOOL, processargument_209161)(NU8 pass, optparser206011* p, NI* argscount);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, rawmessage_196643)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, getconfigvar_168348)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_12686)(FILE* f);
N_NIMCALL(void, processcmdline_604209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(tsocketimpl181607*, socket_182604)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(void, raiseoserror_113609)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_113641)(void);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_183774)(tsocketimpl181607* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, listen_183609)(tsocketimpl181607* socket, int backlog);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
N_NIMCALL(void, accept_185401)(tsocketimpl181607* server, tsocketimpl181607** client);
N_NIMCALL(void, readline_190447)(tsocketimpl181607* socket, NimStringDesc** line, NI timeout);
N_NIMCALL(void, send_192008)(tsocketimpl181607* socket, NimStringDesc* data);
N_NIMCALL(void, close_185478)(tsocketimpl181607* socket);
STRING_LITERAL(TMP987, "", 0);
STRING_LITERAL(TMP1876, "run", 3);
STRING_LITERAL(TMP4828, "server.type", 11);
STRING_LITERAL(TMP4829, "stdin", 5);
STRING_LITERAL(TMP4830, "tcp", 3);
STRING_LITERAL(TMP4832, "quit", 4);
STRING_LITERAL(TMP4836, "server.port", 11);
STRING_LITERAL(TMP4837, "server.address", 14);
STRING_LITERAL(TMP4845, "\015\012", 2);
STRING_LITERAL(TMP4846, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_604204;
extern tgcheap46816 gch_46844;
NimStringDesc* lastcaascmd_604205;
extern TNimType NTI206011; /* OptParser */
extern NU32 gglobaloptions_168118;
extern NimStringDesc* arguments_209144;
extern NimStringDesc* command_168237;
extern NI32 gdirtybufferidx_168134;
extern NI32 gdirtyoriginalidx_168135;
extern NI gerrorcounter_195303;
extern tsocketimpl181607* invalidsocket_181696;
extern tsocketimpl181607* stdoutsocket_195315;
extern TNimType NTI181609; /* Socket */

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, processcmdline_604209)(NU8 pass, NimStringDesc* cmd) {
	optparser206011 p;
	NI argscount;
	memset((void*)&p, 0, sizeof(p));
	p.Sup.m_type = (&NTI206011);
	chckNil((void*)&p);
	memset((void*)&p, 0, sizeof(p));
	p.Sup.m_type = (&NTI206011);
	initoptparser_206030(cmd, &p);
	argscount = 0;
	{
		while (1) {
			nponext(&p);
			switch (p.Kind) {
			case ((NU8) 0):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				processswitch_209148(pass, &p);
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC8;
					LOC8 = 0;
					LOC8 = processargument_209161(pass, &p, &argscount);
					if (!LOC8) goto LA9;
					goto LA1;
				}
				LA9: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((NU8) 1))) goto LA13;
		{
			NIM_BOOL LOC17;
			NIM_BOOL LOC18;
			NimStringDesc* LOC21;
			TY257532 LOC24;
			LOC17 = 0;
			LOC18 = 0;
			LOC18 = !(((gglobaloptions_168118 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC18)) goto LA19;
			LOC18 = !(((arguments_209144) && (arguments_209144)->Sup.len == 0));
			LA19: ;
			LOC17 = LOC18;
			if (!(LOC17)) goto LA20;
			LOC21 = 0;
			LOC21 = nsuNormalize(command_168237);
			LOC17 = !(eqStrings(LOC21, ((NimStringDesc*) &TMP1876)));
			LA20: ;
			if (!LOC17) goto LA22;
			memset((void*)LOC24, 0, sizeof(LOC24));
			rawmessage_196643(((NU16) 57), LOC24, 0);
		}
		LA22: ;
	}
	LA13: ;
}

N_NIMCALL(void, serve_604259)(TY604261 action) {
	NimStringDesc* typ;
	typ = getconfigvar_168348(((NimStringDesc*) &TMP4828));
	if (eqStrings(typ, ((NimStringDesc*) &TMP4829))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP4830))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP987))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_12686(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP4832))) goto LA10;
					exit(0);
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_604204; curcaascmd_604204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_604209(((NU8) 1), line);
				action();
				gdirtybufferidx_168134 = ((NI32) 0);
				gdirtyoriginalidx_168135 = ((NI32) 0);
				gerrorcounter_195303 = 0;
				printf("%s\012", (((NimStringDesc*) &TMP987))->data);
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		tsocketimpl181607* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC25;
		NimStringDesc* inp;
		server = socket_182604(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		{
			NI32 LOC18;
			if (!(server == invalidsocket_181696)) goto LA16;
			LOC18 = 0;
			LOC18 = oslasterror_113641();
			raiseoserror_113609(LOC18);
		}
		LA16: ;
		p = getconfigvar_168348(((NimStringDesc*) &TMP4836));
		{
			NI LOC23;
			if (!(0 < p->Sup.len)) goto LA21;
			LOC23 = 0;
			LOC23 = nsuParseInt(p);
			port = ((NU16) (LOC23));
		}
		goto LA19;
		LA21: ;
		{
			port = ((NU16) 6000);
		}
		LA19: ;
		LOC25 = 0;
		LOC25 = getconfigvar_168348(((NimStringDesc*) &TMP4837));
		bindaddr_183774(server, port, LOC25);
		inp = copyString(((NimStringDesc*) &TMP987));
		listen_183609(server, SOMAXCONN);
		if (stdoutsocket_195315) nimGCunrefNoCycle(stdoutsocket_195315);
		stdoutsocket_195315 = (tsocketimpl181607*) newObjRC1((&NTI181609), sizeof(tsocketimpl181607));
		{
			while (1) {
				NimStringDesc* LOC28;
				accept_185401(server, &stdoutsocket_195315);
				readline_190447(stdoutsocket_195315, &inp, -1);
				LOC28 = 0;
				LOC28 = curcaascmd_604204; curcaascmd_604204 = copyStringRC1(inp);
				if (LOC28) nimGCunrefNoCycle(LOC28);
				processcmdline_604209(((NU8) 1), inp);
				action();
				gdirtybufferidx_168134 = ((NI32) 0);
				gdirtyoriginalidx_168135 = ((NI32) 0);
				gerrorcounter_195303 = 0;
				send_192008(stdoutsocket_195315, ((NimStringDesc*) &TMP4845));
				close_185478(stdoutsocket_195315);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", (((NimStringDesc*) &TMP4846))->data, (typ)->data);
		exit(1);
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_604204; curcaascmd_604204 = copyStringRC1(((NimStringDesc*) &TMP987));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_604205; lastcaascmd_604205 = copyStringRC1(((NimStringDesc*) &TMP987));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_serviceDatInit)(void) {
}

