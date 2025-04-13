/* Generated from snow/srfi/170.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev fbb6ce81)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: snow/srfi/170.scm -output-file src/srfi.170.c -emit-all-import-libraries -optimize-level 3 -include-path ./snow/retropikzel
   uses: eval library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[86];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,8),40,118,97,49,48,52,57,41};
static C_char li1[] C_aligned={C_lihdr(0,0,8),40,118,97,49,48,53,49,41};
static C_char li2[] C_aligned={C_lihdr(0,0,8),40,118,97,49,48,53,51,41};
static C_char li3[] C_aligned={C_lihdr(0,0,8),40,118,97,49,48,53,53,41};
static C_char li4[] C_aligned={C_lihdr(0,0,8),40,118,97,49,48,53,55,41};
static C_char li5[] C_aligned={C_lihdr(0,0,14),40,117,118,45,102,115,45,116,45,109,97,107,101,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,39),40,104,97,110,100,108,101,45,101,114,114,111,114,115,32,114,101,116,117,114,110,45,99,111,100,101,32,46,32,105,114,114,105,116,97,110,116,115,41,0};
static C_char li7[] C_aligned={C_lihdr(0,0,118),40,102,105,108,101,45,105,110,102,111,45,114,101,99,111,114,100,45,109,97,107,101,32,100,101,118,105,99,101,32,105,110,111,100,101,32,109,111,100,101,32,110,108,105,110,107,115,32,117,105,100,32,103,105,100,32,114,100,101,118,32,115,105,122,101,32,98,108,107,115,105,122,101,32,98,108,111,99,107,115,32,97,116,105,109,101,32,109,116,105,109,101,32,99,116,105,109,101,32,102,110,97,109,101,47,112,111,114,116,32,102,111,108,108,111,119,63,41,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,14),40,102,105,108,101,45,105,110,102,111,63,32,120,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,20),40,102,105,108,101,45,105,110,102,111,58,100,101,118,105,99,101,32,120,41,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,19),40,102,105,108,101,45,105,110,102,111,58,105,110,111,100,101,32,120,41,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,105,110,102,111,58,109,111,100,101,32,120,41,0,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,20),40,102,105,108,101,45,105,110,102,111,58,110,108,105,110,107,115,32,120,41,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,105,110,102,111,58,117,105,100,32,120,41,0,0,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,105,110,102,111,58,103,105,100,32,120,41,0,0,0,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,105,110,102,111,58,114,100,101,118,32,120,41,0,0,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,105,110,102,111,58,115,105,122,101,32,120,41,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,21),40,102,105,108,101,45,105,110,102,111,58,98,108,107,115,105,122,101,32,120,41,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,20),40,102,105,108,101,45,105,110,102,111,58,98,108,111,99,107,115,32,120,41,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,19),40,102,105,108,101,45,105,110,102,111,58,97,116,105,109,101,32,120,41,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,19),40,102,105,108,101,45,105,110,102,111,58,109,116,105,109,101,32,120,41,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,19),40,102,105,108,101,45,105,110,102,111,58,99,116,105,109,101,32,120,41,0,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,24),40,102,105,108,101,45,105,110,102,111,58,102,110,97,109,101,47,112,111,114,116,32,120,41};
static C_char li23[] C_aligned={C_lihdr(0,0,21),40,102,105,108,101,45,105,110,102,111,58,102,111,108,108,111,119,63,32,120,41,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,30),40,102,105,108,101,45,105,110,102,111,32,102,110,97,109,101,47,112,111,114,116,32,102,111,108,108,111,119,63,41,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,105,110,102,111,45,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,45,105,110,102,111,41};
static C_char li26[] C_aligned={C_lihdr(0,0,42),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,102,110,97,109,101,32,46,32,112,101,114,109,105,115,115,105,111,110,45,98,105,116,115,41,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,24),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,102,110,97,109,101,41};
static C_char li28[] C_aligned={C_lihdr(0,0,7),40,102,95,57,50,48,41,0};
static C_char li29[] C_aligned={C_lihdr(0,0,8),40,118,97,49,48,53,57,41};
static C_char li30[] C_aligned={C_lihdr(0,0,28),40,100,105,114,101,99,116,111,114,121,45,102,105,108,101,115,32,100,105,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word *av) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word *av) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_306)
static void C_ccall f_306(C_word c,C_word *av) C_noret;
C_noret_decl(f_309)
static void C_ccall f_309(C_word c,C_word *av) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word *av) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word *av) C_noret;
C_noret_decl(f_319)
static void C_ccall f_319(C_word c,C_word *av) C_noret;
C_noret_decl(f_322)
static void C_ccall f_322(C_word c,C_word *av) C_noret;
C_noret_decl(f_325)
static void C_ccall f_325(C_word c,C_word *av) C_noret;
C_noret_decl(f_328)
static void C_ccall f_328(C_word c,C_word *av) C_noret;
C_noret_decl(f_331)
static void C_ccall f_331(C_word c,C_word *av) C_noret;
C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word *av) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word *av) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word *av) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word *av) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word *av) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word *av) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word *av) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word *av) C_noret;
C_noret_decl(f_359)
static void C_ccall f_359(C_word c,C_word *av) C_noret;
C_noret_decl(f_362)
static void C_ccall f_362(C_word c,C_word *av) C_noret;
C_noret_decl(f_366)
static void C_ccall f_366(C_word c,C_word *av) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word *av) C_noret;
C_noret_decl(f_378)
static void C_ccall f_378(C_word c,C_word *av) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word *av) C_noret;
C_noret_decl(f_386)
static void C_ccall f_386(C_word c,C_word *av) C_noret;
C_noret_decl(f_390)
static void C_ccall f_390(C_word c,C_word *av) C_noret;
C_noret_decl(f_394)
static void C_ccall f_394(C_word c,C_word *av) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word *av) C_noret;
C_noret_decl(f_400)
static void C_ccall f_400(C_word c,C_word *av) C_noret;
C_noret_decl(f_416)
static void C_ccall f_416(C_word c,C_word *av) C_noret;
C_noret_decl(f_420)
static void C_ccall f_420(C_word c,C_word *av) C_noret;
C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word *av) C_noret;
C_noret_decl(f_431)
static void C_ccall f_431(C_word c,C_word *av) C_noret;
C_noret_decl(f_435)
static void C_ccall f_435(C_word c,C_word *av) C_noret;
C_noret_decl(f_439)
static void C_ccall f_439(C_word c,C_word *av) C_noret;
C_noret_decl(f_445)
static void C_ccall f_445(C_word c,C_word *av) C_noret;
C_noret_decl(f_451)
static void C_ccall f_451(C_word c,C_word *av) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word *av) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word *av) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word *av) C_noret;
C_noret_decl(f_484)
static void C_ccall f_484(C_word c,C_word *av) C_noret;
C_noret_decl(f_493)
static void C_ccall f_493(C_word c,C_word *av) C_noret;
C_noret_decl(f_502)
static void C_ccall f_502(C_word c,C_word *av) C_noret;
C_noret_decl(f_511)
static void C_ccall f_511(C_word c,C_word *av) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word *av) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word *av) C_noret;
C_noret_decl(f_538)
static void C_ccall f_538(C_word c,C_word *av) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word *av) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word *av) C_noret;
C_noret_decl(f_565)
static void C_ccall f_565(C_word c,C_word *av) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word *av) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word *av) C_noret;
C_noret_decl(f_592)
static void C_ccall f_592(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_ccall f_599(C_word c,C_word *av) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602(C_word c,C_word *av) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word *av) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word *av) C_noret;
C_noret_decl(f_617)
static void C_ccall f_617(C_word c,C_word *av) C_noret;
C_noret_decl(f_621)
static void C_ccall f_621(C_word c,C_word *av) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word *av) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word *av) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word *av) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word *av) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word *av) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word *av) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word *av) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word *av) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word *av) C_noret;
C_noret_decl(f_665)
static void C_ccall f_665(C_word c,C_word *av) C_noret;
C_noret_decl(f_673)
static void C_ccall f_673(C_word c,C_word *av) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word *av) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word *av) C_noret;
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word *av) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word *av) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word *av) C_noret;
C_noret_decl(f_721)
static void C_ccall f_721(C_word c,C_word *av) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word *av) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word *av) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word *av) C_noret;
C_noret_decl(f_761)
static void C_ccall f_761(C_word c,C_word *av) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word *av) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word *av) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word *av) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word *av) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word *av) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word *av) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word *av) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word *av) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word *av) C_noret;
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word *av) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word *av) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word *av) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word *av) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word *av) C_noret;
C_noret_decl(f_856)
static void C_ccall f_856(C_word c,C_word *av) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word *av) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word *av) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word *av) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word *av) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word *av) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word *av) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word *av) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word *av) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word *av) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word *av) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word *av) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word *av) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word *av) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word *av) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word *av) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va1049)
static void va1049(C_word t0,C_word t1) C_noret;
C_noret_decl(va1051)
static void va1051(C_word t0,C_word t1) C_noret;
C_noret_decl(va1053)
static void va1053(C_word t0,C_word t1) C_noret;
C_noret_decl(va1055)
static void va1055(C_word t0,C_word t1) C_noret;
C_noret_decl(va1057)
static void va1057(C_word t0,C_word t1) C_noret;
C_noret_decl(va1059)
static void va1059(C_word t0,C_word t1) C_noret;

C_noret_decl(trva1049)
static void C_ccall trva1049(C_word c,C_word *av) C_noret;
static void C_ccall trva1049(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1049(t0,t1);}

C_noret_decl(trva1051)
static void C_ccall trva1051(C_word c,C_word *av) C_noret;
static void C_ccall trva1051(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1051(t0,t1);}

C_noret_decl(trva1053)
static void C_ccall trva1053(C_word c,C_word *av) C_noret;
static void C_ccall trva1053(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1053(t0,t1);}

C_noret_decl(trva1055)
static void C_ccall trva1055(C_word c,C_word *av) C_noret;
static void C_ccall trva1055(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1055(t0,t1);}

C_noret_decl(trva1057)
static void C_ccall trva1057(C_word c,C_word *av) C_noret;
static void C_ccall trva1057(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1057(t0,t1);}

C_noret_decl(trva1059)
static void C_ccall trva1059(C_word c,C_word *av) C_noret;
static void C_ccall trva1059(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1059(t0,t1);}

/* k1000 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_1002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1002,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:155: pffi-string->pointer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1004 in k1000 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_1006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1006,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:157: pffi-pointer-null"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1008 in k1004 in k1000 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1010,c,av);}
C_trace(C_text("snow/srfi/170.scm:153: uv-fs-scandir"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=((C_word*)t0)[5];
av2[5]=C_fix(0);
av2[6]=t1;
tp(7,av2);}}

/* k1020 in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_1022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1022,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k304 */
static void C_ccall f_306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_306,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k307 in k304 */
static void C_ccall f_309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_309,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:1: pffi-init"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[85]);
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t2;
tp(2,av2);}}

/* k310 in k307 in k304 */
static void C_ccall f_312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_312,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[0]+1 /* (set! slash ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:13: pffi-define-library"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
av2[2]=C_fast_retrieve(lf[81]);
av2[3]=lf[82];
av2[4]=lf[83];
av2[5]=lf[84];
tp(6,av2);}}

/* k314 in k310 in k307 in k304 */
static void C_ccall f_316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_316,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:18: pffi-define-library"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[55]);
av2[3]=lf[78];
av2[4]=lf[79];
av2[5]=lf[80];
tp(6,av2);}}

/* k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_319,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:28: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[39]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[76];
av2[5]=lf[7];
av2[6]=C_SCHEME_END_OF_LIST;
tp(7,av2);}}

/* k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_322,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:29: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[13]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[74];
av2[5]=lf[5];
av2[6]=lf[75];
tp(7,av2);}}

/* k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_325,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:30: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[12]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[72];
av2[5]=lf[7];
av2[6]=lf[73];
tp(7,av2);}}

/* k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_328,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_331,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:31: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[36]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[70];
av2[5]=lf[5];
av2[6]=lf[71];
tp(7,av2);}}

/* k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_331,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:32: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[45]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[68];
av2[5]=lf[5];
av2[6]=lf[69];
tp(7,av2);}}

/* k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_334,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:33: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[47]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[66];
av2[5]=lf[5];
av2[6]=lf[67];
tp(7,av2);}}

/* k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_337,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:34: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[43]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[64];
av2[5]=lf[5];
av2[6]=lf[65];
tp(7,av2);}}

/* k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_340,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:35: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[41]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[62];
av2[5]=lf[5];
av2[6]=lf[63];
tp(7,av2);}}

/* k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_343,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:36: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[52]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[60];
av2[5]=lf[5];
av2[6]=lf[61];
tp(7,av2);}}

/* k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_346,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:37: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[51]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[58];
av2[5]=lf[5];
av2[6]=lf[59];
tp(7,av2);}}

/* k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_349,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:38: pffi-define"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[35]);
av2[3]=C_fast_retrieve(lf[55]);
av2[4]=lf[56];
av2[5]=lf[7];
av2[6]=lf[57];
tp(7,av2);}}

/* k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_352(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(94,c,17)))){
C_save_and_reclaim((void *)f_352,c,av);}
a=C_alloc(94);
t2=C_set_block_item(lf[2] /* UV-FS */,0,C_fix(6));
t3=C_mutate((C_word*)lf[3]+1 /* (set! uv-fs-t-make ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1 /* (set! handle-errors ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_396,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t5=C_a_i_vector1(&a,1,lf[14]);
t6=C_mutate((C_word*)lf[14]+1 /* (set! file-info-record ...) */,t5);
t7=C_fast_retrieve(lf[14]);
t8=C_mutate((C_word*)lf[15]+1 /* (set! file-info-record-make ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_445,a[2]=t7,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t9=C_fast_retrieve(lf[14]);
t10=C_mutate((C_word*)lf[16]+1 /* (set! file-info? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_451,a[2]=t9,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t11=C_fast_retrieve(lf[14]);
t12=C_mutate((C_word*)lf[17]+1 /* (set! file-info:device ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_457,a[2]=t11,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t13=C_fast_retrieve(lf[14]);
t14=C_mutate((C_word*)lf[18]+1 /* (set! file-info:inode ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_466,a[2]=t13,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t15=C_fast_retrieve(lf[14]);
t16=C_mutate((C_word*)lf[19]+1 /* (set! file-info:mode ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_475,a[2]=t15,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t17=C_fast_retrieve(lf[14]);
t18=C_mutate((C_word*)lf[20]+1 /* (set! file-info:nlinks ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_484,a[2]=t17,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t19=C_fast_retrieve(lf[14]);
t20=C_mutate((C_word*)lf[21]+1 /* (set! file-info:uid ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_493,a[2]=t19,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t21=C_fast_retrieve(lf[14]);
t22=C_mutate((C_word*)lf[22]+1 /* (set! file-info:gid ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_502,a[2]=t21,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t23=C_fast_retrieve(lf[14]);
t24=C_mutate((C_word*)lf[23]+1 /* (set! file-info:rdev ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_511,a[2]=t23,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t25=C_fast_retrieve(lf[14]);
t26=C_mutate((C_word*)lf[24]+1 /* (set! file-info:size ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_520,a[2]=t25,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t27=C_fast_retrieve(lf[14]);
t28=C_mutate((C_word*)lf[25]+1 /* (set! file-info:blksize ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_529,a[2]=t27,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t29=C_fast_retrieve(lf[14]);
t30=C_mutate((C_word*)lf[26]+1 /* (set! file-info:blocks ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_538,a[2]=t29,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t31=C_fast_retrieve(lf[14]);
t32=C_mutate((C_word*)lf[27]+1 /* (set! file-info:atime ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_547,a[2]=t31,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t33=C_fast_retrieve(lf[14]);
t34=C_mutate((C_word*)lf[28]+1 /* (set! file-info:mtime ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_556,a[2]=t33,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp));
t35=C_fast_retrieve(lf[14]);
t36=C_mutate((C_word*)lf[29]+1 /* (set! file-info:ctime ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_565,a[2]=t35,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t37=C_fast_retrieve(lf[14]);
t38=C_mutate((C_word*)lf[30]+1 /* (set! file-info:fname/port ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_574,a[2]=t37,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t39=C_fast_retrieve(lf[14]);
t40=C_mutate((C_word*)lf[31]+1 /* (set! file-info:follow? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_583,a[2]=t39,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t41=C_mutate((C_word*)lf[32]+1 /* (set! file-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_592,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[40]+1 /* (set! file-info-directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_779,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[44]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_838,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[46]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_872,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[48]+1 /* (set! directory-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t46=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t47=C_fast_retrieve(lf[53]);{
C_word *av2=av;
av2[0]=t47;
av2[1]=t46;
((C_proc)(void*)(*((C_word*)t47+1)))(2,av2);}}

/* uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_355,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_359,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_374,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:46: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[7];
tp(3,av2);}}

/* k357 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_359,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_362,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_366,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:54: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[7];
tp(3,av2);}}

/* k360 in k357 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_362,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k364 in k357 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_366,c,av);}
C_trace(C_text("snow/srfi/170.scm:54: pffi-pointer-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[5];
av2[4]=t1;
av2[5]=C_fast_retrieve(lf[2]);
tp(6,av2);}}

/* k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_374,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_378,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:47: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=lf[5];
tp(3,av2);}}

/* k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_378,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:48: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=lf[7];
tp(3,av2);}}

/* k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_382,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_386,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:49: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=lf[5];
tp(3,av2);}}

/* k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_386,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_390,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("snow/srfi/170.scm:50: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=lf[7];
tp(3,av2);}}

/* k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void C_ccall f_390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_390,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_394,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("snow/srfi/170.scm:51: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=lf[7];
tp(3,av2);}}

/* k392 in k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in ... */
static void C_ccall f_394(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(53,c,2)))){
C_save_and_reclaim((void *)f_394,c,av);}
a=C_alloc(53);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va1049,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va1051,a[2]=t2,a[3]=t1,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va1053,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va1055,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va1057,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t7=t6;
va1057(t7,C_s_a_i_plus(&a,2,((C_word*)t0)[6],((C_word*)t0)[7]));}

/* handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_396,c,av);}
a=C_alloc(13);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_400,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
if(C_truep(C_rest_nullp(c,3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_416,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_420,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_424,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:61: uv-translate-sys-error"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_431,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_435,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_439,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:62: uv-translate-sys-error"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k398 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_400,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k414 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_416,c,av);}
C_trace(C_text("snow/srfi/170.scm:61: raise-continuable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k418 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_420,c,av);}
C_trace(C_text("snow/srfi/170.scm:61: pffi-pointer->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k422 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_424,c,av);}
C_trace(C_text("snow/srfi/170.scm:61: uv-strerror"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k429 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_431,c,av);}
C_trace(C_text("snow/srfi/170.scm:62: raise-continuable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k433 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_435,c,av);}
C_trace(C_text("snow/srfi/170.scm:62: pffi-pointer->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k437 in handle-errors in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_439,c,av);}
C_trace(C_text("snow/srfi/170.scm:62: uv-strerror"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* file-info-record-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10=av[10];
C_word t11=av[11];
C_word t12=av[12];
C_word t13=av[13];
C_word t14=av[14];
C_word t15=av[15];
C_word t16=av[16];
C_word t17;
C_word *a;
if(c!=17) C_bad_argc_2(c,17,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,1)))){
C_save_and_reclaim((void *)f_445,c,av);}
a=C_alloc(17);
t17=t1;{
C_word *av2=av;
av2[0]=t17;
av2[1]=C_a_i_record(&a,16,((C_word*)t0)[2],t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16);
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}

/* file-info? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_451,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* file-info:device in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_457,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[17]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:inode in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_466,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[18]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:mode in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_475,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[19]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:nlinks in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_484,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[20]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(4));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:uid in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_493,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[21]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(5));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:gid in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_502,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[22]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:rdev in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_511,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[23]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(7));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:size in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_520,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[24]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(8));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:blksize in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_529,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[25]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(9));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:blocks in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_538,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[26]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(10));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:atime in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_547,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[27]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(11));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:mtime in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_556,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[28]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(12));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:ctime in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_565,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[29]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(13));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:fname/port in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_574,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[30]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(14));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info:follow? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_583,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[31]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(15));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_592,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_596,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:88: uv-fs-t-make"));
t5=C_fast_retrieve(lf[3]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_355(2,av2);}}

/* k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_596,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_765,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_769,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:89: uv-default-loop"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t4;
tp(2,av2);}}

/* k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_599,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:93: uv-fs-get-ptr"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_602,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_761,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:94: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_609,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_613,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_749,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:95: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void C_ccall f_613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_613,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_745,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:96: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in ... */
static void C_ccall f_617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_617,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_737,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:97: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void C_ccall f_621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_621,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_729,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:98: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in ... */
static void C_ccall f_625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_625,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_721,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:99: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in ... */
static void C_ccall f_629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_629,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_713,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:100: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in ... */
static void C_ccall f_633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_633,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_705,a[2]=t2,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:101: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_637,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_697,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:102: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_641,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_689,a[2]=t2,a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:103: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_ccall f_645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_645,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_681,a[2]=t2,a[3]=((C_word*)t0)[14],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:104: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k647 in k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_649,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_673,a[2]=t2,a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:105: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k651 in k647 in k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in ... */
static void C_ccall f_653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_653,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t1,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_665,a[2]=t2,a[3]=((C_word*)t0)[16],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:106: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[34];
tp(3,av2);}}

/* k655 in k651 in k647 in k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in ... */
static void C_ccall f_657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,16)))){
C_save_and_reclaim((void *)f_657,c,av);}
C_trace(C_text("snow/srfi/170.scm:94: file-info-record-make"));
t2=C_fast_retrieve(lf[15]);{
C_word *av2;
if(c >= 17) {
  av2=av;
} else {
  av2=C_alloc(17);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[7];
av2[7]=((C_word*)t0)[8];
av2[8]=((C_word*)t0)[9];
av2[9]=((C_word*)t0)[10];
av2[10]=((C_word*)t0)[11];
av2[11]=((C_word*)t0)[12];
av2[12]=((C_word*)t0)[13];
av2[13]=((C_word*)t0)[14];
av2[14]=t1;
av2[15]=((C_word*)t0)[15];
av2[16]=((C_word*)t0)[16];
f_445(17,av2);}}

/* k663 in k651 in k647 in k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in ... */
static void C_ccall f_665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_665,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(12));
C_trace(C_text("snow/srfi/170.scm:106: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k671 in k647 in k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in ... */
static void C_ccall f_673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_673,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(11));
C_trace(C_text("snow/srfi/170.scm:105: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k679 in k643 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in ... */
static void C_ccall f_681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_681,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(10));
C_trace(C_text("snow/srfi/170.scm:104: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k687 in k639 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in ... */
static void C_ccall f_689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_689,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(9));
C_trace(C_text("snow/srfi/170.scm:103: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k695 in k635 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in ... */
static void C_ccall f_697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_697,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(8));
C_trace(C_text("snow/srfi/170.scm:102: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k703 in k631 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in ... */
static void C_ccall f_705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_705,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(7));
C_trace(C_text("snow/srfi/170.scm:101: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k711 in k627 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in ... */
static void C_ccall f_713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_713,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(6));
C_trace(C_text("snow/srfi/170.scm:100: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k719 in k623 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in ... */
static void C_ccall f_721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_721,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(5));
C_trace(C_text("snow/srfi/170.scm:99: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k727 in k619 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in ... */
static void C_ccall f_729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_729,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(4));
C_trace(C_text("snow/srfi/170.scm:98: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k735 in k615 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void C_ccall f_737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_737,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(3));
C_trace(C_text("snow/srfi/170.scm:97: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k743 in k611 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in ... */
static void C_ccall f_745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_745,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(2));
C_trace(C_text("snow/srfi/170.scm:96: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k747 in k607 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void C_ccall f_749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_749,c,av);}
C_trace(C_text("snow/srfi/170.scm:95: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t1;
tp(5,av2);}}

/* k759 in k600 in k597 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_761,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(0));
C_trace(C_text("snow/srfi/170.scm:94: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[34];
av2[4]=t2;
tp(5,av2);}}

/* k763 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_765,c,av);}
C_trace(C_text("snow/srfi/170.scm:89: handle-errors"));
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
f_396(3,av2);}}

/* k767 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_769,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_773,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:91: pffi-string->pointer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k771 in k767 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_773,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:92: pffi-pointer-null"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
tp(2,av2);}}

/* k775 in k771 in k767 in k594 in file-info in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_777,c,av);}
C_trace(C_text("snow/srfi/170.scm:89: uv-fs-stat"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
tp(6,av2);}}

/* file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_779,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_783,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:113: uv-fs-t-make"));
t4=C_fast_retrieve(lf[3]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_355(2,av2);}}

/* k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_783,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:114: file-info:fname/port"));
t3=C_fast_retrieve(lf[30]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
f_574(3,av2);}}

/* k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_786,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_828,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:115: uv-default-loop"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t3;
tp(2,av2);}}

/* k787 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_789,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_824,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:119: file-exists?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[42]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k802 in k822 in k787 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_804,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k806 in k822 in k787 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void C_ccall f_808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_808,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_812,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:124: uv-fs-get-ptr"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k810 in k806 in k822 in k787 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in ... */
static void C_ccall f_812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_812,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:125: pffi-pointer-null"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
tp(2,av2);}}

/* k814 in k810 in k806 in k822 in k787 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void C_ccall f_816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_816,c,av);}
C_trace(C_text("snow/srfi/170.scm:122: uv-fs-closedir"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[41]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
tp(6,av2);}}

/* k822 in k787 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_824,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_nequalp(((C_word*)t0)[3],C_fix(-20));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_808,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:122: uv-default-loop"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t4;
tp(2,av2);}}}}

/* k826 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_828,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:117: pffi-string->pointer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k830 in k826 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_832,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:118: pffi-pointer-null"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
tp(2,av2);}}

/* k834 in k830 in k826 in k784 in k781 in file-info-directory? in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void C_ccall f_836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_836,c,av);}
C_trace(C_text("snow/srfi/170.scm:115: uv-fs-opendir"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[43]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[43]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
tp(6,av2);}}

/* create-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_838,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_842,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:130: uv-fs-t-make"));
t5=C_fast_retrieve(lf[3]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_355(2,av2);}}

/* k840 in create-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_842(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_842,c,av);}
a=C_alloc(10);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fix(509):C_i_car(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_852,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_856,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:132: uv-default-loop"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t5;
tp(2,av2);}}

/* k850 in k840 in create-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_852,c,av);}
C_trace(C_text("snow/srfi/170.scm:132: handle-errors"));
t2=C_fast_retrieve(lf[9]);{
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
f_396(4,av2);}}

/* k854 in k840 in create-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_856,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_860,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:134: pffi-string->pointer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k858 in k854 in k840 in create-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_860,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("snow/srfi/170.scm:136: pffi-pointer-null"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
tp(2,av2);}}

/* k862 in k858 in k854 in k840 in create-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_864,c,av);}
C_trace(C_text("snow/srfi/170.scm:132: uv-fs-mkdir"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=t1;
tp(7,av2);}}

/* delete-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_872,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_876,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:141: uv-fs-t-make"));
t4=C_fast_retrieve(lf[3]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_355(2,av2);}}

/* k874 in delete-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_876,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_887,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:143: uv-default-loop"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t3;
tp(2,av2);}}

/* k881 in k874 in delete-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_883,c,av);}
C_trace(C_text("snow/srfi/170.scm:142: handle-errors"));
t2=C_fast_retrieve(lf[9]);{
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
f_396(4,av2);}}

/* k885 in k874 in delete-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_887,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_891,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:145: pffi-string->pointer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k889 in k885 in k874 in delete-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_891,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("snow/srfi/170.scm:146: pffi-pointer-null"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
tp(2,av2);}}

/* k893 in k889 in k885 in k874 in delete-directory in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_895,c,av);}
C_trace(C_text("snow/srfi/170.scm:143: uv-fs-rmdir"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[47]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[47]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
tp(6,av2);}}

/* directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_897(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_897,c,av);}
a=C_alloc(19);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_rest_nullp(c,3);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t15=C_set_block_item(t4,0,t14);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_906,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t12,a[6]=t4,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("snow/srfi/170.scm:152: uv-fs-t-make"));
t17=C_fast_retrieve(lf[3]);{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
f_355(2,av2);}}

/* k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_906(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_906,c,av);}
a=C_alloc(17);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_998,a[2]=t3,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1002,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("snow/srfi/170.scm:153: uv-default-loop"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2=av;
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t5;
tp(2,av2);}}

/* k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_910,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_990,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:159: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=lf[7];
tp(3,av2);}}

/* k912 in k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_914(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_914,c,av);}
a=C_alloc(12);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word)li28),tmp=(C_word)a,a+=8,tmp));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_982,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:174: looper"));
t6=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}

/* f_920 in k912 in k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_920,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("snow/srfi/170.scm:165: uv-fs-scandir-next"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[51]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=((C_word*)((C_word*)t0)[5])[1];
tp(4,av2);}}

/* k922 */
static void C_ccall f_924(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_924,c,av);}
a=C_alloc(12);
if(C_truep(C_i_nequalp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_975,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("snow/srfi/170.scm:167: pffi-pointer-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=lf[7];
av2[4]=C_fix(0);
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k931 in k922 */
static void C_ccall f_933(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_933,c,av);}
a=C_alloc(8);
t2=C_fixnum_greaterp(C_u_i_string_length(t1),C_fix(0));
t3=(C_truep(t2)?C_u_i_char_equalp(C_i_string_ref(t1,C_fix(0)),C_make_character(46)):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,t1);
C_trace(C_text("snow/srfi/170.scm:170: scheme#append"));
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
C_trace(C_text("snow/srfi/170.scm:173: looper"));
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,t1);
C_trace(C_text("snow/srfi/170.scm:171: scheme#append"));
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k947 in k931 in k922 */
static void C_ccall f_949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_949,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("snow/srfi/170.scm:173: looper"));
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k955 in k931 in k922 */
static void C_ccall f_957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_957,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("snow/srfi/170.scm:173: looper"));
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k973 in k922 */
static void C_ccall f_975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_975,c,av);}
C_trace(C_text("snow/srfi/170.scm:167: scheme#string-copy"));
t2=C_fast_retrieve(lf[50]);{
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

/* k977 in k922 */
static void C_ccall f_979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_979,c,av);}
C_trace(C_text("snow/srfi/170.scm:167: pffi-pointer->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k980 in k912 in k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_982,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k988 in k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_990,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_994,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("snow/srfi/170.scm:160: pffi-size-of"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=lf[5];
tp(3,av2);}}

/* k992 in k988 in k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_994,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va1059,a[2]=((C_word*)t0)[2],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t3=t2;
va1059(t3,C_s_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* k996 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 */
static void C_ccall f_998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_998,c,av);}
C_trace(C_text("snow/srfi/170.scm:153: handle-errors"));
t2=C_fast_retrieve(lf[9]);{
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
f_396(4,av2);}}

/* toplevel */
static int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(843))){
C_save(t1);
C_rereclaim2(843*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,86);
lf[0]=C_h_intern(&lf[0],5, C_text("slash"));
lf[1]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[2]=C_h_intern(&lf[2],5, C_text("UV-FS"));
lf[3]=C_h_intern(&lf[3],12, C_text("uv-fs-t-make"));
lf[4]=C_h_intern(&lf[4],17, C_text("pffi-pointer-set!"));
lf[5]=C_h_intern(&lf[5],3, C_text("int"));
lf[6]=C_h_intern(&lf[6],12, C_text("pffi-size-of"));
lf[7]=C_h_intern(&lf[7],7, C_text("pointer"));
lf[8]=C_h_intern(&lf[8],21, C_text("pffi-pointer-allocate"));
lf[9]=C_h_intern(&lf[9],13, C_text("handle-errors"));
lf[10]=C_h_intern(&lf[10],17, C_text("raise-continuable"));
lf[11]=C_h_intern(&lf[11],20, C_text("pffi-pointer->string"));
lf[12]=C_h_intern(&lf[12],11, C_text("uv-strerror"));
lf[13]=C_h_intern(&lf[13],22, C_text("uv-translate-sys-error"));
lf[14]=C_h_intern(&lf[14],16, C_text("file-info-record"));
lf[15]=C_h_intern(&lf[15],21, C_text("file-info-record-make"));
lf[16]=C_h_intern(&lf[16],10, C_text("file-info?"));
lf[17]=C_h_intern(&lf[17],16, C_text("file-info:device"));
lf[18]=C_h_intern(&lf[18],15, C_text("file-info:inode"));
lf[19]=C_h_intern(&lf[19],14, C_text("file-info:mode"));
lf[20]=C_h_intern(&lf[20],16, C_text("file-info:nlinks"));
lf[21]=C_h_intern(&lf[21],13, C_text("file-info:uid"));
lf[22]=C_h_intern(&lf[22],13, C_text("file-info:gid"));
lf[23]=C_h_intern(&lf[23],14, C_text("file-info:rdev"));
lf[24]=C_h_intern(&lf[24],14, C_text("file-info:size"));
lf[25]=C_h_intern(&lf[25],17, C_text("file-info:blksize"));
lf[26]=C_h_intern(&lf[26],16, C_text("file-info:blocks"));
lf[27]=C_h_intern(&lf[27],15, C_text("file-info:atime"));
lf[28]=C_h_intern(&lf[28],15, C_text("file-info:mtime"));
lf[29]=C_h_intern(&lf[29],15, C_text("file-info:ctime"));
lf[30]=C_h_intern(&lf[30],20, C_text("file-info:fname/port"));
lf[31]=C_h_intern(&lf[31],17, C_text("file-info:follow?"));
lf[32]=C_h_intern(&lf[32],9, C_text("file-info"));
lf[33]=C_h_intern(&lf[33],16, C_text("pffi-pointer-get"));
lf[34]=C_h_intern(&lf[34],6, C_text("uint64"));
lf[35]=C_h_intern(&lf[35],13, C_text("uv-fs-get-ptr"));
lf[36]=C_h_intern(&lf[36],10, C_text("uv-fs-stat"));
lf[37]=C_h_intern(&lf[37],17, C_text("pffi-pointer-null"));
lf[38]=C_h_intern(&lf[38],20, C_text("pffi-string->pointer"));
lf[39]=C_h_intern(&lf[39],15, C_text("uv-default-loop"));
lf[40]=C_h_intern(&lf[40],20, C_text("file-info-directory?"));
lf[41]=C_h_intern(&lf[41],14, C_text("uv-fs-closedir"));
lf[42]=C_h_intern(&lf[42],12, C_text("file-exists?"));
lf[43]=C_h_intern(&lf[43],13, C_text("uv-fs-opendir"));
lf[44]=C_h_intern(&lf[44],16, C_text("create-directory"));
lf[45]=C_h_intern(&lf[45],11, C_text("uv-fs-mkdir"));
lf[46]=C_h_intern(&lf[46],16, C_text("delete-directory"));
lf[47]=C_h_intern(&lf[47],11, C_text("uv-fs-rmdir"));
lf[48]=C_h_intern(&lf[48],15, C_text("directory-files"));
lf[49]=C_h_intern(&lf[49],13, C_text("scheme#append"));
lf[50]=C_h_intern(&lf[50],18, C_text("scheme#string-copy"));
lf[51]=C_h_intern(&lf[51],18, C_text("uv-fs-scandir-next"));
lf[52]=C_h_intern(&lf[52],13, C_text("uv-fs-scandir"));
lf[53]=C_h_intern(&lf[53],34, C_text("chicken.base#implicit-exit-handler"));
lf[54]=C_h_intern(&lf[54],11, C_text("pffi-define"));
lf[55]=C_h_intern(&lf[55],5, C_text("libuv"));
lf[56]=C_h_intern(&lf[56],13, C_text("uv_fs_get_ptr"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[58]=C_h_intern(&lf[58],18, C_text("uv_fs_scandir_next"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[60]=C_h_intern(&lf[60],13, C_text("uv_fs_scandir"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\003\001\151\156\164\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[62]=C_h_intern(&lf[62],14, C_text("uv_fs_closedir"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[64]=C_h_intern(&lf[64],13, C_text("uv_fs_opendir"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[66]=C_h_intern(&lf[66],11, C_text("uv_fs_rmdir"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[68]=C_h_intern(&lf[68],11, C_text("uv_fs_mkdir"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\003\001\151\156\164\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[70]=C_h_intern(&lf[70],10, C_text("uv_fs_stat"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\007\001\160\157\151\156\164\145\162\376\377\016"));
lf[72]=C_h_intern(&lf[72],11, C_text("uv_strerror"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\151\156\164\376\377\016"));
lf[74]=C_h_intern(&lf[74],22, C_text("uv_translate_sys_error"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\151\156\164\376\377\016"));
lf[76]=C_h_intern(&lf[76],15, C_text("uv_default_loop"));
lf[77]=C_h_intern(&lf[77],19, C_text("pffi-define-library"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\005\165\166\056\150\000\376\377\016"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\165\166\000"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\141\144\144\151\164\151\157\156\141\154\055\166\145\162\163\151\157\156\163\376\003\000\000\002\376\003\000\000\002\376\002\000\000\002\061\000\376\003\000\000\002\376\002\000\000\006\061\056\060\056\060\000\376\377\016\376\377\016\376\377\016"));
lf[81]=C_h_intern(&lf[81],4, C_text("libc"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\010\163\164\144\151\157\056\150\000\376\003\000\000\002\376\002\000\000\010\145\162\162\157\162\056\150\000\376\377\016"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\143\000"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\141\144\144\151\164\151\157\156\141\154\055\166\145\162\163\151\157\156\163\376\003\000\000\002\376\003\000\000\002\376\002\000\000\002\066\000\376\377\016\376\377\016\376\377\016"));
lf[85]=C_h_intern(&lf[85],9, C_text("pffi-init"));
C_register_lf2(lf,86,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_306,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va1049 in k392 in k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void va1049(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,2)))){
C_save_and_reclaim_args((void *)trva1049,2,t0,t1);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,t1,C_fix(512));
C_trace(C_text("snow/srfi/170.scm:46: pffi-pointer-allocate"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word av2[3];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

/* va1051 in k392 in k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void va1051(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,1)))){
C_save_and_reclaim_args((void *)trva1051,2,t0,t1);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
va1049(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* va1053 in k392 in k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void va1053(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,1)))){
C_save_and_reclaim_args((void *)trva1053,2,t0,t1);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
va1051(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* va1055 in k392 in k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void va1055(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,1)))){
C_save_and_reclaim_args((void *)trva1055,2,t0,t1);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
va1053(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* va1057 in k392 in k388 in k384 in k380 in k376 in k372 in uv-fs-t-make in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in ... */
static void va1057(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,1)))){
C_save_and_reclaim_args((void *)trva1057,2,t0,t1);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
va1055(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* va1059 in k992 in k988 in k908 in k904 in directory-files in k350 in k347 in k344 in k341 in k338 in k335 in k332 in k329 in k326 in k323 in k320 in k317 in k314 in k310 in k307 in k304 in ... */
static void va1059(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,2)))){
C_save_and_reclaim_args((void *)trva1059,2,t0,t1);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,t1,C_fix(512));
C_trace(C_text("snow/srfi/170.scm:159: pffi-pointer-allocate"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word av2[3];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[136] = {
{C_text("f_1002:snow_2fsrfi_2f170_2escm"),(void*)f_1002},
{C_text("f_1006:snow_2fsrfi_2f170_2escm"),(void*)f_1006},
{C_text("f_1010:snow_2fsrfi_2f170_2escm"),(void*)f_1010},
{C_text("f_1022:snow_2fsrfi_2f170_2escm"),(void*)f_1022},
{C_text("f_306:snow_2fsrfi_2f170_2escm"),(void*)f_306},
{C_text("f_309:snow_2fsrfi_2f170_2escm"),(void*)f_309},
{C_text("f_312:snow_2fsrfi_2f170_2escm"),(void*)f_312},
{C_text("f_316:snow_2fsrfi_2f170_2escm"),(void*)f_316},
{C_text("f_319:snow_2fsrfi_2f170_2escm"),(void*)f_319},
{C_text("f_322:snow_2fsrfi_2f170_2escm"),(void*)f_322},
{C_text("f_325:snow_2fsrfi_2f170_2escm"),(void*)f_325},
{C_text("f_328:snow_2fsrfi_2f170_2escm"),(void*)f_328},
{C_text("f_331:snow_2fsrfi_2f170_2escm"),(void*)f_331},
{C_text("f_334:snow_2fsrfi_2f170_2escm"),(void*)f_334},
{C_text("f_337:snow_2fsrfi_2f170_2escm"),(void*)f_337},
{C_text("f_340:snow_2fsrfi_2f170_2escm"),(void*)f_340},
{C_text("f_343:snow_2fsrfi_2f170_2escm"),(void*)f_343},
{C_text("f_346:snow_2fsrfi_2f170_2escm"),(void*)f_346},
{C_text("f_349:snow_2fsrfi_2f170_2escm"),(void*)f_349},
{C_text("f_352:snow_2fsrfi_2f170_2escm"),(void*)f_352},
{C_text("f_355:snow_2fsrfi_2f170_2escm"),(void*)f_355},
{C_text("f_359:snow_2fsrfi_2f170_2escm"),(void*)f_359},
{C_text("f_362:snow_2fsrfi_2f170_2escm"),(void*)f_362},
{C_text("f_366:snow_2fsrfi_2f170_2escm"),(void*)f_366},
{C_text("f_374:snow_2fsrfi_2f170_2escm"),(void*)f_374},
{C_text("f_378:snow_2fsrfi_2f170_2escm"),(void*)f_378},
{C_text("f_382:snow_2fsrfi_2f170_2escm"),(void*)f_382},
{C_text("f_386:snow_2fsrfi_2f170_2escm"),(void*)f_386},
{C_text("f_390:snow_2fsrfi_2f170_2escm"),(void*)f_390},
{C_text("f_394:snow_2fsrfi_2f170_2escm"),(void*)f_394},
{C_text("f_396:snow_2fsrfi_2f170_2escm"),(void*)f_396},
{C_text("f_400:snow_2fsrfi_2f170_2escm"),(void*)f_400},
{C_text("f_416:snow_2fsrfi_2f170_2escm"),(void*)f_416},
{C_text("f_420:snow_2fsrfi_2f170_2escm"),(void*)f_420},
{C_text("f_424:snow_2fsrfi_2f170_2escm"),(void*)f_424},
{C_text("f_431:snow_2fsrfi_2f170_2escm"),(void*)f_431},
{C_text("f_435:snow_2fsrfi_2f170_2escm"),(void*)f_435},
{C_text("f_439:snow_2fsrfi_2f170_2escm"),(void*)f_439},
{C_text("f_445:snow_2fsrfi_2f170_2escm"),(void*)f_445},
{C_text("f_451:snow_2fsrfi_2f170_2escm"),(void*)f_451},
{C_text("f_457:snow_2fsrfi_2f170_2escm"),(void*)f_457},
{C_text("f_466:snow_2fsrfi_2f170_2escm"),(void*)f_466},
{C_text("f_475:snow_2fsrfi_2f170_2escm"),(void*)f_475},
{C_text("f_484:snow_2fsrfi_2f170_2escm"),(void*)f_484},
{C_text("f_493:snow_2fsrfi_2f170_2escm"),(void*)f_493},
{C_text("f_502:snow_2fsrfi_2f170_2escm"),(void*)f_502},
{C_text("f_511:snow_2fsrfi_2f170_2escm"),(void*)f_511},
{C_text("f_520:snow_2fsrfi_2f170_2escm"),(void*)f_520},
{C_text("f_529:snow_2fsrfi_2f170_2escm"),(void*)f_529},
{C_text("f_538:snow_2fsrfi_2f170_2escm"),(void*)f_538},
{C_text("f_547:snow_2fsrfi_2f170_2escm"),(void*)f_547},
{C_text("f_556:snow_2fsrfi_2f170_2escm"),(void*)f_556},
{C_text("f_565:snow_2fsrfi_2f170_2escm"),(void*)f_565},
{C_text("f_574:snow_2fsrfi_2f170_2escm"),(void*)f_574},
{C_text("f_583:snow_2fsrfi_2f170_2escm"),(void*)f_583},
{C_text("f_592:snow_2fsrfi_2f170_2escm"),(void*)f_592},
{C_text("f_596:snow_2fsrfi_2f170_2escm"),(void*)f_596},
{C_text("f_599:snow_2fsrfi_2f170_2escm"),(void*)f_599},
{C_text("f_602:snow_2fsrfi_2f170_2escm"),(void*)f_602},
{C_text("f_609:snow_2fsrfi_2f170_2escm"),(void*)f_609},
{C_text("f_613:snow_2fsrfi_2f170_2escm"),(void*)f_613},
{C_text("f_617:snow_2fsrfi_2f170_2escm"),(void*)f_617},
{C_text("f_621:snow_2fsrfi_2f170_2escm"),(void*)f_621},
{C_text("f_625:snow_2fsrfi_2f170_2escm"),(void*)f_625},
{C_text("f_629:snow_2fsrfi_2f170_2escm"),(void*)f_629},
{C_text("f_633:snow_2fsrfi_2f170_2escm"),(void*)f_633},
{C_text("f_637:snow_2fsrfi_2f170_2escm"),(void*)f_637},
{C_text("f_641:snow_2fsrfi_2f170_2escm"),(void*)f_641},
{C_text("f_645:snow_2fsrfi_2f170_2escm"),(void*)f_645},
{C_text("f_649:snow_2fsrfi_2f170_2escm"),(void*)f_649},
{C_text("f_653:snow_2fsrfi_2f170_2escm"),(void*)f_653},
{C_text("f_657:snow_2fsrfi_2f170_2escm"),(void*)f_657},
{C_text("f_665:snow_2fsrfi_2f170_2escm"),(void*)f_665},
{C_text("f_673:snow_2fsrfi_2f170_2escm"),(void*)f_673},
{C_text("f_681:snow_2fsrfi_2f170_2escm"),(void*)f_681},
{C_text("f_689:snow_2fsrfi_2f170_2escm"),(void*)f_689},
{C_text("f_697:snow_2fsrfi_2f170_2escm"),(void*)f_697},
{C_text("f_705:snow_2fsrfi_2f170_2escm"),(void*)f_705},
{C_text("f_713:snow_2fsrfi_2f170_2escm"),(void*)f_713},
{C_text("f_721:snow_2fsrfi_2f170_2escm"),(void*)f_721},
{C_text("f_729:snow_2fsrfi_2f170_2escm"),(void*)f_729},
{C_text("f_737:snow_2fsrfi_2f170_2escm"),(void*)f_737},
{C_text("f_745:snow_2fsrfi_2f170_2escm"),(void*)f_745},
{C_text("f_749:snow_2fsrfi_2f170_2escm"),(void*)f_749},
{C_text("f_761:snow_2fsrfi_2f170_2escm"),(void*)f_761},
{C_text("f_765:snow_2fsrfi_2f170_2escm"),(void*)f_765},
{C_text("f_769:snow_2fsrfi_2f170_2escm"),(void*)f_769},
{C_text("f_773:snow_2fsrfi_2f170_2escm"),(void*)f_773},
{C_text("f_777:snow_2fsrfi_2f170_2escm"),(void*)f_777},
{C_text("f_779:snow_2fsrfi_2f170_2escm"),(void*)f_779},
{C_text("f_783:snow_2fsrfi_2f170_2escm"),(void*)f_783},
{C_text("f_786:snow_2fsrfi_2f170_2escm"),(void*)f_786},
{C_text("f_789:snow_2fsrfi_2f170_2escm"),(void*)f_789},
{C_text("f_804:snow_2fsrfi_2f170_2escm"),(void*)f_804},
{C_text("f_808:snow_2fsrfi_2f170_2escm"),(void*)f_808},
{C_text("f_812:snow_2fsrfi_2f170_2escm"),(void*)f_812},
{C_text("f_816:snow_2fsrfi_2f170_2escm"),(void*)f_816},
{C_text("f_824:snow_2fsrfi_2f170_2escm"),(void*)f_824},
{C_text("f_828:snow_2fsrfi_2f170_2escm"),(void*)f_828},
{C_text("f_832:snow_2fsrfi_2f170_2escm"),(void*)f_832},
{C_text("f_836:snow_2fsrfi_2f170_2escm"),(void*)f_836},
{C_text("f_838:snow_2fsrfi_2f170_2escm"),(void*)f_838},
{C_text("f_842:snow_2fsrfi_2f170_2escm"),(void*)f_842},
{C_text("f_852:snow_2fsrfi_2f170_2escm"),(void*)f_852},
{C_text("f_856:snow_2fsrfi_2f170_2escm"),(void*)f_856},
{C_text("f_860:snow_2fsrfi_2f170_2escm"),(void*)f_860},
{C_text("f_864:snow_2fsrfi_2f170_2escm"),(void*)f_864},
{C_text("f_872:snow_2fsrfi_2f170_2escm"),(void*)f_872},
{C_text("f_876:snow_2fsrfi_2f170_2escm"),(void*)f_876},
{C_text("f_883:snow_2fsrfi_2f170_2escm"),(void*)f_883},
{C_text("f_887:snow_2fsrfi_2f170_2escm"),(void*)f_887},
{C_text("f_891:snow_2fsrfi_2f170_2escm"),(void*)f_891},
{C_text("f_895:snow_2fsrfi_2f170_2escm"),(void*)f_895},
{C_text("f_897:snow_2fsrfi_2f170_2escm"),(void*)f_897},
{C_text("f_906:snow_2fsrfi_2f170_2escm"),(void*)f_906},
{C_text("f_910:snow_2fsrfi_2f170_2escm"),(void*)f_910},
{C_text("f_914:snow_2fsrfi_2f170_2escm"),(void*)f_914},
{C_text("f_920:snow_2fsrfi_2f170_2escm"),(void*)f_920},
{C_text("f_924:snow_2fsrfi_2f170_2escm"),(void*)f_924},
{C_text("f_933:snow_2fsrfi_2f170_2escm"),(void*)f_933},
{C_text("f_949:snow_2fsrfi_2f170_2escm"),(void*)f_949},
{C_text("f_957:snow_2fsrfi_2f170_2escm"),(void*)f_957},
{C_text("f_975:snow_2fsrfi_2f170_2escm"),(void*)f_975},
{C_text("f_979:snow_2fsrfi_2f170_2escm"),(void*)f_979},
{C_text("f_982:snow_2fsrfi_2f170_2escm"),(void*)f_982},
{C_text("f_990:snow_2fsrfi_2f170_2escm"),(void*)f_990},
{C_text("f_994:snow_2fsrfi_2f170_2escm"),(void*)f_994},
{C_text("f_998:snow_2fsrfi_2f170_2escm"),(void*)f_998},
{C_text("toplevel:snow_2fsrfi_2f170_2escm"),(void*)C_toplevel},
{C_text("va1049:snow_2fsrfi_2f170_2escm"),(void*)va1049},
{C_text("va1051:snow_2fsrfi_2f170_2escm"),(void*)va1051},
{C_text("va1053:snow_2fsrfi_2f170_2escm"),(void*)va1053},
{C_text("va1055:snow_2fsrfi_2f170_2escm"),(void*)va1055},
{C_text("va1057:snow_2fsrfi_2f170_2escm"),(void*)va1057},
{C_text("va1059:snow_2fsrfi_2f170_2escm"),(void*)va1059},
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
o|eliminated procedure checks: 16 
o|specializations:
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#string-length string)
(o e)|safe calls: 46 
(o e)|assignments to immediate values: 2 
o|inlining procedure: k398 
o|inlining procedure: k398 
o|inlining procedure: k790 
o|inlining procedure: k790 
o|removed side-effect free assignment to unused variable: result155 
o|inlining procedure: k925 
o|inlining procedure: k943 
o|inlining procedure: k943 
o|substituted constant variable: a967 
o|substituted constant variable: a968 
o|substituted constant variable: a971 
o|inlining procedure: k925 
o|replaced variables: 147 
o|removed binding forms: 70 
o|substituted constant variable: r7911027 
o|inlining procedure: k934 
o|inlining procedure: k934 
o|inlining procedure: k934 
o|replaced variables: 1 
o|removed binding forms: 134 
o|removed binding forms: 10 
o|removed binding forms: 1 
o|simplifications: ((let . 2) (if . 3) (##core#call . 62)) 
o|  call simplifications:
o|    scheme#vector
o|    chicken.fixnum#fx>
o|    scheme#list	3
o|    scheme#car	2
o|    scheme#=	2
o|    scheme#not	2
o|    scheme#*	13
o|    ##sys#check-structure	15
o|    ##sys#block-ref	15
o|    ##sys#structure?
o|    ##sys#make-structure
o|    scheme#<
o|    scheme#null?	3
o|    scheme#+	2
o|contracted procedure: k401 
o|contracted procedure: k407 
o|contracted procedure: k441 
o|contracted procedure: k459 
o|contracted procedure: k468 
o|contracted procedure: k477 
o|contracted procedure: k486 
o|contracted procedure: k495 
o|contracted procedure: k504 
o|contracted procedure: k513 
o|contracted procedure: k522 
o|contracted procedure: k531 
o|contracted procedure: k540 
o|contracted procedure: k549 
o|contracted procedure: k558 
o|contracted procedure: k567 
o|contracted procedure: k576 
o|contracted procedure: k585 
o|contracted procedure: k659 
o|contracted procedure: k667 
o|contracted procedure: k675 
o|contracted procedure: k683 
o|contracted procedure: k691 
o|contracted procedure: k699 
o|contracted procedure: k707 
o|contracted procedure: k715 
o|contracted procedure: k723 
o|contracted procedure: k731 
o|contracted procedure: k739 
o|contracted procedure: k755 
o|contracted procedure: k793 
o|contracted procedure: k818 
o|contracted procedure: k799 
o|contracted procedure: k865 
o|contracted procedure: k843 
o|contracted procedure: k1011 
o|contracted procedure: k900 
o|contracted procedure: k916 
o|contracted procedure: k928 
o|contracted procedure: k962 
o|contracted procedure: k940 
o|contracted procedure: k951 
o|contracted procedure: k959 
o|simplifications: ((let . 5) (##core#call . 8)) 
o|  call simplifications:
o|    scheme#+	8
o|replaced variables: 1 
o|removed binding forms: 43 
o|contracted procedure: k368 
(o x)|known list op on rest arg sublist: ##core#rest-null? irritants20 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? args152 0 
(o x)|known list op on rest arg sublist: ##core#rest-car args152 0 
o|substituted constant variable: r917 
o|contracted procedure: k984 
o|removed binding forms: 3 
o|removed binding forms: 1 
o|customizable procedures: (va1059 va1057 va1055 va1053 va1051 va1049) 
o|calls to known targets: 17 
o|unused rest argument: irritants20 f_396 
o|unused rest argument: args152 f_897 
o|fast box initializations: 1 
*/
/* end of file */
