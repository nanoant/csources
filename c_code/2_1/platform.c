/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu175463 tinfocpu175463;
typedef struct tinfoos175048 tinfoos175048;
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
typedef struct TNimNode TNimNode;
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
struct tinfocpu175463 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu175463 TY175481[14];
struct tinfoos175048 {
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
typedef tinfoos175048 TY175070[23];
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
typedef NimStringDesc* TY175475[2];
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
typedef NI TY26220[16];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
N_NIMCALL(NU8, nametocpu_175604)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_175598)(NimStringDesc* name);
N_NIMCALL(void, settarget_175621)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
STRING_LITERAL(TMP61, "i386", 4);
STRING_LITERAL(TMP62, "m68k", 4);
STRING_LITERAL(TMP63, "alpha", 5);
STRING_LITERAL(TMP64, "powerpc", 7);
STRING_LITERAL(TMP65, "powerpc64", 9);
STRING_LITERAL(TMP66, "sparc", 5);
STRING_LITERAL(TMP67, "vm", 2);
STRING_LITERAL(TMP68, "ia64", 4);
STRING_LITERAL(TMP69, "amd64", 5);
STRING_LITERAL(TMP70, "mips", 4);
STRING_LITERAL(TMP71, "arm", 3);
STRING_LITERAL(TMP72, "js", 2);
STRING_LITERAL(TMP73, "nimrodvm", 8);
STRING_LITERAL(TMP74, "avr", 3);
NIM_CONST TY175481 cpu_175480 = {{((NimStringDesc*) &TMP61),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP62),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP63),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP64),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP65),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP66),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP67),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP68),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP69),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP70),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP71),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP72),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP73),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP74),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP75, "DOS", 3);
STRING_LITERAL(TMP76, "..", 2);
STRING_LITERAL(TMP77, "$1.dll", 6);
STRING_LITERAL(TMP78, "/", 1);
STRING_LITERAL(TMP79, ".obj", 4);
STRING_LITERAL(TMP80, "\015\012", 2);
STRING_LITERAL(TMP81, ";", 1);
STRING_LITERAL(TMP82, "\\", 1);
STRING_LITERAL(TMP83, ".bat", 4);
STRING_LITERAL(TMP84, ".", 1);
STRING_LITERAL(TMP85, ".exe", 4);
STRING_LITERAL(TMP86, "Windows", 7);
STRING_LITERAL(TMP87, "OS2", 3);
STRING_LITERAL(TMP88, "Linux", 5);
STRING_LITERAL(TMP89, "lib$1.so", 8);
STRING_LITERAL(TMP90, ".o", 2);
STRING_LITERAL(TMP91, "\012", 1);
STRING_LITERAL(TMP92, ":", 1);
STRING_LITERAL(TMP93, ".sh", 3);
STRING_LITERAL(TMP94, "", 0);
STRING_LITERAL(TMP95, "MorphOS", 7);
STRING_LITERAL(TMP96, "SkyOS", 5);
STRING_LITERAL(TMP97, "Solaris", 7);
STRING_LITERAL(TMP98, "Irix", 4);
STRING_LITERAL(TMP99, "NetBSD", 6);
STRING_LITERAL(TMP100, "FreeBSD", 7);
STRING_LITERAL(TMP101, "OpenBSD", 7);
STRING_LITERAL(TMP102, "AIX", 3);
STRING_LITERAL(TMP103, "PalmOS", 6);
STRING_LITERAL(TMP104, "QNX", 3);
STRING_LITERAL(TMP105, "Amiga", 5);
STRING_LITERAL(TMP106, "$1.library", 10);
STRING_LITERAL(TMP107, "Atari", 5);
STRING_LITERAL(TMP108, ".tpp", 4);
STRING_LITERAL(TMP109, "Netware", 7);
STRING_LITERAL(TMP110, "$1.nlm", 6);
STRING_LITERAL(TMP111, ".nlm", 4);
STRING_LITERAL(TMP112, "MacOS", 5);
STRING_LITERAL(TMP113, "::", 2);
STRING_LITERAL(TMP114, "$1Lib", 5);
STRING_LITERAL(TMP115, "\015", 1);
STRING_LITERAL(TMP116, ",", 1);
STRING_LITERAL(TMP117, "MacOSX", 6);
STRING_LITERAL(TMP118, "lib$1.dylib", 11);
STRING_LITERAL(TMP119, "Haiku", 5);
STRING_LITERAL(TMP120, "JS", 2);
STRING_LITERAL(TMP121, "NimrodVM", 8);
STRING_LITERAL(TMP122, "Standalone", 10);
NIM_CONST TY175070 os_175069 = {{((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
,
{((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
,
{((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
}
;
STRING_LITERAL(TMP123, "linux", 5);
STRING_LITERAL(TMP1446, "littleEndian", 12);
STRING_LITERAL(TMP1447, "bigEndian", 9);
NIM_CONST TY175475 endiantostr_175474 = {((NimStringDesc*) &TMP1446),
((NimStringDesc*) &TMP1447)}
;
NU8 targetcpu_175587;
NU8 hostcpu_175588;
NU8 targetos_175589;
NU8 hostos_175590;
NI intsize_175610;
NI floatsize_175611;
NI ptrsize_175612;
NimStringDesc* tnl_175613;
extern tgcheap46816 gch_46844;

N_NIMCALL(NU8, nametocpu_175604)(NimStringDesc* name) {
	NU8 result;
	result = 0;
	{
		NU8 i_176157;
		NU8 res_176162;
		i_176157 = 0;
		res_176162 = ((NU8) 1);
		{
			while (1) {
				if (!(res_176162 <= ((NU8) 14))) goto LA3;
				i_176157 = res_176162;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, cpu_175480[(i_176157)- 1].Field0);
					if (!(LOC6 == 0)) goto LA7;
					result = i_176157;
					goto BeforeRet;
				}
				LA7: ;
				res_176162 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_175598)(NimStringDesc* name) {
	NU8 result;
	result = 0;
	{
		NU8 i_176071;
		NU8 res_176076;
		i_176071 = 0;
		res_176076 = ((NU8) 1);
		{
			while (1) {
				if (!(res_176076 <= ((NU8) 23))) goto LA3;
				i_176071 = res_176076;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, os_175069[(i_176071)- 1].Field0);
					if (!(LOC6 == 0)) goto LA7;
					result = i_176071;
					goto BeforeRet;
				}
				LA7: ;
				res_176076 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44735))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_175621)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_175587 = c;
	targetos_175589 = o;
	intsize_175610 = (NI32)(cpu_175480[(c)- 1].Field1 / 8);
	floatsize_175611 = (NI32)(cpu_175480[(c)- 1].Field3 / 8);
	ptrsize_175612 = (NI32)(cpu_175480[(c)- 1].Field4 / 8);
	LOC1 = 0;
	LOC1 = tnl_175613; tnl_175613 = copyStringRC1(os_175069[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_platformInit)(void) {
	hostcpu_175588 = nametocpu_175604(((NimStringDesc*) &TMP61));
	hostos_175590 = nametoos_175598(((NimStringDesc*) &TMP123));
	settarget_175621(hostos_175590, hostcpu_175588);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_platformDatInit)(void) {
}

