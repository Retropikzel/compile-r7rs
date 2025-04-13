/* Generated from pathname.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: pathname.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file pathname.c -emit-import-library chicken.pathname
   unit: pathname
   uses: data-structures irregex library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_extern void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[76];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,41};
static C_char li1[] C_aligned={C_lihdr(0,0,8),40,108,112,32,108,101,110,41};
static C_char li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,99,104,111,112,45,112,100,115,32,115,116,114,41,0};
static C_char li3[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,116,114,115,41,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,41};
static C_char li5[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,41};
static C_char li6[] C_aligned={C_lihdr(0,0,33),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,32,100,105,114,32,102,105,108,101,32,101,120,116,41,0,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,15),40,115,116,114,105,112,45,112,100,115,32,100,105,114,41,0};
static C_char li10[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,41};
static C_char li11[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,57,41,0};
static C_char li12[] C_aligned={C_lihdr(0,0,29),40,97,49,48,50,53,32,100,105,114,50,51,52,32,102,105,108,101,50,51,54,32,101,120,116,50,51,56,41,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,41};
static C_char li14[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,52,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,29),40,97,49,48,52,48,32,100,105,114,50,52,56,32,102,105,108,101,50,53,48,32,101,120,116,50,53,50,41,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,41,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,57,41,0};
static C_char li18[] C_aligned={C_lihdr(0,0,29),40,97,49,48,53,53,32,100,105,114,50,54,50,32,102,105,108,101,50,54,52,32,101,120,116,50,54,54,41,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,41};
static C_char li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,52,41,0};
static C_char li21[] C_aligned={C_lihdr(0,0,29),40,97,49,48,55,48,32,100,105,114,50,55,54,32,102,105,108,101,50,55,56,32,101,120,116,50,56,48,41,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,7),40,97,49,48,56,50,41,0};
static C_char li24[] C_aligned={C_lihdr(0,0,29),40,97,49,48,56,56,32,100,105,114,50,57,48,32,102,105,108,101,50,57,50,32,101,120,116,50,57,52,41,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,7),40,97,49,49,48,48,41,0};
static C_char li27[] C_aligned={C_lihdr(0,0,27),40,97,49,49,48,54,32,95,51,48,53,32,102,105,108,101,51,48,55,32,101,120,116,51,48,57,41,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,32,100,105,114,41,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,56,41,0};
static C_char li30[] C_aligned={C_lihdr(0,0,26),40,97,49,49,50,52,32,100,105,114,51,50,48,32,95,51,50,50,32,101,120,116,51,50,52,41,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,32,102,105,108,101,41};
static C_char li32[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,54,41,0};
static C_char li33[] C_aligned={C_lihdr(0,0,27),40,97,49,49,52,50,32,100,105,114,51,51,53,32,102,105,108,101,51,51,55,32,95,51,51,57,41,0,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,32,101,120,116,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,15),40,97,100,100,112,97,114,116,32,112,97,114,116,115,41,0};
static C_char li36[] C_aligned={C_lihdr(0,0,6),40,112,100,115,63,41,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,8),40,103,51,57,48,32,112,41};
static C_char li38[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,56,57,32,103,51,57,54,41,0};
static C_char li39[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,105,32,112,114,101,118,32,112,97,114,116,115,41,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,32,100,105,114,32,107,101,101,112,63,41};
static C_char li42[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,41,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,41,0,0,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word *av) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word *av) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word *av) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word *av) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word *av) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word *av) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word *av) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word *av) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065(C_word c,C_word *av) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word *av) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word *av) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word *av) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word *av) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word *av) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word *av) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word *av) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word *av) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word *av) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word *av) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word *av) C_noret;
C_noret_decl(f_1153)
static C_word f_1153(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word *av) C_noret;
C_noret_decl(f_1197)
static C_word f_1197(C_word t0,C_word t1);
C_noret_decl(f_1218)
static void f_1218(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1228)
static void f_1228(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word *av) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word *av) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word *av) C_noret;
C_noret_decl(f_1259)
static void f_1259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1273)
static void C_ccall f_1273(C_word c,C_word *av) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word *av) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word *av) C_noret;
C_noret_decl(f_1282)
static void f_1282(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word *av) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word *av) C_noret;
C_noret_decl(f_1308)
static void f_1308(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word *av) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word *av) C_noret;
C_noret_decl(f_1353)
static void f_1353(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word *av) C_noret;
C_noret_decl(f_1405)
static void f_1405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word *av) C_noret;
C_noret_decl(f_1459)
static void f_1459(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word *av) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static C_word f_1482(C_word t0);
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word *av) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word *av) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word *av) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word *av) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word *av) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word *av) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word *av) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word *av) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word *av) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602(C_word c,C_word *av) C_noret;
C_noret_decl(f_605)
static void C_ccall f_605(C_word c,C_word *av) C_noret;
C_noret_decl(f_608)
static void C_ccall f_608(C_word c,C_word *av) C_noret;
C_noret_decl(f_614)
static void f_614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word *av) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word *av) C_noret;
C_noret_decl(f_629)
static void f_629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_642)
static void f_642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_649)
static void f_649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void f_700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_709)
static void f_709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word *av) C_noret;
C_noret_decl(f_751)
static void f_751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_782)
static void f_782(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word *av) C_noret;
C_noret_decl(f_812)
static void f_812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_828)
static void f_828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word *av) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word *av) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word *av) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word *av) C_noret;
C_noret_decl(f_923)
static void f_923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word *av) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word *av) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word *av) C_noret;
C_noret_decl(f_970)
static void C_ccall f_970(C_word c,C_word *av) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word *av) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word *av) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word *av) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1218)
static void C_ccall trf_1218(C_word c,C_word *av) C_noret;
static void C_ccall trf_1218(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1218(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1228)
static void C_ccall trf_1228(C_word c,C_word *av) C_noret;
static void C_ccall trf_1228(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1228(t0,t1);}

C_noret_decl(trf_1259)
static void C_ccall trf_1259(C_word c,C_word *av) C_noret;
static void C_ccall trf_1259(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1259(t0,t1,t2);}

C_noret_decl(trf_1282)
static void C_ccall trf_1282(C_word c,C_word *av) C_noret;
static void C_ccall trf_1282(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1282(t0,t1);}

C_noret_decl(trf_1308)
static void C_ccall trf_1308(C_word c,C_word *av) C_noret;
static void C_ccall trf_1308(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1308(t0,t1,t2);}

C_noret_decl(trf_1353)
static void C_ccall trf_1353(C_word c,C_word *av) C_noret;
static void C_ccall trf_1353(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1353(t0,t1);}

C_noret_decl(trf_1405)
static void C_ccall trf_1405(C_word c,C_word *av) C_noret;
static void C_ccall trf_1405(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1405(t0,t1);}

C_noret_decl(trf_1459)
static void C_ccall trf_1459(C_word c,C_word *av) C_noret;
static void C_ccall trf_1459(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1459(t0,t1,t2,t3);}

C_noret_decl(trf_614)
static void C_ccall trf_614(C_word c,C_word *av) C_noret;
static void C_ccall trf_614(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_614(t0,t1);}

C_noret_decl(trf_629)
static void C_ccall trf_629(C_word c,C_word *av) C_noret;
static void C_ccall trf_629(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_629(t0,t1);}

C_noret_decl(trf_642)
static void C_ccall trf_642(C_word c,C_word *av) C_noret;
static void C_ccall trf_642(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_642(t0,t1,t2);}

C_noret_decl(trf_649)
static void C_ccall trf_649(C_word c,C_word *av) C_noret;
static void C_ccall trf_649(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_649(t0,t1);}

C_noret_decl(trf_700)
static void C_ccall trf_700(C_word c,C_word *av) C_noret;
static void C_ccall trf_700(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_700(t0,t1,t2);}

C_noret_decl(trf_709)
static void C_ccall trf_709(C_word c,C_word *av) C_noret;
static void C_ccall trf_709(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_709(t0,t1,t2);}

C_noret_decl(trf_751)
static void C_ccall trf_751(C_word c,C_word *av) C_noret;
static void C_ccall trf_751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_751(t0,t1,t2);}

C_noret_decl(trf_782)
static void C_ccall trf_782(C_word c,C_word *av) C_noret;
static void C_ccall trf_782(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_782(t0,t1,t2,t3,t4);}

C_noret_decl(trf_812)
static void C_ccall trf_812(C_word c,C_word *av) C_noret;
static void C_ccall trf_812(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_812(t0,t1);}

C_noret_decl(trf_828)
static void C_ccall trf_828(C_word c,C_word *av) C_noret;
static void C_ccall trf_828(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_828(t0,t1);}

C_noret_decl(trf_923)
static void C_ccall trf_923(C_word c,C_word *av) C_noret;
static void C_ccall trf_923(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_923(t0,t1);}

/* k1001 in k983 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1003,c,av);}
/* pathname.scm:185: strip-pds */
f_923(((C_word*)t0)[3],t1);}

/* k1008 in k983 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1010,c,av);}
/* pathname.scm:188: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* chicken.pathname#pathname-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1014,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1020,a[2]=t2,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1026,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:192: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1019 in chicken.pathname#pathname-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1020,c,av);}
/* pathname.scm:192: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1025 in chicken.pathname#pathname-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1026,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-file in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1029,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1035,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1041,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:197: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1034 in chicken.pathname#pathname-file in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1035,c,av);}
/* pathname.scm:197: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1040 in chicken.pathname#pathname-file in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1041,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1044,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1050,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1056,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:202: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1049 in chicken.pathname#pathname-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1050,c,av);}
/* pathname.scm:202: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1055 in chicken.pathname#pathname-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1056,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-strip-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1059,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1065,a[2]=t2,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1071,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:207: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1064 in chicken.pathname#pathname-strip-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1065,c,av);}
/* pathname.scm:207: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1070 in chicken.pathname#pathname-strip-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1071,c,av);}
/* pathname.scm:208: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-strip-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1077,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1083,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1089,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:212: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1082 in chicken.pathname#pathname-strip-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1083,c,av);}
/* pathname.scm:212: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1088 in chicken.pathname#pathname-strip-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1089,c,av);}
/* pathname.scm:213: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.pathname#pathname-replace-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1095(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1095,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1101,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1107,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:217: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1100 in chicken.pathname#pathname-replace-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1101,c,av);}
/* pathname.scm:217: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1106 in chicken.pathname#pathname-replace-directory in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1107,c,av);}
/* pathname.scm:218: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-file in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1113(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1113,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1119,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1125,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:222: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1118 in chicken.pathname#pathname-replace-file in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1119,c,av);}
/* pathname.scm:222: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1124 in chicken.pathname#pathname-replace-file in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1125,c,av);}
/* pathname.scm:223: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1131(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1131,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1137,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1143,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:227: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1136 in chicken.pathname#pathname-replace-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1137,c,av);}
/* pathname.scm:227: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1142 in chicken.pathname#pathname-replace-extension in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1143,c,av);}
/* pathname.scm:228: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* addpart in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static C_word f_1153(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
if(C_truep(C_i_string_equal_p(lf[46],t1))){
return(t2);}
else{
if(C_truep(C_i_string_equal_p(lf[47],t1))){
t3=C_i_nullp(t2);
if(C_truep(t3)){
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(lf[48],t4);
return((C_truep(t5)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1188(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_1188,c,av);}
a=C_alloc(22);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_get_rest_arg(c,3,av,3,t0));
t5=C_eqp(t4,lf[44]);
t6=(C_truep(t5)?C_make_character(92):C_make_character(47));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1197,a[2]=t4,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_string_2(t2,lf[51]);
t9=C_u_i_string_length(t2);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1218,a[2]=t9,a[3]=t11,a[4]=t6,a[5]=t13,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=t7,a[9]=t15,a[10]=t4,a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp));
t17=((C_word*)t15)[1];
f_1218(t17,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* pds? in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static C_word f_1197(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_eqp(((C_word*)t0)[2],lf[44]);
return((C_truep(t2)?C_u_i_memq(t1,lf[50]):C_eqp(t1,C_make_character(47))));}

/* loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1218(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_1218,5,t0,t1,t2,t3,t4);}
a=C_alloc(16);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1228,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:255: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t7=t6;
f_1228(t7,C_SCHEME_UNDEFINED);}}
else{
t6=(
/* pathname.scm:274: pds? */
  f_1197(((C_word*)t0)[8],C_i_string_ref(((C_word*)t0)[7],t2))
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1353,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[3])[1]))){
t8=C_eqp(t2,t3);
if(C_truep(t8)){
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[52]);
t10=t7;
f_1353(t10,t9);}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[60]);
t10=t7;
f_1353(t10,t9);}}
else{
t8=t7;
f_1353(t8,C_SCHEME_UNDEFINED);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[9],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=C_i_string_ref(((C_word*)t0)[7],t2);
t9=t7;
f_1405(t9,(C_truep(C_u_i_char_equalp(t8,C_make_character(58)))?C_eqp(((C_word*)t0)[10],lf[44]):C_SCHEME_FALSE));}
else{
t8=t7;
f_1405(t8,C_SCHEME_FALSE);}}}}

/* k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1228,2,t0,t1);}
a=C_alloc(9);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[52]);
if(C_truep(t2)){
t3=C_a_i_string(&a,1,((C_word*)t0)[4]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* pathname.scm:258: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=lf[53];
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* pathname.scm:258: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1252,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:259: scheme#open-output-string */
t3=*((C_word*)lf[59]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1252,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1255,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:260: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
tp(3,av2);}}

/* k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1255,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* pathname.scm:261: scheme#display */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(t1);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1258(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1258,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
t4=C_i_check_list_2(t3,lf[56]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1273,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1308,a[2]=t7,a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1308(t9,t5,t3);}

/* g390 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1259(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1259,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1263,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:264: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k1261 in g390 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1263,c,av);}
/* pathname.scm:265: scheme#display */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1271 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1273,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],((C_word*)t0)[8]);
if(C_truep(t3)){
/* pathname.scm:267: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1276(2,av2);}}}

/* k1274 in k1271 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1276,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:268: scheme#get-output-string */
t3=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1277 in k1274 in k1271 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1279(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_1279,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1282,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[52]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1296,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_string(&a,1,((C_word*)t0)[5]);
/* pathname.scm:270: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t3)[1];
tp(4,av2);}}
else{
t6=t4;
f_1282(t6,C_SCHEME_UNDEFINED);}}

/* k1280 in k1277 in k1274 in k1271 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1282(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1282,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:272: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1287 in k1280 in k1277 in k1274 in k1271 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1289,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1294 in k1277 in k1274 in k1271 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1296,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1282(t3,t2);}

/* for-each-loop389 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1308(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1308,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:262: g390 */
t4=((C_word*)t0)[3];
f_1259(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1316 in for-each-loop389 in k1256 in k1253 in k1250 in k1226 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1318,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1308(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k1342 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1344,c,av);}
a=C_alloc(9);
t2=(
/* pathname.scm:255: addpart */
  f_1153(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1228(t4,t3);}

/* k1351 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1353(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1353,2,t0,t1);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
/* pathname.scm:278: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1218(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[2],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)),((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1389,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* pathname.scm:281: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1387 in k1351 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1389,c,av);}
a=C_alloc(9);
t2=(
/* pathname.scm:281: addpart */
  f_1153(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
/* pathname.scm:279: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1218(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* k1403 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1405,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:285: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
tp(5,av2);}}
else{
/* pathname.scm:287: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1218(t2,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* k1407 in k1403 in loop in chicken.pathname#normalize-pathname in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1409,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* pathname.scm:286: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1218(t3,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_SCHEME_END_OF_LIST);}

/* chicken.pathname#split-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_1459(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1459,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t3,t2);
if(C_truep(*((C_word*)lf[10]+1))){
/* pathname.scm:295: chicken.string#string-split */
t6=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[63];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* pathname.scm:295: chicken.string#string-split */
t6=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[64];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.pathname#directory-null? in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1472,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1480,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_1480(2,av2);}}
else{
/* pathname.scm:301: split-directory */
f_1459(t3,lf[68],t2,C_SCHEME_TRUE);}}

/* k1478 in chicken.pathname#directory-null? in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1480,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1482(t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k1478 in chicken.pathname#directory-null? in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static C_word f_1482(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[66]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[67]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.pathname#decompose-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1512,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1555,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:327: split-directory */
f_1459(t3,lf[70],t2,C_SCHEME_FALSE);}

/* k1549 in k1566 in k1559 in k1556 in k1553 in chicken.pathname#decompose-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1551,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* pathname.scm:330: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
C_values(5,av2);}}

/* k1553 in chicken.pathname#decompose-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1555,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1558,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:328: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[2];
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k1556 in k1553 in chicken.pathname#decompose-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1558,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:329: root-origin */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[3];
av2[1]=t2;
av2[2]=t1;
tp(3,av2);}}

/* k1559 in k1556 in k1553 in chicken.pathname#decompose-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1561,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:330: root-directory */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[4]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[4];
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1566 in k1559 in k1556 in k1553 in chicken.pathname#decompose-directory in k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1568(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1568,c,av);}
a=C_alloc(6);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_SCHEME_FALSE);
if(C_truep(C_i_not(((C_word*)t0)[3]))){
/* pathname.scm:330: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t4;
C_values(5,av2);}}
else{
t5=C_i_car(t4);
t6=C_i_string_length(((C_word*)t0)[3]);
if(C_truep(C_i_not(C_u_i_substring_equal_p(((C_word*)t0)[3],t5,C_fix(0),C_fix(0),t6)))){
/* pathname.scm:330: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t4;
C_values(5,av2);}}
else{
t7=C_u_i_cdr(t4);
t8=C_i_string_length(t5);
t9=C_eqp(t6,t8);
if(C_truep(t9)){
/* pathname.scm:330: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t7;
C_values(5,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1551,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:326: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t10;
av2[2]=t5;
av2[3]=t6;
av2[4]=t8;
tp(5,av2);}}}}}

/* k1588 in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_1590(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_1590,c,av);}
a=C_alloc(17);
t2=C_eqp(t1,lf[43]);
t3=(C_truep(t2)?lf[44]:lf[45]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1153,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[49]+1 /* (set! chicken.pathname#normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1188,a[2]=t3,a[3]=t4,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate(&lf[61] /* (set! chicken.pathname#split-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1459,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[65]+1 /* (set! chicken.pathname#directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1472,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[69]+1 /* (set! chicken.pathname#decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k1591 in k606 in k603 in k600 */
static void C_ccall f_1593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1593,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1595,a[2]=t1,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1610,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_614(t5,t4);}

/* chicken.pathname#absolute-pathname-root in k1591 in k606 in k603 in k600 */
static void C_ccall f_1595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1595,c,av);}
/* pathname.scm:73: chicken.irregex#irregex-match */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.pathname#root-origin in k1591 in k606 in k603 in k600 */
static void C_ccall f_1601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1601,c,av);}
if(C_truep(t2)){
/* pathname.scm:74: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.pathname#root-directory in k1591 in k606 in k603 in k600 */
static void C_ccall f_1610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1610,c,av);}
if(C_truep(t2)){
/* pathname.scm:75: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1618 in k606 in k603 in k600 */
static void C_ccall f_1620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1620,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1622,a[2]=t1,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_614(t5,t4);}

/* chicken.pathname#absolute-pathname-root in k1618 in k606 in k603 in k600 */
static void C_ccall f_1622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1622,c,av);}
/* pathname.scm:77: chicken.irregex#irregex-match */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.pathname#root-origin in k1618 in k606 in k603 in k600 */
static void C_ccall f_1628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1628,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.pathname#root-directory in k1618 in k606 in k603 in k600 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1631,c,av);}
if(C_truep(t2)){
/* pathname.scm:79: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k600 */
static void C_ccall f_602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_602,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k603 in k600 */
static void C_ccall f_605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_605,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k606 in k603 in k600 */
static void C_ccall f_608(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_608,c,av);}
a=C_alloc(6);
t2=lf[2] /* chicken.pathname#absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t3=lf[3] /* chicken.pathname#root-origin */ =C_SCHEME_UNDEFINED;;
t4=lf[4] /* chicken.pathname#root-directory */ =C_SCHEME_UNDEFINED;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[10]+1))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:72: chicken.irregex#irregex */
t7=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1620,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:76: chicken.irregex#irregex */
t7=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k612 in k606 in k603 in k600 */
static void f_614(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,6)))){
C_save_and_reclaim_args((void *)trf_614,2,t0,t1);}
a=C_alloc(38);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.pathname#absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[8] /* (set! chicken.pathname#chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_629,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[12] /* chicken.pathname#make-pathname */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[13] /* chicken.pathname#make-absolute-pathname */,0,C_SCHEME_UNDEFINED);
t6=(C_truep(*((C_word*)lf[10]+1))?lf[14]:lf[15]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_700,a[2]=t6,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_751,a[2]=t8,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_782,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[12]+1 /* (set! chicken.pathname#make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_864,a[2]=t12,a[3]=t10,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[13]+1 /* (set! chicken.pathname#make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_883,a[2]=t12,a[3]=t6,a[4]=t10,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t18=(C_truep(*((C_word*)lf[10]+1))?lf[27]:lf[28]);
t19=(C_truep(*((C_word*)lf[10]+1))?lf[29]:lf[30]);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[2],a[3]=t19,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:163: chicken.irregex#irregex */
t21=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t21;
av2[1]=t20;
av2[2]=t18;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}

/* chicken.pathname#absolute-pathname? in k612 in k606 in k603 in k600 */
static void C_ccall f_616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_616,c,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[6]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_627,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:83: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2=av;
av2[0]=lf[2];
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k625 in chicken.pathname#absolute-pathname? in k612 in k606 in k603 in k600 */
static void C_ccall f_627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_627,c,av);}
/* pathname.scm:83: chicken.irregex#irregex-match-data? */
t2=*((C_word*)lf[7]+1);{
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

/* chicken.pathname#chop-pds in k612 in k606 in k603 in k600 */
static void f_629(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_629,2,t1,t2);}
a=C_alloc(7);
if(C_truep(t2)){
t3=C_i_string_length(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_642,a[2]=t5,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_642(t7,t1,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* lp in chicken.pathname#chop-pds in k612 in k606 in k603 in k600 */
static void f_642(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_642,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_649,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(1)))){
t4=C_fixnum_difference(t2,C_fix(1));
t5=C_i_string_ref(((C_word*)t0)[3],t4);
t6=t3;
f_649(t6,(C_truep(*((C_word*)lf[10]+1))?C_u_i_memq(t5,lf[11]):C_eqp(C_make_character(47),t5)));}
else{
t4=t3;
f_649(t4,C_SCHEME_FALSE);}}

/* k647 in lp in chicken.pathname#chop-pds in k612 in k606 in k603 in k600 */
static void f_649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_649,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:95: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_642(t2,((C_word*)t0)[3],C_fixnum_difference(((C_word*)t0)[4],C_fix(1)));}
else{
t2=C_i_string_length(((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],t2))){
/* pathname.scm:97: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* conc-dirs in k612 in k606 in k603 in k600 */
static void f_700(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_700,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_check_list_2(t2,lf[16]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_709,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_709(t7,t1,t2);}

/* loop in conc-dirs in k612 in k606 in k603 in k600 */
static void f_709(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_709,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
/* pathname.scm:112: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_737,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:114: chop-pds */
f_629(t6,C_u_i_car(t2));}}}

/* k735 in loop in conc-dirs in k612 in k606 in k603 in k600 */
static void C_ccall f_737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_737,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:116: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_709(t3,t2,C_u_i_cdr(((C_word*)t0)[5]));}

/* k739 in k735 in loop in conc-dirs in k612 in k606 in k603 in k600 */
static void C_ccall f_741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_741,c,av);}
/* pathname.scm:113: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* canonicalize-dirs in k612 in k606 in k603 in k600 */
static void f_751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_751,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[19];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* pathname.scm:120: conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_700(t6,t1,t5);}
else{
/* pathname.scm:121: conc-dirs */
t5=((C_word*)((C_word*)t0)[2])[1];
f_700(t5,t1,t2);}}}

/* _make-pathname in k612 in k606 in k603 in k600 */
static void f_782(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_782,5,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=(C_truep(t5)?t5:lf[20]);
t7=(C_truep(t4)?t4:lf[21]);
t8=C_i_check_string_2(t3,t2);
t9=C_i_check_string_2(t7,t2);
t10=C_i_check_string_2(t6,t2);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_805,a[2]=t1,a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_828,a[2]=t11,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_u_i_string_length(t3),C_fix(1)))){
if(C_truep(C_fixnum_greater_or_equal_p(C_u_i_string_length(t7),C_fix(1)))){
t13=C_i_string_ref(t7,C_fix(0));
t14=t12;
f_828(t14,(C_truep(*((C_word*)lf[10]+1))?C_u_i_memq(t13,lf[24]):C_eqp(C_make_character(47),t13)));}
else{
t13=t12;
f_828(t13,C_SCHEME_FALSE);}}
else{
t13=t12;
f_828(t13,C_SCHEME_FALSE);}}

/* k803 in _make-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_805,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(((C_word*)t0)[4]),C_fix(0)))){
t3=C_i_string_ref(((C_word*)t0)[4],C_fix(0));
t4=t2;
f_812(t4,C_i_not(C_u_i_char_equalp(t3,C_make_character(46))));}
else{
t3=t2;
f_812(t3,C_SCHEME_FALSE);}}

/* k810 in k803 in _make-pathname in k612 in k606 in k603 in k600 */
static void f_812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_812,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:129: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[22];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* pathname.scm:129: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[23];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k826 in _make-pathname in k612 in k606 in k603 in k600 */
static void f_828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_828,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:134: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
av2[4]=C_u_i_string_length(((C_word*)t0)[3]);
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_805(2,av2);}}}

/* chicken.pathname#make-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_864,c,av);}
a=C_alloc(6);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_875,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:144: canonicalize-dirs */
t7=((C_word*)((C_word*)t0)[3])[1];
f_751(t7,t6,t2);}

/* k873 in chicken.pathname#make-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_875,c,av);}
/* pathname.scm:144: _make-pathname */
f_782(((C_word*)t0)[3],lf[16],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* chicken.pathname#make-absolute-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_883,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_894,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t5,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* pathname.scm:150: canonicalize-dirs */
t7=((C_word*)((C_word*)t0)[4])[1];
f_751(t7,t6,t2);}

/* k892 in chicken.pathname#make-absolute-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_894,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:151: absolute-pathname? */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k895 in k892 in chicken.pathname#make-absolute-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_897,c,av);}
/* pathname.scm:148: _make-pathname */
f_782(((C_word*)t0)[3],lf[25],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k898 in k892 in chicken.pathname#make-absolute-pathname in k612 in k606 in k603 in k600 */
static void C_ccall f_900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_900,c,av);}
if(C_truep(t1)){
/* pathname.scm:148: _make-pathname */
f_782(((C_word*)t0)[3],lf[25],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* pathname.scm:153: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}}

/* k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_919,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_922,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:164: chicken.irregex#irregex */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_922(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_922,c,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_923,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[31]+1 /* (set! chicken.pathname#decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_944,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate((C_word*)lf[35]+1 /* (set! chicken.pathname#pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1014,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[36]+1 /* (set! chicken.pathname#pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1029,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[37]+1 /* (set! chicken.pathname#pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[38]+1 /* (set! chicken.pathname#pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[39]+1 /* (set! chicken.pathname#pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[40]+1 /* (set! chicken.pathname#pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1095,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[41]+1 /* (set! chicken.pathname#pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[42]+1 /* (set! chicken.pathname#pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:233: chicken.platform#software-version */
t13=*((C_word*)lf[71]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* strip-pds in k920 in k917 in k612 in k606 in k603 in k600 */
static void f_923(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_923,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_930,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:168: chop-pds */
f_629(t3,t2);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k928 in strip-pds in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_930,c,av);}
t2=C_i_string_length(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* pathname.scm:171: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=C_fix(1);
tp(5,av2);}}}

/* chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_944(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_944,c,av);}
a=C_alloc(6);
t3=C_i_check_string_2(t2,lf[32]);
t4=C_eqp(C_fix(0),C_u_i_string_length(t2));
if(C_truep(t4)){
/* pathname.scm:175: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_960,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:176: chicken.irregex#irregex-search */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_960,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_970,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_982,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:179: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:182: chicken.irregex#irregex-search */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k968 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_970,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_974,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:180: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k972 in k968 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_974,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:181: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k976 in k972 in k968 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_978,c,av);}
/* pathname.scm:178: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
C_values(5,av2);}}

/* k980 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_982,c,av);}
/* pathname.scm:179: strip-pds */
f_923(((C_word*)t0)[3],t1);}

/* k983 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_985,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_995,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1003,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:185: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:188: strip-pds */
f_923(t2,((C_word*)t0)[4]);}}

/* k993 in k983 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_995,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:186: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k997 in k993 in k983 in k958 in chicken.pathname#decompose-pathname in k920 in k917 in k612 in k606 in k603 in k600 */
static void C_ccall f_999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_999,c,av);}
/* pathname.scm:184: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_pathname_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("pathname"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_pathname_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(340))){
C_save(t1);
C_rereclaim2(340*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,76);
lf[0]=C_h_intern(&lf[0],8, C_text("pathname"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.pathname#"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.pathname#absolute-pathname?"));
lf[6]=C_h_intern(&lf[6],18, C_text("absolute-pathname?"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.irregex#irregex-match-data?"));
lf[9]=C_h_intern(&lf[9],15, C_text("##sys#substring"));
lf[10]=C_h_intern(&lf[10],22, C_text("##sys#windows-platform"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\057\376\377\016"));
lf[12]=C_h_intern(&lf[12],30, C_text("chicken.pathname#make-pathname"));
lf[13]=C_h_intern(&lf[13],39, C_text("chicken.pathname#make-absolute-pathname"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\134\000"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[16]=C_h_intern(&lf[16],13, C_text("make-pathname"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[18]=C_h_intern(&lf[18],20, C_text("scheme#string-append"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\057\376\377\016"));
lf[25]=C_h_intern(&lf[25],22, C_text("make-absolute-pathname"));
lf[26]=C_h_intern(&lf[26],19, C_text("##sys#string-append"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\047\136\050\056\052\133\134\057\134\134\135\051\077\050\133\136\134\057\134\134\135\053\051\050\134\056\050\133\136\134\057\134\134\056\135\053\051\051\044\000"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\136\050\056\052\057\051\077\050\133\136\057\135\053\051\050\134\056\050\133\136\057\056\135\053\051\051\044\000"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\136\050\056\052\133\134\057\134\134\135\051\077\050\050\134\056\051\077\133\136\134\057\134\134\135\053\051\044\000"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\136\050\056\052\057\051\077\050\050\134\056\051\077\133\136\057\135\053\051\044\000"));
lf[31]=C_h_intern(&lf[31],35, C_text("chicken.pathname#decompose-pathname"));
lf[32]=C_h_intern(&lf[32],18, C_text("decompose-pathname"));
lf[33]=C_h_intern(&lf[33],39, C_text("chicken.irregex#irregex-match-substring"));
lf[34]=C_h_intern(&lf[34],30, C_text("chicken.irregex#irregex-search"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.pathname#pathname-directory"));
lf[36]=C_h_intern(&lf[36],30, C_text("chicken.pathname#pathname-file"));
lf[37]=C_h_intern(&lf[37],35, C_text("chicken.pathname#pathname-extension"));
lf[38]=C_h_intern(&lf[38],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[39]=C_h_intern(&lf[39],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[40]=C_h_intern(&lf[40],43, C_text("chicken.pathname#pathname-replace-directory"));
lf[41]=C_h_intern(&lf[41],38, C_text("chicken.pathname#pathname-replace-file"));
lf[42]=C_h_intern(&lf[42],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[43]=C_h_intern(&lf[43],5, C_text("mingw"));
lf[44]=C_h_intern(&lf[44],7, C_text("windows"));
lf[45]=C_h_intern(&lf[45],4, C_text("unix"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\056\000"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\056\000"));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.pathname#normalize-pathname"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\057\376\003\000\000\002\376\377\012\000\000\134\376\377\016"));
lf[51]=C_h_intern(&lf[51],18, C_text("normalize-pathname"));
lf[52]=C_h_intern(&lf[52],3, C_text("abs"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[54]=C_h_intern(&lf[54],14, C_text("scheme#display"));
lf[55]=C_h_intern(&lf[55],18, C_text("##sys#write-char-0"));
lf[56]=C_h_intern(&lf[56],8, C_text("for-each"));
lf[57]=C_h_intern(&lf[57],24, C_text("scheme#get-output-string"));
lf[58]=C_h_intern(&lf[58],18, C_text("##sys#fast-reverse"));
lf[59]=C_h_intern(&lf[59],25, C_text("scheme#open-output-string"));
lf[60]=C_h_intern(&lf[60],3, C_text("rel"));
lf[62]=C_h_intern(&lf[62],27, C_text("chicken.string#string-split"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\057\134\000"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[65]=C_h_intern(&lf[65],32, C_text("chicken.pathname#directory-null?"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[68]=C_h_intern(&lf[68],15, C_text("directory-null?"));
lf[69]=C_h_intern(&lf[69],36, C_text("chicken.pathname#decompose-directory"));
lf[70]=C_h_intern(&lf[70],19, C_text("decompose-directory"));
lf[71]=C_h_intern(&lf[71],33, C_text("chicken.platform#software-version"));
lf[72]=C_h_intern(&lf[72],23, C_text("chicken.irregex#irregex"));
lf[73]=C_h_intern(&lf[73],29, C_text("chicken.irregex#irregex-match"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\050\133\101\055\132\141\055\172\135\072\051\077\050\133\134\057\134\134\135\051\056\052\000"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\050\057\051\056\052\000"));
C_register_lf2(lf,76,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_602,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[107] = {
{C_text("f_1003:pathname_2escm"),(void*)f_1003},
{C_text("f_1010:pathname_2escm"),(void*)f_1010},
{C_text("f_1014:pathname_2escm"),(void*)f_1014},
{C_text("f_1020:pathname_2escm"),(void*)f_1020},
{C_text("f_1026:pathname_2escm"),(void*)f_1026},
{C_text("f_1029:pathname_2escm"),(void*)f_1029},
{C_text("f_1035:pathname_2escm"),(void*)f_1035},
{C_text("f_1041:pathname_2escm"),(void*)f_1041},
{C_text("f_1044:pathname_2escm"),(void*)f_1044},
{C_text("f_1050:pathname_2escm"),(void*)f_1050},
{C_text("f_1056:pathname_2escm"),(void*)f_1056},
{C_text("f_1059:pathname_2escm"),(void*)f_1059},
{C_text("f_1065:pathname_2escm"),(void*)f_1065},
{C_text("f_1071:pathname_2escm"),(void*)f_1071},
{C_text("f_1077:pathname_2escm"),(void*)f_1077},
{C_text("f_1083:pathname_2escm"),(void*)f_1083},
{C_text("f_1089:pathname_2escm"),(void*)f_1089},
{C_text("f_1095:pathname_2escm"),(void*)f_1095},
{C_text("f_1101:pathname_2escm"),(void*)f_1101},
{C_text("f_1107:pathname_2escm"),(void*)f_1107},
{C_text("f_1113:pathname_2escm"),(void*)f_1113},
{C_text("f_1119:pathname_2escm"),(void*)f_1119},
{C_text("f_1125:pathname_2escm"),(void*)f_1125},
{C_text("f_1131:pathname_2escm"),(void*)f_1131},
{C_text("f_1137:pathname_2escm"),(void*)f_1137},
{C_text("f_1143:pathname_2escm"),(void*)f_1143},
{C_text("f_1153:pathname_2escm"),(void*)f_1153},
{C_text("f_1188:pathname_2escm"),(void*)f_1188},
{C_text("f_1197:pathname_2escm"),(void*)f_1197},
{C_text("f_1218:pathname_2escm"),(void*)f_1218},
{C_text("f_1228:pathname_2escm"),(void*)f_1228},
{C_text("f_1252:pathname_2escm"),(void*)f_1252},
{C_text("f_1255:pathname_2escm"),(void*)f_1255},
{C_text("f_1258:pathname_2escm"),(void*)f_1258},
{C_text("f_1259:pathname_2escm"),(void*)f_1259},
{C_text("f_1263:pathname_2escm"),(void*)f_1263},
{C_text("f_1273:pathname_2escm"),(void*)f_1273},
{C_text("f_1276:pathname_2escm"),(void*)f_1276},
{C_text("f_1279:pathname_2escm"),(void*)f_1279},
{C_text("f_1282:pathname_2escm"),(void*)f_1282},
{C_text("f_1289:pathname_2escm"),(void*)f_1289},
{C_text("f_1296:pathname_2escm"),(void*)f_1296},
{C_text("f_1308:pathname_2escm"),(void*)f_1308},
{C_text("f_1318:pathname_2escm"),(void*)f_1318},
{C_text("f_1344:pathname_2escm"),(void*)f_1344},
{C_text("f_1353:pathname_2escm"),(void*)f_1353},
{C_text("f_1389:pathname_2escm"),(void*)f_1389},
{C_text("f_1405:pathname_2escm"),(void*)f_1405},
{C_text("f_1409:pathname_2escm"),(void*)f_1409},
{C_text("f_1459:pathname_2escm"),(void*)f_1459},
{C_text("f_1472:pathname_2escm"),(void*)f_1472},
{C_text("f_1480:pathname_2escm"),(void*)f_1480},
{C_text("f_1482:pathname_2escm"),(void*)f_1482},
{C_text("f_1512:pathname_2escm"),(void*)f_1512},
{C_text("f_1551:pathname_2escm"),(void*)f_1551},
{C_text("f_1555:pathname_2escm"),(void*)f_1555},
{C_text("f_1558:pathname_2escm"),(void*)f_1558},
{C_text("f_1561:pathname_2escm"),(void*)f_1561},
{C_text("f_1568:pathname_2escm"),(void*)f_1568},
{C_text("f_1590:pathname_2escm"),(void*)f_1590},
{C_text("f_1593:pathname_2escm"),(void*)f_1593},
{C_text("f_1595:pathname_2escm"),(void*)f_1595},
{C_text("f_1601:pathname_2escm"),(void*)f_1601},
{C_text("f_1610:pathname_2escm"),(void*)f_1610},
{C_text("f_1620:pathname_2escm"),(void*)f_1620},
{C_text("f_1622:pathname_2escm"),(void*)f_1622},
{C_text("f_1628:pathname_2escm"),(void*)f_1628},
{C_text("f_1631:pathname_2escm"),(void*)f_1631},
{C_text("f_602:pathname_2escm"),(void*)f_602},
{C_text("f_605:pathname_2escm"),(void*)f_605},
{C_text("f_608:pathname_2escm"),(void*)f_608},
{C_text("f_614:pathname_2escm"),(void*)f_614},
{C_text("f_616:pathname_2escm"),(void*)f_616},
{C_text("f_627:pathname_2escm"),(void*)f_627},
{C_text("f_629:pathname_2escm"),(void*)f_629},
{C_text("f_642:pathname_2escm"),(void*)f_642},
{C_text("f_649:pathname_2escm"),(void*)f_649},
{C_text("f_700:pathname_2escm"),(void*)f_700},
{C_text("f_709:pathname_2escm"),(void*)f_709},
{C_text("f_737:pathname_2escm"),(void*)f_737},
{C_text("f_741:pathname_2escm"),(void*)f_741},
{C_text("f_751:pathname_2escm"),(void*)f_751},
{C_text("f_782:pathname_2escm"),(void*)f_782},
{C_text("f_805:pathname_2escm"),(void*)f_805},
{C_text("f_812:pathname_2escm"),(void*)f_812},
{C_text("f_828:pathname_2escm"),(void*)f_828},
{C_text("f_864:pathname_2escm"),(void*)f_864},
{C_text("f_875:pathname_2escm"),(void*)f_875},
{C_text("f_883:pathname_2escm"),(void*)f_883},
{C_text("f_894:pathname_2escm"),(void*)f_894},
{C_text("f_897:pathname_2escm"),(void*)f_897},
{C_text("f_900:pathname_2escm"),(void*)f_900},
{C_text("f_919:pathname_2escm"),(void*)f_919},
{C_text("f_922:pathname_2escm"),(void*)f_922},
{C_text("f_923:pathname_2escm"),(void*)f_923},
{C_text("f_930:pathname_2escm"),(void*)f_930},
{C_text("f_944:pathname_2escm"),(void*)f_944},
{C_text("f_960:pathname_2escm"),(void*)f_960},
{C_text("f_970:pathname_2escm"),(void*)f_970},
{C_text("f_974:pathname_2escm"),(void*)f_974},
{C_text("f_978:pathname_2escm"),(void*)f_978},
{C_text("f_982:pathname_2escm"),(void*)f_982},
{C_text("f_985:pathname_2escm"),(void*)f_985},
{C_text("f_995:pathname_2escm"),(void*)f_995},
{C_text("f_999:pathname_2escm"),(void*)f_999},
{C_text("toplevel:pathname_2escm"),(void*)C_pathname_toplevel},
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
o|hiding unexported module binding: chicken.pathname#d 
o|hiding unexported module binding: chicken.pathname#define-alias 
o|hiding unexported module binding: chicken.pathname#absolute-pathname-root 
o|hiding unexported module binding: chicken.pathname#root-origin 
o|hiding unexported module binding: chicken.pathname#root-directory 
o|hiding unexported module binding: chicken.pathname#chop-pds 
o|hiding unexported module binding: chicken.pathname#split-directory 
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 10 
o|specializations:
o|  3 (scheme#string=? * *)
o|  2 (scheme#char=? char char)
o|  3 (scheme#string-ref string fixnum)
o|  6 (scheme#string-length string)
o|  1 (scheme#car pair)
o|  5 (scheme#cdr pair)
o|  1 (scheme#zero? integer)
o|  3 (scheme#memq * list)
(o e)|safe calls: 150 
o|safe globals: (chicken.pathname#root-directory chicken.pathname#root-origin chicken.pathname#absolute-pathname-root) 
o|inlining procedure: k631 
o|inlining procedure: k644 
o|inlining procedure: k644 
o|contracted procedure: "(pathname.scm:94) g145146" 
o|inlining procedure: k675 
o|substituted constant variable: a679 
o|inlining procedure: k675 
o|inlining procedure: k631 
o|inlining procedure: k711 
o|inlining procedure: k711 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|inlining procedure: k807 
o|inlining procedure: k807 
o|substituted constant variable: a822 
o|substituted constant variable: a823 
o|inlining procedure: k837 
o|substituted constant variable: a858 
o|contracted procedure: "(pathname.scm:133) g183184" 
o|inlining procedure: k845 
o|substituted constant variable: a849 
o|inlining procedure: k845 
o|inlining procedure: k837 
o|inlining procedure: k895 
o|inlining procedure: k895 
o|inlining procedure: k925 
o|inlining procedure: k925 
o|inlining procedure: k949 
o|inlining procedure: k949 
o|inlining procedure: k986 
o|inlining procedure: k986 
o|substituted constant variable: a1158 
o|inlining procedure: k1155 
o|inlining procedure: k1155 
o|substituted constant variable: a1163 
o|inlining procedure: k1165 
o|inlining procedure: k1165 
o|substituted constant variable: a1180 
o|inlining procedure: k1199 
o|substituted constant variable: a1206 
o|inlining procedure: k1199 
o|inlining procedure: k1220 
o|inlining procedure: k1238 
o|inlining procedure: k1238 
o|inlining procedure: k1283 
o|inlining procedure: k1283 
o|inlining procedure: k1310 
o|inlining procedure: k1310 
o|inlining procedure: k1220 
o|inlining procedure: k1354 
o|inlining procedure: k1354 
o|inlining procedure: k1394 
o|inlining procedure: k1394 
o|inlining procedure: k1400 
o|inlining procedure: k1400 
o|substituted constant variable: a1441 
o|inlining procedure: k1435 
o|inlining procedure: k1435 
o|inlining procedure: k1468 
o|inlining procedure: k1468 
o|inlining procedure: k1487 
o|inlining procedure: k1487 
o|contracted procedure: "(pathname.scm:330) strip-origin-prefix437" 
o|inlining procedure: k1517 
o|inlining procedure: k1517 
o|inlining procedure: k1539 
o|inlining procedure: k1539 
o|inlining procedure: k1603 
o|inlining procedure: k1603 
o|inlining procedure: k1612 
o|inlining procedure: k1612 
o|inlining procedure: k1633 
o|inlining procedure: k1633 
o|replaced variables: 284 
o|removed binding forms: 80 
o|substituted constant variable: r6321644 
o|substituted constant variable: r7121645 
o|substituted constant variable: r7541647 
o|substituted constant variable: r8081649 
o|substituted constant variable: r8081649 
o|substituted constant variable: r8081651 
o|substituted constant variable: r8081651 
o|substituted constant variable: r8381656 
o|substituted constant variable: r9261662 
o|substituted constant variable: r13951685 
o|substituted constant variable: r13951687 
o|substituted constant variable: r14361692 
o|converted assignments to bindings: (pds?371) 
o|substituted constant variable: r14691693 
o|substituted constant variable: r14691693 
o|substituted constant variable: r14691695 
o|substituted constant variable: r14691695 
o|converted assignments to bindings: (addpart349) 
o|substituted constant variable: r16041704 
o|substituted constant variable: r16131706 
o|substituted constant variable: r16341708 
o|simplifications: ((let . 2)) 
o|replaced variables: 26 
o|removed binding forms: 244 
o|inlining procedure: k1235 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|removed binding forms: 35 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 17) (let . 14) (##core#call . 103)) 
o|  call simplifications:
o|    scheme#list?
o|    scheme#member
o|    chicken.fixnum#fx+	8
o|    scheme#pair?
o|    ##sys#slot	2
o|    scheme#string	2
o|    scheme#cdr
o|    scheme#cons	3
o|    ##sys#call-with-values	8
o|    chicken.fixnum#fx=	5
o|    scheme#values	8
o|    chicken.fixnum#fx>	3
o|    scheme#not	6
o|    scheme#string?
o|    scheme#list
o|    ##sys#check-list	2
o|    scheme#null?	10
o|    scheme#car	8
o|    chicken.fixnum#fx>=	4
o|    scheme#string-ref	2
o|    scheme#eq?	10
o|    scheme#string-length	6
o|    chicken.fixnum#fx<
o|    chicken.fixnum#fx-	2
o|    ##sys#check-string	7
o|contracted procedure: k618 
o|contracted procedure: k638 
o|contracted procedure: k654 
o|contracted procedure: k667 
o|contracted procedure: k660 
o|contracted procedure: k670 
o|contracted procedure: k691 
o|contracted procedure: k687 
o|contracted procedure: k696 
o|contracted procedure: k702 
o|contracted procedure: k714 
o|contracted procedure: k717 
o|contracted procedure: k747 
o|contracted procedure: k723 
o|contracted procedure: k756 
o|contracted procedure: k759 
o|contracted procedure: k765 
o|contracted procedure: k772 
o|contracted procedure: k784 
o|contracted procedure: k787 
o|contracted procedure: k790 
o|contracted procedure: k793 
o|contracted procedure: k796 
o|contracted procedure: k813 
o|contracted procedure: k834 
o|contracted procedure: k840 
o|contracted procedure: k876 
o|contracted procedure: k866 
o|contracted procedure: k904 
o|contracted procedure: k885 
o|contracted procedure: k911 
o|contracted procedure: k914 
o|contracted procedure: k941 
o|contracted procedure: k934 
o|contracted procedure: k946 
o|contracted procedure: k952 
o|contracted procedure: k1584 
o|contracted procedure: k1149 
o|contracted procedure: k1168 
o|inlining procedure: k1171 
o|contracted procedure: k1182 
o|inlining procedure: k1171 
o|contracted procedure: k1452 
o|contracted procedure: k1190 
o|contracted procedure: k1449 
o|contracted procedure: k1193 
o|contracted procedure: k1202 
o|contracted procedure: k1210 
o|contracted procedure: k1223 
o|contracted procedure: k1232 
o|contracted procedure: k1244 
o|contracted procedure: k1235 
o|contracted procedure: k1268 
o|contracted procedure: k1290 
o|contracted procedure: k1298 
o|contracted procedure: k1301 
o|contracted procedure: k1313 
o|contracted procedure: k1323 
o|contracted procedure: k1327 
o|contracted procedure: k1331 
o|contracted procedure: k1334 
o|contracted procedure: k1357 
o|contracted procedure: k1364 
o|contracted procedure: k1368 
o|contracted procedure: k1375 
o|contracted procedure: k1379 
o|contracted procedure: k1390 
o|contracted procedure: k1397 
o|contracted procedure: k1414 
o|contracted procedure: k1418 
o|contracted procedure: k1422 
o|contracted procedure: k1429 
o|contracted procedure: k1432 
o|contracted procedure: k1446 
o|contracted procedure: k1461 
o|contracted procedure: k1484 
o|contracted procedure: k1502 
o|contracted procedure: k1493 
o|contracted procedure: k1505 
o|contracted procedure: k1581 
o|contracted procedure: k1577 
o|contracted procedure: k1574 
o|contracted procedure: k1520 
o|contracted procedure: k1523 
o|contracted procedure: k1526 
o|contracted procedure: k1532 
o|contracted procedure: k1536 
o|contracted procedure: k1542 
o|contracted procedure: k1570 
o|simplifications: ((if . 1) (let . 29)) 
o|removed binding forms: 87 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest193196 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest193196 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest205208 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest205208 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest362364 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest362364 0 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 2 
o|direct leaf routine/allocation: addpart349 9 
o|direct leaf routine/allocation: pds?371 0 
o|direct leaf routine/allocation: loop428 0 
o|contracted procedure: "(pathname.scm:255) k1338" 
o|contracted procedure: "(pathname.scm:274) k1348" 
o|contracted procedure: "(pathname.scm:281) k1383" 
o|converted assignments to bindings: (loop428) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|customizable procedures: (k612 chicken.pathname#split-directory k1403 k1351 loop376 k1226 g390397 for-each-loop389401 k1280 strip-pds224 canonicalize-dirs153 _make-pathname154 k826 k810 conc-dirs152 chicken.pathname#chop-pds loop156 k647 lp138) 
o|calls to known targets: 48 
o|identified direct recursive calls: f_709 1 
o|unused rest argument: rest193196 f_864 
o|unused rest argument: rest205208 f_883 
o|unused rest argument: rest362364 f_1188 
o|identified direct recursive calls: f_1482 1 
o|fast box initializations: 7 
o|fast global references: 8 
o|fast global assignments: 11 
o|dropping unused closure argument: f_1153 
o|dropping unused closure argument: f_1459 
o|dropping unused closure argument: f_1482 
o|dropping unused closure argument: f_629 
o|dropping unused closure argument: f_782 
o|dropping unused closure argument: f_923 
*/
/* end of file */
