/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
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
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct TY117404 TY117404;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY14809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14809 raiseAction;
};
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY117404 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NI TY26420[16];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
N_NIMCALL(void, gcdisablemarkandsweep_8019)(void);
N_NIMCALL(void, initdefines_201146)(void);
N_NIMCALL(void, handlecmdline_611607)(void);
N_NIMCALL(NI, paramcount_123439)(void);
N_NIMCALL(void, writecommandlineusage_208020)(void);
N_NIMCALL(void, processcmdline_605209)(NU8 pass, NimStringDesc* cmd);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, canonicalizepath_169388)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(void, decref_50604)(tcell44935* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117404* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(void, loadconfigs_220811)(NimStringDesc* cfg);
N_NIMCALL(void, initvars_202820)(void);
N_NIMCALL(void, maincommand_609027)(void);
N_NIMCALL(NimStringDesc*, gcgetstatistics_8021)(void);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, prependcurdir_611401)(NimStringDesc* f);
N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, completecfilepath_202855)(NimStringDesc* cfile, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, execexternalprogram_202907)(NimStringDesc* cmd, NimStringDesc* prettycmd);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_testabilityInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_testabilityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_listsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_listsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_optionsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_optionsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_platformInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_platformDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_crcInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_crcDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_ropesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_ropesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_socketsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_socketsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_msgsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_msgsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nversionInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nversionDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_identsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_identsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_condsymsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_condsymsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_extccompInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_extccompDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_wordrecgInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_wordrecgDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimblecmdInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimblecmdDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_commandsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_commandsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_llstreamInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_llstreamDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimlexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimlexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_lexerInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_lexerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_idgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_idgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_astInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_astDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rodutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rodutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_astalgoInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_astalgoDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_parserInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_parserDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_pbracesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_pbracesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_filtersInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_filtersDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_filter_tmplInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_filter_tmplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_treesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_treesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_typesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_typesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rodreadInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rodreadDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_magicsysInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_magicsysDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_bitsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_bitsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_nimsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_passesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_passesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_treetabInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_treetabDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semdataInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semdataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_lookupsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_lookupsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_importerInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_importerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rodwriteInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_rodwriteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_saturateInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_saturateDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semfoldInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semfoldDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_procfindInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_procfindDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_pragmasInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_pragmasDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semtypinstInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semtypinstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_parampatternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_parampatternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_prettyInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_prettyDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_highliteDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, docutils_rstgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_guardsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_guardsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_sempass2Init)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_sempass2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_typesrendererInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_typesrendererDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_docgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_docgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_sigmatchInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_sigmatchDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_cgmethInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_cgmethDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_loweringsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_loweringsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_lambdaliftingInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_lambdaliftingDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_transfInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_transfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdepsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdepsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_evaltemplDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_vmDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_aliasesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_aliasesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_patternsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_patternsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semmacrosanityInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semmacrosanityDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semparallelInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semparallelDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_semDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_cgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_cgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_jsgenInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_jsgenDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_passauxInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_passauxDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_dependsInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_dependsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_docgen2Init)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_docgen2DatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_serviceInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_serviceDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_modulesInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_modulesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_mainInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_mainDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimInit)(void);
NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void);
STRING_LITERAL(TMP1875, "", 0);
STRING_LITERAL(TMP1901, "nim.cfg", 7);
STRING_LITERAL(TMP4858, "./", 2);
STRING_LITERAL(TMP4859, "js", 2);
STRING_LITERAL(TMP4860, "node ", 5);
extern NimStringDesc* gprojectname_169232;
extern TSafePoint* exchandler_16243;
extern NimStringDesc* gprojectfull_169234;
extern tgcheap47016 gch_47044;
extern TNimType NTI3233; /* OSError */
extern Exception* currexception_16245;
extern NimStringDesc* gprojectpath_169233;
extern NI gverbosity_169127;
extern NI gerrorcounter_196306;
extern NU32 gglobaloptions_169118;
extern NU8 gcmd_169120;
extern NimStringDesc* outfile_169124;
extern NimStringDesc* arguments_210144;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16243;
	exchandler_16243 = s;
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617(&gch_47044.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16243 = (*exchandler_16243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16245;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45671(&gch_47044.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51025)(tcell44935* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49429(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50604)(tcell44935* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44935* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	{
		tcell44935* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_16245, (*currexception_16245).parent);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, prependcurdir_611401)(NimStringDesc* f) {
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
appendString(LOC7, ((NimStringDesc*) &TMP4858));
appendString(LOC7, f);
		result = LOC7;
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, handlecmdline_611607)(void) {
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = paramcount_123439();
		if (!(LOC3 == 0)) goto LA4;
		writecommandlineusage_208020();
	}
	goto LA1;
	LA4: ;
	{
		processcmdline_605209(((NU8) 0), ((NimStringDesc*) &TMP1875));
		{
			TSafePoint TMP1876;
			TY117404 p;
			NimStringDesc* LOC15;
			NimStringDesc* LOC16;
			if (!!(((gprojectname_169232) && (gprojectname_169232)->Sup.len == 0))) goto LA9;
			pushSafePoint(&TMP1876);
			TMP1876.status = _setjmp(TMP1876.context);
			if (TMP1876.status == 0) {
				asgnRefNoCycle((void**) &gprojectfull_169234, canonicalizepath_169388(gprojectname_169232));
				popSafePoint();
			}
			else {
				popSafePoint();
				if (isObj(getCurrentException()->Sup.m_type, (&NTI3233))) {
					NimStringDesc* LOC14;
					TMP1876.status = 0;
					LOC14 = 0;
					LOC14 = gprojectfull_169234; gprojectfull_169234 = copyStringRC1(gprojectname_169232);
					if (LOC14) nimGCunrefNoCycle(LOC14);
					popCurrentException();
				}
			}
			if (TMP1876.status != 0) reraiseException();
			memset((void*)&p, 0, sizeof(p));
			chckNil((void*)&p);
			memset((void*)&p, 0, sizeof(p));
			nossplitFile(gprojectfull_169234, &p);
			LOC15 = 0;
			LOC15 = gprojectpath_169233; gprojectpath_169233 = copyStringRC1(p.Field0);
			if (LOC15) nimGCunrefNoCycle(LOC15);
			LOC16 = 0;
			LOC16 = gprojectname_169232; gprojectname_169232 = copyStringRC1(p.Field1);
			if (LOC16) nimGCunrefNoCycle(LOC16);
		}
		goto LA7;
		LA9: ;
		{
			asgnRefNoCycle((void**) &gprojectpath_169233, nosgetCurrentDir());
		}
		LA7: ;
		loadconfigs_220811(((NimStringDesc*) &TMP1901));
		initvars_202820();
		processcmdline_605209(((NU8) 1), ((NimStringDesc*) &TMP1875));
		maincommand_609027();
		{
			NimStringDesc* LOC22;
			if (!(2 <= gverbosity_169127)) goto LA20;
			LOC22 = 0;
			LOC22 = gcgetstatistics_8021();
			printf("%s\012", (LOC22)->data);
		}
		LA20: ;
		{
			if (!(gerrorcounter_196306 == 0)) goto LA25;
			{
				if (!((gglobaloptions_169118 &(1<<((((NU8) 13))&31)))!=0)) goto LA29;
				{
					NimStringDesc* ex;
					NimStringDesc* LOC44;
					if (!(gcmd_169120 == ((NU8) 4))) goto LA33;
					ex = 0;
					{
						NimStringDesc* LOC39;
						if (!(0 < outfile_169124->Sup.len)) goto LA37;
						LOC39 = 0;
						LOC39 = prependcurdir_611401(outfile_169124);
						ex = nospquoteShell(LOC39);
					}
					goto LA35;
					LA37: ;
					{
						NimStringDesc* LOC41;
						NimStringDesc* LOC42;
						NimStringDesc* LOC43;
						LOC41 = 0;
						LOC41 = noschangeFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP4859));
						LOC42 = 0;
						LOC42 = prependcurdir_611401(LOC41);
						LOC43 = 0;
						LOC43 = completecfilepath_202855(LOC42, NIM_TRUE);
						ex = nospquoteShell(LOC43);
					}
					LA35: ;
					LOC44 = 0;
					LOC44 = rawNewString(ex->Sup.len + arguments_210144->Sup.len + 6);
appendString(LOC44, ((NimStringDesc*) &TMP4860));
appendString(LOC44, ex);
appendChar(LOC44, 32);
appendString(LOC44, arguments_210144);
					execexternalprogram_202907(LOC44, ((NimStringDesc*) &TMP1875));
				}
				goto LA31;
				LA33: ;
				{
					NimStringDesc* binpath;
					NimStringDesc* ex;
					NimStringDesc* LOC52;
					binpath = 0;
					{
						if (!(0 < outfile_169124->Sup.len)) goto LA48;
						binpath = prependcurdir_611401(outfile_169124);
					}
					goto LA46;
					LA48: ;
					{
						NimStringDesc* LOC51;
						LOC51 = 0;
						LOC51 = noschangeFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP1875));
						binpath = prependcurdir_611401(LOC51);
					}
					LA46: ;
					ex = nospquoteShell(binpath);
					LOC52 = 0;
					LOC52 = rawNewString(ex->Sup.len + arguments_210144->Sup.len + 1);
appendString(LOC52, ex);
appendChar(LOC52, 32);
appendString(LOC52, arguments_210144);
					execexternalprogram_202907(LOC52, ((NimStringDesc*) &TMP1875));
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
	HEX00_nimblecmdDatInit();
	stdlib_parseoptDatInit();
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
	stdlib_lexbaseDatInit();
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
	HEX00_prettyDatInit();
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
	HEX00_serviceDatInit();
	HEX00_modulesDatInit();
	HEX00_mainDatInit();
	nimDatInit();
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
	HEX00_nimblecmdInit();
	stdlib_parseoptInit();
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
	stdlib_lexbaseInit();
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
	HEX00_prettyInit();
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
	nimInit();
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

NIM_EXTERNC N_NOINLINE(void, nimInit)(void) {
	gcdisablemarkandsweep_8019();
	initdefines_201146();
	handlecmdline_611607();
	exit(((NI) (((NI8) ((0 < gerrorcounter_196306))))));
}

NIM_EXTERNC N_NOINLINE(void, nimDatInit)(void) {
}

