/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct tlinkedlist128028 tlinkedlist128028;
typedef struct tlistentry128022 tlistentry128022;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell44533 tcell44533;
typedef struct TNimType TNimType;
typedef struct tcellseq44549 tcellseq44549;
typedef struct tgcheap46616 tgcheap46616;
typedef struct tcellset44545 tcellset44545;
typedef struct tpagedesc44541 tpagedesc44541;
typedef struct tmemregion26810 tmemregion26810;
typedef struct tsmallchunk26040 tsmallchunk26040;
typedef struct tllchunk26804 tllchunk26804;
typedef struct tbigchunk26042 tbigchunk26042;
typedef struct tintset26017 tintset26017;
typedef struct ttrunk26013 ttrunk26013;
typedef struct tavlnode26808 tavlnode26808;
typedef struct tgcstat46614 tgcstat46614;
typedef struct stringtableobj132012 stringtableobj132012;
typedef struct TNimNode TNimNode;
typedef struct TY120208 TY120208;
typedef struct keyvaluepair132008 keyvaluepair132008;
typedef struct twin32finddata104019 twin32finddata104019;
typedef struct tfiletime103079 tfiletime103079;
typedef struct TY116404 TY116404;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct tstrentry128024 tstrentry128024;
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
typedef struct keyvaluepairseq132010 keyvaluepairseq132010;
struct  tlinkedlist128028  {
tlistentry128022* Head;
tlistentry128022* Tail;
NI Counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tcell44533  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44549  {
NI Len;
NI Cap;
tcell44533** D;
};
struct  tcellset44545  {
NI Counter;
NI Max;
tpagedesc44541* Head;
tpagedesc44541** Data;
};
typedef tsmallchunk26040* TY26822[512];
typedef ttrunk26013* ttrunkbuckets26015[256];
struct  tintset26017  {
ttrunkbuckets26015 Data;
};
struct  tmemregion26810  {
NI Minlargeobj;
NI Maxlargeobj;
TY26822 Freesmallchunks;
tllchunk26804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26042* Freechunkslist;
tintset26017 Chunkstarts;
tavlnode26808* Root;
tavlnode26808* Deleted;
tavlnode26808* Last;
tavlnode26808* Freeavlnodes;
};
struct  tgcstat46614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44549 Zct;
tcellseq44549 Decstack;
tcellset44545 Cycleroots;
tcellseq44549 Tempstack;
NI Recgclock;
tmemregion26810 Region;
tgcstat46614 Stat;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepair132008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tfiletime103079  {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NI16 TY104028[260];
typedef NI16 TY104032[14];
struct  twin32finddata104019  {
NI32 Dwfileattributes;
tfiletime103079 Ftcreationtime;
tfiletime103079 Ftlastaccesstime;
tfiletime103079 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY104028 Cfilename;
TY104032 Calternatefilename;
};
struct TY116404 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef N_STDCALL_PTR(NI32, TY104045) (NI hfindfile, twin32finddata104019* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY104205) (NI hfindfile);
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
} TY14609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14609 raiseAction;
};
typedef NimStringDesc* TY197301[1];
typedef NimStringDesc* TY169951[2];
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tstrentry128024  {
  tlistentry128022 Sup;
NimStringDesc* Data;
};
typedef NU8 TY211607[32];
typedef NI TY26020[8];
struct  tpagedesc44541  {
tpagedesc44541* Next;
NI Key;
TY26020 Bits;
};
struct  tbasechunk26038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26040  {
  tbasechunk26038 Sup;
tsmallchunk26040* Next;
tsmallchunk26040* Prev;
tfreecell26030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26804  {
NI Size;
NI Acc;
tllchunk26804* Next;
};
struct  tbigchunk26042  {
  tbasechunk26038 Sup;
tbigchunk26042* Next;
tbigchunk26042* Prev;
NI Align;
NF Data;
};
struct  ttrunk26013  {
ttrunk26013* Next;
NI Key;
TY26020 Bits;
};
typedef tavlnode26808* TY26814[2];
struct  tavlnode26808  {
TY26814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  stringtableobj132012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq132010* Data;
NU8 Mode;
};
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct TY120208 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq132010 {
  TGenericSeq Sup;
  keyvaluepair132008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
N_NIMCALL(stringtableobj132012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50625)(tcell44533* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48267)(tcell44533* c);
static N_INLINE(void, rtladdcycleroot_49029)(tcell44533* c);
N_NOINLINE(void, incl_45271)(tcellset44545* s, tcell44533* cell);
static N_INLINE(void, decref_50204)(tcell44533* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_169379)(void);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair132008* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj132012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj132012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, HEX2F_116099)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NI, findfirstfile_113216)(NimStringDesc* a, twin32finddata104019* b);
static N_INLINE(NIM_BOOL, skipfinddata_113236)(twin32finddata104019* f);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY116404* Result);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_78995)(NI16* s);
N_NIMCALL(void, nstPut)(stringtableobj132012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, getgeneratedpath_169429)(void);
N_NIMCALL(NimStringDesc*, shortendir_169407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_170205)(FILE* f_170209, NimStringDesc** x_170213, NI x_170213Len0);
N_NIMCALL(void, write_12665)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_169825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_170356)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_170292)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_169388)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, rawfindfile2_170318)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_128741)(tlinkedlist128028* list, tlistentry128022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74428, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_170468)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY211607 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_170409)(NimStringDesc* s, TY120208** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP41, "", 0);
STRING_LITERAL(TMP1357, "*.nimble", 8);
STRING_LITERAL(TMP1358, "*.babel", 7);
STRING_LITERAL(TMP1359, "nimcache", 8);
STRING_LITERAL(TMP1361, "\015\012", 2);
STRING_LITERAL(TMP1362, "cannot create directory: ", 25);
STRING_LITERAL(TMP1392, "nim", 3);
STRING_LITERAL(TMP1881, "lib", 3);
static NIM_CONST TY211607 TMP1882 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1883, "true", 4);
NU32 goptions_169116;
NU32 gglobaloptions_169118;
NI8 gexitcode_169119;
NU8 gcmd_169120;
NU8 gselectedgc_169121;
tlinkedlist128028 searchpaths_169122;
tlinkedlist128028 lazypaths_169123;
NimStringDesc* outfile_169124;
extern tgcheap46616 gch_46644;
NimStringDesc* docseesrcurl_169125;
NimStringDesc* headerfile_169126;
NI gverbosity_169127;
NI gnumberofprocessors_169128;
NIM_BOOL gwholeproject_169129;
NimStringDesc* gevalexpr_169130;
NF glastcmdtime_169131;
NIM_BOOL glistfullpaths_169132;
NIM_BOOL isserving_169133;
NI32 gdirtybufferidx_169134;
NI32 gdirtyoriginalidx_169135;
NIM_BOOL gnonimblepath_169136;
stringtableobj132012* gconfigvars_169229;
stringtableobj132012* gdlloverrides_169230;
NimStringDesc* libpath_169231;
NimStringDesc* gprojectname_169232;
NimStringDesc* gprojectpath_169233;
NimStringDesc* gprojectfull_169234;
NI32 gprojectmainidx_169235;
NimStringDesc* nimcachedir_169236;
NimStringDesc* command_169237;
TY120208* commandargs_169259;
extern TNimType NTI120208; /* seq[string] */
NIM_BOOL gkeepcomments_169260;
TY120208* implicitimports_169282;
TY120208* implicitincludes_169304;
stringtableobj132012* packagecache_169601;
TNimType NTI169014; /* TOption */
TNimType NTI169016; /* TOptions */
extern TY104045 Dl_104044;
extern TY104205 Dl_104204;
extern TSafePoint* exchandler_16043;
extern TNimType NTI3233; /* OSError */
extern Exception* currexception_16045;

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44533))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(tcell44533* c) {
	addzct_48217(&gch_46644.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44533* c;
	c = usrtocell_48246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_49804(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48267)(tcell44533* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49029)(tcell44533* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45271(&gch_46644.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, incref_50625)(tcell44533* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48267(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49029(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50204)(tcell44533* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_49804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48267(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49029(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44533* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48246(src);
		incref_50625(LOC5);
	}
	LA3: ;
	{
		tcell44533* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48246((*dest));
		decref_50204(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, canonicalizepath_169388)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosexpandFilename(path);
	result = nsuToLowerStr(LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_169379)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	keyvaluepair132008 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppDir();
	memset((void*)&LOC2, 0, sizeof(LOC2));
	nossplitPath(LOC1, &LOC2);
	result = copyString(LOC2.Field0);
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, shortendir_169407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_169379();
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 92);
	prefix = LOC1;
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = nsuStartsWith(dir, prefix);
		if (!LOC5) goto LA6;
		result = copyStr(dir, prefix->Sup.len);
		goto BeforeRet;
	}
	LA6: ;
	LOC8 = 0;
	LOC8 = rawNewString(gprojectpath_169233->Sup.len + 1);
appendString(LOC8, gprojectpath_169233);
appendChar(LOC8, 92);
	prefix = LOC8;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = nsuStartsWith(dir, prefix);
		if (!LOC11) goto LA12;
		result = copyStr(dir, prefix->Sup.len);
		goto BeforeRet;
	}
	LA12: ;
	result = copyString(dir);
	BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, skipfinddata_113236)(twin32finddata104019* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NI) ((*f).Cfilename[(0)- 0])) == 46);
	if (!(LOC1)) goto LA2;
	LOC3 = 0;
	LOC3 = (((NI) ((*f).Cfilename[(1)- 0])) == 0);
	if (LOC3) goto LA4;
	LOC5 = 0;
	LOC5 = (((NI) ((*f).Cfilename[(1)- 0])) == 46);
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f).Cfilename[(2)- 0])) == 0);
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NimStringDesc*, getpackagename_169825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
	result = 0;
	parents = 0;
	{
		{
			NimStringDesc* d_169831;
			NimStringDesc* current_169878;
			d_169831 = 0;
			current_169878 = copyString(path);
			{
				while (1) {
					current_169878 = nosparentDir(current_169878);
					{
						if (!(current_169878->Sup.len == 0)) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_169831 = current_169878;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_169601, d_169831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_169601, d_169831);
						goto BeforeRet;
					}
					LA12: ;
					parents += 1;
					{
						NimStringDesc* file_169844;
						NimStringDesc* HEX3Atmp_169861;
						twin32finddata104019 f_169864;
						NI res_169866;
						file_169844 = 0;
						HEX3Atmp_169861 = 0;
						HEX3Atmp_169861 = HEX2F_116099(d_169831, ((NimStringDesc*) &TMP1357));
						memset((void*)&f_169864, 0, sizeof(f_169864));
						res_169866 = 0;
						res_169866 = findfirstfile_113216(HEX3Atmp_169861, &f_169864);
						{
							if (!!((res_169866 == -1))) goto LA17;
							{
								while (1) {
									{
										NIM_BOOL LOC23;
										NIM_BOOL LOC24;
										TY116404 LOC28;
										NimStringDesc* LOC29;
										NimStringDesc* LOC30;
										TY116404 LOC31;
										LOC23 = 0;
										LOC24 = 0;
										LOC24 = skipfinddata_113236(&f_169864);
										LOC23 = !(LOC24);
										if (!(LOC23)) goto LA25;
										LOC23 = ((NI32)(f_169864.Dwfileattributes & ((NI32) 16)) == ((NI32) 0));
										LA25: ;
										if (!LOC23) goto LA26;
										memset((void*)&LOC28, 0, sizeof(LOC28));
										nossplitFile(HEX3Atmp_169861, &LOC28);
										LOC29 = 0;
										LOC29 = HEX24_78995(((NI16*) (&f_169864.Cfilename[(0)- 0])));
										LOC30 = 0;
										LOC30 = nosextractFilename(LOC29);
										file_169844 = HEX2F_116099(LOC28.Field0, LOC30);
										memset((void*)&LOC31, 0, sizeof(LOC31));
										nossplitFile(file_169844, &LOC31);
										result = copyString(LOC31.Field1);
										goto LA1;
									}
									LA26: ;
									{
										NI32 LOC34;
										LOC34 = 0;
										LOC34 = Dl_104044(res_169866, &f_169864);
										if (!(LOC34 == ((NI32) 0))) goto LA35;
										goto LA19;
									}
									LA35: ;
								}
							} LA19: ;
							Dl_104204(res_169866);
						}
						LA17: ;
					}
					{
						NimStringDesc* file_169845;
						NimStringDesc* HEX3Atmp_169869;
						twin32finddata104019 f_169872;
						NI res_169874;
						file_169845 = 0;
						HEX3Atmp_169869 = 0;
						HEX3Atmp_169869 = HEX2F_116099(d_169831, ((NimStringDesc*) &TMP1358));
						memset((void*)&f_169872, 0, sizeof(f_169872));
						res_169874 = 0;
						res_169874 = findfirstfile_113216(HEX3Atmp_169869, &f_169872);
						{
							if (!!((res_169874 == -1))) goto LA40;
							{
								while (1) {
									{
										NIM_BOOL LOC46;
										NIM_BOOL LOC47;
										TY116404 LOC51;
										NimStringDesc* LOC52;
										NimStringDesc* LOC53;
										TY116404 LOC54;
										LOC46 = 0;
										LOC47 = 0;
										LOC47 = skipfinddata_113236(&f_169872);
										LOC46 = !(LOC47);
										if (!(LOC46)) goto LA48;
										LOC46 = ((NI32)(f_169872.Dwfileattributes & ((NI32) 16)) == ((NI32) 0));
										LA48: ;
										if (!LOC46) goto LA49;
										memset((void*)&LOC51, 0, sizeof(LOC51));
										nossplitFile(HEX3Atmp_169869, &LOC51);
										LOC52 = 0;
										LOC52 = HEX24_78995(((NI16*) (&f_169872.Cfilename[(0)- 0])));
										LOC53 = 0;
										LOC53 = nosextractFilename(LOC52);
										file_169845 = HEX2F_116099(LOC51.Field0, LOC53);
										memset((void*)&LOC54, 0, sizeof(LOC54));
										nossplitFile(file_169845, &LOC54);
										result = copyString(LOC54.Field1);
										goto LA1;
									}
									LA49: ;
									{
										NI32 LOC57;
										LOC57 = 0;
										LOC57 = Dl_104044(res_169874, &f_169872);
										if (!(LOC57 == ((NI32) 0))) goto LA58;
										goto LA42;
									}
									LA58: ;
								}
							} LA42: ;
							Dl_104204(res_169874);
						}
						LA40: ;
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA62;
		result = copyString(((NimStringDesc*) &TMP41));
	}
	LA62: ;
	{
		NimStringDesc* d_169846;
		NimStringDesc* current_169882;
		d_169846 = 0;
		current_169882 = copyString(path);
		{
			while (1) {
				current_169882 = nosparentDir(current_169882);
				{
					if (!(current_169882->Sup.len == 0)) goto LA69;
					goto LA65;
				}
				LA69: ;
				d_169846 = current_169882;
				nstPut(packagecache_169601, d_169846, result);
				parents -= 1;
				{
					if (!(parents <= 0)) goto LA73;
					goto LA64;
				}
				LA73: ;
			}
		} LA65: ;
	} LA64: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getgeneratedpath_169429)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(0 < nimcachedir_169236->Sup.len)) goto LA3;
		result = copyString(nimcachedir_169236);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_169407(gprojectpath_169233);
		result = HEX2F_116099(LOC6, ((NimStringDesc*) &TMP1359));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16043;
	exchandler_16043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16043 = (*exchandler_16043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16045;
	return result;
}

static N_INLINE(void, writeln_170205)(FILE* f_170209, NimStringDesc** x_170213, NI x_170213Len0) {
	{
		NimStringDesc* i_170226;
		NI i_170234;
		i_170226 = 0;
		i_170234 = 0;
		{
			while (1) {
				if (!(i_170234 < x_170213Len0)) goto LA3;
				i_170226 = x_170213[i_170234];
				write_12665(f_170209, i_170226);
				i_170234 += 1;
			} LA3: ;
		}
	}
	write_12665(f_170209, ((NimStringDesc*) &TMP1361));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_16045, (*currexception_16045).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_170001)(NimStringDesc* f, NIM_BOOL createsubdir) {
	NimStringDesc* result;
	keyvaluepair132008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	NimStringDesc* subdir;
	result = 0;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitPath(f, &LOC1);
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	subdir = getgeneratedpath_169429();
	{
		TSafePoint TMP1360;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1360);
		TMP1360.status = setjmp(TMP1360.context);
		if (TMP1360.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3233))) {
				TY197301 LOC9;
				NimStringDesc* LOC10;
				TMP1360.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1362));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_170205(stdout, LOC9, 1);
				exit(1);
				popCurrentException();
			}
		}
		if (TMP1360.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_169942)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	keyvaluepair132008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY169951 LOC2;
	result = 0;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitPath(path, &LOC1);
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_169429();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_169928)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_169825(path);
	{
		if (!(x->Sup.len == 0)) goto LA3;
		result = copyString(path);
	}
	goto LA1;
	LA3: ;
	{
		TY116404 LOC6;
		NimStringDesc* p;
		NimStringDesc* file;
		NimStringDesc* ext;
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		memset((void*)&LOC6, 0, sizeof(LOC6));
		nossplitFile(path, &LOC6);
		p = 0;
		p = LOC6.Field0;
		file = 0;
		file = LOC6.Field1;
		ext = 0;
		ext = LOC6.Field2;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = rawNewString(x->Sup.len + file->Sup.len + 1);
appendString(LOC8, x);
appendChar(LOC8, 95);
appendString(LOC8, file);
		LOC9 = 0;
		LOC9 = HEX2F_116099(p, LOC8);
		LOC7 = rawNewString(LOC9->Sup.len + ext->Sup.len + 0);
appendString(LOC7, LOC9);
appendString(LOC7, ext);
		result = LOC7;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile_170292)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	{
		NimStringDesc* it_170296;
		tstrentry128024* it_170302;
		it_170296 = 0;
		it_170302 = ((tstrentry128024*) (searchpaths_169122.Head));
		{
			while (1) {
				if (!!((it_170302 == NIM_NIL))) goto LA3;
				it_170296 = (*it_170302).Data;
				result = nosjoinPath(it_170296, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_169388(result);
					goto BeforeRet;
				}
				LA7: ;
				it_170302 = ((tstrentry128024*) ((*it_170302).Sup.Next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP41));
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_170318)(NimStringDesc* f) {
	NimStringDesc* result;
	tstrentry128024* it;
	result = 0;
	it = ((tstrentry128024*) (lazypaths_169123.Head));
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			result = nosjoinPath((*it).Data, f);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = nosexistsFile(result);
				if (!LOC5) goto LA6;
				bringtofront_128741(&lazypaths_169123, &it->Sup);
				result = canonicalizepath_169388(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((tstrentry128024*) ((*it).Sup.Next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP41));
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_170356)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_170292(f);
	{
		NimStringDesc* LOC5;
		if (!(result->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_170292(LOC5);
		{
			if (!(result->Sup.len == 0)) goto LA8;
			result = rawfindfile2_170318(f);
			{
				NimStringDesc* LOC14;
				if (!(result->Sup.len == 0)) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_170318(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_170366)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY116404 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1392));
	memset((void*)&LOC1, 0, sizeof(LOC1));
	nossplitFile(currentmodule, &LOC1);
	currentpath = LOC1.Field0;
	result = HEX2F_116099(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_170356(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_169418)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 < path->Sup.len);
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(path->data[(NI64)(path->Sup.len - 1)]) == (NU8)(92));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyStrLast(path, 0, (NI64)(path->Sup.len - 2));
	}
	goto LA1;
	LA5: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, existsconfigvar_169338)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_169229, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_169348)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_169229, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_170468)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1881));
		if (!LOC3) goto LA4;
		start = 3;
	}
	goto LA1;
	LA4: ;
	{
		start = 0;
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1882, 0);
	{
		if (!(0 <= ende)) goto LA9;
		result = copyStrLast(s, start, (NI64)(ende - 1));
	}
	goto LA7;
	LA9: ;
	{
		result = copyStr(s, start);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, incldynliboverride_170481)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_170468(lib);
	nstPut(gdlloverrides_169230, LOC1, ((NimStringDesc*) &TMP1883));
}

N_NIMCALL(void, setconfigvar_169358)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_169229, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_170490)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_170468(lib);
	result = nsthasKey(gdlloverrides_169230, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_170409)(NimStringDesc* s, TY120208** dest) {
	NI le;
	NI ri;
	le = nsuFindChar(s, 40, 0);
	ri = nsuFindChar(s, 41, (NI64)(le + 1));
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix;
		NimStringDesc* suffix;
		LOC3 = 0;
		LOC3 = (0 <= le);
		if (!(LOC3)) goto LA4;
		LOC3 = (le < ri);
		LA4: ;
		if (!LOC3) goto LA5;
		prefix = copyStrLast(s, 0, (NI64)(le - 1));
		suffix = copyStr(s, (NI64)(ri + 1));
		{
			NimStringDesc* middle_170420;
			NimStringDesc* HEX3Atmp_170440;
			NI last_170444;
			middle_170420 = 0;
			HEX3Atmp_170440 = 0;
			HEX3Atmp_170440 = copyStrLast(s, (NI64)(le + 1), (NI64)(ri - 1));
			last_170444 = 0;
			{
				if (!(0 < HEX3Atmp_170440->Sup.len)) goto LA10;
				{
					while (1) {
						NI first_170446;
						NimStringDesc* LOC18;
						if (!(last_170444 <= HEX3Atmp_170440->Sup.len)) goto LA13;
						first_170446 = last_170444;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_170444 < HEX3Atmp_170440->Sup.len);
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_170440->data[last_170444]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_170444 += 1;
							} LA15: ;
						}
						middle_170420 = copyStrLast(HEX3Atmp_170440, first_170446, (NI64)(last_170444 - 1));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_170420->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_170420);
appendString(LOC18, suffix);
						libcandidates_170409(LOC18, dest);
						last_170444 += 1;
					} LA13: ;
				}
			}
			LA10: ;
		}
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC20;
		(*dest) = (TY120208*) incrSeq(&((*dest))->Sup, sizeof(NimStringDesc*));
		LOC20 = 0;
		LOC20 = (*dest)->data[(*dest)->Sup.len-1]; (*dest)->data[(*dest)->Sup.len-1] = copyStringRC1(s);
		if (LOC20) nimGCunrefNoCycle(LOC20);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getoutfile_169368)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_169124) && (outfile_169124)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_169124);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_169317)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(0 < commandargs_169259->Sup.len)) goto LA3;
		result = copyString(commandargs_169259->data[0]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_169232);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_169605)(void) {
	asgnRef((void**) &packagecache_169601, nstnewStringTable(((NU8) 0)));
}
NIM_EXTERNC N_NOINLINE(void, HEX00_optionsInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NimStringDesc* LOC9;
	NimStringDesc* LOC10;
	goptions_169116 = 2202238;
	gglobaloptions_169118 = 134217728;
	gcmd_169120 = ((NU8) 0);
	gselectedgc_169121 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_169124; outfile_169124 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_169125; docseesrcurl_169125 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_169126; headerfile_169126 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_169127 = 1;
	LOC4 = 0;
	LOC4 = gevalexpr_169130; gevalexpr_169130 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_169133 = NIM_FALSE;
	gdirtybufferidx_169134 = ((NI32) 0);
	gdirtyoriginalidx_169135 = ((NI32) 0);
	gnonimblepath_169136 = NIM_FALSE;
	asgnRef((void**) &gconfigvars_169229, nstnewStringTable(((NU8) 2)));
	asgnRef((void**) &gdlloverrides_169230, nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_169231; libpath_169231 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_169232; gprojectname_169232 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_169233; gprojectpath_169233 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_169234; gprojectfull_169234 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_169236; nimcachedir_169236 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_169237; command_169237 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_169259) nimGCunrefNoCycle(commandargs_169259);
	commandargs_169259 = (TY120208*) newSeqRC1((&NTI120208), 0);
	gkeepcomments_169260 = NIM_TRUE;
	if (implicitimports_169282) nimGCunrefNoCycle(implicitimports_169282);
	implicitimports_169282 = (TY120208*) newSeqRC1((&NTI120208), 0);
	if (implicitincludes_169304) nimGCunrefNoCycle(implicitincludes_169304);
	implicitincludes_169304 = (TY120208*) newSeqRC1((&NTI120208), 0);
	asgnRef((void**) &packagecache_169601, nstnewStringTable(((NU8) 0)));
}

NIM_EXTERNC N_NOINLINE(void, HEX00_optionsDatInit)(void) {
static TNimNode* TMP771[22];
NI TMP773;
static char* NIM_CONST TMP772[22] = {
"optNone", 
"optObjCheck", 
"optFieldCheck", 
"optRangeCheck", 
"optBoundsCheck", 
"optOverflowCheck", 
"optNilCheck", 
"optNaNCheck", 
"optInfCheck", 
"optAssert", 
"optLineDir", 
"optWarns", 
"optHints", 
"optOptimizeSpeed", 
"optOptimizeSize", 
"optStackTrace", 
"optLineTrace", 
"optEndb", 
"optByRef", 
"optProfiler", 
"optImplicitStatic", 
"optPatterns"};
static TNimNode TMP23[24];
NTI169014.size = sizeof(NU8);
NTI169014.kind = 14;
NTI169014.base = 0;
NTI169014.flags = 3;
for (TMP773 = 0; TMP773 < 22; TMP773++) {
TMP23[TMP773+0].kind = 1;
TMP23[TMP773+0].offset = TMP773;
TMP23[TMP773+0].name = TMP772[TMP773];
TMP771[TMP773] = &TMP23[TMP773+0];
}
TMP23[22].len = 22; TMP23[22].kind = 2; TMP23[22].sons = &TMP771[0];
NTI169014.node = &TMP23[22];
NTI169016.size = sizeof(NU32);
NTI169016.kind = 19;
NTI169016.base = (&NTI169014);
NTI169016.flags = 3;
TMP23[23].len = 0; TMP23[23].kind = 0;
NTI169016.node = &TMP23[23];
}

