/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <dirent.h>

#include <sys/types.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
typedef NIM_CHAR TY104554[256];
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
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
NU8 Mode;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_127224)(tlinkedlist127028 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_127424)(tlinkedlist127028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_206279)(NimStringDesc* dir, tlineinfo196539 info);
N_NIMCALL(stringtableobj131012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_116899)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, addpackage_206148)(stringtableobj131012* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_206023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_206071)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(stringtableobj131012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_206196)(NimStringDesc* p, tlineinfo196539 info);
N_NIMCALL(void, message_198959)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1678, ".", 1);
STRING_LITERAL(TMP1679, "..", 2);
STRING_LITERAL(TMP1680, "head", 4);
extern tlinkedlist127028 searchpaths_170122;
extern NI gverbosity_170127;
extern tlinkedlist127028 lazypaths_170123;

N_NIMCALL(void, addpath_206012)(NimStringDesc* path, tlineinfo196539 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_127224(searchpaths_170122, path);
		if (!!(LOC3)) goto LA4;
		prependstr_127424(&searchpaths_170122, path);
	}
	LA4: ;
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
	}
	LA3: ;
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
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, versionsplitpos_206023)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI32)(s->Sup.len - 2);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (1 < result);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result -= 1;
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = s->Sup.len;
	}
	LA7: ;
	return result;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_206071)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1680))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i = 0;
	j = 0;
	vera = 0;
	verb = 0;
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, &vera, i);
			jj = npuParseInt(b, &verb, j);
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= 0);
				if (LOC9) goto LA10;
				LOC9 = (jj <= 0);
				LA10: ;
				if (!LOC9) goto LA11;
				result = (0 < jj);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				i += 1;
			}
			LA22: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				j += 1;
			}
			LA26: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, addpackage_206148)(stringtableobj131012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_206023(p);
	name = copyStrLast(p, 0, (NI32)(x - 1));
	{
		NimStringDesc* version;
		if (!(x < p->Sup.len)) goto LA3;
		version = copyStr(p, (NI32)(x + 1));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_206071(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1680));
	}
	LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, addnimblepath_206196)(NimStringDesc* p, tlineinfo196539 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_127224(searchpaths_170122, p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(1 <= gverbosity_170127)) goto LA8;
			message_198959(info, ((NU16) 270), p);
		}
		LA8: ;
		prependstr_127424(&lazypaths_170123, p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_206279)(NimStringDesc* dir, tlineinfo196539 info) {
	stringtableobj131012* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI32)(dir->Sup.len - 1);
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += 1;
	}
	LA3: ;
	{
		NU8 k_206311;
		NimStringDesc* p_206312;
		DIR* d_206326;
		k_206311 = 0;
		p_206312 = 0;
		d_206326 = opendir(dir->data);
		{
			int LOC43;
			if (!!((d_206326 == NIM_NIL))) goto LA8;
			{
				while (1) {
					struct dirent* x_206328;
					NimStringDesc* y_206330;
					x_206328 = readdir(d_206326);
					{
						if (!(x_206328 == NIM_NIL)) goto LA14;
						goto LA10;
					}
					LA14: ;
					y_206330 = cstrToNimstr(((NCSTRING) ((*x_206328).d_name)));
					{
						NIM_BOOL LOC18;
						struct stat s_206332;
						NU8 k_206334;
						LOC18 = 0;
						LOC18 = !(eqStrings(y_206330, ((NimStringDesc*) &TMP1678)));
						if (!(LOC18)) goto LA19;
						LOC18 = !(eqStrings(y_206330, ((NimStringDesc*) &TMP1679)));
						LA19: ;
						if (!LOC18) goto LA20;
						memset((void*)&s_206332, 0, sizeof(s_206332));
						y_206330 = HEX2F_116899(dir, y_206330);
						{
							int LOC24;
							LOC24 = 0;
							LOC24 = lstat(y_206330->data, &s_206332);
							if (!(LOC24 < ((NI32) 0))) goto LA25;
							goto LA10;
						}
						LA25: ;
						k_206334 = ((NU8) 0);
						{
							NIM_BOOL LOC29;
							LOC29 = 0;
							LOC29 = S_ISDIR(s_206332.st_mode);
							if (!LOC29) goto LA30;
							k_206334 = ((NU8) 2);
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = S_ISLNK(s_206332.st_mode);
							if (!LOC34) goto LA35;
							k_206334 = (k_206334 + 1);
						}
						LA35: ;
						k_206311 = k_206334;
						p_206312 = y_206330;
						{
							NIM_BOOL LOC39;
							LOC39 = 0;
							LOC39 = (k_206311 == ((NU8) 2));
							if (!(LOC39)) goto LA40;
							LOC39 = !(((NU8)(p_206312->data[pos]) == (NU8)(46)));
							LA40: ;
							if (!LOC39) goto LA41;
							addpackage_206148(packages, p_206312);
						}
						LA41: ;
					}
					LA20: ;
				}
			} LA10: ;
			LOC43 = 0;
			LOC43 = closedir(d_206326);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_206322;
		p_206322 = 0;
		{
			NimStringDesc* key_206340;
			NimStringDesc* val_206342;
			key_206340 = 0;
			val_206342 = 0;
			{
				NI h_206344;
				NI HEX3Atmp_206346;
				NI res_206348;
				h_206344 = 0;
				HEX3Atmp_206346 = 0;
				HEX3Atmp_206346 = ((*packages).Data->Sup.len-1);
				res_206348 = 0;
				{
					while (1) {
						if (!(res_206348 <= HEX3Atmp_206346)) goto LA48;
						h_206344 = res_206348;
						{
							NimStringDesc* res_206350;
							if (!!((*packages).Data->data[h_206344].Field0 == 0)) goto LA51;
							key_206340 = (*packages).Data->data[h_206344].Field0;
							val_206342 = (*packages).Data->data[h_206344].Field1;
							{
								if (!eqStrings(val_206342, ((NimStringDesc*) &TMP1680))) goto LA55;
								res_206350 = key_206340;
							}
							goto LA53;
							LA55: ;
							{
								NimStringDesc* LOC58;
								LOC58 = 0;
								LOC58 = rawNewString(key_206340->Sup.len + val_206342->Sup.len + 1);
appendString(LOC58, key_206340);
appendChar(LOC58, 45);
appendString(LOC58, val_206342);
								res_206350 = LOC58;
							}
							LA53: ;
							p_206322 = res_206350;
							addnimblepath_206196(p_206322, info);
						}
						LA51: ;
						res_206348 += 1;
					} LA48: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_206381)(NimStringDesc* path, tlineinfo196539 info) {
	addpathrec_206279(path, info);
	addnimblepath_206196(path, info);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimblecmdInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimblecmdDatInit)(void) {
}

