/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tbaselexer180024 Tbaselexer180024;
typedef struct TNimObject TNimObject;
typedef struct Tllstream179204 Tllstream179204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  Tbaselexer180024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream179204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tllstream179204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, fillbuffer_180097)(Tbaselexer180024* L);
N_NIMCALL(NI, llstreamread_179584)(Tllstream179204* s, void* buf, NI buflen);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_181416)(Tbaselexer180024* L);
N_NIMCALL(NI, fillbaselexer_180827)(Tbaselexer180024* L, NI pos);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, llstreamclose_179310)(Tllstream179204* s);
extern TNimType NTI3411; /* RootObj */
TNimType NTI180024; /* TBaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI179206; /* PLLStream */

N_NIMCALL(void, fillbuffer_180097)(Tbaselexer180024* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI)((NI)((*L).buflen - (*L).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy)) goto LA3;
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = llstreamread_179584((*L).stream, ((void*) ((&(*L).buf[tocopy]))), (NI)((NI)((*L).sentinel + ((NI) 1)) * ((NI) 1)));
	charsread = (NI)(LOC5 / ((NI) 1));
	s = (NI)(tocopy + charsread);
	{
		if (!(charsread < (NI)((*L).sentinel + ((NI) 1)))) goto LA8;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (((NI) 0) <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*L).buflen;
					(*L).buflen = (NI)((*L).buflen * ((NI) 2));
					LOC22 = 0;
					LOC22 = realloc_6033(((void*) ((*L).buf)), ((NI) ((NI)((*L).buflen * ((NI) 1)))));
					(*L).buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = llstreamread_179584((*L).stream, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(oldbuflen * ((NI) 1)));
					charsread = (NI)(LOC23 / ((NI) 1));
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*L).buf[(NI)(oldbuflen + charsread)] = 0;
						(*L).sentinel = (NI)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI)((*L).buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_181416)(Tbaselexer180024* L) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*L).bufpos += ((NI) 3);
		(*L).linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, openbaselexer_180035)(Tbaselexer180024* L, Tllstream179204* inputstream, NI buflen) {
	void* LOC1;
	(*L).bufpos = ((NI) 0);
	(*L).buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_6001(((NI) ((NI)(buflen * ((NI) 1)))));
	(*L).buf = ((NCSTRING) (LOC1));
	(*L).sentinel = (NI)(buflen - ((NI) 1));
	(*L).linestart = ((NI) 0);
	(*L).linenumber = ((NI) 1);
	unsureAsgnRef((void**) (&(*L).stream), inputstream);
	fillbuffer_180097(L);
	skiputf8bom_181416(L);
}

N_NIMCALL(NI, getcolnumber_180059)(Tbaselexer180024* L, NI pos) {
	NI result;
	result = 0;
	result = ((NI)(pos - (*L).linestart) > 0? ((NI)(pos - (*L).linestart)) : -((NI)(pos - (*L).linestart)));
	return result;
}

N_NIMCALL(NI, fillbaselexer_180827)(Tbaselexer180024* L, NI pos) {
	NI result;
	result = 0;
	{
		if (!(pos < (*L).sentinel)) goto LA3;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_180097(L);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1: ;
	(*L).linestart = result;
	return result;
}

N_NIMCALL(NI, handlecr_180066)(Tbaselexer180024* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_180827(L, pos);
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3;
		result = fillbaselexer_180827(L, result);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, handlelf_180074)(Tbaselexer180024* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_180827(L, pos);
	return result;
}

N_NIMCALL(void, closebaselexer_180045)(Tbaselexer180024* L) {
	dealloc_6048(((void*) ((*L).buf)));
	llstreamclose_179310((*L).stream);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseDatInit)(void) {
static TNimNode* TMP1093[7];
static TNimNode TMP713[8];
NTI180024.size = sizeof(Tbaselexer180024);
NTI180024.kind = 17;
NTI180024.base = (&NTI3411);
TMP1093[0] = &TMP713[1];
TMP713[1].kind = 1;
TMP713[1].offset = offsetof(Tbaselexer180024, bufpos);
TMP713[1].typ = (&NTI108);
TMP713[1].name = "bufpos";
TMP1093[1] = &TMP713[2];
TMP713[2].kind = 1;
TMP713[2].offset = offsetof(Tbaselexer180024, buf);
TMP713[2].typ = (&NTI151);
TMP713[2].name = "buf";
TMP1093[2] = &TMP713[3];
TMP713[3].kind = 1;
TMP713[3].offset = offsetof(Tbaselexer180024, buflen);
TMP713[3].typ = (&NTI108);
TMP713[3].name = "bufLen";
TMP1093[3] = &TMP713[4];
TMP713[4].kind = 1;
TMP713[4].offset = offsetof(Tbaselexer180024, stream);
TMP713[4].typ = (&NTI179206);
TMP713[4].name = "stream";
TMP1093[4] = &TMP713[5];
TMP713[5].kind = 1;
TMP713[5].offset = offsetof(Tbaselexer180024, linenumber);
TMP713[5].typ = (&NTI108);
TMP713[5].name = "lineNumber";
TMP1093[5] = &TMP713[6];
TMP713[6].kind = 1;
TMP713[6].offset = offsetof(Tbaselexer180024, sentinel);
TMP713[6].typ = (&NTI108);
TMP713[6].name = "sentinel";
TMP1093[6] = &TMP713[7];
TMP713[7].kind = 1;
TMP713[7].offset = offsetof(Tbaselexer180024, linestart);
TMP713[7].typ = (&NTI108);
TMP713[7].name = "lineStart";
TMP713[0].len = 7; TMP713[0].kind = 2; TMP713[0].sons = &TMP1093[0];
NTI180024.node = &TMP713[0];
}

