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
typedef NIM_CHAR TY233031[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, hexchar_233089)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, encodevintaux_233275)(NI x, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, encodevbiggestintaux_233234)(NI64 x, NimStringDesc** result);
STRING_LITERAL(TMP1390, "", 0);
STRING_LITERAL(TMP1411, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP3495, "NAN", 3);
STRING_LITERAL(TMP3496, "0.0", 3);
STRING_LITERAL(TMP3497, "INF", 3);
STRING_LITERAL(TMP3498, "-INF", 4);

N_NIMCALL(NI, decodevint_233359)(NCSTRING s, NI* pos) {
	NI result;
	NI i_233366;
	NI sign_233368;
	result = 0;
	i_233366 = (*pos);
	sign_233368 = -1;
	{
		if (!((NU8)(s[i_233366]) == (NU8)(45))) goto LA3;
		i_233366 += 1;
		sign_233368 = 1;
	}
	LA3: ;
	result = 0;
	{
		while (1) {
			switch (((NU8)(s[i_233366]))) {
			case 48 ... 57:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) (((NU8)(s[i_233366])))) - 48))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_233366])))) - 97))) + 10))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_233366])))) - 65))) + 36))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI32)((NI32)(result * 190) - ((NI) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_233366])))) - 128))) + 62))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_233366 += 1;
		}
	} LA5: ;
	result = (NI)((NU32)((NI32)(result * sign_233368)) - (NU32)(5));
	(*pos) = i_233366;
	return result;
}

N_NIMCALL(void, hexchar_233089)(NIM_CHAR c, NI* xi) {
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

N_NIMCALL(NimStringDesc*, decodestr_233155)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = (*pos);
	result = copyString(((NimStringDesc*) &TMP1390));
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI xi;
				i += 3;
				xi = 0;
				hexchar_233089(s[(NI32)(i - 2)], &xi);
				hexchar_233089(s[(NI32)(i - 1)], &xi);
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

N_NIMCALL(void, encodevintaux_233275)(NI x, NimStringDesc** result) {
	NIM_CHAR d_233281;
	NI v_233283;
	NI rem_233285;
	NI idx_233287;
	d_233281 = 0;
	v_233283 = x;
	rem_233285 = (NI32)(v_233283 % 190);
	{
		if (!(((NI) (rem_233285)) < 0)) goto LA3;
		(*result) = addChar((*result), 45);
		v_233283 = ((NI32)-((NI32)(v_233283 / 190)));
		rem_233285 = ((NI32)-(((NI) (rem_233285))));
	}
	goto LA1;
	LA3: ;
	{
		v_233283 = (NI32)(v_233283 / 190);
	}
	LA1: ;
	idx_233287 = ((NI) (rem_233285));
	{
		if (!(idx_233287 < 62)) goto LA8;
		d_233281 = ((NimStringDesc*) &TMP1411)->data[idx_233287];
	}
	goto LA6;
	LA8: ;
	{
		d_233281 = ((NIM_CHAR) (((NI) ((NI32)((NI32)(idx_233287 - 62) + 128)))));
	}
	LA6: ;
	{
		if (!!((v_233283 == 0))) goto LA13;
		encodevintaux_233275(v_233283, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_233281);
}

N_NIMCALL(void, encodevint_233304)(NI x, NimStringDesc** result) {
	encodevintaux_233275((NI)((NU32)(x) + (NU32)(5)), result);
}

N_NIMCALL(NI64, decodevbiggestint_233518)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_233525;
	NI sign_233527;
	result = 0;
	i_233525 = (*pos);
	sign_233527 = -1;
	{
		if (!((NU8)(s[i_233525]) == (NU8)(45))) goto LA3;
		i_233525 += 1;
		sign_233527 = 1;
	}
	LA3: ;
	result = 0;
	{
		while (1) {
			switch (((NU8)(s[i_233525]))) {
			case 48 ... 57:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) (((NU8)(s[i_233525])))) - 48))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_233525])))) - 97))) + 10))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_233525])))) - 65))) + 36))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI64)((NI64)(result * 190) - ((NI64) ((NI32)(((NI) ((NI32)(((NI) (((NU8)(s[i_233525])))) - 128))) + 62))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_233525 += 1;
		}
	} LA5: ;
	result = (NI64)((NU64)((NI64)(result * ((NI64) (sign_233527)))) - (NU64)(5));
	(*pos) = i_233525;
	return result;
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_233024)(NF f) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!((f == f))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP3495));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f == 0.0)) goto LA6;
		result = copyString(((NimStringDesc*) &TMP3496));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f == ((NF)(5.0000000000000000e-001) * (NF)(f)))) goto LA9;
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP3497));
		}
		goto LA11;
		LA13: ;
		{
			result = copyString(((NimStringDesc*) &TMP3498));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY233031 buf;
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

N_NIMCALL(void, encodestr_233042)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i_233059;
		NI HEX3Atmp_233069;
		NI res_233072;
		i_233059 = 0;
		HEX3Atmp_233069 = 0;
		HEX3Atmp_233069 = (NI32)(s->Sup.len - 1);
		res_233072 = 0;
		{
			while (1) {
				if (!(res_233072 <= HEX3Atmp_233069)) goto LA3;
				i_233059 = res_233072;
				switch (((NU8)(s->data[i_233059]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result) = addChar((*result), s->data[i_233059]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = 0;
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_233059])))), 2);
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				res_233072 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_233234)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_233240;
	NI64 v_233242;
	NI64 rem_233244;
	NI idx_233246;
	d_233240 = 0;
	v_233242 = x;
	rem_233244 = (NI64)(v_233242 % 190);
	{
		if (!(((NI) (rem_233244)) < 0)) goto LA3;
		(*result) = addChar((*result), 45);
		v_233242 = -((NI64)(v_233242 / 190));
		rem_233244 = -(((NI64) (rem_233244)));
	}
	goto LA1;
	LA3: ;
	{
		v_233242 = (NI64)(v_233242 / 190);
	}
	LA1: ;
	idx_233246 = ((NI) (rem_233244));
	{
		if (!(idx_233246 < 62)) goto LA8;
		d_233240 = ((NimStringDesc*) &TMP1411)->data[idx_233246];
	}
	goto LA6;
	LA8: ;
	{
		d_233240 = ((NIM_CHAR) (((NI) ((NI32)((NI32)(idx_233246 - 62) + 128)))));
	}
	LA6: ;
	{
		if (!!((v_233242 == 0))) goto LA13;
		encodevbiggestintaux_233234(v_233242, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_233240);
}

N_NIMCALL(void, encodevbiggestint_233264)(NI64 x, NimStringDesc** result) {
	encodevbiggestintaux_233234((NI64)((NU64)(x) + (NU64)(5)), result);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_rodutilsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_rodutilsDatInit)(void) {
}

