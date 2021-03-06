/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Optparser175011 Optparser175011;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Optparser175011  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 TY178407[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_124830)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_98340)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, paramstr_124809)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, handleshortoption_175291)(Optparser175011* p);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NI, parseword_175204)(NimStringDesc* s, NI i, NimStringDesc** w, TY178407 delim);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP1537, "", 0);
STRING_LITERAL(TMP1539, "", 0);
static NIM_CONST TY178407 TMP1540 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY178407 TMP1541 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3411; /* RootObj */
TNimType NTI175011; /* OptParser */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
extern TNimType NTI138; /* bool */
TNimType NTI175009; /* CmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, initoptparser_175030)(NimStringDesc* cmdline, Optparser175011* Result) {
	(*Result).pos = ((NI) 0);
	(*Result).inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &TMP1537)));
		{
			NI i_175046;
			NI HEX3Atmp_175049;
			NI res_175052;
			i_175046 = 0;
			HEX3Atmp_175049 = 0;
			HEX3Atmp_175049 = paramcount_124830();
			res_175052 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					NimStringDesc* LOC11;
					if (!(res_175052 <= HEX3Atmp_175049)) goto LA8;
					i_175046 = res_175052;
					LOC9 = 0;
					LOC10 = 0;
					LOC10 = paramstr_124809(i_175046);
					LOC11 = 0;
					LOC11 = quoteifcontainswhite_98340(LOC10);
					LOC9 = rawNewString((*Result).cmd->Sup.len + LOC11->Sup.len + 1);
appendString(LOC9, (*Result).cmd);
appendString(LOC9, LOC11);
appendChar(LOC9, 32);
					unsureAsgnRef((void**) (&(*Result).cmd), LOC9);
					res_175052 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).kind = ((NU8) 0);
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &TMP1539)));
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &TMP1539)));
}

N_NIMCALL(NI, parseword_175204)(NimStringDesc* s, NI i, NimStringDesc** w, TY178407 delim) {
	NI result;
	result = 0;
	result = i;
	{
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		result += ((NI) 1);
		{
			while (1) {
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA6: ;
		}
		{
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9;
			result += ((NI) 1);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			while (1) {
				if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA13;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA13: ;
		}
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, handleshortoption_175291)(Optparser175011* p) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((NU8) 3);
	(*p).key = addChar((*p).key, (*p).cmd->data[i]);
	i += ((NI) 1);
	(*p).inshortstate = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
			(*p).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA5;
		i += ((NI) 1);
		(*p).inshortstate = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA8;
				i += ((NI) 1);
			} LA8: ;
		}
		i = parseword_175204((*p).cmd, i, (&(*p).val), TMP1540);
	}
	LA5: ;
	{
		if (!((NU8)((*p).cmd->data[i]) == (NU8)(0))) goto LA11;
		(*p).inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p).pos = i;
}

N_NIMCALL(void, nponext)(Optparser175011* p) {
	NI i;
{	i = (*p).pos;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
		} LA2: ;
	}
	(*p).pos = i;
	(*p).key = setLengthStr((*p).key, ((NI) 0));
	(*p).val = setLengthStr((*p).val, ((NI) 0));
	{
		if (!(*p).inshortstate) goto LA5;
		handleshortoption_175291(p);
		goto BeforeRet;
	}
	LA5: ;
	switch (((NU8)((*p).cmd->data[i]))) {
	case 0:
	{
		(*p).kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		i += ((NI) 1);
		{
			if (!((NU8)((*p).cmd->data[i]) == (NU8)(45))) goto LA11;
			(*p).kind = ((NU8) 2);
			i += ((NI) 1);
			i = parseword_175204((*p).cmd, i, (&(*p).key), TMP1541);
			{
				while (1) {
					if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA14;
					i += ((NI) 1);
				} LA14: ;
			}
			{
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA17;
				i += ((NI) 1);
				{
					while (1) {
						if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA20;
						i += ((NI) 1);
					} LA20: ;
				}
				(*p).pos = parseword_175204((*p).cmd, i, (&(*p).val), TMP1540);
			}
			goto LA15;
			LA17: ;
			{
				(*p).pos = i;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*p).pos = i;
			handleshortoption_175291(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p).kind = ((NU8) 1);
		(*p).pos = parseword_175204((*p).cmd, i, (&(*p).key), TMP1540);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser175011* p) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = copyStrLast((*p).cmd, (*p).pos, (NI)(((*p).cmd ? (*p).cmd->Sup.len : 0) - ((NI) 1)));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void) {
static TNimNode* TMP1533[6];
static TNimNode* TMP1534[4];
NI TMP1536;
static char* NIM_CONST TMP1535[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP708[12];
NTI175011.size = sizeof(Optparser175011);
NTI175011.kind = 17;
NTI175011.base = (&NTI3411);
TMP1533[0] = &TMP708[1];
TMP708[1].kind = 1;
TMP708[1].offset = offsetof(Optparser175011, cmd);
TMP708[1].typ = (&NTI149);
TMP708[1].name = "cmd";
TMP1533[1] = &TMP708[2];
TMP708[2].kind = 1;
TMP708[2].offset = offsetof(Optparser175011, pos);
TMP708[2].typ = (&NTI108);
TMP708[2].name = "pos";
TMP1533[2] = &TMP708[3];
TMP708[3].kind = 1;
TMP708[3].offset = offsetof(Optparser175011, inshortstate);
TMP708[3].typ = (&NTI138);
TMP708[3].name = "inShortState";
TMP1533[3] = &TMP708[4];
NTI175009.size = sizeof(NU8);
NTI175009.kind = 14;
NTI175009.base = 0;
NTI175009.flags = 3;
for (TMP1536 = 0; TMP1536 < 4; TMP1536++) {
TMP708[TMP1536+5].kind = 1;
TMP708[TMP1536+5].offset = TMP1536;
TMP708[TMP1536+5].name = TMP1535[TMP1536];
TMP1534[TMP1536] = &TMP708[TMP1536+5];
}
TMP708[9].len = 4; TMP708[9].kind = 2; TMP708[9].sons = &TMP1534[0];
NTI175009.node = &TMP708[9];
TMP708[4].kind = 1;
TMP708[4].offset = offsetof(Optparser175011, kind);
TMP708[4].typ = (&NTI175009);
TMP708[4].name = "kind";
TMP1533[4] = &TMP708[10];
TMP708[10].kind = 1;
TMP708[10].offset = offsetof(Optparser175011, key);
TMP708[10].typ = (&NTI149);
TMP708[10].name = "key";
TMP1533[5] = &TMP708[11];
TMP708[11].kind = 1;
TMP708[11].offset = offsetof(Optparser175011, val);
TMP708[11].typ = (&NTI149);
TMP708[11].name = "val";
TMP708[0].len = 6; TMP708[0].kind = 2; TMP708[0].sons = &TMP1533[0];
NTI175011.node = &TMP708[0];
}

