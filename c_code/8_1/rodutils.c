/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
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
typedef NIM_CHAR TY232031[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, hexchar_232089)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, encodevintaux_232275)(NI x, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, encodevbiggestintaux_232234)(NI64 x, NimStringDesc** result);
STRING_LITERAL(TMP1382, "", 0);
STRING_LITERAL(TMP1403, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP3493, "NAN", 3);
STRING_LITERAL(TMP3494, "0.0", 3);
STRING_LITERAL(TMP3495, "INF", 3);
STRING_LITERAL(TMP3496, "-INF", 4);

N_NIMCALL(NI, decodevint_232359)(NCSTRING s, NI* pos) {
	NI result;
	NI i_232366;
	NI sign_232368;
	result = 0;
	i_232366 = (*pos);
	sign_232368 = -1;
	{
		if (!((NU8)(s[i_232366]) == (NU8)(45))) goto LA3;
		i_232366 += 1;
		sign_232368 = 1;
	}
	LA3: ;
	result = 0;
	{
		while (1) {
			switch (((NU8)(s[i_232366]))) {
			case 48 ... 57:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) (((NU8)(s[i_232366])))) - 48))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_232366])))) - 97))) + 10))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_232366])))) - 65))) + 36))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_232366])))) - 128))) + 62))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_232366 += 1;
		}
	} LA5: ;
	result = (NI)((NU32)((NI32)(result * sign_232368)) - (NU32)(5));
	(*pos) = i_232366;
	return result;
}

N_NIMCALL(void, hexchar_232089)(NIM_CHAR c, NI* xi) {
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(((NI) (((NU8)(c)))) - 48))));
	}
	break;
	case 97 ... 102:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(c)))) - 97))) + 10))));
	}
	break;
	case 65 ... 70:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(c)))) - 65))) + 10))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, decodestr_232155)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = (*pos);
	result = copyString(((NimStringDesc*) &TMP1382));
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI xi;
				i += 3;
				xi = 0;
				hexchar_232089(s[(NI32)(i - 2)], &xi);
				hexchar_232089(s[(NI32)(i - 1)], &xi);
				result = addChar(result, ((NIM_CHAR) (((NI) (xi)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result = addChar(result, s[i]);
				i += 1;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*pos) = i;
	return result;
}

N_NIMCALL(void, encodevintaux_232275)(NI x, NimStringDesc** result) {
	NIM_CHAR d_232281;
	NI v_232283;
	NI rem_232285;
	NI idx_232287;
	d_232281 = 0;
	v_232283 = x;
	rem_232285 = (NI32)(v_232283 % 190);
	{
		if (!(((NI) (rem_232285)) < 0)) goto LA3;
		(*result) = addChar((*result), 45);
		v_232283 = ((NI32)-((NI32)(v_232283 / 190)));
		rem_232285 = ((NI32)-(((NI) (rem_232285))));
	}
	goto LA1;
	LA3: ;
	{
		v_232283 = (NI32)(v_232283 / 190);
	}
	LA1: ;
	idx_232287 = ((NI) (rem_232285));
	{
		if (!(idx_232287 < 62)) goto LA8;
		d_232281 = ((NimStringDesc*) &TMP1403)->data[idx_232287];
	}
	goto LA6;
	LA8: ;
	{
		d_232281 = ((NIM_CHAR) (((NI) ((NI32)((NI32)(idx_232287 - 62) + 128)))));
	}
	LA6: ;
	{
		if (!!((v_232283 == 0))) goto LA13;
		encodevintaux_232275(v_232283, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_232281);
}

N_NIMCALL(void, encodevint_232304)(NI x, NimStringDesc** result) {
	encodevintaux_232275((NI)((NU32)(x) + (NU32)(5)), result);
}

N_NIMCALL(NI64, decodevbiggestint_232518)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_232525;
	NI sign_232527;
	result = 0;
	i_232525 = (*pos);
	sign_232527 = -1;
	{
		if (!((NU8)(s[i_232525]) == (NU8)(45))) goto LA3;
		i_232525 += 1;
		sign_232527 = 1;
	}
	LA3: ;
	result = 0;
	{
		while (1) {
			switch (((NU8)(s[i_232525]))) {
			case 48 ... 57:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) (((NU8)(s[i_232525])))) - 48))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_232525])))) - 97))) + 10))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_232525])))) - 65))) + 36))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_232525])))) - 128))) + 62))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_232525 += 1;
		}
	} LA5: ;
	result = (NI64)((NU64)((NI64)(result * ((NI64) (sign_232527)))) - (NU64)(5));
	(*pos) = i_232525;
	return result;
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_232024)(NF f) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!((f == f))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP3493));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f == 0.0)) goto LA6;
		result = copyString(((NimStringDesc*) &TMP3494));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f == ((NF)(5.0000000000000000e-001) * (NF)(f)))) goto LA9;
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP3495));
		}
		goto LA11;
		LA13: ;
		{
			result = copyString(((NimStringDesc*) &TMP3496));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY232031 buf;
		memset((void*)buf, 0, sizeof(buf));
		sprintf(((NCSTRING) (buf)), "%#.16e", f);
		result = cstrToNimstr(((NCSTRING) (buf)));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, encodestr_232042)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i_232059;
		NI HEX3Atmp_232069;
		NI res_232072;
		i_232059 = 0;
		HEX3Atmp_232069 = 0;
		HEX3Atmp_232069 = (NI32)(s->Sup.len - 1);
		res_232072 = 0;
		{
			while (1) {
				if (!(res_232072 <= HEX3Atmp_232069)) goto LA3;
				i_232059 = res_232072;
				switch (((NU8)(s->data[i_232059]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result) = addChar((*result), s->data[i_232059]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = 0;
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_232059])))), 2);
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				res_232072 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_232234)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_232240;
	NI64 v_232242;
	NI64 rem_232244;
	NI idx_232246;
	d_232240 = 0;
	v_232242 = x;
	rem_232244 = (NI64)(v_232242 % 190);
	{
		if (!(((NI) (rem_232244)) < 0)) goto LA3;
		(*result) = addChar((*result), 45);
		v_232242 = -((NI64)(v_232242 / 190));
		rem_232244 = -(((NI64) (rem_232244)));
	}
	goto LA1;
	LA3: ;
	{
		v_232242 = (NI64)(v_232242 / 190);
	}
	LA1: ;
	idx_232246 = ((NI) (rem_232244));
	{
		if (!(idx_232246 < 62)) goto LA8;
		d_232240 = ((NimStringDesc*) &TMP1403)->data[idx_232246];
	}
	goto LA6;
	LA8: ;
	{
		d_232240 = ((NIM_CHAR) (((NI) ((NI32)((NI32)(idx_232246 - 62) + 128)))));
	}
	LA6: ;
	{
		if (!!((v_232242 == 0))) goto LA13;
		encodevbiggestintaux_232234(v_232242, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_232240);
}

N_NIMCALL(void, encodevbiggestint_232264)(NI64 x, NimStringDesc** result) {
	encodevbiggestintaux_232234((NI64)((NU64)(x) + (NU64)(5)), result);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_rodutilsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_rodutilsDatInit)(void) {
}

