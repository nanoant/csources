/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tllstream211204 tllstream211204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode224819 tnode224819;
typedef struct ttmplparser257020 ttmplparser257020;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttype224855 ttype224855;
typedef struct tsym224849 tsym224849;
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlib224837 tlib224837;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  ttmplparser257020  {
tllstream211204* Inp;
NU8 State;
tlineinfo195539 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
tllstream211204* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
};
typedef NU8 TY211607[32];
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
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tnode224819  {
ttype224855* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224849* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq224813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype224855  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224851* Sons;
tnode224819* N;
tsym224849* Owner;
tsym224849* Sym;
tsym224849* Destructor;
tsym224849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224833 Loc;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tsym224849  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq224851* Typeinstcache;
tscope224843* Typscope;
} S1;
struct {TY224950* Procinstcache;
tscope224843* Scope;
} S2;
struct {TY224950* Usedgenerics;
tstrtable224823 Tab;
} S3;
struct {tsym224849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224855* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym224849* Owner;
NU32 Flags;
tnode224819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224833 Loc;
tlib224837* Annex;
tnode224819* Constraint;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
};
struct  tinstantiation224839  {
tsym224849* Sym;
ttypeseq224851* Concretetypes;
TY224939* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib224837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(tlineinfo195539, newlineinfo_196141)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(tlineinfo195539, newlineinfo_196129)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_195747)(NimStringDesc* filename);
N_NIMCALL(tllstream211204*, llstreamopen_211220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_256020)(tnode224819* n, NimStringDesc* name, NI pos, NIM_CHAR default_256025);
N_NIMCALL(NimStringDesc*, strarg_256029)(tnode224819* n, NimStringDesc* name, NI pos, NimStringDesc* default_256034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_211264)(tllstream211204* s, NimStringDesc** line);
N_NIMCALL(void, parseline_257174)(ttmplparser257020* p);
N_NIMCALL(void, newline_257047)(ttmplparser257020* p);
N_NIMCALL(void, llstreamwrite_211278)(tllstream211204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanpar_257058)(ttmplparser257020* p, NI d);
static N_INLINE(NIM_BOOL, withinexpr_257161)(ttmplparser257020* p);
N_NIMCALL(NIM_BOOL, endswithopr_211656)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_204390)(NimStringDesc* id);
N_NIMCALL(void, localerror_197938)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_97229)(NimStringDesc* s, TY211607 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_211285)(tllstream211204* s, NIM_CHAR data);
N_NIMCALL(void, llstreamclose_211250)(tllstream211204* s);
STRING_LITERAL(TMP1317, "", 0);
STRING_LITERAL(TMP1318, "subschar", 8);
STRING_LITERAL(TMP1319, "metachar", 8);
STRING_LITERAL(TMP1320, "emit", 4);
STRING_LITERAL(TMP1321, "result.add", 10);
STRING_LITERAL(TMP1322, "conc", 4);
STRING_LITERAL(TMP1323, " & ", 3);
STRING_LITERAL(TMP1324, "tostring", 8);
STRING_LITERAL(TMP1325, "$", 1);
STRING_LITERAL(TMP1326, "\012", 1);
STRING_LITERAL(TMP1328, "end", 3);
STRING_LITERAL(TMP1329, "#end", 4);
static NIM_CONST TY211607 TMP1330 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1331, "\"", 1);
STRING_LITERAL(TMP1332, "(\"", 2);
STRING_LITERAL(TMP1333, "\\x", 2);
STRING_LITERAL(TMP1334, "\\\\", 2);
STRING_LITERAL(TMP1335, "\\\'", 2);
STRING_LITERAL(TMP1336, "\\\"", 2);
STRING_LITERAL(TMP1337, "}", 1);
STRING_LITERAL(TMP1338, "\\n\"", 3);

static N_INLINE(tlineinfo195539, newlineinfo_196141)(NimStringDesc* filename, NI line, NI col) {
	tlineinfo195539 result;
	NI32 LOC1;
	memset((void*)&result, 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_195747(filename);
	result = newlineinfo_196129(LOC1, line, col);
	return result;
}

N_NIMCALL(void, newline_257047)(ttmplparser257020* p) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar((*p).Emitpar, 41);
	llstreamwrite_211278((*p).Outp, LOC1);
	(*p).Emitpar = 0;
	{
		if (!(((NI16) 1) < (*p).Info.Line)) goto LA4;
		llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1326));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p).Pendingexprline) goto LA8;
		LOC10 = 0;
		LOC10 = nsuRepeatChar(2, 32);
		llstreamwrite_211278((*p).Outp, LOC10);
		(*p).Pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_257058)(ttmplparser257020* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).X->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).Par += 1;
			}
			break;
			case 41:
			{
				(*p).Par -= 1;
			}
			break;
			case 91:
			{
				(*p).Bracket += 1;
			}
			break;
			case 93:
			{
				(*p).Bracket -= 1;
			}
			break;
			case 123:
			{
				(*p).Curly += 1;
			}
			break;
			case 125:
			{
				(*p).Curly -= 1;
			}
			break;
			default:
			{
			}
			break;
			}
			i += 1;
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_257161)(ttmplparser257020* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (0 < (*p).Par);
	if (LOC2) goto LA3;
	LOC2 = (0 < (*p).Bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (0 < (*p).Curly);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, parseline_257174)(ttmplparser257020* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	j = 0;
	{
		while (1) {
			if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA2;
			j += 1;
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = ((NU8)((*p).X->data[0]) == (NU8)((*p).Nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p).X->data[1]) == (NU8)(33));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_257047(p);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		NU8 LOC18;
		if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Nimdirective))) goto LA10;
		newline_257047(p);
		j += 1;
		{
			while (1) {
				if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA13;
				j += 1;
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TMP1317));
		{
			while (1) {
				if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).X->data[j]);
				j += 1;
			} LA15: ;
		}
		scanpar_257058(p, j);
		LOC16 = 0;
		LOC16 = withinexpr_257161(&(*p));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_211656((*p).X);
		LA17: ;
		(*p).Pendingexprline = LOC16;
		LOC18 = 0;
		LOC18 = whichkeyword_204390(keyw);
		switch (LOC18) {
		case ((NU8) 20):
		{
			NimStringDesc* LOC25;
			{
				if (!(2 <= (*p).Indent)) goto LA22;
				(*p).Indent -= 2;
			}
			goto LA20;
			LA22: ;
			{
				(*p).Info.Col = ((NI16) (j));
				localerror_197938((*p).Info, ((NU16) 163), ((NimStringDesc*) &TMP1328));
			}
			LA20: ;
			LOC25 = 0;
			LOC25 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC25);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1329));
		}
		break;
		case ((NU8) 28):
		case ((NU8) 62):
		case ((NU8) 57):
		case ((NU8) 63):
		case ((NU8) 25):
		case ((NU8) 7):
		case ((NU8) 9):
		case ((NU8) 48):
		case ((NU8) 35):
		case ((NU8) 13):
		case ((NU8) 37):
		case ((NU8) 56):
		case ((NU8) 38):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = 0;
			LOC27 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC27);
			LOC28 = 0;
			LOC28 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC28);
			(*p).Indent += 2;
		}
		break;
		case ((NU8) 18):
		case ((NU8) 45):
		case ((NU8) 19):
		case ((NU8) 22):
		case ((NU8) 24):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = 0;
			LOC30 = nsuRepeatChar((NI32)((*p).Indent - 2), 32);
			llstreamwrite_211278((*p).Outp, LOC30);
			LOC31 = 0;
			LOC31 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC31);
		}
		break;
		case ((NU8) 36):
		case ((NU8) 61):
		case ((NU8) 11):
		case ((NU8) 59):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = 0;
			LOC33 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC33);
			LOC34 = 0;
			LOC34 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = 0;
				LOC37 = contains_97229((*p).X, TMP1330);
				if (!!(LOC37)) goto LA38;
				(*p).Indent += 2;
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = 0;
			LOC41 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC41);
			LOC42 = 0;
			LOC42 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC42);
		}
		break;
		}
		(*p).State = ((NU8) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p).Par = 0;
		(*p).Curly = 0;
		(*p).Bracket = 0;
		j = 0;
		switch ((*p).State) {
		case ((NU8) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_211278((*p).Outp, (*p).Conc);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1326));
			LOC45 = 0;
			LOC45 = nsuRepeatChar((NI32)((*p).Indent + 2), 32);
			llstreamwrite_211278((*p).Outp, LOC45);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1331));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			newline_257047(p);
			LOC47 = 0;
			LOC47 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC47);
			llstreamwrite_211278((*p).Outp, (*p).Emit);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1332));
			(*p).Emitpar += 1;
		}
		break;
		}
		(*p).State = ((NU8) 1);
		{
			while (1) {
				switch (((NU8)((*p).X->data[j]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1333));
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).X->data[j])))), 2);
					llstreamwrite_211278((*p).Outp, LOC52);
					j += 1;
				}
				break;
				case 92:
				{
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1334));
					j += 1;
				}
				break;
				case 39:
				{
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1335));
					j += 1;
				}
				break;
				case 34:
				{
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1336));
					j += 1;
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA59;
						j += 1;
						switch (((NU8)((*p).X->data[j]))) {
						case 123:
						{
							(*p).Info.Col = ((NI16) (j));
							llstreamwrite_211285((*p).Outp, 34);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211278((*p).Outp, (*p).Tostr);
							llstreamwrite_211285((*p).Outp, 40);
							j += 1;
							curly = 0;
							{
								while (1) {
									switch (((NU8)((*p).X->data[j]))) {
									case 0:
									{
										localerror_197938((*p).Info, ((NU16) 188), ((NimStringDesc*) &TMP1337));
										goto LA62;
									}
									break;
									case 123:
									{
										j += 1;
										curly += 1;
										llstreamwrite_211285((*p).Outp, 123);
									}
									break;
									case 125:
									{
										j += 1;
										{
											if (!(curly == 0)) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(0 < curly)) goto LA73;
											curly -= 1;
										}
										LA73: ;
										llstreamwrite_211285((*p).Outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_211285((*p).Outp, (*p).X->data[j]);
										j += 1;
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_211285((*p).Outp, 41);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211285((*p).Outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_211285((*p).Outp, 34);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211278((*p).Outp, (*p).Tostr);
							llstreamwrite_211285((*p).Outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_211285((*p).Outp, (*p).X->data[j]);
									j += 1;
								} LA78: ;
							}
							llstreamwrite_211285((*p).Outp, 41);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211285((*p).Outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA82;
								llstreamwrite_211285((*p).Outp, (*p).Subschar);
								j += 1;
							}
							goto LA80;
							LA82: ;
							{
								(*p).Info.Col = ((NI16) (j));
								localerror_197938((*p).Info, ((NU16) 167), ((NimStringDesc*) &TMP1325));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_211285((*p).Outp, (*p).X->data[j]);
						j += 1;
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1338));
	}
	LA3: ;
}

N_NIMCALL(tllstream211204*, filtertmpl_257009)(tllstream211204* stdin_257011, NimStringDesc* filename, tnode224819* call) {
	tllstream211204* result;
	ttmplparser257020 p;
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	p.Info = newlineinfo_196141(filename, 0, 0);
	p.Outp = llstreamopen_211220(((NimStringDesc*) &TMP1317));
	p.Inp = stdin_257011;
	p.Subschar = chararg_256020(call, ((NimStringDesc*) &TMP1318), 1, 36);
	p.Nimdirective = chararg_256020(call, ((NimStringDesc*) &TMP1319), 2, 35);
	p.Emit = strarg_256029(call, ((NimStringDesc*) &TMP1320), 3, ((NimStringDesc*) &TMP1321));
	p.Conc = strarg_256029(call, ((NimStringDesc*) &TMP1322), 4, ((NimStringDesc*) &TMP1323));
	p.Tostr = strarg_256029(call, ((NimStringDesc*) &TMP1324), 5, ((NimStringDesc*) &TMP1325));
	p.X = rawNewString(120);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = llstreamreadline_211264(p.Inp, &p.X);
			if (!LOC3) goto LA2;
			p.Info.Line = (NI16)(p.Info.Line + ((NI16) 1));
			parseline_257174(&p);
		} LA2: ;
	}
	newline_257047(&p);
	result = p.Outp;
	llstreamclose_211250(p.Inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_filter_tmplInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_filter_tmplDatInit)(void) {
}

