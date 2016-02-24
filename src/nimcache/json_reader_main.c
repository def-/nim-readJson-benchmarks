/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/benjamin/utils/Nim/lib -o /home/benjamin/dev/nim/json-reader/src/nimcache/json_reader_main.o /home/benjamin/dev/nim/json-reader/src/nimcache/json_reader_main.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47905 Cell47905;
typedef struct TNimType TNimType;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Memregion30088 Memregion30088;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30082 Llchunk30082;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30086 Avlnode30086;
typedef struct Gcstat50214 Gcstat50214;
typedef struct TNimNode TNimNode;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
typedef Smallchunk30040* TY30103[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30088  {
NI minlargeobj;
NI maxlargeobj;
TY30103 freesmallchunks;
Llchunk30082* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30086* root;
Avlnode30086* deleted;
Avlnode30086* last;
Avlnode30086* freeavlnodes;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellset47917 cycleroots;
Cellseq47921 tempstack;
NI recgclock;
Memregion30088 region;
Gcstat50214 stat;
};
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
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30019[8];
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30082  {
NI size;
NI acc;
Llchunk30082* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30086* TY30093[2];
struct  Avlnode30086  {
TY30093 link;
NI key;
NI upperbound;
NI level;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
N_NIMCALL(NI, paramcount_168426)(void);
N_NIMCALL(NimStringDesc*, readfile_15466)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, paramstr_168407)(NI i);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47905*, usrtocell_51840)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_22201)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_53401)(Cell47905* c);
N_NOINLINE(void, addzct_51817)(Cellseq47921* s, Cell47905* c);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, mainInit000)(void);
NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void);
STRING_LITERAL(TMP900, "data loaded!", 12);
STRING_LITERAL(TMP901, "please pass JSON file to parse", 30);
NimStringDesc* data_172001;
extern TFrame* frameptr_19436;
extern Gcheap50218 gch_50259;

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

static N_INLINE(Cell47905*, usrtocell_51840)(void* usr) {
	Cell47905* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(131, "gc.nim");
	result = ((Cell47905*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47905))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_53401)(Cell47905* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(212, "gc.nim");
	addzct_51817((&gch_50259.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(264, "gc.nim");
	{
		Cell47905* c;
		nimln(349, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(265, "gc.nim");
		c = usrtocell_51840(src);
		nimln(182, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(267, "gc.nim");
	{
		Cell47905* c;
		nimln(349, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(268, "gc.nim");
		c = usrtocell_51840((*dest));
		nimln(269, "gc.nim");
		{
			nimln(180, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(181, "gc.nim");
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(270, "gc.nim");
			rtladdzct_53401(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(271, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_etcprivDatInit000();
	stdlib_hashesDatInit000();
	stdlib_streamsDatInit000();
	stdlib_lexbaseDatInit000();
	stdlib_unicodeDatInit000();
	stdlib_macrosDatInit000();
	stdlib_jsonDatInit000();
	stdlib_timesDatInit000();
	stdlib_posixDatInit000();
	stdlib_osDatInit000();
	mainDatInit000();
	stdlib_parseutilsInit000();
	stdlib_strutilsInit000();
	stdlib_etcprivInit000();
	stdlib_hashesInit000();
	stdlib_streamsInit000();
	stdlib_lexbaseInit000();
	stdlib_unicodeInit000();
	stdlib_macrosInit000();
	stdlib_jsonInit000();
	stdlib_timesInit000();
	stdlib_posixInit000();
	stdlib_osInit000();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	mainInit000();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, mainInit000)(void) {
	nimfr("main", "main.nim")
	nimln(3, "main.nim");
	{
		NI LOC3;
		NimStringDesc* LOC6;
		nimln(357, "system.nim");
		nimln(3, "main.nim");
		LOC3 = 0;
		LOC3 = paramcount_168426();
		if (!(((NI) 0) < LOC3)) goto LA4;
		nimln(4, "main.nim");
		LOC6 = 0;
		LOC6 = paramstr_168407(((NI) 1));
		asgnRefNoCycle((void**) (&data_172001), readfile_15466(LOC6));
		nimln(5, "main.nim");
		printf("%s\012", ((NimStringDesc*) &TMP900)? (((NimStringDesc*) &TMP900))->data:"nil");
		fflush(stdout);
	}
	goto LA1;
	LA4: ;
	{
		nimln(7, "main.nim");
		printf("%s\012", ((NimStringDesc*) &TMP901)? (((NimStringDesc*) &TMP901))->data:"nil");
		fflush(stdout);
	}
	LA1: ;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void) {
}
