/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <sys/param.h>

#include <mach-o/dyld.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <time.h>

#include <crt_externs.h>

#include <unistd.h>
typedef struct TY122208 TY122208;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
typedef struct Oserror3433 Oserror3433;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct TY119789 TY119789;
typedef struct Indexerror3455 Indexerror3455;
typedef struct Slice85775 Slice85775;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  Systemerror3429  {
  Exception Sup;
};
struct  Oserror3433  {
  Systemerror3429 Sup;
NI32 errorcode;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct TY119789 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Indexerror3455  {
  Exception Sup;
};
struct  Slice85775  {
NI a;
NI b;
};
typedef NI TY27420[8];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY122208 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP52)(void* p, NI op);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair134008* Result);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NI, searchextpos_119736)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, normext_119726)(NimStringDesc* ext);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, raiseoserror_117009)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_116820)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_117033)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NI, parentdirpos_119559)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, rawcreatedir_124043)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, getenv_122843)(NimStringDesc* key);
N_NIMCALL(NI, findenvvar_122804)(NimStringDesc* key);
N_NIMCALL(void, getenvvarsc_122404)(void);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b);
N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file);
N_NIMCALL(NimStringDesc*, HEX2F_119492)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_85768)(NimStringDesc* s, Slice85775 x);
static N_INLINE(Slice85775, HEX2EHEX2E_105273)(NI a, NI b);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, expandtilde_127610)(NimStringDesc* path);
STRING_LITERAL(TMP134, "", 0);
STRING_LITERAL(TMP1141, "unknown OS error", 16);
STRING_LITERAL(TMP1534, "invalid index", 13);
STRING_LITERAL(TMP1652, "HOME", 4);
STRING_LITERAL(TMP1653, "/", 1);
STRING_LITERAL(TMP1892, "/.config/", 9);
STRING_LITERAL(TMP5025, "PATH", 4);
NIM_BOOL envcomputed_122207;
TY122208* environment_122209;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI149; /* string */
TNimType NTI122208; /* seq[string] */
extern TNimType NTI117012; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern Tgcheap48216 gch_48244;
extern TNimType NTI126016; /* ref IndexError */
extern TNimType NTI3455; /* IndexError */
N_NIMCALL(void, TMP52)(void* p, NI op) {
	TY122208* a;
	NI LOC1;
	a = (TY122208*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair134008* Result) {
	NI seppos;
	seppos = ((NI) -1);
	{
		NI i_119524;
		NI HEX3Atmp_119537;
		NI res_119540;
		i_119524 = 0;
		HEX3Atmp_119537 = 0;
		HEX3Atmp_119537 = (NI)((path ? path->Sup.len : 0) - ((NI) 1));
		res_119540 = HEX3Atmp_119537;
		{
			while (1) {
				if (!(((NI) 0) <= res_119540)) goto LA3;
				i_119524 = res_119540;
				{
					if (!(((NU8)(path->data[i_119524])) == ((NU8)(47)) || ((NU8)(path->data[i_119524])) == ((NU8)(47)))) goto LA6;
					seppos = i_119524;
					goto LA1;
				}
				LA6: ;
				res_119540 -= ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	{
		if (!(((NI) 0) <= seppos)) goto LA10;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI)(seppos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStr(path, (NI)(seppos + ((NI) 1))));
	}
	goto LA8;
	LA10: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(((NimStringDesc*) &TMP134)));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(path));
	}
	LA8: ;
}

N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((path ? path->Sup.len : 0) == ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(((NimStringDesc*) &TMP134));
	}
	goto LA1;
	LA5: ;
	{
		Keyvaluepair134008 LOC8;
		memset((void*)(&LOC8), 0, sizeof(LOC8));
		nossplitPath(path, (&LOC8));
		result = copyString(LOC8.Field1);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, searchextpos_119736)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = ((NI) -1);
	{
		NI i_119751;
		NI HEX3Atmp_119764;
		NI res_119767;
		i_119751 = 0;
		HEX3Atmp_119764 = 0;
		HEX3Atmp_119764 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_119767 = HEX3Atmp_119764;
		{
			while (1) {
				if (!(((NI) 1) <= res_119767)) goto LA3;
				i_119751 = res_119767;
				{
					if (!((NU8)(s->data[i_119751]) == (NU8)(46))) goto LA6;
					result = i_119751;
					goto LA1;
				}
				goto LA4;
				LA6: ;
				{
					if (!(((NU8)(s->data[i_119751])) == ((NU8)(47)) || ((NU8)(s->data[i_119751])) == ((NU8)(47)))) goto LA9;
					goto LA1;
				}
				goto LA4;
				LA9: ;
				LA4: ;
				res_119767 -= ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, normext_119726)(NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((ext) && (ext)->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = ((NU8)(ext->data[((NI) 0)]) == (NU8)(46));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(ext);
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC8;
		LOC8 = 0;
		LOC8 = rawNewString(ext->Sup.len + 1);
appendChar(LOC8, 46);
appendString(LOC8, ext);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_119736(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_119726(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		NimStringDesc* LOC10;
		LOC8 = 0;
		LOC9 = 0;
		LOC9 = copyStrLast(filename, ((NI) 0), (NI)(extpos - ((NI) 1)));
		LOC10 = 0;
		LOC10 = normext_119726(ext);
		LOC8 = rawNewString(LOC9->Sup.len + LOC10->Sup.len + 0);
appendString(LOC8, LOC9);
appendString(LOC8, LOC10);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_116820)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP134));
	{
		NCSTRING LOC5;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errorcode);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(void, raiseoserror_117009)(NI32 errorcode) {
	Oserror3433* e;
	e = 0;
	e = (Oserror3433*) newObj((&NTI117012), sizeof(Oserror3433));
	(*e).Sup.Sup.Sup.m_type = (&NTI3433);
	(*e).errorcode = errorcode;
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_116820(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1141));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((Exception*)e, "OSError");
}

N_NIMCALL(NI32, oslasterror_117033)(void) {
	NI32 result;
	result = 0;
	result = errno;
	return result;
}

N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	NI LOC6;
	result = 0;
	result = mnewString(((NI) (PATH_MAX)));
	r = realpath(filename->data, result->data);
	{
		NI32 LOC5;
		if (!r == 0) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_117033();
		raiseoserror_117009(LOC5);
	}
	LA3: ;
	LOC6 = 0;
	LOC6 = strlen(result->data);
	result = setLengthStr(result, ((NI) (LOC6)));
	return result;
}

N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119789* Result) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((path ? path->Sup.len : 0) == ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(path));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(((NimStringDesc*) &TMP134)));
		unsureAsgnRef((void**) (&(*Result).Field2), copyString(((NimStringDesc*) &TMP134)));
	}
	goto LA1;
	LA5: ;
	{
		NI seppos;
		NI dotpos;
		seppos = ((NI) -1);
		dotpos = (path ? path->Sup.len : 0);
		{
			NI i_119819;
			NI HEX3Atmp_119843;
			NI res_119846;
			i_119819 = 0;
			HEX3Atmp_119843 = 0;
			HEX3Atmp_119843 = (NI)((path ? path->Sup.len : 0) - ((NI) 1));
			res_119846 = HEX3Atmp_119843;
			{
				while (1) {
					if (!(((NI) 0) <= res_119846)) goto LA10;
					i_119819 = res_119846;
					{
						if (!((NU8)(path->data[i_119819]) == (NU8)(46))) goto LA13;
						{
							NIM_BOOL LOC17;
							NIM_BOOL LOC18;
							LOC17 = 0;
							LOC18 = 0;
							LOC18 = (dotpos == (path ? path->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							LOC18 = (((NI) 0) < i_119819);
							LA19: ;
							LOC17 = LOC18;
							if (!(LOC17)) goto LA20;
							LOC17 = !((((NU8)(path->data[(NI)(i_119819 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)(i_119819 - ((NI) 1))])) == ((NU8)(47))));
							LA20: ;
							if (!LOC17) goto LA21;
							dotpos = i_119819;
						}
						LA21: ;
					}
					goto LA11;
					LA13: ;
					{
						if (!(((NU8)(path->data[i_119819])) == ((NU8)(47)) || ((NU8)(path->data[i_119819])) == ((NU8)(47)))) goto LA24;
						seppos = i_119819;
						goto LA8;
					}
					goto LA11;
					LA24: ;
					LA11: ;
					res_119846 -= ((NI) 1);
				} LA10: ;
			}
		} LA8: ;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI)(seppos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStrLast(path, (NI)(seppos + ((NI) 1)), (NI)(dotpos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field2), copyStr(path, dotpos));
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	unsigned int size;
	result = 0;
	size = 0;
	_NSGetExecutablePath(NIM_NIL, (&size));
	result = mnewString(((NI) (size)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = _NSGetExecutablePath(result->data, (&size));
		if (!LOC3) goto LA4;
		result = copyString(((NimStringDesc*) &TMP134));
	}
	LA4: ;
	{
		if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA8;
		result = nosexpandFilename(result);
	}
	LA8: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	TY119789 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppFilename();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitFile(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

N_NIMCALL(NI, parentdirpos_119559)(NimStringDesc* path) {
	NI result;
	NI q;
{	result = 0;
	q = ((NI) 1);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 1) <= (path ? path->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = (((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		q = ((NI) 2);
	}
	LA5: ;
	{
		NI i_119586;
		NI HEX3Atmp_119599;
		NI res_119602;
		i_119586 = 0;
		HEX3Atmp_119599 = 0;
		HEX3Atmp_119599 = (NI)((path ? path->Sup.len : 0) - q);
		res_119602 = HEX3Atmp_119599;
		{
			while (1) {
				if (!(((NI) 0) <= res_119602)) goto LA9;
				i_119586 = res_119602;
				{
					if (!(((NU8)(path->data[i_119586])) == ((NU8)(47)) || ((NU8)(path->data[i_119586])) == ((NU8)(47)))) goto LA12;
					result = i_119586;
					goto BeforeRet;
				}
				LA12: ;
				res_119602 -= ((NI) 1);
			} LA9: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path) {
	NimStringDesc* result;
	NI seppos;
	result = 0;
	seppos = parentdirpos_119559(path);
	{
		if (!(((NI) 0) <= seppos)) goto LA3;
		result = copyStrLast(path, ((NI) 0), (NI)(seppos - ((NI) 1)));
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP134));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	{
		if (!((head ? head->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(tail);
	}
	goto LA1;
	LA3: ;
	{
		if (!(((NU8)(head->data[(NI)((head ? head->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(head->data[(NI)((head ? head->Sup.len : 0) - ((NI) 1))])) == ((NU8)(47)))) goto LA6;
		{
			NimStringDesc* LOC12;
			NimStringDesc* LOC13;
			if (!(((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)))) goto LA10;
			LOC12 = 0;
			LOC13 = 0;
			LOC13 = copyStr(tail, ((NI) 1));
			LOC12 = rawNewString(head->Sup.len + LOC13->Sup.len + 0);
appendString(LOC12, head);
appendString(LOC12, LOC13);
			result = LOC12;
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC15;
			LOC15 = 0;
			LOC15 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC15, head);
appendString(LOC15, tail);
			result = LOC15;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		{
			NimStringDesc* LOC21;
			if (!(((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)))) goto LA19;
			LOC21 = 0;
			LOC21 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC21, head);
appendString(LOC21, tail);
			result = LOC21;
		}
		goto LA17;
		LA19: ;
		{
			NimStringDesc* LOC23;
			LOC23 = 0;
			LOC23 = rawNewString(head->Sup.len + tail->Sup.len + 1);
appendString(LOC23, head);
appendChar(LOC23, 47);
appendString(LOC23, tail);
			result = LOC23;
		}
		LA17: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, HEX2F_119492)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
{	result = 0;
	result = nosjoinPath(head, tail);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawcreatedir_124043)(NimStringDesc* dir) {
	{
		NIM_BOOL LOC3;
		int LOC4;
		NI32 LOC8;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = mkdir(dir->data, ((mode_t) 511));
		LOC3 = !((LOC4 == ((NI32) 0)));
		if (!(LOC3)) goto LA5;
		LOC3 = !((errno == EEXIST));
		LA5: ;
		if (!LOC3) goto LA6;
		LOC8 = 0;
		LOC8 = oslasterror_117033();
		raiseoserror_117009(LOC8);
	}
	LA6: ;
}

N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitnext;
	omitnext = NIM_FALSE;
	{
		NI i_124411;
		NI HEX3Atmp_124424;
		NI res_124427;
		i_124411 = 0;
		HEX3Atmp_124424 = 0;
		HEX3Atmp_124424 = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
		res_124427 = ((NI) 1);
		{
			while (1) {
				if (!(res_124427 <= HEX3Atmp_124424)) goto LA3;
				i_124411 = res_124427;
				{
					if (!(((NU8)(dir->data[i_124411])) == ((NU8)(47)) || ((NU8)(dir->data[i_124411])) == ((NU8)(47)))) goto LA6;
					{
						if (!omitnext) goto LA10;
						omitnext = NIM_FALSE;
					}
					goto LA8;
					LA10: ;
					{
						NimStringDesc* LOC13;
						LOC13 = 0;
						LOC13 = copyStrLast(dir, ((NI) 0), (NI)(i_124411 - ((NI) 1)));
						rawcreatedir_124043(LOC13);
					}
					LA8: ;
				}
				LA6: ;
				res_124427 += ((NI) 1);
			} LA3: ;
		}
	}
	rawcreatedir_124043(dir);
}

N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0) {
	NimStringDesc* result;
	result = 0;
	result = copyString(parts[((NI) 0)]);
	{
		NI i_119466;
		NI HEX3Atmp_119470;
		NI res_119473;
		i_119466 = 0;
		HEX3Atmp_119470 = 0;
		HEX3Atmp_119470 = (partsLen0-1);
		res_119473 = ((NI) 1);
		{
			while (1) {
				if (!(res_119473 <= HEX3Atmp_119470)) goto LA3;
				i_119466 = res_119473;
				result = nosjoinPath(result, parts[i_119466]);
				res_119473 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(filename->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISREG(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_119736(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_119726(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(filename);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, paramcount_126030)(void) {
	NI result;
	result = 0;
	result = ((NI) ((NI32)(cmdCount - ((NI32) 1))));
	return result;
}

N_NIMCALL(NimStringDesc*, paramstr_126009)(NI i) {
	NimStringDesc* result;
	Indexerror3455* e_126015;
	NimStringDesc* LOC7;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (i < ((NI) (cmdCount)));
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) 0) <= i);
		LA4: ;
		if (!LOC3) goto LA5;
		result = cstrToNimstr(cmdLine[(i)- 0]);
		goto BeforeRet;
	}
	LA5: ;
	e_126015 = 0;
	e_126015 = (Indexerror3455*) newObj((&NTI126016), sizeof(Indexerror3455));
	(*e_126015).Sup.Sup.m_type = (&NTI3455);
	LOC7 = 0;
	LOC7 = (*e_126015).Sup.message; (*e_126015).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1534));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	raiseException((Exception*)e_126015, "IndexError");
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive) {
	NimStringDesc* result;
	result = 0;
	result = copyString(path);
	return result;
}

N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	result = 0;
	result = ((NU8)(path->data[((NI) 0)]) == (NU8)(47));
	return result;
}

N_NIMCALL(void, getenvvarsc_122404)(void) {
	{
		NCSTRING* genv;
		NCSTRING** LOC5;
		NI i;
		if (!!(envcomputed_122207)) goto LA3;
		if (environment_122209) nimGCunrefNoCycle(environment_122209);
		environment_122209 = (TY122208*) newSeqRC1((&NTI122208), 0);
		LOC5 = 0;
		LOC5 = _NSGetEnviron();
		genv = (*LOC5);
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC12;
				NimStringDesc* LOC13;
				{
					if (!(genv[(i)- 0] == NIM_NIL)) goto LA10;
					goto LA6;
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = cstrToNimstr(genv[(i)- 0]);
				environment_122209 = (TY122208*) incrSeq(&(environment_122209)->Sup, sizeof(NimStringDesc*));
				LOC13 = 0;
				LOC13 = environment_122209->data[environment_122209->Sup.len-1]; environment_122209->data[environment_122209->Sup.len-1] = copyStringRC1(LOC12);
				if (LOC13) nimGCunrefNoCycle(LOC13);
				i += ((NI) 1);
			}
		} LA6: ;
		envcomputed_122207 = NIM_TRUE;
	}
	LA3: ;
}

N_NIMCALL(NI, findenvvar_122804)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* LOC1;
{	result = 0;
	getenvvarsc_122404();
	LOC1 = 0;
	LOC1 = rawNewString(key->Sup.len + 1);
appendString(LOC1, key);
appendChar(LOC1, 61);
	temp = LOC1;
	{
		NI i_122819;
		NI HEX3Atmp_122821;
		NI res_122824;
		i_122819 = 0;
		HEX3Atmp_122821 = 0;
		HEX3Atmp_122821 = (environment_122209 ? (environment_122209->Sup.len-1) : -1);
		res_122824 = ((NI) 0);
		{
			while (1) {
				if (!(res_122824 <= HEX3Atmp_122821)) goto LA4;
				i_122819 = res_122824;
				{
					NIM_BOOL LOC7;
					LOC7 = 0;
					LOC7 = nsuStartsWith(environment_122209->data[i_122819], temp);
					if (!LOC7) goto LA8;
					result = i_122819;
					goto BeforeRet;
				}
				LA8: ;
				res_122824 += ((NI) 1);
			} LA4: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getenv_122843)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
{	result = 0;
	i = findenvvar_122804(key);
	{
		NI LOC5;
		if (!(((NI) 0) <= i)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuFindChar(environment_122209->data[i], 61, ((NI) 0));
		result = copyStr(environment_122209->data[i], (NI)(LOC5 + ((NI) 1)));
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING env;
		env = getenv(key->data);
		{
			if (!(env == NIM_NIL)) goto LA9;
			result = copyString(((NimStringDesc*) &TMP134));
			goto BeforeRet;
		}
		LA9: ;
		result = cstrToNimstr(env);
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_122843(((NimStringDesc*) &TMP1652));
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1653));
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb) {
	NI result;
	result = 0;
	{
		if (!NIM_TRUE) goto LA3;
		result = cmp_4717(patha, pathb);
	}
	goto LA1;
	LA3: ;
	{
		result = nsuCmpIgnoreCase(patha, pathb);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, putenv_122868)(NimStringDesc* key, NimStringDesc* val) {
	NI indx;
	indx = findenvvar_122804(key);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= indx)) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC5, key);
appendChar(LOC5, 61);
appendString(LOC5, val);
		asgnRefNoCycle((void**) (&environment_122209->data[indx]), LOC5);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		LOC7 = 0;
		LOC7 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC7, key);
appendChar(LOC7, 61);
appendString(LOC7, val);
		environment_122209 = (TY122208*) incrSeq(&(environment_122209)->Sup, sizeof(NimStringDesc*));
		LOC8 = 0;
		LOC8 = environment_122209->data[environment_122209->Sup.len-1]; environment_122209->data[environment_122209->Sup.len-1] = copyStringRC1(LOC7);
		if (LOC8) nimGCunrefNoCycle(LOC8);
		indx = (environment_122209 ? (environment_122209->Sup.len-1) : -1);
	}
	LA1: ;
	{
		int LOC11;
		NI32 LOC14;
		LOC11 = 0;
		LOC11 = putenv(environment_122209->data[indx]->data);
		if (!!((LOC11 == ((NI32) 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_117033();
		raiseoserror_117009(LOC14);
	}
	LA12: ;
}

N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
	NimStringDesc* result;
	result = 0;
	result = mnewString(((NI) 512));
	{
		NCSTRING LOC3;
		NI LOC6;
		LOC3 = 0;
		LOC3 = getcwd(result->data, ((NI) 512));
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		LOC6 = 0;
		LOC6 = strlen(result->data);
		result = setLengthStr(result, ((NI) (LOC6)));
	}
	goto LA1;
	LA4: ;
	{
		NI32 LOC8;
		LOC8 = 0;
		LOC8 = oslasterror_117033();
		raiseoserror_117009(LOC8);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_122843(((NimStringDesc*) &TMP1652));
	LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1892));
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = parentdirpos_119559(path);
	result = (LOC1 < ((NI) 0));
	return result;
}

N_NIMCALL(NIM_BOOL, existsenv_122858)(NimStringDesc* key) {
	NIM_BOOL result;
{	result = 0;
	{
		NCSTRING LOC3;
		LOC3 = 0;
		LOC3 = getenv(key->data);
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA1;
	LA4: ;
	{
		NI LOC7;
		LOC7 = 0;
		LOC7 = findenvvar_122804(key);
		result = (((NI) 0) <= LOC7);
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(dir->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISDIR(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file) {
	time_t result;
	struct stat res;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = stat(file->data, (&res));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
	result = res.st_mtime;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	time_t LOC1;
	time_t LOC2;
	NI64 LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetLastModificationTime(a);
	LOC2 = 0;
	LOC2 = nosgetLastModificationTime(b);
	LOC3 = 0;
	LOC3 = ntDiffTime(LOC1, LOC2);
	result = (IL64(0) <= LOC3);
	return result;
}

N_NIMCALL(void, nossleep)(NI milsecs) {
	struct timespec a;
	struct timespec b;
	int LOC1;
	memset((void*)(&a), 0, sizeof(a));
	memset((void*)(&b), 0, sizeof(b));
	a.tv_sec = (NI)(milsecs / ((NI) 1000));
	a.tv_nsec = ((NI) ((NI)(((NI) ((NI)(((NI) ((NI)(milsecs % ((NI) 1000)))) * ((NI) 1000)))) * ((NI) 1000))));
	LOC1 = 0;
	LOC1 = nanosleep((&a), (&b));
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_85768)(NimStringDesc* s, Slice85775 x) {
	NimStringDesc* result;
	result = 0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(Slice85775, HEX2EHEX2E_105273)(NI a, NI b) {
	Slice85775 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_NIMCALL(NimStringDesc*, expandtilde_127610)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC7;
		NimStringDesc* LOC11;
		Slice85775 LOC12;
		NimStringDesc* LOC13;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = (((NI) 1) < (path ? path->Sup.len : 0));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(path->data[((NI) 0)]) == (NU8)(126));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC7 = 0;
		LOC7 = ((NU8)(path->data[((NI) 1)]) == (NU8)(47));
		if (LOC7) goto LA8;
		LOC7 = ((NU8)(path->data[((NI) 1)]) == (NU8)(92));
		LA8: ;
		LOC3 = LOC7;
		LA6: ;
		if (!LOC3) goto LA9;
		LOC11 = 0;
		LOC11 = nosgetHomeDir();
		LOC12 = HEX2EHEX2E_105273(((NI) 2), (NI)((path ? path->Sup.len : 0) - ((NI) 1)));
		LOC13 = 0;
		LOC13 = HEX5BHEX5D_85768(path, LOC12);
		result = HEX2F_119492(LOC11, LOC13);
	}
	goto LA1;
	LA9: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findexe_127616)(NimStringDesc* exe) {
	NimStringDesc* result;
	NimStringDesc* path;
{	result = 0;
	result = nosaddFileExt(exe, ((NimStringDesc*) &TMP134));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosexistsFile(result);
		if (!LOC3) goto LA4;
		goto BeforeRet;
	}
	LA4: ;
	path = getenv_122843(((NimStringDesc*) &TMP5025));
	{
		NimStringDesc* candidate_127621;
		NI last_127807;
		candidate_127621 = 0;
		last_127807 = ((NI) 0);
		{
			if (!(((NI) 0) < (path ? path->Sup.len : 0))) goto LA9;
			{
				while (1) {
					NI first_127809;
					NimStringDesc* x;
					NimStringDesc* LOC17;
					if (!(last_127807 <= (path ? path->Sup.len : 0))) goto LA12;
					first_127809 = last_127807;
					{
						while (1) {
							NIM_BOOL LOC15;
							LOC15 = 0;
							LOC15 = (last_127807 < (path ? path->Sup.len : 0));
							if (!(LOC15)) goto LA16;
							LOC15 = !(((NU8)(path->data[last_127807]) == (NU8)(58)));
							LA16: ;
							if (!LOC15) goto LA14;
							last_127807 += ((NI) 1);
						} LA14: ;
					}
					candidate_127621 = copyStrLast(path, first_127809, (NI)(last_127807 - ((NI) 1)));
					LOC17 = 0;
					LOC17 = expandtilde_127610(candidate_127621);
					x = HEX2F_119492(LOC17, result);
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = nosexistsFile(x);
						if (!LOC20) goto LA21;
						result = copyString(x);
						goto BeforeRet;
					}
					LA21: ;
					last_127807 += ((NI) 1);
				} LA12: ;
			}
		}
		LA9: ;
	}
	result = copyString(((NimStringDesc*) &TMP134));
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
NTI122208.size = sizeof(TY122208*);
NTI122208.kind = 24;
NTI122208.base = (&NTI149);
NTI122208.flags = 2;
NTI122208.marker = TMP52;
}

