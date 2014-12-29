/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY115525[1];
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
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, getid_172402)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, backendid_172417)(void);
static N_INLINE(void, setid_172432)(NI id);
N_NIMCALL(void, idsynchronizationpoint_172440)(NI idrange);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, togid_172445)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_115490)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(void, savemaxids_172451)(NimStringDesc* project);
N_NIMCALL(FILE*, open_9217)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_115502)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_9459)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, loadmaxids_172481)(NimStringDesc* project);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_9483)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
STRING_LITERAL(TMP1934, "nimrod.gid", 10);
STRING_LITERAL(TMP1935, "\015\012", 2);
NI gfrontendid_172006;
NI gbackendid_172007;
extern TFrame* frameptr_12037;

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
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, getid_172402)(void) {
	NI result;
	nimfr("getID", "idgen.nim")
	result = 0;
	nimln(30, "idgen.nim");
	result = gfrontendid_172006;
	nimln(31, "idgen.nim");
	gfrontendid_172006 = addInt(gfrontendid_172006, 1);
	popFrame();
	return result;
}
static N_INLINE(NI, backendid_172417)(void) {
	NI result;
	nimfr("backendId", "idgen.nim")
	result = 0;
	nimln(34, "idgen.nim");
	result = gbackendid_172007;
	nimln(35, "idgen.nim");
	gbackendid_172007 = addInt(gbackendid_172007, 1);
	popFrame();
	return result;
}
static N_INLINE(void, setid_172432)(NI id) {
	NI TMP1929;
	nimfr("setId", "idgen.nim")
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	nimln(38, "idgen.nim");
	TMP1929 = addInt(id, 1);
	gfrontendid_172006 = ((gfrontendid_172006 >= (NI64)(TMP1929)) ? gfrontendid_172006 : (NI64)(TMP1929));
	popFrame();
}
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, idsynchronizationpoint_172440)(NI idrange) {
	NI TMP1930;
	NI TMP1931;
	NI TMP1932;
	NI TMP1933;
	nimfr("IDsynchronizationPoint", "idgen.nim")
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	nimln(41, "idgen.nim");
	TMP1930 = divInt(gfrontendid_172006, idrange);
	TMP1931 = addInt((NI64)(TMP1930), 1);
	TMP1932 = mulInt((NI64)(TMP1931), idrange);
	TMP1933 = addInt((NI64)(TMP1932), 1);
	gfrontendid_172006 = (NI64)(TMP1933);
	popFrame();
}
N_NIMCALL(NimStringDesc*, togid_172445)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("toGid", "idgen.nim")
	result = 0;
	nimln(47, "idgen.nim");
	result = completegeneratedfilepath_115490(((NimStringDesc*) &TMP1934), NIM_TRUE);
	popFrame();
	return result;
}
static N_INLINE(void, writeln_115502)(FILE* f, NimStringDesc** x, NI xLen0) {
	NimStringDesc* i_115516;
	NI i_115522;
	nimfr("writeln", "sysio.nim")
	i_115516 = 0;
	nimln(1377, "system.nim");
	i_115522 = 0;
	nimln(1378, "system.nim");
	while (1) {
		nimln(1378, "system.nim");
		nimln(1378, "system.nim");
		if (!(i_115522 < xLen0)) goto LA1;
		nimln(1379, "system.nim");
		i_115516 = x[i_115522];
		nimln(159, "sysio.nim");
		write_9459(f, i_115516);		nimln(1380, "system.nim");
		i_115522 += 1;
	} LA1: ;
	nimln(160, "sysio.nim");
	write_9459(f, ((NimStringDesc*) &TMP1935));	popFrame();
}
N_NIMCALL(void, savemaxids_172451)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY115525 LOC2;
	TY115525 LOC3;
	nimfr("saveMaxIds", "idgen.nim")
	nimln(50, "idgen.nim");
	nimln(50, "idgen.nim");
	LOC1 = 0;
	LOC1 = togid_172445(project);
	f = open_9217(LOC1, ((NU8) 1), -1);
	nimln(51, "idgen.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	nimln(51, "idgen.nim");
	nimln(51, "idgen.nim");
	LOC2[0] = nimIntToStr(gfrontendid_172006);
	writeln_115502(f, LOC2, 1);	nimln(52, "idgen.nim");
	memset((void*)LOC3, 0, sizeof(LOC3));
	nimln(52, "idgen.nim");
	nimln(52, "idgen.nim");
	LOC3[0] = nimIntToStr(gbackendid_172007);
	writeln_115502(f, LOC3, 1);	nimln(53, "idgen.nim");
	fclose(f);	popFrame();
}
N_NIMCALL(void, loadmaxids_172481)(NimStringDesc* project) {
	FILE* f;
	nimfr("loadMaxIds", "idgen.nim")
	f = 0;
	nimln(57, "idgen.nim");
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		nimln(57, "idgen.nim");
		nimln(57, "idgen.nim");
		LOC3 = 0;
		LOC3 = togid_172445(project);
		LOC4 = 0;
		LOC4 = open_9203(&f, LOC3, ((NU8) 0), -1);
		if (!LOC4) goto LA5;
		nimln(58, "idgen.nim");
		nimln(58, "idgen.nim");
		line = rawNewString(20);
		nimln(59, "idgen.nim");
		{
			NIM_BOOL LOC9;
			NI frontendid;
			nimln(59, "idgen.nim");
			LOC9 = 0;
			LOC9 = readline_9483(f, &line);
			if (!LOC9) goto LA10;
			nimln(60, "idgen.nim");
			frontendid = nsuParseInt(line);
			nimln(61, "idgen.nim");
			{
				NIM_BOOL LOC14;
				NI backendid;
				nimln(61, "idgen.nim");
				LOC14 = 0;
				LOC14 = readline_9483(f, &line);
				if (!LOC14) goto LA15;
				nimln(62, "idgen.nim");
				backendid = nsuParseInt(line);
				nimln(63, "idgen.nim");
				nimln(63, "idgen.nim");
				gfrontendid_172006 = ((gfrontendid_172006 >= frontendid) ? gfrontendid_172006 : frontendid);
				nimln(64, "idgen.nim");
				nimln(64, "idgen.nim");
				gbackendid_172007 = ((gbackendid_172007 >= backendid) ? gbackendid_172007 : backendid);
			}			LA15: ;
		}		LA10: ;
		nimln(65, "idgen.nim");
		fclose(f);	}	LA5: ;
	popFrame();
}
N_NIMCALL(void, registerid_172201)(tidobj141011* id) {
	nimfr("registerID", "idgen.nim")
	popFrame();
}N_NOINLINE(void, compileridgenInit)(void) {
	nimfr("idgen", "idgen.nim")
	popFrame();
}

N_NOINLINE(void, compileridgenDatInit)(void) {
}

