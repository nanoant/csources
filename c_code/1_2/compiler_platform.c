/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tinfoos120042 tinfoos120042;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu120446 tinfocpu120446;
typedef struct tcell38646 tcell38646;
typedef struct TNimType TNimType;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38658 tcellset38658;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22010 tmemregion22010;
typedef struct tsmallchunk21238 tsmallchunk21238;
typedef struct tllchunk22004 tllchunk22004;
typedef struct tbigchunk21240 tbigchunk21240;
typedef struct tintset21215 tintset21215;
typedef struct ttrunk21211 ttrunk21211;
typedef struct tavlnode22008 tavlnode22008;
typedef struct tgcstat40614 tgcstat40614;
typedef struct TNimNode TNimNode;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tinfoos120042 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos120042 TY120062[23];
typedef NimStringDesc* TY120456[2];
struct tinfocpu120446 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu120446 TY120461[14];
struct tcell38646 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38662 {
NI Len;
NI Cap;
tcell38646** D;
};
struct tcellset38658 {
NI Counter;
NI Max;
tpagedesc38654* Head;
tpagedesc38654** Data;
};
typedef tsmallchunk21238* TY22022[512];
typedef ttrunk21211* ttrunkbuckets21213[256];
struct tintset21215 {
ttrunkbuckets21213 Data;
};
struct tmemregion22010 {
NI Minlargeobj;
NI Maxlargeobj;
TY22022 Freesmallchunks;
tllchunk22004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21240* Freechunkslist;
tintset21215 Chunkstarts;
tavlnode22008* Root;
tavlnode22008* Deleted;
tavlnode22008* Last;
tavlnode22008* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38662 Zct;
tcellseq38662 Decstack;
tcellset38658 Cycleroots;
tcellseq38662 Tempstack;
NI Recgclock;
tmemregion22010 Region;
tgcstat40614 Stat;
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
typedef NI TY21218[8];
struct tpagedesc38654 {
tpagedesc38654* Next;
NI Key;
TY21218 Bits;
};
struct tbasechunk21236 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21238 {
  tbasechunk21236 Sup;
tsmallchunk21238* Next;
tsmallchunk21238* Prev;
tfreecell21228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22004 {
NI Size;
NI Acc;
tllchunk22004* Next;
};
struct tbigchunk21240 {
  tbasechunk21236 Sup;
tbigchunk21240* Next;
tbigchunk21240* Prev;
NI Align;
NF Data;
};
struct ttrunk21211 {
ttrunk21211* Next;
NI Key;
TY21218 Bits;
};
typedef tavlnode22008* TY22014[2];
struct tavlnode22008 {
TY22014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
N_NIMCALL(void, settarget_120586)(NU8 o, NU8 c);
N_NIMCALL(void, hiddenraiseassert_77217)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(NU8, nametoos_120569)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_120573)(NimStringDesc* name);
STRING_LITERAL(TMP395, "DOS", 3);
STRING_LITERAL(TMP396, "..", 2);
STRING_LITERAL(TMP397, "$1.dll", 6);
STRING_LITERAL(TMP398, "/", 1);
STRING_LITERAL(TMP399, ".obj", 4);
STRING_LITERAL(TMP400, "\015\012", 2);
STRING_LITERAL(TMP401, ";", 1);
STRING_LITERAL(TMP402, "\\", 1);
STRING_LITERAL(TMP403, ".bat", 4);
STRING_LITERAL(TMP404, ".", 1);
STRING_LITERAL(TMP405, ".exe", 4);
STRING_LITERAL(TMP406, "Windows", 7);
STRING_LITERAL(TMP407, "OS2", 3);
STRING_LITERAL(TMP408, "Linux", 5);
STRING_LITERAL(TMP409, "lib$1.so", 8);
STRING_LITERAL(TMP410, ".o", 2);
STRING_LITERAL(TMP411, "\012", 1);
STRING_LITERAL(TMP412, ":", 1);
STRING_LITERAL(TMP413, ".sh", 3);
STRING_LITERAL(TMP414, "", 0);
STRING_LITERAL(TMP415, "MorphOS", 7);
STRING_LITERAL(TMP416, "SkyOS", 5);
STRING_LITERAL(TMP417, "Solaris", 7);
STRING_LITERAL(TMP418, "Irix", 4);
STRING_LITERAL(TMP419, "NetBSD", 6);
STRING_LITERAL(TMP420, "FreeBSD", 7);
STRING_LITERAL(TMP421, "OpenBSD", 7);
STRING_LITERAL(TMP422, "AIX", 3);
STRING_LITERAL(TMP423, "PalmOS", 6);
STRING_LITERAL(TMP424, "QNX", 3);
STRING_LITERAL(TMP425, "Amiga", 5);
STRING_LITERAL(TMP426, "$1.library", 10);
STRING_LITERAL(TMP427, "Atari", 5);
STRING_LITERAL(TMP428, ".tpp", 4);
STRING_LITERAL(TMP429, "Netware", 7);
STRING_LITERAL(TMP430, "$1.nlm", 6);
STRING_LITERAL(TMP431, ".nlm", 4);
STRING_LITERAL(TMP432, "MacOS", 5);
STRING_LITERAL(TMP433, "::", 2);
STRING_LITERAL(TMP434, "$1Lib", 5);
STRING_LITERAL(TMP435, "\015", 1);
STRING_LITERAL(TMP436, ",", 1);
STRING_LITERAL(TMP437, "MacOSX", 6);
STRING_LITERAL(TMP438, "lib$1.dylib", 11);
STRING_LITERAL(TMP439, "Haiku", 5);
STRING_LITERAL(TMP440, "JS", 2);
STRING_LITERAL(TMP441, "NimrodVM", 8);
STRING_LITERAL(TMP442, "Standalone", 10);
NIM_CONST TY120062 os_120061 = {{((NimStringDesc*) &TMP395),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP399),
((NimStringDesc*) &TMP400),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP404),
2}
,
{((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP399),
((NimStringDesc*) &TMP400),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP404),
2}
,
{((NimStringDesc*) &TMP407),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP399),
((NimStringDesc*) &TMP400),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP404),
2}
,
{((NimStringDesc*) &TMP408),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP415),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP416),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP417),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP418),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP419),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP420),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP421),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP422),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP423),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
1}
,
{((NimStringDesc*) &TMP424),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
5}
,
{((NimStringDesc*) &TMP425),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP426),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
1}
,
{((NimStringDesc*) &TMP427),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP428),
((NimStringDesc*) &TMP404),
1}
,
{((NimStringDesc*) &TMP429),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP430),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP400),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP431),
((NimStringDesc*) &TMP404),
2}
,
{((NimStringDesc*) &TMP432),
((NimStringDesc*) &TMP433),
((NimStringDesc*) &TMP434),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP435),
((NimStringDesc*) &TMP436),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
2}
,
{((NimStringDesc*) &TMP437),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP438),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
13}
,
{((NimStringDesc*) &TMP439),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
13}
,
{((NimStringDesc*) &TMP440),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
0}
,
{((NimStringDesc*) &TMP441),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
0}
,
{((NimStringDesc*) &TMP442),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP404),
0}
}
;
STRING_LITERAL(TMP443, "littleEndian", 12);
STRING_LITERAL(TMP444, "bigEndian", 9);
NIM_CONST TY120456 endiantostr_120455 = {((NimStringDesc*) &TMP443),
((NimStringDesc*) &TMP444)}
;
STRING_LITERAL(TMP445, "i386", 4);
STRING_LITERAL(TMP446, "m68k", 4);
STRING_LITERAL(TMP447, "alpha", 5);
STRING_LITERAL(TMP448, "powerpc", 7);
STRING_LITERAL(TMP449, "powerpc64", 9);
STRING_LITERAL(TMP450, "sparc", 5);
STRING_LITERAL(TMP451, "vm", 2);
STRING_LITERAL(TMP452, "ia64", 4);
STRING_LITERAL(TMP453, "amd64", 5);
STRING_LITERAL(TMP454, "mips", 4);
STRING_LITERAL(TMP455, "arm", 3);
STRING_LITERAL(TMP456, "js", 2);
STRING_LITERAL(TMP457, "nimrodvm", 8);
STRING_LITERAL(TMP458, "avr", 3);
NIM_CONST TY120461 cpu_120460 = {{((NimStringDesc*) &TMP445),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP446),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP447),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP448),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP449),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP450),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP451),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP452),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP453),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP454),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP455),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP456),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP457),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP458),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP459, "not (c == cpuNone) ", 19);
STRING_LITERAL(TMP460, "not (o == osNone) ", 18);
STRING_LITERAL(TMP464, "windows", 7);
NU8 targetcpu_120560;
NU8 hostcpu_120561;
NU8 targetos_120562;
NU8 hostos_120563;
NI intsize_120577;
NI floatsize_120578;
NI ptrsize_120579;
NimStringDesc* tnl_120580;
extern TFrame* frameptr_12037;
extern tgcheap40616 gch_40644;

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
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38646*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38646))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43602)(tcell38646* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42015(&gch_40644.Zct, c);	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38646* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42039(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43602(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, settarget_120586)(NU8 o, NU8 c) {
	NI TMP461;
	NI TMP462;
	NI TMP463;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(198, "platform.nim");
	{
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		nimln(198, "platform.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP459));	}	LA3: ;
	nimln(199, "platform.nim");
	{
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		nimln(199, "platform.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP460));	}	LA7: ;
	nimln(201, "platform.nim");
	targetcpu_120560 = c;
	nimln(202, "platform.nim");
	targetos_120562 = o;
	nimln(203, "platform.nim");
	nimln(203, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP461 = divInt(cpu_120460[(c)- 1].Field1, 8);
	intsize_120577 = (NI64)(TMP461);
	nimln(204, "platform.nim");
	nimln(204, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP462 = divInt(cpu_120460[(c)- 1].Field3, 8);
	floatsize_120578 = (NI64)(TMP462);
	nimln(205, "platform.nim");
	nimln(205, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP463 = divInt(cpu_120460[(c)- 1].Field4, 8);
	ptrsize_120579 = (NI64)(TMP463);
	nimln(206, "platform.nim");
	if (o < 1 || o > 23) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_120580; tnl_120580 = copyStringRC1(os_120061[(o)- 1].Field5);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	popFrame();
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
N_NIMCALL(NU8, nametoos_120569)(NimStringDesc* name) {
	NU8 result;
	NU8 i_120848;
	NU8 res_120851;
	nimfr("NameToOS", "platform.nim")
	result = 0;
	i_120848 = 0;
	nimln(1301, "system.nim");
	res_120851 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_120851 <= ((NU8) 23))) goto LA1;
		nimln(1301, "system.nim");
		i_120848 = res_120851;
		nimln(210, "platform.nim");
		{
			NI LOC4;
			nimln(210, "platform.nim");
			nimln(210, "platform.nim");
			if (i_120848 < 1 || i_120848 > 23) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, os_120061[(i_120848)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(211, "platform.nim");
			nimln(211, "platform.nim");
			result = i_120848;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_120851 = addInt(res_120851, 1);
	} LA1: ;
	nimln(212, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NU8, nametocpu_120573)(NimStringDesc* name) {
	NU8 result;
	NU8 i_120901;
	NU8 res_120904;
	nimfr("NameToCPU", "platform.nim")
	result = 0;
	i_120901 = 0;
	nimln(1301, "system.nim");
	res_120904 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_120904 <= ((NU8) 14))) goto LA1;
		nimln(1301, "system.nim");
		i_120901 = res_120904;
		nimln(216, "platform.nim");
		{
			NI LOC4;
			nimln(216, "platform.nim");
			nimln(216, "platform.nim");
			if (i_120901 < 1 || i_120901 > 14) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, cpu_120460[(i_120901)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(217, "platform.nim");
			nimln(217, "platform.nim");
			result = i_120901;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_120904 = addInt(res_120904, 1);
	} LA1: ;
	nimln(218, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerplatformInit)(void) {
	nimfr("platform", "platform.nim")
	nimln(220, "platform.nim");
	hostcpu_120561 = nametocpu_120573(((NimStringDesc*) &TMP453));
	nimln(221, "platform.nim");
	hostos_120563 = nametoos_120569(((NimStringDesc*) &TMP464));
	nimln(223, "platform.nim");
	settarget_120586(hostos_120563, hostcpu_120561);	popFrame();
}

N_NOINLINE(void, compilerplatformDatInit)(void) {
}

