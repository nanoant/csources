/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym172689 tsym172689;
typedef struct ttype172693 ttype172693;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct tnode172659 tnode172659;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tident141017 tident141017;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tlib172677 tlib172677;
typedef struct tidentiter179106 tidentiter179106;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef struct TY172775 TY172775;
typedef struct tlistentry109014 tlistentry109014;
typedef ttype172693* TY217042[57];
struct TGenericSeq {
NI len;
NI reserved;
};
struct tstrtable172663 {
NI Counter;
tsymseq172661* Data;
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
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tloc172673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype172693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct ttype172693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq172691* Sons;
tnode172659* N;
tsym172689* Destructor;
tsym172689* Owner;
tsym172689* Sym;
NI64 Size;
NI Align;
tloc172673 Loc;
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
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tsym172689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq172691* Typeinstcache;
tscope172683* Typscope;
} S1;
struct {TY172786* Procinstcache;
tscope172683* Scope;
} S2;
struct {TY172786* Usedgenerics;
tstrtable172663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype172693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym172689* Owner;
NU32 Flags;
tnode172659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc172673 Loc;
tlib172677* Annex;
tnode172659* Constraint;
};
struct tidentiter179106 {
NI H;
tident141017* Name;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef ttype172693* TY217241[70];
struct tnode172659 {
ttype172693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym172689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq172653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY172865[20];
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY21418[16];
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
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tscope172683 {
NI Depthlevel;
tstrtable172663 Symbols;
tnodeseq172653* Usingsyms;
tscope172683* Parent;
};
struct tinstantiation172679 {
tsym172689* Sym;
ttypeseq172691* Concretetypes;
TY172775* Usedby;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registersystype_217017)(ttype172693* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(ttype172693*, newsystype_217066)(NU8 kind, NI size);
N_NIMCALL(ttype172693*, newtype_172901)(NU8 kind, tsym172689* owner);
N_NIMCALL(tsym172689*, getsyssym_217037)(NimStringDesc* name);
N_NIMCALL(tsym172689*, strtableget_179084)(tstrtable172663 t, tident141017* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(tident141017*, getident_141443)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_139191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym172689*, newsym_172894)(NU8 symkind, tident141017* name, tsym172689* owner, tlineinfo137509 info);
N_NIMCALL(void, loadstub_214393)(tsym172689* s);
N_NIMCALL(tsym172689*, getsysmagic_217110)(NimStringDesc* name, NU16 m);
N_NIMCALL(tsym172689*, initidentiter_179110)(tidentiter179106* ti, tstrtable172663 tab, tident141017* s);
N_NIMCALL(tsym172689*, nextidentiter_179117)(tidentiter179106* ti, tstrtable172663 tab);
N_NIMCALL(ttype172693*, systypefromname_217173)(NimStringDesc* name);
N_NIMCALL(ttype172693*, getsystype_217021)(NU8 kind);
N_NIMCALL(void, internalerror_139383)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_72477, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_217246)(void);
N_NIMCALL(void, initstrtable_172951)(tstrtable172663* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(ttype172693*, getintlittype_217317)(tnode172659* literal);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(ttype172693*, copytype_172982)(ttype172693* t, tsym172689* owner, NIM_BOOL keepid);
N_NIMCALL(ttype172693*, getfloatlittype_217349)(tnode172659* literal);
static N_INLINE(ttype172693*, skipintlit_217355)(ttype172693* t);
N_NIMCALL(void, addsonskipintlit_217384)(ttype172693* father, ttype172693* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_176094)(ttype172693* owner, ttype172693* elem);
N_NIMCALL(void, setintlittype_217430)(tnode172659* result);
N_NIMCALL(void, internalerror_139369)(tlineinfo137509 info, NimStringDesc* errmsg);
N_NIMCALL(tsym172689*, getcompilerproc_217025)(NimStringDesc* name);
N_NIMCALL(tident141017*, getident_141449)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_110856)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_179078)(tstrtable172663* t, tsym172689* n);
N_NIMCALL(void, registercompilerproc_217029)(tsym172689* s);
N_NIMCALL(void, finishsystem_217033)(tstrtable172663 tab);
STRING_LITERAL(TMP3017, "tab", 3);
STRING_LITERAL(TMP3018, "int", 3);
STRING_LITERAL(TMP3019, "int8", 4);
STRING_LITERAL(TMP3020, "int16", 5);
STRING_LITERAL(TMP3021, "int32", 5);
STRING_LITERAL(TMP3022, "int64", 5);
STRING_LITERAL(TMP3023, "uint", 4);
STRING_LITERAL(TMP3024, "uint8", 5);
STRING_LITERAL(TMP3025, "uint16", 6);
STRING_LITERAL(TMP3026, "uint32", 6);
STRING_LITERAL(TMP3027, "uint64", 6);
STRING_LITERAL(TMP3028, "float", 5);
STRING_LITERAL(TMP3029, "float32", 7);
STRING_LITERAL(TMP3030, "float64", 7);
STRING_LITERAL(TMP3031, "float128", 8);
STRING_LITERAL(TMP3032, "bool", 4);
STRING_LITERAL(TMP3033, "char", 4);
STRING_LITERAL(TMP3034, "string", 6);
STRING_LITERAL(TMP3035, "cstring", 7);
STRING_LITERAL(TMP3036, "pointer", 7);
STRING_LITERAL(TMP3037, "request for typekind: ", 22);
STRING_LITERAL(TMP3038, "wanted: ", 8);
STRING_LITERAL(TMP3039, " got: ", 6);
STRING_LITERAL(TMP3040, "type not found: ", 16);
static NIM_CONST TY172865 TMP3041 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3042, "intVal", 6);
STRING_LITERAL(TMP3043, "invalid int size", 16);
tsym172689* systemmodule_217014;
TY217042 gsystypes_217044;
tstrtable172663 compilerprocs_217045;
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern NI ptrsize_119579;
extern TNimType NTI172236; /* TTypeKind */
TY217241 inttypecache_217243;
extern TNimType NTI172691; /* TTypeSeq */
extern NI intsize_119577;
extern tstrtable172663 rodcompilerprocs_212057;

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
	result = ((tcell38848*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, registersystype_217017)(ttype172693* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(31, "magicsys.nim");
	{
		nimln(31, "magicsys.nim");
		if (!(gsystypes_217044[((*t).Kind)- 0] == NIM_NIL)) goto LA3;
		nimln(31, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_217044[((*t).Kind)- 0], t);
	}	LA3: ;
	popFrame();
}
N_NIMCALL(ttype172693*, newsystype_217066)(NU8 kind, NI size) {
	ttype172693* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(34, "magicsys.nim");
	result = newtype_172901(kind, systemmodule_217014);
	nimln(35, "magicsys.nim");
	(*result).Size = ((NI64) (size));
	nimln(36, "magicsys.nim");
	(*result).Align = size;
	popFrame();
	return result;
}
N_NIMCALL(tsym172689*, getsyssym_217037)(NimStringDesc* name) {
	tsym172689* result;
	tident141017* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(39, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_217014).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3017));
	nimln(39, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getident_141443(name);
	result = strtableget_179084((*systemmodule_217014).kindU.S3.Tab, LOC1);
	nimln(40, "magicsys.nim");
	{
		tident141017* LOC6;
		nimln(40, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(41, "magicsys.nim");
		rawmessage_139191(((NU16) 64), name);		nimln(42, "magicsys.nim");
		nimln(42, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_141443(name);
		result = newsym_172894(((NU8) 0), LOC6, systemmodule_217014, (*systemmodule_217014).Info);
		nimln(43, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, newtype_172901(((NU8) 50), systemmodule_217014));
	}	LA4: ;
	nimln(44, "magicsys.nim");
	{
		nimln(44, "magicsys.nim");
		if (!((*result).Kind == ((NU8) 22))) goto LA9;
		nimln(44, "magicsys.nim");
		loadstub_214393(result);	}	LA9: ;
	popFrame();
	return result;
}
N_NIMCALL(tsym172689*, getsysmagic_217110)(NimStringDesc* name, NU16 m) {
	tsym172689* result;
	tidentiter179106 ti;
	tident141017* id;
	nimfr("getSysMagic", "magicsys.nim")
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	nimln(48, "magicsys.nim");
	id = getident_141443(name);
	nimln(49, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_217014).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3017));
	result = initidentiter_179110(&ti, (*systemmodule_217014).kindU.S3.Tab, id);
	nimln(50, "magicsys.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(51, "magicsys.nim");
		{
			nimln(51, "magicsys.nim");
			if (!((*result).Kind == ((NU8) 22))) goto LA4;
			nimln(51, "magicsys.nim");
			loadstub_214393(result);		}		LA4: ;
		nimln(52, "magicsys.nim");
		{
			nimln(52, "magicsys.nim");
			if (!((*result).Magic == m)) goto LA8;
			nimln(52, "magicsys.nim");
			goto BeforeRet;
		}		LA8: ;
		nimln(53, "magicsys.nim");
		if (!(((64 &(1<<(((*systemmodule_217014).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3017));
		result = nextidentiter_179117(&ti, (*systemmodule_217014).kindU.S3.Tab);
	} LA1: ;
	nimln(54, "magicsys.nim");
	rawmessage_139191(((NU16) 64), name);	nimln(55, "magicsys.nim");
	result = newsym_172894(((NU8) 0), id, systemmodule_217014, (*systemmodule_217014).Info);
	nimln(56, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).Typ, newtype_172901(((NU8) 50), systemmodule_217014));
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(ttype172693*, systypefromname_217173)(NimStringDesc* name) {
	ttype172693* result;
	tsym172689* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(59, "magicsys.nim");
	nimln(59, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_217037(name);
	result = (*LOC1).Typ;
	popFrame();
	return result;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(ttype172693*, getsystype_217021)(NU8 kind) {
	ttype172693* result;
	nimfr("getSysType", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	result = gsystypes_217044[(kind)- 0];
	nimln(63, "magicsys.nim");
	{
		nimln(63, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA3;
		nimln(64, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(65, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3018));
		}		break;
		case ((NU8) 32):
		{
			nimln(66, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3019));
		}		break;
		case ((NU8) 33):
		{
			nimln(67, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3020));
		}		break;
		case ((NU8) 34):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3021));
		}		break;
		case ((NU8) 35):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3022));
		}		break;
		case ((NU8) 40):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3023));
		}		break;
		case ((NU8) 41):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3024));
		}		break;
		case ((NU8) 42):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3025));
		}		break;
		case ((NU8) 43):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3026));
		}		break;
		case ((NU8) 44):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3027));
		}		break;
		case ((NU8) 36):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3028));
		}		break;
		case ((NU8) 37):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3029));
		}		break;
		case ((NU8) 38):
		{
			nimln(77, "magicsys.nim");
			nimln(77, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3030));
			goto BeforeRet;
		}		break;
		case ((NU8) 39):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3031));
		}		break;
		case ((NU8) 1):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3032));
		}		break;
		case ((NU8) 2):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3033));
		}		break;
		case ((NU8) 28):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3034));
		}		break;
		case ((NU8) 29):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3035));
		}		break;
		case ((NU8) 26):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_217173(((NimStringDesc*) &TMP3036));
		}		break;
		case ((NU8) 5):
		{
			nimln(84, "magicsys.nim");
			result = newsystype_217066(((NU8) 5), ptrsize_119579);
		}		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(85, "magicsys.nim");
			nimln(85, "magicsys.nim");
			LOC26 = 0;
			nimln(85, "magicsys.nim");
			LOC26 = rawNewString(reprEnum(kind, (&NTI172236))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP3037));
appendString(LOC26, reprEnum(kind, (&NTI172236)));
			internalerror_139383(LOC26);		}		break;
		}
		nimln(86, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_217044[(kind)- 0], result);
	}	LA3: ;
	nimln(87, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*result).Kind == kind))) goto LA29;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = 0;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = rawNewString(reprEnum(kind, (&NTI172236))->Sup.len + reprEnum((*result).Kind, (&NTI172236))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP3038));
appendString(LOC31, reprEnum(kind, (&NTI172236)));
appendString(LOC31, ((NimStringDesc*) &TMP3039));
appendString(LOC31, reprEnum((*result).Kind, (&NTI172236)));
		internalerror_139383(LOC31);	}	LA29: ;
	nimln(89, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		nimln(89, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA34;
		nimln(89, "magicsys.nim");
		nimln(89, "magicsys.nim");
		LOC36 = 0;
		nimln(89, "magicsys.nim");
		LOC36 = rawNewString(reprEnum(kind, (&NTI172236))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP3040));
appendString(LOC36, reprEnum(kind, (&NTI172236)));
		internalerror_139383(LOC36);	}	LA34: ;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
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
N_NIMCALL(void, resetsystypes_217246)(void) {
	NU8 i_217281;
	NU8 res_217308;
	NI i_217306;
	NI res_217311;
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(95, "magicsys.nim");
	asgnRefNoCycle((void**) &systemmodule_217014, NIM_NIL);
	nimln(96, "magicsys.nim");
	initstrtable_172951(&compilerprocs_217045);	i_217281 = 0;
	nimln(1308, "system.nim");
	res_217308 = ((NU8) 0);
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(res_217308 <= ((NU8) 56))) goto LA1;
		nimln(1308, "system.nim");
		i_217281 = res_217308;
		nimln(98, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_217044[(i_217281)- 0], NIM_NIL);
		nimln(1311, "system.nim");
		res_217308 = addInt(res_217308, 1);
	} LA1: ;
	i_217306 = 0;
	nimln(1308, "system.nim");
	res_217311 = -5;
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(((NI) (res_217311)) <= 64)) goto LA2;
		nimln(1308, "system.nim");
		i_217306 = res_217311;
		nimln(101, "magicsys.nim");
		if (i_217306 < -5 || i_217306 > 64) raiseIndexError();
		asgnRefNoCycle((void**) &inttypecache_217243[(i_217306)- -5], NIM_NIL);
		nimln(1311, "system.nim");
		res_217311 = addInt(res_217311, 1);
	} LA2: ;
	popFrame();
}
N_NIMCALL(ttype172693*, getintlittype_217317)(tnode172659* literal) {
	ttype172693* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(105, "magicsys.nim");
	if (!(((TMP3041[(*literal).Kind/8] &(1<<((*literal).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3042));
	value = (*literal).kindU.S1.Intval;
	nimln(106, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		nimln(106, "magicsys.nim");
		LOC3 = 0;
		nimln(702, "system.nim");
		LOC3 = (-5 <= value);
		if (!(LOC3)) goto LA4;
		nimln(106, "magicsys.nim");
		LOC3 = (value <= 64);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(107, "magicsys.nim");
		if (((NI)chckRange64(value, (-2147483647 -1), 2147483647)) < -5 || ((NI)chckRange64(value, (-2147483647 -1), 2147483647)) > 64) raiseIndexError();
		result = inttypecache_217243[(((NI)chckRange64(value, (-2147483647 -1), 2147483647)))- -5];
		nimln(108, "magicsys.nim");
		{
			ttype172693* ti;
			nimln(108, "magicsys.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(109, "magicsys.nim");
			ti = getsystype_217021(((NU8) 31));
			nimln(110, "magicsys.nim");
			result = copytype_172982(ti, (*ti).Owner, NIM_FALSE);
			nimln(111, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).N, literal);
			nimln(112, "magicsys.nim");
			if (((NI)chckRange64(value, (-2147483647 -1), 2147483647)) < -5 || ((NI)chckRange64(value, (-2147483647 -1), 2147483647)) > 64) raiseIndexError();
			asgnRefNoCycle((void**) &inttypecache_217243[(((NI)chckRange64(value, (-2147483647 -1), 2147483647)))- -5], result);
		}		LA9: ;
	}	goto LA1;
	LA5: ;
	{
		ttype172693* ti;
		nimln(114, "magicsys.nim");
		ti = getsystype_217021(((NU8) 31));
		nimln(115, "magicsys.nim");
		result = copytype_172982(ti, (*ti).Owner, NIM_FALSE);
		nimln(116, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).N, literal);
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(ttype172693*, getfloatlittype_217349)(tnode172659* literal) {
	ttype172693* result;
	nimfr("getFloatLitType", "magicsys.nim")
	result = 0;
	nimln(120, "magicsys.nim");
	result = newsystype_217066(((NU8) 36), 8);
	nimln(121, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).N, literal);
	popFrame();
	return result;
}
static N_INLINE(ttype172693*, skipintlit_217355)(ttype172693* t) {
	ttype172693* result;
	nimfr("skipIntLit", "magicsys.nim")
	result = 0;
	nimln(124, "magicsys.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*t).N == NIM_NIL))) goto LA3;
		nimln(125, "magicsys.nim");
		{
			nimln(730, "system.nim");
			if (!((*t).Kind == ((NU8) 31) || (*t).Kind == ((NU8) 36))) goto LA7;
			nimln(126, "magicsys.nim");
			nimln(126, "magicsys.nim");
			result = getsystype_217021((*t).Kind);
			goto BeforeRet;
		}		LA7: ;
	}	LA3: ;
	nimln(127, "magicsys.nim");
	result = t;
	BeforeRet: ;	popFrame();
	return result;
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, addsonskipintlit_217384)(ttype172693* father, ttype172693* son) {
	ttype172693* s;
	nimfr("AddSonSkipIntLit", "magicsys.nim")
	nimln(130, "magicsys.nim");
	{
		nimln(130, "magicsys.nim");
		if (!(*father).Sons == 0) goto LA3;
		nimln(130, "magicsys.nim");
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq172691*) newSeqRC1((&NTI172691), 0);
	}	LA3: ;
	nimln(131, "magicsys.nim");
	s = skipintlit_217355(son);
	nimln(132, "magicsys.nim");
	(*father).Sons = (ttypeseq172691*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype172693*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], s);
	nimln(133, "magicsys.nim");
	propagatetoowner_176094(father, s);	popFrame();
}
N_NIMCALL(void, setintlittype_217430)(tnode172659* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(136, "magicsys.nim");
	if (!(((TMP3041[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3042));
	i = (*result).kindU.S1.Intval;
	nimln(137, "magicsys.nim");
	switch (intsize_119577) {
	case 8:
	{
		nimln(138, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, getintlittype_217317(result));
	}	break;
	case 4:
	{
		nimln(140, "magicsys.nim");
		{
			NIM_BOOL LOC5;
			nimln(140, "magicsys.nim");
			LOC5 = 0;
			nimln(702, "system.nim");
			LOC5 = ((-2147483647 -1) <= i);
			if (!(LOC5)) goto LA6;
			nimln(140, "magicsys.nim");
			LOC5 = (i <= 2147483647);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(141, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_217317(result));
		}		goto LA3;
		LA7: ;
		{
			nimln(143, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_217021(((NU8) 35)));
		}		LA3: ;
	}	break;
	case 2:
	{
		nimln(145, "magicsys.nim");
		{
			NIM_BOOL LOC13;
			nimln(145, "magicsys.nim");
			LOC13 = 0;
			nimln(702, "system.nim");
			LOC13 = (-32768 <= i);
			if (!(LOC13)) goto LA14;
			nimln(145, "magicsys.nim");
			LOC13 = (i <= 32767);
			LA14: ;
			if (!LOC13) goto LA15;
			nimln(146, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_217317(result));
		}		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			nimln(147, "magicsys.nim");
			LOC18 = 0;
			nimln(702, "system.nim");
			LOC18 = ((-2147483647 -1) <= i);
			if (!(LOC18)) goto LA19;
			nimln(147, "magicsys.nim");
			LOC18 = (i <= 2147483647);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(148, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_217021(((NU8) 34)));
		}		goto LA11;
		LA20: ;
		{
			nimln(150, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_217021(((NU8) 35)));
		}		LA11: ;
	}	break;
	case 1:
	{
		nimln(153, "magicsys.nim");
		{
			NIM_BOOL LOC26;
			nimln(153, "magicsys.nim");
			LOC26 = 0;
			nimln(702, "system.nim");
			LOC26 = (-128 <= i);
			if (!(LOC26)) goto LA27;
			nimln(153, "magicsys.nim");
			LOC26 = (i <= 127);
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(154, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_217317(result));
		}		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			nimln(155, "magicsys.nim");
			LOC31 = 0;
			nimln(702, "system.nim");
			LOC31 = (-32768 <= i);
			if (!(LOC31)) goto LA32;
			nimln(155, "magicsys.nim");
			LOC31 = (i <= 32767);
			LA32: ;
			if (!LOC31) goto LA33;
			nimln(156, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_217021(((NU8) 33)));
		}		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			nimln(157, "magicsys.nim");
			LOC36 = 0;
			nimln(702, "system.nim");
			LOC36 = ((-2147483647 -1) <= i);
			if (!(LOC36)) goto LA37;
			nimln(157, "magicsys.nim");
			LOC36 = (i <= 2147483647);
			LA37: ;
			if (!LOC36) goto LA38;
			nimln(158, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_217021(((NU8) 34)));
		}		goto LA24;
		LA38: ;
		{
			nimln(160, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_217021(((NU8) 35)));
		}		LA24: ;
	}	break;
	default:
	{
		nimln(161, "magicsys.nim");
		internalerror_139369((*result).Info, ((NimStringDesc*) &TMP3043));	}	break;
	}
	popFrame();
}
N_NIMCALL(tsym172689*, getcompilerproc_217025)(NimStringDesc* name) {
	tsym172689* result;
	tident141017* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(164, "magicsys.nim");
	nimln(164, "magicsys.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_110856(name);
	ident = getident_141449(name, LOC1);
	nimln(165, "magicsys.nim");
	result = strtableget_179084(compilerprocs_217045, ident);
	nimln(166, "magicsys.nim");
	{
		nimln(166, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(167, "magicsys.nim");
		result = strtableget_179084(rodcompilerprocs_212057, ident);
		nimln(168, "magicsys.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(169, "magicsys.nim");
			strtableadd_179078(&compilerprocs_217045, result);			nimln(170, "magicsys.nim");
			{
				nimln(170, "magicsys.nim");
				if (!((*result).Kind == ((NU8) 22))) goto LA12;
				nimln(170, "magicsys.nim");
				loadstub_214393(result);			}			LA12: ;
		}		LA8: ;
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, registercompilerproc_217029)(tsym172689* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(173, "magicsys.nim");
	strtableadd_179078(&compilerprocs_217045, s);	popFrame();
}
N_NIMCALL(void, finishsystem_217033)(tstrtable172663 tab) {
	nimfr("FinishSystem", "magicsys.nim")
	popFrame();
}N_NOINLINE(void, compilermagicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(177, "magicsys.nim");
	initstrtable_172951(&compilerprocs_217045);	popFrame();
}

N_NOINLINE(void, compilermagicsysDatInit)(void) {
}

