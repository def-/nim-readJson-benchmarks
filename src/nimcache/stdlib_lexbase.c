/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/benjamin/utils/Nim/lib -o /home/benjamin/dev/nim/json-reader/src/nimcache/stdlib_lexbase.o /home/benjamin/dev/nim/json-reader/src/nimcache/stdlib_lexbase.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Baselexer108005 Baselexer108005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj106218 Streamobj106218;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY81010[32];
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Baselexer108005  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj106218* input;
NI linenumber;
NI sentinel;
NI linestart;
TY81010 refillchars;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY106219) (Streamobj106218* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY106223) (Streamobj106218* s);
typedef N_NIMCALL_PTR(void, TY106227) (Streamobj106218* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY106232) (Streamobj106218* s);
typedef N_NIMCALL_PTR(NI, TY106236) (Streamobj106218* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY106242) (Streamobj106218* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY106248) (Streamobj106218* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY106254) (Streamobj106218* s);
struct  Streamobj106218  {
  TNimObject Sup;
TY106219 closeimpl;
TY106223 atendimpl;
TY106227 setpositionimpl;
TY106232 getpositionimpl;
TY106236 readdataimpl;
TY106242 peekdataimpl;
TY106248 writedataimpl;
TY106254 flushimpl;
};
N_NIMCALL(void, close_108018)(Baselexer108005* L);
N_NOCONV(void, dealloc_7448)(void* p);
N_NIMCALL(void, close_106270)(Streamobj106218* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_22201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_108201)(Baselexer108005* L);
N_NIMCALL(void, failedassertimpl_89116)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, readdata_106311)(Streamobj106218* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_7433)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_109409)(Baselexer108005* L, NI pos);
N_NIMCALL(NI, handlecr_109601)(Baselexer108005* L, NI pos);
N_NIMCALL(NI, handlelf_109810)(Baselexer108005* L, NI pos);
N_NIMCALL(NI, handlerefillchar_110010)(Baselexer108005* L, NI pos);
N_NIMCALL(void, skiputf8bom_110201)(Baselexer108005* L);
N_NIMCALL(void, open_110223)(Baselexer108005* L, Streamobj106218* input, NI buflen, TY81010 refillchars);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_7401)(NI size);
N_NIMCALL(NI, getcolnumber_110802)(Baselexer108005* L, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_110807)(Baselexer108005* L, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY81010 Newlines_108002 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP198, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP201, "\012  0 <= toCopy ", 15);
STRING_LITERAL(TMP210, "s < L.bufLen ", 13);
STRING_LITERAL(TMP215, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP221, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP223, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP225, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP227, "contains(L.refillChars, L.buf[pos]) ", 36);
STRING_LITERAL(TMP230, "\012  0 < bufLen ", 14);
STRING_LITERAL(TMP231, "\012  not (input == nil) ", 22);
STRING_LITERAL(TMP235, "", 0);
STRING_LITERAL(TMP237, "\012", 1);
STRING_LITERAL(TMP238, "^\012", 2);
extern TFrame* frameptr_19436;
extern TNimType NTI3608; /* RootObj */
TNimType NTI108005; /* BaseLexer */
extern TNimType NTI104; /* int */
extern TNimType NTI140; /* cstring */
extern TNimType NTI106216; /* Stream */
extern TNimType NTI81010; /* set[char] */

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_19436 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_19436).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_19436;
	frameptr_19436 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_22201();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_19436 = (*frameptr_19436).prev;
}

N_NIMCALL(void, close_108018)(Baselexer108005* L) {
	nimfr("close", "lexbase.nim")
	nimln(50, "lexbase.nim");
	dealloc_7448(((void*) ((*L).buf)));
	nimln(51, "lexbase.nim");
	close_106270((*L).input);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == ((NI) -1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI)(a / b);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fillbuffer_108201)(Baselexer108005* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP199;
	NI TMP200;
	NI TMP204;
	NI TMP205;
	NI LOC13;
	NI TMP206;
	NI TMP207;
	nimfr("fillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(61, "lexbase.nim");
	{
		if (!!(((*L).sentinel < (*L).buflen))) goto LA3;
		failedassertimpl_89116(((NimStringDesc*) &TMP198));
	}
	LA3: ;
	nimln(62, "lexbase.nim");
	TMP199 = subInt((*L).buflen, (*L).sentinel);
	TMP200 = subInt((NI)(TMP199), ((NI) 1));
	tocopy = (NI)(TMP200);
	nimln(63, "lexbase.nim");
	{
		if (!!((((NI) 0) <= tocopy))) goto LA7;
		failedassertimpl_89116(((NimStringDesc*) &TMP201));
	}
	LA7: ;
	nimln(64, "lexbase.nim");
	{
		NI TMP202;
		NI TMP203;
		nimln(357, "system.nim");
		if (!(((NI) 0) < tocopy)) goto LA11;
		nimln(69, "lexbase.nim");
		TMP202 = addInt((*L).sentinel, ((NI) 1));
		TMP203 = mulInt(tocopy, ((NI) 1));
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)(TMP202)]))), ((NI)chckRange((NI)(TMP203), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA11: ;
	nimln(70, "lexbase.nim");
	nimln(71, "lexbase.nim");
	nimln(70, "lexbase.nim");
	nimln(71, "lexbase.nim");
	TMP204 = addInt((*L).sentinel, ((NI) 1));
	TMP205 = mulInt((NI)(TMP204), ((NI) 1));
	LOC13 = 0;
	LOC13 = readdata_106311((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)(TMP205));
	TMP206 = divInt(LOC13, ((NI) 1));
	charsread = (NI)(TMP206);
	nimln(72, "lexbase.nim");
	TMP207 = addInt(tocopy, charsread);
	s = (NI)(TMP207);
	nimln(73, "lexbase.nim");
	{
		NI TMP208;
		TMP208 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsread < (NI)(TMP208))) goto LA16;
		nimln(74, "lexbase.nim");
		(*L).buf[s] = 0;
		nimln(75, "lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		NI TMP209;
		nimln(78, "lexbase.nim");
		TMP209 = subInt(s, ((NI) 1));
		s = (NI)(TMP209);
		{
			nimln(79, "lexbase.nim");
			while (1) {
				nimln(80, "lexbase.nim");
				{
					if (!!((s < (*L).buflen))) goto LA23;
					failedassertimpl_89116(((NimStringDesc*) &TMP210));
				}
				LA23: ;
				{
					nimln(81, "lexbase.nim");
					while (1) {
						NIM_BOOL LOC27;
						NI TMP211;
						LOC27 = 0;
						nimln(353, "system.nim");
						LOC27 = (((NI) 0) <= s);
						if (!(LOC27)) goto LA28;
						nimln(1104, "system.nim");
						LOC27 = !((((*L).refillchars[(NU)(((NU8)((*L).buf[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf[s])))&7U)))!=0));
						LA28: ;
						if (!LOC27) goto LA26;
						nimln(81, "lexbase.nim");
						TMP211 = subInt(s, ((NI) 1));
						s = (NI)(TMP211);
					} LA26: ;
				}
				nimln(82, "lexbase.nim");
				{
					nimln(353, "system.nim");
					if (!(((NI) 0) <= s)) goto LA31;
					nimln(84, "lexbase.nim");
					(*L).sentinel = s;
					nimln(85, "lexbase.nim");
					goto LA19;
				}
				goto LA29;
				LA31: ;
				{
					NI TMP212;
					NI TMP213;
					void* LOC34;
					NI TMP216;
					NI LOC39;
					NI TMP217;
					NI TMP220;
					nimln(89, "lexbase.nim");
					oldbuflen = (*L).buflen;
					nimln(90, "lexbase.nim");
					TMP212 = mulInt((*L).buflen, ((NI) 2));
					(*L).buflen = (NI)(TMP212);
					nimln(94, "lexbase.nim");
					TMP213 = mulInt((*L).buflen, ((NI) 1));
					LOC34 = 0;
					LOC34 = realloc_7433(((void*) ((*L).buf)), ((NI)chckRange((NI)(TMP213), ((NI) 0), ((NI) IL64(9223372036854775807)))));
					(*L).buf = ((NCSTRING) (LOC34));
					nimln(95, "lexbase.nim");
					{
						NI TMP214;
						TMP214 = subInt((*L).buflen, oldbuflen);
						if (!!(((NI)(TMP214) == oldbuflen))) goto LA37;
						failedassertimpl_89116(((NimStringDesc*) &TMP215));
					}
					LA37: ;
					nimln(96, "lexbase.nim");
					nimln(97, "lexbase.nim");
					nimln(96, "lexbase.nim");
					nimln(97, "lexbase.nim");
					TMP216 = mulInt(oldbuflen, ((NI) 1));
					LOC39 = 0;
					LOC39 = readdata_106311((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(TMP216));
					TMP217 = divInt(LOC39, ((NI) 1));
					charsread = (NI)(TMP217);
					nimln(98, "lexbase.nim");
					{
						NI TMP218;
						NI TMP219;
						if (!(charsread < oldbuflen)) goto LA42;
						nimln(99, "lexbase.nim");
						TMP218 = addInt(oldbuflen, charsread);
						(*L).buf[(NI)(TMP218)] = 0;
						nimln(100, "lexbase.nim");
						TMP219 = addInt(oldbuflen, charsread);
						(*L).sentinel = (NI)(TMP219);
						nimln(101, "lexbase.nim");
						goto LA19;
					}
					LA42: ;
					nimln(102, "lexbase.nim");
					TMP220 = subInt((*L).buflen, ((NI) 1));
					s = (NI)(TMP220);
				}
				LA29: ;
			}
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_109409)(Baselexer108005* L, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(105, "lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3;
		failedassertimpl_89116(((NimStringDesc*) &TMP221));
	}
	LA3: ;
	nimln(106, "lexbase.nim");
	{
		NI TMP222;
		if (!(pos < (*L).sentinel)) goto LA7;
		nimln(107, "lexbase.nim");
		TMP222 = addInt(pos, ((NI) 1));
		result = (NI)(TMP222);
	}
	goto LA5;
	LA7: ;
	{
		nimln(109, "lexbase.nim");
		fillbuffer_108201(L);
		nimln(110, "lexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln(111, "lexbase.nim");
		result = ((NI) 0);
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_109601)(Baselexer108005* L, NI pos) {
	NI result;
	NI TMP224;
	nimfr("handleCR", "lexbase.nim")
	result = 0;
	nimln(117, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(13)))) goto LA3;
		failedassertimpl_89116(((NimStringDesc*) &TMP223));
	}
	LA3: ;
	nimln(118, "lexbase.nim");
	TMP224 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP224);
	nimln(119, "lexbase.nim");
	result = fillbaselexer_109409(L, pos);
	nimln(120, "lexbase.nim");
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA7;
		nimln(121, "lexbase.nim");
		result = fillbaselexer_109409(L, result);
	}
	LA7: ;
	nimln(122, "lexbase.nim");
	(*L).linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_109810)(Baselexer108005* L, NI pos) {
	NI result;
	NI TMP226;
	nimfr("handleLF", "lexbase.nim")
	result = 0;
	nimln(128, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(10)))) goto LA3;
		failedassertimpl_89116(((NimStringDesc*) &TMP225));
	}
	LA3: ;
	nimln(129, "lexbase.nim");
	TMP226 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP226);
	nimln(130, "lexbase.nim");
	result = fillbaselexer_109409(L, pos);
	nimln(131, "lexbase.nim");
	(*L).linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlerefillchar_110010)(Baselexer108005* L, NI pos) {
	NI result;
	nimfr("handleRefillChar", "lexbase.nim")
	result = 0;
	nimln(135, "lexbase.nim");
	{
		if (!!((((*L).refillchars[(NU)(((NU8)((*L).buf[pos])))>>3] &(1U<<((NU)(((NU8)((*L).buf[pos])))&7U)))!=0))) goto LA3;
		failedassertimpl_89116(((NimStringDesc*) &TMP227));
	}
	LA3: ;
	nimln(136, "lexbase.nim");
	result = fillbaselexer_109409(L, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_110201)(Baselexer108005* L) {
	nimfr("skipUtf8Bom", "lexbase.nim")
	nimln(139, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI TMP228;
		NI TMP229;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(140, "lexbase.nim");
		TMP228 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TMP228);
		nimln(141, "lexbase.nim");
		TMP229 = addInt((*L).linestart, ((NI) 3));
		(*L).linestart = (NI)(TMP229);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, open_110223)(Baselexer108005* L, Streamobj106218* input, NI buflen, TY81010 refillchars) {
	NI TMP232;
	void* LOC9;
	NI TMP233;
	nimfr("open", "lexbase.nim")
	nimln(146, "lexbase.nim");
	{
		if (!!((((NI) 0) < buflen))) goto LA3;
		failedassertimpl_89116(((NimStringDesc*) &TMP230));
	}
	LA3: ;
	nimln(147, "lexbase.nim");
	{
		if (!!(!((input == NIM_NIL)))) goto LA7;
		failedassertimpl_89116(((NimStringDesc*) &TMP231));
	}
	LA7: ;
	nimln(148, "lexbase.nim");
	unsureAsgnRef((void**) (&(*L).input), input);
	nimln(149, "lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln(150, "lexbase.nim");
	(*L).buflen = buflen;
	nimln(151, "lexbase.nim");
	memcpy((void*)(*L).refillchars, (NIM_CONST void*)refillchars, 32);
	nimln(155, "lexbase.nim");
	TMP232 = mulInt(buflen, ((NI) 1));
	LOC9 = 0;
	LOC9 = alloc_7401(((NI)chckRange((NI)(TMP232), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	(*L).buf = ((NCSTRING) (LOC9));
	nimln(156, "lexbase.nim");
	TMP233 = subInt(buflen, ((NI) 1));
	(*L).sentinel = (NI)(TMP233);
	nimln(157, "lexbase.nim");
	(*L).linestart = ((NI) 0);
	nimln(158, "lexbase.nim");
	(*L).linenumber = ((NI) 1);
	nimln(159, "lexbase.nim");
	fillbuffer_108201(L);
	nimln(160, "lexbase.nim");
	skiputf8bom_110201(L);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_110802)(Baselexer108005* L, NI pos) {
	NI result;
	NI TMP234;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(164, "lexbase.nim");
	TMP234 = subInt(pos, (*L).linestart);
	if ((NI)(TMP234) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = ((NI)(TMP234) > 0? ((NI)(TMP234)) : -((NI)(TMP234)));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_110807)(Baselexer108005* L, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(169, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP235));
	nimln(170, "lexbase.nim");
	i = (*L).linestart;
	{
		nimln(171, "lexbase.nim");
		while (1) {
			NI TMP236;
			nimln(1098, "system.nim");
			if (!!((((NU8)((*L).buf[i])) == ((NU8)(13)) || ((NU8)((*L).buf[i])) == ((NU8)(10)) || ((NU8)((*L).buf[i])) == ((NU8)(0))))) goto LA2;
			nimln(172, "lexbase.nim");
			result = addChar(result, (*L).buf[i]);
			nimln(173, "lexbase.nim");
			TMP236 = addInt(i, ((NI) 1));
			i = (NI)(TMP236);
		} LA2: ;
	}
	nimln(174, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP237));
	nimln(175, "lexbase.nim");
	{
		NimStringDesc* LOC7;
		NI LOC8;
		NimStringDesc* LOC9;
		if (!marker) goto LA5;
		nimln(176, "lexbase.nim");
		LOC7 = 0;
		nimln(654, "strutils.nim");
		nimln(176, "lexbase.nim");
		LOC8 = 0;
		LOC8 = getcolnumber_110802(L, (*L).bufpos);
		LOC9 = 0;
		LOC9 = nsuRepeatChar(32, ((NI)chckRange(LOC8, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		LOC7 = rawNewString(LOC9->Sup.len + 2);
appendString(LOC7, LOC9);
appendString(LOC7, ((NimStringDesc*) &TMP238));
		result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
	}
	LA5: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TMP445[8];
static TNimNode TMP172[9];
NTI108005.size = sizeof(Baselexer108005);
NTI108005.kind = 17;
NTI108005.base = (&NTI3608);
TMP445[0] = &TMP172[1];
TMP172[1].kind = 1;
TMP172[1].offset = offsetof(Baselexer108005, bufpos);
TMP172[1].typ = (&NTI104);
TMP172[1].name = "bufpos";
TMP445[1] = &TMP172[2];
TMP172[2].kind = 1;
TMP172[2].offset = offsetof(Baselexer108005, buf);
TMP172[2].typ = (&NTI140);
TMP172[2].name = "buf";
TMP445[2] = &TMP172[3];
TMP172[3].kind = 1;
TMP172[3].offset = offsetof(Baselexer108005, buflen);
TMP172[3].typ = (&NTI104);
TMP172[3].name = "bufLen";
TMP445[3] = &TMP172[4];
TMP172[4].kind = 1;
TMP172[4].offset = offsetof(Baselexer108005, input);
TMP172[4].typ = (&NTI106216);
TMP172[4].name = "input";
TMP445[4] = &TMP172[5];
TMP172[5].kind = 1;
TMP172[5].offset = offsetof(Baselexer108005, linenumber);
TMP172[5].typ = (&NTI104);
TMP172[5].name = "lineNumber";
TMP445[5] = &TMP172[6];
TMP172[6].kind = 1;
TMP172[6].offset = offsetof(Baselexer108005, sentinel);
TMP172[6].typ = (&NTI104);
TMP172[6].name = "sentinel";
TMP445[6] = &TMP172[7];
TMP172[7].kind = 1;
TMP172[7].offset = offsetof(Baselexer108005, linestart);
TMP172[7].typ = (&NTI104);
TMP172[7].name = "lineStart";
TMP445[7] = &TMP172[8];
TMP172[8].kind = 1;
TMP172[8].offset = offsetof(Baselexer108005, refillchars);
TMP172[8].typ = (&NTI81010);
TMP172[8].name = "refillChars";
TMP172[0].len = 8; TMP172[0].kind = 2; TMP172[0].sons = &TMP445[0];
NTI108005.node = &TMP172[0];
}

