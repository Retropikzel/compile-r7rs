/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file extras.c -emit-import-library chicken.format -emit-import-library chicken.pretty-print -emit-import-library chicken.random
   unit: extras
   uses: data-structures library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[125];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,15),40,114,101,97,100,45,109,97,99,114,111,63,32,108,41,0};
static C_char li1[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,13),40,111,117,116,32,115,116,114,32,99,111,108,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,18),40,119,114,45,101,120,112,114,32,101,120,112,114,32,99,111,108,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,14),40,119,114,45,108,115,116,32,108,32,99,111,108,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,8),40,103,50,48,48,32,97,41};
static C_char li7[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,105,32,106,32,99,111,108,41,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,9),40,103,50,49,50,32,99,110,41,0,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,12),40,119,114,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,14),40,115,112,97,99,101,115,32,110,32,99,111,108,41,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,15),40,105,110,100,101,110,116,32,116,111,32,99,111,108,41,0};
static C_char li12[] C_aligned={C_lihdr(0,0,11),40,97,49,53,54,51,32,115,116,114,41,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,26),40,112,114,32,111,98,106,32,99,111,108,32,101,120,116,114,97,32,112,112,45,112,97,105,114,41,0,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,24),40,112,112,45,101,120,112,114,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char li15[] C_aligned={C_lihdr(0,0,32),40,112,112,45,99,97,108,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41};
static C_char li16[] C_aligned={C_lihdr(0,0,29),40,112,112,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,35),40,112,112,45,100,111,119,110,32,108,32,99,111,108,49,32,99,111,108,50,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,49,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,50,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,22),40,116,97,105,108,51,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,41,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,49),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,110,97,109,101,100,63,32,112,112,45,49,32,112,112,45,50,32,112,112,45,51,41,0,0,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,26),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,26),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,22),40,112,112,45,105,102,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,111,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char li27[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,97,115,101,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char li28[] C_aligned={C_lihdr(0,0,23),40,112,112,45,97,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char li29[] C_aligned={C_lihdr(0,0,23),40,112,112,45,108,101,116,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char li30[] C_aligned={C_lihdr(0,0,25),40,112,112,45,98,101,103,105,110,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,22),40,112,112,45,100,111,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,12),40,115,116,121,108,101,32,104,101,97,100,41,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,12),40,112,112,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,32,100,105,115,112,108,97,121,63,32,119,105,100,116,104,32,111,117,116,112,117,116,41,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,9),40,97,50,49,51,55,32,115,41,0,0,0,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,32,46,32,111,112,116,41,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,14),40,114,101,99,32,109,115,103,32,97,114,103,115,41,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,48,32,108,111,99,32,112,111,114,116,32,109,115,103,32,97,114,103,115,41,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,32,112,111,114,116,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,115,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,115,101,116,45,112,115,101,117,100,111,45,114,97,110,100,111,109,45,115,101,101,100,33,32,98,117,102,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,105,110,116,101,103,101,114,32,110,41};
static C_char li48[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,114,101,97,108,41,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,114,97,110,100,111,109,45,98,121,116,101,115,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word *av) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word *av) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word *av) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word *av) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word *av) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word *av) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word *av) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word *av) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word *av) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word *av) C_noret;
C_noret_decl(f_1139)
static void f_1139(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word *av) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word *av) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word *av) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word *av) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word *av) C_noret;
C_noret_decl(f_1204)
static void f_1204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word *av) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word *av) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word *av) C_noret;
C_noret_decl(f_1295)
static void f_1295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_1322)
static void C_ccall f_1322(C_word c,C_word *av) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word *av) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word *av) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word *av) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word *av) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word *av) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word *av) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word *av) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word *av) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word *av) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word *av) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word *av) C_noret;
C_noret_decl(f_1443)
static void f_1443(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1446)
static void f_1446(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word *av) C_noret;
C_noret_decl(f_1479)
static void f_1479(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word *av) C_noret;
C_noret_decl(f_1513)
static void f_1513(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word *av) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word *av) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word *av) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word *av) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word *av) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_1665)
static void f_1665(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1691)
static void f_1691(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void f_1700(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1706)
static void f_1706(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word *av) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word *av) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word *av) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word *av) C_noret;
C_noret_decl(f_1773)
static void f_1773(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_1776)
static void f_1776(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word *av) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word *av) C_noret;
C_noret_decl(f_1815)
static void f_1815(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word *av) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word *av) C_noret;
C_noret_decl(f_1854)
static void f_1854(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word *av) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word *av) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word *av) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word *av) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word *av) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word *av) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1984)
static void f_1984(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1994)
static void f_1994(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word *av) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word *av) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word *av) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word *av) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word *av) C_noret;
C_noret_decl(f_2149)
static void f_2149(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word *av) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word *av) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word *av) C_noret;
C_noret_decl(f_2187)
static void f_2187(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2194)
static C_word f_2194(C_word t0);
C_noret_decl(f_2204)
static void f_2204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void f_2223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word *av) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word *av) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word *av) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word *av) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word *av) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word *av) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word *av) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word *av) C_noret;
C_noret_decl(f_2401)
static C_word f_2401(C_word t0,C_word t1);
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word *av) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word *av) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word *av) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word *av) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word *av) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word *av) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word *av) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word *av) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word *av) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word *av) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word *av) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word *av) C_noret;
C_noret_decl(f_773)
static void f_773(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_776)
static void f_776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void f_804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static C_word f_838(C_word t0);
C_noret_decl(f_877)
static void f_877(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word *av) C_noret;
C_noret_decl(f_896)
static void f_896(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_899)
static void f_899(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word *av) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word *av) C_noret;
C_noret_decl(f_926)
static void f_926(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word *av) C_noret;
C_noret_decl(f_944)
static void f_944(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word *av) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word *av) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word *av) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1139)
static void C_ccall trf_1139(C_word c,C_word *av) C_noret;
static void C_ccall trf_1139(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1139(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1204)
static void C_ccall trf_1204(C_word c,C_word *av) C_noret;
static void C_ccall trf_1204(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1204(t0,t1,t2);}

C_noret_decl(trf_1295)
static void C_ccall trf_1295(C_word c,C_word *av) C_noret;
static void C_ccall trf_1295(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1295(t0,t1,t2);}

C_noret_decl(trf_1443)
static void C_ccall trf_1443(C_word c,C_word *av) C_noret;
static void C_ccall trf_1443(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1443(t0,t1,t2,t3);}

C_noret_decl(trf_1446)
static void C_ccall trf_1446(C_word c,C_word *av) C_noret;
static void C_ccall trf_1446(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1446(t0,t1,t2,t3);}

C_noret_decl(trf_1479)
static void C_ccall trf_1479(C_word c,C_word *av) C_noret;
static void C_ccall trf_1479(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1479(t0,t1,t2,t3);}

C_noret_decl(trf_1513)
static void C_ccall trf_1513(C_word c,C_word *av) C_noret;
static void C_ccall trf_1513(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1513(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1665)
static void C_ccall trf_1665(C_word c,C_word *av) C_noret;
static void C_ccall trf_1665(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1665(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1691)
static void C_ccall trf_1691(C_word c,C_word *av) C_noret;
static void C_ccall trf_1691(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1691(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1700)
static void C_ccall trf_1700(C_word c,C_word *av) C_noret;
static void C_ccall trf_1700(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_1700(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1706)
static void C_ccall trf_1706(C_word c,C_word *av) C_noret;
static void C_ccall trf_1706(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1706(t0,t1,t2,t3);}

C_noret_decl(trf_1773)
static void C_ccall trf_1773(C_word c,C_word *av) C_noret;
static void C_ccall trf_1773(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_1773(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_1776)
static void C_ccall trf_1776(C_word c,C_word *av) C_noret;
static void C_ccall trf_1776(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1776(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1815)
static void C_ccall trf_1815(C_word c,C_word *av) C_noret;
static void C_ccall trf_1815(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1815(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1854)
static void C_ccall trf_1854(C_word c,C_word *av) C_noret;
static void C_ccall trf_1854(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1854(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1984)
static void C_ccall trf_1984(C_word c,C_word *av) C_noret;
static void C_ccall trf_1984(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1984(t0,t1,t2);}

C_noret_decl(trf_1994)
static void C_ccall trf_1994(C_word c,C_word *av) C_noret;
static void C_ccall trf_1994(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1994(t0,t1);}

C_noret_decl(trf_2149)
static void C_ccall trf_2149(C_word c,C_word *av) C_noret;
static void C_ccall trf_2149(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2149(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2187)
static void C_ccall trf_2187(C_word c,C_word *av) C_noret;
static void C_ccall trf_2187(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2187(t0,t1,t2,t3);}

C_noret_decl(trf_2204)
static void C_ccall trf_2204(C_word c,C_word *av) C_noret;
static void C_ccall trf_2204(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2204(t0,t1);}

C_noret_decl(trf_2223)
static void C_ccall trf_2223(C_word c,C_word *av) C_noret;
static void C_ccall trf_2223(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2223(t0,t1);}

C_noret_decl(trf_773)
static void C_ccall trf_773(C_word c,C_word *av) C_noret;
static void C_ccall trf_773(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_773(t0,t1,t2,t3,t4);}

C_noret_decl(trf_776)
static void C_ccall trf_776(C_word c,C_word *av) C_noret;
static void C_ccall trf_776(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_776(t0,t1);}

C_noret_decl(trf_804)
static void C_ccall trf_804(C_word c,C_word *av) C_noret;
static void C_ccall trf_804(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_804(t0,t1);}

C_noret_decl(trf_877)
static void C_ccall trf_877(C_word c,C_word *av) C_noret;
static void C_ccall trf_877(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_877(t0,t1,t2,t3);}

C_noret_decl(trf_896)
static void C_ccall trf_896(C_word c,C_word *av) C_noret;
static void C_ccall trf_896(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_896(t0,t1,t2,t3);}

C_noret_decl(trf_899)
static void C_ccall trf_899(C_word c,C_word *av) C_noret;
static void C_ccall trf_899(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_899(t0,t1,t2,t3);}

C_noret_decl(trf_926)
static void C_ccall trf_926(C_word c,C_word *av) C_noret;
static void C_ccall trf_926(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_926(t0,t1,t2,t3);}

C_noret_decl(trf_944)
static void C_ccall trf_944(C_word c,C_word *av) C_noret;
static void C_ccall trf_944(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_944(t0,t1,t2,t3);}

/* k999 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1001,c,av);}
/* extras.scm:83: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1051 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1053,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:95: out */
t3=((C_word*)((C_word*)t0)[4])[1];
f_877(t3,t2,lf[19],((C_word*)t0)[5]);}

/* k1055 in k1051 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1057,c,av);}
/* extras.scm:95: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_926(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1081 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1083,c,av);}
/* extras.scm:97: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1089,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:99: scheme#open-output-string */
t4=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:102: ##sys#procedure->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:105: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_877(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:106: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_877(t4,t3,lf[36],((C_word*)t0)[5]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=C_fix(1);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=C_fix(C_character_code(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1288,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:145: out */
t5=((C_word*)((C_word*)t0)[3])[1];
f_877(t5,t4,lf[41],((C_word*)t0)[5]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[2]))){
/* extras.scm:153: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_877(t3,((C_word*)t0)[4],lf[42],((C_word*)t0)[5]);}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[2]))){
/* extras.scm:154: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_877(t3,((C_word*)t0)[4],lf[43],((C_word*)t0)[5]);}
else{
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* extras.scm:155: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_877(t3,((C_word*)t0)[4],lf[44],((C_word*)t0)[5]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:156: ##sys#pointer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:158: scheme#open-output-string */
t4=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:161: scheme#port? */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}}}}}}}}

/* k1093 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1095,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:100: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1096 in k1093 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1098,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:101: scheme#get-output-string */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1103 in k1096 in k1093 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1105,c,av);}
/* extras.scm:101: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1116 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1118,c,av);}
/* extras.scm:102: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1137,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1139(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1139(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_1139,5,t0,t1,t2,t3,t4);}
a=C_alloc(20);
t5=(C_truep(t4)?C_fixnum_lessp(t3,C_i_string_length(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_string_ref(((C_word*)t0)[2],t3);
t7=C_u_i_char_equalp(t6,C_make_character(92));
t8=(C_truep(t7)?t7:C_u_i_char_equalp(t6,C_make_character(34)));
if(C_truep(t8)){
t9=C_a_i_fixnum_plus(&a,2,t3,C_fix(1));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1167,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1171,a[2]=((C_word*)t0)[4],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1175,a[2]=((C_word*)t0)[4],a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:115: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}
else{
t9=C_u_i_char_lessp(t6,C_make_character(32));
t10=(C_truep(t9)?t9:C_u_i_char_greater_or_equal_p(t6,C_make_character(127)));
if(C_truep(t10)){
t11=C_fixnum_plus(t3,C_fix(1));
t12=C_fixnum_plus(t3,C_fix(1));
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1198,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t11,a[6]=t12,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1235,a[2]=((C_word*)t0)[4],a[3]=t13,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:122: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t14;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}
else{
/* extras.scm:139: loop */
t16=t1;
t17=t2;
t18=C_fixnum_plus(t3,C_fix(1));
t19=t4;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1257,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:141: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}}

/* k1165 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1167,c,av);}
/* extras.scm:112: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1139(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1169 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1171,c,av);}
/* extras.scm:114: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[28],t1);}

/* k1173 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1175,c,av);}
/* extras.scm:115: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1196 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1198(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1198,c,av);}
a=C_alloc(14);
t2=C_u_i_assq(((C_word*)t0)[2],lf[30]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1203,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:123: g200 */
t5=t4;
f_1204(t5,t3,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1222,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#fixnum->string */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fix(C_character_code(((C_word*)t0)[2]));
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1201 in k1196 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1203,c,av);}
/* extras.scm:119: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1139(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g200 in k1196 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1204,3,t0,t1,t2);}
/* extras.scm:132: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_877(t3,t1,C_i_cdr(t2),((C_word*)t0)[3]);}

/* k1220 in k1196 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1222,c,av);}
/* extras.scm:134: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1224 in k1196 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1226,c,av);}
/* extras.scm:134: scheme#string-append */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=t1;
av2[4]=lf[33];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1233 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1235,c,av);}
/* extras.scm:122: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1251 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1253,c,av);}
/* extras.scm:140: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[35],t1);}

/* k1255 in loop in k1135 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1257,c,av);}
/* extras.scm:141: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1278 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1280,c,av);}
/* extras.scm:143: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1288,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:146: chicken.base#char-name */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1289 in k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1291,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:146: g212 */
t3=t2;
f_1295(t3,((C_word*)t0)[4],t1);}
else{
t2=C_fixnum_lessp(((C_word*)t0)[5],C_fix(32));
t3=(C_truep(t2)?t2:C_fixnum_greaterp(((C_word*)t0)[5],C_fix(127)));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#fixnum->string */
t5=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=C_fix(1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* g212 in k1289 in k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1295,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:148: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1301 in g212 in k1289 in k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1303,c,av);}
/* extras.scm:148: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1320 in k1289 in k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1322,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:151: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_877(t3,t2,lf[39],((C_word*)t0)[4]);}

/* k1324 in k1320 in k1289 in k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1326,c,av);}
/* extras.scm:150: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1333 in k1289 in k1286 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1335,c,av);}
/* extras.scm:152: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1366 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1368,c,av);}
/* extras.scm:156: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1375 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1377,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:159: ##sys#user-print-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t1;
tp(5,av2);}}

/* k1378 in k1375 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1380,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:160: scheme#get-output-string */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1385 in k1378 in k1375 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1387,c,av);}
/* extras.scm:160: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1393,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:161: scheme#string-append */
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[47];
av2[3]=C_slot(((C_word*)t0)[5],C_fix(3));
av2[4]=lf[48];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1410,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:163: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_877(t3,t2,lf[50],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:167: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[53]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:169: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[54],((C_word*)t0)[4]);}}}}

/* k1398 in k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1400,c,av);}
/* extras.scm:161: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1408 in k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1410,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:164: ##sys#bytevector->list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k1415 in k1408 in k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1417,c,av);}
/* extras.scm:164: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_926(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1425 in k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1427,c,av);}
/* extras.scm:166: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[51],t1);}

/* k1429 in k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1431,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:168: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_877(t3,t2,lf[52],((C_word*)t0)[4]);}

/* k1433 in k1429 in k1391 in k1087 in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1435,c,av);}
/* extras.scm:167: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1443(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(152,0,9)))){
C_save_and_reclaim_args((void *)trf_1443,4,t0,t1,t2,t3);}
a=C_alloc(152);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1446,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1479,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1513,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li13),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1600,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li14),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1665,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1691,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1700,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1773,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=t15,a[3]=t11,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1919,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1925,a[2]=t19,a[3]=t11,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1931,a[2]=t13,a[3]=t21,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1937,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1943,a[2]=t13,a[3]=t11,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1949,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1969,a[2]=t19,a[3]=t11,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1975,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1984,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li32),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:331: pr */
t58=((C_word*)t9)[1];
f_1513(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* spaces in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1446(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_1446,4,t0,t1,t2,t3);}
a=C_alloc(34);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_s_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:176: out */
t6=((C_word*)((C_word*)t0)[3])[1];
f_877(t6,t5,lf[57],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:177: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
av2[2]=lf[58];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1468 in spaces in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1470,c,av);}
/* extras.scm:176: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1446(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1475 in spaces in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1477,c,av);}
/* extras.scm:177: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* indent in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1479(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_1479,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1502,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t5;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
t4=C_s_a_i_minus(&a,2,t2,t3);
/* extras.scm:184: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1446(t5,t1,t4,t3);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1493 in indent in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1495,c,av);}
if(C_truep(t1)){
/* extras.scm:183: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1446(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1500 in indent in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1502,c,av);}
/* extras.scm:183: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1513(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(101,0,3)))){
C_save_and_reclaim_args((void *)trf_1513,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(101);
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_s_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_s_a_i_minus(&a,2,t11,t4);
t13=C_s_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:189: scheme#max */
t14=*((C_word*)lf[61]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t10;
av2[2]=t13;
av2[3]=C_fix(50);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
/* extras.scm:200: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_896(t8,t1,t2,t3);}}

/* k1524 in pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1526(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_1526,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1529,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1564,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:190: generic-write */
f_773(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k1527 in k1524 in pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1529,c,av);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:196: chicken.string#reverse-string-append */
t3=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:198: pp-pair */
t2=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1558,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:199: scheme#vector->list */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k1540 in k1527 in k1524 in pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1542,c,av);}
/* extras.scm:196: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1556 in k1527 in k1524 in pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1558,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:199: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_877(t3,t2,lf[60],((C_word*)t0)[7]);}

/* k1560 in k1556 in k1527 in k1524 in pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1562,c,av);}
/* extras.scm:199: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1691(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* a1563 in k1524 in pr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1564(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,1)))){
C_save_and_reclaim((void *)f_1564,c,av);}
a=C_alloc(32);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_s_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* pp-expr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_1600,c,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1607,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:203: read-macro? */
f_776(t5,t2);}

/* k1605 in pp-expr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_1607,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1618,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(
/* extras.scm:205: read-macro-prefix */
  f_838(((C_word*)t0)[2])
);
/* extras.scm:205: out */
t5=((C_word*)((C_word*)t0)[8])[1];
f_877(t5,t3,t4,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1634,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:210: style */
t4=((C_word*)((C_word*)t0)[12])[1];
f_1984(t4,t3,t2);}
else{
/* extras.scm:217: pp-list */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1691(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k1616 in k1605 in pp-expr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1618,c,av);}
/* extras.scm:204: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1513(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k1632 in k1605 in pp-expr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1634,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* extras.scm:212: proc */
t2=t1;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:213: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}}

/* k1658 in k1632 in k1605 in pp-expr in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1660,c,av);}
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:215: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1773(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:216: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1665(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* pp-call in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1665(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1665,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1669,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:223: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_877(t9,t8,lf[62],t3);}

/* k1667 in pp-call in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_1669,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:225: pp-down */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1700(t4,((C_word*)t0)[5],t2,t1,t3,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1687 in pp-call in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1689,c,av);}
/* extras.scm:223: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-list in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1691(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1691,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:231: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_877(t7,t6,lf[63],t3);}

/* k1693 in pp-list in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1695,c,av);}
/* extras.scm:232: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1700(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1700(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_1700,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1706,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li17),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_1706(t10,t1,t2,t3);}

/* loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1706(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,3)))){
C_save_and_reclaim_args((void *)trf_1706,4,t0,t1,t2,t3);}
a=C_alloc(41);
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1727,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_u_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1733,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:241: indent */
t10=((C_word*)((C_word*)t0)[6])[1];
f_1479(t10,t9,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:243: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_877(t4,t1,lf[64],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:247: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1479(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1725 in loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1727,c,av);}
/* extras.scm:240: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1706(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1731 in loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1733,c,av);}
/* extras.scm:241: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1513(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1753 in loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1755,c,av);}
/* extras.scm:245: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[65],t1);}

/* k1757 in loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_1759,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:246: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1513(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* k1765 in loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1767,c,av);}
/* extras.scm:247: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1479(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1769 in loop in pp-down in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1771,c,av);}
/* extras.scm:247: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[66],t1);}

/* pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1773(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,6)))){
C_save_and_reclaim_args((void *)trf_1773,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(42);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1776,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li19),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1815,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li20),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1854,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=C_u_i_cdr(t2);
t20=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1865,a[2]=t5,a[3]=t19,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[5],a[3]=t20,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:274: out */
t22=((C_word*)((C_word*)t0)[6])[1];
f_877(t22,t21,lf[68],t3);}

/* tail1 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1776(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,5)))){
C_save_and_reclaim_args((void *)trf_1776,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t7,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:258: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_1479(t13,t12,t5,t4);}
else{
/* extras.scm:259: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_1815(t7,t1,t2,t3,t4,t5);}}

/* k1795 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1797,c,av);}
/* extras.scm:258: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1815(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k1799 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1801,c,av);}
/* extras.scm:258: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1513(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail2 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1815(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,4)))){
C_save_and_reclaim_args((void *)trf_1815,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(42);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1836,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1840,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t7,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:266: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_1479(t13,t12,t5,t4);}
else{
/* extras.scm:267: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_1854(t7,t1,t2,t3,t4);}}

/* k1834 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1836,c,av);}
/* extras.scm:266: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1854(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1838 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1840,c,av);}
/* extras.scm:266: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1513(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail3 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1854(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_1854,5,t0,t1,t2,t3,t4);}
/* extras.scm:270: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1700(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1863 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1865(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_1865,c,av);}
a=C_alloc(58);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:278: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_877(t7,t6,lf[67],t1);}
else{
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:280: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1776(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* k1876 in k1863 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_1878,c,av);}
a=C_alloc(58);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:279: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1776(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k1891 in k1863 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1893,c,av);}
/* extras.scm:278: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1909 in pp-general in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1911,c,av);}
/* extras.scm:274: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-expr-list in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1913,c,av);}
/* extras.scm:283: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1691(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-lambda in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1919,c,av);}
/* extras.scm:286: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1773(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-if in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1925,c,av);}
/* extras.scm:289: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1773(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-cond in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1931,c,av);}
/* extras.scm:292: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1665(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-case in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1937,c,av);}
/* extras.scm:295: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1773(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-and in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1943,c,av);}
/* extras.scm:298: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1665(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-let in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1949(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1949,c,av);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
/* extras.scm:303: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1773(t6,t1,t2,t3,t4,C_i_symbolp(C_u_i_car(t5)),((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:303: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1773(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* pp-begin in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1969,c,av);}
/* extras.scm:306: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1773(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-do in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_1975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1975,c,av);}
/* extras.scm:309: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1773(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* style in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1984(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_1984,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_eqp(t2,lf[69]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1994,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_1994(t5,t3);}
else{
t5=C_eqp(t2,lf[79]);
if(C_truep(t5)){
t6=t4;
f_1994(t6,t5);}
else{
t6=C_eqp(t2,lf[80]);
if(C_truep(t6)){
t7=t4;
f_1994(t7,t6);}
else{
t7=C_eqp(t2,lf[81]);
t8=t4;
f_1994(t8,(C_truep(t7)?t7:C_eqp(t2,lf[82])));}}}}

/* k1992 in style in pp in chicken.pretty-print#generic-write in k769 in k766 */
static void f_1994(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_1994,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[70]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[71]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[72]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[73]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[74]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[75]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)((C_word*)t0)[8])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[76]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[77]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=((C_word*)((C_word*)t0)[10])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[78]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}

/* k2108 in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_2110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2110,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:334: pp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1443(t3,t2,((C_word*)t0)[5],C_fix(0));}

/* k2112 in k2108 in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_2114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2114,c,av);}
/* extras.scm:334: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2121 in k769 in k766 */
static void C_ccall f_2123(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_2123,c,av);}
a=C_alloc(29);
t2=C_mutate((C_word*)lf[83]+1 /* (set! chicken.pretty-print#pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[84]+1 /* (set! chicken.pretty-print#pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2125,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[87]+1 /* (set! chicken.pretty-print#pp ...) */,*((C_word*)lf[84]+1));
t5=C_a_i_provide(&a,1,lf[88]);
t6=C_mutate(&lf[89] /* (set! chicken.format#fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2149,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[98]+1 /* (set! chicken.format#fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2470,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[100]+1 /* (set! chicken.format#printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2476,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[102]+1 /* (set! chicken.format#sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2482,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[104]+1 /* (set! chicken.format#format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2488,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:430: chicken.platform#register-feature! */
t12=*((C_word*)lf[122]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[123];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* chicken.pretty-print#pretty-print in k2121 in k769 in k766 */
static void C_ccall f_2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_2125,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):*((C_word*)lf[85]+1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2132,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2136,a[2]=t5,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:344: pretty-print-width */
t8=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2130 in chicken.pretty-print#pretty-print in k2121 in k769 in k766 */
static void C_ccall f_2132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2132,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2134 in chicken.pretty-print#pretty-print in k2121 in k769 in k766 */
static void C_ccall f_2136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2136,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:344: generic-write */
f_773(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* a2137 in k2134 in chicken.pretty-print#pretty-print in k2121 in k769 in k766 */
static void C_ccall f_2138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2138,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:344: scheme#display */
t4=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2140 in a2137 in k2134 in chicken.pretty-print#pretty-print in k2121 in k769 in k766 */
static void C_ccall f_2142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2142,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.format#fprintf0 in k2121 in k769 in k766 */
static void f_2149(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_2149,5,t1,t2,t3,t4,t5);}
a=C_alloc(11);
t6=(C_truep(t3)?C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,t2):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2156,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2459,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
/* extras.scm:361: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t8;
av2[2]=t3;
tp(3,av2);}}
else{
/* extras.scm:363: scheme#open-output-string */
t9=*((C_word*)lf[26]+1);{
C_word av2[2];
av2[0]=t9;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2156(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_2156,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2187(t6,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2157 in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2159,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
/* extras.scm:407: scheme#get-output-string */
t2=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:409: scheme#get-output-string */
t4=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k2179 in k2157 in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2181,c,av);}
/* extras.scm:409: ##sys#print */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void f_2187(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t17;
C_word t18;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_2187,4,t0,t1,t2,t3);}
a=C_alloc(30);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_u_i_string_length(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2194,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2204,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2223,a[2]=t7,a[3]=t8,a[4]=t10,a[5]=t16,a[6]=((C_word*)t0)[3],a[7]=t12,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li39),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_2223(t18,t1);}

/* fetch in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static C_word f_2194(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* next in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void f_2204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2204,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:374: ##sys#error */
t2=*((C_word*)lf[90]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[91];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void f_2223(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_2223,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(
/* extras.scm:380: fetch */
  f_2194(((C_word*)((C_word*)t0)[4])[1])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(
/* extras.scm:382: fetch */
  f_2194(((C_word*)((C_word*)t0)[4])[1])
);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2261,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:384: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2204(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2274,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:385: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2204(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:386: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2204(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2300,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:387: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_2204(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2317,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:388: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_2204(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2334,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:389: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_2204(t10,t9);
case C_make_character(33):
/* extras.scm:390: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:392: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2204(t9,t8);
case C_make_character(126):
/* extras.scm:396: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=C_make_character(126);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:397: scheme#newline */
t10=*((C_word*)lf[95]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=(
/* extras.scm:400: fetch */
  f_2194(((C_word*)((C_word*)t0)[4])[1])
);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
t12=(
  f_2401(t11,t10)
);
/* extras.scm:406: loop */
t24=t1;
t1=t24;
goto loop;}
else{
/* extras.scm:404: ##sys#error */
t10=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[96];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}
else{
/* extras.scm:405: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* k2234 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2236,c,av);}
/* extras.scm:406: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2223(t2,((C_word*)t0)[3]);}

/* k2259 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2261,c,av);}
/* extras.scm:384: scheme#write */
t2=*((C_word*)lf[92]+1);{
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

/* k2272 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2274,c,av);}
/* extras.scm:385: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2285 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2287,c,av);}
/* extras.scm:386: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2298 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2300,c,av);}
/* extras.scm:387: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2302 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2304,c,av);}
/* extras.scm:387: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k2315 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2317,c,av);}
/* extras.scm:388: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2319 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2321,c,av);}
/* extras.scm:388: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(8);
tp(4,av2);}}

/* k2332 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2334,c,av);}
/* extras.scm:389: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2336 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2338,c,av);}
/* extras.scm:389: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
tp(4,av2);}}

/* k2354 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2356,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:393: next */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2204(t3,t2);}

/* k2357 in k2354 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2359,c,av);}
a=C_alloc(4);
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:395: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2187(t4,t3,((C_word*)t0)[6],t1);}

/* k2363 in k2357 in k2354 in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2365,c,av);}
/* extras.scm:406: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2223(t2,((C_word*)t0)[3]);}

/* skip in loop in rec in k2154 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static C_word f_2401(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=(
/* extras.scm:402: fetch */
  f_2194(((C_word*)((C_word*)t0)[2])[1])
);
t5=t2;
t1=t5;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t3);}}

/* k2457 in chicken.format#fprintf0 in k2121 in k769 in k766 */
static void C_ccall f_2459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2459,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_2156(2,av2);}}
else{
/* extras.scm:363: scheme#open-output-string */
t2=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.format#fprintf in k2121 in k769 in k766 */
static void C_ccall f_2470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2470,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
/* extras.scm:412: fprintf0 */
f_2149(t1,lf[99],t2,t3,t4);}

/* chicken.format#printf in k2121 in k769 in k766 */
static void C_ccall f_2476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2476,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:415: fprintf0 */
f_2149(t1,lf[101],*((C_word*)lf[85]+1),t2,t3);}

/* chicken.format#sprintf in k2121 in k769 in k766 */
static void C_ccall f_2482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2482,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:418: fprintf0 */
f_2149(t1,lf[103],C_SCHEME_FALSE,t2,t3);}

/* chicken.format#format in k2121 in k769 in k766 */
static void C_ccall f_2488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_2488,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2496,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[102]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_booleanp(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[100]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t6=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t7=C_set_block_item(t4,0,t6);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[102]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2521,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:425: scheme#output-port? */
t7=*((C_word*)lf[107]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}}

/* k2494 in chicken.format#format in k2121 in k769 in k766 */
static void C_ccall f_2496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2496,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}

/* k2519 in chicken.format#format in k2121 in k769 in k766 */
static void C_ccall f_2521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2521,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[98]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}
else{
/* extras.scm:427: ##sys#error */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[105];
av2[3]=lf[106];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k2529 in k2121 in k769 in k766 */
static void C_ccall f_2531(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_2531,c,av);}
a=C_alloc(21);
t2=C_a_i_provide(&a,1,lf[108]);
t3=C_mutate((C_word*)lf[109]+1 /* (set! chicken.random#set-pseudo-random-seed! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2533,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[112]+1 /* (set! chicken.random#pseudo-random-integer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2569,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[115]+1 /* (set! chicken.random#pseudo-random-real ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t6=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_RANDOM_STATE_SIZE);
t7=C_mutate((C_word*)lf[116]+1 /* (set! chicken.random#random-bytes ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2588,a[2]=t6,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* chicken.random#set-pseudo-random-seed! in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2533(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2533,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2540,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t6)[1])){
t8=C_i_check_fixnum_2(((C_word*)t6)[1],lf[110]);
if(C_truep(C_fixnum_lessp(((C_word*)t6)[1],C_fix(0)))){
/* extras.scm:443: ##sys#error */
t9=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[110];
av2[3]=lf[111];
av2[4]=((C_word*)t6)[1];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t7;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
f_2540(2,av2);}}}
else{
t8=C_block_size(t2);
t9=C_set_block_item(t6,0,t8);
t10=t7;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
f_2540(2,av2);}}}

/* k2538 in chicken.random#set-pseudo-random-seed! in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2540,c,av);}
t2=C_i_check_bytevector_2(((C_word*)t0)[2],lf[110]);
t3=C_block_size(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_set_random_seed(((C_word*)t0)[2],C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.random#pseudo-random-integer in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2569,c,av);}
a=C_alloc(2);
if(C_truep(C_fixnump(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_random_fixnum(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_not(C_i_bignump(t2)))){
/* extras.scm:455: ##sys#error */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[113];
av2[3]=lf[114];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_s_a_u_i_random_int(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* chicken.random#pseudo-random-real in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,1)))){
C_save_and_reclaim((void *)f_2585,c,av);}
a=C_alloc(2);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_random_real(&a,0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.random#random-bytes in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2588(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2588,c,av);}
a=C_alloc(6);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2604,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=C_i_check_fixnum_2(t6,lf[117]);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* extras.scm:468: ##sys#error */
t10=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[117];
av2[3]=lf[121];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t8;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
f_2604(2,av2);}}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2604(2,av2);}}}

/* k2602 in chicken.random#random-bytes in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2604,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2623,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_immp(((C_word*)t0)[4]);
if(C_truep(t4)){
if(C_truep(t4)){
/* extras.scm:472: ##sys#error */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[117];
av2[3]=lf[119];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
f_2607(2,av2);}}}
else{
if(C_truep(C_i_not(C_byteblockp(((C_word*)t0)[4])))){
/* extras.scm:472: ##sys#error */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[117];
av2[3]=lf[119];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
f_2607(2,av2);}}}}
else{
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:475: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* extras.scm:475: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}}

/* k2605 in k2602 in chicken.random#random-bytes in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2607,c,av);}
a=C_alloc(4);
t2=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_block_size(t1));
t3=C_random_bytes(t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* extras.scm:479: ##sys#error */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[117];
av2[3]=lf[118];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2612 in k2605 in k2602 in chicken.random#random-bytes in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2614,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2621 in k2602 in chicken.random#random-bytes in k2529 in k2121 in k769 in k766 */
static void C_ccall f_2623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2623,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_2607(2,av2);}}

/* k766 */
static void C_ccall f_768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_768,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k769 in k766 */
static void C_ccall f_771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_771,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[2] /* (set! chicken.pretty-print#generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_773,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:340: scheme#make-parameter */
t4=*((C_word*)lf[124]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(79);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* chicken.pretty-print#generic-write in k769 in k766 */
static void f_773(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,4)))){
C_save_and_reclaim_args((void *)trf_773,5,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_838,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_877,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_896,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li9),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1443,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li33),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2110,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t21;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
/* extras.scm:335: wr */
t21=((C_word*)t13)[1];
f_896(t21,t1,t2,C_fix(0));}}

/* read-macro? in chicken.pretty-print#generic-write in k769 in k766 */
static void f_776(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_776,2,t1,t2);}
a=C_alloc(4);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_eqp(t3,lf[3]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_804,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_804(t7,t5);}
else{
t7=C_eqp(t3,lf[4]);
if(C_truep(t7)){
t8=t6;
f_804(t8,t7);}
else{
t8=C_eqp(t3,lf[5]);
t9=t6;
f_804(t9,(C_truep(t8)?t8:C_eqp(t3,lf[6])));}}}

/* k802 in read-macro? in chicken.pretty-print#generic-write in k769 in k766 */
static void f_804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_804,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* read-macro-prefix in chicken.pretty-print#generic-write in k769 in k766 */
static C_word f_838(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_eqp(t2,lf[3]);
if(C_truep(t4)){
return(lf[7]);}
else{
t5=C_eqp(t2,lf[4]);
if(C_truep(t5)){
return(lf[8]);}
else{
t6=C_eqp(t2,lf[5]);
if(C_truep(t6)){
return(lf[9]);}
else{
t7=C_eqp(t2,lf[6]);
return((C_truep(t7)?lf[10]:C_SCHEME_UNDEFINED));}}}}

/* out in chicken.pretty-print#generic-write in k769 in k766 */
static void f_877(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_877,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_887,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:71: output */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k885 in out in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_887,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_s_a_i_plus(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_896(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_896,4,t0,t1,t2,t3);}
a=C_alloc(23);
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:91: wr-expr */
t9=t4;
f_899(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:92: wr-lst */
t9=((C_word*)t6)[1];
f_926(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:93: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_877(t9,t1,lf[17],t3);}
else{
if(C_truep(C_bwpp(t2))){
/* extras.scm:94: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_877(t9,t1,lf[18],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1053,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:95: scheme#vector->list */
t10=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:96: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_877(t9,t1,lf[21],t3);}
else{
/* extras.scm:96: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_877(t9,t1,lf[22],t3);}}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:97: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1089,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* extras.scm:98: chicken.keyword#keyword? */
t10=*((C_word*)lf[56]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}}}}}}

/* wr-expr in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_899(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_899,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_906,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:76: read-macro? */
f_776(t4,t2);}

/* k904 in wr-expr in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_906,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_917,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(
/* extras.scm:77: read-macro-prefix */
  f_838(((C_word*)t0)[2])
);
/* extras.scm:77: out */
t5=((C_word*)((C_word*)t0)[6])[1];
f_877(t5,t3,t4,((C_word*)t0)[7]);}
else{
/* extras.scm:78: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_926(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k915 in k904 in wr-expr in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_917,c,av);}
/* extras.scm:77: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_926(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_926,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:83: out */
t8=((C_word*)((C_word*)t0)[3])[1];
f_877(t8,t7,lf[15],t3);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_942(2,av2);}}}
else{
/* extras.scm:89: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_877(t4,t1,lf[16],t3);}}

/* k940 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_942,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_944,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_944(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in k940 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void f_944(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_944,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_966,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:86: out */
t8=((C_word*)((C_word*)t0)[4])[1];
f_877(t8,t7,lf[11],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:87: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_877(t4,t1,lf[12],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_988,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:88: out */
t6=((C_word*)((C_word*)t0)[4])[1];
f_877(t6,t5,lf[14],t3);}}}}

/* k964 in loop in k940 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_966,c,av);}
/* extras.scm:86: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_944(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k970 in loop in k940 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_972,c,av);}
/* extras.scm:86: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k986 in loop in k940 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_988,c,av);}
/* extras.scm:88: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_877(t2,((C_word*)t0)[3],lf[13],t1);}

/* k990 in loop in k940 in wr-lst in wr in chicken.pretty-print#generic-write in k769 in k766 */
static void C_ccall f_992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_992,c,av);}
/* extras.scm:88: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_896(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_extras_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("extras"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_extras_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(553))){
C_save(t1);
C_rereclaim2(553*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,125);
lf[0]=C_h_intern(&lf[0],6, C_text("extras"));
lf[1]=C_h_intern(&lf[1],21, C_text("chicken.pretty-print#"));
lf[3]=C_h_intern(&lf[3],5, C_text("quote"));
lf[4]=C_h_intern(&lf[4],10, C_text("quasiquote"));
lf[5]=C_h_intern(&lf[5],7, C_text("unquote"));
lf[6]=C_h_intern(&lf[6],16, C_text("unquote-splicing"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\140\000"));
lf[9]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\054\000"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\100\000"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\056\040\000"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\050\051\000"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\043\041\145\157\146\000"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\043\041\142\167\160\000"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[20]=C_h_intern(&lf[20],19, C_text("scheme#vector->list"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\164\000"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\146\000"));
lf[23]=C_h_intern(&lf[23],20, C_text("##sys#number->string"));
lf[24]=C_h_intern(&lf[24],24, C_text("scheme#get-output-string"));
lf[25]=C_h_intern(&lf[25],11, C_text("##sys#print"));
lf[26]=C_h_intern(&lf[26],25, C_text("scheme#open-output-string"));
lf[27]=C_h_intern(&lf[27],23, C_text("##sys#procedure->string"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\134\000"));
lf[29]=C_h_intern(&lf[29],15, C_text("##sys#substring"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376\002\000\000\003\134\164\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376\002\000\000\003\134\156\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376\002\000\000\003\134\162\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\013\376\002\000\000\003\134\166\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376\002\000\000\003\134\146\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376\002\000\000\003\134\141\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376\002\000\000\003\134\142\000\376\377\016"));
lf[31]=C_h_intern(&lf[31],20, C_text("scheme#string-append"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\134\170\000"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\073\000"));
lf[34]=C_h_intern(&lf[34],20, C_text("##sys#fixnum->string"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\042\000"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\042\000"));
lf[37]=C_h_intern(&lf[37],17, C_text("##sys#make-string"));
lf[38]=C_h_intern(&lf[38],27, C_text("##sys#symbol->string/shared"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\170\000"));
lf[40]=C_h_intern(&lf[40],22, C_text("chicken.base#char-name"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\134\000"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\043\074\165\156\163\160\145\143\151\146\151\145\144\076\000"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\043\074\165\156\142\157\165\156\144\040\166\141\154\165\145\076\000"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\043\074\165\156\160\162\151\156\164\141\142\154\145\040\157\142\152\145\143\164\076\000"));
lf[45]=C_h_intern(&lf[45],21, C_text("##sys#pointer->string"));
lf[46]=C_h_intern(&lf[46],21, C_text("##sys#user-print-hook"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\043\074\160\157\162\164\040\000"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\076\000"));
lf[49]=C_h_intern(&lf[49],22, C_text("##sys#bytevector->list"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\043\165\070\000"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\076\000"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\043\074\154\141\155\142\144\141\040\151\156\146\157\040\000"));
lf[53]=C_h_intern(&lf[53],25, C_text("##sys#lambda-info->string"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\043\074\165\156\160\162\151\156\164\141\142\154\145\040\157\142\152\145\143\164\076\000"));
lf[55]=C_h_intern(&lf[55],12, C_text("scheme#port?"));
lf[56]=C_h_intern(&lf[56],24, C_text("chicken.keyword#keyword?"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\040\040\040\040\040\040\040\040\000"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\040\040\040\040\040\040\040\040\000"));
lf[59]=C_h_intern(&lf[59],36, C_text("chicken.string#reverse-string-append"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[61]=C_h_intern(&lf[61],10, C_text("scheme#max"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[69]=C_h_intern(&lf[69],6, C_text("lambda"));
lf[70]=C_h_intern(&lf[70],2, C_text("if"));
lf[71]=C_h_intern(&lf[71],4, C_text("set!"));
lf[72]=C_h_intern(&lf[72],4, C_text("cond"));
lf[73]=C_h_intern(&lf[73],4, C_text("case"));
lf[74]=C_h_intern(&lf[74],3, C_text("and"));
lf[75]=C_h_intern(&lf[75],2, C_text("or"));
lf[76]=C_h_intern(&lf[76],3, C_text("let"));
lf[77]=C_h_intern(&lf[77],5, C_text("begin"));
lf[78]=C_h_intern(&lf[78],2, C_text("do"));
lf[79]=C_h_intern(&lf[79],4, C_text("let*"));
lf[80]=C_h_intern(&lf[80],6, C_text("letrec"));
lf[81]=C_h_intern(&lf[81],7, C_text("letrec*"));
lf[82]=C_h_intern(&lf[82],6, C_text("define"));
lf[83]=C_h_intern(&lf[83],39, C_text("chicken.pretty-print#pretty-print-width"));
lf[84]=C_h_intern(&lf[84],33, C_text("chicken.pretty-print#pretty-print"));
lf[85]=C_h_intern(&lf[85],21, C_text("##sys#standard-output"));
lf[86]=C_h_intern(&lf[86],14, C_text("scheme#display"));
lf[87]=C_h_intern(&lf[87],23, C_text("chicken.pretty-print#pp"));
lf[88]=C_h_intern(&lf[88],15, C_text("chicken.format#"));
lf[90]=C_h_intern(&lf[90],11, C_text("##sys#error"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\164\157\157\040\146\145\167\040\141\162\147\165\155\145\156\164\163\040\164\157\040\146\157\162\155\141\164\164\145\144\040\157\165\164\160\165\164\040\160\162\157\143\145\144\165\162\145\000"));
lf[92]=C_h_intern(&lf[92],12, C_text("scheme#write"));
lf[93]=C_h_intern(&lf[93],18, C_text("##sys#write-char-0"));
lf[94]=C_h_intern(&lf[94],18, C_text("##sys#flush-output"));
lf[95]=C_h_intern(&lf[95],14, C_text("scheme#newline"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\154\154\145\147\141\154\040\146\157\162\155\141\164\055\163\164\162\151\156\147\040\143\150\141\162\141\143\164\145\162\000"));
lf[97]=C_h_intern(&lf[97],15, C_text("##sys#tty-port?"));
lf[98]=C_h_intern(&lf[98],22, C_text("chicken.format#fprintf"));
lf[99]=C_h_intern(&lf[99],7, C_text("fprintf"));
lf[100]=C_h_intern(&lf[100],21, C_text("chicken.format#printf"));
lf[101]=C_h_intern(&lf[101],6, C_text("printf"));
lf[102]=C_h_intern(&lf[102],22, C_text("chicken.format#sprintf"));
lf[103]=C_h_intern(&lf[103],7, C_text("sprintf"));
lf[104]=C_h_intern(&lf[104],21, C_text("chicken.format#format"));
lf[105]=C_h_intern(&lf[105],6, C_text("format"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\154\154\145\147\141\154\040\144\145\163\164\151\156\141\164\151\157\156\000"));
lf[107]=C_h_intern(&lf[107],19, C_text("scheme#output-port?"));
lf[108]=C_h_intern(&lf[108],15, C_text("chicken.random#"));
lf[109]=C_h_intern(&lf[109],38, C_text("chicken.random#set-pseudo-random-seed!"));
lf[110]=C_h_intern(&lf[110],23, C_text("set-pseudo-random-seed!"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\163\151\172\145\000"));
lf[112]=C_h_intern(&lf[112],36, C_text("chicken.random#pseudo-random-integer"));
lf[113]=C_h_intern(&lf[113],21, C_text("pseudo-random-integer"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\000"));
lf[115]=C_h_intern(&lf[115],33, C_text("chicken.random#pseudo-random-real"));
lf[116]=C_h_intern(&lf[116],27, C_text("chicken.random#random-bytes"));
lf[117]=C_h_intern(&lf[117],12, C_text("random-bytes"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\165\156\141\142\154\145\040\164\157\040\162\145\141\144\040\162\141\156\144\157\155\040\142\171\164\145\163\000"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\142\165\146\146\145\162\040\164\171\160\145\000"));
lf[120]=C_h_intern(&lf[120],21, C_text("##sys#make-bytevector"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\163\151\172\145\000"));
lf[122]=C_h_intern(&lf[122],34, C_text("chicken.platform#register-feature!"));
lf[123]=C_h_intern(&lf[123],7, C_text("srfi-28"));
lf[124]=C_h_intern(&lf[124],21, C_text("scheme#make-parameter"));
C_register_lf2(lf,125,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_768,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[164] = {
{C_text("f_1001:extras_2escm"),(void*)f_1001},
{C_text("f_1053:extras_2escm"),(void*)f_1053},
{C_text("f_1057:extras_2escm"),(void*)f_1057},
{C_text("f_1083:extras_2escm"),(void*)f_1083},
{C_text("f_1089:extras_2escm"),(void*)f_1089},
{C_text("f_1095:extras_2escm"),(void*)f_1095},
{C_text("f_1098:extras_2escm"),(void*)f_1098},
{C_text("f_1105:extras_2escm"),(void*)f_1105},
{C_text("f_1118:extras_2escm"),(void*)f_1118},
{C_text("f_1137:extras_2escm"),(void*)f_1137},
{C_text("f_1139:extras_2escm"),(void*)f_1139},
{C_text("f_1167:extras_2escm"),(void*)f_1167},
{C_text("f_1171:extras_2escm"),(void*)f_1171},
{C_text("f_1175:extras_2escm"),(void*)f_1175},
{C_text("f_1198:extras_2escm"),(void*)f_1198},
{C_text("f_1203:extras_2escm"),(void*)f_1203},
{C_text("f_1204:extras_2escm"),(void*)f_1204},
{C_text("f_1222:extras_2escm"),(void*)f_1222},
{C_text("f_1226:extras_2escm"),(void*)f_1226},
{C_text("f_1235:extras_2escm"),(void*)f_1235},
{C_text("f_1253:extras_2escm"),(void*)f_1253},
{C_text("f_1257:extras_2escm"),(void*)f_1257},
{C_text("f_1280:extras_2escm"),(void*)f_1280},
{C_text("f_1288:extras_2escm"),(void*)f_1288},
{C_text("f_1291:extras_2escm"),(void*)f_1291},
{C_text("f_1295:extras_2escm"),(void*)f_1295},
{C_text("f_1303:extras_2escm"),(void*)f_1303},
{C_text("f_1322:extras_2escm"),(void*)f_1322},
{C_text("f_1326:extras_2escm"),(void*)f_1326},
{C_text("f_1335:extras_2escm"),(void*)f_1335},
{C_text("f_1368:extras_2escm"),(void*)f_1368},
{C_text("f_1377:extras_2escm"),(void*)f_1377},
{C_text("f_1380:extras_2escm"),(void*)f_1380},
{C_text("f_1387:extras_2escm"),(void*)f_1387},
{C_text("f_1393:extras_2escm"),(void*)f_1393},
{C_text("f_1400:extras_2escm"),(void*)f_1400},
{C_text("f_1410:extras_2escm"),(void*)f_1410},
{C_text("f_1417:extras_2escm"),(void*)f_1417},
{C_text("f_1427:extras_2escm"),(void*)f_1427},
{C_text("f_1431:extras_2escm"),(void*)f_1431},
{C_text("f_1435:extras_2escm"),(void*)f_1435},
{C_text("f_1443:extras_2escm"),(void*)f_1443},
{C_text("f_1446:extras_2escm"),(void*)f_1446},
{C_text("f_1470:extras_2escm"),(void*)f_1470},
{C_text("f_1477:extras_2escm"),(void*)f_1477},
{C_text("f_1479:extras_2escm"),(void*)f_1479},
{C_text("f_1495:extras_2escm"),(void*)f_1495},
{C_text("f_1502:extras_2escm"),(void*)f_1502},
{C_text("f_1513:extras_2escm"),(void*)f_1513},
{C_text("f_1526:extras_2escm"),(void*)f_1526},
{C_text("f_1529:extras_2escm"),(void*)f_1529},
{C_text("f_1542:extras_2escm"),(void*)f_1542},
{C_text("f_1558:extras_2escm"),(void*)f_1558},
{C_text("f_1562:extras_2escm"),(void*)f_1562},
{C_text("f_1564:extras_2escm"),(void*)f_1564},
{C_text("f_1600:extras_2escm"),(void*)f_1600},
{C_text("f_1607:extras_2escm"),(void*)f_1607},
{C_text("f_1618:extras_2escm"),(void*)f_1618},
{C_text("f_1634:extras_2escm"),(void*)f_1634},
{C_text("f_1660:extras_2escm"),(void*)f_1660},
{C_text("f_1665:extras_2escm"),(void*)f_1665},
{C_text("f_1669:extras_2escm"),(void*)f_1669},
{C_text("f_1689:extras_2escm"),(void*)f_1689},
{C_text("f_1691:extras_2escm"),(void*)f_1691},
{C_text("f_1695:extras_2escm"),(void*)f_1695},
{C_text("f_1700:extras_2escm"),(void*)f_1700},
{C_text("f_1706:extras_2escm"),(void*)f_1706},
{C_text("f_1727:extras_2escm"),(void*)f_1727},
{C_text("f_1733:extras_2escm"),(void*)f_1733},
{C_text("f_1755:extras_2escm"),(void*)f_1755},
{C_text("f_1759:extras_2escm"),(void*)f_1759},
{C_text("f_1767:extras_2escm"),(void*)f_1767},
{C_text("f_1771:extras_2escm"),(void*)f_1771},
{C_text("f_1773:extras_2escm"),(void*)f_1773},
{C_text("f_1776:extras_2escm"),(void*)f_1776},
{C_text("f_1797:extras_2escm"),(void*)f_1797},
{C_text("f_1801:extras_2escm"),(void*)f_1801},
{C_text("f_1815:extras_2escm"),(void*)f_1815},
{C_text("f_1836:extras_2escm"),(void*)f_1836},
{C_text("f_1840:extras_2escm"),(void*)f_1840},
{C_text("f_1854:extras_2escm"),(void*)f_1854},
{C_text("f_1865:extras_2escm"),(void*)f_1865},
{C_text("f_1878:extras_2escm"),(void*)f_1878},
{C_text("f_1893:extras_2escm"),(void*)f_1893},
{C_text("f_1911:extras_2escm"),(void*)f_1911},
{C_text("f_1913:extras_2escm"),(void*)f_1913},
{C_text("f_1919:extras_2escm"),(void*)f_1919},
{C_text("f_1925:extras_2escm"),(void*)f_1925},
{C_text("f_1931:extras_2escm"),(void*)f_1931},
{C_text("f_1937:extras_2escm"),(void*)f_1937},
{C_text("f_1943:extras_2escm"),(void*)f_1943},
{C_text("f_1949:extras_2escm"),(void*)f_1949},
{C_text("f_1969:extras_2escm"),(void*)f_1969},
{C_text("f_1975:extras_2escm"),(void*)f_1975},
{C_text("f_1984:extras_2escm"),(void*)f_1984},
{C_text("f_1994:extras_2escm"),(void*)f_1994},
{C_text("f_2110:extras_2escm"),(void*)f_2110},
{C_text("f_2114:extras_2escm"),(void*)f_2114},
{C_text("f_2123:extras_2escm"),(void*)f_2123},
{C_text("f_2125:extras_2escm"),(void*)f_2125},
{C_text("f_2132:extras_2escm"),(void*)f_2132},
{C_text("f_2136:extras_2escm"),(void*)f_2136},
{C_text("f_2138:extras_2escm"),(void*)f_2138},
{C_text("f_2142:extras_2escm"),(void*)f_2142},
{C_text("f_2149:extras_2escm"),(void*)f_2149},
{C_text("f_2156:extras_2escm"),(void*)f_2156},
{C_text("f_2159:extras_2escm"),(void*)f_2159},
{C_text("f_2181:extras_2escm"),(void*)f_2181},
{C_text("f_2187:extras_2escm"),(void*)f_2187},
{C_text("f_2194:extras_2escm"),(void*)f_2194},
{C_text("f_2204:extras_2escm"),(void*)f_2204},
{C_text("f_2223:extras_2escm"),(void*)f_2223},
{C_text("f_2236:extras_2escm"),(void*)f_2236},
{C_text("f_2261:extras_2escm"),(void*)f_2261},
{C_text("f_2274:extras_2escm"),(void*)f_2274},
{C_text("f_2287:extras_2escm"),(void*)f_2287},
{C_text("f_2300:extras_2escm"),(void*)f_2300},
{C_text("f_2304:extras_2escm"),(void*)f_2304},
{C_text("f_2317:extras_2escm"),(void*)f_2317},
{C_text("f_2321:extras_2escm"),(void*)f_2321},
{C_text("f_2334:extras_2escm"),(void*)f_2334},
{C_text("f_2338:extras_2escm"),(void*)f_2338},
{C_text("f_2356:extras_2escm"),(void*)f_2356},
{C_text("f_2359:extras_2escm"),(void*)f_2359},
{C_text("f_2365:extras_2escm"),(void*)f_2365},
{C_text("f_2401:extras_2escm"),(void*)f_2401},
{C_text("f_2459:extras_2escm"),(void*)f_2459},
{C_text("f_2470:extras_2escm"),(void*)f_2470},
{C_text("f_2476:extras_2escm"),(void*)f_2476},
{C_text("f_2482:extras_2escm"),(void*)f_2482},
{C_text("f_2488:extras_2escm"),(void*)f_2488},
{C_text("f_2496:extras_2escm"),(void*)f_2496},
{C_text("f_2521:extras_2escm"),(void*)f_2521},
{C_text("f_2531:extras_2escm"),(void*)f_2531},
{C_text("f_2533:extras_2escm"),(void*)f_2533},
{C_text("f_2540:extras_2escm"),(void*)f_2540},
{C_text("f_2569:extras_2escm"),(void*)f_2569},
{C_text("f_2585:extras_2escm"),(void*)f_2585},
{C_text("f_2588:extras_2escm"),(void*)f_2588},
{C_text("f_2604:extras_2escm"),(void*)f_2604},
{C_text("f_2607:extras_2escm"),(void*)f_2607},
{C_text("f_2614:extras_2escm"),(void*)f_2614},
{C_text("f_2623:extras_2escm"),(void*)f_2623},
{C_text("f_768:extras_2escm"),(void*)f_768},
{C_text("f_771:extras_2escm"),(void*)f_771},
{C_text("f_773:extras_2escm"),(void*)f_773},
{C_text("f_776:extras_2escm"),(void*)f_776},
{C_text("f_804:extras_2escm"),(void*)f_804},
{C_text("f_838:extras_2escm"),(void*)f_838},
{C_text("f_877:extras_2escm"),(void*)f_877},
{C_text("f_887:extras_2escm"),(void*)f_887},
{C_text("f_896:extras_2escm"),(void*)f_896},
{C_text("f_899:extras_2escm"),(void*)f_899},
{C_text("f_906:extras_2escm"),(void*)f_906},
{C_text("f_917:extras_2escm"),(void*)f_917},
{C_text("f_926:extras_2escm"),(void*)f_926},
{C_text("f_942:extras_2escm"),(void*)f_942},
{C_text("f_944:extras_2escm"),(void*)f_944},
{C_text("f_966:extras_2escm"),(void*)f_966},
{C_text("f_972:extras_2escm"),(void*)f_972},
{C_text("f_988:extras_2escm"),(void*)f_988},
{C_text("f_992:extras_2escm"),(void*)f_992},
{C_text("toplevel:extras_2escm"),(void*)C_extras_toplevel},
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
o|hiding unexported module binding: chicken.pretty-print#generic-write 
o|hiding unexported module binding: chicken.format#fprintf0 
o|eliminated procedure checks: 13 
o|specializations:
o|  1 (scheme#< fixnum fixnum)
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#string-length string)
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#current-output-port)
o|  4 (scheme#make-string fixnum char)
o|  2 (scheme#number->string fixnum fixnum)
o|  1 (scheme#assq * (list-of pair))
o|  1 (scheme#char>=? char char)
o|  1 (scheme#char<? char char)
o|  1 (scheme#+ fixnum fixnum)
o|  2 (scheme#char=? char char)
o|  5 (scheme#car pair)
o|  22 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  11 (scheme#cdr pair)
(o e)|safe calls: 202 
(o e)|assignments to immediate values: 6 
o|safe globals: (chicken.pretty-print#generic-write) 
o|inlining procedure: k796 
o|contracted procedure: "(extras.scm:56) length1?116" 
o|inlining procedure: k781 
o|inlining procedure: k781 
o|inlining procedure: k796 
o|inlining procedure: k811 
o|inlining procedure: k811 
o|substituted constant variable: a824 
o|substituted constant variable: a826 
o|substituted constant variable: a828 
o|substituted constant variable: a830 
o|inlining procedure: k844 
o|inlining procedure: k844 
o|inlining procedure: k856 
o|inlining procedure: k856 
o|substituted constant variable: a869 
o|substituted constant variable: a871 
o|substituted constant variable: a873 
o|substituted constant variable: a875 
o|inlining procedure: k879 
o|inlining procedure: k879 
o|inlining procedure: k901 
o|inlining procedure: "(extras.scm:77) read-macro-body110" 
o|inlining procedure: k901 
o|inlining procedure: k928 
o|inlining procedure: k946 
o|inlining procedure: k946 
o|inlining procedure: k973 
o|inlining procedure: k973 
o|inlining procedure: k928 
o|inlining procedure: k1005 
o|inlining procedure: k1005 
o|inlining procedure: k1023 
o|inlining procedure: k1023 
o|inlining procedure: k1041 
o|inlining procedure: k1041 
o|inlining procedure: k1068 
o|inlining procedure: k1068 
o|inlining procedure: k1071 
o|inlining procedure: k1071 
o|inlining procedure: k1106 
o|inlining procedure: k1106 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|inlining procedure: k1141 
o|substituted constant variable: a1154 
o|substituted constant variable: a1163 
o|substituted constant variable: a1180 
o|inlining procedure: k1176 
o|substituted constant variable: a1200 
o|inlining procedure: k1201 
o|inlining procedure: k1201 
o|substituted constant variable: a1231 
o|inlining procedure: k1176 
o|substituted constant variable: a1244 
o|substituted constant variable: a1246 
o|inlining procedure: k1141 
o|inlining procedure: k1265 
o|substituted constant variable: a1281 
o|inlining procedure: k1292 
o|inlining procedure: k1292 
o|substituted constant variable: a1328 
o|substituted constant variable: a1336 
o|inlining procedure: k1265 
o|inlining procedure: k1347 
o|inlining procedure: k1347 
o|inlining procedure: k1359 
o|inlining procedure: k1359 
o|inlining procedure: k1388 
o|inlining procedure: k1388 
o|inlining procedure: k1418 
o|inlining procedure: k1418 
o|inlining procedure: k1448 
o|inlining procedure: k1448 
o|inlining procedure: k1481 
o|inlining procedure: k1490 
o|inlining procedure: k1490 
o|substituted constant variable: a1503 
o|substituted constant variable: a1504 
o|inlining procedure: k1481 
o|inlining procedure: k1515 
o|inlining procedure: k1543 
o|inlining procedure: k1543 
o|substituted constant variable: max-expr-width244 
o|inlining procedure: k1515 
o|inlining procedure: k1602 
o|inlining procedure: "(extras.scm:204) read-macro-body110" 
o|inlining procedure: k1602 
o|inlining procedure: k1635 
o|inlining procedure: k1635 
o|substituted constant variable: max-call-head-width243 
o|inlining procedure: k1670 
o|inlining procedure: k1670 
o|inlining procedure: k1708 
o|inlining procedure: k1740 
o|inlining procedure: k1740 
o|inlining procedure: k1708 
o|inlining procedure: k1778 
o|inlining procedure: k1778 
o|inlining procedure: k1817 
o|inlining procedure: k1817 
o|inlining procedure: k1866 
o|substituted constant variable: indent-general242 
o|inlining procedure: k1866 
o|substituted constant variable: indent-general242 
o|inlining procedure: k1986 
o|inlining procedure: k1986 
o|inlining procedure: k2004 
o|inlining procedure: k2004 
o|inlining procedure: k2016 
o|inlining procedure: k2016 
o|inlining procedure: k2031 
o|inlining procedure: k2031 
o|substituted constant variable: a2044 
o|substituted constant variable: a2046 
o|substituted constant variable: a2048 
o|substituted constant variable: a2053 
o|substituted constant variable: a2055 
o|substituted constant variable: a2057 
o|substituted constant variable: a2059 
o|substituted constant variable: a2064 
o|substituted constant variable: a2066 
o|inlining procedure: k2070 
o|inlining procedure: k2070 
o|inlining procedure: k2082 
o|inlining procedure: k2082 
o|substituted constant variable: a2089 
o|substituted constant variable: a2091 
o|substituted constant variable: a2093 
o|substituted constant variable: a2095 
o|substituted constant variable: a2097 
o|inlining procedure: k2101 
o|substituted constant variable: a2115 
o|substituted constant variable: a2116 
o|inlining procedure: k2101 
o|inlining procedure: k2160 
o|inlining procedure: k2160 
o|inlining procedure: k2206 
o|inlining procedure: k2206 
o|inlining procedure: k2225 
o|inlining procedure: k2225 
o|inlining procedure: k2249 
o|inlining procedure: k2249 
o|inlining procedure: k2275 
o|inlining procedure: k2275 
o|inlining procedure: k2305 
o|inlining procedure: k2305 
o|inlining procedure: k2339 
o|inlining procedure: k2339 
o|inlining procedure: k2366 
o|inlining procedure: k2366 
o|inlining procedure: k2387 
o|inlining procedure: k2403 
o|inlining procedure: k2403 
o|inlining procedure: k2387 
o|substituted constant variable: a2427 
o|substituted constant variable: a2429 
o|substituted constant variable: a2431 
o|substituted constant variable: a2433 
o|substituted constant variable: a2435 
o|substituted constant variable: a2437 
o|substituted constant variable: a2439 
o|substituted constant variable: a2441 
o|substituted constant variable: a2443 
o|substituted constant variable: a2445 
o|substituted constant variable: a2447 
o|substituted constant variable: a2467 
o|inlining procedure: k2494 
o|propagated global variable: r24952808 chicken.format#sprintf 
o|inlining procedure: k2494 
o|inlining procedure: k2506 
o|propagated global variable: r25072812 chicken.format#sprintf 
o|inlining procedure: k2506 
o|inlining procedure: k2552 
o|inlining procedure: k2552 
o|inlining procedure: k2571 
o|inlining procedure: k2571 
o|inlining procedure: k2612 
o|inlining procedure: k2612 
o|inlining procedure: k2621 
o|inlining procedure: k2621 
o|inlining procedure: k2641 
o|inlining procedure: k2641 
o|inlining procedure: k2647 
o|inlining procedure: k2647 
o|substituted constant variable: a2657 
o|replaced variables: 608 
o|removed binding forms: 99 
o|substituted constant variable: r7822684 
o|substituted constant variable: r7972685 
o|removed side-effect free assignment to unused variable: read-macro-body110 
o|substituted constant variable: r8452688 
o|substituted constant variable: r8572690 
o|substituted constant variable: r8802693 
o|substituted constant variable: r10692713 
o|substituted constant variable: r10692713 
o|substituted constant variable: r10692715 
o|substituted constant variable: r10692715 
o|substituted constant variable: r14912747 
o|substituted constant variable: r14822748 
o|substituted constant variable: r16712763 
o|substituted constant variable: r17092767 
o|removed side-effect free assignment to unused variable: indent-general242 
o|removed side-effect free assignment to unused variable: max-call-head-width243 
o|removed side-effect free assignment to unused variable: max-expr-width244 
o|inlining procedure: k2234 
o|propagated global variable: a24932809 chicken.format#sprintf 
o|inlining procedure: k2494 
o|propagated global variable: r24952859 chicken.format#printf 
o|propagated global variable: r24952859 chicken.format#printf 
o|inlining procedure: k2494 
o|propagated global variable: r24952861 chicken.format#sprintf 
o|propagated global variable: r24952861 chicken.format#sprintf 
o|inlining procedure: k2494 
o|propagated global variable: r24952863 chicken.format#fprintf 
o|propagated global variable: r24952863 chicken.format#fprintf 
o|replaced variables: 25 
o|removed binding forms: 508 
o|inlining procedure: k1954 
o|inlining procedure: k2457 
o|removed binding forms: 55 
o|substituted constant variable: r19552871 
o|substituted constant variable: r24582878 
o|inlining procedure: k2627 
o|removed conditional forms: 1 
o|replaced variables: 1 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|simplifications: ((if . 28) (let . 6) (##core#call . 161)) 
o|  call simplifications:
o|    ##sys#immediate?
o|    ##sys#check-fixnum	2
o|    ##sys#check-bytevector
o|    ##sys#size	3
o|    scheme#apply	5
o|    ##sys#check-string
o|    chicken.fixnum#fx>=
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    chicken.fixnum#fx-
o|    ##sys#check-list
o|    scheme#cons	3
o|    scheme#<
o|    scheme#>	5
o|    scheme#-	5
o|    scheme#eof-object?
o|    chicken.base#bwp-object?
o|    scheme#vector?	2
o|    scheme#boolean?	2
o|    scheme#number?
o|    scheme#symbol?	3
o|    scheme#procedure?
o|    scheme#string?	2
o|    scheme#char?
o|    ##sys#generic-structure?
o|    ##sys#slot	3
o|    chicken.fixnum#fx>
o|    chicken.fixnum#fx<	4
o|    scheme#string-ref	2
o|    chicken.fixnum#fx+	4
o|    scheme#char->integer	2
o|    scheme#cdr	4
o|    scheme#not	6
o|    scheme#cadr	2
o|    scheme#string-length	4
o|    scheme#+	11
o|    scheme#car	11
o|    scheme#eq?	35
o|    scheme#pair?	12
o|    scheme#null?	12
o|contracted procedure: k792 
o|contracted procedure: k799 
o|contracted procedure: k784 
o|contracted procedure: k808 
o|contracted procedure: k814 
o|contracted procedure: k840 
o|contracted procedure: k847 
o|contracted procedure: k853 
o|contracted procedure: k859 
o|contracted procedure: k865 
o|contracted procedure: k892 
o|contracted procedure: k911 
o|contracted procedure: k931 
o|contracted procedure: k949 
o|contracted procedure: k955 
o|contracted procedure: k976 
o|contracted procedure: k1008 
o|contracted procedure: k1017 
o|contracted procedure: k1026 
o|contracted procedure: k1035 
o|contracted procedure: k1044 
o|contracted procedure: k1061 
o|contracted procedure: k1074 
o|contracted procedure: k1090 
o|contracted procedure: k1109 
o|contracted procedure: k1122 
o|contracted procedure: k1147 
o|contracted procedure: k1155 
o|contracted procedure: k1181 
o|contracted procedure: k1188 
o|contracted procedure: k1192 
o|contracted procedure: k1210 
o|contracted procedure: k1228 
o|contracted procedure: k1240 
o|contracted procedure: k1262 
o|contracted procedure: k1268 
o|contracted procedure: k1283 
o|contracted procedure: k1310 
o|contracted procedure: k1313 
o|contracted procedure: k1372 
o|contracted procedure: k1402 
o|contracted procedure: k1451 
o|contracted procedure: k1457 
o|contracted procedure: k1464 
o|contracted procedure: k1487 
o|contracted procedure: k1509 
o|contracted procedure: k1518 
o|contracted procedure: k1521 
o|contracted procedure: k1533 
o|contracted procedure: k1546 
o|contracted procedure: k1567 
o|contracted procedure: k1578 
o|contracted procedure: k1571 
o|contracted procedure: k1590 
o|contracted procedure: k1586 
o|contracted procedure: k1582 
o|contracted procedure: k1612 
o|contracted procedure: k1623 
o|contracted procedure: k1629 
o|contracted procedure: k1654 
o|contracted procedure: k1644 
o|contracted procedure: k1679 
o|contracted procedure: k1683 
o|contracted procedure: k1714 
o|contracted procedure: k1734 
o|contracted procedure: k1718 
o|contracted procedure: k1743 
o|contracted procedure: k1761 
o|contracted procedure: k1781 
o|contracted procedure: k1784 
o|contracted procedure: k1802 
o|contracted procedure: k1788 
o|contracted procedure: k1820 
o|contracted procedure: k1823 
o|contracted procedure: k1841 
o|contracted procedure: k1827 
o|contracted procedure: k1859 
o|contracted procedure: k1869 
o|contracted procedure: k1872 
o|contracted procedure: k1883 
o|contracted procedure: k1887 
o|contracted procedure: k1898 
o|contracted procedure: k1902 
o|contracted procedure: k1951 
o|contracted procedure: k1960 
o|contracted procedure: k1954 
o|contracted procedure: k1989 
o|contracted procedure: k1998 
o|contracted procedure: k2001 
o|contracted procedure: k2007 
o|contracted procedure: k2013 
o|contracted procedure: k2019 
o|contracted procedure: k2022 
o|contracted procedure: k2028 
o|contracted procedure: k2034 
o|contracted procedure: k2040 
o|contracted procedure: k2067 
o|contracted procedure: k2073 
o|contracted procedure: k2079 
o|contracted procedure: k2143 
o|contracted procedure: k2127 
o|contracted procedure: k2151 
o|contracted procedure: k2163 
o|contracted procedure: k2183 
o|contracted procedure: k2172 
o|contracted procedure: k2189 
o|contracted procedure: k2196 
o|contracted procedure: k2200 
o|contracted procedure: k2212 
o|contracted procedure: k2216 
o|contracted procedure: k2228 
o|contracted procedure: k2451 
o|contracted procedure: k2240 
o|contracted procedure: k2246 
o|contracted procedure: k2252 
o|contracted procedure: k2265 
o|contracted procedure: k2278 
o|contracted procedure: k2291 
o|contracted procedure: k2308 
o|contracted procedure: k2325 
o|contracted procedure: k2342 
o|contracted procedure: k2351 
o|contracted procedure: k2360 
o|contracted procedure: k2369 
o|contracted procedure: k2378 
o|contracted procedure: k2381 
o|contracted procedure: k2390 
o|contracted procedure: k2406 
o|contracted procedure: k2417 
o|contracted procedure: k2497 
o|contracted procedure: k2503 
o|contracted procedure: k2509 
o|contracted procedure: k2513 
o|contracted procedure: k2523 
o|contracted procedure: k2562 
o|contracted procedure: k2535 
o|contracted procedure: k2541 
o|contracted procedure: k2546 
o|contracted procedure: k2549 
o|contracted procedure: k2559 
o|contracted procedure: k2577 
o|contracted procedure: k2676 
o|contracted procedure: k2590 
o|contracted procedure: k2670 
o|contracted procedure: k2593 
o|contracted procedure: k2664 
o|contracted procedure: k2596 
o|contracted procedure: k2658 
o|contracted procedure: k2599 
o|contracted procedure: k2609 
o|contracted procedure: k2624 
o|contracted procedure: k2627 
o|contracted procedure: k2644 
o|contracted procedure: k2650 
o|simplifications: ((if . 1) (let . 50)) 
o|removed binding forms: 154 
o|contracted procedure: k1144 
(o x)|known list op on rest arg sublist: ##core#rest-car opt421 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest569571 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest569571 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest596597 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest596597 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest596597 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest596597 0 
o|removed binding forms: 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2594 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2594 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2594 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2594 1 
o|removed binding forms: 2 
o|direct leaf routine/allocation: read-macro-prefix111 0 
o|direct leaf routine/allocation: fetch469 0 
o|contracted procedure: "(extras.scm:77) k919" 
o|contracted procedure: "(extras.scm:205) k1620" 
o|contracted procedure: "(extras.scm:380) k2231" 
o|contracted procedure: "(extras.scm:382) k2243" 
o|contracted procedure: "(extras.scm:400) k2397" 
o|contracted procedure: "(extras.scm:402) k2413" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip492 0 
o|inlining procedure: k2234 
o|converted assignments to bindings: (skip492) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (chicken.format#fprintf0 rec464 next470 loop475 pp114 k1992 tail1304 tail3306 tail2305 indent226 loop286 pp-down231 style245 pp-call229 pp-general232 pr227 chicken.pretty-print#generic-write pp-list230 spaces225 g212213 g200201 loop177 wr-expr157 loop163 read-macro?109 wr-lst158 out112 wr113 k802) 
o|calls to known targets: 155 
o|identified direct recursive calls: f_1139 1 
o|identified direct recursive calls: f_2401 1 
o|identified direct recursive calls: f_2223 1 
o|unused rest argument: rest569571 f_2533 
o|unused rest argument: rest596597 f_2588 
o|fast box initializations: 35 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2149 
o|dropping unused closure argument: f_773 
o|dropping unused closure argument: f_776 
o|dropping unused closure argument: f_838 
*/
/* end of file */
