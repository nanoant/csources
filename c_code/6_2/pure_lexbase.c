/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tbaselexer290016 tbaselexer290016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstream142629 tstream142629;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY113118[32];
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
struct tbaselexer290016 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tstream142629* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY142630) (tstream142629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY142634) (tstream142629* s);
typedef N_NIMCALL_PTR(void, TY142638) (tstream142629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY142643) (tstream142629* s);
typedef N_NIMCALL_PTR(NI, TY142647) (tstream142629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY142653) (tstream142629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY142659) (tstream142629* s);
struct tstream142629 {
  TNimObject Sup;
TY142630 Closeimpl;
TY142634 Atendimpl;
TY142638 Setpositionimpl;
TY142643 Getpositionimpl;
TY142647 Readdataimpl;
TY142653 Writedataimpl;
TY142659 Flushimpl;
};
N_NIMCALL(void, close_290034)(tbaselexer290016* l);
N_NOCONV(void, dealloc_4011)(void* p);
N_NIMCALL(void, close_142675)(tstream142629* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_290071)(tbaselexer290016* l);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, readdata_142731)(tstream142629* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4007)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_290812)(tbaselexer290016* l, NI pos);
N_NIMCALL(NI, handlecr_290049)(tbaselexer290016* l, NI pos);
N_NIMCALL(NI, handlelf_290055)(tbaselexer290016* l, NI pos);
N_NIMCALL(void, skiputf8bom_291413)(tbaselexer290016* l);
N_NIMCALL(void, open_290026)(tbaselexer290016* l, tstream142629* input, NI buflen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_4001)(NI size);
N_NIMCALL(NI, getcolnumber_290044)(tbaselexer290016* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_290039)(tbaselexer290016* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY113118 newlines_290011 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4636, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP4639, "0 <= toCopy ", 12);
STRING_LITERAL(TMP4647, "s < L.bufLen ", 13);
STRING_LITERAL(TMP4651, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP4657, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP4659, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP4660, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP4661, "0 < bufLen ", 11);
STRING_LITERAL(TMP4662, "not (input == nil) ", 19);
STRING_LITERAL(TMP4666, "", 0);
STRING_LITERAL(TMP4667, "\012", 1);
STRING_LITERAL(TMP4668, "^\012", 2);
extern TFrame* frameptr_12037;
extern TNimType NTI1009; /* TObject */
TNimType NTI290016; /* TBaseLexer */
extern TNimType NTI105; /* int */
extern TNimType NTI144; /* cstring */
extern TNimType NTI142627; /* PStream */
extern TNimType NTI133; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, close_290034)(tbaselexer290016* l) {
	nimfr("close", "lexbase.nim")
	nimln(66, "lexbase.nim");
	dealloc_4011(((void*) ((*l).Buf)));	nimln(67, "lexbase.nim");
	close_142675((*l).Input);	popFrame();
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, fillbuffer_290071)(tbaselexer290016* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP4637;
	NI TMP4638;
	NI TMP4642;
	NI TMP4643;
	NI LOC13;
	NI TMP4644;
	NI TMP4645;
	nimfr("FillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(77, "lexbase.nim");
	{
		nimln(77, "lexbase.nim");
		nimln(77, "lexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(77, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4636));	}	LA3: ;
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	TMP4637 = subInt((*l).Buflen, (*l).Sentinel);
	TMP4638 = subInt((NI64)(TMP4637), 1);
	tocopy = (NI64)(TMP4638);
	nimln(79, "lexbase.nim");
	{
		nimln(79, "lexbase.nim");
		nimln(79, "lexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(79, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4639));	}	LA7: ;
	nimln(80, "lexbase.nim");
	{
		NI TMP4640;
		NI TMP4641;
		nimln(706, "system.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(81, "lexbase.nim");
		nimln(81, "lexbase.nim");
		TMP4640 = addInt((*l).Sentinel, 1);
		nimln(81, "lexbase.nim");
		TMP4641 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI64)(TMP4640)])), (NI64)(TMP4641));	}	LA11: ;
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(84, "lexbase.nim");
	TMP4642 = addInt((*l).Sentinel, 1);
	TMP4643 = mulInt((NI64)(TMP4642), 1);
	LOC13 = 0;
	LOC13 = readdata_142731((*l).Input, ((void*) (&(*l).Buf[tocopy])), (NI64)(TMP4643));
	TMP4644 = divInt(LOC13, 1);
	charsread = (NI64)(TMP4644);
	nimln(85, "lexbase.nim");
	nimln(85, "lexbase.nim");
	TMP4645 = addInt(tocopy, charsread);
	s = (NI64)(TMP4645);
	nimln(86, "lexbase.nim");
	{
		NI TMP4646;
		nimln(86, "lexbase.nim");
		nimln(86, "lexbase.nim");
		TMP4646 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI64)(TMP4646))) goto LA16;
		nimln(87, "lexbase.nim");
		(*l).Buf[s] = 0;
		nimln(88, "lexbase.nim");
		(*l).Sentinel = s;
	}	goto LA14;
	LA16: ;
	{
		nimln(91, "lexbase.nim");
		s = subInt(s, 1);
		nimln(92, "lexbase.nim");
		while (1) {
			nimln(93, "lexbase.nim");
			{
				nimln(93, "lexbase.nim");
				nimln(93, "lexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(93, "lexbase.nim");
				hiddenraiseassert_76017(((NimStringDesc*) &TMP4647));			}			LA22: ;
			nimln(94, "lexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(94, "lexbase.nim");
				LOC25 = 0;
				nimln(702, "system.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(94, "lexbase.nim");
				nimln(730, "system.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(94, "lexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(95, "lexbase.nim");
			{
				nimln(702, "system.nim");
				if (!(0 <= s)) goto LA29;
				nimln(97, "lexbase.nim");
				(*l).Sentinel = s;
				nimln(98, "lexbase.nim");
				goto LA19;
			}			goto LA27;
			LA29: ;
			{
				NI TMP4648;
				NI TMP4649;
				void* LOC32;
				NI TMP4652;
				NI LOC37;
				NI TMP4653;
				NI TMP4656;
				nimln(102, "lexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(103, "lexbase.nim");
				nimln(103, "lexbase.nim");
				TMP4648 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI64)(TMP4648);
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				TMP4649 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4007(((void*) ((*l).Buf)), (NI64)(TMP4649));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(105, "lexbase.nim");
				{
					NI TMP4650;
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					TMP4650 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI64)(TMP4650) == oldbuflen))) goto LA35;
					nimln(105, "lexbase.nim");
					hiddenraiseassert_76017(((NimStringDesc*) &TMP4651));				}				LA35: ;
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				TMP4652 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = readdata_142731((*l).Input, ((void*) (&(*l).Buf[oldbuflen])), (NI64)(TMP4652));
				TMP4653 = divInt(LOC37, 1);
				charsread = (NI64)(TMP4653);
				nimln(108, "lexbase.nim");
				{
					NI TMP4654;
					NI TMP4655;
					nimln(108, "lexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(109, "lexbase.nim");
					nimln(109, "lexbase.nim");
					TMP4654 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI64)(TMP4654)] = 0;
					nimln(110, "lexbase.nim");
					nimln(110, "lexbase.nim");
					TMP4655 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI64)(TMP4655);
					nimln(111, "lexbase.nim");
					goto LA19;
				}				LA40: ;
				nimln(112, "lexbase.nim");
				nimln(112, "lexbase.nim");
				TMP4656 = subInt((*l).Buflen, 1);
				s = (NI64)(TMP4656);
			}			LA27: ;
		} LA19: ;
	}	LA14: ;
	popFrame();
}
N_NIMCALL(NI, fillbaselexer_290812)(tbaselexer290016* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(115, "lexbase.nim");
	{
		nimln(115, "lexbase.nim");
		nimln(115, "lexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(115, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4657));	}	LA3: ;
	nimln(116, "lexbase.nim");
	{
		NI TMP4658;
		nimln(116, "lexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(117, "lexbase.nim");
		nimln(117, "lexbase.nim");
		TMP4658 = addInt(pos, 1);
		result = (NI64)(TMP4658);
	}	goto LA5;
	LA7: ;
	{
		nimln(119, "lexbase.nim");
		fillbuffer_290071(l);		nimln(120, "lexbase.nim");
		(*l).Bufpos = 0;
		nimln(121, "lexbase.nim");
		result = 0;
	}	LA5: ;
	nimln(122, "lexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}
N_NIMCALL(NI, handlecr_290049)(tbaselexer290016* l, NI pos) {
	NI result;
	nimfr("HandleCR", "lexbase.nim")
	result = 0;
	nimln(125, "lexbase.nim");
	{
		nimln(125, "lexbase.nim");
		nimln(125, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(125, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4659));	}	LA3: ;
	nimln(126, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(127, "lexbase.nim");
	result = fillbaselexer_290812(l, pos);
	nimln(128, "lexbase.nim");
	{
		nimln(128, "lexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(129, "lexbase.nim");
		result = fillbaselexer_290812(l, result);
	}	LA7: ;
	popFrame();
	return result;
}
N_NIMCALL(NI, handlelf_290055)(tbaselexer290016* l, NI pos) {
	NI result;
	nimfr("HandleLF", "lexbase.nim")
	result = 0;
	nimln(132, "lexbase.nim");
	{
		nimln(132, "lexbase.nim");
		nimln(132, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(132, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4660));	}	LA3: ;
	nimln(133, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(134, "lexbase.nim");
	result = fillbaselexer_290812(l, pos);
	popFrame();
	return result;
}
N_NIMCALL(void, skiputf8bom_291413)(tbaselexer290016* l) {
	nimfr("skip_UTF_8_BOM", "lexbase.nim")
	nimln(137, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(137, "lexbase.nim");
		LOC3 = 0;
		nimln(137, "lexbase.nim");
		LOC4 = 0;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(137, "lexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(138, "lexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(139, "lexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}	LA7: ;
	popFrame();
}
N_NIMCALL(void, open_290026)(tbaselexer290016* l, tstream142629* input, NI buflen) {
	NI TMP4663;
	void* LOC9;
	NI TMP4664;
	nimfr("open", "lexbase.nim")
	nimln(142, "lexbase.nim");
	{
		nimln(142, "lexbase.nim");
		nimln(142, "lexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(142, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4661));	}	LA3: ;
	nimln(143, "lexbase.nim");
	{
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		if (!!(!((input == NIM_NIL)))) goto LA7;
		nimln(143, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4662));	}	LA7: ;
	nimln(144, "lexbase.nim");
	unsureAsgnRef((void**) &(*l).Input, input);
	nimln(145, "lexbase.nim");
	(*l).Bufpos = 0;
	nimln(146, "lexbase.nim");
	(*l).Buflen = buflen;
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	TMP4663 = mulInt(buflen, 1);
	LOC9 = 0;
	LOC9 = alloc_4001((NI64)(TMP4663));
	(*l).Buf = ((NCSTRING) (LOC9));
	nimln(148, "lexbase.nim");
	nimln(148, "lexbase.nim");
	TMP4664 = subInt(buflen, 1);
	(*l).Sentinel = (NI64)(TMP4664);
	nimln(149, "lexbase.nim");
	(*l).Linestart = 0;
	nimln(150, "lexbase.nim");
	(*l).Linenumber = 1;
	nimln(151, "lexbase.nim");
	fillbuffer_290071(l);	nimln(152, "lexbase.nim");
	skiputf8bom_291413(l);	popFrame();
}
N_NIMCALL(NI, getcolnumber_290044)(tbaselexer290016* l, NI pos) {
	NI result;
	NI TMP4665;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	TMP4665 = subInt(pos, (*l).Linestart);
	if ((NI64)(TMP4665) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = (NI64)abs((NI64)(TMP4665));
	popFrame();
	return result;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(NimStringDesc*, getcurrentline_290039)(tbaselexer290016* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(159, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP4666));
	nimln(160, "lexbase.nim");
	i = (*l).Linestart;
	nimln(161, "lexbase.nim");
	while (1) {
		nimln(161, "lexbase.nim");
		nimln(730, "system.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(162, "lexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(163, "lexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(164, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4667));
	nimln(165, "lexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC6 = 0;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_290044(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP4668));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}	LA4: ;
	popFrame();
	return result;
}N_NOINLINE(void, purelexbaseInit)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

N_NOINLINE(void, purelexbaseDatInit)(void) {
static TNimNode* TMP4775[8];
static TNimNode TMP4634[9];
NTI290016.size = sizeof(tbaselexer290016);
NTI290016.kind = 17;
NTI290016.base = (&NTI1009);
NTI290016.flags = 2;
TMP4775[0] = &TMP4634[1];
TMP4634[1].kind = 1;
TMP4634[1].offset = offsetof(tbaselexer290016, Bufpos);
TMP4634[1].typ = (&NTI105);
TMP4634[1].name = "bufpos";
TMP4775[1] = &TMP4634[2];
TMP4634[2].kind = 1;
TMP4634[2].offset = offsetof(tbaselexer290016, Buf);
TMP4634[2].typ = (&NTI144);
TMP4634[2].name = "buf";
TMP4775[2] = &TMP4634[3];
TMP4634[3].kind = 1;
TMP4634[3].offset = offsetof(tbaselexer290016, Buflen);
TMP4634[3].typ = (&NTI105);
TMP4634[3].name = "bufLen";
TMP4775[3] = &TMP4634[4];
TMP4634[4].kind = 1;
TMP4634[4].offset = offsetof(tbaselexer290016, Input);
TMP4634[4].typ = (&NTI142627);
TMP4634[4].name = "input";
TMP4775[4] = &TMP4634[5];
TMP4634[5].kind = 1;
TMP4634[5].offset = offsetof(tbaselexer290016, Linenumber);
TMP4634[5].typ = (&NTI105);
TMP4634[5].name = "LineNumber";
TMP4775[5] = &TMP4634[6];
TMP4634[6].kind = 1;
TMP4634[6].offset = offsetof(tbaselexer290016, Sentinel);
TMP4634[6].typ = (&NTI105);
TMP4634[6].name = "sentinel";
TMP4775[6] = &TMP4634[7];
TMP4634[7].kind = 1;
TMP4634[7].offset = offsetof(tbaselexer290016, Linestart);
TMP4634[7].typ = (&NTI105);
TMP4634[7].name = "lineStart";
TMP4775[7] = &TMP4634[8];
TMP4634[8].kind = 1;
TMP4634[8].offset = offsetof(tbaselexer290016, Fileopened);
TMP4634[8].typ = (&NTI133);
TMP4634[8].name = "fileOpened";
TMP4634[0].len = 8; TMP4634[0].kind = 2; TMP4634[0].sons = &TMP4775[0];
NTI290016.node = &TMP4634[0];
}

