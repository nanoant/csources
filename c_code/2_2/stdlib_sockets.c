/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/socket.h>

#include <netinet/in.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <arpa/inet.h>

#include <sys/select.h>

#include <unistd.h>
typedef struct tsocketimpl183607 tsocketimpl183607;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct valueerror3249 valueerror3249;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct oserror3233 oserror3233;
typedef struct systemerror3229 systemerror3229;
typedef struct timeouterror183629 timeouterror183629;
typedef struct TY192015 TY192015;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR TY183632[4001];
struct  tsocketimpl183607  {
int Fd;
NIM_BOOL Isbuffered;
union {
struct {TY183632 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NIM_BOOL Nonblocking;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  valueerror3249  {
  Exception Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  systemerror3229  {
  Exception Sup;
};
struct  oserror3233  {
  systemerror3229 Sup;
NI32 Errorcode;
};
struct  timeouterror183629  {
  Exception Sup;
};
typedef tsocketimpl183607* TY192017[1];
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
typedef NIM_CHAR TY104554[256];
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY192015 {
  TGenericSeq Sup;
  tsocketimpl183607* data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI, send_193464)(tsocketimpl183607* socket, void* data, NI size);
N_NIMCALL(void, raiseoserror_114609)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114641)(void);
N_NIMCALL(tsocketimpl183607*, newtsocket_184004)(int fd, NIM_BOOL isbuff);
N_NIMCALL(void, TMP4837)(void* p, NI op);
N_NIMCALL(int, toint_184427)(NU8 domain);
N_NIMCALL(int, toint_184434)(NU8 typ);
N_NIMCALL(int, toint_184441)(NU8 p);
N_NIMCALL(NI16, htons_184417)(NI16 x);
N_NIMCALL(NI16, ntohs_184207)(NI16 x);
N_NIMCALL(NI32, htonl_184407)(NI32 x);
N_NIMCALL(NI32, ntohl_184070)(NI32 x);
N_NIMCALL(NimStringDesc*, HEX24_6201)(NU64 x);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_186248)(tsocketimpl183607* server, tsocketimpl183607** client, NimStringDesc** address);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_191617)(tsocketimpl183607* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4841)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_191101)(TY192015** readfds, NI timeout);
N_NIMCALL(NI, checkbuffer_190807)(TY192015** readfds);
N_NIMCALL(NIM_BOOL, hasdatabuffered_190728)(tsocketimpl183607* s);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_79404, TNimType* mt);
N_NIMCALL(struct timeval, timevalfrommilliseconds_190401)(NI timeout);
N_NIMCALL(void, createfdset_190416)(fd_set* fd, TY192015* s, NI* m);
N_NIMCALL(void, prunesocketset_190645)(TY192015** s, fd_set* fd);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
static N_INLINE(void, HEX2BHEX3D_101492)(NF* x_101498, NF y_101501);
N_NIMCALL(NI, recv_191302)(tsocketimpl183607* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_191160)(tsocketimpl183607* socket, NI32 flags);
N_NIMCALL(void, raisesocketerror_185001)(tsocketimpl183607* socket, NI err, NIM_BOOL async);
N_NIMCALL(NI, peekchar_192138)(tsocketimpl183607* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP1974, "This function cannot be used on non-blocking sockets.", 53);
STRING_LITERAL(TMP1975, "Could not send all data.", 24);
TNimNode* NimDT_183607_isbuffered[3];
STRING_LITERAL(TMP4840, "", 0);
STRING_LITERAL(TMP4842, "Call to \'", 9);
STRING_LITERAL(TMP4843, "\' timed out.", 12);
STRING_LITERAL(TMP4845, "readLine", 8);
STRING_LITERAL(TMP4846, "\015\012", 2);
tsocketimpl183607* invalidsocket_183696;
extern tgcheap46816 gch_46844;
int osinvalidsocket_183805;
extern TNimType NTI21201; /* ref ValueError */
extern TNimType NTI3249; /* ValueError */
extern TNimType NTI114612; /* ref OSError */
extern TNimType NTI3233; /* OSError */
TNimType NTI183607; /* TSocketImpl */
extern TNimType NTI5611; /* cint */
extern TNimType NTI138; /* bool */
extern TNimType NTI147; /* char */
TNimType NTI183632; /* array[0..4000, char] */
extern TNimType NTI108; /* int */
TNimType NTI183609; /* Socket */
extern TNimType NTI3227; /* Exception */
TNimType NTI183629; /* TimeoutError */
TNimType NTI191879; /* ref TimeoutError */
extern TNimType NTI192015; /* seq[Socket] */

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
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

N_NIMCALL(NI, send_193464)(tsocketimpl183607* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).Fd, data, size, MSG_NOSIGNAL);
	return result;
}

N_NIMCALL(void, send_194008)(tsocketimpl183607* socket, NimStringDesc* data) {
	NI sent;
	{
		valueerror3249* e_194014;
		NimStringDesc* LOC5;
		if (!(*socket).Nonblocking) goto LA3;
		e_194014 = 0;
		e_194014 = (valueerror3249*) newObj((&NTI21201), sizeof(valueerror3249));
		(*e_194014).Sup.Sup.m_type = (&NTI3249);
		LOC5 = 0;
		LOC5 = (*e_194014).Sup.message; (*e_194014).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1974));
		if (LOC5) nimGCunrefNoCycle(LOC5);
		raiseException((Exception*)e_194014, "ValueError");
	}
	LA3: ;
	sent = send_193464(socket, ((void*) (data->data)), data->Sup.len);
	{
		NI32 LOC10;
		if (!(sent < 0)) goto LA8;
		LOC10 = 0;
		LOC10 = oslasterror_114641();
		raiseoserror_114609(LOC10);
	}
	LA8: ;
	{
		oserror3233* e_194203;
		NimStringDesc* LOC15;
		if (!!((sent == data->Sup.len))) goto LA13;
		e_194203 = 0;
		e_194203 = (oserror3233*) newObj((&NTI114612), sizeof(oserror3233));
		(*e_194203).Sup.Sup.Sup.m_type = (&NTI3233);
		LOC15 = 0;
		LOC15 = (*e_194203).Sup.Sup.message; (*e_194203).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1975));
		if (LOC15) nimGCunrefNoCycle(LOC15);
		raiseException((Exception*)e_194203, "OSError");
	}
	LA13: ;
}
N_NIMCALL(void, TMP4837)(void* p, NI op) {
	tsocketimpl183607* a;
	NI LOC1;
	a = (tsocketimpl183607*)p;
	switch ((*a).Isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(tsocketimpl183607*, newtsocket_184004)(int fd, NIM_BOOL isbuff) {
	tsocketimpl183607* result;
	result = 0;
	{
		if (!(fd == osinvalidsocket_183805)) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	result = (tsocketimpl183607*) newObj((&NTI183609), sizeof(tsocketimpl183607));
	(*result).Fd = fd;
	(*result).Isbuffered = isbuff;
	{
		if (!isbuff) goto LA7;
		(*result).isbufferedU.S1.Currpos = 0;
	}
	LA7: ;
	(*result).Nonblocking = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(int, toint_184427)(NU8 domain) {
	int result;
	result = 0;
	switch (domain) {
	case ((NU8) 0):
	{
		result = AF_UNIX;
	}
	break;
	case ((NU8) 2):
	{
		result = AF_INET;
	}
	break;
	case ((NU8) 23):
	{
		result = AF_INET6;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_184434)(NU8 typ) {
	int result;
	result = 0;
	switch (typ) {
	case ((NU8) 1):
	{
		result = SOCK_STREAM;
	}
	break;
	case ((NU8) 2):
	{
		result = SOCK_DGRAM;
	}
	break;
	case ((NU8) 5):
	{
		result = SOCK_SEQPACKET;
	}
	break;
	case ((NU8) 3):
	{
		result = SOCK_RAW;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(int, toint_184441)(NU8 p) {
	int result;
	result = 0;
	switch (p) {
	case ((NU8) 6):
	{
		result = IPPROTO_TCP;
	}
	break;
	case ((NU8) 17):
	{
		result = IPPROTO_UDP;
	}
	break;
	case ((NU8) 18):
	{
		result = IPPROTO_IP;
	}
	break;
	case ((NU8) 19):
	{
		result = IPPROTO_IPV6;
	}
	break;
	case ((NU8) 20):
	{
		result = IPPROTO_RAW;
	}
	break;
	case ((NU8) 21):
	{
		result = IPPROTO_ICMP;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(tsocketimpl183607*, socket_184604)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered) {
	tsocketimpl183607* result;
	int LOC1;
	int LOC2;
	int LOC3;
	int LOC4;
	result = 0;
	LOC1 = 0;
	LOC1 = toint_184427(domain);
	LOC2 = 0;
	LOC2 = toint_184434(typ);
	LOC3 = 0;
	LOC3 = toint_184441(protocol);
	LOC4 = 0;
	LOC4 = socket(LOC1, LOC2, LOC3);
	result = newtsocket_184004(LOC4, buffered);
	return result;
}

N_NIMCALL(NI16, ntohs_184207)(NI16 x) {
	NI16 result;
	result = 0;
	result = (NI16)((NI16)((NU16)(x) >> (NU16)(((NI16) 8))) | (NI16)((NU16)(x) << (NU16)(((NI16) 8))));
	return result;
}

N_NIMCALL(NI16, htons_184417)(NI16 x) {
	NI16 result;
	result = 0;
	result = ntohs_184207(x);
	return result;
}

N_NIMCALL(NI32, ntohl_184070)(NI32 x) {
	NI32 result;
	result = 0;
	result = (NI32)((NI32)((NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 24))) | (NI32)((NI32)((NU32)(x) >> (NU32)(((NI32) 8))) & ((NI32) 65280))) | (NI32)((NI32)((NU32)(x) << (NU32)(((NI32) 8))) & ((NI32) 16711680))) | (NI32)((NU32)(x) << (NU32)(((NI32) 24))));
	return result;
}

N_NIMCALL(NI32, htonl_184407)(NI32 x) {
	NI32 result;
	result = 0;
	result = ntohl_184070(x);
	return result;
}

N_NIMCALL(void, bindaddr_185774)(tsocketimpl183607* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)&name, 0, sizeof(name));
		name.sin_family = AF_INET;
		name.sin_port = htons_184417(((NI16) (port)));
		name.sin_addr.s_addr = htonl_184407(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bind((*socket).Fd, ((struct sockaddr*) (&name)), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_114641();
			raiseoserror_114609(LOC10);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo hints;
		struct addrinfo* ailist;
		memset((void*)&hints, 0, sizeof(hints));
		ailist = NIM_NIL;
		hints.ai_family = toint_184427(((NU8) 2));
		hints.ai_socktype = toint_184434(((NU8) 1));
		hints.ai_protocol = toint_184441(((NU8) 6));
		{
			int gairesult_185808;
			NimStringDesc* LOC13;
			LOC13 = 0;
			LOC13 = HEX24_6201(port);
			gairesult_185808 = getaddrinfo(address->data, LOC13->data, &hints, &ailist);
			{
				oserror3233* e_186002;
				NCSTRING LOC18;
				if (!!((gairesult_185808 == ((NI32) 0)))) goto LA16;
				e_186002 = 0;
				e_186002 = (oserror3233*) newObj((&NTI114612), sizeof(oserror3233));
				(*e_186002).Sup.Sup.Sup.m_type = (&NTI3233);
				LOC18 = 0;
				LOC18 = gai_strerror(gairesult_185808);
				asgnRefNoCycle((void**) &(*e_186002).Sup.Sup.message, cstrToNimstr(LOC18));
				raiseException((Exception*)e_186002, "OSError");
			}
			LA16: ;
		}
		{
			int LOC21;
			NI32 LOC24;
			LOC21 = 0;
			LOC21 = bind((*socket).Fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC21 < ((NI32) 0))) goto LA22;
			LOC24 = 0;
			LOC24 = oslasterror_114641();
			raiseoserror_114609(LOC24);
		}
		LA22: ;
	}
	LA1: ;
}

N_NIMCALL(void, listen_185609)(tsocketimpl183607* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen((*socket).Fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114641();
		raiseoserror_114609(LOC6);
	}
	LA4: ;
}

N_NIMCALL(void, acceptaddr_186248)(tsocketimpl183607* server, tsocketimpl183607** client, NimStringDesc** address) {
	struct sockaddr_in sockaddress_186256;
	socklen_t addrlen_186258;
	int sock_186260;
	memset((void*)&sockaddress_186256, 0, sizeof(sockaddress_186256));
	addrlen_186258 = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock_186260 = accept((*server).Fd, ((struct sockaddr*) (&sockaddress_186256)), &addrlen_186258);
	{
		NI32 err_186262;
		if (!(sock_186260 == osinvalidsocket_183805)) goto LA3;
		err_186262 = oslasterror_114641();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (err_186262 == EAGAIN);
			if (LOC7) goto LA8;
			LOC7 = (err_186262 == EWOULDBLOCK);
			LA8: ;
			if (!LOC7) goto LA9;
			unsureAsgnRef((void**) &(*client), invalidsocket_183696);
			unsureAsgnRef((void**) &(*address), copyString(((NimStringDesc*) &TMP4840)));
			goto BeforeRet;
		}
		goto LA5;
		LA9: ;
		{
			raiseoserror_114609(err_186262);
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC13;
		(*(*client)).Fd = sock_186260;
		(*(*client)).Isbuffered = (*server).Isbuffered;
		LOC13 = 0;
		LOC13 = inet_ntoa(sockaddress_186256.sin_addr);
		unsureAsgnRef((void**) &(*address), cstrToNimstr(LOC13));
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
}

N_NIMCALL(void, accept_187401)(tsocketimpl183607* server, tsocketimpl183607** client) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP4840));
	acceptaddr_186248(server, client, &addrdummy);
}
N_NIMCALL(void, TMP4841)(void* p, NI op) {
	timeouterror183629* a;
	a = (timeouterror183629*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_190728)(tsocketimpl183607* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).Isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (0 < (*s).isbufferedU.S1.Buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.Currpos == (*s).isbufferedU.S1.Buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, checkbuffer_190807)(TY192015** readfds) {
	NI result;
	TY192015* res;
	result = 0;
	res = (TY192015*) newSeq((&NTI192015), 0);
	result = 0;
	{
		tsocketimpl183607* s_190847;
		TY192015* HEX3Atmp_190881;
		NI i_190884;
		NI l_190886;
		s_190847 = 0;
		HEX3Atmp_190881 = 0;
		unsureAsgnRef((void**) &HEX3Atmp_190881, (*readfds));
		i_190884 = 0;
		l_190886 = HEX3Atmp_190881->Sup.len;
		{
			while (1) {
				if (!(i_190884 < l_190886)) goto LA3;
				s_190847 = HEX3Atmp_190881->data[i_190884];
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = hasdatabuffered_190728(s_190847);
					if (!LOC6) goto LA7;
					result += 1;
					res = (TY192015*) incrSeq(&(res)->Sup, sizeof(tsocketimpl183607*));
					asgnRefNoCycle((void**) &res->data[res->Sup.len-1], s_190847);
				}
				LA7: ;
				i_190884 += 1;
			} LA3: ;
		}
	}
	{
		if (!(0 < result)) goto LA11;
		genericSeqAssign(&(*readfds), res, (&NTI192015));
	}
	LA11: ;
	return result;
}

N_NIMCALL(struct timeval, timevalfrommilliseconds_190401)(NI timeout) {
	struct timeval result;
	memset((void*)&result, 0, sizeof(result));
	{
		NI seconds;
		if (!!((timeout == -1))) goto LA3;
		seconds = (NI64)(timeout / 1000);
		result.tv_sec = ((NI) (((NI32) (seconds))));
		result.tv_usec = ((NI) (((NI32) ((NI64)((NI64)(timeout - (NI64)(seconds * 1000)) * 1000)))));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, createfdset_190416)(fd_set* fd, TY192015* s, NI* m) {
	FD_ZERO(fd);
	{
		tsocketimpl183607* i_190611;
		NI i_190627;
		NI l_190629;
		i_190611 = 0;
		i_190627 = 0;
		l_190629 = s->Sup.len;
		{
			while (1) {
				if (!(i_190627 < l_190629)) goto LA3;
				i_190611 = s->data[i_190627];
				(*m) = (((*m) >= ((NI) ((*i_190611).Fd))) ? (*m) : ((NI) ((*i_190611).Fd)));
				FD_SET((*i_190611).Fd, fd);
				i_190627 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, prunesocketset_190645)(TY192015** s, fd_set* fd) {
	NI i;
	NI l;
	i = 0;
	l = (*s)->Sup.len;
	{
		while (1) {
			if (!(i < l)) goto LA2;
			{
				int LOC5;
				LOC5 = 0;
				LOC5 = FD_ISSET((*(*s)->data[i]).Fd, fd);
				if (!(LOC5 == ((NI32) 0))) goto LA6;
				asgnRefNoCycle((void**) &(*s)->data[i], (*s)->data[(NI64)(l - 1)]);
				l -= 1;
			}
			goto LA3;
			LA6: ;
			{
				i += 1;
			}
			LA3: ;
		} LA2: ;
	}
	(*s) = (TY192015*) setLengthSeq(&((*s))->Sup, sizeof(tsocketimpl183607*), l);
}

N_NIMCALL(NI, select_191101)(TY192015** readfds, NI timeout) {
	NI result;
	NI buffersfilled;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = 0;
	buffersfilled = checkbuffer_190807(readfds);
	{
		if (!(0 < buffersfilled)) goto LA3;
		result = buffersfilled;
		goto BeforeRet;
	}
	LA3: ;
	tv = timevalfrommilliseconds_190401(timeout);
	memset((void*)&rd, 0, sizeof(rd));
	m = 0;
	createfdset_190416(&rd, (*readfds), &m);
	{
		int LOC9;
		if (!!((timeout == -1))) goto LA7;
		LOC9 = 0;
		LOC9 = select(((int) ((NI64)(m + 1))), &rd, NIM_NIL, NIM_NIL, &tv);
		result = ((NI) (LOC9));
	}
	goto LA5;
	LA7: ;
	{
		int LOC11;
		LOC11 = 0;
		LOC11 = select(((int) ((NI64)(m + 1))), &rd, NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (LOC11));
	}
	LA5: ;
	prunesocketset_190645(readfds, &rd);
	BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_101492)(NF* x_101498, NF y_101501) {
	(*x_101498) = ((NF)((*x_101498)) + (NF)(y_101501));
}

N_NIMCALL(NI, waitfor_191617)(tsocketimpl183607* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
	result = 0;
	result = 1;
	{
		if (!(size <= 0)) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == -1)) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).Isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.Buflen == 0));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.Buflen == (*socket).isbufferedU.S1.Currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI64)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		TY192015* s;
		TY192017 LOC23;
		NF starttime;
		NI selret;
		NF LOC34;
		{
			timeouterror183629* e_191878;
			NimStringDesc* LOC22;
			if (!((NI64)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+003))))) < 1)) goto LA20;
			e_191878 = 0;
			e_191878 = (timeouterror183629*) newObj((&NTI191879), sizeof(timeouterror183629));
			(*e_191878).Sup.Sup.m_type = (&NTI183629);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP4842));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP4843));
			asgnRefNoCycle((void**) &(*e_191878).Sup.message, LOC22);
			raiseException((Exception*)e_191878, "TimeoutError");
		}
		LA20: ;
		s = (TY192015*) newSeq((&NTI192015), 1);
		memset((void*)LOC23, 0, sizeof(LOC23));
		LOC23[0] = socket;
		asgnRefNoCycle((void**) &s->data[0], LOC23[0]);
		starttime = ntepochTime();
		selret = select_191101(&s, (NI64)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+003))))));
		{
			NI32 LOC28;
			if (!(selret < 0)) goto LA26;
			LOC28 = 0;
			LOC28 = oslasterror_114641();
			raiseoserror_114609(LOC28);
		}
		LA26: ;
		{
			timeouterror183629* e_192027;
			NimStringDesc* LOC33;
			if (!!((selret == 1))) goto LA31;
			e_192027 = 0;
			e_192027 = (timeouterror183629*) newObj((&NTI191879), sizeof(timeouterror183629));
			(*e_192027).Sup.Sup.m_type = (&NTI183629);
			LOC33 = 0;
			LOC33 = rawNewString(funcname->Sup.len + 21);
appendString(LOC33, ((NimStringDesc*) &TMP4842));
appendString(LOC33, funcname);
appendString(LOC33, ((NimStringDesc*) &TMP4843));
			asgnRefNoCycle((void**) &(*e_192027).Sup.message, LOC33);
			raiseException((Exception*)e_192027, "TimeoutError");
		}
		LA31: ;
		LOC34 = 0;
		LOC34 = ntepochTime();
		HEX2BHEX3D_101492(waited, ((NF)(LOC34) - (NF)(starttime)));
	}
	LA9: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_191160)(tsocketimpl183607* socket, NI32 flags) {
	NI result;
	result = 0;
	result = 0;
	result = recv((*socket).Fd, ((void*) ((*socket).isbufferedU.S1.Buffer)), 4000, flags);
	{
		if (!(result <= 0)) goto LA3;
		(*socket).isbufferedU.S1.Buflen = 0;
		(*socket).isbufferedU.S1.Currpos = 0;
		goto BeforeRet;
	}
	LA3: ;
	(*socket).isbufferedU.S1.Buflen = result;
	(*socket).isbufferedU.S1.Currpos = 0;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_191302)(tsocketimpl183607* socket, void* data, NI size) {
	NI result;
	result = 0;
	{
		if (!(size == 0)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).Isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.Buflen == 0)) goto LA11;
			res = readintobuf_191160(socket, ((NI32) 0));
			{
				if (!(res <= 0)) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = 0;
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = 0;
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.Buflen <= (*socket).isbufferedU.S1.Currpos)) goto LA26;
					res = readintobuf_191160(socket, ((NI32) 0));
					{
						if (!(res <= 0)) goto LA30;
						{
							if (!(0 < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI64)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos) <= (NI64)(size - read)) ? (NI64)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos) : (NI64)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) (&d[read])), ((void*) (&(*socket).isbufferedU.S1.Buffer[((*socket).isbufferedU.S1.Currpos)- 0])), chunk);
				read += chunk;
				(*socket).isbufferedU.S1.Currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).Fd, data, ((NI) (((int) (size)))), ((NI32) 0));
	}
	LA5: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, raisesocketerror_185001)(tsocketimpl183607* socket, NI err, NIM_BOOL async) {
	{
		NIM_BOOL LOC3;
		NI32 lasterror;
		LOC3 = 0;
		LOC3 = (err == -1);
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		lasterror = oslasterror_114641();
		{
			if (!async) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = (lasterror == EAGAIN);
				if (LOC13) goto LA14;
				LOC13 = (lasterror == EWOULDBLOCK);
				LA14: ;
				if (!LOC13) goto LA15;
				goto BeforeRet;
			}
			goto LA11;
			LA15: ;
			{
				raiseoserror_114609(lasterror);
			}
			LA11: ;
		}
		goto LA7;
		LA9: ;
		{
			raiseoserror_114609(lasterror);
		}
		LA7: ;
	}
	LA5: ;
	BeforeRet: ;
}

N_NIMCALL(NI, peekchar_192138)(tsocketimpl183607* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).Isbuffered) goto LA3;
		result = 1;
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.Buflen == 0);
			if (LOC7) goto LA8;
			LOC7 = ((NI64)((*socket).isbufferedU.S1.Buflen - 1) < (*socket).isbufferedU.S1.Currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_191160(socket, ((NI32) 0));
			{
				if (!(res <= 0)) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.Buffer[((*socket).isbufferedU.S1.Currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).Fd, ((void*) (c)), 1, MSG_PEEK);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_192447)(tsocketimpl183607* socket, NimStringDesc** line, NI timeout) {
	NF waited;
	waited = 0.0;
	(*line) = setLengthStr((*line), 0);
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_191617(socket, &waited, timeout, 1, ((NimStringDesc*) &TMP4845));
			n = recv_191302(socket, ((void*) (&c)), 1);
			{
				if (!(n < 0)) goto LA6;
				raisesocketerror_185001(socket, -1, NIM_FALSE);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == 0)) goto LA9;
				goto BeforeRet;
			}
			goto LA4;
			LA9: ;
			LA4: ;
			{
				NI LOC15;
				if (!((NU8)(c) == (NU8)(13))) goto LA13;
				LOC15 = 0;
				LOC15 = waitfor_191617(socket, &waited, timeout, 1, ((NimStringDesc*) &TMP4845));
				n = peekchar_192138(socket, &c);
				{
					NIM_BOOL LOC18;
					NI LOC22;
					LOC18 = 0;
					LOC18 = (0 < n);
					if (!(LOC18)) goto LA19;
					LOC18 = ((NU8)(c) == (NU8)(10));
					LA19: ;
					if (!LOC18) goto LA20;
					LOC22 = 0;
					LOC22 = recv_191302(socket, ((void*) (&c)), 1);
				}
				goto LA16;
				LA20: ;
				{
					if (!(n <= 0)) goto LA24;
					raisesocketerror_185001(socket, -1, NIM_FALSE);
				}
				goto LA16;
				LA24: ;
				LA16: ;
				{
					if (!((*line)->Sup.len == 0)) goto LA28;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP4846));
				}
				LA28: ;
				goto BeforeRet;
			}
			goto LA11;
			LA13: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA31;
				{
					if (!((*line)->Sup.len == 0)) goto LA35;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP4846));
				}
				LA35: ;
				goto BeforeRet;
			}
			goto LA11;
			LA31: ;
			LA11: ;
			(*line) = addChar((*line), c);
		}
	}
	BeforeRet: ;
}

N_NIMCALL(void, close_187478)(tsocketimpl183607* socket) {
	int LOC1;
	LOC1 = 0;
	LOC1 = close((*socket).Fd);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_socketsInit)(void) {
	asgnRefNoCycle((void**) &invalidsocket_183696, NIM_NIL);
	osinvalidsocket_183805 = ((int) -1);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_socketsDatInit)(void) {
static TNimNode* TMP4835[3];
static TNimNode* TMP4836[3];
static TNimNode TMP128[10];
NTI183607.size = sizeof(tsocketimpl183607);
NTI183607.kind = 18;
NTI183607.base = 0;
NTI183607.flags = 3;
TMP4835[0] = &TMP128[1];
TMP128[1].kind = 1;
TMP128[1].offset = offsetof(tsocketimpl183607, Fd);
TMP128[1].typ = (&NTI5611);
TMP128[1].name = "fd";
TMP4835[1] = &TMP128[2];
TMP128[2].kind = 3;
TMP128[2].offset = offsetof(tsocketimpl183607, Isbuffered);
TMP128[2].typ = (&NTI138);
TMP128[2].name = "isBuffered";
TMP128[2].sons = &NimDT_183607_isbuffered[0];
TMP128[2].len = 2;
TMP4836[0] = &TMP128[4];
NTI183632.size = sizeof(TY183632);
NTI183632.kind = 16;
NTI183632.base = (&NTI147);
NTI183632.flags = 3;
TMP128[4].kind = 1;
TMP128[4].offset = offsetof(tsocketimpl183607, isbufferedU.S1.Buffer);
TMP128[4].typ = (&NTI183632);
TMP128[4].name = "buffer";
TMP4836[1] = &TMP128[5];
TMP128[5].kind = 1;
TMP128[5].offset = offsetof(tsocketimpl183607, isbufferedU.S1.Currpos);
TMP128[5].typ = (&NTI108);
TMP128[5].name = "currPos";
TMP4836[2] = &TMP128[6];
TMP128[6].kind = 1;
TMP128[6].offset = offsetof(tsocketimpl183607, isbufferedU.S1.Buflen);
TMP128[6].typ = (&NTI108);
TMP128[6].name = "bufLen";
TMP128[3].len = 3; TMP128[3].kind = 2; TMP128[3].sons = &TMP4836[0];
NimDT_183607_isbuffered[1] = &TMP128[3];
TMP128[7].len = 0; TMP128[7].kind = 2;
NimDT_183607_isbuffered[0] = &TMP128[7];
TMP4835[2] = &TMP128[8];
TMP128[8].kind = 1;
TMP128[8].offset = offsetof(tsocketimpl183607, Nonblocking);
TMP128[8].typ = (&NTI138);
TMP128[8].name = "nonblocking";
TMP128[0].len = 3; TMP128[0].kind = 2; TMP128[0].sons = &TMP4835[0];
NTI183607.node = &TMP128[0];
NTI183609.size = sizeof(tsocketimpl183607*);
NTI183609.kind = 22;
NTI183609.base = (&NTI183607);
NTI183609.flags = 2;
NTI183609.marker = TMP4837;
NTI183629.size = sizeof(timeouterror183629);
NTI183629.kind = 17;
NTI183629.base = (&NTI3227);
TMP128[9].len = 0; TMP128[9].kind = 2;
NTI183629.node = &TMP128[9];
NTI191879.size = sizeof(timeouterror183629*);
NTI191879.kind = 22;
NTI191879.base = (&NTI183629);
NTI191879.marker = TMP4841;
}

