/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tsym190843 Tsym190843;
typedef struct Tcontext243023 Tcontext243023;
typedef struct Tscope190837 Tscope190837;
typedef struct Tidentiter198141 Tidentiter198141;
typedef struct Tident166021 Tident166021;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct TY190944 TY190944;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tlib190831 Tlib190831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tpasscontext240005 Tpasscontext240005;
typedef struct Tproccon243011 Tproccon243011;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tlinkedlist129028 Tlinkedlist129028;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct Tidtable190861 Tidtable190861;
typedef struct Tidpairseq190859 Tidpairseq190859;
typedef struct Tctx242048 Tctx242048;
typedef struct TY243141 TY243141;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tidpair190857 Tidpair190857;
typedef struct TY242253 TY242253;
typedef struct TY163040 TY163040;
typedef struct PprocHEX3Aobjecttype242232 PprocHEX3Aobjecttype242232;
typedef struct TY242272 TY242272;
typedef struct Tinstantiationpair243013 Tinstantiationpair243013;
typedef struct TY190933 TY190933;
typedef struct TY242233 TY242233;
typedef struct TY242239 TY242239;
typedef struct TY242273 TY242273;
typedef struct Vmargs242042 Vmargs242042;
typedef struct Tblock242030 Tblock242030;
typedef struct TY242213 TY242213;
struct  Tidentiter198141  {
NI h;
Tident166021* name;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY153967[2];
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Tpasscontext240005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  Tlinkedlist129028  {
Tlistentry129022* head;
Tlistentry129022* tail;
NI counter;
};
struct  Tidtable190861  {
NI counter;
Tidpairseq190859* data;
};
typedef N_NIMCALL_PTR(Tnode190813*, TY243072) (Tcontext243023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY243077) (Tcontext243023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY243085) (Tcontext243023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY243093) (Tcontext243023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY243098) (Tcontext243023* c, Tnode190813* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode190813*, TY243106) (Tcontext243023* c, Tnode190813* n);
typedef N_NIMCALL_PTR(Tnode190813*, TY243111) (Tcontext243023* c, Tnode190813* n, Tnode190813* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype190849*, TY243118) (Tcontext243023* c, Tnode190813* n, Ttype190849* prev);
typedef struct {
N_NIMCALL_PTR(Tnode190813*, ClPrc) (Tcontext243023* c, Tidtable190861 pt, Tnode190813* n, void* ClEnv);
void* ClEnv;
} TY243124;
typedef struct {
N_NIMCALL_PTR(Tsym190843*, ClPrc) (Tcontext243023* c, Tsym190843* fn, Tidtable190861 pt, Tlineinfo162338 info, void* ClEnv);
void* ClEnv;
} TY243130;
typedef N_NIMCALL_PTR(Tsym190843*, TY243146) (Tcontext243023* c, Tsym190843* dc, Ttype190849* t, Tlineinfo162338 info, NU8 op);
struct  Tcontext243023  {
  Tpasscontext240005 Sup;
Tsym190843* module;
Tscope190837* currentscope;
Tscope190837* importtable;
Tscope190837* toplevelscope;
Tproccon243011* p;
Tsymseq190815* friendmodules;
NI instcounter;
Intset187056 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI incompilescontext;
NI ingenericinst;
Tsymseq190815* converters;
Tsymseq190815* patterns;
Tlinkedlist129028 optionstack;
Tidtable190861 symmapping;
Tlinkedlist129028 libs;
TY243072 semconstexpr;
TY243077 semexpr;
TY243085 semtryexpr;
TY243093 semtryconstexpr;
TY243098 semoperand;
TY243106 semconstboolexpr;
TY243111 semoverloadedcall;
TY243118 semtypenode;
TY243124 seminferredlambda;
TY243130 semgenerateinstance;
Intset187056 includedfiles;
Tstrtable190817 userpragmas;
Tctx242048* evalcontext;
Intset187056 unknownidents;
TY243141* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY243146 insttypeboundop;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib190831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tproccon243011  {
Tsym190843* owner;
Tsym190843* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon243011* next;
NIM_BOOL wasforwarded;
Tnode190813* bracketexpr;
};
typedef NI TY27220[16];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27220 bits;
};
struct  Tidpair190857  {
Tidobj166015* key;
TNimObject* val;
};
struct  Tctx242048  {
  Tpasscontext240005 Sup;
TY242253* code;
TY163040* debug;
Tnode190813* globals;
Tnode190813* constants;
Ttypeseq190845* types;
Tnode190813* currentexceptiona;
Tnode190813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype242232* prc;
Tsym190843* module;
Tnode190813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo162338 comesfromheuristic;
TY242272* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair243013  {
Tsym190843* genericsym;
Tinstantiation190833* inst;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY242239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY242239 TY242236[256];
struct  PprocHEX3Aobjecttype242232  {
TY242233* blocks;
Tsym190843* sym;
TY242236 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs242042* args, void* ClEnv);
void* ClEnv;
} Vmcallback242044;
struct TY242273 {
NimStringDesc* Field0;
Vmcallback242044 Field1;
};
struct  Tblock242030  {
Tsym190843* label;
TY242213* fixups;
};
struct  Vmargs242042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct Tidpairseq190859 {
  TGenericSeq Sup;
  Tidpair190857 data[SEQ_DECL_SIZE];
};
struct TY243141 {
  TGenericSeq Sup;
  Tinstantiationpair243013 data[SEQ_DECL_SIZE];
};
struct TY242253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY163040 {
  TGenericSeq Sup;
  Tlineinfo162338 data[SEQ_DECL_SIZE];
};
struct TY242272 {
  TGenericSeq Sup;
  TY242273 data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY242233 {
  TGenericSeq Sup;
  Tblock242030 data[SEQ_DECL_SIZE];
};
struct TY242213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tsym190843*, searchforprocnew_258197)(Tcontext243023* c, Tscope190837* scope, Tsym190843* fn);
N_NIMCALL(Tsym190843*, initidentiter_198147)(Tidentiter198141* ti, Tstrtable190817 tab, Tident166021* s);
N_NIMCALL(NIM_BOOL, sametype_225094)(Ttype190849* a, Ttype190849* b, NU8 flags);
N_NIMCALL(NU8, equalparams_220086)(Tnode190813* a, Tnode190813* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_220447)(Tsym190843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_163479)(Tlineinfo162338 info);
N_NIMCALL(void, localerror_164171)(Tlineinfo162338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tsym190843*, nextidentiter_198156)(Tidentiter198141* ti, Tstrtable190817 tab);
STRING_LITERAL(TMP3148, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(Tsym190843*, searchforprocnew_258197)(Tcontext243023* c, Tscope190837* scope, Tsym190843* fn) {
	Tsym190843* result;
	Tidentiter198141 it;
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_198147((&it), (*scope).symbols, (*fn).name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_225094((*result).typ, (*fn).typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_220086((*(*result).typ).n, (*(*fn).typ).n);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY153967 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_220447(result, ((NU8) 0));
						LOC17[1] = HEX24_163479((*result).info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3148), LOC17, 2);
						localerror_164171((*fn).info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_164171((*fn).info, ((NU16) 66), (*(*fn).name).s);
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result = nextidentiter_198156((&it), (*scope).symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym190843*, searchforproc_258280)(Tcontext243023* c, Tscope190837* scope, Tsym190843* fn) {
	Tsym190843* result;
	result = 0;
	result = searchforprocnew_258197(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

