/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct baselexer290024 baselexer290024;
typedef struct TNimObject TNimObject;
typedef struct streamobj134035 streamobj134035;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer290024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj134035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
typedef N_NIMCALL_PTR(void, TY134036) (streamobj134035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY134040) (streamobj134035* s);
typedef N_NIMCALL_PTR(void, TY134044) (streamobj134035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY134049) (streamobj134035* s);
typedef N_NIMCALL_PTR(NI, TY134053) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134059) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134065) (streamobj134035* s);
struct  streamobj134035  {
  TNimObject Sup;
TY134036 Closeimpl;
TY134040 Atendimpl;
TY134044 Setpositionimpl;
TY134049 Getpositionimpl;
TY134053 Readdataimpl;
TY134059 Writedataimpl;
TY134065 Flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_5801)(NI size);
N_NIMCALL(void, fillbuffer_290102)(baselexer290024* l);
N_NIMCALL(NI, readdata_134182)(streamobj134035* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_5833)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_291419)(baselexer290024* l);
N_NOCONV(void, dealloc_5848)(void* p);
N_NIMCALL(void, close_134093)(streamobj134035* s);
extern TNimType NTI3211; /* RootObj */
TNimType NTI290024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI134033; /* Stream */
extern TNimType NTI138; /* bool */

N_NIMCALL(void, fillbuffer_290102)(baselexer290024* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI32)((NI32)((*l).Buflen - (*l).Sentinel) - 1);
	{
		if (!(0 < tocopy)) goto LA3;
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI32)((*l).Sentinel + 1)])), (NI32)(tocopy * 1));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_134182((*l).Input, ((void*) (&(*l).Buf[tocopy])), (NI32)((NI32)((*l).Sentinel + 1) * 1));
	charsread = (NI32)(LOC5 / 1);
	s = (NI32)(tocopy + charsread);
	{
		if (!(charsread < (NI32)((*l).Sentinel + 1))) goto LA8;
		(*l).Buf[s] = 0;
		(*l).Sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= 1;
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (0 <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= 1;
					} LA14: ;
				}
				{
					if (!(0 <= s)) goto LA19;
					(*l).Sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*l).Buflen;
					(*l).Buflen = (NI32)((*l).Buflen * 2);
					LOC22 = 0;
					LOC22 = realloc_5833(((void*) ((*l).Buf)), (NI32)((*l).Buflen * 1));
					(*l).Buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_134182((*l).Input, ((void*) (&(*l).Buf[oldbuflen])), (NI32)(oldbuflen * 1));
					charsread = (NI32)(LOC23 / 1);
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*l).Buf[(NI32)(oldbuflen + charsread)] = 0;
						(*l).Sentinel = (NI32)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI32)((*l).Buflen - 1);
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_291419)(baselexer290024* l) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*l).Bufpos += 3;
		(*l).Linestart += 3;
	}
	LA7: ;
}

N_NIMCALL(void, open_290040)(baselexer290024* l, streamobj134035* input, NI buflen) {
	void* LOC1;
	unsureAsgnRef((void**) &(*l).Input, input);
	(*l).Bufpos = 0;
	(*l).Buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_5801((NI32)(buflen * 1));
	(*l).Buf = ((NCSTRING) (LOC1));
	(*l).Sentinel = (NI32)(buflen - 1);
	(*l).Linestart = 0;
	(*l).Linenumber = 1;
	fillbuffer_290102(l);
	skiputf8bom_291419(l);
}

N_NIMCALL(void, close_290050)(baselexer290024* l) {
	dealloc_5848(((void*) ((*l).Buf)));
	close_134093((*l).Input);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP2687[8];
static TNimNode TMP850[9];
NTI290024.size = sizeof(baselexer290024);
NTI290024.kind = 17;
NTI290024.base = (&NTI3211);
TMP2687[0] = &TMP850[1];
TMP850[1].kind = 1;
TMP850[1].offset = offsetof(baselexer290024, Bufpos);
TMP850[1].typ = (&NTI108);
TMP850[1].name = "bufpos";
TMP2687[1] = &TMP850[2];
TMP850[2].kind = 1;
TMP850[2].offset = offsetof(baselexer290024, Buf);
TMP850[2].typ = (&NTI151);
TMP850[2].name = "buf";
TMP2687[2] = &TMP850[3];
TMP850[3].kind = 1;
TMP850[3].offset = offsetof(baselexer290024, Buflen);
TMP850[3].typ = (&NTI108);
TMP850[3].name = "bufLen";
TMP2687[3] = &TMP850[4];
TMP850[4].kind = 1;
TMP850[4].offset = offsetof(baselexer290024, Input);
TMP850[4].typ = (&NTI134033);
TMP850[4].name = "input";
TMP2687[4] = &TMP850[5];
TMP850[5].kind = 1;
TMP850[5].offset = offsetof(baselexer290024, Linenumber);
TMP850[5].typ = (&NTI108);
TMP850[5].name = "lineNumber";
TMP2687[5] = &TMP850[6];
TMP850[6].kind = 1;
TMP850[6].offset = offsetof(baselexer290024, Sentinel);
TMP850[6].typ = (&NTI108);
TMP850[6].name = "sentinel";
TMP2687[6] = &TMP850[7];
TMP850[7].kind = 1;
TMP850[7].offset = offsetof(baselexer290024, Linestart);
TMP850[7].typ = (&NTI108);
TMP850[7].name = "lineStart";
TMP2687[7] = &TMP850[8];
TMP850[8].kind = 1;
TMP850[8].offset = offsetof(baselexer290024, Fileopened);
TMP850[8].typ = (&NTI138);
TMP850[8].name = "fileOpened";
TMP850[0].len = 8; TMP850[0].kind = 2; TMP850[0].sons = &TMP2687[0];
NTI290024.node = &TMP850[0];
}

