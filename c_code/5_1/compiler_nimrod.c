/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
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
typedef struct TY102259 TY102259;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
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
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY10620;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY10620 raiseAction;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY102259 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, prependcurdir_424401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, handlecmdline_424603)(void);
N_NIMCALL(NI, paramcount_107029)(void);
N_NIMCALL(void, writecommandlineusage_152002)(void);
N_NIMCALL(void, processcmdline_419207)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_114316)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY102259* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_168607)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_148647)(void);
N_NIMCALL(void, maincommand_422811)(void);
N_NIMCALL(NimStringDesc*, gcgetstatistics_6021)(void);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, completecfilepath_148681)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_148713)(NimStringDesc* cmd);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, gcdisablemarkandsweep_6019)(void);
N_NIMCALL(void, initdefines_142065)(void);
static N_INLINE(void, initStackBottom)(void);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, compilertestabilityInit)(void);
N_NOINLINE(void, compilertestabilityDatInit)(void);
N_NOINLINE(void, pureparseutilsInit)(void);
N_NOINLINE(void, pureparseutilsDatInit)(void);
N_NOINLINE(void, purestrutilsInit)(void);
N_NOINLINE(void, purestrutilsDatInit)(void);
N_NOINLINE(void, puretimesInit)(void);
N_NOINLINE(void, puretimesDatInit)(void);
N_NOINLINE(void, posixposixInit)(void);
N_NOINLINE(void, posixposixDatInit)(void);
N_NOINLINE(void, pureosInit)(void);
N_NOINLINE(void, pureosDatInit)(void);
N_NOINLINE(void, compilerlistsInit)(void);
N_NOINLINE(void, compilerlistsDatInit)(void);
N_NOINLINE(void, purehashesInit)(void);
N_NOINLINE(void, purehashesDatInit)(void);
N_NOINLINE(void, purestrtabsInit)(void);
N_NOINLINE(void, purestrtabsDatInit)(void);
N_NOINLINE(void, compileroptionsInit)(void);
N_NOINLINE(void, compileroptionsDatInit)(void);
N_NOINLINE(void, puremathInit)(void);
N_NOINLINE(void, puremathDatInit)(void);
N_NOINLINE(void, collectionstablesInit)(void);
N_NOINLINE(void, collectionstablesDatInit)(void);
N_NOINLINE(void, compilerplatformInit)(void);
N_NOINLINE(void, compilerplatformDatInit)(void);
N_NOINLINE(void, compilercrcInit)(void);
N_NOINLINE(void, compilercrcDatInit)(void);
N_NOINLINE(void, compilerropesInit)(void);
N_NOINLINE(void, compilerropesDatInit)(void);
N_NOINLINE(void, coreunsignedInit)(void);
N_NOINLINE(void, coreunsignedDatInit)(void);
N_NOINLINE(void, puresocketsInit)(void);
N_NOINLINE(void, puresocketsDatInit)(void);
N_NOINLINE(void, compilermsgsInit)(void);
N_NOINLINE(void, compilermsgsDatInit)(void);
N_NOINLINE(void, compilernversionInit)(void);
N_NOINLINE(void, compilernversionDatInit)(void);
N_NOINLINE(void, compileridentsInit)(void);
N_NOINLINE(void, compileridentsDatInit)(void);
N_NOINLINE(void, compilercondsymsInit)(void);
N_NOINLINE(void, compilercondsymsDatInit)(void);
N_NOINLINE(void, purestreamsInit)(void);
N_NOINLINE(void, purestreamsDatInit)(void);
N_NOINLINE(void, pureosprocInit)(void);
N_NOINLINE(void, pureosprocDatInit)(void);
N_NOINLINE(void, compilerextccompInit)(void);
N_NOINLINE(void, compilerextccompDatInit)(void);
N_NOINLINE(void, compilerwordrecgInit)(void);
N_NOINLINE(void, compilerwordrecgDatInit)(void);
N_NOINLINE(void, compilerbabelcmdInit)(void);
N_NOINLINE(void, compilerbabelcmdDatInit)(void);
N_NOINLINE(void, compilercommandsInit)(void);
N_NOINLINE(void, compilercommandsDatInit)(void);
N_NOINLINE(void, compilerllstreamInit)(void);
N_NOINLINE(void, compilerllstreamDatInit)(void);
N_NOINLINE(void, compilernimlexbaseInit)(void);
N_NOINLINE(void, compilernimlexbaseDatInit)(void);
N_NOINLINE(void, compilerlexerInit)(void);
N_NOINLINE(void, compilerlexerDatInit)(void);
N_NOINLINE(void, compilernimconfInit)(void);
N_NOINLINE(void, compilernimconfDatInit)(void);
N_NOINLINE(void, collectionsintsetsInit)(void);
N_NOINLINE(void, collectionsintsetsDatInit)(void);
N_NOINLINE(void, compileridgenInit)(void);
N_NOINLINE(void, compileridgenDatInit)(void);
N_NOINLINE(void, compilerastInit)(void);
N_NOINLINE(void, compilerastDatInit)(void);
N_NOINLINE(void, compilerrodutilsInit)(void);
N_NOINLINE(void, compilerrodutilsDatInit)(void);
N_NOINLINE(void, compilerastalgoInit)(void);
N_NOINLINE(void, compilerastalgoDatInit)(void);
N_NOINLINE(void, compilerparserInit)(void);
N_NOINLINE(void, compilerparserDatInit)(void);
N_NOINLINE(void, compilerpbracesInit)(void);
N_NOINLINE(void, compilerpbracesDatInit)(void);
N_NOINLINE(void, compilerrendererInit)(void);
N_NOINLINE(void, compilerrendererDatInit)(void);
N_NOINLINE(void, compilerfiltersInit)(void);
N_NOINLINE(void, compilerfiltersDatInit)(void);
N_NOINLINE(void, compilerfilter_tmplInit)(void);
N_NOINLINE(void, compilerfilter_tmplDatInit)(void);
N_NOINLINE(void, compilersyntaxesInit)(void);
N_NOINLINE(void, compilersyntaxesDatInit)(void);
N_NOINLINE(void, compilertreesInit)(void);
N_NOINLINE(void, compilertreesDatInit)(void);
N_NOINLINE(void, compilertypesInit)(void);
N_NOINLINE(void, compilertypesDatInit)(void);
N_NOINLINE(void, purememfilesInit)(void);
N_NOINLINE(void, purememfilesDatInit)(void);
N_NOINLINE(void, compilerrodreadInit)(void);
N_NOINLINE(void, compilerrodreadDatInit)(void);
N_NOINLINE(void, compilermagicsysInit)(void);
N_NOINLINE(void, compilermagicsysDatInit)(void);
N_NOINLINE(void, compilerbitsetsInit)(void);
N_NOINLINE(void, compilerbitsetsDatInit)(void);
N_NOINLINE(void, compilernimsetsInit)(void);
N_NOINLINE(void, compilernimsetsDatInit)(void);
N_NOINLINE(void, compilersemthreadsInit)(void);
N_NOINLINE(void, compilersemthreadsDatInit)(void);
N_NOINLINE(void, compilerpassesInit)(void);
N_NOINLINE(void, compilerpassesDatInit)(void);
N_NOINLINE(void, compilertreetabInit)(void);
N_NOINLINE(void, compilertreetabDatInit)(void);
N_NOINLINE(void, compilersaturateInit)(void);
N_NOINLINE(void, compilersaturateDatInit)(void);
N_NOINLINE(void, compilersemfoldInit)(void);
N_NOINLINE(void, compilersemfoldDatInit)(void);
N_NOINLINE(void, compilerguardsInit)(void);
N_NOINLINE(void, compilerguardsDatInit)(void);
N_NOINLINE(void, compilersempass2Init)(void);
N_NOINLINE(void, compilersempass2DatInit)(void);
N_NOINLINE(void, compilercgmethInit)(void);
N_NOINLINE(void, compilercgmethDatInit)(void);
N_NOINLINE(void, compilerlambdaliftingInit)(void);
N_NOINLINE(void, compilerlambdaliftingDatInit)(void);
N_NOINLINE(void, compilertransfInit)(void);
N_NOINLINE(void, compilertransfDatInit)(void);
N_NOINLINE(void, compilerevaltemplInit)(void);
N_NOINLINE(void, compilerevaltemplDatInit)(void);
N_NOINLINE(void, compilerevalsInit)(void);
N_NOINLINE(void, compilerevalsDatInit)(void);
N_NOINLINE(void, compilersemdataInit)(void);
N_NOINLINE(void, compilersemdataDatInit)(void);
N_NOINLINE(void, compilerlookupsInit)(void);
N_NOINLINE(void, compilerlookupsDatInit)(void);
N_NOINLINE(void, compilerimporterInit)(void);
N_NOINLINE(void, compilerimporterDatInit)(void);
N_NOINLINE(void, compilerrodwriteInit)(void);
N_NOINLINE(void, compilerrodwriteDatInit)(void);
N_NOINLINE(void, compilerprocfindInit)(void);
N_NOINLINE(void, compilerprocfindDatInit)(void);
N_NOINLINE(void, compilerpragmasInit)(void);
N_NOINLINE(void, compilerpragmasDatInit)(void);
N_NOINLINE(void, compilersemtypinstInit)(void);
N_NOINLINE(void, compilersemtypinstDatInit)(void);
N_NOINLINE(void, compilerparampatternsInit)(void);
N_NOINLINE(void, compilerparampatternsDatInit)(void);
N_NOINLINE(void, docutilsrstastInit)(void);
N_NOINLINE(void, docutilsrstastDatInit)(void);
N_NOINLINE(void, docutilsrstInit)(void);
N_NOINLINE(void, docutilsrstDatInit)(void);
N_NOINLINE(void, docutilshighliteInit)(void);
N_NOINLINE(void, docutilshighliteDatInit)(void);
N_NOINLINE(void, docutilsrstgenInit)(void);
N_NOINLINE(void, docutilsrstgenDatInit)(void);
N_NOINLINE(void, purelexbaseInit)(void);
N_NOINLINE(void, purelexbaseDatInit)(void);
N_NOINLINE(void, pureunicodeInit)(void);
N_NOINLINE(void, pureunicodeDatInit)(void);
N_NOINLINE(void, purejsonInit)(void);
N_NOINLINE(void, purejsonDatInit)(void);
N_NOINLINE(void, compilerdocgenInit)(void);
N_NOINLINE(void, compilerdocgenDatInit)(void);
N_NOINLINE(void, purealgorithmInit)(void);
N_NOINLINE(void, purealgorithmDatInit)(void);
N_NOINLINE(void, collectionssequtilsInit)(void);
N_NOINLINE(void, collectionssequtilsDatInit)(void);
N_NOINLINE(void, compilersigmatchInit)(void);
N_NOINLINE(void, compilersigmatchDatInit)(void);
N_NOINLINE(void, compileraliasesInit)(void);
N_NOINLINE(void, compileraliasesDatInit)(void);
N_NOINLINE(void, compilerpatternsInit)(void);
N_NOINLINE(void, compilerpatternsDatInit)(void);
N_NOINLINE(void, compilersemInit)(void);
N_NOINLINE(void, compilersemDatInit)(void);
N_NOINLINE(void, compilerccgutilsInit)(void);
N_NOINLINE(void, compilerccgutilsDatInit)(void);
N_NOINLINE(void, compilercgendataInit)(void);
N_NOINLINE(void, compilercgendataDatInit)(void);
N_NOINLINE(void, compilerccgmergeInit)(void);
N_NOINLINE(void, compilerccgmergeDatInit)(void);
N_NOINLINE(void, compilercgenInit)(void);
N_NOINLINE(void, compilercgenDatInit)(void);
N_NOINLINE(void, compilerjsgenInit)(void);
N_NOINLINE(void, compilerjsgenDatInit)(void);
N_NOINLINE(void, compilerpassauxInit)(void);
N_NOINLINE(void, compilerpassauxDatInit)(void);
N_NOINLINE(void, compilerdependsInit)(void);
N_NOINLINE(void, compilerdependsDatInit)(void);
N_NOINLINE(void, compilerdocgen2Init)(void);
N_NOINLINE(void, compilerdocgen2DatInit)(void);
N_NOINLINE(void, pureparseoptInit)(void);
N_NOINLINE(void, pureparseoptDatInit)(void);
N_NOINLINE(void, compilerserviceInit)(void);
N_NOINLINE(void, compilerserviceDatInit)(void);
N_NOINLINE(void, compilermodulesInit)(void);
N_NOINLINE(void, compilermodulesDatInit)(void);
N_NOINLINE(void, compilerprettyInit)(void);
N_NOINLINE(void, compilerprettyDatInit)(void);
N_NOINLINE(void, compilermainInit)(void);
N_NOINLINE(void, compilermainDatInit)(void);
N_NOINLINE(void, nimrodInit)(void);
N_NOINLINE(void, nimrodDatInit)(void);
STRING_LITERAL(TMP7234, "./", 2);
STRING_LITERAL(TMP7235, "", 0);
STRING_LITERAL(TMP7237, "nimrod.cfg", 10);
STRING_LITERAL(TMP7238, "js", 2);
STRING_LITERAL(TMP7239, "node ", 5);
extern TFrame* frameptr_12037;
extern NimStringDesc* gprojectname_114197;
extern TSafePoint* exchandler_12038;
extern NimStringDesc* gprojectfull_114199;
extern tgcheap40816 gch_40844;
extern TNimType NTI1035; /* EOS */
extern E_Base* currexception_12040;
extern NimStringDesc* gprojectpath_114198;
extern NI gverbosity_114117;
extern NI gerrorcounter_138074;
extern NU32 gglobaloptions_114109;
extern NU8 gcmd_114111;
extern NimStringDesc* arguments_419205;
extern NimStringDesc* outfile_114115;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NimStringDesc*, prependcurdir_424401)(NimStringDesc* f) {
	NimStringDesc* result;
	nimfr("prependCurDir", "nimrod.nim")
	result = 0;
	nimln(29, "nimrod.nim");
	{
		NIM_BOOL LOC3;
		nimln(29, "nimrod.nim");
		LOC3 = 0;
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		nimln(29, "nimrod.nim");
		result = copyString(f);
	}	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		nimln(30, "nimrod.nim");
		nimln(30, "nimrod.nim");
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP7234));
appendString(LOC7, f);
		result = LOC7;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_12038;
	exchandler_12038 = s;
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
static N_INLINE(void, popSafePoint)(void) {
	exchandler_12038 = (*exchandler_12038).prev;
}
static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_12037 = s;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2246, "system.nim");
	result = currexception_12040;
	popFrame();
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
static N_INLINE(void, popCurrentException)(void) {
	asgnRefNoCycle((void**) &currexception_12040, (*currexception_12040).parent);
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}
N_NIMCALL(void, handlecmdline_424603)(void) {
	nimfr("HandleCmdLine", "nimrod.nim")
	nimln(35, "nimrod.nim");
	{
		NI LOC3;
		nimln(35, "nimrod.nim");
		nimln(35, "nimrod.nim");
		LOC3 = 0;
		LOC3 = paramcount_107029();
		if (!(LOC3 == 0)) goto LA4;
		nimln(36, "nimrod.nim");
		writecommandlineusage_152002();	}	goto LA1;
	LA4: ;
	{
		nimln(39, "nimrod.nim");
		processcmdline_419207(((NU8) 0), ((NimStringDesc*) &TMP7235));		nimln(40, "nimrod.nim");
		{
			TSafePoint TMP7236;
			TY102259 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!(((gprojectname_114197) && (gprojectname_114197)->Sup.len == 0))) goto LA9;
			nimln(41, "nimrod.nim");
			pushSafePoint(&TMP7236);
			TMP7236.status = setjmp(TMP7236.context);
			if (TMP7236.status == 0) {
				nimln(42, "nimrod.nim");
				asgnRefNoCycle((void**) &gprojectfull_114199, canonicalizepath_114316(gprojectname_114197));
				popSafePoint();
			}			else {
				popSafePoint();
				setFrame((TFrame*)&F);
				if (isObj(getCurrentException()->Sup.m_type, (&NTI1035))) {
					NimStringDesc* LOC14;
					TMP7236.status = 0;
					nimln(44, "nimrod.nim");
					LOC14 = 0;
					LOC14 = gprojectfull_114199; gprojectfull_114199 = copyStringRC1(gprojectname_114197);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}			}			if (TMP7236.status != 0) reraiseException();
			nimln(45, "nimrod.nim");
			chckNil((void*)&p);
			memset((void*)&p, 0, sizeof(p));
			nossplitFile(gprojectfull_114199, &p);			nimln(46, "nimrod.nim");
			LOC15 = 0;
			LOC15 = gprojectpath_114198; gprojectpath_114198 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			nimln(47, "nimrod.nim");
			LOC16 = 0;
			LOC16 = gprojectname_114197; gprojectname_114197 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}		goto LA7;
		LA9: ;
		{
			nimln(49, "nimrod.nim");
			asgnRefNoCycle((void**) &gprojectpath_114198, nosgetCurrentDir());
		}		LA7: ;
		nimln(50, "nimrod.nim");
		loadconfigs_168607(((NimStringDesc*) &TMP7237));		nimln(53, "nimrod.nim");
		initvars_148647();		nimln(54, "nimrod.nim");
		processcmdline_419207(((NU8) 1), ((NimStringDesc*) &TMP7235));		nimln(55, "nimrod.nim");
		maincommand_422811();		nimln(56, "nimrod.nim");
		{
			NimStringDesc* LOC22;
			nimln(702, "system.nim");
			if (!(2 <= gverbosity_114117)) goto LA20;
			nimln(56, "nimrod.nim");
			nimln(56, "nimrod.nim");
			LOC22 = 0;
			LOC22 = gcgetstatistics_6021();
			printf("%s\012", (LOC22)->data);
		}		LA20: ;
		nimln(58, "nimrod.nim");
		{
			nimln(58, "nimrod.nim");
			if (!(gerrorcounter_138074 == 0)) goto LA25;
			nimln(62, "nimrod.nim");
			{
				nimln(730, "system.nim");
				if (!((gglobaloptions_114109 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				nimln(63, "nimrod.nim");
				{
					NimStringDesc* ex;
					NimStringDesc* LOC35;
					NimStringDesc* LOC36;
					NimStringDesc* LOC37;
					NimStringDesc* LOC38;
					nimln(63, "nimrod.nim");
					if (!(gcmd_114111 == ((NU8) 4))) goto LA33;
					nimln(64, "nimrod.nim");
					nimln(65, "nimrod.nim");
					nimln(65, "nimrod.nim");
					nimln(65, "nimrod.nim");
					LOC35 = 0;
					LOC35 = nosChangeFileExt(gprojectfull_114199, ((NimStringDesc*) &TMP7238));
					LOC36 = 0;
					LOC36 = prependcurdir_424401(LOC35);
					LOC37 = 0;
					LOC37 = completecfilepath_148681(LOC36, NIM_TRUE);
					ex = nospquoteShell(LOC37);
					nimln(66, "nimrod.nim");
					nimln(66, "nimrod.nim");
					LOC38 = 0;
					LOC38 = rawNewString(ex->Sup.len + arguments_419205->Sup.len + 6);
appendString(LOC38, ((NimStringDesc*) &TMP7239));
appendString(LOC38, ex);
appendChar(LOC38, 32);
appendString(LOC38, arguments_419205);
					execexternalprogram_148713(LOC38);				}				goto LA31;
				LA33: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC46;
					binpath = 0;
					nimln(69, "nimrod.nim");
					{
						nimln(706, "system.nim");
						nimln(69, "nimrod.nim");
						if (!(0 < outfile_114115->Sup.len)) goto LA42;
						nimln(71, "nimrod.nim");
						binpath = prependcurdir_424401(outfile_114115);
					}					goto LA40;
					LA42: ;
					{
						NimStringDesc* LOC45;
						nimln(74, "nimrod.nim");
						nimln(74, "nimrod.nim");
						LOC45 = 0;
						LOC45 = nosChangeFileExt(gprojectfull_114199, ((NimStringDesc*) &TMP7235));
						binpath = prependcurdir_424401(LOC45);
					}					LA40: ;
					nimln(75, "nimrod.nim");
					ex = nospquoteShell(binpath);
					nimln(76, "nimrod.nim");
					nimln(76, "nimrod.nim");
					LOC46 = 0;
					LOC46 = rawNewString(ex->Sup.len + arguments_419205->Sup.len + 1);
appendString(LOC46, ex);
appendChar(LOC46, 32);
appendString(LOC46, arguments_419205);
					execexternalprogram_148713(LOC46);				}				LA31: ;
			}			LA29: ;
		}		LA25: ;
	}	LA1: ;
	popFrame();
}
static N_INLINE(void, initStackBottom)(void) {
	void* volatile locals;
	locals = 0;
	locals = ((void*) (&locals));
	setStackBottom(locals);}int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
	systemDatInit();
	systemInit();
	compilertestabilityDatInit();
	pureparseutilsDatInit();
	purestrutilsDatInit();
	puretimesDatInit();
	posixposixDatInit();
	pureosDatInit();
	compilerlistsDatInit();
	purehashesDatInit();
	purestrtabsDatInit();
	compileroptionsDatInit();
	puremathDatInit();
	collectionstablesDatInit();
	compilerplatformDatInit();
	compilercrcDatInit();
	compilerropesDatInit();
	coreunsignedDatInit();
	puresocketsDatInit();
	compilermsgsDatInit();
	compilernversionDatInit();
	compileridentsDatInit();
	compilercondsymsDatInit();
	purestreamsDatInit();
	pureosprocDatInit();
	compilerextccompDatInit();
	compilerwordrecgDatInit();
	compilerbabelcmdDatInit();
	compilercommandsDatInit();
	compilerllstreamDatInit();
	compilernimlexbaseDatInit();
	compilerlexerDatInit();
	compilernimconfDatInit();
	collectionsintsetsDatInit();
	compileridgenDatInit();
	compilerastDatInit();
	compilerrodutilsDatInit();
	compilerastalgoDatInit();
	compilerparserDatInit();
	compilerpbracesDatInit();
	compilerrendererDatInit();
	compilerfiltersDatInit();
	compilerfilter_tmplDatInit();
	compilersyntaxesDatInit();
	compilertreesDatInit();
	compilertypesDatInit();
	purememfilesDatInit();
	compilerrodreadDatInit();
	compilermagicsysDatInit();
	compilerbitsetsDatInit();
	compilernimsetsDatInit();
	compilersemthreadsDatInit();
	compilerpassesDatInit();
	compilertreetabDatInit();
	compilersaturateDatInit();
	compilersemfoldDatInit();
	compilerguardsDatInit();
	compilersempass2DatInit();
	compilercgmethDatInit();
	compilerlambdaliftingDatInit();
	compilertransfDatInit();
	compilerevaltemplDatInit();
	compilerevalsDatInit();
	compilersemdataDatInit();
	compilerlookupsDatInit();
	compilerimporterDatInit();
	compilerrodwriteDatInit();
	compilerprocfindDatInit();
	compilerpragmasDatInit();
	compilersemtypinstDatInit();
	compilerparampatternsDatInit();
	docutilsrstastDatInit();
	docutilsrstDatInit();
	docutilshighliteDatInit();
	docutilsrstgenDatInit();
	purelexbaseDatInit();
	pureunicodeDatInit();
	purejsonDatInit();
	compilerdocgenDatInit();
	purealgorithmDatInit();
	collectionssequtilsDatInit();
	compilersigmatchDatInit();
	compileraliasesDatInit();
	compilerpatternsDatInit();
	compilersemDatInit();
	compilerccgutilsDatInit();
	compilercgendataDatInit();
	compilerccgmergeDatInit();
	compilercgenDatInit();
	compilerjsgenDatInit();
	compilerpassauxDatInit();
	compilerdependsDatInit();
	compilerdocgen2DatInit();
	pureparseoptDatInit();
	compilerserviceDatInit();
	compilermodulesDatInit();
	compilerprettyDatInit();
	compilermainDatInit();
	nimrodDatInit();
	initStackBottom();
	compilertestabilityInit();
	pureparseutilsInit();
	purestrutilsInit();
	puretimesInit();
	posixposixInit();
	pureosInit();
	compilerlistsInit();
	purehashesInit();
	purestrtabsInit();
	compileroptionsInit();
	puremathInit();
	collectionstablesInit();
	compilerplatformInit();
	compilercrcInit();
	compilerropesInit();
	coreunsignedInit();
	puresocketsInit();
	compilermsgsInit();
	compilernversionInit();
	compileridentsInit();
	compilercondsymsInit();
	purestreamsInit();
	pureosprocInit();
	compilerextccompInit();
	compilerwordrecgInit();
	compilerbabelcmdInit();
	compilercommandsInit();
	compilerllstreamInit();
	compilernimlexbaseInit();
	compilerlexerInit();
	compilernimconfInit();
	collectionsintsetsInit();
	compileridgenInit();
	compilerastInit();
	compilerrodutilsInit();
	compilerastalgoInit();
	compilerparserInit();
	compilerpbracesInit();
	compilerrendererInit();
	compilerfiltersInit();
	compilerfilter_tmplInit();
	compilersyntaxesInit();
	compilertreesInit();
	compilertypesInit();
	purememfilesInit();
	compilerrodreadInit();
	compilermagicsysInit();
	compilerbitsetsInit();
	compilernimsetsInit();
	compilersemthreadsInit();
	compilerpassesInit();
	compilertreetabInit();
	compilersaturateInit();
	compilersemfoldInit();
	compilerguardsInit();
	compilersempass2Init();
	compilercgmethInit();
	compilerlambdaliftingInit();
	compilertransfInit();
	compilerevaltemplInit();
	compilerevalsInit();
	compilersemdataInit();
	compilerlookupsInit();
	compilerimporterInit();
	compilerrodwriteInit();
	compilerprocfindInit();
	compilerpragmasInit();
	compilersemtypinstInit();
	compilerparampatternsInit();
	docutilsrstastInit();
	docutilsrstInit();
	docutilshighliteInit();
	docutilsrstgenInit();
	purelexbaseInit();
	pureunicodeInit();
	purejsonInit();
	compilerdocgenInit();
	purealgorithmInit();
	collectionssequtilsInit();
	compilersigmatchInit();
	compileraliasesInit();
	compilerpatternsInit();
	compilersemInit();
	compilerccgutilsInit();
	compilercgendataInit();
	compilerccgmergeInit();
	compilercgenInit();
	compilerjsgenInit();
	compilerpassauxInit();
	compilerdependsInit();
	compilerdocgen2Init();
	pureparseoptInit();
	compilerserviceInit();
	compilermodulesInit();
	compilerprettyInit();
	compilermainInit();
	nimrodInit();
}
int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}
N_NOINLINE(void, nimrodInit)(void) {
	nimfr("nimrod", "nimrod.nim")
	nimln(83, "nimrod.nim");
	gcdisablemarkandsweep_6019();	nimln(84, "nimrod.nim");
	initdefines_142065();	nimln(87, "nimrod.nim");
	handlecmdline_424603();	nimln(88, "nimrod.nim");
	nimln(706, "system.nim");
	exit(((NI) (((NI8) ((0 < gerrorcounter_138074))))));	popFrame();
}

N_NOINLINE(void, nimrodDatInit)(void) {
}

