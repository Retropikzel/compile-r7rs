/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file data-structures.c -emit-import-library chicken.sort -emit-import-library chicken.string
   unit: data-structures
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[83];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,107,41};
static C_char li1[] C_aligned={C_lihdr(0,0,23),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,32,105,41,0};
static C_char li2[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,41};
static C_char li3[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,108,105,115,116,45,62,115,116,114,105,110,103,32,108,41,0};
static C_char li4[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,45,62,115,116,114,105,110,103,32,120,41,0,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,16),40,109,97,112,45,108,111,111,112,56,52,32,103,57,54,41};
static C_char li6[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,99,111,110,99,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,105,115,116,97,114,116,41,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,37),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,32,116,101,115,116,32,108,111,99,41,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,11),40,97,49,49,51,50,32,105,32,108,41,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,11),40,97,49,49,52,49,32,105,32,108,41,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,32,115,50,41,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,32,115,50,41,0,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,18),40,97,100,100,32,102,114,111,109,32,116,111,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,8),40,115,99,97,110,32,106,41};
static C_char li23[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,105,32,108,97,115,116,32,102,114,111,109,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,41,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,50,32,115,115,50,32,110,50,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,49,32,115,115,32,110,41,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,32,46,32,114,101,115,116,41,0};
static C_char li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,10),40,102,95,49,55,50,53,32,99,41,0,0,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,12),40,105,110,115,116,114,105,110,103,32,115,41,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,105,32,106,41,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,10),40,102,95,49,57,49,49,32,99,41,0,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,32,102,114,111,109,32,46,32,116,111,41,0};
static C_char li34[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,115,32,112,111,115,41,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,109,97,112,41,0,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,25),40,99,111,108,108,101,99,116,32,105,32,102,114,111,109,32,116,111,116,97,108,32,102,115,41,0,0,0,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,32,115,109,97,112,41,0,0,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,116,111,116,97,108,32,112,111,115,41};
static C_char li39[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,32,108,101,110,41,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,32,46,32,114,101,115,116,41};
static C_char li41[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,48,53,32,105,41,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,97,115,116,32,110,101,120,116,41};
static C_char li43[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,101,100,63,32,115,101,113,32,108,101,115,115,63,41};
static C_char li44[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,32,97,32,121,32,98,41,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,32,97,32,98,32,108,101,115,115,63,41,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,114,32,97,32,98,41,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,33,32,97,32,98,32,108,101,115,115,63,41,0};
static C_char li48[] C_aligned={C_lihdr(0,0,8),40,115,116,101,112,32,110,41};
static C_char li49[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,53,55,54,32,112,32,105,41,0};
static C_char li50[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,33,32,115,101,113,32,108,101,115,115,63,41,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,32,115,101,113,32,108,101,115,115,63,41,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,101,100,103,101,115,32,115,116,97,116,101,41,0,0,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,33),40,118,105,115,105,116,32,100,97,103,32,110,111,100,101,32,101,100,103,101,115,32,112,97,116,104,32,115,116,97,116,101,41,0,0,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,18),40,103,54,49,56,32,114,101,115,117,108,116,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,97,103,32,115,116,97,116,101,41};
static C_char li56[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,108,54,50,48,32,103,54,50,49,32,103,54,49,57,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,111,114,116,35,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,32,112,114,101,100,41};
static C_char li58[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word *av) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1021)
static void C_ccall f_1021(C_word c,C_word *av) C_noret;
C_noret_decl(f_1023)
static void f_1023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word *av) C_noret;
C_noret_decl(f_1057)
static void f_1057(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1095)
static void f_1095(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word *av) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word *av) C_noret;
C_noret_decl(f_1142)
static void C_ccall f_1142(C_word c,C_word *av) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word *av) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word *av) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word *av) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word *av) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word *av) C_noret;
C_noret_decl(f_1250)
static void f_1250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word *av) C_noret;
C_noret_decl(f_1362)
static void f_1362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word *av) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word *av) C_noret;
C_noret_decl(f_1470)
static void f_1470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word *av) C_noret;
C_noret_decl(f_1490)
static void f_1490(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word *av) C_noret;
C_noret_decl(f_1520)
static void f_1520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word *av) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void f_1610(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1628)
static void f_1628(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word *av) C_noret;
C_noret_decl(f_1720)
static void f_1720(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static C_word f_1731(C_word t0,C_word t1);
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word *av) C_noret;
C_noret_decl(f_1776)
static void f_1776(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word *av) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word *av) C_noret;
C_noret_decl(f_1945)
static void f_1945(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word *av) C_noret;
C_noret_decl(f_1990)
static void f_1990(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2000)
static void f_2000(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2038)
static void f_2038(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2077)
static void f_2077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word *av) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word *av) C_noret;
C_noret_decl(f_2152)
static void f_2152(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word *av) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word *av) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word *av) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word *av) C_noret;
C_noret_decl(f_2263)
static void f_2263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word *av) C_noret;
C_noret_decl(f_2311)
static void f_2311(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word *av) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void f_2371(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word *av) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word *av) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void f_2435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word *av) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word *av) C_noret;
C_noret_decl(f_2559)
static void f_2559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2653)
static void f_2653(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word *av) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word *av) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void f_2714(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word *av) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void f_2786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word *av) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word *av) C_noret;
C_noret_decl(f_2851)
static void f_2851(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2889)
static void f_2889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void f_2927(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word *av) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word *av) C_noret;
C_noret_decl(f_889)
static void f_889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word *av) C_noret;
C_noret_decl(f_912)
static C_word f_912(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word *av) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1023)
static void C_ccall trf_1023(C_word c,C_word *av) C_noret;
static void C_ccall trf_1023(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1023(t0,t1,t2);}

C_noret_decl(trf_1057)
static void C_ccall trf_1057(C_word c,C_word *av) C_noret;
static void C_ccall trf_1057(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1057(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1095)
static void C_ccall trf_1095(C_word c,C_word *av) C_noret;
static void C_ccall trf_1095(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1095(t0,t1,t2);}

C_noret_decl(trf_1250)
static void C_ccall trf_1250(C_word c,C_word *av) C_noret;
static void C_ccall trf_1250(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1250(t0,t1);}

C_noret_decl(trf_1362)
static void C_ccall trf_1362(C_word c,C_word *av) C_noret;
static void C_ccall trf_1362(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1362(t0,t1);}

C_noret_decl(trf_1470)
static void C_ccall trf_1470(C_word c,C_word *av) C_noret;
static void C_ccall trf_1470(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1470(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1490)
static void C_ccall trf_1490(C_word c,C_word *av) C_noret;
static void C_ccall trf_1490(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1490(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1520)
static void C_ccall trf_1520(C_word c,C_word *av) C_noret;
static void C_ccall trf_1520(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1520(t0,t1,t2);}

C_noret_decl(trf_1610)
static void C_ccall trf_1610(C_word c,C_word *av) C_noret;
static void C_ccall trf_1610(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1610(t0,t1,t2,t3);}

C_noret_decl(trf_1628)
static void C_ccall trf_1628(C_word c,C_word *av) C_noret;
static void C_ccall trf_1628(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1628(t0,t1,t2,t3);}

C_noret_decl(trf_1720)
static void C_ccall trf_1720(C_word c,C_word *av) C_noret;
static void C_ccall trf_1720(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1720(t0,t1);}

C_noret_decl(trf_1776)
static void C_ccall trf_1776(C_word c,C_word *av) C_noret;
static void C_ccall trf_1776(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1776(t0,t1,t2,t3);}

C_noret_decl(trf_1945)
static void C_ccall trf_1945(C_word c,C_word *av) C_noret;
static void C_ccall trf_1945(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1945(t0,t1,t2,t3);}

C_noret_decl(trf_1990)
static void C_ccall trf_1990(C_word c,C_word *av) C_noret;
static void C_ccall trf_1990(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1990(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2000)
static void C_ccall trf_2000(C_word c,C_word *av) C_noret;
static void C_ccall trf_2000(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2000(t0,t1);}

C_noret_decl(trf_2038)
static void C_ccall trf_2038(C_word c,C_word *av) C_noret;
static void C_ccall trf_2038(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2038(t0,t1,t2);}

C_noret_decl(trf_2077)
static void C_ccall trf_2077(C_word c,C_word *av) C_noret;
static void C_ccall trf_2077(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2077(t0,t1);}

C_noret_decl(trf_2152)
static void C_ccall trf_2152(C_word c,C_word *av) C_noret;
static void C_ccall trf_2152(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2152(t0,t1,t2,t3);}

C_noret_decl(trf_2263)
static void C_ccall trf_2263(C_word c,C_word *av) C_noret;
static void C_ccall trf_2263(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2263(t0,t1,t2);}

C_noret_decl(trf_2311)
static void C_ccall trf_2311(C_word c,C_word *av) C_noret;
static void C_ccall trf_2311(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2311(t0,t1,t2,t3);}

C_noret_decl(trf_2371)
static void C_ccall trf_2371(C_word c,C_word *av) C_noret;
static void C_ccall trf_2371(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2371(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2435)
static void C_ccall trf_2435(C_word c,C_word *av) C_noret;
static void C_ccall trf_2435(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2435(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2559)
static void C_ccall trf_2559(C_word c,C_word *av) C_noret;
static void C_ccall trf_2559(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2559(t0,t1,t2);}

C_noret_decl(trf_2653)
static void C_ccall trf_2653(C_word c,C_word *av) C_noret;
static void C_ccall trf_2653(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2653(t0,t1,t2,t3);}

C_noret_decl(trf_2714)
static void C_ccall trf_2714(C_word c,C_word *av) C_noret;
static void C_ccall trf_2714(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2714(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2786)
static void C_ccall trf_2786(C_word c,C_word *av) C_noret;
static void C_ccall trf_2786(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2786(t0,t1,t2,t3);}

C_noret_decl(trf_2851)
static void C_ccall trf_2851(C_word c,C_word *av) C_noret;
static void C_ccall trf_2851(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2851(t0,t1,t2,t3);}

C_noret_decl(trf_2889)
static void C_ccall trf_2889(C_word c,C_word *av) C_noret;
static void C_ccall trf_2889(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2889(t0,t1,t2,t3);}

C_noret_decl(trf_2927)
static void C_ccall trf_2927(C_word c,C_word *av) C_noret;
static void C_ccall trf_2927(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2927(t0,t1,t2,t3);}

C_noret_decl(trf_889)
static void C_ccall trf_889(C_word c,C_word *av) C_noret;
static void C_ccall trf_889(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_889(t0,t1,t2,t3);}

/* k1000 in chicken.string#->string in k882 */
static void C_ccall f_1002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1002,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:77: scheme#display */
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1003 in k1000 in chicken.string#->string in k882 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1005,c,av);}
/* data-structures.scm:78: scheme#get-output-string */
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.string#conc in k882 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_1010,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+17);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[6]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1021,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1023,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li5),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_1023(t12,t8,t2);}

/* k1019 in chicken.string#conc in k882 */
static void C_ccall f_1021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1021,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[13]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop84 in chicken.string#conc in k882 */
static void f_1023(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1023,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:82: g90 */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1046 in map-loop84 in chicken.string#conc in k882 */
static void C_ccall f_1048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1048,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_1023(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* traverse in k882 */
static void f_1057(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1057,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_u_i_string_length(t3);
t10=C_u_i_string_length(t2);
t11=C_fixnum_difference(t9,t10);
t12=C_i_check_fixnum_2(t4,t6);
t13=C_fixnum_greater_or_equal_p(t4,C_fix(0));
t14=(C_truep(t13)?C_fixnum_greater_or_equal_p(t9,t4):C_SCHEME_FALSE);
if(C_truep(t14)){
t15=C_eqp(t10,C_fix(0));
if(C_truep(t15)){
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t11,C_fix(0)))){
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1095,a[2]=t11,a[3]=t17,a[4]=t5,a[5]=t10,a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_1095(t19,t1,t4);}
else{
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}}
else{
t15=C_fix((C_word)C_OUT_OF_BOUNDS_ERROR);
/* data-structures.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[6];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=t15;
av2[3]=t6;
av2[4]=t3;
av2[5]=t4;
tp(6,av2);}}}

/* loop in traverse in k882 */
static void f_1095(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1095,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1108,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:102: test */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k1106 in loop in traverse in k882 */
static void C_ccall f_1108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1108,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* data-structures.scm:103: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1095(t2,((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}

/* ##sys#substring-index in k882 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1127,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1133,a[2]=t2,a[3]=t3,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:111: traverse */
f_1057(t1,t2,t3,t4,t5,lf[16]);}

/* a1132 in ##sys#substring-index in k882 */
static void C_ccall f_1133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1133,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_substring_equal_p(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#substring-index-ci in k882 */
static void C_ccall f_1136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1136,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1142,a[2]=t2,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:118: traverse */
f_1057(t1,t2,t3,t4,t5,lf[18]);}

/* a1141 in ##sys#substring-index-ci in k882 */
static void C_ccall f_1142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1142,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_substring_ci_equal_p(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.string#substring-index in k882 */
static void C_ccall f_1145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1145,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* data-structures.scm:124: ##sys#substring-index */
t4=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* data-structures.scm:124: ##sys#substring-index */
t4=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.string#substring-index-ci in k882 */
static void C_ccall f_1160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1160,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* data-structures.scm:127: ##sys#substring-index-ci */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* data-structures.scm:127: ##sys#substring-index-ci */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.string#string-compare3 in k882 */
static void C_ccall f_1175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1175,c,av);}
t4=C_i_check_string_2(t2,lf[22]);
t5=C_i_check_string_2(t3,lf[22]);
t6=C_u_i_string_length(t2);
t7=C_u_i_string_length(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_utf_compare(t2,t3,C_fix(0),C_fix(0),t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* chicken.string#string-compare3-ci in k882 */
static void C_ccall f_1202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1202,c,av);}
t4=C_i_check_string_2(t2,lf[24]);
t5=C_i_check_string_2(t3,lf[24]);
t6=C_u_i_string_length(t2);
t7=C_u_i_string_length(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_utf_compare_ci(t2,t3,C_fix(0),C_fix(0),t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* ##sys#substring=? in k882 */
static void C_ccall f_1229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1229,c,av);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,lf[26]);
t8=C_i_check_string_2(t3,lf[26]);
t9=C_i_check_fixnum_2(t4,lf[26]);
t10=C_i_check_fixnum_2(t5,lf[26]);
t11=C_u_i_string_length(t2);
t12=C_u_i_string_length(t3);
t13=C_fixnum_difference(t11,t4);
t14=C_fixnum_difference(t12,t5);
t15=C_i_fixnum_min(t13,t14);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1250,a[2]=t11,a[3]=t4,a[4]=t12,a[5]=t5,a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t17=C_fixnum_plus(t15,C_fix(1));
t18=C_i_check_range_2(t6,C_fix(0),t17,lf[26]);
t19=t16;
f_1250(t19,t6);}
else{
t17=t16;
f_1250(t17,t15);}}

/* k1248 in ##sys#substring=? in k882 */
static void f_1250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_1250,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_check_range_2(((C_word*)t0)[3],C_fix(0),t2,lf[26]);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_i_check_range_2(((C_word*)t0)[5],C_fix(0),t4,lf[26]);
t6=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_substring_equal_p(((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.string#substring=? in k882 */
static void C_ccall f_1281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1281,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
if(C_truep(C_rest_nullp(c,6))){
/* data-structures.scm:177: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}
else{
/* data-structures.scm:177: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}}

/* ##sys#substring-ci=? in k882 */
static void C_ccall f_1341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1341,c,av);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,lf[29]);
t8=C_i_check_string_2(t3,lf[29]);
t9=C_i_check_fixnum_2(t4,lf[29]);
t10=C_i_check_fixnum_2(t5,lf[29]);
t11=C_u_i_string_length(t2);
t12=C_u_i_string_length(t3);
t13=C_fixnum_difference(t11,t4);
t14=C_fixnum_difference(t12,t5);
t15=C_i_fixnum_min(t13,t14);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1362,a[2]=t11,a[3]=t4,a[4]=t12,a[5]=t5,a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t17=C_fixnum_plus(t15,C_fix(1));
t18=C_i_check_range_2(t6,C_fix(0),t17,lf[29]);
t19=t16;
f_1362(t19,t6);}
else{
t17=t16;
f_1362(t17,t15);}}

/* k1360 in ##sys#substring-ci=? in k882 */
static void f_1362(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_1362,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_check_range_2(((C_word*)t0)[3],C_fix(0),t2,lf[26]);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_i_check_range_2(((C_word*)t0)[5],C_fix(0),t4,lf[26]);
t6=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_substring_ci_equal_p(((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.string#substring-ci=? in k882 */
static void C_ccall f_1393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1393,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
if(C_truep(C_rest_nullp(c,6))){
/* data-structures.scm:196: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}
else{
/* data-structures.scm:196: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}}

/* chicken.string#string-split in k882 */
static void C_ccall f_1453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +20,c,5)))){
C_save_and_reclaim((void*)f_1453,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+20);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
t4=C_i_check_string_2(t2,lf[32]);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?lf[33]:C_get_rest_arg(c,3,av,3,t0));
t7=C_eqp(C_fix(c - 3),C_fix(2));
t8=(C_truep(t7)?C_i_cadr(t3):C_SCHEME_FALSE);
t9=C_u_i_string_length(t2);
t10=C_i_check_string_2(t6,lf[32]);
t11=C_u_i_string_length(t6);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1470,a[2]=t13,a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1490,a[2]=t9,a[3]=t13,a[4]=t8,a[5]=t14,a[6]=t2,a[7]=t11,a[8]=t16,a[9]=t6,a[10]=((C_word)li23),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_1490(t18,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* add in chicken.string#string-split in k882 */
static void f_1470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1470,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:211: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k1483 in add in chicken.string#string-split in k882 */
static void C_ccall f_1485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1485,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in chicken.string#string-split in k882 */
static void f_1490(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1490,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:218: add */
t8=((C_word*)t0)[5];
f_1470(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?t8:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t5=C_i_string_ref(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1520,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_1520(t9,t1,C_fix(0));}}

/* k1498 in loop in chicken.string#string-split in k882 */
static void C_ccall f_1500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1500,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scan in loop in chicken.string#string-split in k882 */
static void f_1520(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1520,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* data-structures.scm:223: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1490(t3,t1,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_i_string_ref(((C_word*)t0)[7],t2);
t4=C_eqp(((C_word*)t0)[8],t3);
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t6=C_fixnum_greaterp(((C_word*)t0)[4],((C_word*)t0)[6]);
t7=(C_truep(t6)?t6:((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1559,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:227: add */
t9=((C_word*)t0)[10];
f_1470(t9,t8,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* data-structures.scm:228: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1490(t8,t1,t5,((C_word*)t0)[5],t5);}}
else{
/* data-structures.scm:229: scan */
t10=t1;
t11=C_fixnum_plus(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}}}

/* k1557 in scan in loop in chicken.string#string-split in k882 */
static void C_ccall f_1559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1559,c,av);}
/* data-structures.scm:227: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1490(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* chicken.string#string-intersperse in k882 */
static void C_ccall f_1589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1589,c,av);}
a=C_alloc(9);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[36]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_list_2(t2,lf[37]);
t6=C_i_check_string_2(t4,lf[37]);
t7=C_slot(t4,C_fix(0));
t8=C_block_size(t7);
t9=C_fixnum_difference(t8,C_fix(1));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1610,a[2]=t2,a[3]=t9,a[4]=t7,a[5]=t11,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1610(t13,t1,t2,C_fix(0));}

/* loop1 in chicken.string#string-intersperse in k882 */
static void f_1610(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1610,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[38];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_fixnum_difference(t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:244: ##sys#allocate-bytevector */
t6=*((C_word*)lf[39]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fixnum_plus(t4,C_fix(1));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[37]);
t7=C_slot(t2,C_fix(1));
t8=C_slot(t5,C_fix(0));
t9=C_block_size(t8);
t10=C_fixnum_difference(t9,C_fix(1));
t11=C_fixnum_plus(((C_word*)t0)[3],t3);
/* data-structures.scm:264: loop1 */
t13=t1;
t14=t7;
t15=C_fixnum_plus(t10,t11);
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
/* data-structures.scm:267: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word av2[3];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k1621 in loop1 in chicken.string#string-intersperse in k882 */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1623,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1628,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1628(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0));}

/* loop2 in k1621 in loop1 in chicken.string#string-intersperse in k882 */
static void f_1628(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1628,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=C_slot(t4,C_fix(0));
t7=C_block_size(t6);
t8=C_fixnum_difference(t7,C_fix(1));
t9=C_copy_memory_with_offset(((C_word*)t0)[2],t6,t3,C_fix(0),t8);
t10=C_fixnum_plus(t3,t8);
if(C_truep(C_eqp(t5,C_SCHEME_END_OF_LIST))){
t11=C_utf_range_length(((C_word*)t0)[2],C_fix(0),t10);
t12=C_a_ustring(&a,2,((C_word*)t0)[2],t11);
t13=t1;{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_copy_memory_with_offset(((C_word*)t0)[2],((C_word*)t0)[3],t10,C_fix(0),((C_word*)t0)[4]);
/* data-structures.scm:260: loop2 */
t14=t1;
t15=t5;
t16=C_fixnum_plus(t10,((C_word*)t0)[4]);
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* chicken.string#string-translate in k882 */
static void C_ccall f_1717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_1717,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1720,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1758,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1911,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
f_1758(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#list->string */
t8=C_fast_retrieve(lf[46]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=C_i_check_string_2(t3,lf[42]);
/* data-structures.scm:286: instring */
f_1720(t6,t3);}}}

/* instring in chicken.string#string-translate in k882 */
static void f_1720(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1720,2,t1,t2);}
a=C_alloc(5);
t3=C_i_string_length(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1725,a[2]=t3,a[3]=t2,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_1725 in instring in chicken.string#string-translate in k882 */
static void C_ccall f_1725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1725,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1731(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop */
static C_word f_1731(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_string_ref(((C_word*)t0)[3],t1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
return(t1);}
else{
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}}

/* k1756 in chicken.string#string-translate in k882 */
static void C_ccall f_1758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1758,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1761,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t3))){
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_1761(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
/* ##sys#list->string */
t4=C_fast_retrieve(lf[46]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_check_string_2(t3,lf[42]);
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
f_1761(2,av2);}}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1761(2,av2);}}}

/* k1759 in k1756 in chicken.string#string-translate in k882 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1761,c,av);}
a=C_alloc(8);
t2=C_i_stringp(t1);
t3=(C_truep(t2)?C_u_i_string_length(t1):C_SCHEME_FALSE);
t4=C_i_check_string_2(((C_word*)t0)[2],lf[42]);
t5=C_u_i_string_length(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1771,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1769 in k1759 in k1756 in chicken.string#string-translate in k882 */
static void C_ccall f_1771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1771,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1776,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1776(t5,((C_word*)t0)[7],C_fix(0),C_fix(0));}

/* loop in k1769 in k1759 in k1756 in chicken.string#string-translate in k882 */
static void f_1776(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1776,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:302: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_string_ref(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:305: from */
t6=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1796 in loop in k1769 in k1759 in k1756 in chicken.string#string-translate in k882 */
static void C_ccall f_1798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1798,c,av);}
if(C_truep(C_i_not(t1))){
t2=C_i_string_set(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:308: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1776(t3,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
if(C_truep(C_i_not(((C_word*)t0)[8]))){
/* data-structures.scm:309: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1776(t2,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),((C_word*)t0)[3]);}
else{
if(C_truep(C_charp(((C_word*)t0)[8]))){
t2=C_i_string_set(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[8]);
/* data-structures.scm:312: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1776(t3,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[9]))){
/* data-structures.scm:314: ##sys#error */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=lf[42];
av2[3]=lf[44];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_i_string_ref(((C_word*)t0)[8],t1);
t3=C_i_string_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
/* data-structures.scm:317: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1776(t4,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}}}}

/* f_1911 in chicken.string#string-translate in k882 */
static void C_ccall f_1911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1911,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1926 in chicken.string#string-translate in k882 */
static void C_ccall f_1928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1928,c,av);}
/* data-structures.scm:283: instring */
f_1720(((C_word*)t0)[3],t1);}

/* k1938 in k2005 in k1998 in collect in chicken.string#string-translate* in k882 */
static void C_ccall f_1940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1940,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1945,a[2]=t1,a[3]=t3,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1945(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop in k1938 in k2005 in k1998 in collect in chicken.string#string-translate* in k882 */
static void f_1945(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1945,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=C_utf_length(((C_word*)t0)[2]);
t5=C_a_ustring(&a,2,((C_word*)t0)[2],t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_block_size(t4);
t6=C_fixnum_difference(t5,C_fix(1));
t7=C_copy_memory_with_offset(((C_word*)t0)[2],t4,t3,C_fix(0),t6);
/* data-structures.scm:328: loop */
t9=t1;
t10=C_slot(t2,C_fix(1));
t11=C_fixnum_plus(t3,t6);
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* chicken.string#string-translate* in k882 */
static void C_ccall f_1980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_1980,c,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[48]);
t5=C_i_check_list_2(t3,lf[48]);
t6=C_u_i_string_length(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1990,a[2]=t6,a[3]=t2,a[4]=t8,a[5]=t3,a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:362: collect */
t10=((C_word*)t8)[1];
f_1990(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in chicken.string#string-translate* in k882 */
static void f_1990(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_1990,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(17);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2000,a[2]=t6,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2033,a[2]=t7,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:338: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t9=t8;
f_2000(t9,C_SCHEME_UNDEFINED);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2038,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t7,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t9,a[10]=((C_word)li35),tmp=(C_word)a,a+=11,tmp));
t11=((C_word*)t9)[1];
f_2038(t11,t1,((C_word*)t0)[5]);}}

/* k1998 in collect in chicken.string#string-translate* in k882 */
static void f_2000(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2000,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:341: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word av2[3];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}

/* k2005 in k1998 in collect in chicken.string#string-translate* in k882 */
static void C_ccall f_2007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2007,c,av);}
a=C_alloc(4);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:320: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=C_fixnum_plus(t2,C_fix(1));
tp(3,av2);}}

/* k2031 in collect in chicken.string#string-translate* in k882 */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2033,c,av);}
a=C_alloc(3);
t2=C_slot(t1,C_fix(0));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_block_size(t2);
t6=C_fixnum_difference(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],t6);
t8=C_set_block_item(((C_word*)t0)[3],0,t7);
t9=((C_word*)t0)[4];
f_2000(t9,t8);}

/* loop in collect in chicken.string#string-translate* in k882 */
static void f_2038(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,5)))){
C_save_and_reclaim_args((void *)trf_2038,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
/* data-structures.scm:344: collect */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1990(t3,t1,C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
t7=C_fixnum_plus(((C_word*)t0)[3],t5);
t8=C_fixnum_less_or_equal_p(t7,((C_word*)t0)[7]);
t9=(C_truep(t8)?C_u_i_substring_equal_p(((C_word*)t0)[8],t4,((C_word*)t0)[3],C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_fixnum_plus(((C_word*)t0)[3],t5);
t11=C_slot(t6,C_fix(0));
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2077,a[2]=t11,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[4]))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:354: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t13=t12;
f_2077(t13,C_SCHEME_UNDEFINED);}}
else{
/* data-structures.scm:361: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t1=t15;
t2=t16;
goto loop;}}}

/* k2075 in loop in collect in chicken.string#string-translate* in k882 */
static void f_2077(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_2077,2,t0,t1);}
a=C_alloc(3);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_fixnum_difference(t2,C_fix(1));
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:357: collect */
t6=((C_word*)((C_word*)t0)[5])[1];
f_1990(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t4,t5);}

/* k2120 in loop in collect in chicken.string#string-translate* in k882 */
static void C_ccall f_2122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2122,c,av);}
a=C_alloc(3);
t2=C_slot(t1,C_fix(0));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_block_size(t2);
t6=C_fixnum_difference(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],t6);
t8=C_set_block_item(((C_word*)t0)[3],0,t7);
t9=((C_word*)t0)[4];
f_2077(t9,t8);}

/* chicken.string#string-chop in k882 */
static void C_ccall f_2139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2139,c,av);}
a=C_alloc(8);
t4=C_i_check_string_2(t2,lf[52]);
t5=C_i_check_fixnum_2(t3,lf[52]);
t6=C_u_i_string_length(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2152,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2152(t10,t1,t6,C_fix(0));}

/* loop in chicken.string#string-chop in k882 */
static void f_2152(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_2152,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2172,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:373: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=C_fixnum_plus(t3,t2);
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2183,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:374: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=C_fixnum_plus(t3,((C_word*)t0)[2]);
tp(5,av2);}}}}

/* k2170 in loop in chicken.string#string-chop in k882 */
static void C_ccall f_2172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2172,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2181 in loop in chicken.string#string-chop in k882 */
static void C_ccall f_2183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2183,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:374: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2152(t3,t2,C_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[5]),C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]));}

/* k2185 in k2181 in loop in chicken.string#string-chop in k882 */
static void C_ccall f_2187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2187,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#string-chomp in k882 */
static void C_ccall f_2201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2201,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[54]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[55]);
t6=C_i_check_string_2(t4,lf[55]);
t7=C_u_i_string_length(t2);
t8=C_u_i_string_length(t4);
t9=C_fixnum_difference(t7,t8);
if(C_truep(C_fixnum_greater_or_equal_p(t7,t8))){
if(C_truep(C_u_i_substring_equal_p(t2,t4,t9,C_fix(0),t8))){
/* data-structures.scm:387: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t9;
tp(5,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* chicken.sort#sorted? in k882 */
static void C_ccall f_2236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2236,c,av);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
if(C_truep(C_fixnum_less_or_equal_p(t4,C_fix(1)))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2263,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2263(t8,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2311,a[2]=t7,a[3]=t3,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2311(t9,t1,t4,t5);}}}

/* doloop505 in chicken.sort#sorted? in k882 */
static void f_2263(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2263,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_nequalp(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2273,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
f_2273(2,av2);}}
else{
t5=C_i_vector_ref(((C_word*)t0)[4],t2);
t6=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
/* data-structures.scm:426: less? */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_i_vector_ref(((C_word*)t0)[4],t6);
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k2271 in doloop505 in chicken.sort#sorted? in k882 */
static void C_ccall f_2273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_2273,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_2263(t3,((C_word*)t0)[2],t2);}}

/* loop in chicken.sort#sorted? in k882 */
static void f_2311(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2311,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:432: less? */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k2333 in loop in chicken.sort#sorted? in k882 */
static void C_ccall f_2335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2335,c,av);}
if(C_truep(C_i_not(t1))){
/* data-structures.scm:433: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2311(t2,((C_word*)t0)[3],C_u_i_car(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.sort#merge in k882 */
static void C_ccall f_2341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_2341,c,av);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2371,a[2]=t10,a[3]=t4,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2371(t12,t1,t5,t6,t7,t8);}}}

/* loop in chicken.sort#merge in k882 */
static void f_2371(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2371,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2378,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:449: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}

/* k2376 in loop in chicken.sort#merge in k882 */
static void C_ccall f_2378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2378,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2398,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:452: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2371(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_i_car(((C_word*)t0)[2]),C_u_i_cdr(((C_word*)t0)[2]));}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:456: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2371(t3,t2,C_i_car(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* k2396 in k2376 in loop in chicken.sort#merge in k882 */
static void C_ccall f_2398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2398,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2422 in k2376 in loop in chicken.sort#merge in k882 */
static void C_ccall f_2424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2424,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#merge! in k882 */
static void C_ccall f_2432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2432,c,av);}
a=C_alloc(13);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2435,a[2]=t6,a[3]=t4,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2510,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:481: less? */
t9=t4;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t3);
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}}}

/* loop in chicken.sort#merge! in k882 */
static void f_2435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2435,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2442,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:466: less? */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t4);
av2[3]=C_i_car(t3);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}

/* k2440 in loop in chicken.sort#merge! in k882 */
static void C_ccall f_2442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2442,c,av);}
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])))){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* data-structures.scm:471: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2435(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[5])))){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* data-structures.scm:477: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2435(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[3]);}}}

/* k2508 in chicken.sort#merge! in k882 */
static void C_ccall f_2510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2510,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])))){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:484: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2435(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[3]));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[4])))){
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[3]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:489: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2435(t3,t2,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[3]);}}}

/* k2511 in k2508 in chicken.sort#merge! in k882 */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2513,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2529 in k2508 in chicken.sort#merge! in k882 */
static void C_ccall f_2531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2531,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#sort! in k882 */
static void C_ccall f_2556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2556,c,av);}
a=C_alloc(17);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2559,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2644,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:528: scheme#vector->list */
t11=*((C_word*)lf[61]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
/* data-structures.scm:534: step */
t8=((C_word*)t6)[1];
f_2559(t8,t1,C_i_length(((C_word*)t4)[1]));}}

/* step in chicken.sort#sort! in k882 */
static void f_2559(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_2559,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2572,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:504: step */
t10=t4;
t11=t3;
t1=t10;
t2=t11;
goto loop;}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[4])[1];
t6=C_i_cddr(((C_word*)((C_word*)t0)[4])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2610,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:513: less? */
t9=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k2570 in step in chicken.sort#sort! in k882 */
static void C_ccall f_2572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_2572,c,av);}
a=C_alloc(34);
t2=C_s_a_i_minus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:506: step */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2559(t4,t3,t2);}

/* k2576 in k2570 in step in chicken.sort#sort! in k882 */
static void C_ccall f_2578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2578,c,av);}
/* data-structures.scm:507: merge! */
t2=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2608 in step in chicken.sort#sort! in k882 */
static void C_ccall f_2610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2610,c,av);}
if(C_truep(t1)){
t2=C_i_set_car(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_set_car(C_u_i_cdr(((C_word*)t0)[2]),((C_word*)t0)[4]);
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_set_cdr(t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2642 in chicken.sort#sort! in k882 */
static void C_ccall f_2644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2644,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:529: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2559(t4,t3,((C_word*)t0)[6]);}

/* k2649 in k2642 in chicken.sort#sort! in k882 */
static void C_ccall f_2651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2651,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2653(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* doloop576 in k2649 in k2642 in chicken.sort#sort! in k882 */
static void f_2653(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2653,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=C_u_i_cdr(t2);
t7=C_a_i_fixnum_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* chicken.sort#sort in k882 */
static void C_ccall f_2684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2684,c,av);}
a=C_alloc(7);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2698,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2702,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:545: scheme#vector->list */
t6=*((C_word*)lf[61]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2709,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:546: scheme#append */
t5=*((C_word*)lf[64]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2696 in chicken.sort#sort in k882 */
static void C_ccall f_2698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2698,c,av);}
/* data-structures.scm:545: scheme#list->vector */
t2=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2700 in chicken.sort#sort in k882 */
static void C_ccall f_2702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2702,c,av);}
/* data-structures.scm:545: sort! */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2707 in chicken.sort#sort in k882 */
static void C_ccall f_2709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2709,c,av);}
/* data-structures.scm:546: sort! */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.sort#topological-sort in k882 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,7)))){
C_save_and_reclaim((void *)f_2711,c,av);}
a=C_alloc(26);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=t3,a[3]=t5,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2851,a[2]=t3,a[3]=t2,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[82]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2880,a[2]=t7,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2927,a[2]=t13,a[3]=t9,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2927(t15,t11,t2,C_SCHEME_END_OF_LIST);}

/* visit in chicken.sort#topological-sort in k882 */
static void f_2714(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2714,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2718,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:556: chicken.base#alist-ref */
t8=*((C_word*)lf[81]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=C_i_car(t6);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k2716 in visit in chicken.sort#topological-sort in k882 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2718,c,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[66]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,lf[67],lf[68]);
t4=C_a_i_cons(&a,2,lf[67],lf[69]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:563: scheme#reverse */
t6=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[79]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[9];
f_2780(2,av2);}}
else{
/* data-structures.scm:569: chicken.base#alist-ref */
t5=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}}

/* k2753 in k2765 in k2716 in visit in chicken.sort#topological-sort in k882 */
static void C_ccall f_2755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_2755,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,lf[67],lf[71]);
t3=C_a_i_list(&a,8,((C_word*)t0)[2],lf[72],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,lf[73]);
t4=C_a_i_record3(&a,3,lf[74],lf[75],t3);
/* data-structures.scm:558: chicken.condition#abort */
t5=C_fast_retrieve(lf[76]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2765 in k2716 in visit in chicken.sort#topological-sort in k882 */
static void C_ccall f_2767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2767,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_cons(&a,2,lf[67],lf[70]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:564: chicken.base#get-call-chain */
t6=C_fast_retrieve(lf[77]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2778 in k2716 in visit in chicken.sort#topological-sort in k882 */
static void C_ccall f_2780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_2780,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[66]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2786(t10,((C_word*)t0)[8],t1,t6);}

/* walk in k2778 in k2716 in visit in chicken.sort#topological-sort in k882 */
static void f_2786(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_2786,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2800,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:573: chicken.base#alist-update! */
t5=C_fast_retrieve(lf[80]);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[79];
av2[4]=C_i_car(t3);
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* data-structures.scm:577: visit */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2714(t8,t6,((C_word*)t0)[7],t4,C_SCHEME_FALSE,t7,t3);}}

/* k2798 in walk in k2778 in k2716 in visit in chicken.sort#topological-sort in k882 */
static void C_ccall f_2800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2800,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2820 in walk in k2778 in k2716 in visit in chicken.sort#topological-sort in k882 */
static void C_ccall f_2822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2822,c,av);}
/* data-structures.scm:576: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2786(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* g618 in chicken.sort#topological-sort in k882 */
static void f_2851(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2851,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2863,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2869,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:586: chicken.base#alist-ref */
t8=*((C_word*)lf[81]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_u_i_car(t3);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k2861 in g618 in chicken.sort#topological-sort in k882 */
static void C_ccall f_2863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2863,c,av);}
/* data-structures.scm:584: chicken.base#alist-update! */
t2=C_fast_retrieve(lf[80]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2867 in g618 in chicken.sort#topological-sort in k882 */
static void C_ccall f_2869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2869,c,av);}
if(C_truep(t1)){
/* data-structures.scm:585: scheme#append */
t2=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* data-structures.scm:585: scheme#append */
t2=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2878 in chicken.sort#topological-sort in k882 */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2880,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2889,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2889(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t3);}

/* loop in k2878 in chicken.sort#topological-sort in k882 */
static void f_2889(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_2889,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2910,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_caar(t2);
t7=C_u_i_car(t2);
/* data-structures.scm:596: visit */
t8=((C_word*)((C_word*)t0)[3])[1];
f_2714(t8,t5,t2,t6,C_u_i_cdr(t7),C_SCHEME_END_OF_LIST,t3);}}

/* k2908 in loop in k2878 in chicken.sort#topological-sort in k882 */
static void C_ccall f_2910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2910,c,av);}
/* data-structures.scm:595: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2889(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* foldl620 in chicken.sort#topological-sort in k882 */
static void f_2927(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2927,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:583: g618 */
t6=((C_word*)t0)[3];
f_2851(t6,t5,t3,C_slot(t2,C_fix(0)));}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2943 in foldl620 in chicken.sort#topological-sort in k882 */
static void C_ccall f_2945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2945,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k882 */
static void C_ccall f_884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(91,c,7)))){
C_save_and_reclaim((void *)f_884,c,av);}
a=C_alloc(91);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.string#reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_886,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.string#reverse-list->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_959,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! chicken.string#->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_965,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.string#conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1010,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1057,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t7=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1127,a[2]=t6,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1136,a[2]=t6,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! chicken.string#substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1145,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[20]+1 /* (set! chicken.string#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1160,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[21]+1 /* (set! chicken.string#string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[23]+1 /* (set! chicken.string#string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1202,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1229,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[27]+1 /* (set! chicken.string#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1281,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1341,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[30]+1 /* (set! chicken.string#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1393,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[31]+1 /* (set! chicken.string#string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1453,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[35]+1 /* (set! chicken.string#string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1589,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! chicken.string#string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[47]+1 /* (set! chicken.string#string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1980,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[51]+1 /* (set! chicken.string#string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2139,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[53]+1 /* (set! chicken.string#string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2201,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t23=C_a_i_provide(&a,1,lf[56]);
t24=C_mutate((C_word*)lf[57]+1 /* (set! chicken.sort#sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2236,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[58]+1 /* (set! chicken.sort#merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2341,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[59]+1 /* (set! chicken.sort#merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2432,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[60]+1 /* (set! chicken.sort#sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2556,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[62]+1 /* (set! chicken.sort#sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[65]+1 /* (set! chicken.sort#topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* chicken.string#reverse-string-append in k882 */
static void C_ccall f_886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_886,c,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_889,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:62: rev-string-append */
t6=((C_word*)t4)[1];
f_889(t6,t1,t2,C_fix(0));}

/* rev-string-append in chicken.string#reverse-string-append in k882 */
static void f_889(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_889,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_903,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:54: rev-string-append */
t8=t6;
t9=C_u_i_cdr(t2);
t10=C_fixnum_plus(t3,t5);
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* data-structures.scm:61: scheme#make-string */
t4=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k901 in rev-string-append in chicken.string#reverse-string-append in k882 */
static void C_ccall f_903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_903,c,av);}
a=C_alloc(6);
t2=C_i_string_length(t1);
t3=C_fixnum_difference(t2,((C_word*)t0)[2]);
t4=C_fixnum_difference(t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_912,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_912(t5,C_fix(0),t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k901 in rev-string-append in chicken.string#reverse-string-append in k882 */
static C_word f_912(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t6=C_fixnum_plus(t1,C_fix(1));
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
return(((C_word*)t0)[4]);}}

/* chicken.string#reverse-list->string in k882 */
static void C_ccall f_959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_959,c,av);}
/* data-structures.scm:65: ##sys#reverse-list->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* chicken.string#->string in k882 */
static void C_ccall f_965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_965,c,av);}
a=C_alloc(8);
if(C_truep(C_i_stringp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:72: scheme#symbol->string */
t3=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_charp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:74: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1002,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:76: scheme#open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("data-structures"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_data_2dstructures_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(562))){
C_save(t1);
C_rereclaim2(562*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,83);
lf[0]=C_h_intern(&lf[0],15, C_text("data-structures"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.string#"));
lf[2]=C_h_intern(&lf[2],36, C_text("chicken.string#reverse-string-append"));
lf[3]=C_h_intern(&lf[3],18, C_text("scheme#make-string"));
lf[4]=C_h_intern(&lf[4],35, C_text("chicken.string#reverse-list->string"));
lf[5]=C_h_intern(&lf[5],26, C_text("##sys#reverse-list->string"));
lf[6]=C_h_intern(&lf[6],23, C_text("chicken.string#->string"));
lf[7]=C_h_intern(&lf[7],21, C_text("scheme#symbol->string"));
lf[8]=C_h_intern(&lf[8],20, C_text("##sys#number->string"));
lf[9]=C_h_intern(&lf[9],24, C_text("scheme#get-output-string"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_h_intern(&lf[11],25, C_text("scheme#open-output-string"));
lf[12]=C_h_intern(&lf[12],19, C_text("chicken.string#conc"));
lf[13]=C_h_intern(&lf[13],20, C_text("scheme#string-append"));
lf[14]=C_h_intern(&lf[14],16, C_text("##sys#error-hook"));
lf[15]=C_h_intern(&lf[15],21, C_text("##sys#substring-index"));
lf[16]=C_h_intern(&lf[16],15, C_text("substring-index"));
lf[17]=C_h_intern(&lf[17],24, C_text("##sys#substring-index-ci"));
lf[18]=C_h_intern(&lf[18],18, C_text("substring-index-ci"));
lf[19]=C_h_intern(&lf[19],30, C_text("chicken.string#substring-index"));
lf[20]=C_h_intern(&lf[20],33, C_text("chicken.string#substring-index-ci"));
lf[21]=C_h_intern(&lf[21],30, C_text("chicken.string#string-compare3"));
lf[22]=C_h_intern(&lf[22],15, C_text("string-compare3"));
lf[23]=C_h_intern(&lf[23],33, C_text("chicken.string#string-compare3-ci"));
lf[24]=C_h_intern(&lf[24],18, C_text("string-compare3-ci"));
lf[25]=C_h_intern(&lf[25],17, C_text("##sys#substring=?"));
lf[26]=C_h_intern(&lf[26],11, C_text("substring=?"));
lf[27]=C_h_intern(&lf[27],26, C_text("chicken.string#substring=?"));
lf[28]=C_h_intern(&lf[28],20, C_text("##sys#substring-ci=?"));
lf[29]=C_h_intern(&lf[29],14, C_text("substring-ci=?"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.string#substring-ci=?"));
lf[31]=C_h_intern(&lf[31],27, C_text("chicken.string#string-split"));
lf[32]=C_h_intern(&lf[32],12, C_text("string-split"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\011\012\040\000"));
lf[34]=C_h_intern(&lf[34],15, C_text("##sys#substring"));
lf[35]=C_h_intern(&lf[35],33, C_text("chicken.string#string-intersperse"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[37]=C_h_intern(&lf[37],18, C_text("string-intersperse"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[39]=C_h_intern(&lf[39],25, C_text("##sys#allocate-bytevector"));
lf[40]=C_h_intern(&lf[40],29, C_text("##sys#error-not-a-proper-list"));
lf[41]=C_h_intern(&lf[41],31, C_text("chicken.string#string-translate"));
lf[42]=C_h_intern(&lf[42],16, C_text("string-translate"));
lf[43]=C_h_intern(&lf[43],11, C_text("##sys#error"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\156\166\141\154\151\144\040\164\162\141\156\163\154\141\164\151\157\156\040\144\145\163\164\151\156\141\164\151\157\156\000"));
lf[45]=C_h_intern(&lf[45],17, C_text("##sys#make-string"));
lf[46]=C_h_intern(&lf[46],18, C_text("##sys#list->string"));
lf[47]=C_h_intern(&lf[47],32, C_text("chicken.string#string-translate*"));
lf[48]=C_h_intern(&lf[48],17, C_text("string-translate*"));
lf[49]=C_h_intern(&lf[49],21, C_text("##sys#make-bytevector"));
lf[50]=C_h_intern(&lf[50],18, C_text("##sys#fast-reverse"));
lf[51]=C_h_intern(&lf[51],26, C_text("chicken.string#string-chop"));
lf[52]=C_h_intern(&lf[52],11, C_text("string-chop"));
lf[53]=C_h_intern(&lf[53],27, C_text("chicken.string#string-chomp"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\012\000"));
lf[55]=C_h_intern(&lf[55],12, C_text("string-chomp"));
lf[56]=C_h_intern(&lf[56],13, C_text("chicken.sort#"));
lf[57]=C_h_intern(&lf[57],20, C_text("chicken.sort#sorted?"));
lf[58]=C_h_intern(&lf[58],18, C_text("chicken.sort#merge"));
lf[59]=C_h_intern(&lf[59],19, C_text("chicken.sort#merge!"));
lf[60]=C_h_intern(&lf[60],18, C_text("chicken.sort#sort!"));
lf[61]=C_h_intern(&lf[61],19, C_text("scheme#vector->list"));
lf[62]=C_h_intern(&lf[62],17, C_text("chicken.sort#sort"));
lf[63]=C_h_intern(&lf[63],19, C_text("scheme#list->vector"));
lf[64]=C_h_intern(&lf[64],13, C_text("scheme#append"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.sort#topological-sort"));
lf[66]=C_h_intern(&lf[66],4, C_text("grey"));
lf[67]=C_h_intern(&lf[67],3, C_text("exn"));
lf[68]=C_h_intern(&lf[68],7, C_text("message"));
lf[69]=C_h_intern(&lf[69],9, C_text("arguments"));
lf[70]=C_h_intern(&lf[70],10, C_text("call-chain"));
lf[71]=C_h_intern(&lf[71],8, C_text("location"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\143\171\143\154\145\040\144\145\164\145\143\164\145\144\000"));
lf[73]=C_h_intern(&lf[73],16, C_text("topological-sort"));
lf[74]=C_h_intern(&lf[74],9, C_text("condition"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\145\170\156\376\003\000\000\002\376\001\000\000\007\001\162\165\156\164\151\155\145\376\003\000\000\002\376\001\000\000\005\001\143\171\143\154\145\376\377\016"));
lf[76]=C_h_intern(&lf[76],23, C_text("chicken.condition#abort"));
lf[77]=C_h_intern(&lf[77],27, C_text("chicken.base#get-call-chain"));
lf[78]=C_h_intern(&lf[78],14, C_text("scheme#reverse"));
lf[79]=C_h_intern(&lf[79],5, C_text("black"));
lf[80]=C_h_intern(&lf[80],26, C_text("chicken.base#alist-update!"));
lf[81]=C_h_intern(&lf[81],22, C_text("chicken.base#alist-ref"));
lf[82]=C_h_intern(&lf[82],5, C_text("foldl"));
C_register_lf2(lf,83,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_884,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[115] = {
{C_text("f_1002:data_2dstructures_2escm"),(void*)f_1002},
{C_text("f_1005:data_2dstructures_2escm"),(void*)f_1005},
{C_text("f_1010:data_2dstructures_2escm"),(void*)f_1010},
{C_text("f_1021:data_2dstructures_2escm"),(void*)f_1021},
{C_text("f_1023:data_2dstructures_2escm"),(void*)f_1023},
{C_text("f_1048:data_2dstructures_2escm"),(void*)f_1048},
{C_text("f_1057:data_2dstructures_2escm"),(void*)f_1057},
{C_text("f_1095:data_2dstructures_2escm"),(void*)f_1095},
{C_text("f_1108:data_2dstructures_2escm"),(void*)f_1108},
{C_text("f_1127:data_2dstructures_2escm"),(void*)f_1127},
{C_text("f_1133:data_2dstructures_2escm"),(void*)f_1133},
{C_text("f_1136:data_2dstructures_2escm"),(void*)f_1136},
{C_text("f_1142:data_2dstructures_2escm"),(void*)f_1142},
{C_text("f_1145:data_2dstructures_2escm"),(void*)f_1145},
{C_text("f_1160:data_2dstructures_2escm"),(void*)f_1160},
{C_text("f_1175:data_2dstructures_2escm"),(void*)f_1175},
{C_text("f_1202:data_2dstructures_2escm"),(void*)f_1202},
{C_text("f_1229:data_2dstructures_2escm"),(void*)f_1229},
{C_text("f_1250:data_2dstructures_2escm"),(void*)f_1250},
{C_text("f_1281:data_2dstructures_2escm"),(void*)f_1281},
{C_text("f_1341:data_2dstructures_2escm"),(void*)f_1341},
{C_text("f_1362:data_2dstructures_2escm"),(void*)f_1362},
{C_text("f_1393:data_2dstructures_2escm"),(void*)f_1393},
{C_text("f_1453:data_2dstructures_2escm"),(void*)f_1453},
{C_text("f_1470:data_2dstructures_2escm"),(void*)f_1470},
{C_text("f_1485:data_2dstructures_2escm"),(void*)f_1485},
{C_text("f_1490:data_2dstructures_2escm"),(void*)f_1490},
{C_text("f_1500:data_2dstructures_2escm"),(void*)f_1500},
{C_text("f_1520:data_2dstructures_2escm"),(void*)f_1520},
{C_text("f_1559:data_2dstructures_2escm"),(void*)f_1559},
{C_text("f_1589:data_2dstructures_2escm"),(void*)f_1589},
{C_text("f_1610:data_2dstructures_2escm"),(void*)f_1610},
{C_text("f_1623:data_2dstructures_2escm"),(void*)f_1623},
{C_text("f_1628:data_2dstructures_2escm"),(void*)f_1628},
{C_text("f_1717:data_2dstructures_2escm"),(void*)f_1717},
{C_text("f_1720:data_2dstructures_2escm"),(void*)f_1720},
{C_text("f_1725:data_2dstructures_2escm"),(void*)f_1725},
{C_text("f_1731:data_2dstructures_2escm"),(void*)f_1731},
{C_text("f_1758:data_2dstructures_2escm"),(void*)f_1758},
{C_text("f_1761:data_2dstructures_2escm"),(void*)f_1761},
{C_text("f_1771:data_2dstructures_2escm"),(void*)f_1771},
{C_text("f_1776:data_2dstructures_2escm"),(void*)f_1776},
{C_text("f_1798:data_2dstructures_2escm"),(void*)f_1798},
{C_text("f_1911:data_2dstructures_2escm"),(void*)f_1911},
{C_text("f_1928:data_2dstructures_2escm"),(void*)f_1928},
{C_text("f_1940:data_2dstructures_2escm"),(void*)f_1940},
{C_text("f_1945:data_2dstructures_2escm"),(void*)f_1945},
{C_text("f_1980:data_2dstructures_2escm"),(void*)f_1980},
{C_text("f_1990:data_2dstructures_2escm"),(void*)f_1990},
{C_text("f_2000:data_2dstructures_2escm"),(void*)f_2000},
{C_text("f_2007:data_2dstructures_2escm"),(void*)f_2007},
{C_text("f_2033:data_2dstructures_2escm"),(void*)f_2033},
{C_text("f_2038:data_2dstructures_2escm"),(void*)f_2038},
{C_text("f_2077:data_2dstructures_2escm"),(void*)f_2077},
{C_text("f_2122:data_2dstructures_2escm"),(void*)f_2122},
{C_text("f_2139:data_2dstructures_2escm"),(void*)f_2139},
{C_text("f_2152:data_2dstructures_2escm"),(void*)f_2152},
{C_text("f_2172:data_2dstructures_2escm"),(void*)f_2172},
{C_text("f_2183:data_2dstructures_2escm"),(void*)f_2183},
{C_text("f_2187:data_2dstructures_2escm"),(void*)f_2187},
{C_text("f_2201:data_2dstructures_2escm"),(void*)f_2201},
{C_text("f_2236:data_2dstructures_2escm"),(void*)f_2236},
{C_text("f_2263:data_2dstructures_2escm"),(void*)f_2263},
{C_text("f_2273:data_2dstructures_2escm"),(void*)f_2273},
{C_text("f_2311:data_2dstructures_2escm"),(void*)f_2311},
{C_text("f_2335:data_2dstructures_2escm"),(void*)f_2335},
{C_text("f_2341:data_2dstructures_2escm"),(void*)f_2341},
{C_text("f_2371:data_2dstructures_2escm"),(void*)f_2371},
{C_text("f_2378:data_2dstructures_2escm"),(void*)f_2378},
{C_text("f_2398:data_2dstructures_2escm"),(void*)f_2398},
{C_text("f_2424:data_2dstructures_2escm"),(void*)f_2424},
{C_text("f_2432:data_2dstructures_2escm"),(void*)f_2432},
{C_text("f_2435:data_2dstructures_2escm"),(void*)f_2435},
{C_text("f_2442:data_2dstructures_2escm"),(void*)f_2442},
{C_text("f_2510:data_2dstructures_2escm"),(void*)f_2510},
{C_text("f_2513:data_2dstructures_2escm"),(void*)f_2513},
{C_text("f_2531:data_2dstructures_2escm"),(void*)f_2531},
{C_text("f_2556:data_2dstructures_2escm"),(void*)f_2556},
{C_text("f_2559:data_2dstructures_2escm"),(void*)f_2559},
{C_text("f_2572:data_2dstructures_2escm"),(void*)f_2572},
{C_text("f_2578:data_2dstructures_2escm"),(void*)f_2578},
{C_text("f_2610:data_2dstructures_2escm"),(void*)f_2610},
{C_text("f_2644:data_2dstructures_2escm"),(void*)f_2644},
{C_text("f_2651:data_2dstructures_2escm"),(void*)f_2651},
{C_text("f_2653:data_2dstructures_2escm"),(void*)f_2653},
{C_text("f_2684:data_2dstructures_2escm"),(void*)f_2684},
{C_text("f_2698:data_2dstructures_2escm"),(void*)f_2698},
{C_text("f_2702:data_2dstructures_2escm"),(void*)f_2702},
{C_text("f_2709:data_2dstructures_2escm"),(void*)f_2709},
{C_text("f_2711:data_2dstructures_2escm"),(void*)f_2711},
{C_text("f_2714:data_2dstructures_2escm"),(void*)f_2714},
{C_text("f_2718:data_2dstructures_2escm"),(void*)f_2718},
{C_text("f_2755:data_2dstructures_2escm"),(void*)f_2755},
{C_text("f_2767:data_2dstructures_2escm"),(void*)f_2767},
{C_text("f_2780:data_2dstructures_2escm"),(void*)f_2780},
{C_text("f_2786:data_2dstructures_2escm"),(void*)f_2786},
{C_text("f_2800:data_2dstructures_2escm"),(void*)f_2800},
{C_text("f_2822:data_2dstructures_2escm"),(void*)f_2822},
{C_text("f_2851:data_2dstructures_2escm"),(void*)f_2851},
{C_text("f_2863:data_2dstructures_2escm"),(void*)f_2863},
{C_text("f_2869:data_2dstructures_2escm"),(void*)f_2869},
{C_text("f_2880:data_2dstructures_2escm"),(void*)f_2880},
{C_text("f_2889:data_2dstructures_2escm"),(void*)f_2889},
{C_text("f_2910:data_2dstructures_2escm"),(void*)f_2910},
{C_text("f_2927:data_2dstructures_2escm"),(void*)f_2927},
{C_text("f_2945:data_2dstructures_2escm"),(void*)f_2945},
{C_text("f_884:data_2dstructures_2escm"),(void*)f_884},
{C_text("f_886:data_2dstructures_2escm"),(void*)f_886},
{C_text("f_889:data_2dstructures_2escm"),(void*)f_889},
{C_text("f_903:data_2dstructures_2escm"),(void*)f_903},
{C_text("f_912:data_2dstructures_2escm"),(void*)f_912},
{C_text("f_959:data_2dstructures_2escm"),(void*)f_959},
{C_text("f_965:data_2dstructures_2escm"),(void*)f_965},
{C_text("toplevel:data_2dstructures_2escm"),(void*)C_data_2dstructures_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|hiding unexported module binding: chicken.string#fragments->string 
S|applied compiler syntax:
S|  chicken.base#foldl		1
S|  scheme#map		1
o|eliminated procedure checks: 27 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#cdar (pair pair *))
o|  2 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#+ fixnum fixnum)
o|  4 (scheme#set-cdr! pair *)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#<= fixnum fixnum)
o|  1 (scheme#vector-length vector)
o|  1 (scheme#make-string fixnum)
o|  1 (scheme#length list)
o|  18 (scheme#string-length string)
o|  1 (##sys#check-list (or pair list) *)
o|  23 (scheme#cdr pair)
o|  4 (scheme#car pair)
(o e)|safe calls: 352 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.sort#topological-sort chicken.sort#sort chicken.sort#sort! chicken.sort#merge! chicken.sort#merge chicken.sort#sorted? chicken.string#string-chomp chicken.string#string-chop chicken.string#string-translate* chicken.string#fragments->string chicken.string#string-translate chicken.string#string-intersperse chicken.string#string-split chicken.string#substring-ci=? ##sys#substring-ci=? chicken.string#substring=? ##sys#substring=? chicken.string#string-compare3-ci chicken.string#string-compare3 chicken.string#substring-index-ci chicken.string#substring-index ##sys#substring-index-ci ##sys#substring-index chicken.string#conc chicken.string#->string chicken.string#reverse-list->string chicken.string#reverse-string-append) 
o|inlining procedure: k891 
o|inlining procedure: k914 
o|inlining procedure: k914 
o|inlining procedure: k891 
o|inlining procedure: k967 
o|inlining procedure: k967 
o|inlining procedure: k982 
o|inlining procedure: k982 
o|inlining procedure: k1025 
o|inlining procedure: k1025 
o|inlining procedure: k1073 
o|inlining procedure: k1085 
o|inlining procedure: k1097 
o|inlining procedure: k1097 
o|inlining procedure: k1085 
o|inlining procedure: k1073 
o|inlining procedure: k1192 
o|inlining procedure: k1192 
o|inlining procedure: k1219 
o|inlining procedure: k1219 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|inlining procedure: k1492 
o|inlining procedure: k1492 
o|inlining procedure: k1522 
o|inlining procedure: k1522 
o|inlining procedure: k1544 
o|inlining procedure: k1544 
o|inlining procedure: k1612 
o|inlining procedure: k1645 
o|inlining procedure: k1645 
o|inlining procedure: k1612 
o|inlining procedure: k1733 
o|inlining procedure: k1733 
o|inlining procedure: k1778 
o|inlining procedure: k1778 
o|inlining procedure: k1819 
o|inlining procedure: k1819 
o|inlining procedure: k1852 
o|inlining procedure: k1852 
o|inlining procedure: k1890 
o|inlining procedure: k1890 
o|inlining procedure: k1916 
o|inlining procedure: k1916 
o|inlining procedure: k1992 
o|contracted procedure: "(data-structures.scm:341) chicken.string#fragments->string" 
o|inlining procedure: k1947 
o|inlining procedure: k1947 
o|inlining procedure: k1992 
o|inlining procedure: k2040 
o|inlining procedure: k2040 
o|inlining procedure: k2154 
o|inlining procedure: k2154 
o|inlining procedure: k2217 
o|inlining procedure: k2217 
o|inlining procedure: k2238 
o|inlining procedure: k2238 
o|inlining procedure: k2253 
o|inlining procedure: k2253 
o|inlining procedure: k2265 
o|inlining procedure: k2265 
o|substituted constant variable: a2297 
o|substituted constant variable: a2299 
o|inlining procedure: k2316 
o|inlining procedure: k2316 
o|inlining procedure: k2343 
o|inlining procedure: k2343 
o|inlining procedure: k2373 
o|inlining procedure: k2373 
o|inlining procedure: k2437 
o|inlining procedure: k2437 
o|inlining procedure: k2493 
o|inlining procedure: k2493 
o|inlining procedure: k2505 
o|inlining procedure: k2505 
o|inlining procedure: k2561 
o|inlining procedure: k2561 
o|inlining procedure: k2619 
o|inlining procedure: k2619 
o|inlining procedure: k2632 
o|inlining procedure: k2655 
o|inlining procedure: k2655 
o|substituted constant variable: a2671 
o|inlining procedure: k2632 
o|inlining procedure: k2686 
o|inlining procedure: k2686 
o|inlining procedure: k2719 
o|inlining procedure: k2719 
o|inlining procedure: k2788 
o|inlining procedure: k2788 
o|substituted constant variable: a2843 
o|substituted constant variable: a2845 
o|inlining procedure: k2870 
o|inlining procedure: k2870 
o|inlining procedure: k2891 
o|inlining procedure: k2891 
o|inlining procedure: k2929 
o|inlining procedure: k2929 
o|substituted constant variable: g619622 
o|replaced variables: 560 
o|removed binding forms: 129 
o|substituted constant variable: r10982962 
o|substituted constant variable: r10862964 
o|converted assignments to bindings: (add268) 
o|substituted constant variable: r17342984 
o|converted assignments to bindings: (instring349) 
o|substituted constant variable: r21553002 
o|substituted constant variable: r22393006 
o|substituted constant variable: r22543008 
o|substituted constant variable: r26203027 
o|substituted constant variable: r28713040 
o|substituted constant variable: r28713040 
o|converted assignments to bindings: (traverse108) 
o|simplifications: ((let . 3)) 
o|replaced variables: 20 
o|removed binding forms: 467 
o|inlining procedure: k1147 
o|inlining procedure: k1162 
o|inlining procedure: k1298 
o|inlining procedure: k1410 
o|inlining procedure: k1498 
o|removed binding forms: 30 
o|substituted constant variable: r11483143 
o|substituted constant variable: r11633144 
o|inlining procedure: k2220 
o|inlining procedure: k2220 
o|removed binding forms: 3 
o|substituted constant variable: r22213216 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((let . 17) (if . 26) (##core#call . 323)) 
o|  call simplifications:
o|    scheme#caar
o|    ##sys#cons	4
o|    ##sys#list
o|    ##sys#make-structure
o|    scheme#length
o|    scheme#vector-length
o|    scheme#vector-set!
o|    scheme#>
o|    scheme#cddr
o|    scheme#set-car!	2
o|    scheme#quotient
o|    scheme#-
o|    scheme#set-cdr!	4
o|    scheme#vector?	3
o|    scheme#vector-ref	2
o|    scheme#+
o|    scheme#=	4
o|    scheme#list	4
o|    chicken.fixnum#fx<=	4
o|    scheme#list->string	2
o|    scheme#not	3
o|    ##sys#check-list	3
o|    ##sys#size	8
o|    scheme#cadr	2
o|    scheme#eq?	5
o|    scheme#cdr	10
o|    chicken.fixnum#fxmin	2
o|    ##sys#check-range	6
o|    scheme#null?	34
o|    scheme#car	29
o|    ##sys#check-string	21
o|    ##sys#check-fixnum	6
o|    chicken.fixnum#fx=	4
o|    chicken.fixnum#fx>=	10
o|    chicken.fixnum#fx>	5
o|    scheme#cons	21
o|    ##sys#setslot	6
o|    ##sys#slot	18
o|    scheme#apply
o|    scheme#string?	2
o|    scheme#symbol?
o|    scheme#char?	4
o|    scheme#number?
o|    scheme#string
o|    scheme#pair?	6
o|    scheme#string-length	4
o|    chicken.fixnum#fx-	19
o|    chicken.fixnum#fx<	4
o|    scheme#string-ref	6
o|    scheme#string-set!	4
o|    chicken.fixnum#fx+	37
o|contracted procedure: k894 
o|contracted procedure: k898 
o|contracted procedure: k943 
o|contracted procedure: k939 
o|contracted procedure: k908 
o|contracted procedure: k917 
o|contracted procedure: k935 
o|contracted procedure: k920 
o|contracted procedure: k927 
o|contracted procedure: k931 
o|contracted procedure: k949 
o|contracted procedure: k970 
o|contracted procedure: k976 
o|contracted procedure: k985 
o|contracted procedure: k994 
o|contracted procedure: k1016 
o|contracted procedure: k1028 
o|contracted procedure: k1031 
o|contracted procedure: k1034 
o|contracted procedure: k1042 
o|contracted procedure: k1050 
o|contracted procedure: k1059 
o|contracted procedure: k1062 
o|contracted procedure: k1067 
o|contracted procedure: k1070 
o|contracted procedure: k1120 
o|contracted procedure: k1076 
o|contracted procedure: k1082 
o|contracted procedure: k1088 
o|contracted procedure: k1100 
o|contracted procedure: k1113 
o|contracted procedure: k1153 
o|contracted procedure: k1147 
o|contracted procedure: k1168 
o|contracted procedure: k1162 
o|contracted procedure: k1177 
o|contracted procedure: k1180 
o|contracted procedure: k1185 
o|contracted procedure: k1198 
o|contracted procedure: k1189 
o|contracted procedure: k1195 
o|contracted procedure: k1204 
o|contracted procedure: k1207 
o|contracted procedure: k1212 
o|contracted procedure: k1225 
o|contracted procedure: k1216 
o|contracted procedure: k1222 
o|contracted procedure: k1231 
o|contracted procedure: k1234 
o|contracted procedure: k1237 
o|contracted procedure: k1240 
o|contracted procedure: k1273 
o|contracted procedure: k1277 
o|contracted procedure: k1245 
o|contracted procedure: k1262 
o|contracted procedure: k1251 
o|contracted procedure: k1258 
o|contracted procedure: k1254 
o|contracted procedure: k1269 
o|contracted procedure: k1265 
o|contracted procedure: k1334 
o|contracted procedure: k1283 
o|contracted procedure: k1328 
o|contracted procedure: k1286 
o|contracted procedure: k1322 
o|contracted procedure: k1289 
o|contracted procedure: k1316 
o|contracted procedure: k1292 
o|contracted procedure: k1310 
o|contracted procedure: k1295 
o|contracted procedure: k1304 
o|contracted procedure: k1298 
o|contracted procedure: k1343 
o|contracted procedure: k1346 
o|contracted procedure: k1349 
o|contracted procedure: k1352 
o|contracted procedure: k1385 
o|contracted procedure: k1389 
o|contracted procedure: k1357 
o|contracted procedure: k1374 
o|contracted procedure: k1363 
o|contracted procedure: k1370 
o|contracted procedure: k1366 
o|contracted procedure: k1381 
o|contracted procedure: k1377 
o|contracted procedure: k1446 
o|contracted procedure: k1395 
o|contracted procedure: k1440 
o|contracted procedure: k1398 
o|contracted procedure: k1434 
o|contracted procedure: k1401 
o|contracted procedure: k1428 
o|contracted procedure: k1404 
o|contracted procedure: k1422 
o|contracted procedure: k1407 
o|contracted procedure: k1416 
o|contracted procedure: k1410 
o|contracted procedure: k1455 
o|contracted procedure: k1582 
o|contracted procedure: k1458 
o|contracted procedure: k1574 
o|contracted procedure: k1461 
o|contracted procedure: k1465 
o|contracted procedure: k1472 
o|contracted procedure: k1475 
o|contracted procedure: k1495 
o|contracted procedure: k1504 
o|contracted procedure: k1507 
o|contracted procedure: k1513 
o|contracted procedure: k1525 
o|contracted procedure: k1532 
o|contracted procedure: k1571 
o|contracted procedure: k1538 
o|contracted procedure: k1541 
o|contracted procedure: k1547 
o|contracted procedure: k1550 
o|contracted procedure: k1567 
o|contracted procedure: k1710 
o|contracted procedure: k1591 
o|contracted procedure: k1594 
o|contracted procedure: k1597 
o|contracted procedure: k1600 
o|contracted procedure: k1707 
o|contracted procedure: k1603 
o|contracted procedure: k1618 
o|contracted procedure: k1630 
o|contracted procedure: k1633 
o|contracted procedure: k1636 
o|contracted procedure: k1657 
o|contracted procedure: k1639 
o|contracted procedure: k1642 
o|contracted procedure: k1653 
o|contracted procedure: k1661 
o|contracted procedure: k1667 
o|contracted procedure: k1670 
o|contracted procedure: k1673 
o|contracted procedure: k1680 
o|contracted procedure: k1700 
o|contracted procedure: k1696 
o|contracted procedure: k1688 
o|contracted procedure: k1692 
o|contracted procedure: k1684 
o|contracted procedure: k1722 
o|contracted procedure: k1736 
o|contracted procedure: k1753 
o|contracted procedure: k1742 
o|contracted procedure: k1749 
o|contracted procedure: k1880 
o|contracted procedure: k1762 
o|contracted procedure: k1765 
o|contracted procedure: k1781 
o|contracted procedure: k1787 
o|contracted procedure: k1793 
o|contracted procedure: k1802 
o|contracted procedure: k1805 
o|contracted procedure: k1812 
o|contracted procedure: k1816 
o|contracted procedure: k1822 
o|contracted procedure: k1829 
o|contracted procedure: k1835 
o|contracted procedure: k1838 
o|contracted procedure: k1845 
o|contracted procedure: k1849 
o|contracted procedure: k1855 
o|contracted procedure: k1876 
o|contracted procedure: k1861 
o|contracted procedure: k1868 
o|contracted procedure: k1872 
o|contracted procedure: k1884 
o|contracted procedure: k1887 
o|contracted procedure: k1893 
o|contracted procedure: k1899 
o|contracted procedure: k1905 
o|contracted procedure: k1908 
o|contracted procedure: k1919 
o|contracted procedure: k1929 
o|contracted procedure: k1982 
o|contracted procedure: k1985 
o|contracted procedure: k1995 
o|contracted procedure: k1950 
o|contracted procedure: k1954 
o|contracted procedure: k1972 
o|contracted procedure: k1957 
o|contracted procedure: k1964 
o|contracted procedure: k1968 
o|contracted procedure: k1976 
o|contracted procedure: k2008 
o|contracted procedure: k2011 
o|contracted procedure: k2015 
o|contracted procedure: k2027 
o|contracted procedure: k2023 
o|contracted procedure: k2019 
o|contracted procedure: k2043 
o|contracted procedure: k2050 
o|contracted procedure: k2053 
o|contracted procedure: k2056 
o|contracted procedure: k2059 
o|contracted procedure: k2132 
o|contracted procedure: k2128 
o|contracted procedure: k2066 
o|contracted procedure: k2069 
o|contracted procedure: k2072 
o|contracted procedure: k2094 
o|contracted procedure: k2090 
o|contracted procedure: k2082 
o|contracted procedure: k2086 
o|contracted procedure: k2097 
o|contracted procedure: k2100 
o|contracted procedure: k2104 
o|contracted procedure: k2116 
o|contracted procedure: k2112 
o|contracted procedure: k2108 
o|contracted procedure: k2141 
o|contracted procedure: k2144 
o|contracted procedure: k2157 
o|contracted procedure: k2163 
o|contracted procedure: k2174 
o|contracted procedure: k2189 
o|contracted procedure: k2193 
o|contracted procedure: k2197 
o|contracted procedure: k2229 
o|contracted procedure: k2203 
o|contracted procedure: k2206 
o|contracted procedure: k2209 
o|contracted procedure: k2214 
o|contracted procedure: k2226 
o|contracted procedure: k2241 
o|contracted procedure: k2247 
o|contracted procedure: k2250 
o|contracted procedure: k2256 
o|contracted procedure: k2268 
o|contracted procedure: k2281 
o|contracted procedure: k2288 
o|contracted procedure: k2292 
o|contracted procedure: k2305 
o|contracted procedure: k2313 
o|contracted procedure: k2322 
o|contracted procedure: k2337 
o|contracted procedure: k2346 
o|contracted procedure: k2352 
o|contracted procedure: k2359 
o|contracted procedure: k2365 
o|contracted procedure: k2382 
o|contracted procedure: k2389 
o|contracted procedure: k2400 
o|contracted procedure: k2408 
o|contracted procedure: k2415 
o|contracted procedure: k2426 
o|contracted procedure: k2443 
o|contracted procedure: k2449 
o|contracted procedure: k2464 
o|contracted procedure: k2470 
o|contracted procedure: k2486 
o|contracted procedure: k2490 
o|contracted procedure: k2496 
o|contracted procedure: k2502 
o|contracted procedure: k2514 
o|inlining procedure: k2511 
o|contracted procedure: k2532 
o|inlining procedure: k2529 
o|contracted procedure: k2548 
o|contracted procedure: k2552 
o|contracted procedure: k2564 
o|contracted procedure: k2567 
o|contracted procedure: k2573 
o|contracted procedure: k2585 
o|contracted procedure: k2588 
o|contracted procedure: k2591 
o|contracted procedure: k2595 
o|contracted procedure: k2605 
o|contracted procedure: k2601 
o|contracted procedure: k2611 
o|contracted procedure: k2622 
o|contracted procedure: k2626 
o|contracted procedure: k2629 
o|contracted procedure: k2635 
o|contracted procedure: k2638 
o|contracted procedure: k2658 
o|contracted procedure: k2673 
o|contracted procedure: k2661 
o|contracted procedure: k2680 
o|contracted procedure: k2689 
o|contracted procedure: k2722 
o|contracted procedure: k2737 
o|contracted procedure: k2741 
o|contracted procedure: k2761 
o|contracted procedure: k2745 
o|contracted procedure: k2749 
o|contracted procedure: k2757 
o|contracted procedure: k2733 
o|contracted procedure: k2729 
o|contracted procedure: k2771 
o|contracted procedure: k2834 
o|contracted procedure: k2828 
o|contracted procedure: k2782 
o|contracted procedure: k2791 
o|contracted procedure: k2802 
o|contracted procedure: k2808 
o|contracted procedure: k2811 
o|contracted procedure: k2824 
o|contracted procedure: k2847 
o|contracted procedure: k2857 
o|contracted procedure: k2875 
o|contracted procedure: k2919 
o|contracted procedure: k2923 
o|contracted procedure: k2885 
o|contracted procedure: k2894 
o|contracted procedure: k2904 
o|contracted procedure: k2912 
o|contracted procedure: k2932 
o|contracted procedure: k2939 
o|contracted procedure: k2947 
o|simplifications: ((let . 100)) 
o|removed binding forms: 310 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest146149 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest146149 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest159162 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest159162 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? delstr-and-flag262 0 
(o x)|known list op on rest arg sublist: ##core#rest-car delstr-and-flag262 0 
(o x)|known list op on rest arg sublist: ##core#rest-length delstr-and-flag262 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest309311 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest309311 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest451453 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest451453 0 
o|inlining procedure: k2598 
o|inlining procedure: k2598 
o|substituted constant variable: r2920 
o|substituted constant variable: r2924 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1287 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1287 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1287 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1287 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1399 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1399 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1399 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1399 1 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1293 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1293 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1293 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1293 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1405 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1405 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1405 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1405 2 
o|removed binding forms: 2 
o|removed binding forms: 4 
o|direct leaf routine/allocation: loop64 0 
o|direct leaf routine/allocation: loop353 0 
o|converted assignments to bindings: (loop64) 
o|converted assignments to bindings: (loop353) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (g618623 foldl620630 loop635 visit590 walk606 doloop576577 step554 loop542 loop528 loop512 doloop505506 loop437 loop417 k2075 collect409 k1998 loop398 instring349 loop379 loop1319 loop2328 scan290 loop274 add268 k1360 k1248 traverse108 loop119 map-loop84101 rev-string-append58) 
o|calls to known targets: 76 
o|identified direct recursive calls: f_912 1 
o|identified direct recursive calls: f_889 1 
o|unused rest argument: rest146149 f_1145 
o|unused rest argument: rest159162 f_1160 
o|unused rest argument: rest207210 f_1281 
o|unused rest argument: rest244247 f_1393 
o|identified direct recursive calls: f_1520 1 
o|identified direct recursive calls: f_1628 1 
o|identified direct recursive calls: f_1610 1 
o|unused rest argument: rest309311 f_1589 
o|identified direct recursive calls: f_1731 1 
o|identified direct recursive calls: f_1945 1 
o|identified direct recursive calls: f_2038 1 
o|unused rest argument: rest451453 f_2201 
o|identified direct recursive calls: f_2559 1 
o|identified direct recursive calls: f_2653 1 
o|fast box initializations: 22 
o|dropping unused closure argument: f_1057 
o|dropping unused closure argument: f_1720 
*/
/* end of file */
