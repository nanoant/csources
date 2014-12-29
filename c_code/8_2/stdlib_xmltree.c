/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, addescaped_386866)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP4625, "&lt;", 4);
STRING_LITERAL(TMP4626, "&gt;", 4);
STRING_LITERAL(TMP4627, "&amp;", 5);
STRING_LITERAL(TMP4628, "&quot;", 6);
STRING_LITERAL(TMP4629, "&#x27;", 6);
STRING_LITERAL(TMP4630, "&#x2F;", 6);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, addescaped_386866)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c_386871;
		NI i_386875;
		NI l_386877;
		c_386871 = 0;
		i_386875 = 0;
		l_386877 = s->Sup.len;
		{
			while (1) {
				if (!(i_386875 < l_386877)) goto LA3;
				c_386871 = s->data[i_386875];
				switch (((NU8)(c_386871))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4625));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4626));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TMP4627));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4628));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4629));
				}
				break;
				case 47:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4630));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c_386871);
				}
				break;
				}
				i_386875 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NimStringDesc*, escape_386893)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(s->Sup.len);
	addescaped_386866(&result, s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void) {
}

