/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <dirent.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tlinkedlist109020 tlinkedlist109020;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tstringtable112610 tstringtable112610;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq112608 tkeyvaluepairseq112608;
typedef struct TY87905 TY87905;
struct TGenericSeq {
NI len;
NI reserved;
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
struct tlinkedlist109020 {
tlistentry109014* Head;
tlistentry109014* Tail;
NI Counter;
};
typedef NIM_CHAR TY91549[256];
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
struct TY87905 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable112610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq112608* Data;
NU8 Mode;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tkeyvaluepairseq112608 {
  TGenericSeq Sup;
  TY87905 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, addpath_151006)(NimStringDesc* path, tlineinfo137509 info);
N_NIMCALL(NIM_BOOL, contains_109215)(tlinkedlist109020 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_109415)(tlinkedlist109020* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_151013)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_151044)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_151103)(tstringtable112610* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_68023, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable112610* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(tstringtable112610* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addbabelpath_151128)(NimStringDesc* p, tlineinfo137509 info);
N_NIMCALL(void, message_139362)(tlineinfo137509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_151135)(NimStringDesc* p, tlineinfo137509 info);
N_NIMCALL(NIM_BOOL, hasnimfile_151139)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, HEX2F_102067)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_151180)(NimStringDesc* dir, tlineinfo137509 info);
N_NIMCALL(tstringtable112610*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, babelpath_151244)(NimStringDesc* path, tlineinfo137509 info);
STRING_LITERAL(TMP1397, "head", 4);
STRING_LITERAL(TMP1400, ".", 1);
STRING_LITERAL(TMP1401, "..", 2);
STRING_LITERAL(TMP1405, ".nim", 4);
extern tlinkedlist109020 searchpaths_114113;
extern TFrame* frameptr_12037;
extern NI gverbosity_114117;
extern tlinkedlist109020 lazypaths_114114;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, addpath_151006)(NimStringDesc* path, tlineinfo137509 info) {
	nimfr("addPath", "babelcmd.nim")
	nimln(15, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(15, "babelcmd.nim");
		nimln(15, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_109215(searchpaths_114113, path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "babelcmd.nim");
		prependstr_109415(&searchpaths_114113, path);	}	LA4: ;
	popFrame();
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NI, versionsplitpos_151013)(NimStringDesc* s) {
	NI result;
	NI TMP1396;
	nimfr("versionSplitPos", "babelcmd.nim")
	result = 0;
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	TMP1396 = subInt(s->Sup.len, 2);
	result = (NI32)(TMP1396);
	nimln(20, "babelcmd.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(20, "babelcmd.nim");
		LOC2 = 0;
		nimln(706, "system.nim");
		LOC2 = (1 < result);
		if (!(LOC2)) goto LA3;
		nimln(730, "system.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		LOC2 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(20, "babelcmd.nim");
		result = subInt(result, 1);
	} LA1: ;
	nimln(21, "babelcmd.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA6;
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		result = s->Sup.len;
	}	LA6: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
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
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_151044)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "babelcmd.nim")
	result = 0;
	nimln(28, "babelcmd.nim");
	{
		nimln(28, "babelcmd.nim");
		if (!eqStrings(a, ((NimStringDesc*) &TMP1397))) goto LA3;
		nimln(28, "babelcmd.nim");
		nimln(28, "babelcmd.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}	LA3: ;
	nimln(29, "babelcmd.nim");
	i = 0;
	nimln(30, "babelcmd.nim");
	j = 0;
	nimln(31, "babelcmd.nim");
	vera = 0;
	nimln(32, "babelcmd.nim");
	verb = 0;
	nimln(33, "babelcmd.nim");
	while (1) {
		NI ii;
		NI jj;
		nimln(34, "babelcmd.nim");
		ii = npuParseInt(a, &vera, i);
		nimln(35, "babelcmd.nim");
		jj = npuParseInt(b, &verb, j);
		nimln(37, "babelcmd.nim");
		{
			NIM_BOOL LOC8;
			nimln(37, "babelcmd.nim");
			LOC8 = 0;
			nimln(37, "babelcmd.nim");
			LOC8 = (ii <= 0);
			if (LOC8) goto LA9;
			nimln(37, "babelcmd.nim");
			LOC8 = (jj <= 0);
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			nimln(706, "system.nim");
			result = (0 < jj);
			goto BeforeRet;
		}		LA10: ;
		nimln(38, "babelcmd.nim");
		{
			nimln(38, "babelcmd.nim");
			if (!(vera < verb)) goto LA14;
			nimln(38, "babelcmd.nim");
			nimln(38, "babelcmd.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}		goto LA12;
		LA14: ;
		{
			nimln(706, "system.nim");
			if (!(verb < vera)) goto LA17;
			nimln(39, "babelcmd.nim");
			nimln(39, "babelcmd.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}		goto LA12;
		LA17: ;
		LA12: ;
		nimln(41, "babelcmd.nim");
		i = addInt(i, ii);
		nimln(42, "babelcmd.nim");
		j = addInt(j, jj);
		nimln(43, "babelcmd.nim");
		{
			nimln(43, "babelcmd.nim");
			if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
			if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA21;
			nimln(43, "babelcmd.nim");
			i = addInt(i, 1);
		}		LA21: ;
		nimln(44, "babelcmd.nim");
		{
			nimln(44, "babelcmd.nim");
			if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
			if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA25;
			nimln(44, "babelcmd.nim");
			j = addInt(j, 1);
		}		LA25: ;
	}	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, addpackage_151103)(tstringtable112610* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1398;
	nimfr("addPackage", "babelcmd.nim")
	nimln(47, "babelcmd.nim");
	x = versionsplitpos_151013(p);
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	TMP1398 = subInt(x, 1);
	name = copyStrLast(p, 0, (NI32)(TMP1398));
	nimln(49, "babelcmd.nim");
	{
		NimStringDesc* version;
		NI TMP1399;
		nimln(49, "babelcmd.nim");
		nimln(49, "babelcmd.nim");
		if (!(x < p->Sup.len)) goto LA3;
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		TMP1399 = addInt(x, 1);
		version = copyStr(p, (NI32)(TMP1399));
		nimln(51, "babelcmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			nimln(51, "babelcmd.nim");
			nimln(51, "babelcmd.nim");
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_151044(LOC7, version);
			if (!LOC8) goto LA9;
			nimln(52, "babelcmd.nim");
			nstPut(packages, name, version);		}		LA9: ;
	}	goto LA1;
	LA3: ;
	{
		nimln(54, "babelcmd.nim");
		nstPut(packages, name, ((NimStringDesc*) &TMP1397));	}	LA1: ;
	popFrame();
}
N_NIMCALL(void, addbabelpath_151128)(NimStringDesc* p, tlineinfo137509 info) {
	nimfr("addBabelPath", "babelcmd.nim")
	nimln(62, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(62, "babelcmd.nim");
		nimln(62, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_109215(searchpaths_114113, p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "babelcmd.nim");
		{
			nimln(702, "system.nim");
			if (!(1 <= gverbosity_114117)) goto LA8;
			nimln(63, "babelcmd.nim");
			message_139362(info, ((NU16) 258), p);		}		LA8: ;
		nimln(64, "babelcmd.nim");
		prependstr_109415(&lazypaths_114114, p);	}	LA4: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, hasnimfile_151139)(NimStringDesc* dir) {
	NIM_BOOL result;
	NU8 kind_151143;
	NimStringDesc* path_151144;
	DIR* d_151154;
	nimfr("hasNimFile", "babelcmd.nim")
	result = 0;
	kind_151143 = 0;
	path_151144 = 0;
	nimln(1227, "os.nim");
	d_151154 = opendir(dir->data);
	nimln(1228, "os.nim");
	{
		int LOC37;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((d_151154 == NIM_NIL))) goto LA3;
		nimln(1229, "os.nim");
		while (1) {
			struct dirent* x_151156;
			NimStringDesc* y_151158;
			nimln(1230, "os.nim");
			x_151156 = readdir(d_151154);
			nimln(1231, "os.nim");
			{
				nimln(1231, "os.nim");
				if (!(x_151156 == NIM_NIL)) goto LA8;
				nimln(1231, "os.nim");
				goto LA5;
			}			LA8: ;
			nimln(1232, "os.nim");
			nimln(1232, "os.nim");
			y_151158 = cstrToNimstr(((NCSTRING) ((*x_151156).d_name)));
			nimln(1233, "os.nim");
			{
				NIM_BOOL LOC12;
				struct stat s_151160;
				NU8 k_151162;
				nimln(1233, "os.nim");
				LOC12 = 0;
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				LOC12 = !(eqStrings(y_151158, ((NimStringDesc*) &TMP1400)));
				if (!(LOC12)) goto LA13;
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				LOC12 = !(eqStrings(y_151158, ((NimStringDesc*) &TMP1401)));
				LA13: ;
				if (!LOC12) goto LA14;
				memset((void*)&s_151160, 0, sizeof(s_151160));
				nimln(1235, "os.nim");
				y_151158 = HEX2F_102067(dir, y_151158);
				nimln(1236, "os.nim");
				{
					int LOC18;
					nimln(1236, "os.nim");
					nimln(1236, "os.nim");
					LOC18 = 0;
					LOC18 = lstat(y_151158->data, &s_151160);
					if (!(LOC18 < ((NI32) 0))) goto LA19;
					nimln(1236, "os.nim");
					goto LA5;
				}				LA19: ;
				nimln(1237, "os.nim");
				k_151162 = ((NU8) 0);
				nimln(1238, "os.nim");
				{
					NIM_BOOL LOC23;
					nimln(1238, "os.nim");
					LOC23 = 0;
					LOC23 = S_ISDIR(s_151160.st_mode);
					if (!LOC23) goto LA24;
					nimln(1238, "os.nim");
					k_151162 = ((NU8) 2);
				}				LA24: ;
				nimln(1239, "os.nim");
				{
					NIM_BOOL LOC28;
					nimln(1239, "os.nim");
					LOC28 = 0;
					LOC28 = S_ISLNK(s_151160.st_mode);
					if (!LOC28) goto LA29;
					nimln(1239, "os.nim");
					nimln(1239, "os.nim");
					k_151162 = addInt(k_151162, 1);
				}				LA29: ;
				nimln(1237, "os.nim");
				kind_151143 = k_151162;
				nimln(1232, "os.nim");
				path_151144 = y_151158;
				nimln(69, "babelcmd.nim");
				{
					NIM_BOOL LOC33;
					nimln(69, "babelcmd.nim");
					LOC33 = 0;
					nimln(69, "babelcmd.nim");
					LOC33 = (kind_151143 == ((NU8) 0));
					if (!(LOC33)) goto LA34;
					nimln(69, "babelcmd.nim");
					LOC33 = nsuEndsWith(path_151144, ((NimStringDesc*) &TMP1405));
					LA34: ;
					if (!LOC33) goto LA35;
					nimln(70, "babelcmd.nim");
					result = NIM_TRUE;
					nimln(71, "babelcmd.nim");
					goto LA5;
				}				LA35: ;
			}			LA14: ;
		} LA5: ;
		nimln(1241, "os.nim");
		nimln(1241, "os.nim");
		LOC37 = 0;
		LOC37 = closedir(d_151154);
	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(void, addpathwithnimfiles_151135)(NimStringDesc* p, tlineinfo137509 info) {
	nimfr("addPathWithNimFiles", "babelcmd.nim")
	nimln(72, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(72, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = hasnimfile_151139(p);
		if (!LOC3) goto LA4;
		nimln(73, "babelcmd.nim");
		addbabelpath_151128(p, info);	}	goto LA1;
	LA4: ;
	{
		NU8 kind_151165;
		NimStringDesc* p2_151166;
		DIR* d_151168;
		kind_151165 = 0;
		p2_151166 = 0;
		nimln(1227, "os.nim");
		d_151168 = opendir(p->data);
		nimln(1228, "os.nim");
		{
			int LOC42;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((d_151168 == NIM_NIL))) goto LA9;
			nimln(1229, "os.nim");
			while (1) {
				struct dirent* x_151170;
				NimStringDesc* y_151172;
				nimln(1230, "os.nim");
				x_151170 = readdir(d_151168);
				nimln(1231, "os.nim");
				{
					nimln(1231, "os.nim");
					if (!(x_151170 == NIM_NIL)) goto LA14;
					nimln(1231, "os.nim");
					goto LA11;
				}				LA14: ;
				nimln(1232, "os.nim");
				nimln(1232, "os.nim");
				y_151172 = cstrToNimstr(((NCSTRING) ((*x_151170).d_name)));
				nimln(1233, "os.nim");
				{
					NIM_BOOL LOC18;
					struct stat s_151174;
					NU8 k_151176;
					nimln(1233, "os.nim");
					LOC18 = 0;
					nimln(698, "system.nim");
					nimln(698, "system.nim");
					LOC18 = !(eqStrings(y_151172, ((NimStringDesc*) &TMP1400)));
					if (!(LOC18)) goto LA19;
					nimln(698, "system.nim");
					nimln(698, "system.nim");
					LOC18 = !(eqStrings(y_151172, ((NimStringDesc*) &TMP1401)));
					LA19: ;
					if (!LOC18) goto LA20;
					memset((void*)&s_151174, 0, sizeof(s_151174));
					nimln(1235, "os.nim");
					y_151172 = HEX2F_102067(p, y_151172);
					nimln(1236, "os.nim");
					{
						int LOC24;
						nimln(1236, "os.nim");
						nimln(1236, "os.nim");
						LOC24 = 0;
						LOC24 = lstat(y_151172->data, &s_151174);
						if (!(LOC24 < ((NI32) 0))) goto LA25;
						nimln(1236, "os.nim");
						goto LA11;
					}					LA25: ;
					nimln(1237, "os.nim");
					k_151176 = ((NU8) 0);
					nimln(1238, "os.nim");
					{
						NIM_BOOL LOC29;
						nimln(1238, "os.nim");
						LOC29 = 0;
						LOC29 = S_ISDIR(s_151174.st_mode);
						if (!LOC29) goto LA30;
						nimln(1238, "os.nim");
						k_151176 = ((NU8) 2);
					}					LA30: ;
					nimln(1239, "os.nim");
					{
						NIM_BOOL LOC34;
						nimln(1239, "os.nim");
						LOC34 = 0;
						LOC34 = S_ISLNK(s_151174.st_mode);
						if (!LOC34) goto LA35;
						nimln(1239, "os.nim");
						nimln(1239, "os.nim");
						k_151176 = addInt(k_151176, 1);
					}					LA35: ;
					nimln(1237, "os.nim");
					kind_151165 = k_151176;
					nimln(1232, "os.nim");
					p2_151166 = y_151172;
					nimln(76, "babelcmd.nim");
					{
						NIM_BOOL LOC39;
						nimln(76, "babelcmd.nim");
						LOC39 = 0;
						LOC39 = hasnimfile_151139(p2_151166);
						if (!LOC39) goto LA40;
						nimln(76, "babelcmd.nim");
						addbabelpath_151128(p2_151166, info);					}					LA40: ;
				}				LA20: ;
			} LA11: ;
			nimln(1241, "os.nim");
			nimln(1241, "os.nim");
			LOC42 = 0;
			LOC42 = closedir(d_151168);
		}		LA9: ;
	}	LA1: ;
	popFrame();
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}
N_NIMCALL(void, addpathrec_151180)(NimStringDesc* dir, tlineinfo137509 info) {
	tstringtable112610* packages;
	NI pos;
	NI TMP1406;
	NU8 k_151207;
	NimStringDesc* p_151208;
	DIR* d_151219;
	NimStringDesc* p_151217;
	NimStringDesc* key_151229;
	NimStringDesc* val_151231;
	NI h_151233;
	NI HEX3Atmp_151235;
	NI res_151237;
	nimfr("addPathRec", "babelcmd.nim")
	nimln(79, "babelcmd.nim");
	packages = nstnewStringTable(((NU8) 2));
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	TMP1406 = subInt(dir->Sup.len, 1);
	pos = (NI32)(TMP1406);
	nimln(81, "babelcmd.nim");
	{
		nimln(730, "system.nim");
		if ((NU)(pos) > (NU)(dir->Sup.len)) raiseIndexError();
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		nimln(81, "babelcmd.nim");
		pos = addInt(pos, 1);
	}	LA3: ;
	k_151207 = 0;
	p_151208 = 0;
	nimln(1227, "os.nim");
	d_151219 = opendir(dir->data);
	nimln(1228, "os.nim");
	{
		int LOC41;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((d_151219 == NIM_NIL))) goto LA7;
		nimln(1229, "os.nim");
		while (1) {
			struct dirent* x_151221;
			NimStringDesc* y_151223;
			nimln(1230, "os.nim");
			x_151221 = readdir(d_151219);
			nimln(1231, "os.nim");
			{
				nimln(1231, "os.nim");
				if (!(x_151221 == NIM_NIL)) goto LA12;
				nimln(1231, "os.nim");
				goto LA9;
			}			LA12: ;
			nimln(1232, "os.nim");
			nimln(1232, "os.nim");
			y_151223 = cstrToNimstr(((NCSTRING) ((*x_151221).d_name)));
			nimln(1233, "os.nim");
			{
				NIM_BOOL LOC16;
				struct stat s_151225;
				NU8 k_151227;
				nimln(1233, "os.nim");
				LOC16 = 0;
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				LOC16 = !(eqStrings(y_151223, ((NimStringDesc*) &TMP1400)));
				if (!(LOC16)) goto LA17;
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				LOC16 = !(eqStrings(y_151223, ((NimStringDesc*) &TMP1401)));
				LA17: ;
				if (!LOC16) goto LA18;
				memset((void*)&s_151225, 0, sizeof(s_151225));
				nimln(1235, "os.nim");
				y_151223 = HEX2F_102067(dir, y_151223);
				nimln(1236, "os.nim");
				{
					int LOC22;
					nimln(1236, "os.nim");
					nimln(1236, "os.nim");
					LOC22 = 0;
					LOC22 = lstat(y_151223->data, &s_151225);
					if (!(LOC22 < ((NI32) 0))) goto LA23;
					nimln(1236, "os.nim");
					goto LA9;
				}				LA23: ;
				nimln(1237, "os.nim");
				k_151227 = ((NU8) 0);
				nimln(1238, "os.nim");
				{
					NIM_BOOL LOC27;
					nimln(1238, "os.nim");
					LOC27 = 0;
					LOC27 = S_ISDIR(s_151225.st_mode);
					if (!LOC27) goto LA28;
					nimln(1238, "os.nim");
					k_151227 = ((NU8) 2);
				}				LA28: ;
				nimln(1239, "os.nim");
				{
					NIM_BOOL LOC32;
					nimln(1239, "os.nim");
					LOC32 = 0;
					LOC32 = S_ISLNK(s_151225.st_mode);
					if (!LOC32) goto LA33;
					nimln(1239, "os.nim");
					nimln(1239, "os.nim");
					k_151227 = addInt(k_151227, 1);
				}				LA33: ;
				nimln(1237, "os.nim");
				k_151207 = k_151227;
				nimln(1232, "os.nim");
				p_151208 = y_151223;
				nimln(83, "babelcmd.nim");
				{
					NIM_BOOL LOC37;
					nimln(83, "babelcmd.nim");
					LOC37 = 0;
					nimln(83, "babelcmd.nim");
					LOC37 = (k_151207 == ((NU8) 2));
					if (!(LOC37)) goto LA38;
					nimln(698, "system.nim");
					nimln(698, "system.nim");
					if ((NU)(pos) > (NU)(p_151208->Sup.len)) raiseIndexError();
					LOC37 = !(((NU8)(p_151208->data[pos]) == (NU8)(46)));
					LA38: ;
					if (!LOC37) goto LA39;
					nimln(84, "babelcmd.nim");
					addpackage_151103(packages, p_151208);				}				LA39: ;
			}			LA18: ;
		} LA9: ;
		nimln(1241, "os.nim");
		nimln(1241, "os.nim");
		LOC41 = 0;
		LOC41 = closedir(d_151219);
	}	LA7: ;
	p_151217 = 0;
	key_151229 = 0;
	val_151231 = 0;
	h_151233 = 0;
	HEX3Atmp_151235 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_151235 = ((*packages).Data->Sup.len-1);
	nimln(1308, "system.nim");
	res_151237 = 0;
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(res_151237 <= HEX3Atmp_151235)) goto LA42;
		nimln(1308, "system.nim");
		h_151233 = res_151237;
		nimln(41, "strtabs.nim");
		{
			NimStringDesc* res_151239;
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_151233) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			if (!!((*packages).Data->data[h_151233].Field0 == 0)) goto LA45;
			nimln(42, "strtabs.nim");
			if ((NU)(h_151233) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			key_151229 = (*packages).Data->data[h_151233].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_151233) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			val_151231 = (*packages).Data->data[h_151233].Field1;
			nimln(58, "babelcmd.nim");
			nimln(58, "babelcmd.nim");
			{
				nimln(58, "babelcmd.nim");
				if (!eqStrings(val_151231, ((NimStringDesc*) &TMP1397))) goto LA49;
				res_151239 = key_151229;
			}			goto LA47;
			LA49: ;
			{
				NimStringDesc* LOC52;
				nimln(58, "babelcmd.nim");
				LOC52 = 0;
				LOC52 = rawNewString(key_151229->Sup.len + val_151231->Sup.len + 1);
appendString(LOC52, key_151229);
appendChar(LOC52, 45);
appendString(LOC52, val_151231);
				res_151239 = LOC52;
			}			LA47: ;
			nimln(58, "babelcmd.nim");
			p_151217 = res_151239;
			nimln(86, "babelcmd.nim");
			addbabelpath_151128(p_151217, info);		}		LA45: ;
		nimln(1311, "system.nim");
		res_151237 = addInt(res_151237, 1);
	} LA42: ;
	popFrame();
}
N_NIMCALL(void, babelpath_151244)(NimStringDesc* path, tlineinfo137509 info) {
	nimfr("babelPath", "babelcmd.nim")
	nimln(89, "babelcmd.nim");
	addpathrec_151180(path, info);	nimln(90, "babelcmd.nim");
	addbabelpath_151128(path, info);	popFrame();
}N_NOINLINE(void, compilerbabelcmdInit)(void) {
	nimfr("babelcmd", "babelcmd.nim")
	popFrame();
}

N_NOINLINE(void, compilerbabelcmdDatInit)(void) {
}

