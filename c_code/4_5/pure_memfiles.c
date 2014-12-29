/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <fcntl.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/mman.h>
typedef struct tmemfile210204 tmemfile210204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct tmemfile210204 {
void* Mem;
NI Size;
int Handle;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(tmemfile210204, open_210210)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize);
N_NIMCALL(void, hiddenraiseassert_76217)(NimStringDesc* msg);
N_NIMCALL(void, oserror_100005)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_100046)(void);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, close_210637)(tmemfile210204* f);
STRING_LITERAL(TMP2864, "newFileSize == -1 or not (mode == fmRead) ", 42);
extern TFrame* frameptr_12037;
TNimType NTI210204; /* TMemFile */
extern TNimType NTI146; /* pointer */
extern TNimType NTI105; /* int */
extern TNimType NTI3809; /* cint */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tmemfile210204, open_210210)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	tmemfile210204 result;
	NIM_BOOL readonly;
	int flags;
	int LOC58;
	int LOC64;
	nimfr("open", "memfiles.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(45, "memfiles.nim");
	{
		NIM_BOOL LOC3;
		nimln(45, "memfiles.nim");
		nimln(45, "memfiles.nim");
		LOC3 = 0;
		nimln(45, "memfiles.nim");
		LOC3 = (newfilesize == -1);
		if (LOC3) goto LA4;
		nimln(45, "memfiles.nim");
		nimln(45, "memfiles.nim");
		LOC3 = !((mode == ((NU8) 0)));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		nimln(45, "memfiles.nim");
		hiddenraiseassert_76217(((NimStringDesc*) &TMP2864));	}	LA5: ;
	nimln(46, "memfiles.nim");
	nimln(46, "memfiles.nim");
	readonly = (mode == ((NU8) 0));
	nimln(127, "memfiles.nim");
	nimln(127, "memfiles.nim");
	{
		if (!readonly) goto LA9;
		flags = O_RDONLY;
	}	goto LA7;
	LA9: ;
	{
		flags = O_RDWR;
	}	LA7: ;
	nimln(129, "memfiles.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((newfilesize == -1))) goto LA14;
		nimln(130, "memfiles.nim");
		nimln(130, "memfiles.nim");
		nimln(130, "memfiles.nim");
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
	}	LA14: ;
	nimln(132, "memfiles.nim");
	result.Handle = open(filename->data, flags);
	nimln(133, "memfiles.nim");
	{
		NI32 LOC25;
		nimln(133, "memfiles.nim");
		if (!(result.Handle == ((NI32) -1))) goto LA18;
		nimln(49, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(50, "memfiles.nim");
		result.Size = 0;
		nimln(124, "memfiles.nim");
		{
			int LOC24;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result.Handle == ((NI32) 0)))) goto LA22;
			nimln(124, "memfiles.nim");
			nimln(124, "memfiles.nim");
			LOC24 = 0;
			LOC24 = close(result.Handle);
		}		LA22: ;
		nimln(125, "memfiles.nim");
		nimln(136, "memfiles.nim");
		LOC25 = 0;
		LOC25 = oslasterror_100046();
		oserror_100005(LOC25);	}	LA18: ;
	nimln(138, "memfiles.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((newfilesize == -1))) goto LA28;
		nimln(139, "memfiles.nim");
		{
			int LOC32;
			NI32 LOC40;
			nimln(139, "memfiles.nim");
			nimln(139, "memfiles.nim");
			LOC32 = 0;
			LOC32 = ftruncate(result.Handle, ((off_t) (newfilesize)));
			if (!(LOC32 == ((NI32) -1))) goto LA33;
			nimln(49, "memfiles.nim");
			result.Mem = NIM_NIL;
			nimln(50, "memfiles.nim");
			result.Size = 0;
			nimln(124, "memfiles.nim");
			{
				int LOC39;
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (!!((result.Handle == ((NI32) 0)))) goto LA37;
				nimln(124, "memfiles.nim");
				nimln(124, "memfiles.nim");
				LOC39 = 0;
				LOC39 = close(result.Handle);
			}			LA37: ;
			nimln(125, "memfiles.nim");
			nimln(140, "memfiles.nim");
			LOC40 = 0;
			LOC40 = oslasterror_100046();
			oserror_100005(LOC40);		}		LA33: ;
	}	LA28: ;
	nimln(142, "memfiles.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((mappedsize == -1))) goto LA43;
		nimln(143, "memfiles.nim");
		result.Size = mappedsize;
	}	goto LA41;
	LA43: ;
	{
		struct stat stat;
		memset((void*)&stat, 0, sizeof(stat));
		nimln(146, "memfiles.nim");
		{
			int LOC48;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			nimln(146, "memfiles.nim");
			LOC48 = 0;
			LOC48 = fstat(result.Handle, &stat);
			if (!!((LOC48 == ((NI32) -1)))) goto LA49;
			nimln(149, "memfiles.nim");
			result.Size = ((NI)chckRange64(stat.st_size, (-2147483647 -1), 2147483647));
		}		goto LA46;
		LA49: ;
		{
			NI32 LOC57;
			nimln(49, "memfiles.nim");
			result.Mem = NIM_NIL;
			nimln(50, "memfiles.nim");
			result.Size = 0;
			nimln(124, "memfiles.nim");
			{
				int LOC56;
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (!!((result.Handle == ((NI32) 0)))) goto LA54;
				nimln(124, "memfiles.nim");
				nimln(124, "memfiles.nim");
				LOC56 = 0;
				LOC56 = close(result.Handle);
			}			LA54: ;
			nimln(125, "memfiles.nim");
			nimln(151, "memfiles.nim");
			LOC57 = 0;
			LOC57 = oslasterror_100046();
			oserror_100005(LOC57);		}		LA46: ;
	}	LA41: ;
	nimln(153, "memfiles.nim");
	LOC58 = 0;
	nimln(156, "memfiles.nim");
	{
		if (!readonly) goto LA61;
		LOC58 = PROT_READ;
	}	goto LA59;
	LA61: ;
	{
		nimln(156, "memfiles.nim");
		LOC58 = (NI32)(PROT_READ | PROT_WRITE);
	}	LA59: ;
	LOC64 = 0;
	nimln(157, "memfiles.nim");
	{
		if (!readonly) goto LA67;
		LOC64 = MAP_PRIVATE;
	}	goto LA65;
	LA67: ;
	{
		LOC64 = MAP_SHARED;
	}	LA65: ;
	result.Mem = mmap(NIM_NIL, result.Size, LOC58, LOC64, result.Handle, ((off_t) (offset)));
	nimln(161, "memfiles.nim");
	{
		NI32 LOC79;
		nimln(161, "memfiles.nim");
		if (!(result.Mem == ((void*) (MAP_FAILED)))) goto LA72;
		nimln(49, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(50, "memfiles.nim");
		result.Size = 0;
		nimln(124, "memfiles.nim");
		{
			int LOC78;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result.Handle == ((NI32) 0)))) goto LA76;
			nimln(124, "memfiles.nim");
			nimln(124, "memfiles.nim");
			LOC78 = 0;
			LOC78 = close(result.Handle);
		}		LA76: ;
		nimln(125, "memfiles.nim");
		nimln(162, "memfiles.nim");
		LOC79 = 0;
		LOC79 = oslasterror_100046();
		oserror_100005(LOC79);	}	LA72: ;
	popFrame();
	return result;
}
N_NIMCALL(void, close_210637)(tmemfile210204* f) {
	NIM_BOOL error;
	NI32 lasterr;
	nimfr("close", "memfiles.nim")
	nimln(168, "memfiles.nim");
	error = NIM_FALSE;
	lasterr = 0;
	nimln(178, "memfiles.nim");
	{
		int LOC5;
		NIM_BOOL LOC6;
		int LOC7;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*f).Handle == ((NI32) 0)))) goto LA3;
		nimln(179, "memfiles.nim");
		lasterr = oslasterror_100046();
		nimln(180, "memfiles.nim");
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(180, "memfiles.nim");
		LOC5 = 0;
		LOC5 = munmap((*f).Mem, (*f).Size);
		error = !((LOC5 == ((NI32) 0)));
		nimln(181, "memfiles.nim");
		nimln(181, "memfiles.nim");
		LOC6 = 0;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(181, "memfiles.nim");
		LOC7 = 0;
		LOC7 = close((*f).Handle);
		LOC6 = !((LOC7 == ((NI32) 0)));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
	}	LA3: ;
	nimln(183, "memfiles.nim");
	(*f).Size = 0;
	nimln(184, "memfiles.nim");
	(*f).Mem = NIM_NIL;
	nimln(190, "memfiles.nim");
	(*f).Handle = ((int) 0);
	nimln(192, "memfiles.nim");
	{
		if (!error) goto LA11;
		nimln(192, "memfiles.nim");
		oserror_100005(lasterr);	}	LA11: ;
	popFrame();
}N_NOINLINE(void, purememfilesInit)(void) {
	nimfr("memfiles", "memfiles.nim")
	popFrame();
}

N_NOINLINE(void, purememfilesDatInit)(void) {
static TNimNode* TMP2945[3];
static TNimNode TMP2862[4];
NTI210204.size = sizeof(tmemfile210204);
NTI210204.kind = 18;
NTI210204.base = 0;
NTI210204.flags = 3;
TMP2945[0] = &TMP2862[1];
TMP2862[1].kind = 1;
TMP2862[1].offset = offsetof(tmemfile210204, Mem);
TMP2862[1].typ = (&NTI146);
TMP2862[1].name = "mem";
TMP2945[1] = &TMP2862[2];
TMP2862[2].kind = 1;
TMP2862[2].offset = offsetof(tmemfile210204, Size);
TMP2862[2].typ = (&NTI105);
TMP2862[2].name = "size";
TMP2945[2] = &TMP2862[3];
TMP2862[3].kind = 1;
TMP2862[3].offset = offsetof(tmemfile210204, Handle);
TMP2862[3].typ = (&NTI3809);
TMP2862[3].name = "handle";
TMP2862[0].len = 3; TMP2862[0].kind = 2; TMP2862[0].sons = &TMP2945[0];
NTI210204.node = &TMP2862[0];
}

