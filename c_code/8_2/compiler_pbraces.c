/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode170659 tnode170659;
typedef struct tparser184203 tparser184203;
typedef struct ttype170693 ttype170693;
typedef struct tlineinfo135509 tlineinfo135509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym170689 tsym170689;
typedef struct tident139017 tident139017;
typedef struct tnodeseq170653 tnodeseq170653;
typedef struct tlexer163166 tlexer163166;
typedef struct tbaselexer161018 tbaselexer161018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream160204 tllstream160204;
typedef struct ttoken163164 ttoken163164;
typedef struct tidobj139011 tidobj139011;
typedef struct ttypeseq170691 ttypeseq170691;
typedef struct tloc170673 tloc170673;
typedef struct trope120007 trope120007;
typedef struct tscope170683 tscope170683;
typedef struct TY170786 TY170786;
typedef struct tinstantiation170679 tinstantiation170679;
typedef struct tstrtable170663 tstrtable170663;
typedef struct tsymseq170661 tsymseq170661;
typedef struct tlib170677 tlib170677;
typedef struct TY170775 TY170775;
typedef struct tlistentry108014 tlistentry108014;
struct tlineinfo135509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode170659 {
ttype170693* Typ;
tlineinfo135509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym170689* Sym;
} S4;
struct {tident139017* Ident;
} S5;
struct {tnodeseq170653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
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
struct tbaselexer161018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream160204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer163166 {
  tbaselexer161018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken163164 {
NU8 Toktype;
NI Indent;
tident139017* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser184203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer163166 Lex;
ttoken163164 Tok;
};
struct tidobj139011 {
  TNimObject Sup;
NI Id;
};
struct tloc170673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype170693* T;
trope120007* R;
trope120007* Heaproot;
NI A;
};
struct ttype170693 {
  tidobj139011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq170691* Sons;
tnode170659* N;
tsym170689* Destructor;
tsym170689* Owner;
tsym170689* Sym;
NI64 Size;
NI Align;
tloc170673 Loc;
};
struct tstrtable170663 {
NI Counter;
tsymseq170661* Data;
};
struct tsym170689 {
  tidobj139011 Sup;
NU8 Kind;
union {
struct {ttypeseq170691* Typeinstcache;
tscope170683* Typscope;
} S1;
struct {TY170786* Procinstcache;
tscope170683* Scope;
} S2;
struct {TY170786* Usedgenerics;
tstrtable170663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype170693* Typ;
tident139017* Name;
tlineinfo135509 Info;
tsym170689* Owner;
NU32 Flags;
tnode170659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc170673 Loc;
tlib170677* Annex;
tnode170659* Constraint;
};
struct tident139017 {
  tidobj139011 Sup;
NimStringDesc* S;
tident139017* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tllstream160204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct trope120007 {
  TNimObject Sup;
trope120007* Left;
trope120007* Right;
NI Length;
NimStringDesc* Data;
};
struct tscope170683 {
NI Depthlevel;
tstrtable170663 Symbols;
tnodeseq170653* Usingsyms;
tscope170683* Parent;
};
struct tinstantiation170679 {
tsym170689* Sym;
ttypeseq170691* Concretetypes;
TY170775* Usedby;
};
struct tlistentry108014 {
  TNimObject Sup;
tlistentry108014* Prev;
tlistentry108014* Next;
};
struct tlib170677 {
  tlistentry108014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope120007* Name;
tnode170659* Path;
};
struct tnodeseq170653 {
  TGenericSeq Sup;
  tnode170659* data[SEQ_DECL_SIZE];
};
struct ttypeseq170691 {
  TGenericSeq Sup;
  ttype170693* data[SEQ_DECL_SIZE];
};
struct TY170786 {
  TGenericSeq Sup;
  tinstantiation170679* data[SEQ_DECL_SIZE];
};
struct tsymseq170661 {
  TGenericSeq Sup;
  tsym170689* data[SEQ_DECL_SIZE];
};
struct TY170775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode170659*, parseall_187005)(tparser184203* p);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode170659*, parsetoplevelstmt_187012)(tparser184203* p);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tnode170659*, parseall_187005)(tparser184203* p) {
	tnode170659* result;
	nimfr("ParseAll", "pbraces.nim")
	result = 0;
	nimln(14, "pbraces.nim");
	result = NIM_NIL;
	popFrame();
	return result;
}
N_NIMCALL(tnode170659*, parsetoplevelstmt_187012)(tparser184203* p) {
	tnode170659* result;
	nimfr("parseTopLevelStmt", "pbraces.nim")
	result = 0;
	nimln(17, "pbraces.nim");
	result = NIM_NIL;
	popFrame();
	return result;
}N_NOINLINE(void, compilerpbracesInit)(void) {
	nimfr("pbraces", "pbraces.nim")
	popFrame();
}

N_NOINLINE(void, compilerpbracesDatInit)(void) {
}

