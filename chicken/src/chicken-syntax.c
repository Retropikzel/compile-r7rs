/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken-syntax
   uses: internal expand library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[301];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li2[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,7),40,97,54,48,48,54,41,0};
static C_char li5[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,51,51,55,53,32,103,51,51,56,55,32,103,51,51,56,56,41,0,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,19),40,97,54,48,49,54,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,22),40,97,53,57,56,54,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,14),40,103,51,51,51,50,32,99,32,98,111,100,121,41,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,51,51,50,55,32,103,51,51,50,56,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,22),40,97,54,50,52,56,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,50,56,52,32,103,51,50,57,54,41,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,16),40,97,53,56,55,56,32,102,111,114,109,32,114,32,99,41};
static C_char li14[] C_aligned={C_lihdr(0,0,16),40,97,54,51,49,56,32,102,111,114,109,32,114,32,99,41};
static C_char li15[] C_aligned={C_lihdr(0,0,29),40,103,117,97,114,100,45,97,117,120,32,114,101,114,97,105,115,101,32,98,111,100,121,32,109,111,114,101,41,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,16),40,97,54,51,54,55,32,102,111,114,109,32,114,32,99,41};
static C_char li17[] C_aligned={C_lihdr(0,0,16),40,97,54,55,53,53,32,102,111,114,109,32,114,32,99,41};
static C_char li18[] C_aligned={C_lihdr(0,0,13),40,97,54,56,52,52,32,120,32,114,32,99,41,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,16),40,97,54,56,54,50,32,102,111,114,109,32,114,32,99,41};
static C_char li20[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,16),40,97,54,57,50,55,32,102,111,114,109,32,114,32,99,41};
static C_char li22[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char li23[] C_aligned={C_lihdr(0,0,16),40,97,55,49,50,50,32,102,111,114,109,32,114,32,99,41};
static C_char li24[] C_aligned={C_lihdr(0,0,13),40,103,50,57,56,54,32,118,110,97,109,101,41,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,7),40,103,51,48,49,50,41,0};
static C_char li26[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,48,54,32,103,51,48,49,56,41,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,56,53,32,103,50,57,57,50,41,0,0,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,53,57,32,103,50,57,55,49,41,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,16),40,97,55,50,57,52,32,102,111,114,109,32,114,32,99,41};
static C_char li31[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,16),40,97,55,56,48,54,32,102,111,114,109,32,114,32,99,41};
static C_char li33[] C_aligned={C_lihdr(0,0,16),40,97,55,57,54,54,32,102,111,114,109,32,114,32,99,41};
static C_char li34[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char li37[] C_aligned={C_lihdr(0,0,9),40,103,50,56,48,51,32,118,41,0,0,0,0,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,11),40,103,50,56,54,48,32,118,97,114,41,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,53,52,32,103,50,56,54,54,41,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,50,53,32,103,50,56,51,55,41,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,57,55,32,103,50,56,48,57,41,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,54,55,32,103,50,55,55,57,41,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,16),40,97,56,48,52,51,32,102,111,114,109,32,114,32,99,41};
static C_char li45[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,16),40,97,56,52,57,49,32,102,111,114,109,32,114,32,99,41};
static C_char li47[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,54,54,55,32,120,115,32,105,100,41};
static C_char li48[] C_aligned={C_lihdr(0,0,16),40,97,56,54,51,51,32,102,111,114,109,32,114,32,99,41};
static C_char li49[] C_aligned={C_lihdr(0,0,16),40,97,56,55,51,55,32,102,111,114,109,32,114,32,99,41};
static C_char li50[] C_aligned={C_lihdr(0,0,13),40,97,56,55,56,49,32,120,32,114,32,99,41,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,54,49,53,32,103,50,54,50,55,32,103,50,54,50,56,41,0,0,0,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,54,55,32,103,50,53,55,57,41,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,13),40,97,56,56,53,52,32,97,32,95,32,95,41,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,53,57,49,32,103,50,53,57,50,32,103,50,53,57,48,41,0};
static C_char li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,51,56,32,103,50,53,53,48,41,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,49,50,32,103,50,53,50,52,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,16),40,97,56,56,48,51,32,102,111,114,109,32,114,32,99,41};
static C_char li58[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char li59[] C_aligned={C_lihdr(0,0,16),40,97,57,48,54,49,32,102,111,114,109,32,114,32,99,41};
static C_char li60[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,51,49,56,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,51,49,57,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char li62[] C_aligned={C_lihdr(0,0,9),40,103,50,51,55,57,32,118,41,0,0,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,9),40,103,50,52,51,48,32,118,41,0,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,50,52,32,103,50,52,51,54,41,0,0,0,0};
static C_char li66[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char li67[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,53,57,32,103,50,52,55,49,41,0,0,0,0};
static C_char li68[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,55,51,32,103,50,51,56,53,41,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,51,53,32,103,50,51,52,55,41,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,16),40,97,57,49,49,53,32,102,111,114,109,32,114,32,99,41};
static C_char li73[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,55,52,32,103,50,50,56,54,41,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,54,52,32,103,50,50,55,49,41,0,0,0,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,22),40,97,57,54,50,57,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,16),40,97,57,53,57,50,32,102,111,114,109,32,114,32,99,41};
static C_char li77[] C_aligned={C_lihdr(0,0,16),40,97,57,55,50,50,32,102,111,114,109,32,114,32,99,41};
static C_char li78[] C_aligned={C_lihdr(0,0,16),40,97,57,55,52,51,32,102,111,114,109,32,114,32,99,41};
static C_char li79[] C_aligned={C_lihdr(0,0,16),40,97,57,55,55,49,32,102,111,114,109,32,114,32,99,41};
static C_char li80[] C_aligned={C_lihdr(0,0,7),40,97,57,56,49,48,41,0};
static C_char li81[] C_aligned={C_lihdr(0,0,48),40,97,57,56,49,54,32,110,97,109,101,50,50,48,49,32,108,105,98,50,50,48,51,32,95,50,50,48,53,32,95,50,50,48,53,32,95,50,50,48,53,32,95,50,50,48,53,41};
static C_char li82[] C_aligned={C_lihdr(0,0,9),40,103,50,49,56,57,32,120,41,0,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,56,51,32,103,50,49,57,53,41,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,13),40,97,57,55,57,53,32,120,32,114,32,99,41,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,9),40,103,49,55,55,52,32,122,41,0,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,7),40,103,49,56,48,50,41,0};
static C_char li87[] C_aligned={C_lihdr(0,0,7),40,103,49,56,51,48,41,0};
static C_char li88[] C_aligned={C_lihdr(0,0,14),40,103,49,57,53,51,32,115,32,116,101,109,112,41,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,49,51,57,32,103,50,49,53,49,32,103,50,49,53,50,41,0,0,0,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,49,48,51,32,103,50,49,49,53,32,103,50,49,49,54,41,0,0,0,0,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,50,48,54,49,32,103,50,48,55,51,32,103,50,48,55,52,32,103,50,48,55,53,41};
static C_char li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,50,53,32,103,50,48,51,55,32,103,50,48,51,56,41,0,0,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,56,57,32,103,50,48,48,49,32,103,50,48,48,50,41,0,0,0,0,0,0};
static C_char li94[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,52,55,32,103,49,57,53,57,32,103,49,57,54,48,32,103,49,57,54,49,41};
static C_char li95[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,49,54,32,103,49,57,50,56,32,103,49,57,50,57,41,0,0,0,0,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,56,53,32,103,49,56,57,55,32,103,49,56,57,56,41,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,53,52,32,103,49,56,54,54,32,103,49,56,54,55,41,0,0,0,0,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,56,50,52,32,103,49,56,51,54,41,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,57,54,32,103,49,56,48,56,41,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,54,56,32,103,49,55,56,48,41,0,0,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,52,49,32,103,49,55,53,51,41,0,0,0,0};
static C_char li102[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,49,52,32,103,49,55,50,54,41,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,16),40,97,57,56,55,53,32,102,111,114,109,32,114,32,99,41};
static C_char li104[] C_aligned={C_lihdr(0,0,7),40,103,49,52,49,55,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,7),40,103,49,52,52,53,41,0};
static C_char li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,54,54,56,32,103,49,54,56,48,32,103,49,54,56,49,41,0,0,0,0,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,54,51,50,32,103,49,54,52,52,32,103,49,54,52,53,41,0,0,0,0,0,0};
static C_char li108[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,57,54,32,103,49,54,48,56,32,103,49,54,48,57,41,0,0,0,0,0,0};
static C_char li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,54,48,32,103,49,53,55,50,32,103,49,53,55,51,41,0,0,0,0,0,0};
static C_char li110[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,50,54,32,103,49,53,51,56,32,103,49,53,51,57,41,0,0,0,0,0,0};
static C_char li111[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char li112[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,54,57,32,103,49,52,56,49,32,103,49,52,56,50,41,0,0,0,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,57,48,32,103,49,53,48,50,41,0,0,0,0};
static C_char li114[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,51,57,32,103,49,52,53,49,41,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,49,49,32,103,49,52,50,51,41,0,0,0,0};
static C_char li116[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,56,52,32,103,49,51,57,54,41,0,0,0,0};
static C_char li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,56,48,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,52,55,32,103,49,51,53,57,41,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,17),40,97,49,49,52,53,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li120[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,49,48,32,103,49,51,50,50,41,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,50,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,55,51,32,103,49,50,56,53,41,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,56,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,53,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,55,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,56,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li127[] C_aligned={C_lihdr(0,0,12),40,103,49,49,55,52,32,115,108,111,116,41,0,0,0,0};
static C_char li128[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,54,56,32,103,49,49,56,48,41,0,0,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,56,49,32,120,32,114,32,99,41,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,17),40,97,49,50,49,55,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,49,48,48,32,108,32,108,101,110,41};
static C_char li133[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,49,48,48,32,108,32,108,101,110,41};
static C_char li134[] C_aligned={C_lihdr(0,0,29),40,97,49,50,49,57,51,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char li135[] C_aligned={C_lihdr(0,0,29),40,97,49,50,51,50,49,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char li136[] C_aligned={C_lihdr(0,0,17),40,97,49,50,52,49,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,14),40,97,49,50,52,52,55,32,120,32,114,32,99,41,0,0};
static C_char li138[] C_aligned={C_lihdr(0,0,14),40,97,49,50,52,55,55,32,120,32,114,32,99,41,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,14),40,97,49,50,52,57,52,32,120,32,114,32,99,41,0,0};
static C_char li140[] C_aligned={C_lihdr(0,0,13),40,103,57,56,53,32,99,108,97,117,115,101,41,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,55,57,32,103,57,57,49,41,0,0,0,0,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,14),40,97,49,50,53,53,52,32,120,32,114,32,99,41,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,50,53,32,103,57,51,55,32,103,57,51,56,41,0};
static C_char li144[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,57,49,32,103,57,48,51,41,0,0,0,0,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char li146[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,55,55,32,120,32,114,32,99,41,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,17),40,97,49,51,48,57,53,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,50,52,32,103,56,51,54,41,0,0,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,57,54,32,103,56,48,56,41,0,0,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,52,57,32,108,32,108,101,110,41,0};
static C_char li152[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,52,57,32,108,32,108,101,110,41,0};
static C_char li153[] C_aligned={C_lihdr(0,0,29),40,97,49,51,48,50,55,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char li154[] C_aligned={C_lihdr(0,0,14),40,97,49,51,51,49,54,32,120,32,114,32,99,41,0,0};
static C_char li155[] C_aligned={C_lihdr(0,0,8),40,97,49,51,51,55,52,41};
static C_char li156[] C_aligned={C_lihdr(0,0,32),40,97,49,51,51,56,52,32,116,121,112,101,55,48,54,32,112,114,101,100,55,48,56,32,112,117,114,101,55,49,48,41};
static C_char li157[] C_aligned={C_lihdr(0,0,14),40,97,49,51,51,53,52,32,120,32,114,32,99,41,0,0};
static C_char li158[] C_aligned={C_lihdr(0,0,6),40,103,54,51,56,41,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,51,50,32,103,54,52,52,41,0,0,0,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char li161[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,54,51,32,103,54,55,53,41,0,0,0,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,17),40,97,49,51,52,54,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,17),40,97,49,51,55,51,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10007)
static void C_ccall f_10007(C_word c,C_word *av) C_noret;
C_noret_decl(f_10055)
static void C_ccall f_10055(C_word c,C_word *av) C_noret;
C_noret_decl(f_10059)
static void C_ccall f_10059(C_word c,C_word *av) C_noret;
C_noret_decl(f_10071)
static void C_ccall f_10071(C_word c,C_word *av) C_noret;
C_noret_decl(f_10083)
static void C_ccall f_10083(C_word c,C_word *av) C_noret;
C_noret_decl(f_10085)
static void f_10085(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10133)
static void f_10133(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10181)
static void f_10181(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10188)
static void f_10188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10258)
static C_word f_10258(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word *av) C_noret;
C_noret_decl(f_10280)
static void C_ccall f_10280(C_word c,C_word *av) C_noret;
C_noret_decl(f_10296)
static void C_ccall f_10296(C_word c,C_word *av) C_noret;
C_noret_decl(f_10300)
static void C_ccall f_10300(C_word c,C_word *av) C_noret;
C_noret_decl(f_10312)
static void C_ccall f_10312(C_word c,C_word *av) C_noret;
C_noret_decl(f_10322)
static void f_10322(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10370)
static void f_10370(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10418)
static void f_10418(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10425)
static void f_10425(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10488)
static void f_10488(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10536)
static void f_10536(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10584)
static void f_10584(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10632)
static void f_10632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10657)
static void C_ccall f_10657(C_word c,C_word *av) C_noret;
C_noret_decl(f_10666)
static void f_10666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10691)
static void C_ccall f_10691(C_word c,C_word *av) C_noret;
C_noret_decl(f_10700)
static void f_10700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10725)
static void C_ccall f_10725(C_word c,C_word *av) C_noret;
C_noret_decl(f_10734)
static void f_10734(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10768)
static void f_10768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10804)
static void C_ccall f_10804(C_word c,C_word *av) C_noret;
C_noret_decl(f_10806)
static void C_ccall f_10806(C_word c,C_word *av) C_noret;
C_noret_decl(f_10810)
static void C_ccall f_10810(C_word c,C_word *av) C_noret;
C_noret_decl(f_10824)
static void C_ccall f_10824(C_word c,C_word *av) C_noret;
C_noret_decl(f_10828)
static void f_10828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10836)
static void C_ccall f_10836(C_word c,C_word *av) C_noret;
C_noret_decl(f_10839)
static void C_ccall f_10839(C_word c,C_word *av) C_noret;
C_noret_decl(f_10843)
static void f_10843(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10851)
static void C_ccall f_10851(C_word c,C_word *av) C_noret;
C_noret_decl(f_10854)
static void C_ccall f_10854(C_word c,C_word *av) C_noret;
C_noret_decl(f_10861)
static void C_ccall f_10861(C_word c,C_word *av) C_noret;
C_noret_decl(f_10885)
static void C_ccall f_10885(C_word c,C_word *av) C_noret;
C_noret_decl(f_10897)
static void C_ccall f_10897(C_word c,C_word *av) C_noret;
C_noret_decl(f_10901)
static void C_ccall f_10901(C_word c,C_word *av) C_noret;
C_noret_decl(f_10913)
static void C_ccall f_10913(C_word c,C_word *av) C_noret;
C_noret_decl(f_10923)
static void f_10923(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10971)
static void f_10971(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11029)
static void C_ccall f_11029(C_word c,C_word *av) C_noret;
C_noret_decl(f_11044)
static void C_ccall f_11044(C_word c,C_word *av) C_noret;
C_noret_decl(f_11048)
static void C_ccall f_11048(C_word c,C_word *av) C_noret;
C_noret_decl(f_11060)
static void C_ccall f_11060(C_word c,C_word *av) C_noret;
C_noret_decl(f_11070)
static void f_11070(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11118)
static void f_11118(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11174)
static void C_ccall f_11174(C_word c,C_word *av) C_noret;
C_noret_decl(f_11183)
static void C_ccall f_11183(C_word c,C_word *av) C_noret;
C_noret_decl(f_11190)
static void C_ccall f_11190(C_word c,C_word *av) C_noret;
C_noret_decl(f_11199)
static void C_ccall f_11199(C_word c,C_word *av) C_noret;
C_noret_decl(f_11201)
static void f_11201(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11251)
static void f_11251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11265)
static void C_ccall f_11265(C_word c,C_word *av) C_noret;
C_noret_decl(f_11271)
static void f_11271(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11319)
static void f_11319(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11353)
static void f_11353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11378)
static void C_ccall f_11378(C_word c,C_word *av) C_noret;
C_noret_decl(f_11387)
static void f_11387(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11412)
static void C_ccall f_11412(C_word c,C_word *av) C_noret;
C_noret_decl(f_11421)
static void f_11421(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11457)
static void C_ccall f_11457(C_word c,C_word *av) C_noret;
C_noret_decl(f_11459)
static void C_ccall f_11459(C_word c,C_word *av) C_noret;
C_noret_decl(f_11463)
static void C_ccall f_11463(C_word c,C_word *av) C_noret;
C_noret_decl(f_11484)
static void C_ccall f_11484(C_word c,C_word *av) C_noret;
C_noret_decl(f_11486)
static void f_11486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11522)
static void C_ccall f_11522(C_word c,C_word *av) C_noret;
C_noret_decl(f_11524)
static void C_ccall f_11524(C_word c,C_word *av) C_noret;
C_noret_decl(f_11528)
static void C_ccall f_11528(C_word c,C_word *av) C_noret;
C_noret_decl(f_11549)
static void C_ccall f_11549(C_word c,C_word *av) C_noret;
C_noret_decl(f_11551)
static void f_11551(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11587)
static void C_ccall f_11587(C_word c,C_word *av) C_noret;
C_noret_decl(f_11589)
static void C_ccall f_11589(C_word c,C_word *av) C_noret;
C_noret_decl(f_11593)
static void C_ccall f_11593(C_word c,C_word *av) C_noret;
C_noret_decl(f_11614)
static void C_ccall f_11614(C_word c,C_word *av) C_noret;
C_noret_decl(f_11616)
static void f_11616(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11652)
static void C_ccall f_11652(C_word c,C_word *av) C_noret;
C_noret_decl(f_11654)
static void C_ccall f_11654(C_word c,C_word *av) C_noret;
C_noret_decl(f_11658)
static void C_ccall f_11658(C_word c,C_word *av) C_noret;
C_noret_decl(f_11673)
static void C_ccall f_11673(C_word c,C_word *av) C_noret;
C_noret_decl(f_11675)
static void C_ccall f_11675(C_word c,C_word *av) C_noret;
C_noret_decl(f_11687)
static void C_ccall f_11687(C_word c,C_word *av) C_noret;
C_noret_decl(f_11689)
static void C_ccall f_11689(C_word c,C_word *av) C_noret;
C_noret_decl(f_11693)
static void C_ccall f_11693(C_word c,C_word *av) C_noret;
C_noret_decl(f_11715)
static void C_ccall f_11715(C_word c,C_word *av) C_noret;
C_noret_decl(f_11780)
static void C_ccall f_11780(C_word c,C_word *av) C_noret;
C_noret_decl(f_11782)
static void C_ccall f_11782(C_word c,C_word *av) C_noret;
C_noret_decl(f_11786)
static void C_ccall f_11786(C_word c,C_word *av) C_noret;
C_noret_decl(f_11792)
static void C_ccall f_11792(C_word c,C_word *av) C_noret;
C_noret_decl(f_11795)
static void C_ccall f_11795(C_word c,C_word *av) C_noret;
C_noret_decl(f_11798)
static void C_ccall f_11798(C_word c,C_word *av) C_noret;
C_noret_decl(f_11804)
static void C_ccall f_11804(C_word c,C_word *av) C_noret;
C_noret_decl(f_11807)
static void C_ccall f_11807(C_word c,C_word *av) C_noret;
C_noret_decl(f_11810)
static void C_ccall f_11810(C_word c,C_word *av) C_noret;
C_noret_decl(f_11814)
static void f_11814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11827)
static void f_11827(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11842)
static void C_ccall f_11842(C_word c,C_word *av) C_noret;
C_noret_decl(f_11874)
static void C_ccall f_11874(C_word c,C_word *av) C_noret;
C_noret_decl(f_11905)
static void C_ccall f_11905(C_word c,C_word *av) C_noret;
C_noret_decl(f_11907)
static void f_11907(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11923)
static void C_ccall f_11923(C_word c,C_word *av) C_noret;
C_noret_decl(f_11926)
static void C_ccall f_11926(C_word c,C_word *av) C_noret;
C_noret_decl(f_11929)
static void C_ccall f_11929(C_word c,C_word *av) C_noret;
C_noret_decl(f_11943)
static void C_ccall f_11943(C_word c,C_word *av) C_noret;
C_noret_decl(f_11955)
static void C_ccall f_11955(C_word c,C_word *av) C_noret;
C_noret_decl(f_11959)
static void f_11959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12052)
static void C_ccall f_12052(C_word c,C_word *av) C_noret;
C_noret_decl(f_12056)
static void C_ccall f_12056(C_word c,C_word *av) C_noret;
C_noret_decl(f_12071)
static void C_ccall f_12071(C_word c,C_word *av) C_noret;
C_noret_decl(f_12091)
static void C_ccall f_12091(C_word c,C_word *av) C_noret;
C_noret_decl(f_12097)
static void C_ccall f_12097(C_word c,C_word *av) C_noret;
C_noret_decl(f_12117)
static void C_ccall f_12117(C_word c,C_word *av) C_noret;
C_noret_decl(f_12125)
static void f_12125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12150)
static void C_ccall f_12150(C_word c,C_word *av) C_noret;
C_noret_decl(f_12160)
static void C_ccall f_12160(C_word c,C_word *av) C_noret;
C_noret_decl(f_12167)
static void C_ccall f_12167(C_word c,C_word *av) C_noret;
C_noret_decl(f_12171)
static void C_ccall f_12171(C_word c,C_word *av) C_noret;
C_noret_decl(f_12175)
static void C_ccall f_12175(C_word c,C_word *av) C_noret;
C_noret_decl(f_12177)
static void C_ccall f_12177(C_word c,C_word *av) C_noret;
C_noret_decl(f_12181)
static void C_ccall f_12181(C_word c,C_word *av) C_noret;
C_noret_decl(f_12192)
static void C_ccall f_12192(C_word c,C_word *av) C_noret;
C_noret_decl(f_12194)
static void C_ccall f_12194(C_word c,C_word *av) C_noret;
C_noret_decl(f_12204)
static void C_ccall f_12204(C_word c,C_word *av) C_noret;
C_noret_decl(f_12217)
static void C_ccall f_12217(C_word c,C_word *av) C_noret;
C_noret_decl(f_12233)
static void C_ccall f_12233(C_word c,C_word *av) C_noret;
C_noret_decl(f_12236)
static void C_ccall f_12236(C_word c,C_word *av) C_noret;
C_noret_decl(f_12239)
static void C_ccall f_12239(C_word c,C_word *av) C_noret;
C_noret_decl(f_12245)
static void C_ccall f_12245(C_word c,C_word *av) C_noret;
C_noret_decl(f_12254)
static void f_12254(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12261)
static void C_ccall f_12261(C_word c,C_word *av) C_noret;
C_noret_decl(f_12275)
static void C_ccall f_12275(C_word c,C_word *av) C_noret;
C_noret_decl(f_12282)
static void C_ccall f_12282(C_word c,C_word *av) C_noret;
C_noret_decl(f_12291)
static void f_12291(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12298)
static void C_ccall f_12298(C_word c,C_word *av) C_noret;
C_noret_decl(f_12312)
static void C_ccall f_12312(C_word c,C_word *av) C_noret;
C_noret_decl(f_12320)
static void C_ccall f_12320(C_word c,C_word *av) C_noret;
C_noret_decl(f_12322)
static void C_ccall f_12322(C_word c,C_word *av) C_noret;
C_noret_decl(f_12342)
static void C_ccall f_12342(C_word c,C_word *av) C_noret;
C_noret_decl(f_12356)
static void f_12356(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12369)
static void C_ccall f_12369(C_word c,C_word *av) C_noret;
C_noret_decl(f_12417)
static void C_ccall f_12417(C_word c,C_word *av) C_noret;
C_noret_decl(f_12419)
static void C_ccall f_12419(C_word c,C_word *av) C_noret;
C_noret_decl(f_12423)
static void C_ccall f_12423(C_word c,C_word *av) C_noret;
C_noret_decl(f_12430)
static void C_ccall f_12430(C_word c,C_word *av) C_noret;
C_noret_decl(f_12438)
static void C_ccall f_12438(C_word c,C_word *av) C_noret;
C_noret_decl(f_12446)
static void C_ccall f_12446(C_word c,C_word *av) C_noret;
C_noret_decl(f_12448)
static void C_ccall f_12448(C_word c,C_word *av) C_noret;
C_noret_decl(f_12452)
static void C_ccall f_12452(C_word c,C_word *av) C_noret;
C_noret_decl(f_12455)
static void C_ccall f_12455(C_word c,C_word *av) C_noret;
C_noret_decl(f_12476)
static void C_ccall f_12476(C_word c,C_word *av) C_noret;
C_noret_decl(f_12478)
static void C_ccall f_12478(C_word c,C_word *av) C_noret;
C_noret_decl(f_12482)
static void C_ccall f_12482(C_word c,C_word *av) C_noret;
C_noret_decl(f_12493)
static void C_ccall f_12493(C_word c,C_word *av) C_noret;
C_noret_decl(f_12495)
static void C_ccall f_12495(C_word c,C_word *av) C_noret;
C_noret_decl(f_12499)
static void C_ccall f_12499(C_word c,C_word *av) C_noret;
C_noret_decl(f_12508)
static void C_ccall f_12508(C_word c,C_word *av) C_noret;
C_noret_decl(f_12511)
static void C_ccall f_12511(C_word c,C_word *av) C_noret;
C_noret_decl(f_12514)
static void C_ccall f_12514(C_word c,C_word *av) C_noret;
C_noret_decl(f_12537)
static void C_ccall f_12537(C_word c,C_word *av) C_noret;
C_noret_decl(f_12553)
static void C_ccall f_12553(C_word c,C_word *av) C_noret;
C_noret_decl(f_12555)
static void C_ccall f_12555(C_word c,C_word *av) C_noret;
C_noret_decl(f_12559)
static void C_ccall f_12559(C_word c,C_word *av) C_noret;
C_noret_decl(f_12565)
static void C_ccall f_12565(C_word c,C_word *av) C_noret;
C_noret_decl(f_12568)
static void C_ccall f_12568(C_word c,C_word *av) C_noret;
C_noret_decl(f_12592)
static void f_12592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12596)
static void C_ccall f_12596(C_word c,C_word *av) C_noret;
C_noret_decl(f_12603)
static void C_ccall f_12603(C_word c,C_word *av) C_noret;
C_noret_decl(f_12630)
static void C_ccall f_12630(C_word c,C_word *av) C_noret;
C_noret_decl(f_12632)
static void f_12632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12657)
static void C_ccall f_12657(C_word c,C_word *av) C_noret;
C_noret_decl(f_12676)
static void C_ccall f_12676(C_word c,C_word *av) C_noret;
C_noret_decl(f_12678)
static void C_ccall f_12678(C_word c,C_word *av) C_noret;
C_noret_decl(f_12688)
static void C_ccall f_12688(C_word c,C_word *av) C_noret;
C_noret_decl(f_12698)
static void C_ccall f_12698(C_word c,C_word *av) C_noret;
C_noret_decl(f_12701)
static void C_ccall f_12701(C_word c,C_word *av) C_noret;
C_noret_decl(f_12704)
static void C_ccall f_12704(C_word c,C_word *av) C_noret;
C_noret_decl(f_12712)
static void f_12712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12722)
static void C_ccall f_12722(C_word c,C_word *av) C_noret;
C_noret_decl(f_12725)
static void C_ccall f_12725(C_word c,C_word *av) C_noret;
C_noret_decl(f_12767)
static void C_ccall f_12767(C_word c,C_word *av) C_noret;
C_noret_decl(f_12769)
static void f_12769(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12831)
static void f_12831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12852)
static void C_ccall f_12852(C_word c,C_word *av) C_noret;
C_noret_decl(f_12854)
static void f_12854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12879)
static void C_ccall f_12879(C_word c,C_word *av) C_noret;
C_noret_decl(f_12896)
static void C_ccall f_12896(C_word c,C_word *av) C_noret;
C_noret_decl(f_12898)
static void f_12898(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12916)
static void C_ccall f_12916(C_word c,C_word *av) C_noret;
C_noret_decl(f_12952)
static void f_12952(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12969)
static void C_ccall f_12969(C_word c,C_word *av) C_noret;
C_noret_decl(f_13026)
static void C_ccall f_13026(C_word c,C_word *av) C_noret;
C_noret_decl(f_13028)
static void C_ccall f_13028(C_word c,C_word *av) C_noret;
C_noret_decl(f_13038)
static void C_ccall f_13038(C_word c,C_word *av) C_noret;
C_noret_decl(f_13055)
static void C_ccall f_13055(C_word c,C_word *av) C_noret;
C_noret_decl(f_13076)
static void C_ccall f_13076(C_word c,C_word *av) C_noret;
C_noret_decl(f_13086)
static void C_ccall f_13086(C_word c,C_word *av) C_noret;
C_noret_decl(f_13094)
static void C_ccall f_13094(C_word c,C_word *av) C_noret;
C_noret_decl(f_13096)
static void C_ccall f_13096(C_word c,C_word *av) C_noret;
C_noret_decl(f_13112)
static void C_ccall f_13112(C_word c,C_word *av) C_noret;
C_noret_decl(f_13122)
static void f_13122(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13156)
static void f_13156(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13200)
static void C_ccall f_13200(C_word c,C_word *av) C_noret;
C_noret_decl(f_13203)
static void C_ccall f_13203(C_word c,C_word *av) C_noret;
C_noret_decl(f_13206)
static void C_ccall f_13206(C_word c,C_word *av) C_noret;
C_noret_decl(f_13212)
static void C_ccall f_13212(C_word c,C_word *av) C_noret;
C_noret_decl(f_13221)
static void f_13221(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13228)
static void C_ccall f_13228(C_word c,C_word *av) C_noret;
C_noret_decl(f_13242)
static void C_ccall f_13242(C_word c,C_word *av) C_noret;
C_noret_decl(f_13249)
static void C_ccall f_13249(C_word c,C_word *av) C_noret;
C_noret_decl(f_13258)
static void f_13258(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13265)
static void C_ccall f_13265(C_word c,C_word *av) C_noret;
C_noret_decl(f_13277)
static void f_13277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13288)
static void C_ccall f_13288(C_word c,C_word *av) C_noret;
C_noret_decl(f_13315)
static void C_ccall f_13315(C_word c,C_word *av) C_noret;
C_noret_decl(f_13317)
static void C_ccall f_13317(C_word c,C_word *av) C_noret;
C_noret_decl(f_13321)
static void C_ccall f_13321(C_word c,C_word *av) C_noret;
C_noret_decl(f_13337)
static void C_ccall f_13337(C_word c,C_word *av) C_noret;
C_noret_decl(f_13353)
static void C_ccall f_13353(C_word c,C_word *av) C_noret;
C_noret_decl(f_13355)
static void C_ccall f_13355(C_word c,C_word *av) C_noret;
C_noret_decl(f_13359)
static void C_ccall f_13359(C_word c,C_word *av) C_noret;
C_noret_decl(f_13368)
static void C_ccall f_13368(C_word c,C_word *av) C_noret;
C_noret_decl(f_13375)
static void C_ccall f_13375(C_word c,C_word *av) C_noret;
C_noret_decl(f_13383)
static void C_ccall f_13383(C_word c,C_word *av) C_noret;
C_noret_decl(f_13385)
static void C_ccall f_13385(C_word c,C_word *av) C_noret;
C_noret_decl(f_13410)
static void C_ccall f_13410(C_word c,C_word *av) C_noret;
C_noret_decl(f_13414)
static void f_13414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13464)
static void C_ccall f_13464(C_word c,C_word *av) C_noret;
C_noret_decl(f_13466)
static void C_ccall f_13466(C_word c,C_word *av) C_noret;
C_noret_decl(f_13470)
static void C_ccall f_13470(C_word c,C_word *av) C_noret;
C_noret_decl(f_13473)
static void C_ccall f_13473(C_word c,C_word *av) C_noret;
C_noret_decl(f_13476)
static void C_ccall f_13476(C_word c,C_word *av) C_noret;
C_noret_decl(f_13479)
static void C_ccall f_13479(C_word c,C_word *av) C_noret;
C_noret_decl(f_13482)
static void C_ccall f_13482(C_word c,C_word *av) C_noret;
C_noret_decl(f_13485)
static void C_ccall f_13485(C_word c,C_word *av) C_noret;
C_noret_decl(f_13487)
static void f_13487(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13497)
static void f_13497(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13522)
static C_word f_13522(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_13536)
static void C_ccall f_13536(C_word c,C_word *av) C_noret;
C_noret_decl(f_13538)
static void f_13538(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13617)
static void C_ccall f_13617(C_word c,C_word *av) C_noret;
C_noret_decl(f_13642)
static void C_ccall f_13642(C_word c,C_word *av) C_noret;
C_noret_decl(f_13649)
static void C_ccall f_13649(C_word c,C_word *av) C_noret;
C_noret_decl(f_13653)
static void C_ccall f_13653(C_word c,C_word *av) C_noret;
C_noret_decl(f_13673)
static void f_13673(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13698)
static void C_ccall f_13698(C_word c,C_word *av) C_noret;
C_noret_decl(f_13737)
static void C_ccall f_13737(C_word c,C_word *av) C_noret;
C_noret_decl(f_13739)
static void C_ccall f_13739(C_word c,C_word *av) C_noret;
C_noret_decl(f_13743)
static void C_ccall f_13743(C_word c,C_word *av) C_noret;
C_noret_decl(f_13746)
static void C_ccall f_13746(C_word c,C_word *av) C_noret;
C_noret_decl(f_13749)
static void C_ccall f_13749(C_word c,C_word *av) C_noret;
C_noret_decl(f_13760)
static void C_ccall f_13760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word *av) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word *av) C_noret;
C_noret_decl(f_4514)
static void f_4514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word *av) C_noret;
C_noret_decl(f_4572)
static void f_4572(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5692)
static void C_ccall f_5692(C_word c,C_word *av) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word *av) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word *av) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word *av) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word *av) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word *av) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word *av) C_noret;
C_noret_decl(f_5720)
static void C_ccall f_5720(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word *av) C_noret;
C_noret_decl(f_5746)
static void C_ccall f_5746(C_word c,C_word *av) C_noret;
C_noret_decl(f_5749)
static void C_ccall f_5749(C_word c,C_word *av) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word *av) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word *av) C_noret;
C_noret_decl(f_5758)
static void C_ccall f_5758(C_word c,C_word *av) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word *av) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word *av) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word *av) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word *av) C_noret;
C_noret_decl(f_5776)
static void C_ccall f_5776(C_word c,C_word *av) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word *av) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word *av) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word *av) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word *av) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word *av) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word *av) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word *av) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word *av) C_noret;
C_noret_decl(f_5810)
static void C_ccall f_5810(C_word c,C_word *av) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word *av) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word *av) C_noret;
C_noret_decl(f_5819)
static void C_ccall f_5819(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word *av) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word *av) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word *av) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word *av) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word *av) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word *av) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word *av) C_noret;
C_noret_decl(f_5860)
static void C_ccall f_5860(C_word c,C_word *av) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word *av) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word *av) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word *av) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word *av) C_noret;
C_noret_decl(f_5879)
static void C_ccall f_5879(C_word c,C_word *av) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word *av) C_noret;
C_noret_decl(f_5885)
static void f_5885(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5891)
static void f_5891(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5905)
static void C_ccall f_5905(C_word c,C_word *av) C_noret;
C_noret_decl(f_5909)
static void C_ccall f_5909(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word *av) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5932)
static void C_ccall f_5932(C_word c,C_word *av) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word *av) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word *av) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word *av) C_noret;
C_noret_decl(f_5969)
static void f_5969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5977)
static void f_5977(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word *av) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word *av) C_noret;
C_noret_decl(f_6001)
static void f_6001(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word *av) C_noret;
C_noret_decl(f_6007)
static void C_ccall f_6007(C_word c,C_word *av) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word *av) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word *av) C_noret;
C_noret_decl(f_6045)
static void f_6045(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6093)
static void f_6093(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word *av) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word *av) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word *av) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word *av) C_noret;
C_noret_decl(f_6259)
static void C_ccall f_6259(C_word c,C_word *av) C_noret;
C_noret_decl(f_6261)
static void f_6261(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word *av) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word *av) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word *av) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word *av) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word *av) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word *av) C_noret;
C_noret_decl(f_6375)
static void C_ccall f_6375(C_word c,C_word *av) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word *av) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word *av) C_noret;
C_noret_decl(f_6384)
static void C_ccall f_6384(C_word c,C_word *av) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word *av) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word *av) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393(C_word c,C_word *av) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word *av) C_noret;
C_noret_decl(f_6399)
static void C_ccall f_6399(C_word c,C_word *av) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word *av) C_noret;
C_noret_decl(f_6405)
static void C_ccall f_6405(C_word c,C_word *av) C_noret;
C_noret_decl(f_6408)
static void C_ccall f_6408(C_word c,C_word *av) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word *av) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word *av) C_noret;
C_noret_decl(f_6424)
static void f_6424(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6431)
static void f_6431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6444)
static void C_ccall f_6444(C_word c,C_word *av) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word *av) C_noret;
C_noret_decl(f_6466)
static void C_ccall f_6466(C_word c,C_word *av) C_noret;
C_noret_decl(f_6512)
static void C_ccall f_6512(C_word c,C_word *av) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word *av) C_noret;
C_noret_decl(f_6562)
static void C_ccall f_6562(C_word c,C_word *av) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word *av) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word *av) C_noret;
C_noret_decl(f_6760)
static void C_ccall f_6760(C_word c,C_word *av) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word *av) C_noret;
C_noret_decl(f_6774)
static void f_6774(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6797)
static void f_6797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6816)
static void C_ccall f_6816(C_word c,C_word *av) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826(C_word c,C_word *av) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word *av) C_noret;
C_noret_decl(f_6843)
static void C_ccall f_6843(C_word c,C_word *av) C_noret;
C_noret_decl(f_6845)
static void C_ccall f_6845(C_word c,C_word *av) C_noret;
C_noret_decl(f_6853)
static void C_ccall f_6853(C_word c,C_word *av) C_noret;
C_noret_decl(f_6861)
static void C_ccall f_6861(C_word c,C_word *av) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word *av) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word *av) C_noret;
C_noret_decl(f_6928)
static void C_ccall f_6928(C_word c,C_word *av) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word *av) C_noret;
C_noret_decl(f_6935)
static void C_ccall f_6935(C_word c,C_word *av) C_noret;
C_noret_decl(f_6938)
static void C_ccall f_6938(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6948)
static void f_6948(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6958)
static void C_ccall f_6958(C_word c,C_word *av) C_noret;
C_noret_decl(f_6961)
static void C_ccall f_6961(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word *av) C_noret;
C_noret_decl(f_6978)
static void C_ccall f_6978(C_word c,C_word *av) C_noret;
C_noret_decl(f_6994)
static void C_ccall f_6994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7004)
static void C_ccall f_7004(C_word c,C_word *av) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word *av) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word *av) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word *av) C_noret;
C_noret_decl(f_7053)
static void C_ccall f_7053(C_word c,C_word *av) C_noret;
C_noret_decl(f_7070)
static void C_ccall f_7070(C_word c,C_word *av) C_noret;
C_noret_decl(f_7093)
static void C_ccall f_7093(C_word c,C_word *av) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word *av) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word *av) C_noret;
C_noret_decl(f_7127)
static void C_ccall f_7127(C_word c,C_word *av) C_noret;
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word *av) C_noret;
C_noret_decl(f_7133)
static void C_ccall f_7133(C_word c,C_word *av) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word *av) C_noret;
C_noret_decl(f_7143)
static void f_7143(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word *av) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word *av) C_noret;
C_noret_decl(f_7162)
static void C_ccall f_7162(C_word c,C_word *av) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word *av) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word *av) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word *av) C_noret;
C_noret_decl(f_7218)
static void C_ccall f_7218(C_word c,C_word *av) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word *av) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word *av) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word *av) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word *av) C_noret;
C_noret_decl(f_7295)
static void C_ccall f_7295(C_word c,C_word *av) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7305)
static void C_ccall f_7305(C_word c,C_word *av) C_noret;
C_noret_decl(f_7308)
static void C_ccall f_7308(C_word c,C_word *av) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word *av) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word *av) C_noret;
C_noret_decl(f_7326)
static void C_ccall f_7326(C_word c,C_word *av) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word *av) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word *av) C_noret;
C_noret_decl(f_7338)
static void C_ccall f_7338(C_word c,C_word *av) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word *av) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word *av) C_noret;
C_noret_decl(f_7351)
static void f_7351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word *av) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word *av) C_noret;
C_noret_decl(f_7400)
static void f_7400(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7419)
static void f_7419(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7425)
static void f_7425(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7436)
static void C_ccall f_7436(C_word c,C_word *av) C_noret;
C_noret_decl(f_7440)
static void f_7440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7444)
static void C_ccall f_7444(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;
C_noret_decl(f_7514)
static void f_7514(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word *av) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word *av) C_noret;
C_noret_decl(f_7667)
static C_word f_7667(C_word t0,C_word t1);
C_noret_decl(f_7680)
static void C_ccall f_7680(C_word c,C_word *av) C_noret;
C_noret_decl(f_7682)
static void f_7682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7728)
static void f_7728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7751)
static void f_7751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7786)
static void C_ccall f_7786(C_word c,C_word *av) C_noret;
C_noret_decl(f_7793)
static void C_ccall f_7793(C_word c,C_word *av) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word *av) C_noret;
C_noret_decl(f_7805)
static void C_ccall f_7805(C_word c,C_word *av) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word *av) C_noret;
C_noret_decl(f_7811)
static void C_ccall f_7811(C_word c,C_word *av) C_noret;
C_noret_decl(f_7823)
static void C_ccall f_7823(C_word c,C_word *av) C_noret;
C_noret_decl(f_7826)
static void C_ccall f_7826(C_word c,C_word *av) C_noret;
C_noret_decl(f_7829)
static void C_ccall f_7829(C_word c,C_word *av) C_noret;
C_noret_decl(f_7832)
static void C_ccall f_7832(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_7845)
static void f_7845(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7871)
static void C_ccall f_7871(C_word c,C_word *av) C_noret;
C_noret_decl(f_7882)
static void C_ccall f_7882(C_word c,C_word *av) C_noret;
C_noret_decl(f_7965)
static void C_ccall f_7965(C_word c,C_word *av) C_noret;
C_noret_decl(f_7967)
static void C_ccall f_7967(C_word c,C_word *av) C_noret;
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word *av) C_noret;
C_noret_decl(f_7974)
static void C_ccall f_7974(C_word c,C_word *av) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word *av) C_noret;
C_noret_decl(f_8014)
static void C_ccall f_8014(C_word c,C_word *av) C_noret;
C_noret_decl(f_8042)
static void C_ccall f_8042(C_word c,C_word *av) C_noret;
C_noret_decl(f_8044)
static void C_ccall f_8044(C_word c,C_word *av) C_noret;
C_noret_decl(f_8048)
static void C_ccall f_8048(C_word c,C_word *av) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word *av) C_noret;
C_noret_decl(f_8071)
static void C_ccall f_8071(C_word c,C_word *av) C_noret;
C_noret_decl(f_8075)
static void C_ccall f_8075(C_word c,C_word *av) C_noret;
C_noret_decl(f_8077)
static void f_8077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116(C_word c,C_word *av) C_noret;
C_noret_decl(f_8124)
static void C_ccall f_8124(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_8138)
static void f_8138(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8144)
static void f_8144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8158)
static void C_ccall f_8158(C_word c,C_word *av) C_noret;
C_noret_decl(f_8184)
static void C_ccall f_8184(C_word c,C_word *av) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word *av) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word *av) C_noret;
C_noret_decl(f_8228)
static void C_ccall f_8228(C_word c,C_word *av) C_noret;
C_noret_decl(f_8231)
static void C_ccall f_8231(C_word c,C_word *av) C_noret;
C_noret_decl(f_8234)
static void C_ccall f_8234(C_word c,C_word *av) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word *av) C_noret;
C_noret_decl(f_8244)
static void f_8244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word *av) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word *av) C_noret;
C_noret_decl(f_8260)
static void f_8260(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word *av) C_noret;
C_noret_decl(f_8274)
static void C_ccall f_8274(C_word c,C_word *av) C_noret;
C_noret_decl(f_8280)
static void C_ccall f_8280(C_word c,C_word *av) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word *av) C_noret;
C_noret_decl(f_8286)
static void C_ccall f_8286(C_word c,C_word *av) C_noret;
C_noret_decl(f_8290)
static void f_8290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8298)
static void C_ccall f_8298(C_word c,C_word *av) C_noret;
C_noret_decl(f_8301)
static void C_ccall f_8301(C_word c,C_word *av) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word *av) C_noret;
C_noret_decl(f_8307)
static void C_ccall f_8307(C_word c,C_word *av) C_noret;
C_noret_decl(f_8314)
static void C_ccall f_8314(C_word c,C_word *av) C_noret;
C_noret_decl(f_8340)
static void f_8340(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8365)
static void C_ccall f_8365(C_word c,C_word *av) C_noret;
C_noret_decl(f_8374)
static void f_8374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8408)
static void f_8408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8433)
static void C_ccall f_8433(C_word c,C_word *av) C_noret;
C_noret_decl(f_8442)
static void f_8442(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8490)
static void C_ccall f_8490(C_word c,C_word *av) C_noret;
C_noret_decl(f_8492)
static void C_ccall f_8492(C_word c,C_word *av) C_noret;
C_noret_decl(f_8496)
static void C_ccall f_8496(C_word c,C_word *av) C_noret;
C_noret_decl(f_8506)
static void f_8506(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8533)
static void C_ccall f_8533(C_word c,C_word *av) C_noret;
C_noret_decl(f_8536)
static void C_ccall f_8536(C_word c,C_word *av) C_noret;
C_noret_decl(f_8551)
static void C_ccall f_8551(C_word c,C_word *av) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word *av) C_noret;
C_noret_decl(f_8568)
static void C_ccall f_8568(C_word c,C_word *av) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word *av) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word *av) C_noret;
C_noret_decl(f_8596)
static void C_ccall f_8596(C_word c,C_word *av) C_noret;
C_noret_decl(f_8612)
static void C_ccall f_8612(C_word c,C_word *av) C_noret;
C_noret_decl(f_8632)
static void C_ccall f_8632(C_word c,C_word *av) C_noret;
C_noret_decl(f_8634)
static void C_ccall f_8634(C_word c,C_word *av) C_noret;
C_noret_decl(f_8636)
static void C_ccall f_8636(C_word c,C_word *av) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word *av) C_noret;
C_noret_decl(f_8649)
static void f_8649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8652)
static void C_ccall f_8652(C_word c,C_word *av) C_noret;
C_noret_decl(f_8661)
static void f_8661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word *av) C_noret;
C_noret_decl(f_8681)
static void C_ccall f_8681(C_word c,C_word *av) C_noret;
C_noret_decl(f_8724)
static void C_ccall f_8724(C_word c,C_word *av) C_noret;
C_noret_decl(f_8736)
static void C_ccall f_8736(C_word c,C_word *av) C_noret;
C_noret_decl(f_8738)
static void C_ccall f_8738(C_word c,C_word *av) C_noret;
C_noret_decl(f_8742)
static void C_ccall f_8742(C_word c,C_word *av) C_noret;
C_noret_decl(f_8745)
static void C_ccall f_8745(C_word c,C_word *av) C_noret;
C_noret_decl(f_8764)
static void C_ccall f_8764(C_word c,C_word *av) C_noret;
C_noret_decl(f_8780)
static void C_ccall f_8780(C_word c,C_word *av) C_noret;
C_noret_decl(f_8782)
static void C_ccall f_8782(C_word c,C_word *av) C_noret;
C_noret_decl(f_8786)
static void C_ccall f_8786(C_word c,C_word *av) C_noret;
C_noret_decl(f_8789)
static void C_ccall f_8789(C_word c,C_word *av) C_noret;
C_noret_decl(f_8802)
static void C_ccall f_8802(C_word c,C_word *av) C_noret;
C_noret_decl(f_8804)
static void C_ccall f_8804(C_word c,C_word *av) C_noret;
C_noret_decl(f_8808)
static void C_ccall f_8808(C_word c,C_word *av) C_noret;
C_noret_decl(f_8822)
static void C_ccall f_8822(C_word c,C_word *av) C_noret;
C_noret_decl(f_8828)
static void C_ccall f_8828(C_word c,C_word *av) C_noret;
C_noret_decl(f_8853)
static void C_ccall f_8853(C_word c,C_word *av) C_noret;
C_noret_decl(f_8855)
static void C_ccall f_8855(C_word c,C_word *av) C_noret;
C_noret_decl(f_8862)
static void C_ccall f_8862(C_word c,C_word *av) C_noret;
C_noret_decl(f_8868)
static void C_ccall f_8868(C_word c,C_word *av) C_noret;
C_noret_decl(f_8872)
static void C_ccall f_8872(C_word c,C_word *av) C_noret;
C_noret_decl(f_8882)
static void C_ccall f_8882(C_word c,C_word *av) C_noret;
C_noret_decl(f_8884)
static void f_8884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8913)
static void C_ccall f_8913(C_word c,C_word *av) C_noret;
C_noret_decl(f_8932)
static void f_8932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8966)
static void f_8966(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8984)
static void C_ccall f_8984(C_word c,C_word *av) C_noret;
C_noret_decl(f_8990)
static void f_8990(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9024)
static void f_9024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9060)
static void C_ccall f_9060(C_word c,C_word *av) C_noret;
C_noret_decl(f_9062)
static void C_ccall f_9062(C_word c,C_word *av) C_noret;
C_noret_decl(f_9066)
static void C_ccall f_9066(C_word c,C_word *av) C_noret;
C_noret_decl(f_9074)
static void C_ccall f_9074(C_word c,C_word *av) C_noret;
C_noret_decl(f_9079)
static void f_9079(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9104)
static void C_ccall f_9104(C_word c,C_word *av) C_noret;
C_noret_decl(f_9114)
static void C_ccall f_9114(C_word c,C_word *av) C_noret;
C_noret_decl(f_9116)
static void C_ccall f_9116(C_word c,C_word *av) C_noret;
C_noret_decl(f_9120)
static void C_ccall f_9120(C_word c,C_word *av) C_noret;
C_noret_decl(f_9126)
static void C_ccall f_9126(C_word c,C_word *av) C_noret;
C_noret_decl(f_9147)
static void C_ccall f_9147(C_word c,C_word *av) C_noret;
C_noret_decl(f_9154)
static void C_ccall f_9154(C_word c,C_word *av) C_noret;
C_noret_decl(f_9177)
static void C_ccall f_9177(C_word c,C_word *av) C_noret;
C_noret_decl(f_9181)
static void C_ccall f_9181(C_word c,C_word *av) C_noret;
C_noret_decl(f_9202)
static void C_ccall f_9202(C_word c,C_word *av) C_noret;
C_noret_decl(f_9205)
static void C_ccall f_9205(C_word c,C_word *av) C_noret;
C_noret_decl(f_9209)
static void f_9209(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9217)
static void C_ccall f_9217(C_word c,C_word *av) C_noret;
C_noret_decl(f_9221)
static void C_ccall f_9221(C_word c,C_word *av) C_noret;
C_noret_decl(f_9227)
static void C_ccall f_9227(C_word c,C_word *av) C_noret;
C_noret_decl(f_9228)
static void C_ccall f_9228(C_word c,C_word *av) C_noret;
C_noret_decl(f_9239)
static void C_ccall f_9239(C_word c,C_word *av) C_noret;
C_noret_decl(f_9254)
static void C_ccall f_9254(C_word c,C_word *av) C_noret;
C_noret_decl(f_9256)
static void f_9256(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9275)
static void f_9275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9283)
static void C_ccall f_9283(C_word c,C_word *av) C_noret;
C_noret_decl(f_9289)
static void C_ccall f_9289(C_word c,C_word *av) C_noret;
C_noret_decl(f_9291)
static void f_9291(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9316)
static void C_ccall f_9316(C_word c,C_word *av) C_noret;
C_noret_decl(f_9340)
static void C_ccall f_9340(C_word c,C_word *av) C_noret;
C_noret_decl(f_9377)
static void C_ccall f_9377(C_word c,C_word *av) C_noret;
C_noret_decl(f_9405)
static void f_9405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9439)
static void f_9439(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9470)
static void C_ccall f_9470(C_word c,C_word *av) C_noret;
C_noret_decl(f_9477)
static void C_ccall f_9477(C_word c,C_word *av) C_noret;
C_noret_decl(f_9483)
static void f_9483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9508)
static void C_ccall f_9508(C_word c,C_word *av) C_noret;
C_noret_decl(f_9517)
static void f_9517(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9530)
static void C_ccall f_9530(C_word c,C_word *av) C_noret;
C_noret_decl(f_9555)
static void f_9555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9591)
static void C_ccall f_9591(C_word c,C_word *av) C_noret;
C_noret_decl(f_9593)
static void C_ccall f_9593(C_word c,C_word *av) C_noret;
C_noret_decl(f_9597)
static void C_ccall f_9597(C_word c,C_word *av) C_noret;
C_noret_decl(f_9604)
static void C_ccall f_9604(C_word c,C_word *av) C_noret;
C_noret_decl(f_9608)
static void C_ccall f_9608(C_word c,C_word *av) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word *av) C_noret;
C_noret_decl(f_9630)
static void C_ccall f_9630(C_word c,C_word *av) C_noret;
C_noret_decl(f_9636)
static void C_ccall f_9636(C_word c,C_word *av) C_noret;
C_noret_decl(f_9643)
static void C_ccall f_9643(C_word c,C_word *av) C_noret;
C_noret_decl(f_9649)
static void C_ccall f_9649(C_word c,C_word *av) C_noret;
C_noret_decl(f_9662)
static void f_9662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9696)
static void f_9696(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9706)
static void C_ccall f_9706(C_word c,C_word *av) C_noret;
C_noret_decl(f_9721)
static void C_ccall f_9721(C_word c,C_word *av) C_noret;
C_noret_decl(f_9723)
static void C_ccall f_9723(C_word c,C_word *av) C_noret;
C_noret_decl(f_9727)
static void C_ccall f_9727(C_word c,C_word *av) C_noret;
C_noret_decl(f_9742)
static void C_ccall f_9742(C_word c,C_word *av) C_noret;
C_noret_decl(f_9744)
static void C_ccall f_9744(C_word c,C_word *av) C_noret;
C_noret_decl(f_9748)
static void C_ccall f_9748(C_word c,C_word *av) C_noret;
C_noret_decl(f_9770)
static void C_ccall f_9770(C_word c,C_word *av) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word *av) C_noret;
C_noret_decl(f_9776)
static void C_ccall f_9776(C_word c,C_word *av) C_noret;
C_noret_decl(f_9794)
static void C_ccall f_9794(C_word c,C_word *av) C_noret;
C_noret_decl(f_9796)
static void C_ccall f_9796(C_word c,C_word *av) C_noret;
C_noret_decl(f_9805)
static void f_9805(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9811)
static void C_ccall f_9811(C_word c,C_word *av) C_noret;
C_noret_decl(f_9817)
static void C_ccall f_9817(C_word c,C_word *av) C_noret;
C_noret_decl(f_9836)
static void C_ccall f_9836(C_word c,C_word *av) C_noret;
C_noret_decl(f_9838)
static void f_9838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9863)
static void C_ccall f_9863(C_word c,C_word *av) C_noret;
C_noret_decl(f_9874)
static void C_ccall f_9874(C_word c,C_word *av) C_noret;
C_noret_decl(f_9876)
static void C_ccall f_9876(C_word c,C_word *av) C_noret;
C_noret_decl(f_9895)
static void C_ccall f_9895(C_word c,C_word *av) C_noret;
C_noret_decl(f_9903)
static void C_ccall f_9903(C_word c,C_word *av) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word *av) C_noret;
C_noret_decl(f_9918)
static void C_ccall f_9918(C_word c,C_word *av) C_noret;
C_noret_decl(f_9922)
static void f_9922(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9930)
static void C_ccall f_9930(C_word c,C_word *av) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word *av) C_noret;
C_noret_decl(f_9940)
static void f_9940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9948)
static void C_ccall f_9948(C_word c,C_word *av) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word *av) C_noret;
C_noret_decl(f_9955)
static void f_9955(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9963)
static void C_ccall f_9963(C_word c,C_word *av) C_noret;
C_noret_decl(f_9966)
static void C_ccall f_9966(C_word c,C_word *av) C_noret;
C_noret_decl(f_9979)
static void C_ccall f_9979(C_word c,C_word *av) C_noret;
C_noret_decl(f_9996)
static void C_ccall f_9996(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10085)
static void C_ccall trf_10085(C_word c,C_word *av) C_noret;
static void C_ccall trf_10085(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10085(t0,t1,t2,t3);}

C_noret_decl(trf_10133)
static void C_ccall trf_10133(C_word c,C_word *av) C_noret;
static void C_ccall trf_10133(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10133(t0,t1,t2,t3);}

C_noret_decl(trf_10181)
static void C_ccall trf_10181(C_word c,C_word *av) C_noret;
static void C_ccall trf_10181(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10181(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10188)
static void C_ccall trf_10188(C_word c,C_word *av) C_noret;
static void C_ccall trf_10188(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10188(t0,t1);}

C_noret_decl(trf_10322)
static void C_ccall trf_10322(C_word c,C_word *av) C_noret;
static void C_ccall trf_10322(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10322(t0,t1,t2,t3);}

C_noret_decl(trf_10370)
static void C_ccall trf_10370(C_word c,C_word *av) C_noret;
static void C_ccall trf_10370(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10370(t0,t1,t2,t3);}

C_noret_decl(trf_10418)
static void C_ccall trf_10418(C_word c,C_word *av) C_noret;
static void C_ccall trf_10418(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10418(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10425)
static void C_ccall trf_10425(C_word c,C_word *av) C_noret;
static void C_ccall trf_10425(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10425(t0,t1);}

C_noret_decl(trf_10488)
static void C_ccall trf_10488(C_word c,C_word *av) C_noret;
static void C_ccall trf_10488(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10488(t0,t1,t2,t3);}

C_noret_decl(trf_10536)
static void C_ccall trf_10536(C_word c,C_word *av) C_noret;
static void C_ccall trf_10536(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10536(t0,t1,t2,t3);}

C_noret_decl(trf_10584)
static void C_ccall trf_10584(C_word c,C_word *av) C_noret;
static void C_ccall trf_10584(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10584(t0,t1,t2,t3);}

C_noret_decl(trf_10632)
static void C_ccall trf_10632(C_word c,C_word *av) C_noret;
static void C_ccall trf_10632(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10632(t0,t1,t2);}

C_noret_decl(trf_10666)
static void C_ccall trf_10666(C_word c,C_word *av) C_noret;
static void C_ccall trf_10666(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10666(t0,t1,t2);}

C_noret_decl(trf_10700)
static void C_ccall trf_10700(C_word c,C_word *av) C_noret;
static void C_ccall trf_10700(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10700(t0,t1,t2);}

C_noret_decl(trf_10734)
static void C_ccall trf_10734(C_word c,C_word *av) C_noret;
static void C_ccall trf_10734(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10734(t0,t1,t2);}

C_noret_decl(trf_10768)
static void C_ccall trf_10768(C_word c,C_word *av) C_noret;
static void C_ccall trf_10768(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10768(t0,t1,t2);}

C_noret_decl(trf_10828)
static void C_ccall trf_10828(C_word c,C_word *av) C_noret;
static void C_ccall trf_10828(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10828(t0,t1);}

C_noret_decl(trf_10843)
static void C_ccall trf_10843(C_word c,C_word *av) C_noret;
static void C_ccall trf_10843(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10843(t0,t1);}

C_noret_decl(trf_10923)
static void C_ccall trf_10923(C_word c,C_word *av) C_noret;
static void C_ccall trf_10923(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10923(t0,t1,t2,t3);}

C_noret_decl(trf_10971)
static void C_ccall trf_10971(C_word c,C_word *av) C_noret;
static void C_ccall trf_10971(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10971(t0,t1,t2,t3);}

C_noret_decl(trf_11070)
static void C_ccall trf_11070(C_word c,C_word *av) C_noret;
static void C_ccall trf_11070(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11070(t0,t1,t2,t3);}

C_noret_decl(trf_11118)
static void C_ccall trf_11118(C_word c,C_word *av) C_noret;
static void C_ccall trf_11118(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11118(t0,t1,t2,t3);}

C_noret_decl(trf_11201)
static void C_ccall trf_11201(C_word c,C_word *av) C_noret;
static void C_ccall trf_11201(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11201(t0,t1,t2,t3);}

C_noret_decl(trf_11251)
static void C_ccall trf_11251(C_word c,C_word *av) C_noret;
static void C_ccall trf_11251(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11251(t0,t1,t2);}

C_noret_decl(trf_11271)
static void C_ccall trf_11271(C_word c,C_word *av) C_noret;
static void C_ccall trf_11271(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11271(t0,t1,t2,t3);}

C_noret_decl(trf_11319)
static void C_ccall trf_11319(C_word c,C_word *av) C_noret;
static void C_ccall trf_11319(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11319(t0,t1,t2);}

C_noret_decl(trf_11353)
static void C_ccall trf_11353(C_word c,C_word *av) C_noret;
static void C_ccall trf_11353(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11353(t0,t1,t2);}

C_noret_decl(trf_11387)
static void C_ccall trf_11387(C_word c,C_word *av) C_noret;
static void C_ccall trf_11387(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11387(t0,t1,t2);}

C_noret_decl(trf_11421)
static void C_ccall trf_11421(C_word c,C_word *av) C_noret;
static void C_ccall trf_11421(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11421(t0,t1,t2);}

C_noret_decl(trf_11486)
static void C_ccall trf_11486(C_word c,C_word *av) C_noret;
static void C_ccall trf_11486(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11486(t0,t1,t2);}

C_noret_decl(trf_11551)
static void C_ccall trf_11551(C_word c,C_word *av) C_noret;
static void C_ccall trf_11551(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11551(t0,t1,t2);}

C_noret_decl(trf_11616)
static void C_ccall trf_11616(C_word c,C_word *av) C_noret;
static void C_ccall trf_11616(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11616(t0,t1,t2);}

C_noret_decl(trf_11814)
static void C_ccall trf_11814(C_word c,C_word *av) C_noret;
static void C_ccall trf_11814(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11814(t0,t1,t2);}

C_noret_decl(trf_11827)
static void C_ccall trf_11827(C_word c,C_word *av) C_noret;
static void C_ccall trf_11827(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11827(t0,t1);}

C_noret_decl(trf_11907)
static void C_ccall trf_11907(C_word c,C_word *av) C_noret;
static void C_ccall trf_11907(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11907(t0,t1,t2,t3);}

C_noret_decl(trf_11959)
static void C_ccall trf_11959(C_word c,C_word *av) C_noret;
static void C_ccall trf_11959(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11959(t0,t1);}

C_noret_decl(trf_12125)
static void C_ccall trf_12125(C_word c,C_word *av) C_noret;
static void C_ccall trf_12125(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12125(t0,t1,t2);}

C_noret_decl(trf_12254)
static void C_ccall trf_12254(C_word c,C_word *av) C_noret;
static void C_ccall trf_12254(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12254(t0,t1,t2,t3);}

C_noret_decl(trf_12291)
static void C_ccall trf_12291(C_word c,C_word *av) C_noret;
static void C_ccall trf_12291(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12291(t0,t1,t2,t3);}

C_noret_decl(trf_12356)
static void C_ccall trf_12356(C_word c,C_word *av) C_noret;
static void C_ccall trf_12356(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12356(t0,t1);}

C_noret_decl(trf_12592)
static void C_ccall trf_12592(C_word c,C_word *av) C_noret;
static void C_ccall trf_12592(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12592(t0,t1,t2);}

C_noret_decl(trf_12632)
static void C_ccall trf_12632(C_word c,C_word *av) C_noret;
static void C_ccall trf_12632(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12632(t0,t1,t2);}

C_noret_decl(trf_12712)
static void C_ccall trf_12712(C_word c,C_word *av) C_noret;
static void C_ccall trf_12712(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12712(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12769)
static void C_ccall trf_12769(C_word c,C_word *av) C_noret;
static void C_ccall trf_12769(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12769(t0,t1,t2,t3);}

C_noret_decl(trf_12831)
static void C_ccall trf_12831(C_word c,C_word *av) C_noret;
static void C_ccall trf_12831(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12831(t0,t1);}

C_noret_decl(trf_12854)
static void C_ccall trf_12854(C_word c,C_word *av) C_noret;
static void C_ccall trf_12854(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12854(t0,t1,t2);}

C_noret_decl(trf_12898)
static void C_ccall trf_12898(C_word c,C_word *av) C_noret;
static void C_ccall trf_12898(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12898(t0,t1,t2,t3);}

C_noret_decl(trf_12952)
static void C_ccall trf_12952(C_word c,C_word *av) C_noret;
static void C_ccall trf_12952(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12952(t0,t1);}

C_noret_decl(trf_13122)
static void C_ccall trf_13122(C_word c,C_word *av) C_noret;
static void C_ccall trf_13122(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13122(t0,t1,t2);}

C_noret_decl(trf_13156)
static void C_ccall trf_13156(C_word c,C_word *av) C_noret;
static void C_ccall trf_13156(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13156(t0,t1,t2);}

C_noret_decl(trf_13221)
static void C_ccall trf_13221(C_word c,C_word *av) C_noret;
static void C_ccall trf_13221(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_13221(t0,t1,t2,t3);}

C_noret_decl(trf_13258)
static void C_ccall trf_13258(C_word c,C_word *av) C_noret;
static void C_ccall trf_13258(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_13258(t0,t1,t2,t3);}

C_noret_decl(trf_13277)
static void C_ccall trf_13277(C_word c,C_word *av) C_noret;
static void C_ccall trf_13277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13277(t0,t1);}

C_noret_decl(trf_13414)
static void C_ccall trf_13414(C_word c,C_word *av) C_noret;
static void C_ccall trf_13414(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13414(t0,t1);}

C_noret_decl(trf_13487)
static void C_ccall trf_13487(C_word c,C_word *av) C_noret;
static void C_ccall trf_13487(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13487(t0,t1,t2);}

C_noret_decl(trf_13497)
static void C_ccall trf_13497(C_word c,C_word *av) C_noret;
static void C_ccall trf_13497(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13497(t0,t1);}

C_noret_decl(trf_13538)
static void C_ccall trf_13538(C_word c,C_word *av) C_noret;
static void C_ccall trf_13538(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13538(t0,t1,t2);}

C_noret_decl(trf_13673)
static void C_ccall trf_13673(C_word c,C_word *av) C_noret;
static void C_ccall trf_13673(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13673(t0,t1,t2);}

C_noret_decl(trf_4514)
static void C_ccall trf_4514(C_word c,C_word *av) C_noret;
static void C_ccall trf_4514(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4514(t0,t1,t2);}

C_noret_decl(trf_4572)
static void C_ccall trf_4572(C_word c,C_word *av) C_noret;
static void C_ccall trf_4572(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4572(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5885)
static void C_ccall trf_5885(C_word c,C_word *av) C_noret;
static void C_ccall trf_5885(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5885(t0,t1,t2);}

C_noret_decl(trf_5891)
static void C_ccall trf_5891(C_word c,C_word *av) C_noret;
static void C_ccall trf_5891(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5891(t0,t1,t2);}

C_noret_decl(trf_5969)
static void C_ccall trf_5969(C_word c,C_word *av) C_noret;
static void C_ccall trf_5969(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5969(t0,t1,t2);}

C_noret_decl(trf_5977)
static void C_ccall trf_5977(C_word c,C_word *av) C_noret;
static void C_ccall trf_5977(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5977(t0,t1,t2,t3);}

C_noret_decl(trf_6001)
static void C_ccall trf_6001(C_word c,C_word *av) C_noret;
static void C_ccall trf_6001(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6001(t0,t1);}

C_noret_decl(trf_6045)
static void C_ccall trf_6045(C_word c,C_word *av) C_noret;
static void C_ccall trf_6045(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6045(t0,t1,t2,t3);}

C_noret_decl(trf_6093)
static void C_ccall trf_6093(C_word c,C_word *av) C_noret;
static void C_ccall trf_6093(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6093(t0,t1,t2,t3);}

C_noret_decl(trf_6261)
static void C_ccall trf_6261(C_word c,C_word *av) C_noret;
static void C_ccall trf_6261(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6261(t0,t1,t2);}

C_noret_decl(trf_6424)
static void C_ccall trf_6424(C_word c,C_word *av) C_noret;
static void C_ccall trf_6424(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6424(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6431)
static void C_ccall trf_6431(C_word c,C_word *av) C_noret;
static void C_ccall trf_6431(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6431(t0,t1);}

C_noret_decl(trf_6774)
static void C_ccall trf_6774(C_word c,C_word *av) C_noret;
static void C_ccall trf_6774(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6774(t0,t1);}

C_noret_decl(trf_6797)
static void C_ccall trf_6797(C_word c,C_word *av) C_noret;
static void C_ccall trf_6797(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6797(t0,t1);}

C_noret_decl(trf_6948)
static void C_ccall trf_6948(C_word c,C_word *av) C_noret;
static void C_ccall trf_6948(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_6948(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7143)
static void C_ccall trf_7143(C_word c,C_word *av) C_noret;
static void C_ccall trf_7143(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7143(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7351)
static void C_ccall trf_7351(C_word c,C_word *av) C_noret;
static void C_ccall trf_7351(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7351(t0,t1,t2);}

C_noret_decl(trf_7400)
static void C_ccall trf_7400(C_word c,C_word *av) C_noret;
static void C_ccall trf_7400(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7400(t0,t1,t2,t3);}

C_noret_decl(trf_7419)
static void C_ccall trf_7419(C_word c,C_word *av) C_noret;
static void C_ccall trf_7419(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7419(t0,t1);}

C_noret_decl(trf_7425)
static void C_ccall trf_7425(C_word c,C_word *av) C_noret;
static void C_ccall trf_7425(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7425(t0,t1);}

C_noret_decl(trf_7440)
static void C_ccall trf_7440(C_word c,C_word *av) C_noret;
static void C_ccall trf_7440(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7440(t0,t1);}

C_noret_decl(trf_7514)
static void C_ccall trf_7514(C_word c,C_word *av) C_noret;
static void C_ccall trf_7514(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7514(t0,t1);}

C_noret_decl(trf_7682)
static void C_ccall trf_7682(C_word c,C_word *av) C_noret;
static void C_ccall trf_7682(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7682(t0,t1,t2);}

C_noret_decl(trf_7728)
static void C_ccall trf_7728(C_word c,C_word *av) C_noret;
static void C_ccall trf_7728(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7728(t0,t1,t2);}

C_noret_decl(trf_7751)
static void C_ccall trf_7751(C_word c,C_word *av) C_noret;
static void C_ccall trf_7751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7751(t0,t1,t2);}

C_noret_decl(trf_7845)
static void C_ccall trf_7845(C_word c,C_word *av) C_noret;
static void C_ccall trf_7845(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7845(t0,t1,t2,t3);}

C_noret_decl(trf_8077)
static void C_ccall trf_8077(C_word c,C_word *av) C_noret;
static void C_ccall trf_8077(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8077(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8138)
static void C_ccall trf_8138(C_word c,C_word *av) C_noret;
static void C_ccall trf_8138(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8138(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8144)
static void C_ccall trf_8144(C_word c,C_word *av) C_noret;
static void C_ccall trf_8144(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8144(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8244)
static void C_ccall trf_8244(C_word c,C_word *av) C_noret;
static void C_ccall trf_8244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8244(t0,t1,t2);}

C_noret_decl(trf_8260)
static void C_ccall trf_8260(C_word c,C_word *av) C_noret;
static void C_ccall trf_8260(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8260(t0,t1,t2);}

C_noret_decl(trf_8290)
static void C_ccall trf_8290(C_word c,C_word *av) C_noret;
static void C_ccall trf_8290(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8290(t0,t1,t2);}

C_noret_decl(trf_8340)
static void C_ccall trf_8340(C_word c,C_word *av) C_noret;
static void C_ccall trf_8340(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8340(t0,t1,t2);}

C_noret_decl(trf_8374)
static void C_ccall trf_8374(C_word c,C_word *av) C_noret;
static void C_ccall trf_8374(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8374(t0,t1,t2);}

C_noret_decl(trf_8408)
static void C_ccall trf_8408(C_word c,C_word *av) C_noret;
static void C_ccall trf_8408(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8408(t0,t1,t2);}

C_noret_decl(trf_8442)
static void C_ccall trf_8442(C_word c,C_word *av) C_noret;
static void C_ccall trf_8442(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8442(t0,t1,t2);}

C_noret_decl(trf_8506)
static void C_ccall trf_8506(C_word c,C_word *av) C_noret;
static void C_ccall trf_8506(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8506(t0,t1,t2,t3);}

C_noret_decl(trf_8649)
static void C_ccall trf_8649(C_word c,C_word *av) C_noret;
static void C_ccall trf_8649(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8649(t0,t1);}

C_noret_decl(trf_8661)
static void C_ccall trf_8661(C_word c,C_word *av) C_noret;
static void C_ccall trf_8661(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8661(t0,t1);}

C_noret_decl(trf_8884)
static void C_ccall trf_8884(C_word c,C_word *av) C_noret;
static void C_ccall trf_8884(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8884(t0,t1,t2,t3);}

C_noret_decl(trf_8932)
static void C_ccall trf_8932(C_word c,C_word *av) C_noret;
static void C_ccall trf_8932(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8932(t0,t1,t2);}

C_noret_decl(trf_8966)
static void C_ccall trf_8966(C_word c,C_word *av) C_noret;
static void C_ccall trf_8966(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8966(t0,t1,t2,t3);}

C_noret_decl(trf_8990)
static void C_ccall trf_8990(C_word c,C_word *av) C_noret;
static void C_ccall trf_8990(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8990(t0,t1,t2);}

C_noret_decl(trf_9024)
static void C_ccall trf_9024(C_word c,C_word *av) C_noret;
static void C_ccall trf_9024(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9024(t0,t1,t2);}

C_noret_decl(trf_9079)
static void C_ccall trf_9079(C_word c,C_word *av) C_noret;
static void C_ccall trf_9079(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9079(t0,t1,t2);}

C_noret_decl(trf_9209)
static void C_ccall trf_9209(C_word c,C_word *av) C_noret;
static void C_ccall trf_9209(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9209(t0,t1,t2);}

C_noret_decl(trf_9256)
static void C_ccall trf_9256(C_word c,C_word *av) C_noret;
static void C_ccall trf_9256(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9256(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9275)
static void C_ccall trf_9275(C_word c,C_word *av) C_noret;
static void C_ccall trf_9275(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9275(t0,t1,t2);}

C_noret_decl(trf_9291)
static void C_ccall trf_9291(C_word c,C_word *av) C_noret;
static void C_ccall trf_9291(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9291(t0,t1,t2);}

C_noret_decl(trf_9405)
static void C_ccall trf_9405(C_word c,C_word *av) C_noret;
static void C_ccall trf_9405(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9405(t0,t1,t2);}

C_noret_decl(trf_9439)
static void C_ccall trf_9439(C_word c,C_word *av) C_noret;
static void C_ccall trf_9439(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9439(t0,t1,t2,t3);}

C_noret_decl(trf_9483)
static void C_ccall trf_9483(C_word c,C_word *av) C_noret;
static void C_ccall trf_9483(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9483(t0,t1,t2);}

C_noret_decl(trf_9517)
static void C_ccall trf_9517(C_word c,C_word *av) C_noret;
static void C_ccall trf_9517(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9517(t0,t1,t2,t3);}

C_noret_decl(trf_9555)
static void C_ccall trf_9555(C_word c,C_word *av) C_noret;
static void C_ccall trf_9555(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9555(t0,t1,t2);}

C_noret_decl(trf_9662)
static void C_ccall trf_9662(C_word c,C_word *av) C_noret;
static void C_ccall trf_9662(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9662(t0,t1,t2);}

C_noret_decl(trf_9696)
static void C_ccall trf_9696(C_word c,C_word *av) C_noret;
static void C_ccall trf_9696(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9696(t0,t1,t2);}

C_noret_decl(trf_9805)
static void C_ccall trf_9805(C_word c,C_word *av) C_noret;
static void C_ccall trf_9805(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9805(t0,t1,t2);}

C_noret_decl(trf_9838)
static void C_ccall trf_9838(C_word c,C_word *av) C_noret;
static void C_ccall trf_9838(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9838(t0,t1,t2);}

C_noret_decl(trf_9922)
static void C_ccall trf_9922(C_word c,C_word *av) C_noret;
static void C_ccall trf_9922(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9922(t0,t1,t2);}

C_noret_decl(trf_9940)
static void C_ccall trf_9940(C_word c,C_word *av) C_noret;
static void C_ccall trf_9940(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9940(t0,t1);}

C_noret_decl(trf_9955)
static void C_ccall trf_9955(C_word c,C_word *av) C_noret;
static void C_ccall trf_9955(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9955(t0,t1);}

/* k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_10007(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(51,c,5)))){
C_save_and_reclaim((void *)f_10007,c,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,4,lf[196],lf[197],C_SCHEME_TRUE,C_SCHEME_TRUE);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10258,a[2]=((C_word*)t0)[2],a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10276,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10418,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10418(t15,t11,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k10053 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_10055(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_10055,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10059,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10071,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10133,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10133(t11,t7,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k10057 in k10053 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_10059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,1)))){
C_save_and_reclaim((void *)f_10059,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,4,lf[198],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
t7=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,lf[35],((C_word*)t0)[7],t7);
t9=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[9],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k10069 in k10053 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_10071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_10071,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10083,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10085,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10085(t10,t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10081 in k10069 in k10053 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_10083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10083,c,av);}
/* chicken-syntax.scm:505: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* map-loop2139 in k10069 in k10053 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void f_10085(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10085,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop2103 in k10053 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_10133(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10133,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop2061 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void f_10181(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10181,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10188,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_10188(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_10188(t6,C_SCHEME_FALSE);}}

/* k10186 in map-loop2061 in k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_10188(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_10188,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=((C_word*)((C_word*)t0)[5])[1];
f_10181(t9,((C_word*)t0)[6],C_slot(((C_word*)t0)[2],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)),C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1953 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static C_word f_10258(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_10276(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_10276,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10280,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10296,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10370,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10370(t11,t7,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k10278 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_10280(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_10280,c,av);}
a=C_alloc(46);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[36],t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10055,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10181,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10181(t15,t11,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k10294 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_10296(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_10296,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10300,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10312,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10322,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10322(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k10298 in k10294 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_10300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10300,c,av);}
/* chicken-syntax.scm:505: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k10310 in k10294 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_10312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_10312,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[199],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:505: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop2025 in k10294 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void f_10322(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10322,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1989 in k10274 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void f_10370(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10370,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,3,lf[199],t7,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1947 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void f_10418(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_10418,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10425,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_10425(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_10425(t6,C_SCHEME_FALSE);}}

/* k10423 in map-loop1947 in k10005 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void f_10425(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_10425,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=(
/* chicken-syntax.scm:520: g1953 */
  f_10258(C_a_i(&a,30),((C_word*)t0)[2],C_slot(((C_word*)t0)[3],C_fix(0)),C_slot(((C_word*)t0)[4],C_fix(0)),C_slot(((C_word*)t0)[5],C_fix(0)))
);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_10418(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1916 in k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void f_10488(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10488,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1885 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void f_10536(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10536,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1854 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void f_10584(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10584,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1824 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_10632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10632,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:504: g1830 */
t4=((C_word*)t0)[4];
f_9955(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10655 in map-loop1824 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_10657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10657,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10632(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1796 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void f_10666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10666,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:503: g1802 */
t4=((C_word*)t0)[4];
f_9940(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10689 in map-loop1796 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_10691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10691,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10666(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1768 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void f_10700(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10700,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:502: g1774 */
t4=((C_word*)t0)[4];
f_9922(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10723 in map-loop1768 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_10725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10725,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10700(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1741 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void f_10734(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10734,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1714 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void f_10768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10768,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10802 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void C_ccall f_10804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10804,c,av);}
/* chicken-syntax.scm:456: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[202];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void C_ccall f_10806(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10806,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10810,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:460: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[202];
av2[3]=t2;
av2[4]=lf[203];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void C_ccall f_10810(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_10810,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[39]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10824,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11421,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li116),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_11421(t14,t10,t2);}

/* k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_10824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_10824,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10828,a[2]=((C_word*)t0)[2],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11387,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11387(t11,t7,((C_word*)t0)[5]);}

/* g1417 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void f_10828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10828,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10836,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:464: chicken.base#gensym */
t3=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10834 in g1417 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_10836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10836,c,av);}
/* chicken-syntax.scm:464: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_10839(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_10839,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10843,a[2]=((C_word*)t0)[2],a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10854,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11353,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11353(t11,t7,((C_word*)t0)[6]);}

/* g1445 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void f_10843(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10843,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10851,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:465: chicken.base#gensym */
t3=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10849 in g1445 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_10851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10851,c,av);}
/* chicken-syntax.scm:465: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_10854(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10854,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11174,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11319,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_11319(t15,t11,((C_word*)t0)[6]);}

/* k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_10861(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10861,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[39]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11044,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11118,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11118(t12,t8,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10883 in k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_10885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10885,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[36],t2);
t4=C_a_i_list(&a,4,lf[198],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10895 in k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_10897(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10897,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10901,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10913,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10923,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10923(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10899 in k10895 in k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_10901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10901,c,av);}
/* chicken-syntax.scm:466: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k10911 in k10895 in k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_10913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10913,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[185]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:466: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1668 in k10895 in k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_10923(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10923,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1632 in k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void f_10971(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10971,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k11027 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_11029(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_11029,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[36],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[36],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10885,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10897,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10971,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10971(t15,t11,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k11042 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_11044(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_11044,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11048,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11060,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11070,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_11070(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k11046 in k11042 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_11048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11048,c,av);}
/* chicken-syntax.scm:466: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k11058 in k11042 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_11060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11060,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[185]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:466: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1596 in k11042 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void f_11070(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_11070,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1560 in k10859 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void f_11118(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_11118,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_11174(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_11174,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t3=C_i_check_list_2(t1,lf[39]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11271,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_11271(t8,t4,((C_word*)t0)[2],t1);}

/* k11181 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_11183(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11183,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11251,a[2]=t9,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_11251(t11,t6,t7);}

/* k11188 in k11181 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_11190(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11190,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t3=C_i_check_list_2(t1,lf[39]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11199,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11201,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_11201(t8,t4,((C_word*)t0)[2],t1);}

/* k11197 in k11188 in k11181 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_11199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11199,c,av);}
/* chicken-syntax.scm:466: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* map-loop1526 in k11188 in k11181 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_11201(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_11201,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* loop in k11181 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void f_11251(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11251,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11265,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:472: loop */
t6=t4;
t7=C_fixnum_difference(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k11263 in loop in k11181 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_11265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11265,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1469 in k11172 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void f_11271(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_11271,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1490 in k10852 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void f_11319(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11319,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1439 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void f_11353(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11353,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:465: g1445 */
t4=((C_word*)t0)[4];
f_10843(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11376 in map-loop1439 in k10837 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_11378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11378,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11353(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1411 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void f_11387(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11387,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:464: g1417 */
t4=((C_word*)t0)[4];
f_10828(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11410 in map-loop1411 in k10822 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_11412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11412,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11387(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1384 in k10808 in a10805 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void f_11421(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11421,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11455 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void C_ccall f_11457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11457,c,av);}
/* chicken-syntax.scm:447: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[204];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11458 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void C_ccall f_11459(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11459,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11463,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:451: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[204];
av2[3]=t2;
av2[4]=lf[207];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11461 in a11458 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void C_ccall f_11463(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11463,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11484,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11486,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11486(t12,t8,t6);}

/* k11482 in k11461 in a11458 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void C_ccall f_11484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11484,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1347 in k11461 in a11458 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void f_11486(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11486,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[205],t3,*((C_word*)lf[206]+1));
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11520 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_11522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11522,c,av);}
/* chicken-syntax.scm:439: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[208];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11523 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_11524(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11524,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11528,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:443: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[208];
av2[3]=t2;
av2[4]=lf[210];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11526 in a11523 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void C_ccall f_11528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11528,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11549,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11551,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li120),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11551(t12,t8,t6);}

/* k11547 in k11526 in a11523 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void C_ccall f_11549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11549,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1310 in k11526 in a11523 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void f_11551(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11551,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[209],t3,C_SCHEME_FALSE);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11585 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in ... */
static void C_ccall f_11587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11587,c,av);}
/* chicken-syntax.scm:431: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[211];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11588 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in ... */
static void C_ccall f_11589(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11589,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11593,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:435: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[211];
av2[3]=t2;
av2[4]=lf[212];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11591 in a11588 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_11593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11593,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11614,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11616,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li122),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11616(t12,t8,t6);}

/* k11612 in k11591 in a11588 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void C_ccall f_11614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11614,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1273 in k11591 in a11588 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void f_11616(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11616,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[205],t3,C_SCHEME_FALSE);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11650 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in ... */
static void C_ccall f_11652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11652,c,av);}
/* chicken-syntax.scm:423: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[213];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11653 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in ... */
static void C_ccall f_11654(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11654,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11658,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:428: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[213];
av2[3]=t2;
av2[4]=lf[215];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11656 in a11653 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in ... */
static void C_ccall f_11658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_11658,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[214],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11671 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in ... */
static void C_ccall f_11673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11673,c,av);}
/* chicken-syntax.scm:417: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[216];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11674 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in ... */
static void C_ccall f_11675(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11675,c,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[217],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11685 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in ... */
static void C_ccall f_11687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11687,c,av);}
/* chicken-syntax.scm:398: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[218];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11688 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in ... */
static void C_ccall f_11689(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11689,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11693,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:403: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[218];
av2[3]=t2;
av2[4]=lf[221];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11691 in a11688 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in ... */
static void C_ccall f_11693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_11693,c,av);}
a=C_alloc(15);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[36],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[57],t5,lf[219]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:407: ##sys#check-syntax */
t4=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[218];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[220];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k11713 in k11691 in a11688 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in ... */
static void C_ccall f_11715(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11715,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_pairp(t2);
t8=(C_truep(t7)?C_i_nullp(C_u_i_cdr(t2)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_i_car(t2);
t10=C_a_i_list(&a,2,t9,t3);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t11,t6);
t13=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_cons(&a,2,lf[35],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t9=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t3);
t10=C_a_i_cons(&a,2,t2,t6);
t11=C_a_i_cons(&a,2,lf[36],t10);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[57],t9,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k11778 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in ... */
static void C_ccall f_11780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11780,c,av);}
/* chicken-syntax.scm:326: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in ... */
static void C_ccall f_11782(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11782,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11786,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:330: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[232];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in ... */
static void C_ccall f_11786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11786,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:332: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in ... */
static void C_ccall f_11792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11792,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:333: scheme#symbol->string */
t3=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in ... */
static void C_ccall f_11795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11795,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12160,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:334: ##sys#current-module */
t4=*((C_word*)lf[131]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in ... */
static void C_ccall f_11798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11798,c,av);}
a=C_alloc(9);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11804,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:339: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[127];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_11804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11804,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:340: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void C_ccall f_11807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11807,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11810,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:341: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void C_ccall f_11810(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11810,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[39]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11874,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12125,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li129),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_12125(t12,t8,((C_word*)t0)[4]);}

/* g1174 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void f_11814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11814,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11827,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11842,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:346: c */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_car(t2);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
t4=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k11825 in g1174 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void f_11827(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11827,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
t2=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11840 in g1174 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_11842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11842,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(C_u_i_cdr(t3)))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
t3=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[4];
f_11827(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_11827(t2,C_SCHEME_FALSE);}}

/* k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void C_ccall f_11874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11874,c,av);}
a=C_alloc(28);
t2=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12097,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12117,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t6=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[230];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11903 in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_11905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11905,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[58],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void f_11907(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11907,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11923,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
/* chicken-syntax.scm:370: scheme#symbol->string */
t9=*((C_word*)lf[142]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-syntax.scm:370: scheme#symbol->string */
t9=*((C_word*)lf[142]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_11923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11923,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12056,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:371: scheme#string-append */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[226];
av2[4]=t1;
av2[5]=lf[227];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k11924 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_11926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11926,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12052,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:372: scheme#string-append */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[225];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11927 in k11924 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_11929(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(79,c,2)))){
C_save_and_reclaim((void *)f_11929,c,av);}
a=C_alloc(79);
t2=C_a_i_list(&a,2,lf[123],lf[224]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[117],lf[123],t3);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=C_a_i_list(&a,4,lf[120],lf[123],((C_word*)t0)[3],lf[224]);
t7=C_a_i_list(&a,4,lf[36],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11955,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11959,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_11959(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_11959(t11,C_a_i_list(&a,1,t10));}}

/* k11941 in k11953 in k11927 in k11924 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_11943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11943,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11953 in k11927 in k11924 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_11955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11955,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11943,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:396: mapslots */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11907(t4,t3,C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k11957 in k11927 in k11924 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_11959(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(66,0,3)))){
C_save_and_reclaim_args((void *)trf_11959,2,t0,t1);}
a=C_alloc(66);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[117],lf[123],t3);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=C_a_i_list(&a,3,lf[118],lf[123],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[36],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:379: ##sys#append */
t11=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[117],lf[123],t3);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=C_a_i_list(&a,3,lf[118],lf[123],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[36],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:379: ##sys#append */
t10=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k12050 in k11924 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_12052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12052,c,av);}
/* chicken-syntax.scm:372: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k12054 in k11921 in mapslots in k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_12056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12056,c,av);}
/* chicken-syntax.scm:371: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k12069 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_12071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,4)))){
C_save_and_reclaim((void *)f_12071,c,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[116],lf[123],t3);
t5=C_a_i_list(&a,3,lf[36],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11905,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11907,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li128),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_11907(t11,t7,((C_word*)t0)[9],C_fix(1));}

/* k12089 in k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_12091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12091,c,av);}
/* chicken-syntax.scm:363: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k12095 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_12097(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_12097,c,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[115],t3);
t5=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12091,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t9=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[229];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k12115 in k11872 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_12117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12117,c,av);}
/* chicken-syntax.scm:358: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* map-loop1168 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void f_12125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12125,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:343: g1174 */
t4=((C_word*)t0)[4];
f_11814(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12148 in map-loop1168 in k11808 in k11805 in k11802 in k11796 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_12150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12150,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12125(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12158 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in ... */
static void C_ccall f_12160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12160,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12171,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:336: ##sys#current-module */
t4=*((C_word*)lf[131]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_11798(2,av2);}}}

/* k12165 in k12158 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_12167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12167,c,av);}
/* chicken-syntax.scm:335: chicken.base#symbol-append */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[129];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12169 in k12158 in k11793 in k11790 in k11784 in a11781 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_12171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12171,c,av);}
/* chicken-syntax.scm:336: ##sys#module-name */
t2=*((C_word*)lf[130]+1);{
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

/* k12173 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in ... */
static void C_ccall f_12175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12175,c,av);}
/* chicken-syntax.scm:318: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[233];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12176 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in ... */
static void C_ccall f_12177(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12177,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12181,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:323: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[233];
av2[3]=t2;
av2[4]=lf[235];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12179 in a12176 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in ... */
static void C_ccall f_12181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12181,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[234],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12190 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12192,c,av);}
/* chicken-syntax.scm:304: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[236];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12194(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12194,c,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12204,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12233,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:306: chicken.internal.syntax-rules#safe-length */
t8=*((C_word*)lf[242]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_12204(2,av2);}}}

/* k12202 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_12204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12204,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12217,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: rename1103 */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[237];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-syntax.scm:306: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k12215 in k12202 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in ... */
static void C_ccall f_12217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12217,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_12233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12233,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12282,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#>= */
t4=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k12234 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in ... */
static void C_ccall f_12236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12236,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:306: chicken.internal.syntax-rules#safe-length */
t3=*((C_word*)lf[242]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12204(2,av2);}}}

/* k12237 in k12234 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in ... */
static void C_ccall f_12239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12239,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#>= */
t3=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k12243 in k12237 in k12234 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in ... */
static void C_ccall f_12245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12245,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12254,a[2]=t4,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12254(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12204(2,av2);}}}

/* loop1100 in k12243 in k12237 in k12234 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in ... */
static void f_12254(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12254,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12261,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:306: ##sys#= */
t5=*((C_word*)lf[240]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12259 in loop1100 in k12243 in k12237 in k12234 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in ... */
static void C_ccall f_12261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12261,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12275,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#+ */
t4=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12273 in k12259 in loop1100 in k12243 in k12237 in k12234 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in ... */
static void C_ccall f_12275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12275,c,av);}
/* chicken-syntax.scm:306: loop1100 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12254(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12280 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in ... */
static void C_ccall f_12282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12282,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12291,a[2]=t4,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12291(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12236(2,av2);}}}

/* loop1100 in k12280 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in ... */
static void f_12291(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12291,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12298,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:306: ##sys#= */
t5=*((C_word*)lf[240]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12296 in loop1100 in k12280 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in ... */
static void C_ccall f_12298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12298,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12312,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#+ */
t4=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12310 in k12296 in loop1100 in k12280 in k12231 in a12193 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in ... */
static void C_ccall f_12312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12312,c,av);}
/* chicken-syntax.scm:306: loop1100 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12291(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12318 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12320,c,av);}
/* chicken-syntax.scm:296: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[243];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12321 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12322(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12322,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(C_i_cdr(t5),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12342,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:298: rename1068 */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[244];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12356,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t9=C_i_cdr(t5);
t10=C_i_pairp(t9);
t11=t8;
f_12356(t11,(C_truep(t10)?C_eqp(C_i_cdr(t9),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t9=t8;
f_12356(t9,C_SCHEME_FALSE);}}}

/* k12340 in a12321 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12342,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12354 in a12321 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12356(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12356,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12369,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:298: rename1068 */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[244];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-syntax.scm:298: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[238]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k12367 in k12354 in a12321 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_12369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12369,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12415 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12417,c,av);}
/* chicken-syntax.scm:285: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[245];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12418 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12419(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12419,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12423,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:289: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[245];
av2[3]=t2;
av2[4]=lf[247];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12421 in a12418 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12423,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:290: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[246];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12428 in k12421 in a12418 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12430,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:291: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[127];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12436 in k12428 in k12421 in a12418 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_12438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12438,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12444 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12446,c,av);}
/* chicken-syntax.scm:277: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[246];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12447 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12448(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12448,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12452,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:281: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[246];
av2[3]=t2;
av2[4]=lf[250];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12450 in a12447 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12452,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[58],t3);
/* chicken-syntax.scm:282: ##sys#register-meta-expression */
t5=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12453 in k12450 in a12447 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12455,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[58],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[248],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12474 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12476,c,av);}
/* chicken-syntax.scm:269: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[251];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12477 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12478(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12478,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12482,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:274: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[251];
av2[3]=t2;
av2[4]=lf[253];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12480 in a12477 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12482,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[252],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12491 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12493,c,av);}
/* chicken-syntax.scm:244: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[254];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12494 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12495,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12499,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:248: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[254];
av2[3]=t2;
av2[4]=lf[262];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12497 in a12494 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12499,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[255],*((C_word*)lf[256]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[257];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:251: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k12506 in k12497 in a12494 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12508,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12511,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:252: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[261];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12509 in k12506 in k12497 in a12494 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12511,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12514,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:253: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12512 in k12509 in k12506 in k12497 in a12494 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_12514,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[258]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12537,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:259: chicken.compiler.scrutinizer#check-and-validate-type */
t5=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
av2[3]=lf[254];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k12535 in k12512 in k12509 in k12506 in k12497 in a12494 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12537,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[259],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[248],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12551 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12553,c,av);}
/* chicken-syntax.scm:219: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[263];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12555(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12555,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12559,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:223: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[263];
av2[3]=t2;
av2[4]=lf[265];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12559,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[255],*((C_word*)lf[256]+1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12565,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:225: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12565,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12568,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:226: chicken.syntax#get-line-number */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12568(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_12568,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12592,a[2]=((C_word*)t0)[4],a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(((C_word*)t0)[2]);
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[39]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12630,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12632,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_12632(t17,t13,t11);}

/* g985 in k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12592(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12592,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12596,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:232: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[88]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12594 in g985 in k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_12596,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[81]);
if(C_truep(t3)){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[58],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,lf[81],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:237: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[263];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[58],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k12601 in k12594 in g985 in k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12603,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[58],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12628 in k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_12630,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[264],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop979 in k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12632,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:231: g985 */
t4=((C_word*)t0)[4];
f_12592(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12655 in map-loop979 in k12566 in k12563 in k12557 in a12554 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12657,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12632(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12674 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12676,c,av);}
/* chicken-syntax.scm:159: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[266];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12678,c,av);}
a=C_alloc(5);
t5=C_i_memq(lf[255],*((C_word*)lf[256]+1));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[267];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12688,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:165: ##sys#check-syntax */
t7=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[266];
av2[3]=t2;
av2[4]=lf[273];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12688,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12698,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:169: chicken.base#gensym */
t6=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12698,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12701,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
/* chicken-syntax.scm:170: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=C_u_i_car(t5);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12701(2,av2);}}}

/* k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12701,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12704,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:171: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[127];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_12704,c,av);}
a=C_alloc(12);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12712,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t4,a[8]=((C_word*)t0)[6],a[9]=((C_word)li146),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_12712(t6,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_12712,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:175: scheme#reverse */
t6=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_cdr(t2);
t7=C_a_i_cons(&a,2,t5,t3);
t8=C_a_i_cons(&a,2,lf[271],t4);
/* chicken-syntax.scm:205: loop */
t10=t1;
t11=t6;
t12=t7;
t13=t8;
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12952,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_eqp(C_fix(2),C_u_i_length(t5));
t8=t6;
f_12952(t8,(C_truep(t7)?C_i_symbolp(C_i_car(t5)):C_SCHEME_FALSE));}
else{
t7=t6;
f_12952(t7,C_SCHEME_FALSE);}}}}

/* k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12722,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:176: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_12725,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12896,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12898,a[2]=t4,a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12898(t6,t2,((C_word*)t0)[9],C_fix(1));}

/* k12765 in k12829 in k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_12767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_12767,c,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[58],((C_word*)t0)[6],((C_word*)t0)[7],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop925 in k12829 in k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void f_12769(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_12769,4,t0,t1,t2,t3);}
a=C_alloc(21);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[196],t7,C_SCHEME_TRUE,t6);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k12829 in k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12831(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(60,0,4)))){
C_save_and_reclaim_args((void *)trf_12831,2,t0,t1);}
a=C_alloc(60);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[268],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[269],((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[270],((C_word*)t0)[4]);
t6=C_a_i_list(&a,3,lf[217],t4,t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12767,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t7,a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12769,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li143),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_12769(t16,t12,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k12850 in k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12852,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_12831(t2,C_a_i_list2(&a,2,t1,((C_word*)t0)[3]));}

/* map-loop891 in k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12854,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[260]+1);
/* chicken-syntax.scm:190: g914 */
t6=*((C_word*)lf[260]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[266];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12877 in map-loop891 in k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_12879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12879,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12854(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12894 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12896(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_12896,c,av);}
a=C_alloc(29);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12831,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[9])?C_i_pairp(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(((C_word*)t0)[9],lf[39]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12852,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12854,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li144),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12854(t14,t10,((C_word*)t0)[9]);}
else{
t5=t3;
f_12831(t5,C_a_i_list1(&a,1,t2));}}

/* loop2 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12898(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12898,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12916,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:182: loop2 */
t7=t5;
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k12914 in loop2 in k12723 in k12720 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12916,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12950 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_12952(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12952,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12969,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:211: chicken.compiler.scrutinizer#check-and-validate-type */
t6=*((C_word*)lf[260]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[266];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:215: ##sys#syntax-error */
t2=*((C_word*)lf[103]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[266];
av2[3]=lf[272];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k12967 in k12950 in loop in k12702 in k12699 in k12696 in k12686 in a12677 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_12969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12969,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:207: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12712(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k13024 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13026,c,av);}
/* chicken-syntax.scm:153: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[274];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13028(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_13028,c,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13038,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13200,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:155: chicken.internal.syntax-rules#safe-length */
t8=*((C_word*)lf[242]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_13038(2,av2);}}}

/* k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13038(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_13038,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13156,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li150),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_13156(t12,t8,t6);}
else{
/* chicken-syntax.scm:155: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[238]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13055(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_13055,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13122,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_13122(t12,t8,t6);}

/* k13074 in k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_13076,c,av);}
a=C_alloc(7);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13086,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:155: rename752 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k13084 in k13074 in k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_13086,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13096,a[2]=((C_word*)t0)[4],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:155: ##sys#map-n */
t4=*((C_word*)lf[276]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k13092 in k13084 in k13074 in k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13094,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a13095 in k13084 in k13074 in k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13096,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13112,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: rename752 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[275];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k13110 in a13095 in k13084 in k13074 in k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_13112,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop824 in k13053 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13122(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_13122,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_i_car(t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t10=t1;
t11=C_slot(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop796 in k13036 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13156(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_13156,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_13200,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13249,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#>= */
t4=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k13201 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13203,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:155: chicken.internal.syntax-rules#safe-length */
t3=*((C_word*)lf[242]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_13038(2,av2);}}}

/* k13204 in k13201 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_13206,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#>= */
t3=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k13210 in k13204 in k13201 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_13212,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13221,a[2]=t4,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_13221(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_13038(2,av2);}}}

/* loop749 in k13210 in k13204 in k13201 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13221(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_13221,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13228,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:155: ##sys#= */
t5=*((C_word*)lf[240]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k13226 in loop749 in k13210 in k13204 in k13201 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_13228,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13242,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#+ */
t4=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k13240 in k13226 in loop749 in k13210 in k13204 in k13201 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13242,c,av);}
/* chicken-syntax.scm:155: loop749 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13221(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k13247 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_13249,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13258,a[2]=t4,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_13258(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_13203(2,av2);}}}

/* loop749 in k13247 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13258(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_13258,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13265,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:155: ##sys#= */
t5=*((C_word*)lf[240]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k13263 in loop749 in k13247 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13265,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=t3;
f_13277(t6,(C_truep(t5)?C_eqp(C_i_cdr(t4),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t4=t3;
f_13277(t4,C_SCHEME_FALSE);}}}

/* k13275 in k13263 in loop749 in k13247 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_13277,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13288,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#+ */
t4=*((C_word*)lf[239]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k13286 in k13275 in k13263 in loop749 in k13247 in k13198 in a13027 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13288,c,av);}
/* chicken-syntax.scm:155: loop749 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13258(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k13313 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13315,c,av);}
/* chicken-syntax.scm:142: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[275];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13316 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13317(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13317,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13321,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:146: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[275];
av2[3]=t2;
av2[4]=lf[277];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13319 in a13316 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_13321,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[255],*((C_word*)lf[256]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13337,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:149: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[275];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k13335 in k13319 in a13316 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_13337,c,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[196],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13351 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13353,c,av);}
/* chicken-syntax.scm:119: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[278];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13355(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13355,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13359,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:123: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[278];
av2[3]=t2;
av2[4]=lf[285];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13359,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[255],*((C_word*)lf[256]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[279];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:126: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k13366 in k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_13368,c,av);}
a=C_alloc(11);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13375,a[2]=t1,a[3]=t3,a[4]=((C_word)li155),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13385,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li156),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:130: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a13374 in k13366 in k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13375,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13383,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:133: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[88]+1);{
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

/* k13381 in a13374 in k13366 in k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13383,c,av);}
/* chicken-syntax.scm:131: chicken.compiler.scrutinizer#validate-type */
t2=*((C_word*)lf[280]+1);{
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

/* a13384 in k13366 in k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13385(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,5)))){
C_save_and_reclaim((void *)f_13385,c,av);}
a=C_alloc(30);
if(C_truep(C_i_not(t2))){
/* chicken-syntax.scm:135: ##sys#syntax-error */
t5=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[278];
av2[3]=lf[281];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=C_i_cdddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,2,lf[282],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13410,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13414,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[284],((C_word*)t0)[2]);
t12=t10;
f_13414(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_13414(t11,C_SCHEME_END_OF_LIST);}}}

/* k13408 in a13384 in k13366 in k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13410,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[217],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13412 in a13384 in k13366 in k13357 in a13354 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13414(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_13414,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[283],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:137: ##sys#append */
t5=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:137: ##sys#append */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k13462 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13464,c,av);}
/* chicken-syntax.scm:77: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[288];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13466(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13466,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13470,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:82: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[288];
av2[3]=t2;
av2[4]=lf[296];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13470,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:83: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13473,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13476,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:84: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[294];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_13476,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13479,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:85: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[293];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_13479,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13482,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:86: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[286];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13482,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13485,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:87: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[81];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_13485,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13487,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li160),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13617,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:99: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[292];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* parse-clause in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13487(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,2)))){
C_save_and_reclaim_args((void *)trf_13487,3,t0,t1,t2);}
a=C_alloc(23);
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_u_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_u_i_car(t2));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13497,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_i_cddr(t2);
t11=C_a_i_cons(&a,2,t9,t10);
t12=t7;
f_13497(t12,C_a_i_cons(&a,2,lf[35],t11));}
else{
t8=C_u_i_cdr(t2);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=t7;
f_13497(t10,C_a_i_cons(&a,2,lf[35],t9));}}

/* k13495 in parse-clause in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13497(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_13497,2,t0,t1);}
a=C_alloc(25);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13522,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li158),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13536,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13538,a[2]=t6,a[3]=t4,a[4]=t10,a[5]=t5,a[6]=((C_word)li159),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_13538(t12,t8,((C_word*)t0)[2]);}}

/* g638 in k13495 in parse-clause in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static C_word f_13522(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[87],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k13534 in k13495 in parse-clause in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_13536,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop632 in k13495 in parse-clause in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13538(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_13538,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:96: g638 */
  f_13522(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13615 in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13617(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_13617,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[87],lf[73]);
t3=C_a_i_list(&a,3,lf[116],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[289],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_cddr(((C_word*)t0)[5]);
t13=C_i_check_list_2(t12,lf[39]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13642,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13673,a[2]=t10,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t11,a[6]=((C_word)li161),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_13673(t18,t14,t12);}

/* k13640 in k13615 in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13642,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:104: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[291];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13647 in k13640 in k13615 in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_13649,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13653,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:104: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_a_i_list(&a,2,lf[290],((C_word*)t0)[6]);
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_list(&a,1,t4);
/* chicken-syntax.scm:104: ##sys#append */
t6=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k13651 in k13647 in k13640 in k13615 in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_13653,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop663 in k13615 in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void f_13673(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13673,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:103: g669 */
t4=((C_word*)t0)[4];
f_13487(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13696 in map-loop663 in k13615 in k13483 in k13480 in k13477 in k13474 in k13471 in k13468 in a13465 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13698,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13673(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13735 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13737,c,av);}
/* chicken-syntax.scm:56: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[292];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13738 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13739(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13739,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13743,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:61: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[292];
av2[3]=t2;
av2[4]=lf[300];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13741 in a13738 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13743,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:62: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[299];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13744 in k13741 in a13738 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13746,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13749,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:63: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[63];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13747 in k13744 in k13741 in a13738 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13749,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:64: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[297];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13758 in k13747 in k13744 in k13741 in a13738 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_13760(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(114,c,1)))){
C_save_and_reclaim((void *)f_13760,c,av);}
a=C_alloc(114);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[3]);
t6=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,3,lf[36],t4,t7);
t9=C_u_i_cdr(((C_word*)t0)[3]);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[36],t12);
t14=C_a_i_list(&a,3,lf[55],lf[56],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[2],t15);
t17=C_a_i_list(&a,3,lf[36],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[57],t13,t17);
t19=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,lf[298],t8,t19);
t21=C_a_i_list(&a,3,lf[36],t2,t20);
t22=C_a_i_list(&a,2,t1,t21);
t23=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k4396 */
static void C_ccall f_4398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4398,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4401,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4399 in k4396 */
static void C_ccall f_4401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4401,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k4402 in k4399 in k4396 */
static void C_ccall f_4404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4404,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4514,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:54: ##sys#macro-environment */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* take in k4402 in k4399 in k4396 */
static void f_4514(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4514,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4532,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k4530 in take in k4402 in k4399 in k4396 */
static void C_ccall f_4532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4532,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6013 in a6006 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in ... */
static void f_4572(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4572,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4586,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:67: scheme#reverse */
t6=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,t3);
/* mini-srfi-1.scm:68: loop */
t9=t1;
t10=t5;
t11=t7;
t12=C_u_i_cdr(t4);
t1=t9;
t2=t10;
t3=t11;
t4=t12;
goto loop;}}

/* k4584 in loop in k6013 in a6006 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in ... */
static void C_ccall f_4586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4586,c,av);}
/* mini-srfi-1.scm:67: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}

/* k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5686(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5686,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[297],lf[62]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13737,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13739,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:59: ##sys#er-transformer */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5689(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5689,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[286],lf[287]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13464,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13466,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:80: ##sys#er-transformer */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5692,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:111: chicken.internal#macro-subset */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5695,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:117: ##sys#macro-environment */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5699,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5702,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13353,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13355,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:121: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5702,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13315,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13317,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:144: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5705,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13026,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13028,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:155: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5708,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12676,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12678,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:161: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5711,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12553,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12555,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:221: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5714,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12493,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12495,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:246: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5717,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:262: chicken.internal#macro-subset */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5720,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:267: ##sys#macro-environment */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5724,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12476,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12478,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:272: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5727,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12446,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12448,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:279: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5730,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12417,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12419,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:287: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5733,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12320,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12322,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:298: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5736,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12192,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12194,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:306: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5739,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:310: chicken.internal#macro-subset */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in k4396 in ... */
static void C_ccall f_5742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5742,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:316: ##sys#macro-environment */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in k4399 in ... */
static void C_ccall f_5746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5746,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5749,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12177,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:321: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in k4402 in ... */
static void C_ccall f_5749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5749,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11780,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11782,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:328: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in k5684 in ... */
static void C_ccall f_5752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5752,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11689,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:401: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in k5687 in ... */
static void C_ccall f_5755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5755,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11673,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11675,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:419: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in k5690 in ... */
static void C_ccall f_5758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5758,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11654,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:426: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in k5693 in ... */
static void C_ccall f_5761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5761,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11587,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11589,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:433: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in k5697 in ... */
static void C_ccall f_5764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5764,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11522,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11524,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:441: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in k5700 in ... */
static void C_ccall f_5767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5767,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11457,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11459,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:449: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in k5703 in ... */
static void C_ccall f_5770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5770,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10804,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10806,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:458: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in k5706 in ... */
static void C_ccall f_5773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5773,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9874,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9876,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:490: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void C_ccall f_5776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5776,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9794,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9796,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:545: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_5779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5779,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9770,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9772,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:557: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_5782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5782,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9742,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9744,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:565: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_5785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5785,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9721,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9723,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:574: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_5788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5788,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9591,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9593,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:582: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_5792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5792,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9114,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9116,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:599: ##sys#er-transformer */
t6=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_5795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5795,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9060,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9062,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:653: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_5798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5798,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8802,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8804,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:668: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_5801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5801,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8780,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8782,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:688: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_5804(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5804,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[159],lf[160]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8736,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8738,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:697: ##sys#er-transformer */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_5807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5807,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8632,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8634,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:707: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_5810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5810,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8492,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:728: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_5813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5813,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[133],lf[134]);
t4=C_a_i_cons(&a,2,lf[23],lf[24]);
t5=C_a_i_cons(&a,2,lf[25],lf[26]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8042,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8044,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:835: ##sys#er-transformer */
t9=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_5816(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5816,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[133],lf[134]);
t4=C_a_i_cons(&a,2,lf[23],lf[24]);
t5=C_a_i_cons(&a,2,lf[25],lf[26]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7965,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7967,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:924: ##sys#er-transformer */
t9=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_5819(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5819,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[133],lf[134]);
t4=C_a_i_cons(&a,2,lf[23],lf[24]);
t5=C_a_i_cons(&a,2,lf[25],lf[26]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7805,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7807,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:952: ##sys#er-transformer */
t9=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_5822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5822,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7293,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7295,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:984: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_5825(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5825,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[75],lf[100]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7121,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7123,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1082: ##sys#er-transformer */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_5828(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5828,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[75],lf[100]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6926,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6928,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1115: ##sys#er-transformer */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_5831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5831,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6861,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6863,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1156: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5834,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6843,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6845,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1173: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_5837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5837,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6754,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6756,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1182: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5840,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6366,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6368,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1205: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_5843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5843,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1274: chicken.internal#macro-subset */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_5846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5846,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1280: ##sys#macro-environment */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_5850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5850,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5853,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6317,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6319,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1284: ##sys#er-transformer */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_5853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5853,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1296: chicken.internal#macro-subset */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_5856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5856,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1301: ##sys#macro-environment */
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void C_ccall f_5860(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_5860,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[21],lf[22]);
t4=C_a_i_cons(&a,2,lf[23],lf[24]);
t5=C_a_i_cons(&a,2,lf[25],lf[26]);
t6=C_a_i_cons(&a,2,lf[27],lf[28]);
t7=C_a_i_cons(&a,2,lf[29],lf[30]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5877,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5879,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1310: ##sys#er-transformer */
t11=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k5861 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_5863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5863,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5866,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1368: chicken.internal#macro-subset */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5864 in k5861 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void C_ccall f_5866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,10)))){
C_save_and_reclaim((void *)f_5866,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#scheme.case-lambda-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1372: chicken.platform#register-feature! */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[10];
av2[3]=lf[11];
av2[4]=lf[12];
av2[5]=lf[13];
av2[6]=lf[14];
av2[7]=lf[15];
av2[8]=lf[16];
av2[9]=lf[17];
av2[10]=lf[18];
((C_proc)(void*)(*((C_word*)t4+1)))(11,av2);}}

/* k5867 in k5864 in k5861 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void C_ccall f_5869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5869,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5875 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_5877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5877,c,av);}
/* chicken-syntax.scm:1303: ##sys#extend-macro-environment */
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
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_5879(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5879,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5883,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1312: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[32];
av2[3]=t2;
av2[4]=lf[48];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void C_ccall f_5883(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5883,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[2],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[39]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6259,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6261,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6261(t14,t10,t8);}

/* genvars in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void f_5885(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5885,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5891,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5891(t6,t1,C_fix(0));}

/* loop in genvars in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void f_5891(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5891,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5905,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1317: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5903 in loop in genvars in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in ... */
static void C_ccall f_5905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5905,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5909,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1317: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5891(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k5907 in k5903 in loop in genvars in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in ... */
static void C_ccall f_5909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5909,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5915 in loop in genvars in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in ... */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5917,c,av);}
/* chicken-syntax.scm:1317: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5920,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1323: genvars */
t3=((C_word*)t0)[5];
f_5885(t3,t2,t1);}

/* k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void C_ccall f_5923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5923,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1324: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[46];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in ... */
static void C_ccall f_5926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5926,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5929,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1325: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[45];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in ... */
static void C_ccall f_5929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5929,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5932,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1326: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in ... */
static void C_ccall f_5932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5932,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1327: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in ... */
static void C_ccall f_5935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5935,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1328: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in ... */
static void C_ccall f_5938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5938,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1329: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[25];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in ... */
static void C_ccall f_5941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5941,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1330: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[29];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in ... */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_5944,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5951,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1332: scheme#append */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in ... */
static void C_ccall f_5951(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_5951,c,av);}
a=C_alloc(35);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_u_i_cdr(((C_word*)t0)[5]);
t6=C_i_check_list_2(t5,lf[34]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5967,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=t9,a[12]=((C_word)li10),tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_5969(t11,t7,t5);}

/* k5965 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_5967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_5967,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[36],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in ... */
static void f_5969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_5969,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li9),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6222,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[43];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in ... */
static void f_5977(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_5977,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li8),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1337: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in ... */
static void C_ccall f_5987(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5987,c,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5991,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1340: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[32];
av2[3]=C_i_car(((C_word*)t0)[5]);
av2[4]=lf[41];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in ... */
static void C_ccall f_5991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_5991,c,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6001,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6001(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6001(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in ... */
static void f_6001(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6001,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6007,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1347: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k6003 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in ... */
static void C_ccall f_6005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6005,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[37],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6006 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in ... */
static void C_ccall f_6007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6007,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6015,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1348: take */
f_4514(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6013 in a6006 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in ... */
static void C_ccall f_6015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6015,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4572,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4572(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in ... */
static void C_ccall f_6017(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6017,c,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6021,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li6),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6093(t8,t4,t3,((C_word*)t0)[8]);}

/* k6019 in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in ... */
static void C_ccall f_6021(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6021,c,av);}
a=C_alloc(17);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[39]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6043,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6045,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6045(t12,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k6041 in k6019 in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in ... */
static void C_ccall f_6043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6043,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop3375 in k6019 in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in ... */
static void f_6045(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6045,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* build in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in ... */
static void f_6093(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_6093,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_u_i_car(C_u_i_cdr(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[35],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6146,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6194,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1355: chicken.base#gensym */
t6=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6144 in build in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in ... */
static void C_ccall f_6146(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_6146,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6157,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1359: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_6093(t9,t8,C_u_i_cdr(((C_word*)t0)[2]),t1);}
else{
/* chicken-syntax.scm:1360: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_6093(t9,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k6155 in k6144 in build in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in ... */
static void C_ccall f_6157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6157,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6192 in build in a6016 in k5999 in k5989 in a5986 in g3332 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in ... */
static void C_ccall f_6194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6194,c,av);}
/* chicken-syntax.scm:1355: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6220 in foldr3327 in k5949 in k5942 in k5939 in k5936 in k5933 in k5930 in k5927 in k5924 in k5921 in k5918 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in ... */
static void C_ccall f_6222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6222,c,av);}
/* chicken-syntax.scm:1335: g3332 */
t2=((C_word*)t0)[2];
f_5977(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a6248 in map-loop3284 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void C_ccall f_6249(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6249,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6257 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void C_ccall f_6259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6259,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[47]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop3284 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void f_6261(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_6261,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6249,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1319: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6284 in map-loop3284 in k5881 in a5878 in k5858 in k5854 in k5851 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6286,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6261(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6315 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_6317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6317,c,av);}
/* chicken-syntax.scm:1282: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6318 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_6319(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6319,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6323,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1286: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6321 in a6318 in k5848 in k5844 in k5841 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_6323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,1)))){
C_save_and_reclaim((void *)f_6323,c,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,1,lf[52]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[36],t4);
t6=C_a_i_list(&a,1,lf[53]);
t7=C_a_i_list(&a,2,lf[54],t6);
t8=C_a_i_list(&a,3,lf[55],lf[56],t1);
t9=C_a_i_list(&a,4,lf[36],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[57],t5,t9);
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[58],t2,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k6364 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_6366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6366,c,av);}
/* chicken-syntax.scm:1203: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_6368(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6368,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6372,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1207: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_6372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6372,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1208: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[81];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_6375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6375,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1209: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_6378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6378,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1210: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_6381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6381,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1211: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void C_ccall f_6384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6384,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1212: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_6387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6387,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1213: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[76];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void C_ccall f_6390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6390,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1214: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void C_ccall f_6393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6393,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1215: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void C_ccall f_6396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6396,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1216: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[73];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in ... */
static void C_ccall f_6399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6399,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* chicken-syntax.scm:1217: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[72];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in ... */
static void C_ccall f_6402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6402,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* chicken-syntax.scm:1218: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in ... */
static void C_ccall f_6405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6405,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm:1219: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[70];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in ... */
static void C_ccall f_6408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_6408,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1220: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in ... */
static void C_ccall f_6411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_6411,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t1,a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* chicken-syntax.scm:1221: ##sys#check-syntax */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[60];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[68];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in k5823 in ... */
static void C_ccall f_6414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6414,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* chicken-syntax.scm:1222: scheme#caadr */
t3=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in k5826 in ... */
static void C_ccall f_6417(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(66,c,5)))){
C_save_and_reclaim((void *)f_6417,c,av);}
a=C_alloc(66);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6424,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t8,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li15),tmp=(C_word)a,a+=12,tmp));
t10=C_a_i_list(&a,1,((C_word*)t0)[11]);
t11=C_a_i_list(&a,1,((C_word*)t0)[12]);
t12=C_a_i_list(&a,1,((C_word*)t0)[13]);
t13=C_a_i_list(&a,2,t1,((C_word*)t0)[12]);
t14=C_a_i_list(&a,1,t13);
t15=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6728,a[2]=((C_word*)t0)[5],a[3]=t14,a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[11],a[6]=t12,a[7]=t11,a[8]=t6,a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],a[11]=t10,a[12]=((C_word*)t0)[17],tmp=(C_word)a,a+=13,tmp);
t16=C_a_i_list(&a,2,lf[66],((C_word*)t0)[12]);
t17=C_a_i_list(&a,3,((C_word*)t0)[14],C_SCHEME_END_OF_LIST,t16);
t18=C_a_i_list(&a,2,((C_word*)t0)[13],t17);
/* chicken-syntax.scm:1261: guard-aux */
t19=((C_word*)t8)[1];
f_6424(t19,t15,t18,C_i_car(t4),C_u_i_cdr(t4));}

/* guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in ... */
static void f_6424(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_6424,5,t0,t1,t2,t3,t4);}
a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6431,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(t3))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6628,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1226: c */
t7=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[10];
av2[3]=C_u_i_car(t3);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t5;
f_6431(t6,C_SCHEME_FALSE);}}

/* k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in ... */
static void f_6431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6431,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1230: c */
t5=((C_word*)t0)[12];{
C_word av2[4];
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[13];
av2[3]=C_u_i_car(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6444(2,av2);}}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6444(2,av2);}}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6444(2,av2);}}}}

/* k6442 in k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in ... */
static void C_ccall f_6444(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_6444,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1231: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t4=C_i_car(((C_word*)t0)[2]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],t4,((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1241: r */
t5=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t4=C_i_pairp(((C_word*)t0)[2]);
t5=(C_truep(t4)?C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[11],t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6562,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[3],t6,t8,((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1251: guard-aux */
t10=((C_word*)((C_word*)t0)[8])[1];
f_6424(t10,t9,((C_word*)t0)[7],C_i_car(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[6]));}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* k6445 in k6442 in k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in ... */
static void C_ccall f_6447(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,4)))){
C_save_and_reclaim((void *)f_6447,c,av);}
a=C_alloc(44);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6466,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t8=C_a_i_list(&a,4,((C_word*)t0)[3],t1,t6,((C_word*)t0)[7]);
t9=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[5],t4,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1237: guard-aux */
t8=((C_word*)((C_word*)t0)[8])[1];
f_6424(t8,t7,((C_word*)t0)[7],C_i_car(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[6]));}}

/* k6464 in k6445 in k6442 in k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in ... */
static void C_ccall f_6466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6466,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6510 in k6442 in k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in ... */
static void C_ccall f_6512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6512,c,av);}
a=C_alloc(16);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1245: guard-aux */
t6=((C_word*)((C_word*)t0)[6])[1];
f_6424(t6,t5,((C_word*)t0)[7],C_i_car(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[8]));}

/* k6525 in k6510 in k6442 in k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in ... */
static void C_ccall f_6527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6527,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6560 in k6442 in k6429 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in ... */
static void C_ccall f_6562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6562,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6626 in guard-aux in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in ... */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6628,c,av);}
t2=((C_word*)t0)[2];
f_6431(t2,(C_truep(t1)?C_i_nullp(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* k6726 in k6415 in k6412 in k6409 in k6406 in k6403 in k6400 in k6397 in k6394 in k6391 in k6388 in k6385 in k6382 in k6379 in k6376 in k6373 in k6370 in a6367 in k5838 in k5835 in k5832 in k5829 in ... */
static void C_ccall f_6728(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(135,c,1)))){
C_save_and_reclaim((void *)f_6728,c,av);}
a=C_alloc(135);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,2,lf[62],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[7],t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[8]);
t10=C_a_i_cons(&a,2,((C_word*)t0)[4],t9);
t11=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],lf[63]);
t12=C_a_i_list(&a,3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_list(&a,2,((C_word*)t0)[5],t12);
t14=C_a_i_list(&a,3,((C_word*)t0)[4],lf[63],t13);
t15=C_a_i_list(&a,3,lf[64],t10,t14);
t16=C_a_i_list(&a,3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t15);
t17=C_a_i_list(&a,3,lf[65],t8,t16);
t18=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[11],t17);
t19=C_a_i_list(&a,2,lf[62],t18);
t20=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t20;
av2[1]=C_a_i_list(&a,1,t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* k6752 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_6754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6754,c,av);}
/* chicken-syntax.scm:1180: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[83];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_6756(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6756,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6760,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1185: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[83];
av2[3]=t2;
av2[4]=lf[94];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_6760(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6760,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?lf[84]:C_i_car(t4));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6771,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1189: r */
t10=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k6769 in k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_6771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6771,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6774,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6826,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1191: chicken.syntax#get-line-number */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
f_6774(t3,C_SCHEME_UNDEFINED);}}

/* k6772 in k6769 in k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void f_6774(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_6774,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[85],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6797,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=t5;
f_6797(t7,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t6));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6816,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1200: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[88]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k6795 in k6772 in k6769 in k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void f_6797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_6797,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[86],t1);
t3=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6814 in k6772 in k6769 in k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_6816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6816,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[87],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_6797(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k6824 in k6769 in k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_6826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6826,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1192: string-append */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=t1;
av2[4]=lf[91];
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];
f_6774(t2,C_SCHEME_FALSE);}}

/* k6831 in k6824 in k6769 in k6758 in a6755 in k5835 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_6833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6833,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6774(t3,t2);}

/* k6841 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_6843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6843,c,av);}
/* chicken-syntax.scm:1170: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[95];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6844 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_6845(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6845,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6853,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1175: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6851 in a6844 in k5832 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_6853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6853,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6859 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_6861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6861,c,av);}
/* chicken-syntax.scm:1154: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[97];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6862 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_6863(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6863,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6867,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1158: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[97];
av2[3]=t2;
av2[4]=lf[99];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6865 in a6862 in k5829 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_6867(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_6867,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[36],t7);
t9=C_a_i_list(&a,2,t3,t8);
t10=C_a_i_list(&a,1,t9);
t11=C_u_i_car(t2);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[98],t10,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_list(&a,1,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[98],t6,t2);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6924 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_6926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6926,c,av);}
/* chicken-syntax.scm:1112: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[101];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_6928(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6928,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6932,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1117: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_6932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6932,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6935,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1118: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_6935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6935,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1119: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[106];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_6938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6938,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1121: ##sys#syntax-error */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[101];
av2[3]=lf[105];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6941(2,av2);}}}

/* k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_6941,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6948,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li20),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_6948(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void f_6948(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6948,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6958,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1124: scheme#reverse */
t8=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7027,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1134: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k6956 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_6958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6958,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1125: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6959 in k6956 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_6961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_6961,c,av);}
a=C_alloc(21);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6967,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7004,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1127: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_list(&a,3,lf[36],((C_word*)t0)[6],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6965 in k6959 in k6956 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_6967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6967,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1128: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6976 in k6965 in k6959 in k6956 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void C_ccall f_6978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6978,c,av);}
a=C_alloc(10);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6994,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1128: ##sys#append */
t6=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6992 in k6976 in k6965 in k6959 in k6956 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_6994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_6994,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[36],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7002 in k6959 in k6956 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_7004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7004,c,av);}
/* chicken-syntax.scm:1127: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7025 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_7027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7027,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7047,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1135: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1137: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7028 in k7025 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_7030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7030,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1136: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6948(t5,((C_word*)t0)[6],t2,t3,((C_word*)t0)[7],t4,C_SCHEME_FALSE);}

/* k7045 in k7025 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_7047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7047,c,av);}
/* chicken-syntax.scm:1135: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7051 in k7025 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_7053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7053,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1139: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6948(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1140: ##sys#syntax-error */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[101];
av2[3]=lf[104];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7093,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1145: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7068 in k7051 in k7025 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_7070(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7070,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1146: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6948(t7,((C_word*)t0)[6],t2,((C_word*)t0)[7],t5,t6,C_SCHEME_FALSE);}

/* k7091 in k7051 in k7025 in loop in k6939 in k6936 in k6933 in k6930 in a6927 in k5826 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_7093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7093,c,av);}
/* chicken-syntax.scm:1145: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7119 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_7121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7121,c,av);}
/* chicken-syntax.scm:1079: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[108];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_7123(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7123,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7127,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1084: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[107];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_7127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7127,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1085: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[106];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_7130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7130,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1086: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_7133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7133,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7136,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1088: ##sys#syntax-error */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[108];
av2[3]=lf[110];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7136(2,av2);}}}

/* k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_7136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7136,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7143,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li22),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_7143(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void f_7143(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7143,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7153,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1091: scheme#reverse */
t7=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7218,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1100: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k7151 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_7153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7153,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1092: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k7154 in k7151 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_7156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7156,c,av);}
a=C_alloc(18);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7162,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7195,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1094: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_a_i_list(&a,2,lf[58],t2);
t4=C_u_i_cdr(t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[36],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7160 in k7154 in k7151 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_7162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7162,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1095: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7167 in k7160 in k7154 in k7151 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_7169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7169,c,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7185,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1095: ##sys#append */
t6=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k7183 in k7167 in k7160 in k7154 in k7151 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void C_ccall f_7185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_7185,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[36],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7193 in k7154 in k7151 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_7195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7195,c,av);}
/* chicken-syntax.scm:1094: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7216 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_7218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7218,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7238,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1101: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1103: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k7219 in k7216 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_7221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_7221,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1102: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7143(t5,((C_word*)t0)[6],t2,t3,t4,C_SCHEME_FALSE);}

/* k7236 in k7216 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_7238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7238,c,av);}
/* chicken-syntax.scm:1101: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7242 in k7216 in loop in k7134 in k7131 in k7128 in k7125 in a7122 in k5823 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_7244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7244,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1105: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7143(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1106: ##sys#syntax-error */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[108];
av2[3]=lf[109];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* chicken-syntax.scm:1110: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7143(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,C_SCHEME_FALSE);}}

/* k7291 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_7293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7293,c,av);}
/* chicken-syntax.scm:981: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_7295(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7295,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7299,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:986: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[111];
av2[3]=t2;
av2[4]=lf[132];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_7299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7299,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7305,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:991: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_7305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7305,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7786,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:992: ##sys#current-module */
t4=*((C_word*)lf[131]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_7308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7308,c,av);}
a=C_alloc(10);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=C_i_cddddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7320,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1000: r */
t6=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[127];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_7320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7320,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1001: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[126];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_7323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7323,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1002: r */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_7326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7326,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1003: r */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[125];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_7329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7329,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1004: r */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_7332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7332,c,av);}
a=C_alloc(16);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_7338,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t1,a[15]=((C_word*)t0)[13],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm:1006: r */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[123];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_7338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7338,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm:1007: r */
t3=((C_word*)t0)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[122];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void C_ccall f_7341(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_7341,c,av);}
a=C_alloc(30);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t1,a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7751,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7751(t11,t7,((C_word*)t0)[2]);}

/* k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void C_ccall f_7350(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_7350,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7351,a[2]=t1,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[113]);
t4=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7367,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7728,a[2]=t6,a[3]=t2,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7728(t8,t4,((C_word*)t0)[2]);}

/* g2986 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void f_7351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7351,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1012: ##sys#syntax-error */
t3=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[111];
av2[3]=lf[112];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_7367(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_7367,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_u_i_car(((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[5]);
t7=C_a_i_list(&a,1,t6);
t8=C_u_i_cdr(((C_word*)t0)[6]);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7667,a[2]=((C_word*)t0)[8],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t14=C_i_check_list_2(((C_word*)t0)[9],lf[39]);
t15=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7680,a[2]=((C_word*)t0)[7],a[3]=t8,a[4]=((C_word*)t0)[10],a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=t4,a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7682,a[2]=t13,a[3]=t11,a[4]=t17,a[5]=t12,a[6]=((C_word)li27),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_7682(t19,t15,((C_word*)t0)[9]);}

/* k7396 in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void C_ccall f_7398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_7398,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[58],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in ... */
static void f_7400(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_7400,4,t0,t1,t2,t3);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_cddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_caddr(t4):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7419,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=t2,a[9]=((C_word*)t0)[5],a[10]=t6,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],a[14]=t7,a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_pairp(t7))){
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7600,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1041: c */
t10=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[121];
av2[3]=C_u_i_car(t7);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t8;
f_7419(t9,C_SCHEME_FALSE);}}
else{
t9=t8;
f_7419(t9,C_SCHEME_FALSE);}}}

/* k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void f_7419(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(119,0,2)))){
C_save_and_reclaim_args((void *)trf_7419,2,t0,t1);}
a=C_alloc(119);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[87],t3);
t5=C_a_i_list(&a,4,lf[117],((C_word*)t0)[2],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,2,lf[85],t5);
t7=C_a_i_list(&a,3,lf[118],((C_word*)t0)[2],((C_word*)t0)[5]);
t8=C_a_i_list(&a,4,lf[36],t2,t6,t7);
t9=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7425,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t8,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[10])){
t10=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[16]);
t11=C_a_i_list(&a,2,lf[87],t1);
t12=C_a_i_list(&a,4,lf[117],((C_word*)t0)[2],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,2,lf[85],t12);
t14=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[16]);
t15=t9;
f_7425(t15,C_a_i_list(&a,4,lf[36],t10,t13,t14));}
else{
t10=t9;
f_7425(t10,C_SCHEME_FALSE);}}

/* k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in ... */
static void f_7425(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,3)))){
C_save_and_reclaim_args((void *)trf_7425,2,t0,t1);}
a=C_alloc(34);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7514,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[2],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
t5=C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[11]);
t6=C_a_i_list(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[16],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[12],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[9])){
t8=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1063: c */
t9=((C_word*)t0)[13];{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[9];
av2[3]=C_u_i_car(t8);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_7525(2,av2);}}}

/* k7434 in k7512 in k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in ... */
static void C_ccall f_7436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7436,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7438 in k7512 in k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in ... */
static void f_7440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_7440,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7444,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:1074: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7400(t5,t2,t3,t4);}

/* k7442 in k7438 in k7512 in k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in ... */
static void C_ccall f_7444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7444,c,av);}
/* chicken-syntax.scm:1060: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k7482 in k7512 in k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in ... */
static void C_ccall f_7484(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,1)))){
C_save_and_reclaim((void *)f_7484,c,av);}
a=C_alloc(36);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[119],lf[119]);
t5=C_a_i_list(&a,3,t4,((C_word*)t0)[4],((C_word*)t0)[5]);
t6=C_a_i_list(&a,3,((C_word*)t0)[6],t3,t5);
t7=((C_word*)t0)[7];
f_7440(t7,C_a_i_list(&a,1,t6));}
else{
t2=((C_word*)t0)[7];
f_7440(t2,C_SCHEME_END_OF_LIST);}}

/* k7512 in k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in ... */
static void f_7514(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(49,0,3)))){
C_save_and_reclaim_args((void *)trf_7514,2,t0,t1);}
a=C_alloc(49);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7436,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7440,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(((C_word*)t0)[9])){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7484,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1068: c */
t6=((C_word*)t0)[14];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[9];
av2[3]=C_i_cadr(((C_word*)t0)[15]);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[11]);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,((C_word*)t0)[13],t6,((C_word*)t0)[12]);
t8=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[16],t7);
t9=t4;
f_7440(t9,C_a_i_list(&a,1,t8));}}
else{
t5=t4;
f_7440(t5,C_SCHEME_END_OF_LIST);}}

/* k7523 in k7423 in k7417 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in ... */
static void C_ccall f_7525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_7525,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_7514(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_7514(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k7598 in loop in k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in ... */
static void C_ccall f_7600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7600,c,av);}
t2=((C_word*)t0)[2];
f_7419(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3012 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static C_word f_7667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_memq(t1,((C_word*)t0)[2]);
return((C_truep(t2)?t1:lf[114]));}

/* k7678 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void C_ccall f_7680(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(101,c,4)))){
C_save_and_reclaim((void *)f_7680,c,av);}
a=C_alloc(101);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[115],t2);
t4=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[8]);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,1,((C_word*)t0)[9]);
t10=C_a_i_list(&a,3,lf[116],((C_word*)t0)[9],((C_word*)t0)[2]);
t11=C_a_i_list(&a,3,lf[36],t9,t10);
t12=C_a_i_list(&a,3,((C_word*)t0)[4],t8,t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[10],t12);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7398,a[2]=t13,a[3]=t6,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7400,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t16,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word)li26),tmp=(C_word)a,a+=12,tmp));
t18=((C_word*)t16)[1];
f_7400(t18,t14,((C_word*)t0)[16],C_fix(1));}

/* map-loop3006 in k7365 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void f_7682(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7682,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:1024: g3012 */
  f_7667(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop2985 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void f_7728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7728,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1010: g2986 */
t4=((C_word*)t0)[3];
f_7351(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7736 in for-each-loop2985 in k7348 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7738,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7728(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop2959 in k7339 in k7336 in k7330 in k7327 in k7324 in k7321 in k7318 in k7306 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void f_7751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7751,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7784 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_7786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7786,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7797,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:994: ##sys#current-module */
t4=*((C_word*)lf[131]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_7308(2,av2);}}}

/* k7791 in k7784 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_7793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7793,c,av);}
/* chicken-syntax.scm:993: chicken.base#symbol-append */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[129];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7795 in k7784 in k7303 in k7297 in a7294 in k5820 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_7797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7797,c,av);}
/* chicken-syntax.scm:994: ##sys#module-name */
t2=*((C_word*)lf[130]+1);{
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

/* k7803 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_7805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7805,c,av);}
/* chicken-syntax.scm:947: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[135];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_7807(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7807,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7811,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:954: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[135];
av2[3]=t2;
av2[4]=lf[137];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_7811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7811,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7823,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:958: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[133];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_7823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7823,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:959: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_7826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7826,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:960: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[25];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7827 in k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_7829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7829,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:961: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7830 in k7827 in k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_7832(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7832,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7843,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7845,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word*)t0)[8],a[8]=((C_word)li31),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7845(t8,t4,t1,((C_word*)t0)[9]);}

/* k7841 in k7830 in k7827 in k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_7843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7843,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7830 in k7827 in k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void f_7845(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7845,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[35],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7871,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:969: r */
t6=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[136];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_list(&a,2,t4,t2);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k7869 in loop in k7830 in k7827 in k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_7871(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(76,c,3)))){
C_save_and_reclaim((void *)f_7871,c,av);}
a=C_alloc(76);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[37],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[87],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[37],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7882,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:976: loop */
t15=((C_word*)((C_word*)t0)[8])[1];
f_7845(t15,t14,t1,C_u_i_cdr(((C_word*)t0)[9]));}

/* k7880 in k7869 in loop in k7830 in k7827 in k7824 in k7821 in k7809 in a7806 in k5817 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_7882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7882,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7963 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_7965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7965,c,av);}
/* chicken-syntax.scm:919: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[138];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7966 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_7967(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7967,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7971,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:926: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[138];
av2[3]=t2;
av2[4]=lf[139];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7969 in a7966 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_7971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7971,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:927: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7972 in k7969 in a7966 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_7974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7974,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8014,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:929: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[133];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8002 in k8012 in k7972 in k7969 in a7966 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_8004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8004,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[37],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8012 in k7972 in k7969 in a7966 in k5814 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_8014(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8014,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8004,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:931: r */
t7=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8040 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8042,c,av);}
/* chicken-syntax.scm:830: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[140];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8044(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8044,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8048,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:837: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[140];
av2[3]=t2;
av2[4]=lf[150];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_8048(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_8048,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8138,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8231,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:876: ##sys#check-syntax */
t9=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[140];
av2[3]=t3;
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_8067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8067,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8071,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:847: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_8071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8071,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:848: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k8073 in k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_8075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_8075,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8077,a[2]=t3,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_8077(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k8073 in k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in ... */
static void f_8077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8077,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8116,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:853: scheme#reverse */
t9=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k8096 in k8122 in k8114 in recur in k8073 in k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in ... */
static void C_ccall f_8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8098,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8114 in recur in k8073 in k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in ... */
static void C_ccall f_8116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8116,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8124,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8128,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:854: scheme#reverse */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8122 in k8114 in recur in k8073 in k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_8124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_8124,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8098,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:855: recur */
t6=((C_word*)((C_word*)t0)[6])[1];
f_8077(t6,t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[9]),C_u_i_car(((C_word*)t0)[8]));}

/* k8126 in k8114 in recur in k8073 in k8069 in k8065 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in ... */
static void C_ccall f_8128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8128,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:852: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void f_8138(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_8138,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8144,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_8144(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void f_8144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_8144,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8158,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:866: scheme#reverse */
t6=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8228,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:868: r */
t7=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[133];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k8156 in recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_8158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8158,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8182 in k8206 in k8214 in k8222 in k8226 in recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_8184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8184,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[37],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8206 in k8214 in k8222 in k8226 in recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_8208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_8208,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8184,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[7]);
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:872: recur */
t9=((C_word*)((C_word*)t0)[11])[1];
f_8144(t9,t5,t6,t7,t8);}

/* k8214 in k8222 in k8226 in recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_8216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_8216,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8208,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:871: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8222 in k8226 in recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_8224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8224,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8216,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:870: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8226 in recur in make-if-tree in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_8228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8228,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8224,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:869: scheme#reverse */
t5=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8231,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:877: ##sys#check-syntax */
t3=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[148];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_8234(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8234,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8243,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8442,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8442(t11,t7,((C_word*)t0)[2]);}

/* k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_8243(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_8243,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8244,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8260,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[39]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8274,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8408,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8408(t13,t9,t1);}

/* prefix-sym in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void f_8244(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8244,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8252,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8256,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:880: scheme#symbol->string */
t6=*((C_word*)lf[142]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8250 in prefix-sym in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_8252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8252,c,av);}
/* chicken-syntax.scm:880: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k8254 in prefix-sym in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_8256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8256,c,av);}
/* chicken-syntax.scm:880: scheme#string-append */
t2=*((C_word*)lf[89]+1);{
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

/* g2803 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void f_8260(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8260,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8268,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:885: prefix-sym */
f_8244(t3,lf[143],t2);}

/* k8266 in g2803 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_8268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8268,c,av);}
/* chicken-syntax.scm:885: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void C_ccall f_8274(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_8274,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8374,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8374(t10,t6,((C_word*)t0)[9]);}

/* k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_8280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8280,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:889: r */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[147];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in ... */
static void C_ccall f_8283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8283,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:892: r */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[146];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in ... */
static void C_ccall f_8286(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_8286,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8301,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8340,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_8340(t11,t7,((C_word*)t0)[5]);}

/* g2860 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void f_8290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8290,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:894: prefix-sym */
f_8244(t3,lf[144],t2);}

/* k8296 in g2860 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_8298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8298,c,av);}
/* chicken-syntax.scm:894: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void C_ccall f_8301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8301,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8067,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[11],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:846: scheme#reverse */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8302 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_8304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8304,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:899: make-if-tree */
t3=((C_word*)t0)[9];
f_8138(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k8305 in k8302 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in ... */
static void C_ccall f_8307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8307,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:902: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[145];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8312 in k8305 in k8302 in k8299 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in ... */
static void C_ccall f_8314(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_8314,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[36],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* map-loop2854 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in ... */
static void f_8340(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8340,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:894: g2860 */
t4=((C_word*)t0)[4];
f_8290(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8363 in map-loop2854 in k8284 in k8281 in k8278 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in ... */
static void C_ccall f_8365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8365,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8340(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2825 in k8272 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void f_8374(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8374,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop2797 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in ... */
static void f_8408(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8408,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:885: g2803 */
t4=((C_word*)t0)[4];
f_8260(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8431 in map-loop2797 in k8241 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in ... */
static void C_ccall f_8433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8433,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8408(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2767 in k8232 in k8229 in k8046 in a8043 in k5811 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void f_8442(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8442,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8488 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_8490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8490,c,av);}
/* chicken-syntax.scm:726: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[151];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_8492(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8492,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8496,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:730: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
av2[3]=t2;
av2[4]=lf[154];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8496(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8496,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8506,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8506(t8,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_8506(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_8506,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[58],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_i_pairp(t4);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8533,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:739: ##sys#check-syntax */
t8=*((C_word*)lf[40]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[151];
av2[3]=t4;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8568,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8593,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:744: chicken.base#gensym */
t10=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8596,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:748: ##sys#check-syntax */
t9=*((C_word*)lf[40]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[151];
av2[3]=t4;
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k8531 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8533,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8559,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:740: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8534 in k8531 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_8536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8536,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8551,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:742: fold */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8506(t5,t4,((C_word*)t0)[5],t1);}

/* k8549 in k8534 in k8531 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in ... */
static void C_ccall f_8551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8551,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8557 in k8531 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_8559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8559,c,av);}
/* chicken-syntax.scm:740: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8566 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8568,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8583,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:746: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8506(t6,t5,((C_word*)t0)[5],t1);}

/* k8581 in k8566 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_8583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8583,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8591 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8593,c,av);}
/* chicken-syntax.scm:744: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8594 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8596(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8596,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8612,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:751: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_8506(t7,t6,((C_word*)t0)[5],t2);}

/* k8610 in k8594 in fold in k8494 in a8491 in k5808 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in ... */
static void C_ccall f_8612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8612,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8630 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_8632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8632,c,av);}
/* chicken-syntax.scm:705: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[155];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_8634(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8634,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8636,a[2]=t4,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=t5=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8724,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:724: quotify-proc */
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cdr(t2);
av2[3]=lf[155];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_8636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8636,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8640,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:711: ##sys#check-syntax */
t5=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
av2[4]=lf[157];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8638 in quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8640,c,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8649,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_u_i_cdr(t2);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_8649(t9,C_a_i_cons(&a,2,lf[36],t8));}
else{
t6=t5;
f_8649(t6,C_i_cadr(((C_word*)t0)[2]));}}

/* k8647 in k8638 in quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_8649(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_8649,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8661,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8661(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[36],t6);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8677,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8681,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:719: r */
t10=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t5;
f_8661(t8,C_SCHEME_FALSE);}}}

/* k8650 in k8647 in k8638 in quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8652,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8659 in k8647 in k8638 in quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void f_8661(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8661,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:720: ##sys#syntax-error */
t2=*((C_word*)lf[103]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[155];
av2[3]=lf[156];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8675 in k8647 in k8638 in quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8677,c,av);}
t2=((C_word*)t0)[2];
f_8661(t2,C_i_not(t1));}

/* k8679 in k8647 in k8638 in quotify-proc2667 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8681,c,av);}
/* chicken-syntax.scm:719: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_u_i_car(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8722 in a8633 in k5805 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_8724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8724,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[158],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8734 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_8736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8736,c,av);}
/* chicken-syntax.scm:694: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[161];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8737 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_8738(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8738,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8742,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:699: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[161];
av2[3]=t2;
av2[4]=lf[162];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8740 in a8737 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_8742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8742,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:700: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8743 in k8740 in a8737 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_8745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8745,c,av);}
a=C_alloc(15);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8764,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:703: r */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[159];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8762 in k8743 in k8740 in a8737 in k5802 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8764,c,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[57],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8778 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_8780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8780,c,av);}
/* chicken-syntax.scm:685: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[163];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8781 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_8782(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8782,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8786,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:690: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[163];
av2[3]=t2;
av2[4]=lf[166];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8784 in a8781 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_8786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8786,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:691: chicken.internal#check-for-multiple-bindings */
t3=*((C_word*)lf[164]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[165];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8787 in k8784 in a8781 in k5799 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_8789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8789,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[98],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8800 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_8802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8802,c,av);}
/* chicken-syntax.scm:666: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[167];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_8804(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8804,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8808,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:670: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[167];
av2[3]=t2;
av2[4]=lf[171];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_8808(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8808,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[39]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8822,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9024,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9024(t14,t10,t2);}

/* k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_8822(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8822,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8828,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8990,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8990(t10,t6,((C_word*)t0)[4]);}

/* k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_8828(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8828,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[168]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8862,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8966,a[2]=t9,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8966(t11,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8851 in foldl2591 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8853,c,av);}
/* chicken-syntax.scm:678: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* a8854 in foldl2591 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8855,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_8862(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8862,c,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[39]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8932,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8932(t7,t3,t1);}

/* k8866 in k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8868(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_8868,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8872,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[169]+1);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8882,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8884,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li51),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8884(t13,t9,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8870 in k8866 in k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_8872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8872,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8880 in k8866 in k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_8882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8882,c,av);}
/* chicken-syntax.scm:675: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* map-loop2615 in k8866 in k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_8884(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8884,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:682: g2621 */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t3,C_fix(0));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8911 in map-loop2615 in k8866 in k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_8913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8913,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8884(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop2567 in k8860 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void f_8932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8932,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[170]);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* foldl2591 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void f_8966(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8966,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8984,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8853,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8855,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:678: ##sys#decompose-lambda-list */
t9=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8982 in foldl2591 in k8826 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void C_ccall f_8984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8984,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8966(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2538 in k8820 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void f_8990(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8990,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop2512 in k8806 in a8803 in k5796 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void f_9024(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9024,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9058 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9060,c,av);}
/* chicken-syntax.scm:651: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[172];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9061 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9062(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9062,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9066,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:655: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[172];
av2[3]=t2;
av2[4]=lf[174];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9064 in a9061 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9066,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9074,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:658: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9072 in k9064 in a9061 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9074,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9079,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_9079(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k9072 in k9064 in a9061 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void f_9079(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9079,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[35],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9104,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:663: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}

/* k9102 in fold in k9072 in k9064 in a9061 in k5793 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_9104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9104,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9112 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_9114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9114,c,av);}
/* chicken-syntax.scm:597: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[173];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_9116(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9116,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9120,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:601: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[173];
av2[3]=t2;
av2[4]=lf[175];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9120(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_9120,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9126,a[2]=t6,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9154,a[2]=t8,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t11=C_set_block_item(t6,0,t9);
t12=C_set_block_item(t8,0,t10);
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=C_i_check_list_2(t2,lf[39]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9202,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9555,a[2]=t15,a[3]=t20,a[4]=t16,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9555(t22,t18,t2);}

/* append*2318 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9126(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9126,c,av);}
a=C_alloc(4);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9147,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:608: append* */
t7=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_cdr(t2);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k9145 in append*2318 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9147,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2319 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9154(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9154,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* chicken-syntax.scm:611: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9177,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:612: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k9175 in map*2319 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9177,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9181,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:612: map* */
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_u_i_cdr(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9179 in k9175 in map*2319 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_9181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9181,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_9202,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9517,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9517(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9205(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_9205,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9209,a[2]=((C_word*)t0)[2],a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[39]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9227,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9483,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9483(t12,t8,t1);}

/* g2379 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void f_9209(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9209,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9217,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9221,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:623: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9215 in g2379 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_9217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9217,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9219 in g2379 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_9221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9221,c,av);}
/* chicken-syntax.scm:623: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_9227(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_9227,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9228,a[2]=t1,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9239,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9439,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_9439(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_9228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9228,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cdr(C_i_assq(t2,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_9239(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_9239,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9405,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9405(t10,t6,((C_word*)t0)[7]);}

/* k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_9254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9254,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_9256(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in ... */
static void f_9256(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_9256,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9275,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9289,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9291,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9291(t15,t11,((C_word*)t0)[3]);}
else{
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_nullp(C_i_cdar(t4)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_caar(t4);
t9=C_i_car(t3);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,1,t10);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9340,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:643: fold */
t16=t12;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t8=C_i_car(t3);
t9=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t8);
t10=C_u_i_car(t4);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9377,a[2]=t10,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:649: fold */
t16=t11;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2430 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_9275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9275,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9283,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:638: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_9228(3,av2);}}

/* k9281 in g2430 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_9283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9283,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9287 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_9289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9289,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2424 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void f_9291(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9291,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:638: g2430 */
t4=((C_word*)t0)[4];
f_9275(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9314 in map-loop2424 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in ... */
static void C_ccall f_9316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9316,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9291(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9338 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_9340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9340,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9375 in fold in k9252 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in ... */
static void C_ccall f_9377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9377,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[36],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[57],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2459 in k9237 in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void f_9405(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9405,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void f_9439(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9439,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:627: scheme#reverse */
t4=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9470,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:630: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_9228(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9477,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:631: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k9468 in loop in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_9470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9470,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:632: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9439(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* k9475 in loop in k9225 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in ... */
static void C_ccall f_9477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9477,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:632: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9439(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* map-loop2373 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void f_9483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9483,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:623: g2379 */
t4=((C_word*)t0)[4];
f_9209(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9506 in map-loop2373 in k9203 in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in ... */
static void C_ccall f_9508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9508,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9483(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void f_9517(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_9517,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9530,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:619: scheme#append */
t6=*((C_word*)lf[44]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:620: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
/* chicken-syntax.scm:622: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k9528 in loop in k9200 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_9530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9530,c,av);}
/* chicken-syntax.scm:622: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9517(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),t1);}

/* map-loop2335 in k9118 in a9115 in k5790 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void f_9555(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9555,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9589 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_9591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9591,c,av);}
/* chicken-syntax.scm:580: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[176];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_9593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9593,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9597,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:584: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[176];
av2[3]=t2;
av2[4]=lf[181];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_9597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9597,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9608,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9630,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:586: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k9602 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9604,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9606 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9608,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9616,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:595: ##sys#expand-multiple-values-assignment */
t3=*((C_word*)lf[169]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9614 in k9606 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9616,c,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:585: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9630(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_9630,c,av);}
a=C_alloc(10);
t5=C_i_check_list_2(t2,lf[113]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9649,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9696,a[2]=t8,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9696(t10,t6,t2);}

/* k9634 in for-each-loop2264 in a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9636,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9643,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:591: ##sys#current-module */
t3=*((C_word*)lf[131]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9641 in k9634 in for-each-loop2264 in a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in ... */
static void C_ccall f_9643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9643,c,av);}
/* chicken-syntax.scm:591: ##sys#register-export */
t2=*((C_word*)lf[178]+1);{
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

/* k9647 in a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9649(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_9649,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9662,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_9662(t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop2274 in k9647 in a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void f_9662(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9662,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[177],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop2264 in a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void f_9696(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9696,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9706,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9636,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:590: ##sys#get */
t6=*((C_word*)lf[179]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[180];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9704 in for-each-loop2264 in a9629 in k9595 in a9592 in k5786 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9706,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9696(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9719 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_9721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9721,c,av);}
/* chicken-syntax.scm:572: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[182];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9722 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_9723(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9723,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9727,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:576: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[182];
av2[3]=t2;
av2[4]=lf[183];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9725 in a9722 in k5783 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_9727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9727,c,av);}
/* chicken-syntax.scm:577: ##sys#expand-multiple-values-assignment */
t2=*((C_word*)lf[169]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9740 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9742,c,av);}
/* chicken-syntax.scm:563: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[184];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9743 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9744(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9744,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9748,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:567: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[184];
av2[3]=t2;
av2[4]=lf[186];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9746 in a9743 in k5780 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_9748(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9748,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[185]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[58],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,4,lf[37],t2,t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k9768 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_9770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9770,c,av);}
/* chicken-syntax.scm:555: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[187];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9771 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_9772(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9772,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9776,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:559: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[187];
av2[3]=t2;
av2[4]=lf[188];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9774 in a9771 in k5777 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_9776,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[58],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[37],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9792 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_9794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9794,c,av);}
/* chicken-syntax.scm:542: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[189];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_9796(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9796,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9805,a[2]=t3,a[3]=t4,a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[39]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9836,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9838,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li83),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9838(t16,t12,t10);}

/* g2189 in a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void f_9805(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9805,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9811,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9817,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:549: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9810 in g2189 in a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9811,c,av);}
/* chicken-syntax.scm:549: ##sys#decompose-import */
t2=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[96];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a9816 in g2189 in a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8;
C_word t9;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9817,c,av);}
a=C_alloc(9);
t8=C_i_not(t3);
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=(C_truep(t8)?lf[191]:C_a_i_list(&a,3,lf[192],t3,t2));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9834 in a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_9836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9836,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2183 in a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void f_9838(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9838,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:548: g2189 */
t4=((C_word*)t0)[4];
f_9805(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9861 in map-loop2183 in a9795 in k5774 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9863,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9838(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9872 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void C_ccall f_9874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9874,c,av);}
/* chicken-syntax.scm:488: ##sys#extend-macro-environment */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in k5709 in ... */
static void C_ccall f_9876(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9876,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9895,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:496: ##sys#check-syntax */
t6=*((C_word*)lf[40]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[193];
av2[3]=t2;
av2[4]=lf[201];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in k5712 in ... */
static void C_ccall f_9895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9895,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9903,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:499: r */
t6=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[200];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in k5715 in ... */
static void C_ccall f_9903(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9903,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9912,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10768,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10768(t11,t7,((C_word*)t0)[2]);}

/* k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in k5718 in ... */
static void C_ccall f_9912(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9912,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9918,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10734,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10734(t10,t6,((C_word*)t0)[6]);}

/* k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in k5722 in ... */
static void C_ccall f_9918(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_9918,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9922,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9936,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10700,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10700(t12,t8,((C_word*)t0)[3]);}

/* g1774 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void f_9922(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9922,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9930,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:494: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:495: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[194];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9928 in g1774 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_9930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9930,c,av);}
/* chicken-syntax.scm:502: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in k5725 in ... */
static void C_ccall f_9936(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9936,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9940,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9951,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10666,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10666(t11,t7,((C_word*)t0)[7]);}

/* g1802 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void f_9940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9940,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9948,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:503: chicken.base#gensym */
t3=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[195];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9946 in g1802 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9948,c,av);}
/* chicken-syntax.scm:503: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_9951(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9951,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9955,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9966,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10632,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10632(t11,t7,((C_word*)t0)[8]);}

/* g1830 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_9955(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9955,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9963,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:504: chicken.base#gensym */
t3=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9961 in g1830 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9963,c,av);}
/* chicken-syntax.scm:504: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_9966(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9966,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10584,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10584(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_9979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9979,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9996,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10536,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10536(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9994 in k9977 in k9964 in k9949 in k9934 in k9916 in k9910 in k9901 in k9893 in a9875 in k5771 in k5768 in k5765 in k5762 in k5759 in k5756 in k5753 in k5750 in k5747 in k5744 in k5740 in k5737 in ... */
static void C_ccall f_9996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_9996,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10488,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10488(t10,t6,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2892))){
C_save(t1);
C_rereclaim2(2892*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,301);
lf[0]=C_h_intern(&lf[0],14, C_text("chicken-syntax"));
lf[2]=C_h_intern(&lf[2],41, C_text("##sys#chicken.condition-macro-environment"));
lf[3]=C_h_intern(&lf[3],36, C_text("##sys#chicken.type-macro-environment"));
lf[4]=C_h_intern(&lf[4],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.syntax#define-values-definition"));
lf[6]=C_h_intern(&lf[6],36, C_text("##sys#chicken.base-macro-environment"));
lf[7]=C_h_intern(&lf[7],36, C_text("##sys#chicken.time-macro-environment"));
lf[8]=C_h_intern(&lf[8],42, C_text("##sys#scheme.case-lambda-macro-environment"));
lf[9]=C_h_intern(&lf[9],34, C_text("chicken.platform#register-feature!"));
lf[10]=C_h_intern(&lf[10],6, C_text("srfi-2"));
lf[11]=C_h_intern(&lf[11],6, C_text("srfi-8"));
lf[12]=C_h_intern(&lf[12],6, C_text("srfi-9"));
lf[13]=C_h_intern(&lf[13],7, C_text("srfi-11"));
lf[14]=C_h_intern(&lf[14],7, C_text("srfi-15"));
lf[15]=C_h_intern(&lf[15],7, C_text("srfi-16"));
lf[16]=C_h_intern(&lf[16],7, C_text("srfi-26"));
lf[17]=C_h_intern(&lf[17],7, C_text("srfi-31"));
lf[18]=C_h_intern(&lf[18],7, C_text("srfi-55"));
lf[19]=C_h_intern(&lf[19],29, C_text("chicken.internal#macro-subset"));
lf[20]=C_h_intern(&lf[20],31, C_text("##sys#default-macro-environment"));
lf[21]=C_h_intern(&lf[21],2, C_text(">="));
lf[22]=C_h_intern(&lf[22],9, C_text("scheme#>="));
lf[23]=C_h_intern(&lf[23],3, C_text("car"));
lf[24]=C_h_intern(&lf[24],10, C_text("scheme#car"));
lf[25]=C_h_intern(&lf[25],3, C_text("cdr"));
lf[26]=C_h_intern(&lf[26],10, C_text("scheme#cdr"));
lf[27]=C_h_intern(&lf[27],3, C_text("eq?"));
lf[28]=C_h_intern(&lf[28],10, C_text("scheme#eq?"));
lf[29]=C_h_intern(&lf[29],6, C_text("length"));
lf[30]=C_h_intern(&lf[30],13, C_text("scheme#length"));
lf[31]=C_h_intern(&lf[31],30, C_text("##sys#extend-macro-environment"));
lf[32]=C_h_intern(&lf[32],11, C_text("case-lambda"));
lf[33]=C_h_intern(&lf[33],19, C_text("chicken.base#gensym"));
lf[34]=C_h_intern(&lf[34],5, C_text("foldr"));
lf[35]=C_h_intern(&lf[35],10, C_text("##core#let"));
lf[36]=C_h_intern(&lf[36],13, C_text("##core#lambda"));
lf[37]=C_h_intern(&lf[37],9, C_text("##core#if"));
lf[38]=C_h_intern(&lf[38],14, C_text("scheme#reverse"));
lf[39]=C_h_intern(&lf[39],3, C_text("map"));
lf[40]=C_h_intern(&lf[40],18, C_text("##sys#check-syntax"));
lf[41]=C_h_intern(&lf[41],11, C_text("lambda-list"));
lf[42]=C_h_intern(&lf[42],27, C_text("##sys#decompose-lambda-list"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001\043\043\143\157\162\145\043\143\150\145\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\145\162\162\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\151\155\155\165\164\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\043\043\143\157\162\145\043\161\165\157\164\145\376\003\000\000\002\376\002\000\000\061\156\157\040\155\141\164\143\150\151\156\147\040\143\154\141\165\163\145\040\151\156\040\143\141\154\154\040\164\157\040\047\143\141\163\145\055\154\141\155\142\144\141\047\040\146\157\162\155\000\376\377\016\376\377\016\376\377\016\376\377\016"));
lf[44]=C_h_intern(&lf[44],13, C_text("scheme#append"));
lf[45]=C_h_intern(&lf[45],4, C_text("lvar"));
lf[46]=C_h_intern(&lf[46],4, C_text("rvar"));
lf[47]=C_h_intern(&lf[47],10, C_text("scheme#min"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[49]=C_h_intern(&lf[49],20, C_text("##sys#er-transformer"));
lf[50]=C_h_intern(&lf[50],23, C_text("##sys#macro-environment"));
lf[51]=C_h_intern(&lf[51],4, C_text("time"));
lf[52]=C_h_intern(&lf[52],17, C_text("##sys#start-timer"));
lf[53]=C_h_intern(&lf[53],16, C_text("##sys#stop-timer"));
lf[54]=C_h_intern(&lf[54],19, C_text("##sys#display-times"));
lf[55]=C_h_intern(&lf[55],11, C_text("##sys#apply"));
lf[56]=C_h_intern(&lf[56],12, C_text("##sys#values"));
lf[57]=C_h_intern(&lf[57],22, C_text("##sys#call-with-values"));
lf[58]=C_h_intern(&lf[58],12, C_text("##core#begin"));
lf[59]=C_h_intern(&lf[59],1, C_text("t"));
lf[60]=C_h_intern(&lf[60],5, C_text("guard"));
lf[61]=C_h_intern(&lf[61],4, C_text("temp"));
lf[62]=C_h_intern(&lf[62],37, C_text("scheme#call-with-current-continuation"));
lf[63]=C_h_intern(&lf[63],4, C_text("args"));
lf[64]=C_h_intern(&lf[64],23, C_text("scheme#call-with-values"));
lf[65]=C_h_intern(&lf[65],29, C_text("scheme#with-exception-handler"));
lf[66]=C_h_intern(&lf[66],24, C_text("scheme#raise-continuable"));
lf[67]=C_h_intern(&lf[67],12, C_text("scheme#caadr"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[69]=C_h_intern(&lf[69],6, C_text("lambda"));
lf[70]=C_h_intern(&lf[70],9, C_text("handler-k"));
lf[71]=C_h_intern(&lf[71],7, C_text("guard-k"));
lf[72]=C_h_intern(&lf[72],16, C_text("call-with-values"));
lf[73]=C_h_intern(&lf[73],9, C_text("condition"));
lf[74]=C_h_intern(&lf[74],6, C_text("values"));
lf[75]=C_h_intern(&lf[75],5, C_text("apply"));
lf[76]=C_h_intern(&lf[76],3, C_text("var"));
lf[77]=C_h_intern(&lf[77],2, C_text("or"));
lf[78]=C_h_intern(&lf[78],2, C_text("if"));
lf[79]=C_h_intern(&lf[79],3, C_text("let"));
lf[80]=C_h_intern(&lf[80],5, C_text("begin"));
lf[81]=C_h_intern(&lf[81],4, C_text("else"));
lf[82]=C_h_intern(&lf[82],2, C_text("=>"));
lf[83]=C_h_intern(&lf[83],6, C_text("assert"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\141\163\163\145\162\164\151\157\156\040\146\141\151\154\145\144\000"));
lf[85]=C_h_intern(&lf[85],12, C_text("##core#check"));
lf[86]=C_h_intern(&lf[86],11, C_text("##sys#error"));
lf[87]=C_h_intern(&lf[87],12, C_text("##core#quote"));
lf[88]=C_h_intern(&lf[88],27, C_text("chicken.syntax#strip-syntax"));
lf[89]=C_h_intern(&lf[89],20, C_text("scheme#string-append"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\051\040\000"));
lf[92]=C_h_intern(&lf[92],30, C_text("chicken.syntax#get-line-number"));
lf[93]=C_h_intern(&lf[93],3, C_text("tmp"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[95]=C_h_intern(&lf[95],17, C_text("require-extension"));
lf[96]=C_h_intern(&lf[96],6, C_text("import"));
lf[97]=C_h_intern(&lf[97],3, C_text("rec"));
lf[98]=C_h_intern(&lf[98],14, C_text("##core#letrec*"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[100]=C_h_intern(&lf[100],12, C_text("scheme#apply"));
lf[101]=C_h_intern(&lf[101],4, C_text("cute"));
lf[102]=C_h_intern(&lf[102],12, C_text("##sys#append"));
lf[103]=C_h_intern(&lf[103],18, C_text("##sys#syntax-error"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\164\141\151\154\040\160\141\164\164\145\162\156\163\040\141\146\164\145\162\040\074\056\056\056\076\040\141\162\145\040\156\157\164\040\163\165\160\160\157\162\164\145\144\000"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\171\157\165\040\156\145\145\144\040\164\157\040\163\165\160\160\154\171\040\141\164\040\154\145\141\163\164\040\141\040\160\162\157\143\145\144\165\162\145\000"));
lf[106]=C_h_intern(&lf[106],5, C_text("<...>"));
lf[107]=C_h_intern(&lf[107],2, C_text("<>"));
lf[108]=C_h_intern(&lf[108],3, C_text("cut"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\164\141\151\154\040\160\141\164\164\145\162\156\163\040\141\146\164\145\162\040\074\056\056\056\076\040\141\162\145\040\156\157\164\040\163\165\160\160\157\162\164\145\144\000"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\171\157\165\040\156\145\145\144\040\164\157\040\163\165\160\160\154\171\040\141\164\040\154\145\141\163\164\040\141\040\160\162\157\143\145\144\165\162\145\000"));
lf[111]=C_h_intern(&lf[111],18, C_text("define-record-type"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\165\156\153\156\157\167\156\040\163\154\157\164\040\156\141\155\145\040\151\156\040\143\157\156\163\164\162\165\143\164\157\162\040\144\145\146\151\156\151\164\151\157\156\000"));
lf[113]=C_h_intern(&lf[113],8, C_text("for-each"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[115]=C_h_intern(&lf[115],20, C_text("##sys#make-structure"));
lf[116]=C_h_intern(&lf[116],16, C_text("##sys#structure?"));
lf[117]=C_h_intern(&lf[117],21, C_text("##sys#check-structure"));
lf[118]=C_h_intern(&lf[118],15, C_text("##sys#block-ref"));
lf[119]=C_h_intern(&lf[119],12, C_text("##sys#setter"));
lf[120]=C_h_intern(&lf[120],16, C_text("##sys#block-set!"));
lf[121]=C_h_intern(&lf[121],6, C_text("setter"));
lf[122]=C_h_intern(&lf[122],1, C_text("y"));
lf[123]=C_h_intern(&lf[123],1, C_text("x"));
lf[124]=C_h_intern(&lf[124],31, C_text("chicken.base#getter-with-setter"));
lf[125]=C_h_intern(&lf[125],3, C_text("tag"));
lf[126]=C_h_intern(&lf[126],6, C_text("vector"));
lf[127]=C_h_intern(&lf[127],6, C_text("define"));
lf[128]=C_h_intern(&lf[128],26, C_text("chicken.base#symbol-append"));
lf[129]=C_h_intern(&lf[129],1, C_text("#"));
lf[130]=C_h_intern(&lf[130],17, C_text("##sys#module-name"));
lf[131]=C_h_intern(&lf[131],20, C_text("##sys#current-module"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\001\000\000\001\001\137"));
lf[133]=C_h_intern(&lf[133],5, C_text("null?"));
lf[134]=C_h_intern(&lf[134],12, C_text("scheme#null?"));
lf[135]=C_h_intern(&lf[135],14, C_text("let-optionals*"));
lf[136]=C_h_intern(&lf[136],4, C_text("tmp2"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\001\001\137"));
lf[138]=C_h_intern(&lf[138],8, C_text("optional"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[140]=C_h_intern(&lf[140],13, C_text("let-optionals"));
lf[141]=C_h_intern(&lf[141],21, C_text("scheme#string->symbol"));
lf[142]=C_h_intern(&lf[142],21, C_text("scheme#symbol->string"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\045\000"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\144\145\146\055\000"));
lf[145]=C_h_intern(&lf[145],4, C_text("let*"));
lf[146]=C_h_intern(&lf[146],6, C_text("_%rest"));
lf[147]=C_h_intern(&lf[147],4, C_text("body"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016\376\377\001\000\000\000\000"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[151]=C_h_intern(&lf[151],8, C_text("and-let*"));
lf[152]=C_h_intern(&lf[152],8, C_text("variable"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[155]=C_h_intern(&lf[155],13, C_text("define-inline"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\151\156\166\141\154\151\144\040\163\165\142\163\164\151\164\165\164\151\157\156\040\146\157\162\155\040\055\040\155\165\163\164\040\142\145\040\154\141\155\142\144\141\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[158]=C_h_intern(&lf[158],20, C_text("##core#define-inline"));
lf[159]=C_h_intern(&lf[159],8, C_text("list-ref"));
lf[160]=C_h_intern(&lf[160],15, C_text("scheme#list-ref"));
lf[161]=C_h_intern(&lf[161],9, C_text("nth-value"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[163]=C_h_intern(&lf[163],7, C_text("letrec*"));
lf[164]=C_h_intern(&lf[164],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\154\145\164\162\145\143\052\000"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[167]=C_h_intern(&lf[167],13, C_text("letrec-values"));
lf[168]=C_h_intern(&lf[168],5, C_text("foldl"));
lf[169]=C_h_intern(&lf[169],39, C_text("##sys#expand-multiple-values-assignment"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[172]=C_h_intern(&lf[172],11, C_text("let*-values"));
lf[173]=C_h_intern(&lf[173],10, C_text("let-values"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\001\001\137"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\001\001\137"));
lf[176]=C_h_intern(&lf[176],13, C_text("define-values"));
lf[177]=C_h_intern(&lf[177],33, C_text("##core#ensure-toplevel-definition"));
lf[178]=C_h_intern(&lf[178],21, C_text("##sys#register-export"));
lf[179]=C_h_intern(&lf[179],9, C_text("##sys#get"));
lf[180]=C_h_intern(&lf[180],18, C_text("##core#macro-alias"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[182]=C_h_intern(&lf[182],11, C_text("set!-values"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[184]=C_h_intern(&lf[184],6, C_text("unless"));
lf[185]=C_h_intern(&lf[185],16, C_text("##core#undefined"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\002"));
lf[187]=C_h_intern(&lf[187],4, C_text("when"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\002"));
lf[189]=C_h_intern(&lf[189],15, C_text("require-library"));
lf[190]=C_h_intern(&lf[190],22, C_text("##sys#decompose-import"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[192]=C_h_intern(&lf[192],14, C_text("##core#require"));
lf[193]=C_h_intern(&lf[193],12, C_text("parameterize"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\160\141\162\141\155\145\164\145\162\000"));
lf[195]=C_h_intern(&lf[195],5, C_text("saved"));
lf[196]=C_h_intern(&lf[196],10, C_text("##core#the"));
lf[197]=C_h_intern(&lf[197],7, C_text("boolean"));
lf[198]=C_h_intern(&lf[198],18, C_text("##sys#dynamic-wind"));
lf[199]=C_h_intern(&lf[199],11, C_text("##core#set!"));
lf[200]=C_h_intern(&lf[200],8, C_text("convert?"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\002"));
lf[202]=C_h_intern(&lf[202],9, C_text("fluid-let"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[204]=C_h_intern(&lf[204],16, C_text("include-relative"));
lf[205]=C_h_intern(&lf[205],14, C_text("##core#include"));
lf[206]=C_h_intern(&lf[206],29, C_text("##sys#current-source-filename"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\001"));
lf[208]=C_h_intern(&lf[208],10, C_text("include-ci"));
lf[209]=C_h_intern(&lf[209],17, C_text("##core#include-ci"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\001"));
lf[211]=C_h_intern(&lf[211],7, C_text("include"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\001"));
lf[213]=C_h_intern(&lf[213],11, C_text("delay-force"));
lf[214]=C_h_intern(&lf[214],18, C_text("##sys#make-promise"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[216]=C_h_intern(&lf[216],7, C_text("declare"));
lf[217]=C_h_intern(&lf[217],14, C_text("##core#declare"));
lf[218]=C_h_intern(&lf[218],7, C_text("receive"));
lf[219]=C_h_intern(&lf[219],10, C_text("##sys#list"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000"));
lf[222]=C_h_intern(&lf[222],13, C_text("define-record"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\151\156\166\141\154\151\144\040\163\154\157\164\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[224]=C_h_intern(&lf[224],3, C_text("val"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\055\000"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\055\000"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\163\145\164\041\000"));
lf[228]=C_h_intern(&lf[228],19, C_text("##sys#string-append"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\077\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\155\141\153\145\055\000"));
lf[231]=C_h_intern(&lf[231],19, C_text("chicken.base#setter"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\001\000\000\001\001\137"));
lf[233]=C_h_intern(&lf[233],15, C_text("define-constant"));
lf[234]=C_h_intern(&lf[234],22, C_text("##core#define-constant"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[236]=C_h_intern(&lf[236],19, C_text("let-compiler-syntax"));
lf[237]=C_h_intern(&lf[237],26, C_text("##core#let-compiler-syntax"));
lf[238]=C_h_intern(&lf[238],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[239]=C_h_intern(&lf[239],7, C_text("##sys#+"));
lf[240]=C_h_intern(&lf[240],7, C_text("##sys#="));
lf[241]=C_h_intern(&lf[241],8, C_text("##sys#>="));
lf[242]=C_h_intern(&lf[242],41, C_text("chicken.internal.syntax-rules#safe-length"));
lf[243]=C_h_intern(&lf[243],22, C_text("define-compiler-syntax"));
lf[244]=C_h_intern(&lf[244],29, C_text("##core#define-compiler-syntax"));
lf[245]=C_h_intern(&lf[245],17, C_text("define-for-syntax"));
lf[246]=C_h_intern(&lf[246],16, C_text("begin-for-syntax"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[248]=C_h_intern(&lf[248],26, C_text("##core#elaborationtimeonly"));
lf[249]=C_h_intern(&lf[249],30, C_text("##sys#register-meta-expression"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000"));
lf[251]=C_h_intern(&lf[251],6, C_text("syntax"));
lf[252]=C_h_intern(&lf[252],13, C_text("##core#syntax"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[254]=C_h_intern(&lf[254],11, C_text("define-type"));
lf[255]=C_h_intern_kw(&lf[255],9, C_text("compiling"));
lf[256]=C_h_intern(&lf[256],14, C_text("##sys#features"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[258]=C_h_intern(&lf[258],28, C_text("##compiler#type-abbreviation"));
lf[259]=C_h_intern(&lf[259],18, C_text("##sys#put/restore!"));
lf[260]=C_h_intern(&lf[260],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[261]=C_h_intern(&lf[261],5, C_text("quote"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[263]=C_h_intern(&lf[263],17, C_text("compiler-typecase"));
lf[264]=C_h_intern(&lf[264],15, C_text("##core#typecase"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[266]=C_h_intern(&lf[266],21, C_text("define-specialization"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[268]=C_h_intern(&lf[268],27, C_text("##core#local-specialization"));
lf[269]=C_h_intern(&lf[269],6, C_text("inline"));
lf[270]=C_h_intern(&lf[270],4, C_text("hide"));
lf[271]=C_h_intern(&lf[271],1, C_text("*"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\163\171\156\164\141\170\000"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[274]=C_h_intern(&lf[274],6, C_text("assume"));
lf[275]=C_h_intern(&lf[275],3, C_text("the"));
lf[276]=C_h_intern(&lf[276],11, C_text("##sys#map-n"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[278]=C_h_intern(&lf[278],1, C_text(":"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[280]=C_h_intern(&lf[280],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\164\171\160\145\040\163\171\156\164\141\170\000"));
lf[282]=C_h_intern(&lf[282],4, C_text("type"));
lf[283]=C_h_intern(&lf[283],9, C_text("predicate"));
lf[284]=C_h_intern(&lf[284],4, C_text("pure"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[286]=C_h_intern(&lf[286],4, C_text("memv"));
lf[287]=C_h_intern(&lf[287],11, C_text("scheme#memv"));
lf[288]=C_h_intern(&lf[288],14, C_text("condition-case"));
lf[289]=C_h_intern(&lf[289],10, C_text("##sys#slot"));
lf[290]=C_h_intern(&lf[290],24, C_text("chicken.condition#signal"));
lf[291]=C_h_intern(&lf[291],4, C_text("cond"));
lf[292]=C_h_intern(&lf[292],17, C_text("handle-exceptions"));
lf[293]=C_h_intern(&lf[293],3, C_text("and"));
lf[294]=C_h_intern(&lf[294],4, C_text("kvar"));
lf[295]=C_h_intern(&lf[295],5, C_text("exvar"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[297]=C_h_intern(&lf[297],30, C_text("call-with-current-continuation"));
lf[298]=C_h_intern(&lf[298],40, C_text("chicken.condition#with-exception-handler"));
lf[299]=C_h_intern(&lf[299],1, C_text("k"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
C_register_lf2(lf,301,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4398,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[680] = {
{C_text("f_10007:chicken_2dsyntax_2escm"),(void*)f_10007},
{C_text("f_10055:chicken_2dsyntax_2escm"),(void*)f_10055},
{C_text("f_10059:chicken_2dsyntax_2escm"),(void*)f_10059},
{C_text("f_10071:chicken_2dsyntax_2escm"),(void*)f_10071},
{C_text("f_10083:chicken_2dsyntax_2escm"),(void*)f_10083},
{C_text("f_10085:chicken_2dsyntax_2escm"),(void*)f_10085},
{C_text("f_10133:chicken_2dsyntax_2escm"),(void*)f_10133},
{C_text("f_10181:chicken_2dsyntax_2escm"),(void*)f_10181},
{C_text("f_10188:chicken_2dsyntax_2escm"),(void*)f_10188},
{C_text("f_10258:chicken_2dsyntax_2escm"),(void*)f_10258},
{C_text("f_10276:chicken_2dsyntax_2escm"),(void*)f_10276},
{C_text("f_10280:chicken_2dsyntax_2escm"),(void*)f_10280},
{C_text("f_10296:chicken_2dsyntax_2escm"),(void*)f_10296},
{C_text("f_10300:chicken_2dsyntax_2escm"),(void*)f_10300},
{C_text("f_10312:chicken_2dsyntax_2escm"),(void*)f_10312},
{C_text("f_10322:chicken_2dsyntax_2escm"),(void*)f_10322},
{C_text("f_10370:chicken_2dsyntax_2escm"),(void*)f_10370},
{C_text("f_10418:chicken_2dsyntax_2escm"),(void*)f_10418},
{C_text("f_10425:chicken_2dsyntax_2escm"),(void*)f_10425},
{C_text("f_10488:chicken_2dsyntax_2escm"),(void*)f_10488},
{C_text("f_10536:chicken_2dsyntax_2escm"),(void*)f_10536},
{C_text("f_10584:chicken_2dsyntax_2escm"),(void*)f_10584},
{C_text("f_10632:chicken_2dsyntax_2escm"),(void*)f_10632},
{C_text("f_10657:chicken_2dsyntax_2escm"),(void*)f_10657},
{C_text("f_10666:chicken_2dsyntax_2escm"),(void*)f_10666},
{C_text("f_10691:chicken_2dsyntax_2escm"),(void*)f_10691},
{C_text("f_10700:chicken_2dsyntax_2escm"),(void*)f_10700},
{C_text("f_10725:chicken_2dsyntax_2escm"),(void*)f_10725},
{C_text("f_10734:chicken_2dsyntax_2escm"),(void*)f_10734},
{C_text("f_10768:chicken_2dsyntax_2escm"),(void*)f_10768},
{C_text("f_10804:chicken_2dsyntax_2escm"),(void*)f_10804},
{C_text("f_10806:chicken_2dsyntax_2escm"),(void*)f_10806},
{C_text("f_10810:chicken_2dsyntax_2escm"),(void*)f_10810},
{C_text("f_10824:chicken_2dsyntax_2escm"),(void*)f_10824},
{C_text("f_10828:chicken_2dsyntax_2escm"),(void*)f_10828},
{C_text("f_10836:chicken_2dsyntax_2escm"),(void*)f_10836},
{C_text("f_10839:chicken_2dsyntax_2escm"),(void*)f_10839},
{C_text("f_10843:chicken_2dsyntax_2escm"),(void*)f_10843},
{C_text("f_10851:chicken_2dsyntax_2escm"),(void*)f_10851},
{C_text("f_10854:chicken_2dsyntax_2escm"),(void*)f_10854},
{C_text("f_10861:chicken_2dsyntax_2escm"),(void*)f_10861},
{C_text("f_10885:chicken_2dsyntax_2escm"),(void*)f_10885},
{C_text("f_10897:chicken_2dsyntax_2escm"),(void*)f_10897},
{C_text("f_10901:chicken_2dsyntax_2escm"),(void*)f_10901},
{C_text("f_10913:chicken_2dsyntax_2escm"),(void*)f_10913},
{C_text("f_10923:chicken_2dsyntax_2escm"),(void*)f_10923},
{C_text("f_10971:chicken_2dsyntax_2escm"),(void*)f_10971},
{C_text("f_11029:chicken_2dsyntax_2escm"),(void*)f_11029},
{C_text("f_11044:chicken_2dsyntax_2escm"),(void*)f_11044},
{C_text("f_11048:chicken_2dsyntax_2escm"),(void*)f_11048},
{C_text("f_11060:chicken_2dsyntax_2escm"),(void*)f_11060},
{C_text("f_11070:chicken_2dsyntax_2escm"),(void*)f_11070},
{C_text("f_11118:chicken_2dsyntax_2escm"),(void*)f_11118},
{C_text("f_11174:chicken_2dsyntax_2escm"),(void*)f_11174},
{C_text("f_11183:chicken_2dsyntax_2escm"),(void*)f_11183},
{C_text("f_11190:chicken_2dsyntax_2escm"),(void*)f_11190},
{C_text("f_11199:chicken_2dsyntax_2escm"),(void*)f_11199},
{C_text("f_11201:chicken_2dsyntax_2escm"),(void*)f_11201},
{C_text("f_11251:chicken_2dsyntax_2escm"),(void*)f_11251},
{C_text("f_11265:chicken_2dsyntax_2escm"),(void*)f_11265},
{C_text("f_11271:chicken_2dsyntax_2escm"),(void*)f_11271},
{C_text("f_11319:chicken_2dsyntax_2escm"),(void*)f_11319},
{C_text("f_11353:chicken_2dsyntax_2escm"),(void*)f_11353},
{C_text("f_11378:chicken_2dsyntax_2escm"),(void*)f_11378},
{C_text("f_11387:chicken_2dsyntax_2escm"),(void*)f_11387},
{C_text("f_11412:chicken_2dsyntax_2escm"),(void*)f_11412},
{C_text("f_11421:chicken_2dsyntax_2escm"),(void*)f_11421},
{C_text("f_11457:chicken_2dsyntax_2escm"),(void*)f_11457},
{C_text("f_11459:chicken_2dsyntax_2escm"),(void*)f_11459},
{C_text("f_11463:chicken_2dsyntax_2escm"),(void*)f_11463},
{C_text("f_11484:chicken_2dsyntax_2escm"),(void*)f_11484},
{C_text("f_11486:chicken_2dsyntax_2escm"),(void*)f_11486},
{C_text("f_11522:chicken_2dsyntax_2escm"),(void*)f_11522},
{C_text("f_11524:chicken_2dsyntax_2escm"),(void*)f_11524},
{C_text("f_11528:chicken_2dsyntax_2escm"),(void*)f_11528},
{C_text("f_11549:chicken_2dsyntax_2escm"),(void*)f_11549},
{C_text("f_11551:chicken_2dsyntax_2escm"),(void*)f_11551},
{C_text("f_11587:chicken_2dsyntax_2escm"),(void*)f_11587},
{C_text("f_11589:chicken_2dsyntax_2escm"),(void*)f_11589},
{C_text("f_11593:chicken_2dsyntax_2escm"),(void*)f_11593},
{C_text("f_11614:chicken_2dsyntax_2escm"),(void*)f_11614},
{C_text("f_11616:chicken_2dsyntax_2escm"),(void*)f_11616},
{C_text("f_11652:chicken_2dsyntax_2escm"),(void*)f_11652},
{C_text("f_11654:chicken_2dsyntax_2escm"),(void*)f_11654},
{C_text("f_11658:chicken_2dsyntax_2escm"),(void*)f_11658},
{C_text("f_11673:chicken_2dsyntax_2escm"),(void*)f_11673},
{C_text("f_11675:chicken_2dsyntax_2escm"),(void*)f_11675},
{C_text("f_11687:chicken_2dsyntax_2escm"),(void*)f_11687},
{C_text("f_11689:chicken_2dsyntax_2escm"),(void*)f_11689},
{C_text("f_11693:chicken_2dsyntax_2escm"),(void*)f_11693},
{C_text("f_11715:chicken_2dsyntax_2escm"),(void*)f_11715},
{C_text("f_11780:chicken_2dsyntax_2escm"),(void*)f_11780},
{C_text("f_11782:chicken_2dsyntax_2escm"),(void*)f_11782},
{C_text("f_11786:chicken_2dsyntax_2escm"),(void*)f_11786},
{C_text("f_11792:chicken_2dsyntax_2escm"),(void*)f_11792},
{C_text("f_11795:chicken_2dsyntax_2escm"),(void*)f_11795},
{C_text("f_11798:chicken_2dsyntax_2escm"),(void*)f_11798},
{C_text("f_11804:chicken_2dsyntax_2escm"),(void*)f_11804},
{C_text("f_11807:chicken_2dsyntax_2escm"),(void*)f_11807},
{C_text("f_11810:chicken_2dsyntax_2escm"),(void*)f_11810},
{C_text("f_11814:chicken_2dsyntax_2escm"),(void*)f_11814},
{C_text("f_11827:chicken_2dsyntax_2escm"),(void*)f_11827},
{C_text("f_11842:chicken_2dsyntax_2escm"),(void*)f_11842},
{C_text("f_11874:chicken_2dsyntax_2escm"),(void*)f_11874},
{C_text("f_11905:chicken_2dsyntax_2escm"),(void*)f_11905},
{C_text("f_11907:chicken_2dsyntax_2escm"),(void*)f_11907},
{C_text("f_11923:chicken_2dsyntax_2escm"),(void*)f_11923},
{C_text("f_11926:chicken_2dsyntax_2escm"),(void*)f_11926},
{C_text("f_11929:chicken_2dsyntax_2escm"),(void*)f_11929},
{C_text("f_11943:chicken_2dsyntax_2escm"),(void*)f_11943},
{C_text("f_11955:chicken_2dsyntax_2escm"),(void*)f_11955},
{C_text("f_11959:chicken_2dsyntax_2escm"),(void*)f_11959},
{C_text("f_12052:chicken_2dsyntax_2escm"),(void*)f_12052},
{C_text("f_12056:chicken_2dsyntax_2escm"),(void*)f_12056},
{C_text("f_12071:chicken_2dsyntax_2escm"),(void*)f_12071},
{C_text("f_12091:chicken_2dsyntax_2escm"),(void*)f_12091},
{C_text("f_12097:chicken_2dsyntax_2escm"),(void*)f_12097},
{C_text("f_12117:chicken_2dsyntax_2escm"),(void*)f_12117},
{C_text("f_12125:chicken_2dsyntax_2escm"),(void*)f_12125},
{C_text("f_12150:chicken_2dsyntax_2escm"),(void*)f_12150},
{C_text("f_12160:chicken_2dsyntax_2escm"),(void*)f_12160},
{C_text("f_12167:chicken_2dsyntax_2escm"),(void*)f_12167},
{C_text("f_12171:chicken_2dsyntax_2escm"),(void*)f_12171},
{C_text("f_12175:chicken_2dsyntax_2escm"),(void*)f_12175},
{C_text("f_12177:chicken_2dsyntax_2escm"),(void*)f_12177},
{C_text("f_12181:chicken_2dsyntax_2escm"),(void*)f_12181},
{C_text("f_12192:chicken_2dsyntax_2escm"),(void*)f_12192},
{C_text("f_12194:chicken_2dsyntax_2escm"),(void*)f_12194},
{C_text("f_12204:chicken_2dsyntax_2escm"),(void*)f_12204},
{C_text("f_12217:chicken_2dsyntax_2escm"),(void*)f_12217},
{C_text("f_12233:chicken_2dsyntax_2escm"),(void*)f_12233},
{C_text("f_12236:chicken_2dsyntax_2escm"),(void*)f_12236},
{C_text("f_12239:chicken_2dsyntax_2escm"),(void*)f_12239},
{C_text("f_12245:chicken_2dsyntax_2escm"),(void*)f_12245},
{C_text("f_12254:chicken_2dsyntax_2escm"),(void*)f_12254},
{C_text("f_12261:chicken_2dsyntax_2escm"),(void*)f_12261},
{C_text("f_12275:chicken_2dsyntax_2escm"),(void*)f_12275},
{C_text("f_12282:chicken_2dsyntax_2escm"),(void*)f_12282},
{C_text("f_12291:chicken_2dsyntax_2escm"),(void*)f_12291},
{C_text("f_12298:chicken_2dsyntax_2escm"),(void*)f_12298},
{C_text("f_12312:chicken_2dsyntax_2escm"),(void*)f_12312},
{C_text("f_12320:chicken_2dsyntax_2escm"),(void*)f_12320},
{C_text("f_12322:chicken_2dsyntax_2escm"),(void*)f_12322},
{C_text("f_12342:chicken_2dsyntax_2escm"),(void*)f_12342},
{C_text("f_12356:chicken_2dsyntax_2escm"),(void*)f_12356},
{C_text("f_12369:chicken_2dsyntax_2escm"),(void*)f_12369},
{C_text("f_12417:chicken_2dsyntax_2escm"),(void*)f_12417},
{C_text("f_12419:chicken_2dsyntax_2escm"),(void*)f_12419},
{C_text("f_12423:chicken_2dsyntax_2escm"),(void*)f_12423},
{C_text("f_12430:chicken_2dsyntax_2escm"),(void*)f_12430},
{C_text("f_12438:chicken_2dsyntax_2escm"),(void*)f_12438},
{C_text("f_12446:chicken_2dsyntax_2escm"),(void*)f_12446},
{C_text("f_12448:chicken_2dsyntax_2escm"),(void*)f_12448},
{C_text("f_12452:chicken_2dsyntax_2escm"),(void*)f_12452},
{C_text("f_12455:chicken_2dsyntax_2escm"),(void*)f_12455},
{C_text("f_12476:chicken_2dsyntax_2escm"),(void*)f_12476},
{C_text("f_12478:chicken_2dsyntax_2escm"),(void*)f_12478},
{C_text("f_12482:chicken_2dsyntax_2escm"),(void*)f_12482},
{C_text("f_12493:chicken_2dsyntax_2escm"),(void*)f_12493},
{C_text("f_12495:chicken_2dsyntax_2escm"),(void*)f_12495},
{C_text("f_12499:chicken_2dsyntax_2escm"),(void*)f_12499},
{C_text("f_12508:chicken_2dsyntax_2escm"),(void*)f_12508},
{C_text("f_12511:chicken_2dsyntax_2escm"),(void*)f_12511},
{C_text("f_12514:chicken_2dsyntax_2escm"),(void*)f_12514},
{C_text("f_12537:chicken_2dsyntax_2escm"),(void*)f_12537},
{C_text("f_12553:chicken_2dsyntax_2escm"),(void*)f_12553},
{C_text("f_12555:chicken_2dsyntax_2escm"),(void*)f_12555},
{C_text("f_12559:chicken_2dsyntax_2escm"),(void*)f_12559},
{C_text("f_12565:chicken_2dsyntax_2escm"),(void*)f_12565},
{C_text("f_12568:chicken_2dsyntax_2escm"),(void*)f_12568},
{C_text("f_12592:chicken_2dsyntax_2escm"),(void*)f_12592},
{C_text("f_12596:chicken_2dsyntax_2escm"),(void*)f_12596},
{C_text("f_12603:chicken_2dsyntax_2escm"),(void*)f_12603},
{C_text("f_12630:chicken_2dsyntax_2escm"),(void*)f_12630},
{C_text("f_12632:chicken_2dsyntax_2escm"),(void*)f_12632},
{C_text("f_12657:chicken_2dsyntax_2escm"),(void*)f_12657},
{C_text("f_12676:chicken_2dsyntax_2escm"),(void*)f_12676},
{C_text("f_12678:chicken_2dsyntax_2escm"),(void*)f_12678},
{C_text("f_12688:chicken_2dsyntax_2escm"),(void*)f_12688},
{C_text("f_12698:chicken_2dsyntax_2escm"),(void*)f_12698},
{C_text("f_12701:chicken_2dsyntax_2escm"),(void*)f_12701},
{C_text("f_12704:chicken_2dsyntax_2escm"),(void*)f_12704},
{C_text("f_12712:chicken_2dsyntax_2escm"),(void*)f_12712},
{C_text("f_12722:chicken_2dsyntax_2escm"),(void*)f_12722},
{C_text("f_12725:chicken_2dsyntax_2escm"),(void*)f_12725},
{C_text("f_12767:chicken_2dsyntax_2escm"),(void*)f_12767},
{C_text("f_12769:chicken_2dsyntax_2escm"),(void*)f_12769},
{C_text("f_12831:chicken_2dsyntax_2escm"),(void*)f_12831},
{C_text("f_12852:chicken_2dsyntax_2escm"),(void*)f_12852},
{C_text("f_12854:chicken_2dsyntax_2escm"),(void*)f_12854},
{C_text("f_12879:chicken_2dsyntax_2escm"),(void*)f_12879},
{C_text("f_12896:chicken_2dsyntax_2escm"),(void*)f_12896},
{C_text("f_12898:chicken_2dsyntax_2escm"),(void*)f_12898},
{C_text("f_12916:chicken_2dsyntax_2escm"),(void*)f_12916},
{C_text("f_12952:chicken_2dsyntax_2escm"),(void*)f_12952},
{C_text("f_12969:chicken_2dsyntax_2escm"),(void*)f_12969},
{C_text("f_13026:chicken_2dsyntax_2escm"),(void*)f_13026},
{C_text("f_13028:chicken_2dsyntax_2escm"),(void*)f_13028},
{C_text("f_13038:chicken_2dsyntax_2escm"),(void*)f_13038},
{C_text("f_13055:chicken_2dsyntax_2escm"),(void*)f_13055},
{C_text("f_13076:chicken_2dsyntax_2escm"),(void*)f_13076},
{C_text("f_13086:chicken_2dsyntax_2escm"),(void*)f_13086},
{C_text("f_13094:chicken_2dsyntax_2escm"),(void*)f_13094},
{C_text("f_13096:chicken_2dsyntax_2escm"),(void*)f_13096},
{C_text("f_13112:chicken_2dsyntax_2escm"),(void*)f_13112},
{C_text("f_13122:chicken_2dsyntax_2escm"),(void*)f_13122},
{C_text("f_13156:chicken_2dsyntax_2escm"),(void*)f_13156},
{C_text("f_13200:chicken_2dsyntax_2escm"),(void*)f_13200},
{C_text("f_13203:chicken_2dsyntax_2escm"),(void*)f_13203},
{C_text("f_13206:chicken_2dsyntax_2escm"),(void*)f_13206},
{C_text("f_13212:chicken_2dsyntax_2escm"),(void*)f_13212},
{C_text("f_13221:chicken_2dsyntax_2escm"),(void*)f_13221},
{C_text("f_13228:chicken_2dsyntax_2escm"),(void*)f_13228},
{C_text("f_13242:chicken_2dsyntax_2escm"),(void*)f_13242},
{C_text("f_13249:chicken_2dsyntax_2escm"),(void*)f_13249},
{C_text("f_13258:chicken_2dsyntax_2escm"),(void*)f_13258},
{C_text("f_13265:chicken_2dsyntax_2escm"),(void*)f_13265},
{C_text("f_13277:chicken_2dsyntax_2escm"),(void*)f_13277},
{C_text("f_13288:chicken_2dsyntax_2escm"),(void*)f_13288},
{C_text("f_13315:chicken_2dsyntax_2escm"),(void*)f_13315},
{C_text("f_13317:chicken_2dsyntax_2escm"),(void*)f_13317},
{C_text("f_13321:chicken_2dsyntax_2escm"),(void*)f_13321},
{C_text("f_13337:chicken_2dsyntax_2escm"),(void*)f_13337},
{C_text("f_13353:chicken_2dsyntax_2escm"),(void*)f_13353},
{C_text("f_13355:chicken_2dsyntax_2escm"),(void*)f_13355},
{C_text("f_13359:chicken_2dsyntax_2escm"),(void*)f_13359},
{C_text("f_13368:chicken_2dsyntax_2escm"),(void*)f_13368},
{C_text("f_13375:chicken_2dsyntax_2escm"),(void*)f_13375},
{C_text("f_13383:chicken_2dsyntax_2escm"),(void*)f_13383},
{C_text("f_13385:chicken_2dsyntax_2escm"),(void*)f_13385},
{C_text("f_13410:chicken_2dsyntax_2escm"),(void*)f_13410},
{C_text("f_13414:chicken_2dsyntax_2escm"),(void*)f_13414},
{C_text("f_13464:chicken_2dsyntax_2escm"),(void*)f_13464},
{C_text("f_13466:chicken_2dsyntax_2escm"),(void*)f_13466},
{C_text("f_13470:chicken_2dsyntax_2escm"),(void*)f_13470},
{C_text("f_13473:chicken_2dsyntax_2escm"),(void*)f_13473},
{C_text("f_13476:chicken_2dsyntax_2escm"),(void*)f_13476},
{C_text("f_13479:chicken_2dsyntax_2escm"),(void*)f_13479},
{C_text("f_13482:chicken_2dsyntax_2escm"),(void*)f_13482},
{C_text("f_13485:chicken_2dsyntax_2escm"),(void*)f_13485},
{C_text("f_13487:chicken_2dsyntax_2escm"),(void*)f_13487},
{C_text("f_13497:chicken_2dsyntax_2escm"),(void*)f_13497},
{C_text("f_13522:chicken_2dsyntax_2escm"),(void*)f_13522},
{C_text("f_13536:chicken_2dsyntax_2escm"),(void*)f_13536},
{C_text("f_13538:chicken_2dsyntax_2escm"),(void*)f_13538},
{C_text("f_13617:chicken_2dsyntax_2escm"),(void*)f_13617},
{C_text("f_13642:chicken_2dsyntax_2escm"),(void*)f_13642},
{C_text("f_13649:chicken_2dsyntax_2escm"),(void*)f_13649},
{C_text("f_13653:chicken_2dsyntax_2escm"),(void*)f_13653},
{C_text("f_13673:chicken_2dsyntax_2escm"),(void*)f_13673},
{C_text("f_13698:chicken_2dsyntax_2escm"),(void*)f_13698},
{C_text("f_13737:chicken_2dsyntax_2escm"),(void*)f_13737},
{C_text("f_13739:chicken_2dsyntax_2escm"),(void*)f_13739},
{C_text("f_13743:chicken_2dsyntax_2escm"),(void*)f_13743},
{C_text("f_13746:chicken_2dsyntax_2escm"),(void*)f_13746},
{C_text("f_13749:chicken_2dsyntax_2escm"),(void*)f_13749},
{C_text("f_13760:chicken_2dsyntax_2escm"),(void*)f_13760},
{C_text("f_4398:chicken_2dsyntax_2escm"),(void*)f_4398},
{C_text("f_4401:chicken_2dsyntax_2escm"),(void*)f_4401},
{C_text("f_4404:chicken_2dsyntax_2escm"),(void*)f_4404},
{C_text("f_4514:chicken_2dsyntax_2escm"),(void*)f_4514},
{C_text("f_4532:chicken_2dsyntax_2escm"),(void*)f_4532},
{C_text("f_4572:chicken_2dsyntax_2escm"),(void*)f_4572},
{C_text("f_4586:chicken_2dsyntax_2escm"),(void*)f_4586},
{C_text("f_5686:chicken_2dsyntax_2escm"),(void*)f_5686},
{C_text("f_5689:chicken_2dsyntax_2escm"),(void*)f_5689},
{C_text("f_5692:chicken_2dsyntax_2escm"),(void*)f_5692},
{C_text("f_5695:chicken_2dsyntax_2escm"),(void*)f_5695},
{C_text("f_5699:chicken_2dsyntax_2escm"),(void*)f_5699},
{C_text("f_5702:chicken_2dsyntax_2escm"),(void*)f_5702},
{C_text("f_5705:chicken_2dsyntax_2escm"),(void*)f_5705},
{C_text("f_5708:chicken_2dsyntax_2escm"),(void*)f_5708},
{C_text("f_5711:chicken_2dsyntax_2escm"),(void*)f_5711},
{C_text("f_5714:chicken_2dsyntax_2escm"),(void*)f_5714},
{C_text("f_5717:chicken_2dsyntax_2escm"),(void*)f_5717},
{C_text("f_5720:chicken_2dsyntax_2escm"),(void*)f_5720},
{C_text("f_5724:chicken_2dsyntax_2escm"),(void*)f_5724},
{C_text("f_5727:chicken_2dsyntax_2escm"),(void*)f_5727},
{C_text("f_5730:chicken_2dsyntax_2escm"),(void*)f_5730},
{C_text("f_5733:chicken_2dsyntax_2escm"),(void*)f_5733},
{C_text("f_5736:chicken_2dsyntax_2escm"),(void*)f_5736},
{C_text("f_5739:chicken_2dsyntax_2escm"),(void*)f_5739},
{C_text("f_5742:chicken_2dsyntax_2escm"),(void*)f_5742},
{C_text("f_5746:chicken_2dsyntax_2escm"),(void*)f_5746},
{C_text("f_5749:chicken_2dsyntax_2escm"),(void*)f_5749},
{C_text("f_5752:chicken_2dsyntax_2escm"),(void*)f_5752},
{C_text("f_5755:chicken_2dsyntax_2escm"),(void*)f_5755},
{C_text("f_5758:chicken_2dsyntax_2escm"),(void*)f_5758},
{C_text("f_5761:chicken_2dsyntax_2escm"),(void*)f_5761},
{C_text("f_5764:chicken_2dsyntax_2escm"),(void*)f_5764},
{C_text("f_5767:chicken_2dsyntax_2escm"),(void*)f_5767},
{C_text("f_5770:chicken_2dsyntax_2escm"),(void*)f_5770},
{C_text("f_5773:chicken_2dsyntax_2escm"),(void*)f_5773},
{C_text("f_5776:chicken_2dsyntax_2escm"),(void*)f_5776},
{C_text("f_5779:chicken_2dsyntax_2escm"),(void*)f_5779},
{C_text("f_5782:chicken_2dsyntax_2escm"),(void*)f_5782},
{C_text("f_5785:chicken_2dsyntax_2escm"),(void*)f_5785},
{C_text("f_5788:chicken_2dsyntax_2escm"),(void*)f_5788},
{C_text("f_5792:chicken_2dsyntax_2escm"),(void*)f_5792},
{C_text("f_5795:chicken_2dsyntax_2escm"),(void*)f_5795},
{C_text("f_5798:chicken_2dsyntax_2escm"),(void*)f_5798},
{C_text("f_5801:chicken_2dsyntax_2escm"),(void*)f_5801},
{C_text("f_5804:chicken_2dsyntax_2escm"),(void*)f_5804},
{C_text("f_5807:chicken_2dsyntax_2escm"),(void*)f_5807},
{C_text("f_5810:chicken_2dsyntax_2escm"),(void*)f_5810},
{C_text("f_5813:chicken_2dsyntax_2escm"),(void*)f_5813},
{C_text("f_5816:chicken_2dsyntax_2escm"),(void*)f_5816},
{C_text("f_5819:chicken_2dsyntax_2escm"),(void*)f_5819},
{C_text("f_5822:chicken_2dsyntax_2escm"),(void*)f_5822},
{C_text("f_5825:chicken_2dsyntax_2escm"),(void*)f_5825},
{C_text("f_5828:chicken_2dsyntax_2escm"),(void*)f_5828},
{C_text("f_5831:chicken_2dsyntax_2escm"),(void*)f_5831},
{C_text("f_5834:chicken_2dsyntax_2escm"),(void*)f_5834},
{C_text("f_5837:chicken_2dsyntax_2escm"),(void*)f_5837},
{C_text("f_5840:chicken_2dsyntax_2escm"),(void*)f_5840},
{C_text("f_5843:chicken_2dsyntax_2escm"),(void*)f_5843},
{C_text("f_5846:chicken_2dsyntax_2escm"),(void*)f_5846},
{C_text("f_5850:chicken_2dsyntax_2escm"),(void*)f_5850},
{C_text("f_5853:chicken_2dsyntax_2escm"),(void*)f_5853},
{C_text("f_5856:chicken_2dsyntax_2escm"),(void*)f_5856},
{C_text("f_5860:chicken_2dsyntax_2escm"),(void*)f_5860},
{C_text("f_5863:chicken_2dsyntax_2escm"),(void*)f_5863},
{C_text("f_5866:chicken_2dsyntax_2escm"),(void*)f_5866},
{C_text("f_5869:chicken_2dsyntax_2escm"),(void*)f_5869},
{C_text("f_5877:chicken_2dsyntax_2escm"),(void*)f_5877},
{C_text("f_5879:chicken_2dsyntax_2escm"),(void*)f_5879},
{C_text("f_5883:chicken_2dsyntax_2escm"),(void*)f_5883},
{C_text("f_5885:chicken_2dsyntax_2escm"),(void*)f_5885},
{C_text("f_5891:chicken_2dsyntax_2escm"),(void*)f_5891},
{C_text("f_5905:chicken_2dsyntax_2escm"),(void*)f_5905},
{C_text("f_5909:chicken_2dsyntax_2escm"),(void*)f_5909},
{C_text("f_5917:chicken_2dsyntax_2escm"),(void*)f_5917},
{C_text("f_5920:chicken_2dsyntax_2escm"),(void*)f_5920},
{C_text("f_5923:chicken_2dsyntax_2escm"),(void*)f_5923},
{C_text("f_5926:chicken_2dsyntax_2escm"),(void*)f_5926},
{C_text("f_5929:chicken_2dsyntax_2escm"),(void*)f_5929},
{C_text("f_5932:chicken_2dsyntax_2escm"),(void*)f_5932},
{C_text("f_5935:chicken_2dsyntax_2escm"),(void*)f_5935},
{C_text("f_5938:chicken_2dsyntax_2escm"),(void*)f_5938},
{C_text("f_5941:chicken_2dsyntax_2escm"),(void*)f_5941},
{C_text("f_5944:chicken_2dsyntax_2escm"),(void*)f_5944},
{C_text("f_5951:chicken_2dsyntax_2escm"),(void*)f_5951},
{C_text("f_5967:chicken_2dsyntax_2escm"),(void*)f_5967},
{C_text("f_5969:chicken_2dsyntax_2escm"),(void*)f_5969},
{C_text("f_5977:chicken_2dsyntax_2escm"),(void*)f_5977},
{C_text("f_5987:chicken_2dsyntax_2escm"),(void*)f_5987},
{C_text("f_5991:chicken_2dsyntax_2escm"),(void*)f_5991},
{C_text("f_6001:chicken_2dsyntax_2escm"),(void*)f_6001},
{C_text("f_6005:chicken_2dsyntax_2escm"),(void*)f_6005},
{C_text("f_6007:chicken_2dsyntax_2escm"),(void*)f_6007},
{C_text("f_6015:chicken_2dsyntax_2escm"),(void*)f_6015},
{C_text("f_6017:chicken_2dsyntax_2escm"),(void*)f_6017},
{C_text("f_6021:chicken_2dsyntax_2escm"),(void*)f_6021},
{C_text("f_6043:chicken_2dsyntax_2escm"),(void*)f_6043},
{C_text("f_6045:chicken_2dsyntax_2escm"),(void*)f_6045},
{C_text("f_6093:chicken_2dsyntax_2escm"),(void*)f_6093},
{C_text("f_6146:chicken_2dsyntax_2escm"),(void*)f_6146},
{C_text("f_6157:chicken_2dsyntax_2escm"),(void*)f_6157},
{C_text("f_6194:chicken_2dsyntax_2escm"),(void*)f_6194},
{C_text("f_6222:chicken_2dsyntax_2escm"),(void*)f_6222},
{C_text("f_6249:chicken_2dsyntax_2escm"),(void*)f_6249},
{C_text("f_6259:chicken_2dsyntax_2escm"),(void*)f_6259},
{C_text("f_6261:chicken_2dsyntax_2escm"),(void*)f_6261},
{C_text("f_6286:chicken_2dsyntax_2escm"),(void*)f_6286},
{C_text("f_6317:chicken_2dsyntax_2escm"),(void*)f_6317},
{C_text("f_6319:chicken_2dsyntax_2escm"),(void*)f_6319},
{C_text("f_6323:chicken_2dsyntax_2escm"),(void*)f_6323},
{C_text("f_6366:chicken_2dsyntax_2escm"),(void*)f_6366},
{C_text("f_6368:chicken_2dsyntax_2escm"),(void*)f_6368},
{C_text("f_6372:chicken_2dsyntax_2escm"),(void*)f_6372},
{C_text("f_6375:chicken_2dsyntax_2escm"),(void*)f_6375},
{C_text("f_6378:chicken_2dsyntax_2escm"),(void*)f_6378},
{C_text("f_6381:chicken_2dsyntax_2escm"),(void*)f_6381},
{C_text("f_6384:chicken_2dsyntax_2escm"),(void*)f_6384},
{C_text("f_6387:chicken_2dsyntax_2escm"),(void*)f_6387},
{C_text("f_6390:chicken_2dsyntax_2escm"),(void*)f_6390},
{C_text("f_6393:chicken_2dsyntax_2escm"),(void*)f_6393},
{C_text("f_6396:chicken_2dsyntax_2escm"),(void*)f_6396},
{C_text("f_6399:chicken_2dsyntax_2escm"),(void*)f_6399},
{C_text("f_6402:chicken_2dsyntax_2escm"),(void*)f_6402},
{C_text("f_6405:chicken_2dsyntax_2escm"),(void*)f_6405},
{C_text("f_6408:chicken_2dsyntax_2escm"),(void*)f_6408},
{C_text("f_6411:chicken_2dsyntax_2escm"),(void*)f_6411},
{C_text("f_6414:chicken_2dsyntax_2escm"),(void*)f_6414},
{C_text("f_6417:chicken_2dsyntax_2escm"),(void*)f_6417},
{C_text("f_6424:chicken_2dsyntax_2escm"),(void*)f_6424},
{C_text("f_6431:chicken_2dsyntax_2escm"),(void*)f_6431},
{C_text("f_6444:chicken_2dsyntax_2escm"),(void*)f_6444},
{C_text("f_6447:chicken_2dsyntax_2escm"),(void*)f_6447},
{C_text("f_6466:chicken_2dsyntax_2escm"),(void*)f_6466},
{C_text("f_6512:chicken_2dsyntax_2escm"),(void*)f_6512},
{C_text("f_6527:chicken_2dsyntax_2escm"),(void*)f_6527},
{C_text("f_6562:chicken_2dsyntax_2escm"),(void*)f_6562},
{C_text("f_6628:chicken_2dsyntax_2escm"),(void*)f_6628},
{C_text("f_6728:chicken_2dsyntax_2escm"),(void*)f_6728},
{C_text("f_6754:chicken_2dsyntax_2escm"),(void*)f_6754},
{C_text("f_6756:chicken_2dsyntax_2escm"),(void*)f_6756},
{C_text("f_6760:chicken_2dsyntax_2escm"),(void*)f_6760},
{C_text("f_6771:chicken_2dsyntax_2escm"),(void*)f_6771},
{C_text("f_6774:chicken_2dsyntax_2escm"),(void*)f_6774},
{C_text("f_6797:chicken_2dsyntax_2escm"),(void*)f_6797},
{C_text("f_6816:chicken_2dsyntax_2escm"),(void*)f_6816},
{C_text("f_6826:chicken_2dsyntax_2escm"),(void*)f_6826},
{C_text("f_6833:chicken_2dsyntax_2escm"),(void*)f_6833},
{C_text("f_6843:chicken_2dsyntax_2escm"),(void*)f_6843},
{C_text("f_6845:chicken_2dsyntax_2escm"),(void*)f_6845},
{C_text("f_6853:chicken_2dsyntax_2escm"),(void*)f_6853},
{C_text("f_6861:chicken_2dsyntax_2escm"),(void*)f_6861},
{C_text("f_6863:chicken_2dsyntax_2escm"),(void*)f_6863},
{C_text("f_6867:chicken_2dsyntax_2escm"),(void*)f_6867},
{C_text("f_6926:chicken_2dsyntax_2escm"),(void*)f_6926},
{C_text("f_6928:chicken_2dsyntax_2escm"),(void*)f_6928},
{C_text("f_6932:chicken_2dsyntax_2escm"),(void*)f_6932},
{C_text("f_6935:chicken_2dsyntax_2escm"),(void*)f_6935},
{C_text("f_6938:chicken_2dsyntax_2escm"),(void*)f_6938},
{C_text("f_6941:chicken_2dsyntax_2escm"),(void*)f_6941},
{C_text("f_6948:chicken_2dsyntax_2escm"),(void*)f_6948},
{C_text("f_6958:chicken_2dsyntax_2escm"),(void*)f_6958},
{C_text("f_6961:chicken_2dsyntax_2escm"),(void*)f_6961},
{C_text("f_6967:chicken_2dsyntax_2escm"),(void*)f_6967},
{C_text("f_6978:chicken_2dsyntax_2escm"),(void*)f_6978},
{C_text("f_6994:chicken_2dsyntax_2escm"),(void*)f_6994},
{C_text("f_7004:chicken_2dsyntax_2escm"),(void*)f_7004},
{C_text("f_7027:chicken_2dsyntax_2escm"),(void*)f_7027},
{C_text("f_7030:chicken_2dsyntax_2escm"),(void*)f_7030},
{C_text("f_7047:chicken_2dsyntax_2escm"),(void*)f_7047},
{C_text("f_7053:chicken_2dsyntax_2escm"),(void*)f_7053},
{C_text("f_7070:chicken_2dsyntax_2escm"),(void*)f_7070},
{C_text("f_7093:chicken_2dsyntax_2escm"),(void*)f_7093},
{C_text("f_7121:chicken_2dsyntax_2escm"),(void*)f_7121},
{C_text("f_7123:chicken_2dsyntax_2escm"),(void*)f_7123},
{C_text("f_7127:chicken_2dsyntax_2escm"),(void*)f_7127},
{C_text("f_7130:chicken_2dsyntax_2escm"),(void*)f_7130},
{C_text("f_7133:chicken_2dsyntax_2escm"),(void*)f_7133},
{C_text("f_7136:chicken_2dsyntax_2escm"),(void*)f_7136},
{C_text("f_7143:chicken_2dsyntax_2escm"),(void*)f_7143},
{C_text("f_7153:chicken_2dsyntax_2escm"),(void*)f_7153},
{C_text("f_7156:chicken_2dsyntax_2escm"),(void*)f_7156},
{C_text("f_7162:chicken_2dsyntax_2escm"),(void*)f_7162},
{C_text("f_7169:chicken_2dsyntax_2escm"),(void*)f_7169},
{C_text("f_7185:chicken_2dsyntax_2escm"),(void*)f_7185},
{C_text("f_7195:chicken_2dsyntax_2escm"),(void*)f_7195},
{C_text("f_7218:chicken_2dsyntax_2escm"),(void*)f_7218},
{C_text("f_7221:chicken_2dsyntax_2escm"),(void*)f_7221},
{C_text("f_7238:chicken_2dsyntax_2escm"),(void*)f_7238},
{C_text("f_7244:chicken_2dsyntax_2escm"),(void*)f_7244},
{C_text("f_7293:chicken_2dsyntax_2escm"),(void*)f_7293},
{C_text("f_7295:chicken_2dsyntax_2escm"),(void*)f_7295},
{C_text("f_7299:chicken_2dsyntax_2escm"),(void*)f_7299},
{C_text("f_7305:chicken_2dsyntax_2escm"),(void*)f_7305},
{C_text("f_7308:chicken_2dsyntax_2escm"),(void*)f_7308},
{C_text("f_7320:chicken_2dsyntax_2escm"),(void*)f_7320},
{C_text("f_7323:chicken_2dsyntax_2escm"),(void*)f_7323},
{C_text("f_7326:chicken_2dsyntax_2escm"),(void*)f_7326},
{C_text("f_7329:chicken_2dsyntax_2escm"),(void*)f_7329},
{C_text("f_7332:chicken_2dsyntax_2escm"),(void*)f_7332},
{C_text("f_7338:chicken_2dsyntax_2escm"),(void*)f_7338},
{C_text("f_7341:chicken_2dsyntax_2escm"),(void*)f_7341},
{C_text("f_7350:chicken_2dsyntax_2escm"),(void*)f_7350},
{C_text("f_7351:chicken_2dsyntax_2escm"),(void*)f_7351},
{C_text("f_7367:chicken_2dsyntax_2escm"),(void*)f_7367},
{C_text("f_7398:chicken_2dsyntax_2escm"),(void*)f_7398},
{C_text("f_7400:chicken_2dsyntax_2escm"),(void*)f_7400},
{C_text("f_7419:chicken_2dsyntax_2escm"),(void*)f_7419},
{C_text("f_7425:chicken_2dsyntax_2escm"),(void*)f_7425},
{C_text("f_7436:chicken_2dsyntax_2escm"),(void*)f_7436},
{C_text("f_7440:chicken_2dsyntax_2escm"),(void*)f_7440},
{C_text("f_7444:chicken_2dsyntax_2escm"),(void*)f_7444},
{C_text("f_7484:chicken_2dsyntax_2escm"),(void*)f_7484},
{C_text("f_7514:chicken_2dsyntax_2escm"),(void*)f_7514},
{C_text("f_7525:chicken_2dsyntax_2escm"),(void*)f_7525},
{C_text("f_7600:chicken_2dsyntax_2escm"),(void*)f_7600},
{C_text("f_7667:chicken_2dsyntax_2escm"),(void*)f_7667},
{C_text("f_7680:chicken_2dsyntax_2escm"),(void*)f_7680},
{C_text("f_7682:chicken_2dsyntax_2escm"),(void*)f_7682},
{C_text("f_7728:chicken_2dsyntax_2escm"),(void*)f_7728},
{C_text("f_7738:chicken_2dsyntax_2escm"),(void*)f_7738},
{C_text("f_7751:chicken_2dsyntax_2escm"),(void*)f_7751},
{C_text("f_7786:chicken_2dsyntax_2escm"),(void*)f_7786},
{C_text("f_7793:chicken_2dsyntax_2escm"),(void*)f_7793},
{C_text("f_7797:chicken_2dsyntax_2escm"),(void*)f_7797},
{C_text("f_7805:chicken_2dsyntax_2escm"),(void*)f_7805},
{C_text("f_7807:chicken_2dsyntax_2escm"),(void*)f_7807},
{C_text("f_7811:chicken_2dsyntax_2escm"),(void*)f_7811},
{C_text("f_7823:chicken_2dsyntax_2escm"),(void*)f_7823},
{C_text("f_7826:chicken_2dsyntax_2escm"),(void*)f_7826},
{C_text("f_7829:chicken_2dsyntax_2escm"),(void*)f_7829},
{C_text("f_7832:chicken_2dsyntax_2escm"),(void*)f_7832},
{C_text("f_7843:chicken_2dsyntax_2escm"),(void*)f_7843},
{C_text("f_7845:chicken_2dsyntax_2escm"),(void*)f_7845},
{C_text("f_7871:chicken_2dsyntax_2escm"),(void*)f_7871},
{C_text("f_7882:chicken_2dsyntax_2escm"),(void*)f_7882},
{C_text("f_7965:chicken_2dsyntax_2escm"),(void*)f_7965},
{C_text("f_7967:chicken_2dsyntax_2escm"),(void*)f_7967},
{C_text("f_7971:chicken_2dsyntax_2escm"),(void*)f_7971},
{C_text("f_7974:chicken_2dsyntax_2escm"),(void*)f_7974},
{C_text("f_8004:chicken_2dsyntax_2escm"),(void*)f_8004},
{C_text("f_8014:chicken_2dsyntax_2escm"),(void*)f_8014},
{C_text("f_8042:chicken_2dsyntax_2escm"),(void*)f_8042},
{C_text("f_8044:chicken_2dsyntax_2escm"),(void*)f_8044},
{C_text("f_8048:chicken_2dsyntax_2escm"),(void*)f_8048},
{C_text("f_8067:chicken_2dsyntax_2escm"),(void*)f_8067},
{C_text("f_8071:chicken_2dsyntax_2escm"),(void*)f_8071},
{C_text("f_8075:chicken_2dsyntax_2escm"),(void*)f_8075},
{C_text("f_8077:chicken_2dsyntax_2escm"),(void*)f_8077},
{C_text("f_8098:chicken_2dsyntax_2escm"),(void*)f_8098},
{C_text("f_8116:chicken_2dsyntax_2escm"),(void*)f_8116},
{C_text("f_8124:chicken_2dsyntax_2escm"),(void*)f_8124},
{C_text("f_8128:chicken_2dsyntax_2escm"),(void*)f_8128},
{C_text("f_8138:chicken_2dsyntax_2escm"),(void*)f_8138},
{C_text("f_8144:chicken_2dsyntax_2escm"),(void*)f_8144},
{C_text("f_8158:chicken_2dsyntax_2escm"),(void*)f_8158},
{C_text("f_8184:chicken_2dsyntax_2escm"),(void*)f_8184},
{C_text("f_8208:chicken_2dsyntax_2escm"),(void*)f_8208},
{C_text("f_8216:chicken_2dsyntax_2escm"),(void*)f_8216},
{C_text("f_8224:chicken_2dsyntax_2escm"),(void*)f_8224},
{C_text("f_8228:chicken_2dsyntax_2escm"),(void*)f_8228},
{C_text("f_8231:chicken_2dsyntax_2escm"),(void*)f_8231},
{C_text("f_8234:chicken_2dsyntax_2escm"),(void*)f_8234},
{C_text("f_8243:chicken_2dsyntax_2escm"),(void*)f_8243},
{C_text("f_8244:chicken_2dsyntax_2escm"),(void*)f_8244},
{C_text("f_8252:chicken_2dsyntax_2escm"),(void*)f_8252},
{C_text("f_8256:chicken_2dsyntax_2escm"),(void*)f_8256},
{C_text("f_8260:chicken_2dsyntax_2escm"),(void*)f_8260},
{C_text("f_8268:chicken_2dsyntax_2escm"),(void*)f_8268},
{C_text("f_8274:chicken_2dsyntax_2escm"),(void*)f_8274},
{C_text("f_8280:chicken_2dsyntax_2escm"),(void*)f_8280},
{C_text("f_8283:chicken_2dsyntax_2escm"),(void*)f_8283},
{C_text("f_8286:chicken_2dsyntax_2escm"),(void*)f_8286},
{C_text("f_8290:chicken_2dsyntax_2escm"),(void*)f_8290},
{C_text("f_8298:chicken_2dsyntax_2escm"),(void*)f_8298},
{C_text("f_8301:chicken_2dsyntax_2escm"),(void*)f_8301},
{C_text("f_8304:chicken_2dsyntax_2escm"),(void*)f_8304},
{C_text("f_8307:chicken_2dsyntax_2escm"),(void*)f_8307},
{C_text("f_8314:chicken_2dsyntax_2escm"),(void*)f_8314},
{C_text("f_8340:chicken_2dsyntax_2escm"),(void*)f_8340},
{C_text("f_8365:chicken_2dsyntax_2escm"),(void*)f_8365},
{C_text("f_8374:chicken_2dsyntax_2escm"),(void*)f_8374},
{C_text("f_8408:chicken_2dsyntax_2escm"),(void*)f_8408},
{C_text("f_8433:chicken_2dsyntax_2escm"),(void*)f_8433},
{C_text("f_8442:chicken_2dsyntax_2escm"),(void*)f_8442},
{C_text("f_8490:chicken_2dsyntax_2escm"),(void*)f_8490},
{C_text("f_8492:chicken_2dsyntax_2escm"),(void*)f_8492},
{C_text("f_8496:chicken_2dsyntax_2escm"),(void*)f_8496},
{C_text("f_8506:chicken_2dsyntax_2escm"),(void*)f_8506},
{C_text("f_8533:chicken_2dsyntax_2escm"),(void*)f_8533},
{C_text("f_8536:chicken_2dsyntax_2escm"),(void*)f_8536},
{C_text("f_8551:chicken_2dsyntax_2escm"),(void*)f_8551},
{C_text("f_8559:chicken_2dsyntax_2escm"),(void*)f_8559},
{C_text("f_8568:chicken_2dsyntax_2escm"),(void*)f_8568},
{C_text("f_8583:chicken_2dsyntax_2escm"),(void*)f_8583},
{C_text("f_8593:chicken_2dsyntax_2escm"),(void*)f_8593},
{C_text("f_8596:chicken_2dsyntax_2escm"),(void*)f_8596},
{C_text("f_8612:chicken_2dsyntax_2escm"),(void*)f_8612},
{C_text("f_8632:chicken_2dsyntax_2escm"),(void*)f_8632},
{C_text("f_8634:chicken_2dsyntax_2escm"),(void*)f_8634},
{C_text("f_8636:chicken_2dsyntax_2escm"),(void*)f_8636},
{C_text("f_8640:chicken_2dsyntax_2escm"),(void*)f_8640},
{C_text("f_8649:chicken_2dsyntax_2escm"),(void*)f_8649},
{C_text("f_8652:chicken_2dsyntax_2escm"),(void*)f_8652},
{C_text("f_8661:chicken_2dsyntax_2escm"),(void*)f_8661},
{C_text("f_8677:chicken_2dsyntax_2escm"),(void*)f_8677},
{C_text("f_8681:chicken_2dsyntax_2escm"),(void*)f_8681},
{C_text("f_8724:chicken_2dsyntax_2escm"),(void*)f_8724},
{C_text("f_8736:chicken_2dsyntax_2escm"),(void*)f_8736},
{C_text("f_8738:chicken_2dsyntax_2escm"),(void*)f_8738},
{C_text("f_8742:chicken_2dsyntax_2escm"),(void*)f_8742},
{C_text("f_8745:chicken_2dsyntax_2escm"),(void*)f_8745},
{C_text("f_8764:chicken_2dsyntax_2escm"),(void*)f_8764},
{C_text("f_8780:chicken_2dsyntax_2escm"),(void*)f_8780},
{C_text("f_8782:chicken_2dsyntax_2escm"),(void*)f_8782},
{C_text("f_8786:chicken_2dsyntax_2escm"),(void*)f_8786},
{C_text("f_8789:chicken_2dsyntax_2escm"),(void*)f_8789},
{C_text("f_8802:chicken_2dsyntax_2escm"),(void*)f_8802},
{C_text("f_8804:chicken_2dsyntax_2escm"),(void*)f_8804},
{C_text("f_8808:chicken_2dsyntax_2escm"),(void*)f_8808},
{C_text("f_8822:chicken_2dsyntax_2escm"),(void*)f_8822},
{C_text("f_8828:chicken_2dsyntax_2escm"),(void*)f_8828},
{C_text("f_8853:chicken_2dsyntax_2escm"),(void*)f_8853},
{C_text("f_8855:chicken_2dsyntax_2escm"),(void*)f_8855},
{C_text("f_8862:chicken_2dsyntax_2escm"),(void*)f_8862},
{C_text("f_8868:chicken_2dsyntax_2escm"),(void*)f_8868},
{C_text("f_8872:chicken_2dsyntax_2escm"),(void*)f_8872},
{C_text("f_8882:chicken_2dsyntax_2escm"),(void*)f_8882},
{C_text("f_8884:chicken_2dsyntax_2escm"),(void*)f_8884},
{C_text("f_8913:chicken_2dsyntax_2escm"),(void*)f_8913},
{C_text("f_8932:chicken_2dsyntax_2escm"),(void*)f_8932},
{C_text("f_8966:chicken_2dsyntax_2escm"),(void*)f_8966},
{C_text("f_8984:chicken_2dsyntax_2escm"),(void*)f_8984},
{C_text("f_8990:chicken_2dsyntax_2escm"),(void*)f_8990},
{C_text("f_9024:chicken_2dsyntax_2escm"),(void*)f_9024},
{C_text("f_9060:chicken_2dsyntax_2escm"),(void*)f_9060},
{C_text("f_9062:chicken_2dsyntax_2escm"),(void*)f_9062},
{C_text("f_9066:chicken_2dsyntax_2escm"),(void*)f_9066},
{C_text("f_9074:chicken_2dsyntax_2escm"),(void*)f_9074},
{C_text("f_9079:chicken_2dsyntax_2escm"),(void*)f_9079},
{C_text("f_9104:chicken_2dsyntax_2escm"),(void*)f_9104},
{C_text("f_9114:chicken_2dsyntax_2escm"),(void*)f_9114},
{C_text("f_9116:chicken_2dsyntax_2escm"),(void*)f_9116},
{C_text("f_9120:chicken_2dsyntax_2escm"),(void*)f_9120},
{C_text("f_9126:chicken_2dsyntax_2escm"),(void*)f_9126},
{C_text("f_9147:chicken_2dsyntax_2escm"),(void*)f_9147},
{C_text("f_9154:chicken_2dsyntax_2escm"),(void*)f_9154},
{C_text("f_9177:chicken_2dsyntax_2escm"),(void*)f_9177},
{C_text("f_9181:chicken_2dsyntax_2escm"),(void*)f_9181},
{C_text("f_9202:chicken_2dsyntax_2escm"),(void*)f_9202},
{C_text("f_9205:chicken_2dsyntax_2escm"),(void*)f_9205},
{C_text("f_9209:chicken_2dsyntax_2escm"),(void*)f_9209},
{C_text("f_9217:chicken_2dsyntax_2escm"),(void*)f_9217},
{C_text("f_9221:chicken_2dsyntax_2escm"),(void*)f_9221},
{C_text("f_9227:chicken_2dsyntax_2escm"),(void*)f_9227},
{C_text("f_9228:chicken_2dsyntax_2escm"),(void*)f_9228},
{C_text("f_9239:chicken_2dsyntax_2escm"),(void*)f_9239},
{C_text("f_9254:chicken_2dsyntax_2escm"),(void*)f_9254},
{C_text("f_9256:chicken_2dsyntax_2escm"),(void*)f_9256},
{C_text("f_9275:chicken_2dsyntax_2escm"),(void*)f_9275},
{C_text("f_9283:chicken_2dsyntax_2escm"),(void*)f_9283},
{C_text("f_9289:chicken_2dsyntax_2escm"),(void*)f_9289},
{C_text("f_9291:chicken_2dsyntax_2escm"),(void*)f_9291},
{C_text("f_9316:chicken_2dsyntax_2escm"),(void*)f_9316},
{C_text("f_9340:chicken_2dsyntax_2escm"),(void*)f_9340},
{C_text("f_9377:chicken_2dsyntax_2escm"),(void*)f_9377},
{C_text("f_9405:chicken_2dsyntax_2escm"),(void*)f_9405},
{C_text("f_9439:chicken_2dsyntax_2escm"),(void*)f_9439},
{C_text("f_9470:chicken_2dsyntax_2escm"),(void*)f_9470},
{C_text("f_9477:chicken_2dsyntax_2escm"),(void*)f_9477},
{C_text("f_9483:chicken_2dsyntax_2escm"),(void*)f_9483},
{C_text("f_9508:chicken_2dsyntax_2escm"),(void*)f_9508},
{C_text("f_9517:chicken_2dsyntax_2escm"),(void*)f_9517},
{C_text("f_9530:chicken_2dsyntax_2escm"),(void*)f_9530},
{C_text("f_9555:chicken_2dsyntax_2escm"),(void*)f_9555},
{C_text("f_9591:chicken_2dsyntax_2escm"),(void*)f_9591},
{C_text("f_9593:chicken_2dsyntax_2escm"),(void*)f_9593},
{C_text("f_9597:chicken_2dsyntax_2escm"),(void*)f_9597},
{C_text("f_9604:chicken_2dsyntax_2escm"),(void*)f_9604},
{C_text("f_9608:chicken_2dsyntax_2escm"),(void*)f_9608},
{C_text("f_9616:chicken_2dsyntax_2escm"),(void*)f_9616},
{C_text("f_9630:chicken_2dsyntax_2escm"),(void*)f_9630},
{C_text("f_9636:chicken_2dsyntax_2escm"),(void*)f_9636},
{C_text("f_9643:chicken_2dsyntax_2escm"),(void*)f_9643},
{C_text("f_9649:chicken_2dsyntax_2escm"),(void*)f_9649},
{C_text("f_9662:chicken_2dsyntax_2escm"),(void*)f_9662},
{C_text("f_9696:chicken_2dsyntax_2escm"),(void*)f_9696},
{C_text("f_9706:chicken_2dsyntax_2escm"),(void*)f_9706},
{C_text("f_9721:chicken_2dsyntax_2escm"),(void*)f_9721},
{C_text("f_9723:chicken_2dsyntax_2escm"),(void*)f_9723},
{C_text("f_9727:chicken_2dsyntax_2escm"),(void*)f_9727},
{C_text("f_9742:chicken_2dsyntax_2escm"),(void*)f_9742},
{C_text("f_9744:chicken_2dsyntax_2escm"),(void*)f_9744},
{C_text("f_9748:chicken_2dsyntax_2escm"),(void*)f_9748},
{C_text("f_9770:chicken_2dsyntax_2escm"),(void*)f_9770},
{C_text("f_9772:chicken_2dsyntax_2escm"),(void*)f_9772},
{C_text("f_9776:chicken_2dsyntax_2escm"),(void*)f_9776},
{C_text("f_9794:chicken_2dsyntax_2escm"),(void*)f_9794},
{C_text("f_9796:chicken_2dsyntax_2escm"),(void*)f_9796},
{C_text("f_9805:chicken_2dsyntax_2escm"),(void*)f_9805},
{C_text("f_9811:chicken_2dsyntax_2escm"),(void*)f_9811},
{C_text("f_9817:chicken_2dsyntax_2escm"),(void*)f_9817},
{C_text("f_9836:chicken_2dsyntax_2escm"),(void*)f_9836},
{C_text("f_9838:chicken_2dsyntax_2escm"),(void*)f_9838},
{C_text("f_9863:chicken_2dsyntax_2escm"),(void*)f_9863},
{C_text("f_9874:chicken_2dsyntax_2escm"),(void*)f_9874},
{C_text("f_9876:chicken_2dsyntax_2escm"),(void*)f_9876},
{C_text("f_9895:chicken_2dsyntax_2escm"),(void*)f_9895},
{C_text("f_9903:chicken_2dsyntax_2escm"),(void*)f_9903},
{C_text("f_9912:chicken_2dsyntax_2escm"),(void*)f_9912},
{C_text("f_9918:chicken_2dsyntax_2escm"),(void*)f_9918},
{C_text("f_9922:chicken_2dsyntax_2escm"),(void*)f_9922},
{C_text("f_9930:chicken_2dsyntax_2escm"),(void*)f_9930},
{C_text("f_9936:chicken_2dsyntax_2escm"),(void*)f_9936},
{C_text("f_9940:chicken_2dsyntax_2escm"),(void*)f_9940},
{C_text("f_9948:chicken_2dsyntax_2escm"),(void*)f_9948},
{C_text("f_9951:chicken_2dsyntax_2escm"),(void*)f_9951},
{C_text("f_9955:chicken_2dsyntax_2escm"),(void*)f_9955},
{C_text("f_9963:chicken_2dsyntax_2escm"),(void*)f_9963},
{C_text("f_9966:chicken_2dsyntax_2escm"),(void*)f_9966},
{C_text("f_9979:chicken_2dsyntax_2escm"),(void*)f_9979},
{C_text("f_9996:chicken_2dsyntax_2escm"),(void*)f_9996},
{C_text("toplevel:chicken_2dsyntax_2escm"),(void*)C_chicken_2dsyntax_toplevel},
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
S|applied compiler syntax:
S|  scheme#for-each		2
S|  ##sys#map		11
S|  chicken.base#foldl		4
S|  scheme#map		45
S|  chicken.base#foldr		4
o|eliminated procedure checks: 799 
o|specializations:
o|  1 (scheme#zero? integer)
o|  1 (scheme#cdadr (pair * (pair pair *)))
o|  1 (chicken.base#add1 *)
o|  2 (scheme#string-append string string)
o|  14 (scheme#cddr (pair * pair))
o|  2 (scheme#length list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  5 (scheme#cadr (pair * pair))
o|  4 (scheme#cdddr (pair * (pair * pair)))
o|  1 (scheme#eqv? * *)
o|  40 (##sys#check-list (or pair list) *)
o|  78 (scheme#cdr pair)
o|  26 (scheme#car pair)
(o e)|safe calls: 1559 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4516 
o|inlining procedure: k4516 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4786 
o|inlining procedure: k4786 
o|inlining procedure: k4817 
o|inlining procedure: k4817 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k5034 
o|inlining procedure: k5034 
o|inlining procedure: k5026 
o|inlining procedure: k5026 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5425 
o|inlining procedure: k5425 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5893 
o|inlining procedure: k5893 
o|contracted procedure: "(chicken-syntax.scm:1348) split-at" 
o|inlining procedure: k4574 
o|inlining procedure: k4574 
o|inlining procedure: k6022 
o|inlining procedure: k6022 
o|inlining procedure: k6047 
o|inlining procedure: k6047 
o|inlining procedure: k6095 
o|inlining procedure: k6123 
o|inlining procedure: k6123 
o|inlining procedure: k6095 
o|inlining procedure: k6155 
o|inlining procedure: k6155 
o|inlining procedure: k6195 
o|inlining procedure: k6195 
o|inlining procedure: k5971 
o|inlining procedure: k5971 
o|inlining procedure: k6263 
o|contracted procedure: "(chicken-syntax.scm:1318) g32903299" 
o|inlining procedure: k6263 
o|inlining procedure: k6426 
o|inlining procedure: k6426 
o|inlining procedure: k6464 
o|inlining procedure: k6464 
o|inlining procedure: k6491 
o|inlining procedure: k6491 
o|inlining procedure: k6560 
o|inlining procedure: k6560 
o|inlining procedure: k6596 
o|inlining procedure: k6596 
o|inlining procedure: k6623 
o|inlining procedure: k6623 
o|inlining procedure: k6799 
o|inlining procedure: k6799 
o|inlining procedure: k6827 
o|inlining procedure: k6827 
o|inlining procedure: k6871 
o|inlining procedure: k6871 
o|inlining procedure: k6950 
o|inlining procedure: k6950 
o|inlining procedure: k7048 
o|inlining procedure: k7048 
o|inlining procedure: k7145 
o|inlining procedure: k7145 
o|inlining procedure: k7239 
o|inlining procedure: k7239 
o|inlining procedure: k7353 
o|inlining procedure: k7353 
o|inlining procedure: k7402 
o|inlining procedure: k7402 
o|inlining procedure: k7449 
o|inlining procedure: k7449 
o|inlining procedure: k7520 
o|inlining procedure: k7520 
o|inlining procedure: k7589 
o|inlining procedure: k7589 
o|inlining procedure: k7669 
o|inlining procedure: k7669 
o|inlining procedure: k7684 
o|inlining procedure: k7684 
o|inlining procedure: k7730 
o|inlining procedure: k7730 
o|inlining procedure: k7753 
o|inlining procedure: k7753 
o|inlining procedure: k7847 
o|inlining procedure: k7847 
o|removed unused formal parameters: (rename2751) 
o|inlining procedure: k8146 
o|inlining procedure: k8146 
o|removed unused parameter to known procedure: rename2751 "(chicken-syntax.scm:899) make-if-tree2731" 
o|contracted procedure: "(chicken-syntax.scm:897) make-default-procs2730" 
o|inlining procedure: k8079 
o|inlining procedure: k8079 
o|inlining procedure: k8342 
o|inlining procedure: k8342 
o|inlining procedure: k8376 
o|inlining procedure: k8376 
o|inlining procedure: k8410 
o|inlining procedure: k8410 
o|inlining procedure: k8444 
o|inlining procedure: k8444 
o|inlining procedure: k8508 
o|inlining procedure: k8508 
o|inlining procedure: k8560 
o|inlining procedure: k8560 
o|inlining procedure: k8650 
o|inlining procedure: k8650 
o|inlining procedure: k8665 
o|inlining procedure: k8665 
o|inlining procedure: k8886 
o|inlining procedure: k8886 
o|inlining procedure: k8934 
o|contracted procedure: "(chicken-syntax.scm:676) g25732582" 
o|inlining procedure: k8934 
o|inlining procedure: k8968 
o|contracted procedure: "(chicken-syntax.scm:677) g25892594" 
o|inlining procedure: k8968 
o|substituted constant variable: g25902593 
o|inlining procedure: k8992 
o|inlining procedure: k8992 
o|inlining procedure: k9026 
o|inlining procedure: k9026 
o|inlining procedure: k9081 
o|inlining procedure: k9081 
o|inlining procedure: k9128 
o|inlining procedure: k9128 
o|inlining procedure: k9156 
o|inlining procedure: k9156 
o|inlining procedure: k9258 
o|inlining procedure: k9293 
o|inlining procedure: k9293 
o|inlining procedure: k9258 
o|inlining procedure: k9407 
o|contracted procedure: "(chicken-syntax.scm:634) g24652474" 
o|inlining procedure: k9407 
o|inlining procedure: k9441 
o|inlining procedure: k9441 
o|inlining procedure: k9485 
o|inlining procedure: k9485 
o|inlining procedure: k9519 
o|inlining procedure: k9519 
o|inlining procedure: k9542 
o|inlining procedure: k9542 
o|inlining procedure: k9557 
o|inlining procedure: k9557 
o|inlining procedure: k9664 
o|contracted procedure: "(chicken-syntax.scm:593) g22802298" 
o|inlining procedure: k9664 
o|inlining procedure: k9698 
o|contracted procedure: "(chicken-syntax.scm:589) g22652287" 
o|inlining procedure: k9698 
o|inlining procedure: k9819 
o|inlining procedure: k9819 
o|inlining procedure: k9840 
o|inlining procedure: k9840 
o|contracted procedure: "(chicken-syntax.scm:502) pname1706" 
o|inlining procedure: k9881 
o|inlining procedure: k9881 
o|removed unused formal parameters: (z1813) 
o|removed unused formal parameters: (z1841) 
o|inlining procedure: k10087 
o|contracted procedure: "(chicken-syntax.scm:539) g21452155" 
o|inlining procedure: k10087 
o|inlining procedure: k10135 
o|contracted procedure: "(chicken-syntax.scm:537) g21092119" 
o|inlining procedure: k10135 
o|inlining procedure: k10183 
o|contracted procedure: "(chicken-syntax.scm:534) g20672078" 
o|inlining procedure: k10183 
o|inlining procedure: k10233 
o|inlining procedure: k10233 
o|inlining procedure: k10324 
o|contracted procedure: "(chicken-syntax.scm:527) g20312041" 
o|inlining procedure: k10324 
o|inlining procedure: k10372 
o|contracted procedure: "(chicken-syntax.scm:524) g19952005" 
o|inlining procedure: k10372 
o|inlining procedure: k10420 
o|inlining procedure: k10420 
o|inlining procedure: k10470 
o|inlining procedure: k10470 
o|inlining procedure: k10490 
o|inlining procedure: k10490 
o|inlining procedure: k10538 
o|inlining procedure: k10538 
o|inlining procedure: k10586 
o|inlining procedure: k10586 
o|inlining procedure: k10634 
o|removed unused parameter to known procedure: z1841 "(chicken-syntax.scm:504) g18301839" 
o|inlining procedure: k10634 
o|inlining procedure: k10668 
o|removed unused parameter to known procedure: z1813 "(chicken-syntax.scm:503) g18021811" 
o|inlining procedure: k10668 
o|inlining procedure: k10702 
o|inlining procedure: k10702 
o|inlining procedure: k10736 
o|inlining procedure: k10736 
o|inlining procedure: k10770 
o|inlining procedure: k10770 
o|removed unused formal parameters: (x1428) 
o|removed unused formal parameters: (x1456) 
o|inlining procedure: k10925 
o|contracted procedure: "(chicken-syntax.scm:484) g16741684" 
o|inlining procedure: k10925 
o|inlining procedure: k10973 
o|contracted procedure: "(chicken-syntax.scm:482) g16381648" 
o|inlining procedure: k10973 
o|inlining procedure: k11072 
o|contracted procedure: "(chicken-syntax.scm:477) g16021612" 
o|inlining procedure: k11072 
o|inlining procedure: k11120 
o|contracted procedure: "(chicken-syntax.scm:475) g15661576" 
o|inlining procedure: k11120 
o|inlining procedure: k11203 
o|inlining procedure: k11203 
o|inlining procedure: k11253 
o|inlining procedure: k11253 
o|inlining procedure: k11273 
o|inlining procedure: k11273 
o|inlining procedure: k11321 
o|inlining procedure: k11321 
o|inlining procedure: k11355 
o|removed unused parameter to known procedure: x1456 "(chicken-syntax.scm:465) g14451454" 
o|inlining procedure: k11355 
o|inlining procedure: k11389 
o|removed unused parameter to known procedure: x1428 "(chicken-syntax.scm:464) g14171426" 
o|inlining procedure: k11389 
o|inlining procedure: k11423 
o|inlining procedure: k11423 
o|inlining procedure: k11488 
o|contracted procedure: "(chicken-syntax.scm:452) g13531362" 
o|inlining procedure: k11488 
o|inlining procedure: k11553 
o|contracted procedure: "(chicken-syntax.scm:444) g13161325" 
o|inlining procedure: k11553 
o|inlining procedure: k11618 
o|contracted procedure: "(chicken-syntax.scm:436) g12791288" 
o|inlining procedure: k11618 
o|inlining procedure: k11694 
o|inlining procedure: k11694 
o|inlining procedure: k11816 
o|inlining procedure: k11816 
o|inlining procedure: k11837 
o|inlining procedure: k11849 
o|inlining procedure: k11849 
o|inlining procedure: k11837 
o|inlining procedure: k11909 
o|inlining procedure: k11909 
o|inlining procedure: k11969 
o|inlining procedure: k11969 
o|inlining procedure: k12058 
o|inlining procedure: k12058 
o|substituted constant variable: a12093 
o|substituted constant variable: a12118 
o|inlining procedure: k12127 
o|inlining procedure: k12127 
o|inlining procedure: k12199 
o|inlining procedure: k12199 
o|inlining procedure: k12228 
o|inlining procedure: k12256 
o|inlining procedure: k12256 
o|inlining procedure: k12228 
o|inlining procedure: k12293 
o|inlining procedure: k12293 
o|inlining procedure: k12327 
o|inlining procedure: k12327 
o|inlining procedure: k12391 
o|inlining procedure: k12391 
o|inlining procedure: k12500 
o|inlining procedure: k12500 
o|inlining procedure: k12613 
o|inlining procedure: k12613 
o|inlining procedure: k12634 
o|inlining procedure: k12634 
o|inlining procedure: k12680 
o|inlining procedure: k12680 
o|inlining procedure: k12714 
o|inlining procedure: k12771 
o|contracted procedure: "(chicken-syntax.scm:198) g931941" 
o|inlining procedure: k12771 
o|inlining procedure: k12829 
o|inlining procedure: k12856 
o|contracted procedure: "(chicken-syntax.scm:190) g897906" 
o|propagated global variable: g914915 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12856 
o|inlining procedure: k12829 
o|inlining procedure: k12900 
o|inlining procedure: k12900 
o|inlining procedure: k12714 
o|inlining procedure: k12947 
o|inlining procedure: k12947 
o|inlining procedure: k12984 
o|inlining procedure: k12984 
o|inlining procedure: k13033 
o|inlining procedure: k13124 
o|contracted procedure: "(chicken-syntax.scm:155) g830839" 
o|inlining procedure: k13124 
o|inlining procedure: k13158 
o|contracted procedure: "(chicken-syntax.scm:155) g802811" 
o|inlining procedure: k13158 
o|inlining procedure: k13033 
o|inlining procedure: k13195 
o|inlining procedure: k13223 
o|inlining procedure: k13223 
o|inlining procedure: k13195 
o|inlining procedure: k13260 
o|inlining procedure: k13260 
o|inlining procedure: k13295 
o|inlining procedure: k13295 
o|inlining procedure: k13322 
o|inlining procedure: k13322 
o|inlining procedure: k13360 
o|inlining procedure: k13360 
o|inlining procedure: k13387 
o|inlining procedure: k13387 
o|inlining procedure: k13416 
o|inlining procedure: k13416 
o|inlining procedure: k13498 
o|inlining procedure: k13498 
o|inlining procedure: k13540 
o|inlining procedure: k13540 
o|inlining procedure: k13655 
o|inlining procedure: k13655 
o|inlining procedure: k13675 
o|inlining procedure: k13675 
o|replaced variables: 2254 
o|removed binding forms: 498 
o|substituted constant variable: r451713837 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r589413849 
o|substituted constant variable: r619613865 
o|substituted constant variable: r597213868 
o|converted assignments to bindings: (genvars3276) 
o|substituted constant variable: r659713884 
o|substituted constant variable: r662413886 
o|substituted constant variable: r682813892 
o|substituted constant variable: r740313905 
o|substituted constant variable: r759013914 
o|substituted constant variable: r767013916 
o|substituted constant variable: r808013927 
o|converted assignments to bindings: (make-if-tree2731) 
o|substituted constant variable: r866613952 
o|substituted constant variable: r915713967 
o|substituted constant variable: r982013989 
o|substituted constant variable: r1023414002 
o|substituted constant variable: r1047114010 
o|substituted constant variable: r1125414037 
o|substituted constant variable: r1185014061 
o|substituted constant variable: r1183814062 
o|substituted constant variable: r1222914080 
o|substituted constant variable: r1239214086 
o|substituted constant variable: r1250114087 
o|substituted constant variable: r1268114093 
o|substituted constant variable: r1290114104 
o|substituted constant variable: r1298514110 
o|substituted constant variable: r1319614120 
o|substituted constant variable: r1329614124 
o|substituted constant variable: r1336114127 
o|substituted constant variable: r1341714133 
o|substituted constant variable: r1341714133 
o|substituted constant variable: r1365614139 
o|substituted constant variable: r1365614139 
o|converted assignments to bindings: (parse-clause612) 
o|simplifications: ((let . 3)) 
o|replaced variables: 87 
o|removed binding forms: 1944 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:534) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:504) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:503) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:465) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:464) ##sys#slot" 
o|removed binding forms: 120 
o|contracted procedure: k10220 
o|contracted procedure: k10659 
o|contracted procedure: k10693 
o|contracted procedure: k11380 
o|contracted procedure: k11414 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((if . 34) (let . 41) (##core#call . 1315)) 
o|  call simplifications:
o|    scheme#cdddr	2
o|    chicken.fixnum#fx=
o|    scheme#vector
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	13
o|    ##sys#cdr	20
o|    scheme#symbol?	7
o|    scheme#list?	2
o|    scheme#cdar
o|    scheme#caar
o|    scheme#assq	2
o|    scheme#cadddr	2
o|    scheme#cddddr
o|    scheme#not	15
o|    scheme#memq	7
o|    scheme#cadr	45
o|    scheme#string?
o|    scheme#caddr	15
o|    scheme#apply
o|    scheme#eq?	5
o|    ##sys#call-with-values	3
o|    scheme#cddr	8
o|    scheme#cdr	23
o|    ##sys#cons	144
o|    scheme#null?	34
o|    ##sys#check-list	40
o|    scheme#pair?	105
o|    scheme#list	8
o|    ##sys#setslot	53
o|    ##sys#slot	203
o|    scheme#values
o|    ##sys#list	342
o|    chicken.fixnum#fx>=
o|    chicken.fixnum#fx+	3
o|    chicken.fixnum#fx<=	2
o|    scheme#car	53
o|    chicken.fixnum#fx-	4
o|    scheme#cons	132
o|contracted procedure: k4519 
o|contracted procedure: k4526 
o|contracted procedure: k4536 
o|contracted procedure: k6295 
o|contracted procedure: k6299 
o|contracted procedure: k6303 
o|contracted procedure: k6307 
o|contracted procedure: k6311 
o|contracted procedure: k5871 
o|contracted procedure: k5896 
o|contracted procedure: k5911 
o|contracted procedure: k6232 
o|contracted procedure: k6228 
o|contracted procedure: k5957 
o|contracted procedure: k5962 
o|contracted procedure: k5953 
o|contracted procedure: k5974 
o|contracted procedure: k5983 
o|contracted procedure: k5996 
o|contracted procedure: k4577 
o|contracted procedure: k4591 
o|contracted procedure: k4601 
o|contracted procedure: k4595 
o|contracted procedure: k6025 
o|contracted procedure: k6032 
o|contracted procedure: k6035 
o|contracted procedure: k6038 
o|contracted procedure: k6086 
o|contracted procedure: k6050 
o|contracted procedure: k6076 
o|contracted procedure: k6080 
o|contracted procedure: k6072 
o|contracted procedure: k6053 
o|contracted procedure: k6056 
o|contracted procedure: k6064 
o|contracted procedure: k6068 
o|contracted procedure: k6098 
o|contracted procedure: k6120 
o|contracted procedure: k6112 
o|contracted procedure: k6116 
o|contracted procedure: k6108 
o|contracted procedure: k6141 
o|contracted procedure: k6126 
o|contracted procedure: k6135 
o|contracted procedure: k6184 
o|contracted procedure: k6188 
o|contracted procedure: k6172 
o|contracted procedure: k6180 
o|contracted procedure: k6176 
o|contracted procedure: k6151 
o|contracted procedure: k6158 
o|contracted procedure: k6198 
o|contracted procedure: k6209 
o|contracted procedure: k6216 
o|contracted procedure: k6224 
o|contracted procedure: k6236 
o|contracted procedure: k6251 
o|contracted procedure: k6254 
o|contracted procedure: k6266 
o|contracted procedure: k6269 
o|contracted procedure: k6272 
o|contracted procedure: k6280 
o|contracted procedure: k6288 
o|contracted procedure: k6245 
o|contracted procedure: k6328 
o|contracted procedure: k6360 
o|contracted procedure: k6356 
o|contracted procedure: k6336 
o|contracted procedure: k6352 
o|contracted procedure: k6344 
o|contracted procedure: k6348 
o|contracted procedure: k6340 
o|contracted procedure: k6332 
o|contracted procedure: k6436 
o|contracted procedure: k6488 
o|contracted procedure: k6484 
o|contracted procedure: k6452 
o|contracted procedure: k6480 
o|contracted procedure: k6460 
o|inlining procedure: k6456 
o|contracted procedure: k6467 
o|inlining procedure: k6456 
o|contracted procedure: k6474 
o|contracted procedure: k6585 
o|contracted procedure: k6494 
o|contracted procedure: k6500 
o|contracted procedure: k6507 
o|contracted procedure: k6539 
o|contracted procedure: k6535 
o|contracted procedure: k6517 
o|contracted procedure: k6521 
o|contracted procedure: k6529 
o|contracted procedure: k6577 
o|contracted procedure: k6545 
o|contracted procedure: k6552 
o|contracted procedure: k6556 
o|contracted procedure: k6563 
o|contracted procedure: k6570 
o|contracted procedure: k6593 
o|contracted procedure: k6599 
o|contracted procedure: k6615 
o|contracted procedure: k6605 
o|contracted procedure: k6620 
o|contracted procedure: k6646 
o|contracted procedure: k6690 
o|contracted procedure: k6706 
o|contracted procedure: k6748 
o|contracted procedure: k6722 
o|contracted procedure: k6718 
o|contracted procedure: k6714 
o|contracted procedure: k6710 
o|contracted procedure: k6702 
o|contracted procedure: k6698 
o|contracted procedure: k6694 
o|contracted procedure: k6654 
o|contracted procedure: k6686 
o|contracted procedure: k6666 
o|contracted procedure: k6682 
o|contracted procedure: k6678 
o|contracted procedure: k6674 
o|contracted procedure: k6670 
o|contracted procedure: k6662 
o|contracted procedure: k6658 
o|contracted procedure: k6650 
o|contracted procedure: k6642 
o|contracted procedure: k6638 
o|contracted procedure: k6744 
o|contracted procedure: k6740 
o|contracted procedure: k6730 
o|contracted procedure: k6734 
o|contracted procedure: k6761 
o|contracted procedure: k6834 
o|contracted procedure: k6766 
o|contracted procedure: k6818 
o|contracted procedure: k6779 
o|contracted procedure: k6787 
o|contracted procedure: k6791 
o|contracted procedure: k6783 
o|contracted procedure: k6802 
o|contracted procedure: k6810 
o|contracted procedure: k6799 
o|contracted procedure: k6821 
o|contracted procedure: k6855 
o|contracted procedure: k6868 
o|contracted procedure: k6874 
o|contracted procedure: k6897 
o|contracted procedure: k6893 
o|contracted procedure: k6887 
o|contracted procedure: k6881 
o|contracted procedure: k6913 
o|contracted procedure: k6909 
o|contracted procedure: k7111 
o|contracted procedure: k6920 
o|contracted procedure: k6953 
o|contracted procedure: k6988 
o|contracted procedure: k6984 
o|contracted procedure: k6980 
o|contracted procedure: k6972 
o|contracted procedure: k6998 
o|contracted procedure: k7017 
o|contracted procedure: k7013 
o|contracted procedure: k7009 
o|contracted procedure: k7037 
o|contracted procedure: k7041 
o|contracted procedure: k7057 
o|contracted procedure: k7085 
o|contracted procedure: k7077 
o|contracted procedure: k7081 
o|contracted procedure: k7097 
o|contracted procedure: k7107 
o|contracted procedure: k7100 
o|contracted procedure: k7287 
o|contracted procedure: k7115 
o|contracted procedure: k7148 
o|contracted procedure: k7179 
o|contracted procedure: k7175 
o|contracted procedure: k7171 
o|contracted procedure: k7189 
o|contracted procedure: k7210 
o|contracted procedure: k7204 
o|contracted procedure: k7200 
o|contracted procedure: k7228 
o|contracted procedure: k7232 
o|contracted procedure: k7248 
o|contracted procedure: k7265 
o|contracted procedure: k7273 
o|contracted procedure: k7283 
o|contracted procedure: k7276 
o|contracted procedure: k7300 
o|contracted procedure: k7309 
o|contracted procedure: k7312 
o|contracted procedure: k7315 
o|contracted procedure: k7333 
o|contracted procedure: k7342 
o|contracted procedure: k7345 
o|contracted procedure: k7356 
o|contracted procedure: k7362 
o|contracted procedure: k7724 
o|contracted procedure: k7720 
o|contracted procedure: k7376 
o|contracted procedure: k7716 
o|contracted procedure: k7646 
o|contracted procedure: k7664 
o|contracted procedure: k7672 
o|contracted procedure: k7675 
o|contracted procedure: k7660 
o|contracted procedure: k7656 
o|contracted procedure: k7650 
o|contracted procedure: k7642 
o|contracted procedure: k7384 
o|contracted procedure: k7636 
o|contracted procedure: k7620 
o|contracted procedure: k7628 
o|contracted procedure: k7632 
o|contracted procedure: k7624 
o|contracted procedure: k7616 
o|contracted procedure: k7392 
o|contracted procedure: k7388 
o|contracted procedure: k7380 
o|contracted procedure: k7372 
o|contracted procedure: k7405 
o|contracted procedure: k7408 
o|contracted procedure: k7612 
o|contracted procedure: k7411 
o|contracted procedure: k7414 
o|contracted procedure: k7563 
o|contracted procedure: k7583 
o|contracted procedure: k7579 
o|contracted procedure: k7575 
o|contracted procedure: k7567 
o|contracted procedure: k7571 
o|contracted procedure: k7420 
o|contracted procedure: k7430 
o|contracted procedure: k7455 
o|contracted procedure: k7478 
o|contracted procedure: k7466 
o|contracted procedure: k7474 
o|contracted procedure: k7470 
o|contracted procedure: k7462 
o|contracted procedure: k7486 
o|contracted procedure: k7505 
o|contracted procedure: k7501 
o|contracted procedure: k7497 
o|contracted procedure: k7493 
o|contracted procedure: k7536 
o|contracted procedure: k7516 
o|contracted procedure: k7520 
o|contracted procedure: k7543 
o|contracted procedure: k7559 
o|contracted procedure: k7555 
o|contracted procedure: k7547 
o|contracted procedure: k7551 
o|contracted procedure: k7586 
o|contracted procedure: k7592 
o|contracted procedure: k7687 
o|contracted procedure: k7690 
o|contracted procedure: k7693 
o|contracted procedure: k7701 
o|contracted procedure: k7709 
o|contracted procedure: k7733 
o|contracted procedure: k7743 
o|contracted procedure: k7747 
o|contracted procedure: k7756 
o|contracted procedure: k7778 
o|contracted procedure: k7774 
o|contracted procedure: k7759 
o|contracted procedure: k7762 
o|contracted procedure: k7770 
o|contracted procedure: k7947 
o|contracted procedure: k7951 
o|contracted procedure: k7955 
o|contracted procedure: k7799 
o|contracted procedure: k7812 
o|contracted procedure: k7815 
o|contracted procedure: k7943 
o|contracted procedure: k7837 
o|contracted procedure: k7850 
o|contracted procedure: k7857 
o|contracted procedure: k7860 
o|contracted procedure: k7866 
o|contracted procedure: k7916 
o|contracted procedure: k7920 
o|contracted procedure: k7924 
o|contracted procedure: k7912 
o|contracted procedure: k7886 
o|contracted procedure: k7898 
o|contracted procedure: k7902 
o|contracted procedure: k7906 
o|contracted procedure: k7894 
o|contracted procedure: k7890 
o|contracted procedure: k7876 
o|contracted procedure: k7939 
o|contracted procedure: k7935 
o|contracted procedure: k7931 
o|contracted procedure: k8024 
o|contracted procedure: k8028 
o|contracted procedure: k8032 
o|contracted procedure: k7959 
o|contracted procedure: k8020 
o|contracted procedure: k8016 
o|contracted procedure: k7979 
o|contracted procedure: k7987 
o|contracted procedure: k7991 
o|contracted procedure: k8005 
o|contracted procedure: k7994 
o|contracted procedure: k7998 
o|contracted procedure: k7983 
o|contracted procedure: k8476 
o|contracted procedure: k8480 
o|contracted procedure: k8484 
o|contracted procedure: k8036 
o|contracted procedure: k8049 
o|contracted procedure: k8052 
o|contracted procedure: k8149 
o|contracted procedure: k8159 
o|contracted procedure: k8166 
o|contracted procedure: k8218 
o|contracted procedure: k8170 
o|contracted procedure: k8210 
o|contracted procedure: k8194 
o|contracted procedure: k8202 
o|contracted procedure: k8198 
o|contracted procedure: k8178 
o|contracted procedure: k8174 
o|contracted procedure: k8190 
o|contracted procedure: k8235 
o|contracted procedure: k8238 
o|contracted procedure: k8257 
o|contracted procedure: k8269 
o|contracted procedure: k8275 
o|contracted procedure: k8287 
o|contracted procedure: k8320 
o|contracted procedure: k8336 
o|contracted procedure: k8332 
o|contracted procedure: k8328 
o|contracted procedure: k8324 
o|contracted procedure: k8316 
o|contracted procedure: k8082 
o|contracted procedure: k8085 
o|contracted procedure: k8106 
o|contracted procedure: k8118 
o|contracted procedure: k8110 
o|contracted procedure: k8092 
o|contracted procedure: k8134 
o|contracted procedure: k8130 
o|contracted procedure: k8345 
o|contracted procedure: k8348 
o|contracted procedure: k8351 
o|contracted procedure: k8359 
o|contracted procedure: k8367 
o|contracted procedure: k8379 
o|contracted procedure: k8401 
o|contracted procedure: k8397 
o|contracted procedure: k8382 
o|contracted procedure: k8385 
o|contracted procedure: k8393 
o|contracted procedure: k8413 
o|contracted procedure: k8416 
o|contracted procedure: k8419 
o|contracted procedure: k8427 
o|contracted procedure: k8435 
o|contracted procedure: k8447 
o|contracted procedure: k8469 
o|contracted procedure: k8465 
o|contracted procedure: k8450 
o|contracted procedure: k8453 
o|contracted procedure: k8461 
o|contracted procedure: k8497 
o|contracted procedure: k8511 
o|contracted procedure: k8518 
o|contracted procedure: k8521 
o|contracted procedure: k8626 
o|contracted procedure: k8528 
o|contracted procedure: k8553 
o|contracted procedure: k8541 
o|contracted procedure: k8545 
o|contracted procedure: k8622 
o|contracted procedure: k8563 
o|contracted procedure: k8585 
o|contracted procedure: k8573 
o|contracted procedure: k8577 
o|contracted procedure: k8618 
o|contracted procedure: k8614 
o|contracted procedure: k8602 
o|contracted procedure: k8606 
o|contracted procedure: k8641 
o|contracted procedure: k8713 
o|contracted procedure: k8644 
o|contracted procedure: k8693 
o|contracted procedure: k8656 
o|contracted procedure: k8689 
o|contracted procedure: k8685 
o|contracted procedure: k8668 
o|contracted procedure: k8696 
o|contracted procedure: k8703 
o|contracted procedure: k8726 
o|contracted procedure: k8774 
o|contracted procedure: k8730 
o|contracted procedure: k8770 
o|contracted procedure: k8750 
o|contracted procedure: k8766 
o|contracted procedure: k8758 
o|contracted procedure: k8754 
o|contracted procedure: k8796 
o|contracted procedure: k8809 
o|contracted procedure: k8814 
o|contracted procedure: k8817 
o|contracted procedure: k8823 
o|contracted procedure: k8837 
o|contracted procedure: k8857 
o|contracted procedure: k8863 
o|contracted procedure: k8833 
o|contracted procedure: k8874 
o|contracted procedure: k8877 
o|contracted procedure: k8925 
o|contracted procedure: k8889 
o|contracted procedure: k8892 
o|contracted procedure: k8895 
o|contracted procedure: k8903 
o|contracted procedure: k8907 
o|contracted procedure: k8915 
o|contracted procedure: k8919 
o|contracted procedure: k8937 
o|contracted procedure: k8959 
o|contracted procedure: k8955 
o|contracted procedure: k8940 
o|contracted procedure: k8943 
o|contracted procedure: k8951 
o|contracted procedure: k8971 
o|contracted procedure: k8978 
o|contracted procedure: k8986 
o|contracted procedure: k8995 
o|contracted procedure: k9017 
o|contracted procedure: k9013 
o|contracted procedure: k8998 
o|contracted procedure: k9001 
o|contracted procedure: k9009 
o|contracted procedure: k9029 
o|contracted procedure: k9051 
o|contracted procedure: k9047 
o|contracted procedure: k9032 
o|contracted procedure: k9035 
o|contracted procedure: k9043 
o|contracted procedure: k9067 
o|contracted procedure: k9084 
o|contracted procedure: k9091 
o|contracted procedure: k9108 
o|contracted procedure: k9098 
o|contracted procedure: k9121 
o|contracted procedure: k9151 
o|contracted procedure: k9131 
o|contracted procedure: k9141 
o|contracted procedure: k9159 
o|contracted procedure: k9189 
o|contracted procedure: k9165 
o|contracted procedure: k9185 
o|contracted procedure: k9194 
o|contracted procedure: k9197 
o|contracted procedure: k9206 
o|contracted procedure: k9222 
o|contracted procedure: k9234 
o|contracted procedure: k9244 
o|contracted procedure: k9261 
o|contracted procedure: k9272 
o|contracted procedure: k9284 
o|contracted procedure: k9268 
o|contracted procedure: k9296 
o|contracted procedure: k9299 
o|contracted procedure: k9302 
o|contracted procedure: k9310 
o|contracted procedure: k9318 
o|contracted procedure: k9354 
o|contracted procedure: k9358 
o|contracted procedure: k9350 
o|contracted procedure: k9334 
o|contracted procedure: k9342 
o|contracted procedure: k9387 
o|contracted procedure: k9365 
o|contracted procedure: k9369 
o|contracted procedure: k9379 
o|contracted procedure: k9401 
o|contracted procedure: k9390 
o|contracted procedure: k9397 
o|contracted procedure: k9410 
o|contracted procedure: k9432 
o|contracted procedure: k9428 
o|contracted procedure: k9413 
o|contracted procedure: k9416 
o|contracted procedure: k9424 
o|contracted procedure: k9444 
o|contracted procedure: k9450 
o|contracted procedure: k9479 
o|contracted procedure: k9461 
o|inlining procedure: k9453 
o|inlining procedure: k9453 
o|contracted procedure: k9488 
o|contracted procedure: k9491 
o|contracted procedure: k9494 
o|contracted procedure: k9502 
o|contracted procedure: k9510 
o|contracted procedure: k9522 
o|contracted procedure: k9525 
o|contracted procedure: k9536 
o|contracted procedure: k9545 
o|inlining procedure: k9528 
o|contracted procedure: k9560 
o|contracted procedure: k9582 
o|contracted procedure: k9578 
o|contracted procedure: k9563 
o|contracted procedure: k9566 
o|contracted procedure: k9574 
o|contracted procedure: k9610 
o|contracted procedure: k9618 
o|contracted procedure: k9622 
o|contracted procedure: k9626 
o|contracted procedure: k9644 
o|contracted procedure: k9650 
o|contracted procedure: k9667 
o|contracted procedure: k9689 
o|contracted procedure: k9685 
o|contracted procedure: k9670 
o|contracted procedure: k9673 
o|contracted procedure: k9681 
o|contracted procedure: k9701 
o|contracted procedure: k9711 
o|contracted procedure: k9715 
o|contracted procedure: k9732 
o|contracted procedure: k9736 
o|contracted procedure: k9753 
o|contracted procedure: k9757 
o|contracted procedure: k9761 
o|contracted procedure: k9781 
o|contracted procedure: k9785 
o|contracted procedure: k9802 
o|contracted procedure: k9822 
o|contracted procedure: k9828 
o|contracted procedure: k9831 
o|contracted procedure: k9843 
o|contracted procedure: k9846 
o|contracted procedure: k9849 
o|contracted procedure: k9857 
o|contracted procedure: k9865 
o|contracted procedure: k9896 
o|contracted procedure: k9904 
o|contracted procedure: k9907 
o|contracted procedure: k9913 
o|contracted procedure: k9919 
o|contracted procedure: k9884 
o|contracted procedure: k9931 
o|contracted procedure: k9937 
o|contracted procedure: k9952 
o|contracted procedure: k9971 
o|contracted procedure: k9974 
o|contracted procedure: k9985 
o|contracted procedure: k9988 
o|contracted procedure: k9991 
o|contracted procedure: k10002 
o|contracted procedure: k10484 
o|contracted procedure: k10480 
o|contracted procedure: k10013 
o|contracted procedure: k10255 
o|contracted procedure: k10268 
o|contracted procedure: k10264 
o|contracted procedure: k10271 
o|contracted procedure: k10251 
o|contracted procedure: k10247 
o|contracted procedure: k10021 
o|contracted procedure: k10243 
o|contracted procedure: k10025 
o|contracted procedure: k10041 
o|contracted procedure: k10037 
o|contracted procedure: k10033 
o|contracted procedure: k10029 
o|contracted procedure: k10017 
o|contracted procedure: k10009 
o|contracted procedure: k9998 
o|contracted procedure: k9981 
o|contracted procedure: k10061 
o|contracted procedure: k10073 
o|contracted procedure: k10126 
o|contracted procedure: k10090 
o|contracted procedure: k10116 
o|contracted procedure: k10120 
o|contracted procedure: k10112 
o|contracted procedure: k10093 
o|contracted procedure: k10096 
o|contracted procedure: k10104 
o|contracted procedure: k10108 
o|contracted procedure: k10174 
o|contracted procedure: k10138 
o|contracted procedure: k10164 
o|contracted procedure: k10168 
o|contracted procedure: k10160 
o|contracted procedure: k10141 
o|contracted procedure: k10144 
o|contracted procedure: k10152 
o|contracted procedure: k10156 
o|contracted procedure: k10216 
o|contracted procedure: k10224 
o|contracted procedure: k10050 
o|contracted procedure: k10212 
o|contracted procedure: k10189 
o|contracted procedure: k10192 
o|contracted procedure: k10200 
o|contracted procedure: k10204 
o|contracted procedure: k10208 
o|contracted procedure: k10230 
o|contracted procedure: k10236 
o|contracted procedure: k10282 
o|contracted procedure: k10302 
o|contracted procedure: k10318 
o|contracted procedure: k10314 
o|contracted procedure: k10363 
o|contracted procedure: k10327 
o|contracted procedure: k10353 
o|contracted procedure: k10357 
o|contracted procedure: k10349 
o|contracted procedure: k10330 
o|contracted procedure: k10333 
o|contracted procedure: k10341 
o|contracted procedure: k10345 
o|contracted procedure: k10411 
o|contracted procedure: k10375 
o|contracted procedure: k10401 
o|contracted procedure: k10405 
o|contracted procedure: k10291 
o|contracted procedure: k10397 
o|contracted procedure: k10378 
o|contracted procedure: k10381 
o|contracted procedure: k10389 
o|contracted procedure: k10393 
o|contracted procedure: k10426 
o|contracted procedure: k10429 
o|contracted procedure: k10437 
o|contracted procedure: k10441 
o|contracted procedure: k10445 
o|contracted procedure: k10453 
o|contracted procedure: k10457 
o|contracted procedure: k10461 
o|contracted procedure: k10467 
o|contracted procedure: k10473 
o|contracted procedure: k10529 
o|contracted procedure: k10493 
o|contracted procedure: k10519 
o|contracted procedure: k10523 
o|contracted procedure: k10515 
o|contracted procedure: k10496 
o|contracted procedure: k10499 
o|contracted procedure: k10507 
o|contracted procedure: k10511 
o|contracted procedure: k10577 
o|contracted procedure: k10541 
o|contracted procedure: k10567 
o|contracted procedure: k10571 
o|contracted procedure: k10563 
o|contracted procedure: k10544 
o|contracted procedure: k10547 
o|contracted procedure: k10555 
o|contracted procedure: k10559 
o|contracted procedure: k10625 
o|contracted procedure: k10589 
o|contracted procedure: k10615 
o|contracted procedure: k10619 
o|contracted procedure: k10611 
o|contracted procedure: k10592 
o|contracted procedure: k10595 
o|contracted procedure: k10603 
o|contracted procedure: k10607 
o|contracted procedure: k10637 
o|contracted procedure: k10640 
o|contracted procedure: k10643 
o|contracted procedure: k10651 
o|contracted procedure: k10671 
o|contracted procedure: k10674 
o|contracted procedure: k10677 
o|contracted procedure: k10685 
o|contracted procedure: k10705 
o|contracted procedure: k10708 
o|contracted procedure: k10711 
o|contracted procedure: k10719 
o|contracted procedure: k10727 
o|contracted procedure: k10739 
o|contracted procedure: k10761 
o|contracted procedure: k10757 
o|contracted procedure: k10742 
o|contracted procedure: k10745 
o|contracted procedure: k10753 
o|contracted procedure: k10773 
o|contracted procedure: k10795 
o|contracted procedure: k10791 
o|contracted procedure: k10776 
o|contracted procedure: k10779 
o|contracted procedure: k10787 
o|contracted procedure: k10811 
o|contracted procedure: k10816 
o|contracted procedure: k10819 
o|contracted procedure: k10825 
o|contracted procedure: k10840 
o|contracted procedure: k11023 
o|contracted procedure: k10867 
o|contracted procedure: k11019 
o|contracted procedure: k10871 
o|contracted procedure: k10879 
o|contracted procedure: k10875 
o|contracted procedure: k10863 
o|contracted procedure: k10887 
o|contracted procedure: k10903 
o|contracted procedure: k10919 
o|contracted procedure: k10915 
o|contracted procedure: k10964 
o|contracted procedure: k10928 
o|contracted procedure: k10954 
o|contracted procedure: k10958 
o|contracted procedure: k10950 
o|contracted procedure: k10931 
o|contracted procedure: k10934 
o|contracted procedure: k10942 
o|contracted procedure: k10946 
o|contracted procedure: k11012 
o|contracted procedure: k10976 
o|contracted procedure: k11002 
o|contracted procedure: k11006 
o|contracted procedure: k10998 
o|contracted procedure: k10979 
o|contracted procedure: k10982 
o|contracted procedure: k10990 
o|contracted procedure: k10994 
o|contracted procedure: k11031 
o|contracted procedure: k11039 
o|contracted procedure: k11050 
o|contracted procedure: k11066 
o|contracted procedure: k11062 
o|contracted procedure: k11111 
o|contracted procedure: k11075 
o|contracted procedure: k11101 
o|contracted procedure: k11105 
o|contracted procedure: k11097 
o|contracted procedure: k11078 
o|contracted procedure: k11081 
o|contracted procedure: k11089 
o|contracted procedure: k11093 
o|contracted procedure: k11159 
o|contracted procedure: k11123 
o|contracted procedure: k11149 
o|contracted procedure: k11153 
o|contracted procedure: k11145 
o|contracted procedure: k11126 
o|contracted procedure: k11129 
o|contracted procedure: k11137 
o|contracted procedure: k11141 
o|contracted procedure: k11166 
o|contracted procedure: k11169 
o|contracted procedure: k11175 
o|contracted procedure: k11178 
o|contracted procedure: k11185 
o|contracted procedure: k11191 
o|contracted procedure: k11194 
o|contracted procedure: k11242 
o|contracted procedure: k11206 
o|contracted procedure: k11232 
o|contracted procedure: k11236 
o|contracted procedure: k11228 
o|contracted procedure: k11209 
o|contracted procedure: k11212 
o|contracted procedure: k11220 
o|contracted procedure: k11224 
o|contracted procedure: k11256 
o|contracted procedure: k11267 
o|contracted procedure: k11312 
o|contracted procedure: k11276 
o|contracted procedure: k11302 
o|contracted procedure: k11306 
o|contracted procedure: k11298 
o|contracted procedure: k11279 
o|contracted procedure: k11282 
o|contracted procedure: k11290 
o|contracted procedure: k11294 
o|contracted procedure: k11324 
o|contracted procedure: k11346 
o|contracted procedure: k11342 
o|contracted procedure: k11327 
o|contracted procedure: k11330 
o|contracted procedure: k11338 
o|contracted procedure: k11358 
o|contracted procedure: k11361 
o|contracted procedure: k11364 
o|contracted procedure: k11372 
o|contracted procedure: k11392 
o|contracted procedure: k11395 
o|contracted procedure: k11398 
o|contracted procedure: k11406 
o|contracted procedure: k11426 
o|contracted procedure: k11448 
o|contracted procedure: k11444 
o|contracted procedure: k11429 
o|contracted procedure: k11432 
o|contracted procedure: k11440 
o|contracted procedure: k11468 
o|contracted procedure: k11476 
o|contracted procedure: k11479 
o|contracted procedure: k11491 
o|contracted procedure: k11513 
o|contracted procedure: k11509 
o|contracted procedure: k11494 
o|contracted procedure: k11497 
o|contracted procedure: k11505 
o|contracted procedure: k11533 
o|contracted procedure: k11541 
o|contracted procedure: k11544 
o|contracted procedure: k11556 
o|contracted procedure: k11578 
o|contracted procedure: k11574 
o|contracted procedure: k11559 
o|contracted procedure: k11562 
o|contracted procedure: k11570 
o|contracted procedure: k11598 
o|contracted procedure: k11606 
o|contracted procedure: k11609 
o|contracted procedure: k11621 
o|contracted procedure: k11643 
o|contracted procedure: k11639 
o|contracted procedure: k11624 
o|contracted procedure: k11627 
o|contracted procedure: k11635 
o|contracted procedure: k11667 
o|contracted procedure: k11663 
o|contracted procedure: k11681 
o|contracted procedure: k11774 
o|contracted procedure: k11697 
o|contracted procedure: k11708 
o|contracted procedure: k11704 
o|contracted procedure: k11716 
o|contracted procedure: k11719 
o|contracted procedure: k11765 
o|contracted procedure: k11728 
o|contracted procedure: k11747 
o|contracted procedure: k11743 
o|contracted procedure: k11739 
o|contracted procedure: k11735 
o|contracted procedure: k11754 
o|contracted procedure: k11762 
o|contracted procedure: k11758 
o|contracted procedure: k11787 
o|contracted procedure: k11799 
o|contracted procedure: k11811 
o|contracted procedure: k11819 
o|contracted procedure: k11834 
o|contracted procedure: k11846 
o|contracted procedure: k11862 
o|contracted procedure: k11852 
o|inlining procedure: k11825 
o|inlining procedure: k11825 
o|inlining procedure: k11825 
o|contracted procedure: k11869 
o|contracted procedure: k12121 
o|contracted procedure: k11883 
o|contracted procedure: k12111 
o|contracted procedure: k12107 
o|contracted procedure: k12103 
o|contracted procedure: k12099 
o|contracted procedure: k11891 
o|contracted procedure: k12077 
o|contracted procedure: k12085 
o|contracted procedure: k12081 
o|contracted procedure: k12073 
o|contracted procedure: k11899 
o|contracted procedure: k11895 
o|contracted procedure: k11887 
o|contracted procedure: k11879 
o|contracted procedure: k11912 
o|contracted procedure: k11915 
o|contracted procedure: k12065 
o|contracted procedure: k11918 
o|contracted procedure: k12030 
o|contracted procedure: k12046 
o|contracted procedure: k12042 
o|contracted procedure: k12034 
o|contracted procedure: k12038 
o|contracted procedure: k11930 
o|contracted procedure: k11937 
o|contracted procedure: k11945 
o|contracted procedure: k11949 
o|contracted procedure: k11965 
o|contracted procedure: k11961 
o|contracted procedure: k11980 
o|contracted procedure: k11996 
o|contracted procedure: k11992 
o|contracted procedure: k11984 
o|contracted procedure: k11988 
o|contracted procedure: k11976 
o|contracted procedure: k12003 
o|contracted procedure: k12019 
o|contracted procedure: k12015 
o|contracted procedure: k12007 
o|contracted procedure: k12011 
o|contracted procedure: k12026 
o|contracted procedure: k12058 
o|contracted procedure: k12130 
o|contracted procedure: k12133 
o|contracted procedure: k12136 
o|contracted procedure: k12144 
o|contracted procedure: k12152 
o|contracted procedure: k12186 
o|contracted procedure: k12196 
o|contracted procedure: k12205 
o|contracted procedure: k12208 
o|contracted procedure: k12219 
o|contracted procedure: k12225 
o|contracted procedure: k12250 
o|contracted procedure: k12269 
o|contracted procedure: k12277 
o|contracted procedure: k12287 
o|contracted procedure: k12306 
o|contracted procedure: k12314 
o|contracted procedure: k12324 
o|contracted procedure: k12333 
o|contracted procedure: k12348 
o|contracted procedure: k12344 
o|contracted procedure: k12357 
o|contracted procedure: k12379 
o|contracted procedure: k12360 
o|contracted procedure: k12375 
o|contracted procedure: k12371 
o|contracted procedure: k12385 
o|contracted procedure: k12388 
o|contracted procedure: k12394 
o|contracted procedure: k12401 
o|contracted procedure: k12404 
o|contracted procedure: k12411 
o|contracted procedure: k12440 
o|contracted procedure: k12432 
o|contracted procedure: k12460 
o|contracted procedure: k12470 
o|contracted procedure: k12466 
o|contracted procedure: k12487 
o|contracted procedure: k12547 
o|contracted procedure: k12503 
o|contracted procedure: k12523 
o|contracted procedure: k12527 
o|contracted procedure: k12531 
o|contracted procedure: k12519 
o|contracted procedure: k12539 
o|contracted procedure: k12543 
o|contracted procedure: k12560 
o|contracted procedure: k12670 
o|contracted procedure: k12666 
o|contracted procedure: k12573 
o|contracted procedure: k12589 
o|contracted procedure: k12605 
o|contracted procedure: k12610 
o|contracted procedure: k12620 
o|contracted procedure: k12625 
o|contracted procedure: k12585 
o|contracted procedure: k12581 
o|contracted procedure: k12577 
o|contracted procedure: k12637 
o|contracted procedure: k12640 
o|contracted procedure: k12643 
o|contracted procedure: k12651 
o|contracted procedure: k12659 
o|contracted procedure: k13020 
o|contracted procedure: k12683 
o|contracted procedure: k12689 
o|contracted procedure: k12692 
o|contracted procedure: k12705 
o|contracted procedure: k12717 
o|contracted procedure: k12726 
o|contracted procedure: k12825 
o|contracted procedure: k12733 
o|contracted procedure: k12817 
o|contracted procedure: k12821 
o|contracted procedure: k12737 
o|contracted procedure: k12745 
o|contracted procedure: k12753 
o|contracted procedure: k12749 
o|contracted procedure: k12741 
o|contracted procedure: k12810 
o|contracted procedure: k12774 
o|contracted procedure: k12800 
o|contracted procedure: k12804 
o|contracted procedure: k12762 
o|contracted procedure: k12796 
o|contracted procedure: k12777 
o|contracted procedure: k12780 
o|contracted procedure: k12788 
o|contracted procedure: k12792 
o|contracted procedure: k12832 
o|contracted procedure: k12839 
o|contracted procedure: k12847 
o|contracted procedure: k12859 
o|contracted procedure: k12862 
o|contracted procedure: k12865 
o|contracted procedure: k12873 
o|contracted procedure: k12881 
o|contracted procedure: k12903 
o|contracted procedure: k12910 
o|contracted procedure: k12918 
o|contracted procedure: k12922 
o|contracted procedure: k12925 
o|contracted procedure: k12931 
o|contracted procedure: k12940 
o|contracted procedure: k12944 
o|contracted procedure: k12975 
o|contracted procedure: k12959 
o|contracted procedure: k12963 
o|contracted procedure: k12971 
o|contracted procedure: k12981 
o|contracted procedure: k12987 
o|contracted procedure: k12994 
o|contracted procedure: k13016 
o|contracted procedure: k13005 
o|contracted procedure: k13030 
o|contracted procedure: k13039 
o|contracted procedure: k13047 
o|contracted procedure: k13050 
o|contracted procedure: k13056 
o|contracted procedure: k13068 
o|contracted procedure: k13071 
o|contracted procedure: k13077 
o|contracted procedure: k13088 
o|contracted procedure: k13118 
o|contracted procedure: k13114 
o|contracted procedure: k13106 
o|contracted procedure: k13102 
o|contracted procedure: k13127 
o|contracted procedure: k13149 
o|contracted procedure: k13065 
o|contracted procedure: k13145 
o|contracted procedure: k13130 
o|contracted procedure: k13133 
o|contracted procedure: k13141 
o|contracted procedure: k13161 
o|contracted procedure: k13183 
o|contracted procedure: k13179 
o|contracted procedure: k13164 
o|contracted procedure: k13167 
o|contracted procedure: k13175 
o|contracted procedure: k13192 
o|contracted procedure: k13217 
o|contracted procedure: k13236 
o|contracted procedure: k13244 
o|contracted procedure: k13254 
o|contracted procedure: k13272 
o|contracted procedure: k13282 
o|contracted procedure: k13289 
o|contracted procedure: k13292 
o|contracted procedure: k13298 
o|contracted procedure: k13305 
o|contracted procedure: k13309 
o|contracted procedure: k13347 
o|contracted procedure: k13325 
o|contracted procedure: k13339 
o|contracted procedure: k13343 
o|contracted procedure: k13454 
o|contracted procedure: k13363 
o|contracted procedure: k13390 
o|contracted procedure: k13446 
o|contracted procedure: k13442 
o|contracted procedure: k13438 
o|contracted procedure: k13404 
o|contracted procedure: k13400 
o|contracted procedure: k13427 
o|contracted procedure: k13423 
o|contracted procedure: k13416 
o|contracted procedure: k13434 
o|contracted procedure: k13450 
o|contracted procedure: k13727 
o|contracted procedure: k13458 
o|contracted procedure: k13608 
o|contracted procedure: k13603 
o|contracted procedure: k13489 
o|contracted procedure: k13492 
o|contracted procedure: k13501 
o|contracted procedure: k13519 
o|contracted procedure: k13528 
o|contracted procedure: k13531 
o|contracted procedure: k13515 
o|contracted procedure: k13511 
o|contracted procedure: k13543 
o|contracted procedure: k13546 
o|contracted procedure: k13549 
o|contracted procedure: k13557 
o|contracted procedure: k13565 
o|contracted procedure: k13587 
o|contracted procedure: k13579 
o|contracted procedure: k13583 
o|contracted procedure: k13575 
o|contracted procedure: k13594 
o|contracted procedure: k13723 
o|contracted procedure: k13715 
o|contracted procedure: k13719 
o|contracted procedure: k13711 
o|contracted procedure: k13707 
o|contracted procedure: k13627 
o|contracted procedure: k13631 
o|contracted procedure: k13634 
o|contracted procedure: k13637 
o|contracted procedure: k13643 
o|contracted procedure: k13619 
o|contracted procedure: k13623 
o|contracted procedure: k13658 
o|contracted procedure: k13669 
o|contracted procedure: k13665 
o|contracted procedure: k13655 
o|contracted procedure: k13678 
o|contracted procedure: k13681 
o|contracted procedure: k13684 
o|contracted procedure: k13692 
o|contracted procedure: k13700 
o|contracted procedure: k13834 
o|contracted procedure: k13731 
o|contracted procedure: k13766 
o|contracted procedure: k13830 
o|contracted procedure: k13814 
o|contracted procedure: k13826 
o|contracted procedure: k13822 
o|contracted procedure: k13818 
o|contracted procedure: k13774 
o|contracted procedure: k13806 
o|contracted procedure: k13786 
o|contracted procedure: k13802 
o|contracted procedure: k13798 
o|contracted procedure: k13794 
o|contracted procedure: k13790 
o|contracted procedure: k13782 
o|contracted procedure: k13778 
o|contracted procedure: k13770 
o|contracted procedure: k13762 
o|contracted procedure: k13754 
o|simplifications: ((if . 5) (let . 245)) 
o|removed binding forms: 1121 
o|contracted procedure: k9327 
o|substituted constant variable: r1182615282 
o|substituted constant variable: r1182615283 
o|inlining procedure: k11969 
o|inlining procedure: k11969 
o|contracted procedure: k12330 
o|inlining procedure: k12601 
o|inlining procedure: k12601 
o|simplifications: ((let . 1)) 
o|removed binding forms: 4 
o|removed conditional forms: 2 
o|substituted constant variable: r1260215458 
o|replaced variables: 1 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|direct leaf routine/allocation: g30123021 0 
o|direct leaf routine/allocation: g19531964 30 
o|direct leaf routine/allocation: g638647 15 
o|contracted procedure: "(chicken-syntax.scm:1024) k7705" 
o|contracted procedure: "(chicken-syntax.scm:520) k10449" 
o|contracted procedure: "(chicken-syntax.scm:96) k13561" 
o|removed binding forms: 3 
o|customizable procedures: (parse-clause612 map-loop663680 k13495 map-loop632653 k13412 k13275 loop749770 loop749785 map-loop796814 map-loop824842 k12950 loop867 loop2881 map-loop891916 k12829 map-loop925949 g985994 map-loop9791001 k12354 loop11001121 loop11001131 g11741183 map-loop11681194 k11957 mapslots1204 k11825 map-loop12731294 map-loop13101331 map-loop13471368 map-loop13841401 g14171426 map-loop14111429 g14451454 map-loop14391457 map-loop14901507 map-loop14691514 loop1545 map-loop15261548 map-loop15601584 map-loop15961620 map-loop16321656 map-loop16681692 map-loop17141731 map-loop17411758 g17741783 map-loop17681786 g18021811 map-loop17961814 g18301839 map-loop18241842 map-loop18541873 map-loop18851904 map-loop19161935 k10423 map-loop19471974 map-loop19892013 map-loop20252049 k10186 map-loop20612088 map-loop21032127 map-loop21392163 g21892198 map-loop21832228 for-each-loop22642291 map-loop22742304 map-loop23352352 loop2360 g23792388 map-loop23732391 loop2401 map-loop24592477 fold2411 g24302439 map-loop24242442 fold2493 map-loop25122529 map-loop25382555 foldl25912601 map-loop25672606 map-loop26152634 k8647 k8659 fold2693 map-loop27672784 g28032812 map-loop27972815 map-loop28252842 g28602869 map-loop28542872 recur2737 make-if-tree2731 prefix-sym2791 recur2752 loop2920 map-loop29592976 g29862996 for-each-loop29852999 map-loop30063024 k7417 k7423 k7512 k7438 loop3031 loop3076 loop3106 k6772 k6795 k6429 guard-aux3191 map-loop32843305 genvars3276 foldr33273330 g33323333 k5999 build3352 map-loop33753394 loop137 loop3278 take) 
o|calls to known targets: 258 
o|identified direct recursive calls: f_4514 1 
o|identified direct recursive calls: f_4572 1 
o|identified direct recursive calls: f_6045 1 
o|identified direct recursive calls: f_5969 1 
o|identified direct recursive calls: f_7682 1 
o|identified direct recursive calls: f_7751 1 
o|identified direct recursive calls: f_8374 1 
o|identified direct recursive calls: f_8442 1 
o|identified direct recursive calls: f_8932 1 
o|identified direct recursive calls: f_8990 1 
o|identified direct recursive calls: f_9024 1 
o|identified direct recursive calls: f_9079 1 
o|identified direct recursive calls: f_9256 2 
o|identified direct recursive calls: f_9405 1 
o|identified direct recursive calls: f_9517 1 
o|identified direct recursive calls: f_9555 1 
o|identified direct recursive calls: f_9662 1 
o|identified direct recursive calls: f_10085 1 
o|identified direct recursive calls: f_10133 1 
o|identified direct recursive calls: f_10322 1 
o|identified direct recursive calls: f_10370 1 
o|identified direct recursive calls: f_10488 1 
o|identified direct recursive calls: f_10536 1 
o|identified direct recursive calls: f_10584 1 
o|identified direct recursive calls: f_10734 1 
o|identified direct recursive calls: f_10768 1 
o|identified direct recursive calls: f_10923 1 
o|identified direct recursive calls: f_10971 1 
o|identified direct recursive calls: f_11070 1 
o|identified direct recursive calls: f_11118 1 
o|identified direct recursive calls: f_11201 1 
o|identified direct recursive calls: f_11251 1 
o|identified direct recursive calls: f_11271 1 
o|identified direct recursive calls: f_11319 1 
o|identified direct recursive calls: f_11421 1 
o|identified direct recursive calls: f_11486 1 
o|identified direct recursive calls: f_11551 1 
o|identified direct recursive calls: f_11616 1 
o|identified direct recursive calls: f_12769 1 
o|identified direct recursive calls: f_12898 1 
o|identified direct recursive calls: f_12712 1 
o|identified direct recursive calls: f_13122 1 
o|identified direct recursive calls: f_13156 1 
o|identified direct recursive calls: f_13538 1 
o|fast box initializations: 82 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4514 
o|dropping unused closure argument: f_8244 
*/
/* end of file */
