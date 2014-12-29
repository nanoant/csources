/* Generated by Nim Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tcell43935 tcell43935;
typedef struct tcellseq43951 tcellseq43951;
typedef struct tgcheap46016 tgcheap46016;
typedef struct tcellset43947 tcellset43947;
typedef struct tpagedesc43943 tpagedesc43943;
typedef struct tmemregion26210 tmemregion26210;
typedef struct tsmallchunk25440 tsmallchunk25440;
typedef struct tllchunk26204 tllchunk26204;
typedef struct tbigchunk25442 tbigchunk25442;
typedef struct tintset25417 tintset25417;
typedef struct ttrunk25413 ttrunk25413;
typedef struct tavlnode26208 tavlnode26208;
typedef struct tgcstat46014 tgcstat46014;
typedef struct TY113804 TY113804;
typedef struct tbasechunk25438 tbasechunk25438;
typedef struct tfreecell25430 tfreecell25430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY2889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY2894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2889 marker;
TY2894 deepcopy;
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
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY13809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY13809 raiseAction;
};
struct  tcell43935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq43951  {
NI Len;
NI Cap;
tcell43935** D;
};
struct  tcellset43947  {
NI Counter;
NI Max;
tpagedesc43943* Head;
tpagedesc43943** Data;
};
typedef tsmallchunk25440* TY26222[512];
typedef ttrunk25413* ttrunkbuckets25415[256];
struct  tintset25417  {
ttrunkbuckets25415 Data;
};
struct  tmemregion26210  {
NI Minlargeobj;
NI Maxlargeobj;
TY26222 Freesmallchunks;
tllchunk26204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk25442* Freechunkslist;
tintset25417 Chunkstarts;
tavlnode26208* Root;
tavlnode26208* Deleted;
tavlnode26208* Last;
tavlnode26208* Freeavlnodes;
};
struct  tgcstat46014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq43951 Zct;
tcellseq43951 Decstack;
tcellset43947 Cycleroots;
tcellseq43951 Tempstack;
NI Recgclock;
tmemregion26210 Region;
tgcstat46014 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY113804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NI TY25420[8];
struct  tpagedesc43943  {
tpagedesc43943* Next;
NI Key;
TY25420 Bits;
};
struct  tbasechunk25438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk25440  {
  tbasechunk25438 Sup;
tsmallchunk25440* Next;
tsmallchunk25440* Prev;
tfreecell25430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26204  {
NI Size;
NI Acc;
tllchunk26204* Next;
};
struct  tbigchunk25442  {
  tbasechunk25438 Sup;
tbigchunk25442* Next;
tbigchunk25442* Prev;
NI Align;
NF Data;
};
struct  ttrunk25413  {
ttrunk25413* Next;
NI Key;
TY25420 Bits;
};
typedef tavlnode26208* TY26214[2];
struct  tavlnode26208  {
TY26214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell25430  {
tfreecell25430* Next;
NI Zerofield;
};
N_NIMCALL(void, gcdisablemarkandsweep_7822)(void);
N_NIMCALL(void, initdefines_199152)(void);
N_NIMCALL(void, handlecmdline_597607)(void);
N_NIMCALL(NI, paramcount_119839)(void);
N_NIMCALL(void, writecommandlineusage_204023)(void);
N_NIMCALL(void, processcmdline_591213)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_164392)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell43935*, usrtocell_47646)(void* usr);
static N_INLINE(void, rtladdzct_49204)(tcell43935* c);
N_NOINLINE(void, addzct_47617)(tcellseq43951* s, tcell43935* c);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50025)(tcell43935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_47667)(tcell43935* c);
static N_INLINE(void, rtladdcycleroot_48429)(tcell43935* c);
N_NOINLINE(void, incl_44671)(tcellset43947* s, tcell43935* cell);
static N_INLINE(void, decref_49604)(tcell43935* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY113804* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_215811)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_200812)(void);
N_NIMCALL(void, maincommand_595027)(void);
N_NIMCALL(NimStringDesc*, gcgetstatistics_7824)(void);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, prependcurdir_597401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, completecfilepath_200865)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_200917)(NimStringDesc* cmd);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, systemDatInit)(void);
N_NOINLINE(void, HEX00_testabilityInit)(void);
N_NOINLINE(void, HEX00_testabilityDatInit)(void);
N_NOINLINE(void, stdlib_parseutilsInit)(void);
N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
N_NOINLINE(void, stdlib_strutilsInit)(void);
N_NOINLINE(void, stdlib_strutilsDatInit)(void);
N_NOINLINE(void, stdlib_timesInit)(void);
N_NOINLINE(void, stdlib_timesDatInit)(void);
N_NOINLINE(void, stdlib_posixInit)(void);
N_NOINLINE(void, stdlib_posixDatInit)(void);
N_NOINLINE(void, stdlib_osInit)(void);
N_NOINLINE(void, stdlib_osDatInit)(void);
N_NOINLINE(void, HEX00_listsInit)(void);
N_NOINLINE(void, HEX00_listsDatInit)(void);
N_NOINLINE(void, stdlib_hashesInit)(void);
N_NOINLINE(void, stdlib_hashesDatInit)(void);
N_NOINLINE(void, stdlib_strtabsInit)(void);
N_NOINLINE(void, stdlib_strtabsDatInit)(void);
N_NOINLINE(void, stdlib_streamsInit)(void);
N_NOINLINE(void, stdlib_streamsDatInit)(void);
N_NOINLINE(void, stdlib_cpuinfoInit)(void);
N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
N_NOINLINE(void, stdlib_osprocInit)(void);
N_NOINLINE(void, stdlib_osprocDatInit)(void);
N_NOINLINE(void, stdlib_mathInit)(void);
N_NOINLINE(void, stdlib_mathDatInit)(void);
N_NOINLINE(void, stdlib_setsInit)(void);
N_NOINLINE(void, stdlib_setsDatInit)(void);
N_NOINLINE(void, HEX00_optionsInit)(void);
N_NOINLINE(void, HEX00_optionsDatInit)(void);
N_NOINLINE(void, stdlib_tablesInit)(void);
N_NOINLINE(void, stdlib_tablesDatInit)(void);
N_NOINLINE(void, HEX00_platformInit)(void);
N_NOINLINE(void, HEX00_platformDatInit)(void);
N_NOINLINE(void, HEX00_crcInit)(void);
N_NOINLINE(void, HEX00_crcDatInit)(void);
N_NOINLINE(void, HEX00_ropesInit)(void);
N_NOINLINE(void, HEX00_ropesDatInit)(void);
N_NOINLINE(void, stdlib_unsignedInit)(void);
N_NOINLINE(void, stdlib_unsignedDatInit)(void);
N_NOINLINE(void, stdlib_socketsInit)(void);
N_NOINLINE(void, stdlib_socketsDatInit)(void);
N_NOINLINE(void, HEX00_msgsInit)(void);
N_NOINLINE(void, HEX00_msgsDatInit)(void);
N_NOINLINE(void, HEX00_nversionInit)(void);
N_NOINLINE(void, HEX00_nversionDatInit)(void);
N_NOINLINE(void, HEX00_identsInit)(void);
N_NOINLINE(void, HEX00_identsDatInit)(void);
N_NOINLINE(void, HEX00_condsymsInit)(void);
N_NOINLINE(void, HEX00_condsymsDatInit)(void);
N_NOINLINE(void, HEX00_extccompInit)(void);
N_NOINLINE(void, HEX00_extccompDatInit)(void);
N_NOINLINE(void, HEX00_wordrecgInit)(void);
N_NOINLINE(void, HEX00_wordrecgDatInit)(void);
N_NOINLINE(void, HEX00_babelcmdInit)(void);
N_NOINLINE(void, HEX00_babelcmdDatInit)(void);
N_NOINLINE(void, HEX00_commandsInit)(void);
N_NOINLINE(void, HEX00_commandsDatInit)(void);
N_NOINLINE(void, HEX00_llstreamInit)(void);
N_NOINLINE(void, HEX00_llstreamDatInit)(void);
N_NOINLINE(void, HEX00_nimlexbaseInit)(void);
N_NOINLINE(void, HEX00_nimlexbaseDatInit)(void);
N_NOINLINE(void, HEX00_lexerInit)(void);
N_NOINLINE(void, HEX00_lexerDatInit)(void);
N_NOINLINE(void, HEX00_nimconfInit)(void);
N_NOINLINE(void, HEX00_nimconfDatInit)(void);
N_NOINLINE(void, stdlib_intsetsInit)(void);
N_NOINLINE(void, stdlib_intsetsDatInit)(void);
N_NOINLINE(void, HEX00_idgenInit)(void);
N_NOINLINE(void, HEX00_idgenDatInit)(void);
N_NOINLINE(void, HEX00_astInit)(void);
N_NOINLINE(void, HEX00_astDatInit)(void);
N_NOINLINE(void, HEX00_rodutilsInit)(void);
N_NOINLINE(void, HEX00_rodutilsDatInit)(void);
N_NOINLINE(void, HEX00_astalgoInit)(void);
N_NOINLINE(void, HEX00_astalgoDatInit)(void);
N_NOINLINE(void, HEX00_parserInit)(void);
N_NOINLINE(void, HEX00_parserDatInit)(void);
N_NOINLINE(void, HEX00_pbracesInit)(void);
N_NOINLINE(void, HEX00_pbracesDatInit)(void);
N_NOINLINE(void, HEX00_rendererInit)(void);
N_NOINLINE(void, HEX00_rendererDatInit)(void);
N_NOINLINE(void, HEX00_filtersInit)(void);
N_NOINLINE(void, HEX00_filtersDatInit)(void);
N_NOINLINE(void, HEX00_filter_tmplInit)(void);
N_NOINLINE(void, HEX00_filter_tmplDatInit)(void);
N_NOINLINE(void, HEX00_syntaxesInit)(void);
N_NOINLINE(void, HEX00_syntaxesDatInit)(void);
N_NOINLINE(void, HEX00_treesInit)(void);
N_NOINLINE(void, HEX00_treesDatInit)(void);
N_NOINLINE(void, HEX00_typesInit)(void);
N_NOINLINE(void, HEX00_typesDatInit)(void);
N_NOINLINE(void, stdlib_memfilesInit)(void);
N_NOINLINE(void, stdlib_memfilesDatInit)(void);
N_NOINLINE(void, HEX00_rodreadInit)(void);
N_NOINLINE(void, HEX00_rodreadDatInit)(void);
N_NOINLINE(void, HEX00_magicsysInit)(void);
N_NOINLINE(void, HEX00_magicsysDatInit)(void);
N_NOINLINE(void, HEX00_bitsetsInit)(void);
N_NOINLINE(void, HEX00_bitsetsDatInit)(void);
N_NOINLINE(void, HEX00_nimsetsInit)(void);
N_NOINLINE(void, HEX00_nimsetsDatInit)(void);
N_NOINLINE(void, HEX00_passesInit)(void);
N_NOINLINE(void, HEX00_passesDatInit)(void);
N_NOINLINE(void, HEX00_treetabInit)(void);
N_NOINLINE(void, HEX00_treetabDatInit)(void);
N_NOINLINE(void, HEX00_vmdefInit)(void);
N_NOINLINE(void, HEX00_vmdefDatInit)(void);
N_NOINLINE(void, HEX00_semdataInit)(void);
N_NOINLINE(void, HEX00_semdataDatInit)(void);
N_NOINLINE(void, HEX00_prettybaseInit)(void);
N_NOINLINE(void, HEX00_prettybaseDatInit)(void);
N_NOINLINE(void, HEX00_lookupsInit)(void);
N_NOINLINE(void, HEX00_lookupsDatInit)(void);
N_NOINLINE(void, HEX00_importerInit)(void);
N_NOINLINE(void, HEX00_importerDatInit)(void);
N_NOINLINE(void, HEX00_rodwriteInit)(void);
N_NOINLINE(void, HEX00_rodwriteDatInit)(void);
N_NOINLINE(void, HEX00_saturateInit)(void);
N_NOINLINE(void, HEX00_saturateDatInit)(void);
N_NOINLINE(void, HEX00_semfoldInit)(void);
N_NOINLINE(void, HEX00_semfoldDatInit)(void);
N_NOINLINE(void, HEX00_procfindInit)(void);
N_NOINLINE(void, HEX00_procfindDatInit)(void);
N_NOINLINE(void, HEX00_pragmasInit)(void);
N_NOINLINE(void, HEX00_pragmasDatInit)(void);
N_NOINLINE(void, HEX00_semtypinstInit)(void);
N_NOINLINE(void, HEX00_semtypinstDatInit)(void);
N_NOINLINE(void, HEX00_parampatternsInit)(void);
N_NOINLINE(void, HEX00_parampatternsDatInit)(void);
N_NOINLINE(void, stdlib_lexbaseInit)(void);
N_NOINLINE(void, stdlib_lexbaseDatInit)(void);
N_NOINLINE(void, stdlib_unicodeInit)(void);
N_NOINLINE(void, stdlib_unicodeDatInit)(void);
N_NOINLINE(void, stdlib_jsonInit)(void);
N_NOINLINE(void, stdlib_jsonDatInit)(void);
N_NOINLINE(void, docutils_rstastInit)(void);
N_NOINLINE(void, docutils_rstastDatInit)(void);
N_NOINLINE(void, docutils_rstInit)(void);
N_NOINLINE(void, docutils_rstDatInit)(void);
N_NOINLINE(void, docutils_highliteInit)(void);
N_NOINLINE(void, docutils_highliteDatInit)(void);
N_NOINLINE(void, stdlib_sequtilsInit)(void);
N_NOINLINE(void, stdlib_sequtilsDatInit)(void);
N_NOINLINE(void, stdlib_algorithmInit)(void);
N_NOINLINE(void, stdlib_algorithmDatInit)(void);
N_NOINLINE(void, docutils_rstgenInit)(void);
N_NOINLINE(void, docutils_rstgenDatInit)(void);
N_NOINLINE(void, HEX00_guardsInit)(void);
N_NOINLINE(void, HEX00_guardsDatInit)(void);
N_NOINLINE(void, HEX00_sempass2Init)(void);
N_NOINLINE(void, HEX00_sempass2DatInit)(void);
N_NOINLINE(void, stdlib_macrosInit)(void);
N_NOINLINE(void, stdlib_macrosDatInit)(void);
N_NOINLINE(void, stdlib_xmltreeInit)(void);
N_NOINLINE(void, stdlib_xmltreeDatInit)(void);
N_NOINLINE(void, stdlib_cookiesInit)(void);
N_NOINLINE(void, stdlib_cookiesDatInit)(void);
N_NOINLINE(void, stdlib_cgiInit)(void);
N_NOINLINE(void, stdlib_cgiDatInit)(void);
N_NOINLINE(void, HEX00_typesrendererInit)(void);
N_NOINLINE(void, HEX00_typesrendererDatInit)(void);
N_NOINLINE(void, HEX00_docgenInit)(void);
N_NOINLINE(void, HEX00_docgenDatInit)(void);
N_NOINLINE(void, HEX00_prettyInit)(void);
N_NOINLINE(void, HEX00_prettyDatInit)(void);
N_NOINLINE(void, HEX00_sigmatchInit)(void);
N_NOINLINE(void, HEX00_sigmatchDatInit)(void);
N_NOINLINE(void, HEX00_cgmethInit)(void);
N_NOINLINE(void, HEX00_cgmethDatInit)(void);
N_NOINLINE(void, HEX00_loweringsInit)(void);
N_NOINLINE(void, HEX00_loweringsDatInit)(void);
N_NOINLINE(void, HEX00_lambdaliftingInit)(void);
N_NOINLINE(void, HEX00_lambdaliftingDatInit)(void);
N_NOINLINE(void, HEX00_transfInit)(void);
N_NOINLINE(void, HEX00_transfDatInit)(void);
N_NOINLINE(void, HEX00_vmgenInit)(void);
N_NOINLINE(void, HEX00_vmgenDatInit)(void);
N_NOINLINE(void, HEX00_vmdepsInit)(void);
N_NOINLINE(void, HEX00_vmdepsDatInit)(void);
N_NOINLINE(void, HEX00_evaltemplInit)(void);
N_NOINLINE(void, HEX00_evaltemplDatInit)(void);
N_NOINLINE(void, HEX00_vmInit)(void);
N_NOINLINE(void, HEX00_vmDatInit)(void);
N_NOINLINE(void, HEX00_aliasesInit)(void);
N_NOINLINE(void, HEX00_aliasesDatInit)(void);
N_NOINLINE(void, HEX00_patternsInit)(void);
N_NOINLINE(void, HEX00_patternsDatInit)(void);
N_NOINLINE(void, HEX00_semmacrosanityInit)(void);
N_NOINLINE(void, HEX00_semmacrosanityDatInit)(void);
N_NOINLINE(void, HEX00_semparallelInit)(void);
N_NOINLINE(void, HEX00_semparallelDatInit)(void);
N_NOINLINE(void, HEX00_semInit)(void);
N_NOINLINE(void, HEX00_semDatInit)(void);
N_NOINLINE(void, HEX00_ccgutilsInit)(void);
N_NOINLINE(void, HEX00_ccgutilsDatInit)(void);
N_NOINLINE(void, HEX00_cgendataInit)(void);
N_NOINLINE(void, HEX00_cgendataDatInit)(void);
N_NOINLINE(void, HEX00_ccgmergeInit)(void);
N_NOINLINE(void, HEX00_ccgmergeDatInit)(void);
N_NOINLINE(void, HEX00_cgenInit)(void);
N_NOINLINE(void, HEX00_cgenDatInit)(void);
N_NOINLINE(void, HEX00_jsgenInit)(void);
N_NOINLINE(void, HEX00_jsgenDatInit)(void);
N_NOINLINE(void, HEX00_passauxInit)(void);
N_NOINLINE(void, HEX00_passauxDatInit)(void);
N_NOINLINE(void, HEX00_dependsInit)(void);
N_NOINLINE(void, HEX00_dependsDatInit)(void);
N_NOINLINE(void, HEX00_docgen2Init)(void);
N_NOINLINE(void, HEX00_docgen2DatInit)(void);
N_NOINLINE(void, stdlib_parseoptInit)(void);
N_NOINLINE(void, stdlib_parseoptDatInit)(void);
N_NOINLINE(void, HEX00_serviceInit)(void);
N_NOINLINE(void, HEX00_serviceDatInit)(void);
N_NOINLINE(void, HEX00_modulesInit)(void);
N_NOINLINE(void, HEX00_modulesDatInit)(void);
N_NOINLINE(void, HEX00_mainInit)(void);
N_NOINLINE(void, HEX00_mainDatInit)(void);
N_NOINLINE(void, nimrodInit)(void);
N_NOINLINE(void, nimrodDatInit)(void);
STRING_LITERAL(TMP1479, "", 0);
STRING_LITERAL(TMP1646, "nimrod.cfg", 10);
STRING_LITERAL(TMP4784, "./", 2);
STRING_LITERAL(TMP4785, "js", 2);
STRING_LITERAL(TMP4786, "node ", 5);
extern NimStringDesc* gprojectname_164235;
extern TSafePoint* exchandler_15243;
extern NimStringDesc* gprojectfull_164237;
extern tgcheap46016 gch_46044;
extern TNimType NTI3033; /* OSError */
extern Exception* currexception_15245;
extern NimStringDesc* gprojectpath_164236;
extern NI gverbosity_164127;
extern NI gerrorcounter_194303;
extern NU32 gglobaloptions_164118;
extern NU8 gcmd_164120;
extern NimStringDesc* outfile_164124;
extern NimStringDesc* arguments_591209;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_15243;
	exchandler_15243 = s;
}

static N_INLINE(tcell43935*, usrtocell_47646)(void* usr) {
	tcell43935* result;
	result = 0;
	result = ((tcell43935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell43935))))));
	return result;
}

static N_INLINE(void, rtladdzct_49204)(tcell43935* c) {
	addzct_47617(&gch_46044.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell43935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_47646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell43935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_47646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_49204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_15243 = (*exchandler_15243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_15245;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell43935* c;
	c = usrtocell_47646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_49204(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_47667)(tcell43935* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_48429)(tcell43935* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_44671(&gch_46044.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_50025)(tcell43935* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_47667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_48429(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_49604)(tcell43935* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_49204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_47667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_48429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell43935* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_47646(src);
		incref_50025(LOC5);
	}
	LA3: ;
	{
		tcell43935* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_47646((*dest));
		decref_49604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_15245, (*currexception_15245).parent);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, prependcurdir_597401)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosisAbsolute(f);
		if (!LOC3) goto LA4;
		result = copyString(f);
	}
	goto LA1;
	LA4: ;
	{
		NimStringDesc* LOC7;
		LOC7 = 0;
		LOC7 = rawNewString(f->Sup.len + 2);
appendString(LOC7, ((NimStringDesc*) &TMP4784));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, handlecmdline_597607)(void) {
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = paramcount_119839();
		if (!(LOC3 == 0)) goto LA4;
		writecommandlineusage_204023();
	}
	goto LA1;
	LA4: ;
	{
		processcmdline_591213(((NU8) 0), ((NimStringDesc*) &TMP1479));
		{
			TSafePoint TMP1480;
			TY113804 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			if (!!(((gprojectname_164235) && (gprojectname_164235)->Sup.len == 0))) goto LA9;
			pushSafePoint(&TMP1480);
			TMP1480.status = setjmp(TMP1480.context);
			if (TMP1480.status == 0) {
				asgnRefNoCycle((void**) &gprojectfull_164237, canonicalizepath_164392(gprojectname_164235));
				popSafePoint();
			}
			else {
				popSafePoint();
				if (isObj(getCurrentException()->Sup.m_type, (&NTI3033))) {
					NimStringDesc* LOC14;
					TMP1480.status = 0;
					LOC14 = 0;
					LOC14 = gprojectfull_164237; gprojectfull_164237 = copyStringRC1(gprojectname_164235);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP1480.status != 0) reraiseException();
			memset((void*)&p, 0, sizeof(p));
			chckNil((void*)&p);
			memset((void*)&p, 0, sizeof(p));
			nossplitFile(gprojectfull_164237, &p);
			LOC15 = 0;
			LOC15 = gprojectpath_164236; gprojectpath_164236 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			LOC16 = 0;
			LOC16 = gprojectname_164235; gprojectname_164235 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			asgnRefNoCycle((void**) &gprojectpath_164236, nosgetCurrentDir());
		}
		LA7: ;
		loadconfigs_215811(((NimStringDesc*) &TMP1646));
		initvars_200812();
		processcmdline_591213(((NU8) 1), ((NimStringDesc*) &TMP1479));
		maincommand_595027();
		{
			NimStringDesc* LOC22;
			if (!(2 <= gverbosity_164127)) goto LA20;
			LOC22 = 0;
			LOC22 = gcgetstatistics_7824();
			printf("%s\012", (LOC22)->data);
		}
		LA20: ;
		{
			if (!(gerrorcounter_194303 == 0)) goto LA25;
			{
				if (!((gglobaloptions_164118 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				{
					NimStringDesc* ex;
					NimStringDesc* LOC44;
					if (!(gcmd_164120 == ((NU8) 4))) goto LA33;
					ex = 0;
					{
						NimStringDesc* LOC39;
						if (!(0 < outfile_164124->Sup.len)) goto LA37;
						LOC39 = 0;
						LOC39 = prependcurdir_597401(outfile_164124);
						ex = nospquoteShell(LOC39);
					}
					goto LA35;
					LA37: ;
					{
						NimStringDesc* LOC41;
						NimStringDesc* LOC42;
						NimStringDesc* LOC43;
						LOC41 = 0;
						LOC41 = noschangeFileExt(gprojectfull_164237, ((NimStringDesc*) &TMP4785));
						LOC42 = 0;
						LOC42 = prependcurdir_597401(LOC41);
						LOC43 = 0;
						LOC43 = completecfilepath_200865(LOC42, NIM_TRUE);
						ex = nospquoteShell(LOC43);
					}
					LA35: ;
					LOC44 = 0;
					LOC44 = rawNewString(ex->Sup.len + arguments_591209->Sup.len + 6);
appendString(LOC44, ((NimStringDesc*) &TMP4786));
appendString(LOC44, ex);
appendChar(LOC44, 32);
appendString(LOC44, arguments_591209);
					execexternalprogram_200917(LOC44);
				}
				goto LA31;
				LA33: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC52;
					binpath = 0;
					{
						if (!(0 < outfile_164124->Sup.len)) goto LA48;
						binpath = prependcurdir_597401(outfile_164124);
					}
					goto LA46;
					LA48: ;
					{
						NimStringDesc* LOC51;
						LOC51 = 0;
						LOC51 = noschangeFileExt(gprojectfull_164237, ((NimStringDesc*) &TMP1479));
						binpath = prependcurdir_597401(LOC51);
					}
					LA46: ;
					ex = nospquoteShell(binpath);
					LOC52 = 0;
					LOC52 = rawNewString(ex->Sup.len + arguments_591209->Sup.len + 1);
appendString(LOC52, ex);
appendChar(LOC52, 32);
appendString(LOC52, arguments_591209);
					execexternalprogram_200917(LOC52);
				}
				LA31: ;
			}
			LA29: ;
		}
		LA25: ;
	}
	LA1: ;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	HEX00_testabilityDatInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_timesDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	HEX00_listsDatInit();
	stdlib_hashesDatInit();
	stdlib_strtabsDatInit();
	stdlib_streamsDatInit();
	stdlib_cpuinfoDatInit();
	stdlib_osprocDatInit();
	stdlib_mathDatInit();
	stdlib_setsDatInit();
	HEX00_optionsDatInit();
	stdlib_tablesDatInit();
	HEX00_platformDatInit();
	HEX00_crcDatInit();
	HEX00_ropesDatInit();
	stdlib_unsignedDatInit();
	stdlib_socketsDatInit();
	HEX00_msgsDatInit();
	HEX00_nversionDatInit();
	HEX00_identsDatInit();
	HEX00_condsymsDatInit();
	HEX00_extccompDatInit();
	HEX00_wordrecgDatInit();
	HEX00_babelcmdDatInit();
	HEX00_commandsDatInit();
	HEX00_llstreamDatInit();
	HEX00_nimlexbaseDatInit();
	HEX00_lexerDatInit();
	HEX00_nimconfDatInit();
	stdlib_intsetsDatInit();
	HEX00_idgenDatInit();
	HEX00_astDatInit();
	HEX00_rodutilsDatInit();
	HEX00_astalgoDatInit();
	HEX00_parserDatInit();
	HEX00_pbracesDatInit();
	HEX00_rendererDatInit();
	HEX00_filtersDatInit();
	HEX00_filter_tmplDatInit();
	HEX00_syntaxesDatInit();
	HEX00_treesDatInit();
	HEX00_typesDatInit();
	stdlib_memfilesDatInit();
	HEX00_rodreadDatInit();
	HEX00_magicsysDatInit();
	HEX00_bitsetsDatInit();
	HEX00_nimsetsDatInit();
	HEX00_passesDatInit();
	HEX00_treetabDatInit();
	HEX00_vmdefDatInit();
	HEX00_semdataDatInit();
	HEX00_prettybaseDatInit();
	HEX00_lookupsDatInit();
	HEX00_importerDatInit();
	HEX00_rodwriteDatInit();
	HEX00_saturateDatInit();
	HEX00_semfoldDatInit();
	HEX00_procfindDatInit();
	HEX00_pragmasDatInit();
	HEX00_semtypinstDatInit();
	HEX00_parampatternsDatInit();
	stdlib_lexbaseDatInit();
	stdlib_unicodeDatInit();
	stdlib_jsonDatInit();
	docutils_rstastDatInit();
	docutils_rstDatInit();
	docutils_highliteDatInit();
	stdlib_sequtilsDatInit();
	stdlib_algorithmDatInit();
	docutils_rstgenDatInit();
	HEX00_guardsDatInit();
	HEX00_sempass2DatInit();
	stdlib_macrosDatInit();
	stdlib_xmltreeDatInit();
	stdlib_cookiesDatInit();
	stdlib_cgiDatInit();
	HEX00_typesrendererDatInit();
	HEX00_docgenDatInit();
	HEX00_prettyDatInit();
	HEX00_sigmatchDatInit();
	HEX00_cgmethDatInit();
	HEX00_loweringsDatInit();
	HEX00_lambdaliftingDatInit();
	HEX00_transfDatInit();
	HEX00_vmgenDatInit();
	HEX00_vmdepsDatInit();
	HEX00_evaltemplDatInit();
	HEX00_vmDatInit();
	HEX00_aliasesDatInit();
	HEX00_patternsDatInit();
	HEX00_semmacrosanityDatInit();
	HEX00_semparallelDatInit();
	HEX00_semDatInit();
	HEX00_ccgutilsDatInit();
	HEX00_cgendataDatInit();
	HEX00_ccgmergeDatInit();
	HEX00_cgenDatInit();
	HEX00_jsgenDatInit();
	HEX00_passauxDatInit();
	HEX00_dependsDatInit();
	HEX00_docgen2DatInit();
	stdlib_parseoptDatInit();
	HEX00_serviceDatInit();
	HEX00_modulesDatInit();
	HEX00_mainDatInit();
	nimrodDatInit();
	HEX00_testabilityInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_timesInit();
	stdlib_posixInit();
	stdlib_osInit();
	HEX00_listsInit();
	stdlib_hashesInit();
	stdlib_strtabsInit();
	stdlib_streamsInit();
	stdlib_cpuinfoInit();
	stdlib_osprocInit();
	stdlib_mathInit();
	stdlib_setsInit();
	HEX00_optionsInit();
	stdlib_tablesInit();
	HEX00_platformInit();
	HEX00_crcInit();
	HEX00_ropesInit();
	stdlib_unsignedInit();
	stdlib_socketsInit();
	HEX00_msgsInit();
	HEX00_nversionInit();
	HEX00_identsInit();
	HEX00_condsymsInit();
	HEX00_extccompInit();
	HEX00_wordrecgInit();
	HEX00_babelcmdInit();
	HEX00_commandsInit();
	HEX00_llstreamInit();
	HEX00_nimlexbaseInit();
	HEX00_lexerInit();
	HEX00_nimconfInit();
	stdlib_intsetsInit();
	HEX00_idgenInit();
	HEX00_astInit();
	HEX00_rodutilsInit();
	HEX00_astalgoInit();
	HEX00_parserInit();
	HEX00_pbracesInit();
	HEX00_rendererInit();
	HEX00_filtersInit();
	HEX00_filter_tmplInit();
	HEX00_syntaxesInit();
	HEX00_treesInit();
	HEX00_typesInit();
	stdlib_memfilesInit();
	HEX00_rodreadInit();
	HEX00_magicsysInit();
	HEX00_bitsetsInit();
	HEX00_nimsetsInit();
	HEX00_passesInit();
	HEX00_treetabInit();
	HEX00_vmdefInit();
	HEX00_semdataInit();
	HEX00_prettybaseInit();
	HEX00_lookupsInit();
	HEX00_importerInit();
	HEX00_rodwriteInit();
	HEX00_saturateInit();
	HEX00_semfoldInit();
	HEX00_procfindInit();
	HEX00_pragmasInit();
	HEX00_semtypinstInit();
	HEX00_parampatternsInit();
	stdlib_lexbaseInit();
	stdlib_unicodeInit();
	stdlib_jsonInit();
	docutils_rstastInit();
	docutils_rstInit();
	docutils_highliteInit();
	stdlib_sequtilsInit();
	stdlib_algorithmInit();
	docutils_rstgenInit();
	HEX00_guardsInit();
	HEX00_sempass2Init();
	stdlib_macrosInit();
	stdlib_xmltreeInit();
	stdlib_cookiesInit();
	stdlib_cgiInit();
	HEX00_typesrendererInit();
	HEX00_docgenInit();
	HEX00_prettyInit();
	HEX00_sigmatchInit();
	HEX00_cgmethInit();
	HEX00_loweringsInit();
	HEX00_lambdaliftingInit();
	HEX00_transfInit();
	HEX00_vmgenInit();
	HEX00_vmdepsInit();
	HEX00_evaltemplInit();
	HEX00_vmInit();
	HEX00_aliasesInit();
	HEX00_patternsInit();
	HEX00_semmacrosanityInit();
	HEX00_semparallelInit();
	HEX00_semInit();
	HEX00_ccgutilsInit();
	HEX00_cgendataInit();
	HEX00_ccgmergeInit();
	HEX00_cgenInit();
	HEX00_jsgenInit();
	HEX00_passauxInit();
	HEX00_dependsInit();
	HEX00_docgen2Init();
	stdlib_parseoptInit();
	HEX00_serviceInit();
	HEX00_modulesInit();
	HEX00_mainInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	nimrodInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_NOINLINE(void, nimrodInit)(void) {
	gcdisablemarkandsweep_7822();
	initdefines_199152();
	handlecmdline_597607();
	exit(((NI) (((NI8) ((0 < gerrorcounter_194303))))));
}

N_NOINLINE(void, nimrodDatInit)(void) {
}

