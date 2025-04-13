/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
   uses: chicken-syntax extras data-structures expand internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[319];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,19),40,100,101,108,101,116,101,32,120,32,108,115,116,32,116,101,115,116,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,103,51,53,52,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,10),40,103,51,52,52,32,120,32,114,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,51,51,57,32,103,51,52,48,41,0};
static C_char li5[] C_aligned={C_lihdr(0,0,21),40,102,105,108,116,101,114,45,109,97,112,32,112,114,101,100,32,108,115,116,41,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,199),40,37,109,97,107,101,45,109,111,100,117,108,101,32,108,105,98,114,97,114,121,32,101,120,112,111,114,116,45,108,105,115,116,32,100,101,102,105,110,101,100,45,108,105,115,116,32,101,120,105,115,116,45,108,105,115,116,32,100,101,102,105,110,101,100,45,115,121,110,116,97,120,45,108,105,115,116,32,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,105,109,112,111,114,116,45,102,111,114,109,115,32,109,101,116,97,45,105,109,112,111,114,116,45,102,111,114,109,115,32,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,115,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,105,101,120,112,111,114,116,115,32,115,97,118,101,100,45,101,110,118,105,114,111,110,109,101,110,116,115,32,114,101,110,97,109,101,45,108,105,115,116,41,0};
static C_char li7[] C_aligned={C_lihdr(0,0,15),40,109,111,100,117,108,101,45,110,97,109,101,32,120,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,16),40,109,111,100,117,108,101,45,108,105,98,114,97,114,121,41};
static C_char li9[] C_aligned={C_lihdr(0,0,20),40,109,111,100,117,108,101,45,101,120,112,111,114,116,45,108,105,115,116,41,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,109,111,100,117,108,101,45,101,120,112,111,114,116,45,108,105,115,116,33,32,120,32,121,41,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,108,105,115,116,41,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,32,121,41,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,19),40,109,111,100,117,108,101,45,101,120,105,115,116,45,108,105,115,116,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,28),40,115,101,116,45,109,111,100,117,108,101,45,101,120,105,115,116,45,108,105,115,116,33,32,120,32,121,41,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,28),40,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,115,121,110,116,97,120,45,108,105,115,116,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,37),40,115,101,116,45,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,115,121,110,116,97,120,45,108,105,115,116,33,32,120,32,121,41,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,32),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,32,121,41};
static C_char li19[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,105,109,112,111,114,116,45,102,111,114,109,115,41,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,109,111,100,117,108,101,45,105,109,112,111,114,116,45,102,111,114,109,115,33,32,120,32,121,41,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,26),40,109,111,100,117,108,101,45,109,101,116,97,45,105,109,112,111,114,116,45,102,111,114,109,115,41,0,0,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,109,111,100,117,108,101,45,109,101,116,97,45,105,109,112,111,114,116,45,102,111,114,109,115,33,32,120,32,121,41,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,25),40,109,111,100,117,108,101,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,115,41,0,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,109,111,100,117,108,101,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,17),40,109,111,100,117,108,101,45,118,101,120,112,111,114,116,115,41,0,0,0,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,109,111,100,117,108,101,45,118,101,120,112,111,114,116,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,17),40,109,111,100,117,108,101,45,115,101,120,112,111,114,116,115,41,0,0,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,109,111,100,117,108,101,45,115,101,120,112,111,114,116,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,17),40,109,111,100,117,108,101,45,105,101,120,112,111,114,116,115,41,0,0,0,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,109,111,100,117,108,101,45,105,101,120,112,111,114,116,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,27),40,109,111,100,117,108,101,45,115,97,118,101,100,45,101,110,118,105,114,111,110,109,101,110,116,115,41,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,109,111,100,117,108,101,45,115,97,118,101,100,45,101,110,118,105,114,111,110,109,101,110,116,115,33,32,120,32,121,41,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,20),40,109,111,100,117,108,101,45,114,101,110,97,109,101,45,108,105,115,116,41,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,109,111,100,117,108,101,45,114,101,110,97,109,101,45,108,105,115,116,33,32,120,32,121,41,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,41};
static C_char li36[] C_aligned={C_lihdr(0,0,57),40,109,97,107,101,45,109,111,100,117,108,101,32,108,105,98,32,101,120,112,108,105,115,116,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,105,101,120,112,111,114,116,115,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,32,110,97,109,101,41};
static C_char li38[] C_aligned={C_lihdr(0,0,7),40,97,53,53,57,48,41,0};
static C_char li39[] C_aligned={C_lihdr(0,0,7),40,97,53,54,48,55,41,0};
static C_char li40[] C_aligned={C_lihdr(0,0,7),40,97,53,54,49,51,41,0};
static C_char li41[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,56,50,32,103,57,57,52,41,0,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,9),40,103,49,48,50,54,32,97,41,0,0,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,110,32,100,111,110,101,41,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,32,108,111,99,41,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,32,46,32,114,101,115,116,41,0};
static C_char li47[] C_aligned={C_lihdr(0,0,9),40,103,49,48,54,52,32,109,41,0,0,0,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,41,0,0,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,7),40,103,49,48,57,55,41,0};
static C_char li50[] C_aligned={C_lihdr(0,0,7),40,103,49,48,56,49,41,0};
static C_char li51[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,56,48,32,103,49,48,56,55,41,0,0,0,0,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,32,101,120,112,115,41,0,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,49,51,32,103,49,49,50,53,41,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,47,114,101,110,97,109,101,45,108,105,115,116,32,109,111,100,32,114,101,110,97,109,101,115,41,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,32,114,101,110,97,109,101,100,32,101,120,112,111,114,116,101,100,63,41,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,30),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,32,101,110,118,32,115,101,110,118,41,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41,0};
static C_char li59[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,118,97,108,41,0,0,0,0,0,0};
static C_char li60[] C_aligned={C_lihdr(0,0,11),40,97,54,50,49,56,32,120,32,121,41,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41};
static C_char li62[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,101,120,112,108,105,115,116,32,46,32,114,101,115,116,41,0};
static C_char li63[] C_aligned={C_lihdr(0,0,9),40,103,49,51,48,48,32,101,41,0,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,57,57,32,103,49,51,48,54,41,0,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,11),40,108,112,32,115,101,32,115,101,50,41,0,0,0,0,0};
static C_char li66[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,101,115,32,108,97,115,116,45,115,101,32,115,101,50,41,0,0};
static C_char li67[] C_aligned={C_lihdr(0,0,15),40,109,101,114,103,101,45,115,101,32,115,101,115,42,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,15),40,103,49,52,51,50,32,115,101,120,112,111,114,116,41,0};
static C_char li69[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,55,57,32,103,49,52,57,49,41,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,115,100,41,0,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,50,54,32,103,49,52,51,56,41,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,57,51,32,103,49,52,48,53,41,0,0,0,0};
static C_char li73[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,53,32,103,49,51,52,55,41,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,7),40,97,54,56,50,48,41,0};
static C_char li76[] C_aligned={C_lihdr(0,0,13),40,97,54,56,50,54,32,46,32,116,109,112,41,0,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,9),40,97,54,56,49,52,32,120,41,0,0,0,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,32,99,111,109,112,105,108,101,45,109,111,100,101,41,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,12),40,103,49,53,55,52,32,115,101,120,112,41,0,0,0,0};
static C_char li80[] C_aligned={C_lihdr(0,0,12),40,103,49,53,56,52,32,110,101,120,112,41,0,0,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,56,51,32,103,49,53,57,48,41,0,0,0,0,0,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,55,51,32,103,49,53,56,48,41,0,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,52,49,32,103,49,53,53,51,41,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,10),40,97,55,54,48,53,32,115,101,41,0,0,0,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,10),40,97,55,54,49,55,32,115,101,41,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,75),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,105,101,120,112,111,114,116,115,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,10),40,103,49,54,52,50,32,115,101,41,0,0,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,51,54,32,103,49,54,52,56,41,0,0,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,114,101,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li92[] C_aligned={C_lihdr(0,0,30),40,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,105,110,100,105,114,101,99,116,41,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,12),40,102,95,56,56,57,50,32,46,32,95,41,0,0,0,0};
static C_char li94[] C_aligned={C_lihdr(0,0,12),40,108,110,45,62,110,117,109,32,108,110,41,0,0,0,0};
static C_char li95[] C_aligned={C_lihdr(0,0,10),40,103,49,56,50,49,32,108,110,41,0,0,0,0,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,11),40,103,49,55,57,52,32,108,111,99,41,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,9),40,103,49,57,48,52,32,97,41,0,0,0,0,0,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,48,51,32,103,49,57,49,48,41,0,0,0,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,57,51,32,103,49,56,48,48,41,0,0,0,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,15),40,103,49,55,50,54,32,105,100,46,108,111,99,115,41,0};
static C_char li101[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,50,53,32,103,49,55,51,50,41,0,0,0,0,0,0,0};
static C_char li102[] C_aligned={C_lihdr(0,0,9),40,108,112,32,108,111,99,115,41,0,0,0,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,54,49,32,103,49,55,55,51,41,0,0,0,0};
static C_char li104[] C_aligned={C_lihdr(0,0,40),40,114,101,112,111,114,116,45,117,110,114,101,115,111,108,118,101,100,45,105,100,101,110,116,105,102,105,101,114,115,32,117,110,107,110,111,119,110,115,41};
static C_char li105[] C_aligned={C_lihdr(0,0,7),40,103,49,57,57,54,41,0};
static C_char li106[] C_aligned={C_lihdr(0,0,9),40,103,50,48,53,49,32,109,41,0,0,0,0,0,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,53,48,32,103,50,48,53,55,41,0,0,0,0,0,0,0};
static C_char li108[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,49,53,32,103,50,48,50,55,41,0,0,0,0};
static C_char li109[] C_aligned={C_lihdr(0,0,13),40,119,97,114,110,32,109,115,103,32,105,100,41,0,0,0};
static C_char li110[] C_aligned={C_lihdr(0,0,9),40,103,49,50,54,50,32,97,41,0,0,0,0,0,0,0};
static C_char li111[] C_aligned={C_lihdr(0,0,9),40,103,49,50,54,57,32,97,41,0,0,0,0,0,0,0};
static C_char li112[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,41};
static C_char li113[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,120,112,111,114,116,115,41,0,0};
static C_char li114[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,57,53,32,103,50,48,48,50,41,0,0,0,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,10),40,102,97,105,108,32,109,115,103,41,0,0,0,0,0,0};
static C_char li116[] C_aligned={C_lihdr(0,0,11),40,105,100,45,115,116,114,105,110,103,41,0,0,0,0,0};
static C_char li117[] C_aligned={C_lihdr(0,0,12),40,103,49,57,56,54,32,116,121,112,101,41,0,0,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,108,41,0,0,0,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char li120[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,121,109,115,41,0,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,7),40,97,56,57,49,48,41,0};
static C_char li123[] C_aligned={C_lihdr(0,0,7),40,97,56,57,54,54,41,0};
static C_char li124[] C_aligned={C_lihdr(0,0,7),40,97,56,57,55,50,41,0};
static C_char li125[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,119,105,116,104,45,101,110,118,105,114,111,110,109,101,110,116,32,116,104,117,110,107,41,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,7),40,97,57,48,50,49,41,0};
static C_char li127[] C_aligned={C_lihdr(0,0,7),40,97,57,48,50,54,41,0};
static C_char li128[] C_aligned={C_lihdr(0,0,7),40,97,57,48,51,53,41,0};
static C_char li129[] C_aligned={C_lihdr(0,0,7),40,97,57,48,49,53,41,0};
static C_char li130[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,36),40,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,108,105,98,32,108,111,99,41,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,17),40,119,97,114,110,32,109,115,103,32,109,111,100,32,105,100,41,0,0,0,0,0,0,0};
static C_char li133[] C_aligned={C_lihdr(0,0,9),40,116,111,115,116,114,32,120,41,0,0,0,0,0,0,0};
static C_char li134[] C_aligned={C_lihdr(0,0,7),40,103,50,50,49,50,41,0};
static C_char li135[] C_aligned={C_lihdr(0,0,9),40,103,50,49,57,52,32,97,41,0,0,0,0,0,0,0};
static C_char li136[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,56,56,32,103,50,50,48,48,41,0,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,23),40,101,120,112,111,114,116,45,114,101,110,97,109,101,32,109,111,100,32,108,115,116,41,0};
static C_char li138[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,105,109,112,111,114,116,115,32,110,97,109,101,41,0,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,7),40,97,57,51,50,50,41,0};
static C_char li140[] C_aligned={C_lihdr(0,0,10),40,103,50,50,55,57,32,105,100,41,0,0,0,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,55,56,32,103,50,50,56,53,41,0,0,0,0,0,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,9),40,103,50,50,57,57,32,97,41,0,0,0,0,0,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,9),40,103,50,51,48,51,32,97,41,0,0,0,0,0,0,0};
static C_char li144[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,100,115,32,118,32,115,32,109,105,115,115,105,110,103,41,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,60),40,97,57,51,51,50,32,110,97,109,101,50,50,52,48,32,108,105,98,50,50,52,50,32,115,112,101,99,50,50,52,52,32,105,109,112,118,50,50,52,54,32,105,109,112,115,50,50,52,56,32,105,109,112,105,50,50,53,48,41,0,0,0,0};
static C_char li146[] C_aligned={C_lihdr(0,0,7),40,97,57,52,55,50,41,0};
static C_char li147[] C_aligned={C_lihdr(0,0,10),40,103,50,51,53,55,32,105,100,41,0,0,0,0,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,53,54,32,103,50,51,54,51,41,0,0,0,0,0,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,10),40,103,50,51,55,55,32,105,100,41,0,0,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,115,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,10),40,103,50,51,56,50,32,105,100,41,0,0,0,0,0,0};
static C_char li152[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,118,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0};
static C_char li153[] C_aligned={C_lihdr(0,0,60),40,97,57,52,56,50,32,110,97,109,101,50,51,49,48,32,108,105,98,50,51,49,50,32,115,112,101,99,50,51,49,52,32,105,109,112,118,50,51,49,54,32,105,109,112,115,50,51,49,56,32,105,109,112,105,50,51,50,48,41,0,0,0,0};
static C_char li154[] C_aligned={C_lihdr(0,0,7),40,97,57,54,53,53,41,0};
static C_char li155[] C_aligned={C_lihdr(0,0,10),40,103,50,52,51,54,32,105,100,41,0,0,0,0,0,0};
static C_char li156[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,51,53,32,103,50,52,52,50,41,0,0,0,0,0,0,0};
static C_char li157[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,52,56,32,103,50,52,54,48,41,0,0,0,0};
static C_char li158[] C_aligned={C_lihdr(0,0,9),40,103,50,52,56,50,32,97,41,0,0,0,0,0,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,115,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,9),40,103,50,52,56,55,32,97,41,0,0,0,0,0,0,0};
static C_char li161[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,118,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,60),40,97,57,54,54,53,32,110,97,109,101,50,51,56,57,32,108,105,98,50,51,57,49,32,115,112,101,99,50,51,57,51,32,105,109,112,118,50,51,57,53,32,105,109,112,115,50,51,57,55,32,105,109,112,105,50,51,57,57,41,0,0,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,7),40,97,57,57,48,53,41,0};
static C_char li164[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,105,109,112,41,0,0,0,0};
static C_char li165[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,53,51,32,103,50,53,54,53,41,0,0,0,0};
static C_char li166[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,50,55,32,103,50,53,51,57,41,0,0,0,0};
static C_char li167[] C_aligned={C_lihdr(0,0,60),40,97,57,57,49,53,32,110,97,109,101,50,52,57,52,32,108,105,98,50,52,57,54,32,115,112,101,99,50,52,57,56,32,105,109,112,118,50,53,48,48,32,105,109,112,115,50,53,48,50,32,105,109,112,105,50,53,48,52,41,0,0,0,0};
static C_char li168[] C_aligned={C_lihdr(0,0,9),40,111,117,116,101,114,32,120,41,0,0,0,0,0,0,0};
static C_char li169[] C_aligned={C_lihdr(0,0,9),40,97,57,50,50,51,32,107,41,0,0,0,0,0,0,0};
static C_char li170[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,105,109,112,111,114,116,32,120,32,114,32,99,32,108,111,99,41,0,0,0,0,0,0};
static C_char li171[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,55,48,41};
static C_char li172[] C_aligned={C_lihdr(0,0,50),40,97,49,48,48,55,54,32,110,97,109,101,50,54,48,54,32,95,50,54,48,56,32,115,112,101,99,50,54,49,48,32,118,50,54,49,50,32,115,50,54,49,52,32,105,50,54,49,54,41,0,0,0,0,0,0};
static C_char li173[] C_aligned={C_lihdr(0,0,9),40,103,50,53,57,54,32,120,41,0,0,0,0,0,0,0};
static C_char li174[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,57,53,32,103,50,54,48,50,41,0,0,0,0,0,0,0};
static C_char li175[] C_aligned={C_lihdr(0,0,65),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,32,114,32,99,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li176[] C_aligned={C_lihdr(0,0,11),40,103,50,54,53,55,32,105,109,112,41,0,0,0,0,0};
static C_char li177[] C_aligned={C_lihdr(0,0,11),40,103,50,54,54,55,32,105,109,112,41,0,0,0,0,0};
static C_char li178[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,51,56,32,103,50,55,53,48,41,0,0,0,0};
static C_char li179[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,49,50,32,103,50,55,50,52,41,0,0,0,0};
static C_char li180[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,57,50,32,103,50,56,48,52,41,0,0,0,0};
static C_char li181[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,54,54,32,103,50,55,55,56,41,0,0,0,0};
static C_char li182[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,54,54,32,103,50,54,55,51,41,0,0,0,0,0,0,0};
static C_char li183[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,53,54,32,103,50,54,54,51,41,0,0,0,0,0,0,0};
static C_char li184[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,105,109,112,111,114,116,32,115,112,101,99,32,118,115,118,32,118,115,115,32,118,115,105,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0};
static C_char li185[] C_aligned={C_lihdr(0,0,26),40,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,32,112,114,101,102,105,120,41,0,0,0,0,0,0};
static C_char li186[] C_aligned={C_lihdr(0,0,9),40,103,49,50,48,52,32,97,41,0,0,0,0,0,0,0};
static C_char li187[] C_aligned={C_lihdr(0,0,11),40,103,50,56,52,57,32,109,111,100,41,0,0,0,0,0};
static C_char li188[] C_aligned={C_lihdr(0,0,13),40,109,114,101,110,97,109,101,32,115,121,109,41,0,0,0};
static C_char li189[] C_aligned={C_lihdr(0,0,9),40,103,50,56,54,48,32,97,41,0,0,0,0,0,0,0};
static C_char li190[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,32,97,115,115,105,103,110,32,119,104,101,114,101,41,0,0,0,0,0,0};
static C_char li191[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char li192[] C_aligned={C_lihdr(0,0,12),40,105,102,97,99,101,32,110,97,109,101,41,0,0,0,0};
static C_char li193[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,108,115,116,41,0,0,0,0,0};
static C_char li194[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,120,112,115,41,0,0,0,0,0,0};
static C_char li195[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li196[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,97,114,103,115,32,102,101,120,112,115,32,98,111,100,121,41,0,0};
static C_char li197[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char li198[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,51,56,32,103,50,57,53,48,41,0,0,0,0};
static C_char li199[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char li200[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,102,97,115,41,0,0,0,0,0};
static C_char li201[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,115,32,102,97,115,41,0,0,0};
static C_char li202[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,110,97,109,101,32,97,114,103,115,41,0,0,0,0,0};
static C_char li203[] C_aligned={C_lihdr(0,0,11),40,103,50,57,57,57,32,101,120,112,41,0,0,0,0,0};
static C_char li204[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,50,48,32,103,51,48,51,50,41,0,0,0,0};
static C_char li205[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,57,56,32,103,51,48,48,53,41,0,0,0,0,0,0,0};
static C_char li206[] C_aligned={C_lihdr(0,0,46),40,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,110,97,109,101,32,109,110,97,109,101,32,101,120,112,115,32,102,110,97,109,101,41,0,0};
static C_char li207[] C_aligned={C_lihdr(0,0,7),40,103,51,48,54,50,41,0};
static C_char li208[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,53,54,32,103,51,48,54,56,41,0,0,0,0};
static C_char li209[] C_aligned={C_lihdr(0,0,21),40,115,101,45,115,117,98,115,101,116,32,110,97,109,101,115,32,101,110,118,41,0,0,0};
static C_char li210[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,111,100,117,108,101,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,32,46,32,114,101,115,116,41};
static C_char li211[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li212[] C_aligned={C_lihdr(0,0,8),40,100,101,108,109,111,100,41};
static C_char li213[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,49,54,32,103,51,49,50,56,41,0,0,0,0};
static C_char li214[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,48,55,41};
static C_char li215[] C_aligned={C_lihdr(0,0,33),40,115,99,104,101,109,101,46,101,118,97,108,35,101,110,118,105,114,111,110,109,101,110,116,32,46,32,115,112,101,99,115,41,0,0,0,0,0,0,0};
static C_char li216[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f12337)
static void C_ccall f12337(C_word c,C_word *av) C_noret;
C_noret_decl(f12341)
static void C_ccall f12341(C_word c,C_word *av) C_noret;
C_noret_decl(f13052)
static void C_ccall f13052(C_word c,C_word *av) C_noret;
C_noret_decl(f13056)
static void C_ccall f13056(C_word c,C_word *av) C_noret;
C_noret_decl(f_10002)
static void C_ccall f_10002(C_word c,C_word *av) C_noret;
C_noret_decl(f_10011)
static void f_10011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10036)
static void C_ccall f_10036(C_word c,C_word *av) C_noret;
C_noret_decl(f_10054)
static void C_ccall f_10054(C_word c,C_word *av) C_noret;
C_noret_decl(f_10060)
static void C_ccall f_10060(C_word c,C_word *av) C_noret;
C_noret_decl(f_10064)
static void C_ccall f_10064(C_word c,C_word *av) C_noret;
C_noret_decl(f_10065)
static void f_10065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10071)
static void C_ccall f_10071(C_word c,C_word *av) C_noret;
C_noret_decl(f_10077)
static void C_ccall f_10077(C_word c,C_word *av) C_noret;
C_noret_decl(f_10099)
static void C_ccall f_10099(C_word c,C_word *av) C_noret;
C_noret_decl(f_10101)
static void f_10101(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10111)
static void C_ccall f_10111(C_word c,C_word *av) C_noret;
C_noret_decl(f_10124)
static void C_ccall f_10124(C_word c,C_word *av) C_noret;
C_noret_decl(f_10128)
static void C_ccall f_10128(C_word c,C_word *av) C_noret;
C_noret_decl(f_10131)
static void C_ccall f_10131(C_word c,C_word *av) C_noret;
C_noret_decl(f_10141)
static void f_10141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10148)
static void C_ccall f_10148(C_word c,C_word *av) C_noret;
C_noret_decl(f_10179)
static void C_ccall f_10179(C_word c,C_word *av) C_noret;
C_noret_decl(f_10185)
static void C_ccall f_10185(C_word c,C_word *av) C_noret;
C_noret_decl(f_10186)
static void f_10186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10193)
static void C_ccall f_10193(C_word c,C_word *av) C_noret;
C_noret_decl(f_10226)
static void C_ccall f_10226(C_word c,C_word *av) C_noret;
C_noret_decl(f_10232)
static void C_ccall f_10232(C_word c,C_word *av) C_noret;
C_noret_decl(f_10235)
static void f_10235(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10238)
static void C_ccall f_10238(C_word c,C_word *av) C_noret;
C_noret_decl(f_10245)
static void C_ccall f_10245(C_word c,C_word *av) C_noret;
C_noret_decl(f_10249)
static void C_ccall f_10249(C_word c,C_word *av) C_noret;
C_noret_decl(f_10253)
static void C_ccall f_10253(C_word c,C_word *av) C_noret;
C_noret_decl(f_10257)
static void C_ccall f_10257(C_word c,C_word *av) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word *av) C_noret;
C_noret_decl(f_10266)
static void C_ccall f_10266(C_word c,C_word *av) C_noret;
C_noret_decl(f_10269)
static void C_ccall f_10269(C_word c,C_word *av) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word *av) C_noret;
C_noret_decl(f_10286)
static void C_ccall f_10286(C_word c,C_word *av) C_noret;
C_noret_decl(f_10293)
static void C_ccall f_10293(C_word c,C_word *av) C_noret;
C_noret_decl(f_10304)
static void C_ccall f_10304(C_word c,C_word *av) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word *av) C_noret;
C_noret_decl(f_10313)
static void f_10313(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10347)
static void f_10347(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10383)
static void C_ccall f_10383(C_word c,C_word *av) C_noret;
C_noret_decl(f_10394)
static void C_ccall f_10394(C_word c,C_word *av) C_noret;
C_noret_decl(f_10408)
static void C_ccall f_10408(C_word c,C_word *av) C_noret;
C_noret_decl(f_10415)
static void C_ccall f_10415(C_word c,C_word *av) C_noret;
C_noret_decl(f_10417)
static void f_10417(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10451)
static void f_10451(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10491)
static void f_10491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10501)
static void C_ccall f_10501(C_word c,C_word *av) C_noret;
C_noret_decl(f_10514)
static void f_10514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10524)
static void C_ccall f_10524(C_word c,C_word *av) C_noret;
C_noret_decl(f_10545)
static void C_ccall f_10545(C_word c,C_word *av) C_noret;
C_noret_decl(f_10560)
static void C_ccall f_10560(C_word c,C_word *av) C_noret;
C_noret_decl(f_10570)
static void f_10570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10578)
static void C_ccall f_10578(C_word c,C_word *av) C_noret;
C_noret_decl(f_10582)
static void C_ccall f_10582(C_word c,C_word *av) C_noret;
C_noret_decl(f_10586)
static void C_ccall f_10586(C_word c,C_word *av) C_noret;
C_noret_decl(f_10588)
static void C_ccall f_10588(C_word c,C_word *av) C_noret;
C_noret_decl(f_10591)
static void f_10591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10595)
static void C_ccall f_10595(C_word c,C_word *av) C_noret;
C_noret_decl(f_10599)
static void f_10599(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10606)
static void C_ccall f_10606(C_word c,C_word *av) C_noret;
C_noret_decl(f_10613)
static void C_ccall f_10613(C_word c,C_word *av) C_noret;
C_noret_decl(f_10634)
static void f_10634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10660)
static void C_ccall f_10660(C_word c,C_word *av) C_noret;
C_noret_decl(f_10662)
static void C_ccall f_10662(C_word c,C_word *av) C_noret;
C_noret_decl(f_10665)
static void f_10665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10671)
static void f_10671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10712)
static void f_10712(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10744)
static void C_ccall f_10744(C_word c,C_word *av) C_noret;
C_noret_decl(f_10770)
static void C_ccall f_10770(C_word c,C_word *av) C_noret;
C_noret_decl(f_10791)
static void C_ccall f_10791(C_word c,C_word *av) C_noret;
C_noret_decl(f_10795)
static void C_ccall f_10795(C_word c,C_word *av) C_noret;
C_noret_decl(f_10821)
static void f_10821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10835)
static void C_ccall f_10835(C_word c,C_word *av) C_noret;
C_noret_decl(f_10877)
static void C_ccall f_10877(C_word c,C_word *av) C_noret;
C_noret_decl(f_10893)
static void C_ccall f_10893(C_word c,C_word *av) C_noret;
C_noret_decl(f_10901)
static void f_10901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10908)
static void C_ccall f_10908(C_word c,C_word *av) C_noret;
C_noret_decl(f_10918)
static void f_10918(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10940)
static void C_ccall f_10940(C_word c,C_word *av) C_noret;
C_noret_decl(f_10942)
static void f_10942(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10981)
static void C_ccall f_10981(C_word c,C_word *av) C_noret;
C_noret_decl(f_11002)
static void f_11002(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11014)
static void f_11014(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11037)
static void C_ccall f_11037(C_word c,C_word *av) C_noret;
C_noret_decl(f_11040)
static void C_ccall f_11040(C_word c,C_word *av) C_noret;
C_noret_decl(f_11051)
static void C_ccall f_11051(C_word c,C_word *av) C_noret;
C_noret_decl(f_11057)
static void C_ccall f_11057(C_word c,C_word *av) C_noret;
C_noret_decl(f_11089)
static void C_ccall f_11089(C_word c,C_word *av) C_noret;
C_noret_decl(f_11092)
static void C_ccall f_11092(C_word c,C_word *av) C_noret;
C_noret_decl(f_11103)
static void C_ccall f_11103(C_word c,C_word *av) C_noret;
C_noret_decl(f_11119)
static void f_11119(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11123)
static void C_ccall f_11123(C_word c,C_word *av) C_noret;
C_noret_decl(f_11130)
static void f_11130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11143)
static void f_11143(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11170)
static void C_ccall f_11170(C_word c,C_word *av) C_noret;
C_noret_decl(f_11183)
static void C_ccall f_11183(C_word c,C_word *av) C_noret;
C_noret_decl(f_11187)
static void C_ccall f_11187(C_word c,C_word *av) C_noret;
C_noret_decl(f_11191)
static void C_ccall f_11191(C_word c,C_word *av) C_noret;
C_noret_decl(f_11195)
static void C_ccall f_11195(C_word c,C_word *av) C_noret;
C_noret_decl(f_11209)
static void C_ccall f_11209(C_word c,C_word *av) C_noret;
C_noret_decl(f_11215)
static void C_ccall f_11215(C_word c,C_word *av) C_noret;
C_noret_decl(f_11217)
static void f_11217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11242)
static void C_ccall f_11242(C_word c,C_word *av) C_noret;
C_noret_decl(f_11251)
static void f_11251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11261)
static void C_ccall f_11261(C_word c,C_word *av) C_noret;
C_noret_decl(f_11276)
static void C_ccall f_11276(C_word c,C_word *av) C_noret;
C_noret_decl(f_11279)
static void C_ccall f_11279(C_word c,C_word *av) C_noret;
C_noret_decl(f_11282)
static void C_ccall f_11282(C_word c,C_word *av) C_noret;
C_noret_decl(f_11285)
static void C_ccall f_11285(C_word c,C_word *av) C_noret;
C_noret_decl(f_11288)
static void C_ccall f_11288(C_word c,C_word *av) C_noret;
C_noret_decl(f_11291)
static void C_ccall f_11291(C_word c,C_word *av) C_noret;
C_noret_decl(f_11293)
static void C_ccall f_11293(C_word c,C_word *av) C_noret;
C_noret_decl(f_11298)
static C_word f_11298(C_word t0,C_word t1);
C_noret_decl(f_11310)
static void f_11310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11345)
static void C_ccall f_11345(C_word c,C_word *av) C_noret;
C_noret_decl(f_11348)
static void C_ccall f_11348(C_word c,C_word *av) C_noret;
C_noret_decl(f_11351)
static void C_ccall f_11351(C_word c,C_word *av) C_noret;
C_noret_decl(f_11354)
static void C_ccall f_11354(C_word c,C_word *av) C_noret;
C_noret_decl(f_11357)
static void C_ccall f_11357(C_word c,C_word *av) C_noret;
C_noret_decl(f_11360)
static void C_ccall f_11360(C_word c,C_word *av) C_noret;
C_noret_decl(f_11363)
static void C_ccall f_11363(C_word c,C_word *av) C_noret;
C_noret_decl(f_11366)
static void C_ccall f_11366(C_word c,C_word *av) C_noret;
C_noret_decl(f_11369)
static void C_ccall f_11369(C_word c,C_word *av) C_noret;
C_noret_decl(f_11372)
static void C_ccall f_11372(C_word c,C_word *av) C_noret;
C_noret_decl(f_11375)
static void C_ccall f_11375(C_word c,C_word *av) C_noret;
C_noret_decl(f_11378)
static void C_ccall f_11378(C_word c,C_word *av) C_noret;
C_noret_decl(f_11381)
static void C_ccall f_11381(C_word c,C_word *av) C_noret;
C_noret_decl(f_11384)
static void C_ccall f_11384(C_word c,C_word *av) C_noret;
C_noret_decl(f_11387)
static void C_ccall f_11387(C_word c,C_word *av) C_noret;
C_noret_decl(f_11390)
static void C_ccall f_11390(C_word c,C_word *av) C_noret;
C_noret_decl(f_11393)
static void C_ccall f_11393(C_word c,C_word *av) C_noret;
C_noret_decl(f_11396)
static void C_ccall f_11396(C_word c,C_word *av) C_noret;
C_noret_decl(f_11399)
static void C_ccall f_11399(C_word c,C_word *av) C_noret;
C_noret_decl(f_11402)
static void C_ccall f_11402(C_word c,C_word *av) C_noret;
C_noret_decl(f_11405)
static void C_ccall f_11405(C_word c,C_word *av) C_noret;
C_noret_decl(f_11407)
static void C_ccall f_11407(C_word c,C_word *av) C_noret;
C_noret_decl(f_11414)
static void C_ccall f_11414(C_word c,C_word *av) C_noret;
C_noret_decl(f_11443)
static void C_ccall f_11443(C_word c,C_word *av) C_noret;
C_noret_decl(f_11447)
static void C_ccall f_11447(C_word c,C_word *av) C_noret;
C_noret_decl(f_11449)
static void C_ccall f_11449(C_word c,C_word *av) C_noret;
C_noret_decl(f_11460)
static void C_ccall f_11460(C_word c,C_word *av) C_noret;
C_noret_decl(f_11468)
static void f_11468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11495)
static void C_ccall f_11495(C_word c,C_word *av) C_noret;
C_noret_decl(f_11508)
static void C_ccall f_11508(C_word c,C_word *av) C_noret;
C_noret_decl(f_11512)
static void C_ccall f_11512(C_word c,C_word *av) C_noret;
C_noret_decl(f_11515)
static void C_ccall f_11515(C_word c,C_word *av) C_noret;
C_noret_decl(f_11555)
static void C_ccall f_11555(C_word c,C_word *av) C_noret;
C_noret_decl(f_11557)
static void f_11557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11592)
static void C_ccall f_11592(C_word c,C_word *av) C_noret;
C_noret_decl(f_11595)
static void C_ccall f_11595(C_word c,C_word *av) C_noret;
C_noret_decl(f_11598)
static void C_ccall f_11598(C_word c,C_word *av) C_noret;
C_noret_decl(f_11601)
static void C_ccall f_11601(C_word c,C_word *av) C_noret;
C_noret_decl(f_11604)
static void C_ccall f_11604(C_word c,C_word *av) C_noret;
C_noret_decl(f_11607)
static void C_ccall f_11607(C_word c,C_word *av) C_noret;
C_noret_decl(f_11610)
static void C_ccall f_11610(C_word c,C_word *av) C_noret;
C_noret_decl(f_11614)
static void C_ccall f_11614(C_word c,C_word *av) C_noret;
C_noret_decl(f_11618)
static void C_ccall f_11618(C_word c,C_word *av) C_noret;
C_noret_decl(f_11622)
static void C_ccall f_11622(C_word c,C_word *av) C_noret;
C_noret_decl(f_11626)
static void C_ccall f_11626(C_word c,C_word *av) C_noret;
C_noret_decl(f_11638)
static void C_ccall f_11638(C_word c,C_word *av) C_noret;
C_noret_decl(f_11642)
static void C_ccall f_11642(C_word c,C_word *av) C_noret;
C_noret_decl(f_11646)
static void C_ccall f_11646(C_word c,C_word *av) C_noret;
C_noret_decl(f_11650)
static void C_ccall f_11650(C_word c,C_word *av) C_noret;
C_noret_decl(f_11654)
static void C_ccall f_11654(C_word c,C_word *av) C_noret;
C_noret_decl(f_11658)
static void C_ccall f_11658(C_word c,C_word *av) C_noret;
C_noret_decl(f_11662)
static void C_ccall f_11662(C_word c,C_word *av) C_noret;
C_noret_decl(f_11666)
static void C_ccall f_11666(C_word c,C_word *av) C_noret;
C_noret_decl(f_11670)
static void C_ccall f_11670(C_word c,C_word *av) C_noret;
C_noret_decl(f_11674)
static void C_ccall f_11674(C_word c,C_word *av) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word *av) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word *av) C_noret;
C_noret_decl(f_4465)
static void f_4465(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4471)
static void f_4471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word *av) C_noret;
C_noret_decl(f_4546)
static void f_4546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word *av) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word *av) C_noret;
C_noret_decl(f_4629)
static void f_4629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4638)
static void f_4638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4646)
static void f_4646(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static C_word f_4654(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word *av) C_noret;
C_noret_decl(f_5266)
static C_word f_5266(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13,C_word t14,C_word t15);
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word *av) C_noret;
C_noret_decl(f_5287)
static C_word f_5287(C_word t0,C_word t1);
C_noret_decl(f_5296)
static C_word f_5296(C_word t0,C_word t1);
C_noret_decl(f_5305)
static void f_5305(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5314)
static C_word f_5314(C_word t0,C_word t1);
C_noret_decl(f_5323)
static void f_5323(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5332)
static C_word f_5332(C_word t0,C_word t1);
C_noret_decl(f_5341)
static void f_5341(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5350)
static C_word f_5350(C_word t0,C_word t1);
C_noret_decl(f_5359)
static void f_5359(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word *av) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word *av) C_noret;
C_noret_decl(f_5386)
static C_word f_5386(C_word t0,C_word t1);
C_noret_decl(f_5395)
static void f_5395(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5404)
static C_word f_5404(C_word t0,C_word t1);
C_noret_decl(f_5413)
static void f_5413(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5422)
static C_word f_5422(C_word t0,C_word t1);
C_noret_decl(f_5431)
static void f_5431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5440)
static C_word f_5440(C_word t0,C_word t1);
C_noret_decl(f_5449)
static void f_5449(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5458)
static C_word f_5458(C_word t0,C_word t1);
C_noret_decl(f_5467)
static void f_5467(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5476)
static C_word f_5476(C_word t0,C_word t1);
C_noret_decl(f_5485)
static void f_5485(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5494)
static C_word f_5494(C_word t0,C_word t1);
C_noret_decl(f_5503)
static void f_5503(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5512)
static C_word f_5512(C_word t0,C_word t1);
C_noret_decl(f_5521)
static void f_5521(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word *av) C_noret;
C_noret_decl(f_5549)
static C_word f_5549(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6);
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5595)
static void C_ccall f_5595(C_word c,C_word *av) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word *av) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word *av) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word *av) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word *av) C_noret;
C_noret_decl(f_5651)
static void f_5651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5685)
static void C_ccall f_5685(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5695)
static void f_5695(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5703)
static void f_5703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word *av) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word *av) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word *av) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word *av) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word *av) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word *av) C_noret;
C_noret_decl(f_5821)
static void f_5821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word *av) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word *av) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static C_word f_5856(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5864)
static C_word f_5864(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word *av) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word *av) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word *av) C_noret;
C_noret_decl(f_5898)
static void f_5898(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word *av) C_noret;
C_noret_decl(f_5928)
static void C_ccall f_5928(C_word c,C_word *av) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void f_5950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word *av) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word *av) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_6011)
static void f_6011(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word *av) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word *av) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word *av) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word *av) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word *av) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word *av) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word *av) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word *av) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word *av) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word *av) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word *av) C_noret;
C_noret_decl(f_6213)
static void C_ccall f_6213(C_word c,C_word *av) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word *av) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word *av) C_noret;
C_noret_decl(f_6243)
static void f_6243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6250)
static void f_6250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6401)
static void f_6401(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6409)
static void C_ccall f_6409(C_word c,C_word *av) C_noret;
C_noret_decl(f_6413)
static void C_ccall f_6413(C_word c,C_word *av) C_noret;
C_noret_decl(f_6424)
static void f_6424(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6451)
static void f_6451(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word *av) C_noret;
C_noret_decl(f_6488)
static void f_6488(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word *av) C_noret;
C_noret_decl(f_6528)
static void f_6528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word *av) C_noret;
C_noret_decl(f_6557)
static void C_ccall f_6557(C_word c,C_word *av) C_noret;
C_noret_decl(f_6576)
static void C_ccall f_6576(C_word c,C_word *av) C_noret;
C_noret_decl(f_6589)
static void C_ccall f_6589(C_word c,C_word *av) C_noret;
C_noret_decl(f_6599)
static void C_ccall f_6599(C_word c,C_word *av) C_noret;
C_noret_decl(f_6605)
static void f_6605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word *av) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word *av) C_noret;
C_noret_decl(f_6623)
static void f_6623(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6651)
static void f_6651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word *av) C_noret;
C_noret_decl(f_6670)
static void f_6670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word *av) C_noret;
C_noret_decl(f_6698)
static void f_6698(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6720)
static void C_ccall f_6720(C_word c,C_word *av) C_noret;
C_noret_decl(f_6728)
static void C_ccall f_6728(C_word c,C_word *av) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_6781)
static void f_6781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6815)
static void C_ccall f_6815(C_word c,C_word *av) C_noret;
C_noret_decl(f_6821)
static void C_ccall f_6821(C_word c,C_word *av) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word *av) C_noret;
C_noret_decl(f_6876)
static void C_ccall f_6876(C_word c,C_word *av) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word *av) C_noret;
C_noret_decl(f_6884)
static void f_6884(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void f_6892(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6896)
static void C_ccall f_6896(C_word c,C_word *av) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word *av) C_noret;
C_noret_decl(f_6932)
static void f_6932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6968)
static void C_ccall f_6968(C_word c,C_word *av) C_noret;
C_noret_decl(f_6970)
static void f_6970(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word *av) C_noret;
C_noret_decl(f_7018)
static void f_7018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word *av) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word *av) C_noret;
C_noret_decl(f_7075)
static void f_7075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7099)
static void C_ccall f_7099(C_word c,C_word *av) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7117)
static void f_7117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7142)
static void C_ccall f_7142(C_word c,C_word *av) C_noret;
C_noret_decl(f_7204)
static void C_ccall f_7204(C_word c,C_word *av) C_noret;
C_noret_decl(f_7206)
static void f_7206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7231)
static void f_7231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word *av) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word *av) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word *av) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word *av) C_noret;
C_noret_decl(f_7319)
static void f_7319(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word *av) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word *av) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word *av) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word *av) C_noret;
C_noret_decl(f_7397)
static void C_ccall f_7397(C_word c,C_word *av) C_noret;
C_noret_decl(f_7407)
static void C_ccall f_7407(C_word c,C_word *av) C_noret;
C_noret_decl(f_7413)
static void C_ccall f_7413(C_word c,C_word *av) C_noret;
C_noret_decl(f_7414)
static void f_7414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word *av) C_noret;
C_noret_decl(f_7439)
static void C_ccall f_7439(C_word c,C_word *av) C_noret;
C_noret_decl(f_7440)
static void f_7440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word *av) C_noret;
C_noret_decl(f_7465)
static void C_ccall f_7465(C_word c,C_word *av) C_noret;
C_noret_decl(f_7468)
static void C_ccall f_7468(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;
C_noret_decl(f_7488)
static void C_ccall f_7488(C_word c,C_word *av) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word *av) C_noret;
C_noret_decl(f_7494)
static void f_7494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word *av) C_noret;
C_noret_decl(f_7517)
static void f_7517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7527)
static void C_ccall f_7527(C_word c,C_word *av) C_noret;
C_noret_decl(f_7551)
static void C_ccall f_7551(C_word c,C_word *av) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word *av) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word *av) C_noret;
C_noret_decl(f_7572)
static void f_7572(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7606)
static void C_ccall f_7606(C_word c,C_word *av) C_noret;
C_noret_decl(f_7618)
static void C_ccall f_7618(C_word c,C_word *av) C_noret;
C_noret_decl(f_7636)
static void C_ccall f_7636(C_word c,C_word *av) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7677)
static void C_ccall f_7677(C_word c,C_word *av) C_noret;
C_noret_decl(f_7683)
static void C_ccall f_7683(C_word c,C_word *av) C_noret;
C_noret_decl(f_7699)
static void C_ccall f_7699(C_word c,C_word *av) C_noret;
C_noret_decl(f_7703)
static void C_ccall f_7703(C_word c,C_word *av) C_noret;
C_noret_decl(f_7707)
static void C_ccall f_7707(C_word c,C_word *av) C_noret;
C_noret_decl(f_7720)
static void f_7720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7742)
static void C_ccall f_7742(C_word c,C_word *av) C_noret;
C_noret_decl(f_7744)
static void f_7744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7769)
static void C_ccall f_7769(C_word c,C_word *av) C_noret;
C_noret_decl(f_7784)
static void C_ccall f_7784(C_word c,C_word *av) C_noret;
C_noret_decl(f_7799)
static void f_7799(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7812)
static C_word f_7812(C_word t0,C_word t1);
C_noret_decl(f_7877)
static void C_ccall f_7877(C_word c,C_word *av) C_noret;
C_noret_decl(f_7883)
static void f_7883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7887)
static void C_ccall f_7887(C_word c,C_word *av) C_noret;
C_noret_decl(f_7893)
static void C_ccall f_7893(C_word c,C_word *av) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7899)
static void C_ccall f_7899(C_word c,C_word *av) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7903)
static void f_7903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7910)
static void C_ccall f_7910(C_word c,C_word *av) C_noret;
C_noret_decl(f_7913)
static void C_ccall f_7913(C_word c,C_word *av) C_noret;
C_noret_decl(f_7916)
static void C_ccall f_7916(C_word c,C_word *av) C_noret;
C_noret_decl(f_7917)
static void f_7917(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7920)
static void f_7920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7924)
static void C_ccall f_7924(C_word c,C_word *av) C_noret;
C_noret_decl(f_7950)
static void C_ccall f_7950(C_word c,C_word *av) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word *av) C_noret;
C_noret_decl(f_7960)
static void f_7960(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word *av) C_noret;
C_noret_decl(f_7970)
static void C_ccall f_7970(C_word c,C_word *av) C_noret;
C_noret_decl(f_7973)
static void C_ccall f_7973(C_word c,C_word *av) C_noret;
C_noret_decl(f_7976)
static void C_ccall f_7976(C_word c,C_word *av) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word *av) C_noret;
C_noret_decl(f_7986)
static void C_ccall f_7986(C_word c,C_word *av) C_noret;
C_noret_decl(f_8002)
static void C_ccall f_8002(C_word c,C_word *av) C_noret;
C_noret_decl(f_8008)
static void C_ccall f_8008(C_word c,C_word *av) C_noret;
C_noret_decl(f_8011)
static void C_ccall f_8011(C_word c,C_word *av) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_ccall f_8025(C_word c,C_word *av) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word *av) C_noret;
C_noret_decl(f_8034)
static void C_ccall f_8034(C_word c,C_word *av) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word *av) C_noret;
C_noret_decl(f_8055)
static void C_ccall f_8055(C_word c,C_word *av) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word *av) C_noret;
C_noret_decl(f_8076)
static void C_ccall f_8076(C_word c,C_word *av) C_noret;
C_noret_decl(f_8088)
static void C_ccall f_8088(C_word c,C_word *av) C_noret;
C_noret_decl(f_8091)
static void C_ccall f_8091(C_word c,C_word *av) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_8104)
static void C_ccall f_8104(C_word c,C_word *av) C_noret;
C_noret_decl(f_8105)
static void f_8105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8112)
static void C_ccall f_8112(C_word c,C_word *av) C_noret;
C_noret_decl(f_8124)
static void f_8124(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8134)
static void C_ccall f_8134(C_word c,C_word *av) C_noret;
C_noret_decl(f_8152)
static void f_8152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word *av) C_noret;
C_noret_decl(f_8182)
static void C_ccall f_8182(C_word c,C_word *av) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word *av) C_noret;
C_noret_decl(f_8191)
static void f_8191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8201)
static void C_ccall f_8201(C_word c,C_word *av) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8218)
static void f_8218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8248)
static void C_ccall f_8248(C_word c,C_word *av) C_noret;
C_noret_decl(f_8260)
static void C_ccall f_8260(C_word c,C_word *av) C_noret;
C_noret_decl(f_8263)
static void C_ccall f_8263(C_word c,C_word *av) C_noret;
C_noret_decl(f_8266)
static void C_ccall f_8266(C_word c,C_word *av) C_noret;
C_noret_decl(f_8287)
static void C_ccall f_8287(C_word c,C_word *av) C_noret;
C_noret_decl(f_8289)
static void f_8289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8325)
static void C_ccall f_8325(C_word c,C_word *av) C_noret;
C_noret_decl(f_8337)
static void f_8337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8366)
static void C_ccall f_8366(C_word c,C_word *av) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word *av) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380(C_word c,C_word *av) C_noret;
C_noret_decl(f_8390)
static void C_ccall f_8390(C_word c,C_word *av) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word *av) C_noret;
C_noret_decl(f_8402)
static void C_ccall f_8402(C_word c,C_word *av) C_noret;
C_noret_decl(f_8405)
static void C_ccall f_8405(C_word c,C_word *av) C_noret;
C_noret_decl(f_8406)
static C_word f_8406(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word *av) C_noret;
C_noret_decl(f_8430)
static void C_ccall f_8430(C_word c,C_word *av) C_noret;
C_noret_decl(f_8433)
static void C_ccall f_8433(C_word c,C_word *av) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word *av) C_noret;
C_noret_decl(f_8464)
static void C_ccall f_8464(C_word c,C_word *av) C_noret;
C_noret_decl(f_8471)
static void C_ccall f_8471(C_word c,C_word *av) C_noret;
C_noret_decl(f_8477)
static void C_ccall f_8477(C_word c,C_word *av) C_noret;
C_noret_decl(f_8480)
static void C_ccall f_8480(C_word c,C_word *av) C_noret;
C_noret_decl(f_8481)
static void f_8481(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8485)
static void C_ccall f_8485(C_word c,C_word *av) C_noret;
C_noret_decl(f_8503)
static void C_ccall f_8503(C_word c,C_word *av) C_noret;
C_noret_decl(f_8509)
static void C_ccall f_8509(C_word c,C_word *av) C_noret;
C_noret_decl(f_8512)
static void C_ccall f_8512(C_word c,C_word *av) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word *av) C_noret;
C_noret_decl(f_8526)
static void C_ccall f_8526(C_word c,C_word *av) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word *av) C_noret;
C_noret_decl(f_8534)
static void C_ccall f_8534(C_word c,C_word *av) C_noret;
C_noret_decl(f_8538)
static void C_ccall f_8538(C_word c,C_word *av) C_noret;
C_noret_decl(f_8544)
static void f_8544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8554)
static void C_ccall f_8554(C_word c,C_word *av) C_noret;
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word *av) C_noret;
C_noret_decl(f_8573)
static void C_ccall f_8573(C_word c,C_word *av) C_noret;
C_noret_decl(f_8575)
static void f_8575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8585)
static void f_8585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8600)
static void C_ccall f_8600(C_word c,C_word *av) C_noret;
C_noret_decl(f_8618)
static void f_8618(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8645)
static void f_8645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8691)
static void C_ccall f_8691(C_word c,C_word *av) C_noret;
C_noret_decl(f_8700)
static void C_ccall f_8700(C_word c,C_word *av) C_noret;
C_noret_decl(f_8711)
static void f_8711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8715)
static void C_ccall f_8715(C_word c,C_word *av) C_noret;
C_noret_decl(f_8718)
static void f_8718(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8726)
static void C_ccall f_8726(C_word c,C_word *av) C_noret;
C_noret_decl(f_8747)
static void C_ccall f_8747(C_word c,C_word *av) C_noret;
C_noret_decl(f_8751)
static void f_8751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8759)
static void C_ccall f_8759(C_word c,C_word *av) C_noret;
C_noret_decl(f_8763)
static void C_ccall f_8763(C_word c,C_word *av) C_noret;
C_noret_decl(f_8779)
static void C_ccall f_8779(C_word c,C_word *av) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word *av) C_noret;
C_noret_decl(f_8797)
static void C_ccall f_8797(C_word c,C_word *av) C_noret;
C_noret_decl(f_8808)
static void C_ccall f_8808(C_word c,C_word *av) C_noret;
C_noret_decl(f_8834)
static void C_ccall f_8834(C_word c,C_word *av) C_noret;
C_noret_decl(f_8836)
static void f_8836(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word *av) C_noret;
C_noret_decl(f_8869)
static void C_ccall f_8869(C_word c,C_word *av) C_noret;
C_noret_decl(f_8884)
static void C_ccall f_8884(C_word c,C_word *av) C_noret;
C_noret_decl(f_8892)
static void C_ccall f_8892(C_word c,C_word *av) C_noret;
C_noret_decl(f_8899)
static void C_ccall f_8899(C_word c,C_word *av) C_noret;
C_noret_decl(f_8903)
static void C_ccall f_8903(C_word c,C_word *av) C_noret;
C_noret_decl(f_8906)
static void C_ccall f_8906(C_word c,C_word *av) C_noret;
C_noret_decl(f_8911)
static void C_ccall f_8911(C_word c,C_word *av) C_noret;
C_noret_decl(f_8915)
static void C_ccall f_8915(C_word c,C_word *av) C_noret;
C_noret_decl(f_8918)
static void C_ccall f_8918(C_word c,C_word *av) C_noret;
C_noret_decl(f_8921)
static void C_ccall f_8921(C_word c,C_word *av) C_noret;
C_noret_decl(f_8924)
static void C_ccall f_8924(C_word c,C_word *av) C_noret;
C_noret_decl(f_8928)
static void C_ccall f_8928(C_word c,C_word *av) C_noret;
C_noret_decl(f_8932)
static void C_ccall f_8932(C_word c,C_word *av) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word *av) C_noret;
C_noret_decl(f_8940)
static void C_ccall f_8940(C_word c,C_word *av) C_noret;
C_noret_decl(f_8943)
static void C_ccall f_8943(C_word c,C_word *av) C_noret;
C_noret_decl(f_8946)
static void C_ccall f_8946(C_word c,C_word *av) C_noret;
C_noret_decl(f_8949)
static void C_ccall f_8949(C_word c,C_word *av) C_noret;
C_noret_decl(f_8952)
static void C_ccall f_8952(C_word c,C_word *av) C_noret;
C_noret_decl(f_8967)
static void C_ccall f_8967(C_word c,C_word *av) C_noret;
C_noret_decl(f_8973)
static void C_ccall f_8973(C_word c,C_word *av) C_noret;
C_noret_decl(f_8977)
static void C_ccall f_8977(C_word c,C_word *av) C_noret;
C_noret_decl(f_8980)
static void C_ccall f_8980(C_word c,C_word *av) C_noret;
C_noret_decl(f_8983)
static void C_ccall f_8983(C_word c,C_word *av) C_noret;
C_noret_decl(f_8986)
static void C_ccall f_8986(C_word c,C_word *av) C_noret;
C_noret_decl(f_8989)
static void C_ccall f_8989(C_word c,C_word *av) C_noret;
C_noret_decl(f_8992)
static void C_ccall f_8992(C_word c,C_word *av) C_noret;
C_noret_decl(f_8995)
static void C_ccall f_8995(C_word c,C_word *av) C_noret;
C_noret_decl(f_8998)
static void C_ccall f_8998(C_word c,C_word *av) C_noret;
C_noret_decl(f_9004)
static void C_ccall f_9004(C_word c,C_word *av) C_noret;
C_noret_decl(f_9008)
static void C_ccall f_9008(C_word c,C_word *av) C_noret;
C_noret_decl(f_9016)
static void C_ccall f_9016(C_word c,C_word *av) C_noret;
C_noret_decl(f_9022)
static void C_ccall f_9022(C_word c,C_word *av) C_noret;
C_noret_decl(f_9027)
static void C_ccall f_9027(C_word c,C_word *av) C_noret;
C_noret_decl(f_9031)
static void C_ccall f_9031(C_word c,C_word *av) C_noret;
C_noret_decl(f_9036)
static void C_ccall f_9036(C_word c,C_word *av) C_noret;
C_noret_decl(f_9043)
static void C_ccall f_9043(C_word c,C_word *av) C_noret;
C_noret_decl(f_9047)
static void C_ccall f_9047(C_word c,C_word *av) C_noret;
C_noret_decl(f_9050)
static void f_9050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9054)
static void C_ccall f_9054(C_word c,C_word *av) C_noret;
C_noret_decl(f_9057)
static void C_ccall f_9057(C_word c,C_word *av) C_noret;
C_noret_decl(f_9065)
static void C_ccall f_9065(C_word c,C_word *av) C_noret;
C_noret_decl(f_9069)
static void C_ccall f_9069(C_word c,C_word *av) C_noret;
C_noret_decl(f_9072)
static void C_ccall f_9072(C_word c,C_word *av) C_noret;
C_noret_decl(f_9075)
static void C_ccall f_9075(C_word c,C_word *av) C_noret;
C_noret_decl(f_9078)
static void C_ccall f_9078(C_word c,C_word *av) C_noret;
C_noret_decl(f_9080)
static void f_9080(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9088)
static void C_ccall f_9088(C_word c,C_word *av) C_noret;
C_noret_decl(f_9092)
static void C_ccall f_9092(C_word c,C_word *av) C_noret;
C_noret_decl(f_9094)
static void f_9094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9107)
static void C_ccall f_9107(C_word c,C_word *av) C_noret;
C_noret_decl(f_9114)
static void C_ccall f_9114(C_word c,C_word *av) C_noret;
C_noret_decl(f_9138)
static void f_9138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9152)
static void f_9152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9160)
static C_word f_9160(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_9187)
static void f_9187(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9212)
static void C_ccall f_9212(C_word c,C_word *av) C_noret;
C_noret_decl(f_9224)
static void C_ccall f_9224(C_word c,C_word *av) C_noret;
C_noret_decl(f_9227)
static void f_9227(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9231)
static void C_ccall f_9231(C_word c,C_word *av) C_noret;
C_noret_decl(f_9234)
static void C_ccall f_9234(C_word c,C_word *av) C_noret;
C_noret_decl(f_9250)
static void C_ccall f_9250(C_word c,C_word *av) C_noret;
C_noret_decl(f_9258)
static void C_ccall f_9258(C_word c,C_word *av) C_noret;
C_noret_decl(f_9262)
static void C_ccall f_9262(C_word c,C_word *av) C_noret;
C_noret_decl(f_9266)
static void C_ccall f_9266(C_word c,C_word *av) C_noret;
C_noret_decl(f_9283)
static void f_9283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9297)
static void C_ccall f_9297(C_word c,C_word *av) C_noret;
C_noret_decl(f_9315)
static void C_ccall f_9315(C_word c,C_word *av) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word *av) C_noret;
C_noret_decl(f_9323)
static void C_ccall f_9323(C_word c,C_word *av) C_noret;
C_noret_decl(f_9333)
static void C_ccall f_9333(C_word c,C_word *av) C_noret;
C_noret_decl(f_9337)
static void C_ccall f_9337(C_word c,C_word *av) C_noret;
C_noret_decl(f_9342)
static void f_9342(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9350)
static void f_9350(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9360)
static void C_ccall f_9360(C_word c,C_word *av) C_noret;
C_noret_decl(f_9373)
static void f_9373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9383)
static void C_ccall f_9383(C_word c,C_word *av) C_noret;
C_noret_decl(f_9401)
static void f_9401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9423)
static void f_9423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9465)
static void C_ccall f_9465(C_word c,C_word *av) C_noret;
C_noret_decl(f_9468)
static void C_ccall f_9468(C_word c,C_word *av) C_noret;
C_noret_decl(f_9473)
static void C_ccall f_9473(C_word c,C_word *av) C_noret;
C_noret_decl(f_9483)
static void C_ccall f_9483(C_word c,C_word *av) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word *av) C_noret;
C_noret_decl(f_9492)
static void f_9492(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9504)
static void f_9504(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9512)
static void f_9512(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word *av) C_noret;
C_noret_decl(f_9535)
static void f_9535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9545)
static void C_ccall f_9545(C_word c,C_word *av) C_noret;
C_noret_decl(f_9563)
static void f_9563(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word *av) C_noret;
C_noret_decl(f_9604)
static void f_9604(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word *av) C_noret;
C_noret_decl(f_9648)
static void C_ccall f_9648(C_word c,C_word *av) C_noret;
C_noret_decl(f_9651)
static void C_ccall f_9651(C_word c,C_word *av) C_noret;
C_noret_decl(f_9656)
static void C_ccall f_9656(C_word c,C_word *av) C_noret;
C_noret_decl(f_9666)
static void C_ccall f_9666(C_word c,C_word *av) C_noret;
C_noret_decl(f_9670)
static void C_ccall f_9670(C_word c,C_word *av) C_noret;
C_noret_decl(f_9675)
static void f_9675(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9687)
static void f_9687(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9695)
static void f_9695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9708)
static void C_ccall f_9708(C_word c,C_word *av) C_noret;
C_noret_decl(f_9714)
static void C_ccall f_9714(C_word c,C_word *av) C_noret;
C_noret_decl(f_9727)
static void f_9727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9737)
static void C_ccall f_9737(C_word c,C_word *av) C_noret;
C_noret_decl(f_9750)
static void f_9750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9789)
static void f_9789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word *av) C_noret;
C_noret_decl(f_9842)
static void f_9842(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word *av) C_noret;
C_noret_decl(f_9898)
static void C_ccall f_9898(C_word c,C_word *av) C_noret;
C_noret_decl(f_9901)
static void C_ccall f_9901(C_word c,C_word *av) C_noret;
C_noret_decl(f_9906)
static void C_ccall f_9906(C_word c,C_word *av) C_noret;
C_noret_decl(f_9916)
static void C_ccall f_9916(C_word c,C_word *av) C_noret;
C_noret_decl(f_9920)
static void C_ccall f_9920(C_word c,C_word *av) C_noret;
C_noret_decl(f_9922)
static void f_9922(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9930)
static void C_ccall f_9930(C_word c,C_word *av) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word *av) C_noret;
C_noret_decl(f_9940)
static void C_ccall f_9940(C_word c,C_word *av) C_noret;
C_noret_decl(f_9944)
static void C_ccall f_9944(C_word c,C_word *av) C_noret;
C_noret_decl(f_9965)
static void C_ccall f_9965(C_word c,C_word *av) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word *av) C_noret;
C_noret_decl(f_9977)
static void f_9977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_modules_toplevel)
C_extern void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10011)
static void C_ccall trf_10011(C_word c,C_word *av) C_noret;
static void C_ccall trf_10011(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10011(t0,t1,t2);}

C_noret_decl(trf_10065)
static void C_ccall trf_10065(C_word c,C_word *av) C_noret;
static void C_ccall trf_10065(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10065(t0,t1,t2);}

C_noret_decl(trf_10101)
static void C_ccall trf_10101(C_word c,C_word *av) C_noret;
static void C_ccall trf_10101(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10101(t0,t1,t2);}

C_noret_decl(trf_10141)
static void C_ccall trf_10141(C_word c,C_word *av) C_noret;
static void C_ccall trf_10141(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10141(t0,t1,t2);}

C_noret_decl(trf_10186)
static void C_ccall trf_10186(C_word c,C_word *av) C_noret;
static void C_ccall trf_10186(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10186(t0,t1,t2);}

C_noret_decl(trf_10235)
static void C_ccall trf_10235(C_word c,C_word *av) C_noret;
static void C_ccall trf_10235(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10235(t0,t1);}

C_noret_decl(trf_10313)
static void C_ccall trf_10313(C_word c,C_word *av) C_noret;
static void C_ccall trf_10313(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10313(t0,t1,t2);}

C_noret_decl(trf_10347)
static void C_ccall trf_10347(C_word c,C_word *av) C_noret;
static void C_ccall trf_10347(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10347(t0,t1,t2);}

C_noret_decl(trf_10417)
static void C_ccall trf_10417(C_word c,C_word *av) C_noret;
static void C_ccall trf_10417(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10417(t0,t1,t2);}

C_noret_decl(trf_10451)
static void C_ccall trf_10451(C_word c,C_word *av) C_noret;
static void C_ccall trf_10451(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10451(t0,t1,t2);}

C_noret_decl(trf_10491)
static void C_ccall trf_10491(C_word c,C_word *av) C_noret;
static void C_ccall trf_10491(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10491(t0,t1,t2);}

C_noret_decl(trf_10514)
static void C_ccall trf_10514(C_word c,C_word *av) C_noret;
static void C_ccall trf_10514(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10514(t0,t1,t2);}

C_noret_decl(trf_10570)
static void C_ccall trf_10570(C_word c,C_word *av) C_noret;
static void C_ccall trf_10570(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10570(t0,t1,t2);}

C_noret_decl(trf_10591)
static void C_ccall trf_10591(C_word c,C_word *av) C_noret;
static void C_ccall trf_10591(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10591(t0,t1,t2);}

C_noret_decl(trf_10599)
static void C_ccall trf_10599(C_word c,C_word *av) C_noret;
static void C_ccall trf_10599(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10599(t0,t1,t2);}

C_noret_decl(trf_10634)
static void C_ccall trf_10634(C_word c,C_word *av) C_noret;
static void C_ccall trf_10634(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10634(t0,t1,t2);}

C_noret_decl(trf_10665)
static void C_ccall trf_10665(C_word c,C_word *av) C_noret;
static void C_ccall trf_10665(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10665(t0,t1,t2);}

C_noret_decl(trf_10671)
static void C_ccall trf_10671(C_word c,C_word *av) C_noret;
static void C_ccall trf_10671(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10671(t0,t1,t2);}

C_noret_decl(trf_10712)
static void C_ccall trf_10712(C_word c,C_word *av) C_noret;
static void C_ccall trf_10712(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10712(t0,t1,t2);}

C_noret_decl(trf_10821)
static void C_ccall trf_10821(C_word c,C_word *av) C_noret;
static void C_ccall trf_10821(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10821(t0,t1,t2);}

C_noret_decl(trf_10901)
static void C_ccall trf_10901(C_word c,C_word *av) C_noret;
static void C_ccall trf_10901(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10901(t0,t1,t2);}

C_noret_decl(trf_10918)
static void C_ccall trf_10918(C_word c,C_word *av) C_noret;
static void C_ccall trf_10918(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10918(t0,t1);}

C_noret_decl(trf_10942)
static void C_ccall trf_10942(C_word c,C_word *av) C_noret;
static void C_ccall trf_10942(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10942(t0,t1,t2);}

C_noret_decl(trf_11002)
static void C_ccall trf_11002(C_word c,C_word *av) C_noret;
static void C_ccall trf_11002(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11002(t0,t1,t2,t3);}

C_noret_decl(trf_11014)
static void C_ccall trf_11014(C_word c,C_word *av) C_noret;
static void C_ccall trf_11014(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11014(t0,t1,t2);}

C_noret_decl(trf_11119)
static void C_ccall trf_11119(C_word c,C_word *av) C_noret;
static void C_ccall trf_11119(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_11119(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11130)
static void C_ccall trf_11130(C_word c,C_word *av) C_noret;
static void C_ccall trf_11130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11130(t0,t1,t2);}

C_noret_decl(trf_11143)
static void C_ccall trf_11143(C_word c,C_word *av) C_noret;
static void C_ccall trf_11143(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11143(t0,t1);}

C_noret_decl(trf_11217)
static void C_ccall trf_11217(C_word c,C_word *av) C_noret;
static void C_ccall trf_11217(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11217(t0,t1,t2);}

C_noret_decl(trf_11251)
static void C_ccall trf_11251(C_word c,C_word *av) C_noret;
static void C_ccall trf_11251(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11251(t0,t1,t2);}

C_noret_decl(trf_11310)
static void C_ccall trf_11310(C_word c,C_word *av) C_noret;
static void C_ccall trf_11310(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11310(t0,t1,t2);}

C_noret_decl(trf_11468)
static void C_ccall trf_11468(C_word c,C_word *av) C_noret;
static void C_ccall trf_11468(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11468(t0,t1,t2);}

C_noret_decl(trf_11557)
static void C_ccall trf_11557(C_word c,C_word *av) C_noret;
static void C_ccall trf_11557(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11557(t0,t1,t2);}

C_noret_decl(trf_4465)
static void C_ccall trf_4465(C_word c,C_word *av) C_noret;
static void C_ccall trf_4465(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4465(t0,t1,t2,t3);}

C_noret_decl(trf_4471)
static void C_ccall trf_4471(C_word c,C_word *av) C_noret;
static void C_ccall trf_4471(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4471(t0,t1,t2);}

C_noret_decl(trf_4546)
static void C_ccall trf_4546(C_word c,C_word *av) C_noret;
static void C_ccall trf_4546(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4546(t0,t1,t2);}

C_noret_decl(trf_4629)
static void C_ccall trf_4629(C_word c,C_word *av) C_noret;
static void C_ccall trf_4629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4629(t0,t1,t2);}

C_noret_decl(trf_4638)
static void C_ccall trf_4638(C_word c,C_word *av) C_noret;
static void C_ccall trf_4638(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4638(t0,t1,t2);}

C_noret_decl(trf_4646)
static void C_ccall trf_4646(C_word c,C_word *av) C_noret;
static void C_ccall trf_4646(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4646(t0,t1,t2,t3);}

C_noret_decl(trf_5305)
static void C_ccall trf_5305(C_word c,C_word *av) C_noret;
static void C_ccall trf_5305(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5305(t0,t1,t2,t3);}

C_noret_decl(trf_5323)
static void C_ccall trf_5323(C_word c,C_word *av) C_noret;
static void C_ccall trf_5323(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5323(t0,t1,t2,t3);}

C_noret_decl(trf_5341)
static void C_ccall trf_5341(C_word c,C_word *av) C_noret;
static void C_ccall trf_5341(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5341(t0,t1,t2,t3);}

C_noret_decl(trf_5359)
static void C_ccall trf_5359(C_word c,C_word *av) C_noret;
static void C_ccall trf_5359(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5359(t0,t1,t2,t3);}

C_noret_decl(trf_5395)
static void C_ccall trf_5395(C_word c,C_word *av) C_noret;
static void C_ccall trf_5395(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5395(t0,t1,t2,t3);}

C_noret_decl(trf_5413)
static void C_ccall trf_5413(C_word c,C_word *av) C_noret;
static void C_ccall trf_5413(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5413(t0,t1,t2,t3);}

C_noret_decl(trf_5431)
static void C_ccall trf_5431(C_word c,C_word *av) C_noret;
static void C_ccall trf_5431(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5431(t0,t1,t2,t3);}

C_noret_decl(trf_5449)
static void C_ccall trf_5449(C_word c,C_word *av) C_noret;
static void C_ccall trf_5449(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5449(t0,t1,t2,t3);}

C_noret_decl(trf_5467)
static void C_ccall trf_5467(C_word c,C_word *av) C_noret;
static void C_ccall trf_5467(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5467(t0,t1,t2,t3);}

C_noret_decl(trf_5485)
static void C_ccall trf_5485(C_word c,C_word *av) C_noret;
static void C_ccall trf_5485(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5485(t0,t1,t2,t3);}

C_noret_decl(trf_5503)
static void C_ccall trf_5503(C_word c,C_word *av) C_noret;
static void C_ccall trf_5503(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5503(t0,t1,t2,t3);}

C_noret_decl(trf_5521)
static void C_ccall trf_5521(C_word c,C_word *av) C_noret;
static void C_ccall trf_5521(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5521(t0,t1,t2,t3);}

C_noret_decl(trf_5651)
static void C_ccall trf_5651(C_word c,C_word *av) C_noret;
static void C_ccall trf_5651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5651(t0,t1,t2);}

C_noret_decl(trf_5695)
static void C_ccall trf_5695(C_word c,C_word *av) C_noret;
static void C_ccall trf_5695(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5695(t0,t1,t2,t3);}

C_noret_decl(trf_5703)
static void C_ccall trf_5703(C_word c,C_word *av) C_noret;
static void C_ccall trf_5703(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5703(t0,t1,t2);}

C_noret_decl(trf_5821)
static void C_ccall trf_5821(C_word c,C_word *av) C_noret;
static void C_ccall trf_5821(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5821(t0,t1,t2);}

C_noret_decl(trf_5898)
static void C_ccall trf_5898(C_word c,C_word *av) C_noret;
static void C_ccall trf_5898(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5898(t0,t1,t2);}

C_noret_decl(trf_5950)
static void C_ccall trf_5950(C_word c,C_word *av) C_noret;
static void C_ccall trf_5950(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5950(t0,t1,t2);}

C_noret_decl(trf_6011)
static void C_ccall trf_6011(C_word c,C_word *av) C_noret;
static void C_ccall trf_6011(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6011(t0,t1,t2,t3);}

C_noret_decl(trf_6243)
static void C_ccall trf_6243(C_word c,C_word *av) C_noret;
static void C_ccall trf_6243(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6243(t0,t1,t2);}

C_noret_decl(trf_6250)
static void C_ccall trf_6250(C_word c,C_word *av) C_noret;
static void C_ccall trf_6250(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6250(t0,t1);}

C_noret_decl(trf_6401)
static void C_ccall trf_6401(C_word c,C_word *av) C_noret;
static void C_ccall trf_6401(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6401(t0,t1,t2,t3);}

C_noret_decl(trf_6424)
static void C_ccall trf_6424(C_word c,C_word *av) C_noret;
static void C_ccall trf_6424(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6424(t0,t1,t2);}

C_noret_decl(trf_6451)
static void C_ccall trf_6451(C_word c,C_word *av) C_noret;
static void C_ccall trf_6451(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6451(t0,t1,t2);}

C_noret_decl(trf_6488)
static void C_ccall trf_6488(C_word c,C_word *av) C_noret;
static void C_ccall trf_6488(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6488(t0,t1,t2);}

C_noret_decl(trf_6528)
static void C_ccall trf_6528(C_word c,C_word *av) C_noret;
static void C_ccall trf_6528(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6528(t0,t1,t2);}

C_noret_decl(trf_6605)
static void C_ccall trf_6605(C_word c,C_word *av) C_noret;
static void C_ccall trf_6605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6605(t0,t1);}

C_noret_decl(trf_6623)
static void C_ccall trf_6623(C_word c,C_word *av) C_noret;
static void C_ccall trf_6623(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6623(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6651)
static void C_ccall trf_6651(C_word c,C_word *av) C_noret;
static void C_ccall trf_6651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6651(t0,t1,t2);}

C_noret_decl(trf_6670)
static void C_ccall trf_6670(C_word c,C_word *av) C_noret;
static void C_ccall trf_6670(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6670(t0,t1,t2);}

C_noret_decl(trf_6698)
static void C_ccall trf_6698(C_word c,C_word *av) C_noret;
static void C_ccall trf_6698(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6698(t0,t1,t2,t3);}

C_noret_decl(trf_6781)
static void C_ccall trf_6781(C_word c,C_word *av) C_noret;
static void C_ccall trf_6781(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6781(t0,t1,t2);}

C_noret_decl(trf_6884)
static void C_ccall trf_6884(C_word c,C_word *av) C_noret;
static void C_ccall trf_6884(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6884(t0,t1);}

C_noret_decl(trf_6892)
static void C_ccall trf_6892(C_word c,C_word *av) C_noret;
static void C_ccall trf_6892(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6892(t0,t1);}

C_noret_decl(trf_6932)
static void C_ccall trf_6932(C_word c,C_word *av) C_noret;
static void C_ccall trf_6932(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6932(t0,t1);}

C_noret_decl(trf_6970)
static void C_ccall trf_6970(C_word c,C_word *av) C_noret;
static void C_ccall trf_6970(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6970(t0,t1,t2);}

C_noret_decl(trf_7018)
static void C_ccall trf_7018(C_word c,C_word *av) C_noret;
static void C_ccall trf_7018(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7018(t0,t1,t2);}

C_noret_decl(trf_7075)
static void C_ccall trf_7075(C_word c,C_word *av) C_noret;
static void C_ccall trf_7075(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7075(t0,t1,t2);}

C_noret_decl(trf_7117)
static void C_ccall trf_7117(C_word c,C_word *av) C_noret;
static void C_ccall trf_7117(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7117(t0,t1,t2);}

C_noret_decl(trf_7206)
static void C_ccall trf_7206(C_word c,C_word *av) C_noret;
static void C_ccall trf_7206(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7206(t0,t1,t2);}

C_noret_decl(trf_7231)
static void C_ccall trf_7231(C_word c,C_word *av) C_noret;
static void C_ccall trf_7231(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7231(t0,t1);}

C_noret_decl(trf_7319)
static void C_ccall trf_7319(C_word c,C_word *av) C_noret;
static void C_ccall trf_7319(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7319(t0,t1);}

C_noret_decl(trf_7414)
static void C_ccall trf_7414(C_word c,C_word *av) C_noret;
static void C_ccall trf_7414(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7414(t0,t1,t2);}

C_noret_decl(trf_7440)
static void C_ccall trf_7440(C_word c,C_word *av) C_noret;
static void C_ccall trf_7440(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7440(t0,t1,t2);}

C_noret_decl(trf_7494)
static void C_ccall trf_7494(C_word c,C_word *av) C_noret;
static void C_ccall trf_7494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7494(t0,t1,t2);}

C_noret_decl(trf_7517)
static void C_ccall trf_7517(C_word c,C_word *av) C_noret;
static void C_ccall trf_7517(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7517(t0,t1,t2);}

C_noret_decl(trf_7572)
static void C_ccall trf_7572(C_word c,C_word *av) C_noret;
static void C_ccall trf_7572(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7572(t0,t1,t2);}

C_noret_decl(trf_7720)
static void C_ccall trf_7720(C_word c,C_word *av) C_noret;
static void C_ccall trf_7720(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7720(t0,t1,t2);}

C_noret_decl(trf_7744)
static void C_ccall trf_7744(C_word c,C_word *av) C_noret;
static void C_ccall trf_7744(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7744(t0,t1,t2);}

C_noret_decl(trf_7799)
static void C_ccall trf_7799(C_word c,C_word *av) C_noret;
static void C_ccall trf_7799(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7799(t0,t1,t2,t3);}

C_noret_decl(trf_7883)
static void C_ccall trf_7883(C_word c,C_word *av) C_noret;
static void C_ccall trf_7883(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7883(t0,t1,t2);}

C_noret_decl(trf_7903)
static void C_ccall trf_7903(C_word c,C_word *av) C_noret;
static void C_ccall trf_7903(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7903(t0,t1,t2);}

C_noret_decl(trf_7917)
static void C_ccall trf_7917(C_word c,C_word *av) C_noret;
static void C_ccall trf_7917(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7917(t0,t1,t2);}

C_noret_decl(trf_7920)
static void C_ccall trf_7920(C_word c,C_word *av) C_noret;
static void C_ccall trf_7920(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7920(t0,t1);}

C_noret_decl(trf_7960)
static void C_ccall trf_7960(C_word c,C_word *av) C_noret;
static void C_ccall trf_7960(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7960(t0,t1,t2);}

C_noret_decl(trf_8105)
static void C_ccall trf_8105(C_word c,C_word *av) C_noret;
static void C_ccall trf_8105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8105(t0,t1,t2);}

C_noret_decl(trf_8124)
static void C_ccall trf_8124(C_word c,C_word *av) C_noret;
static void C_ccall trf_8124(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8124(t0,t1,t2);}

C_noret_decl(trf_8152)
static void C_ccall trf_8152(C_word c,C_word *av) C_noret;
static void C_ccall trf_8152(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8152(t0,t1,t2);}

C_noret_decl(trf_8191)
static void C_ccall trf_8191(C_word c,C_word *av) C_noret;
static void C_ccall trf_8191(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8191(t0,t1,t2);}

C_noret_decl(trf_8218)
static void C_ccall trf_8218(C_word c,C_word *av) C_noret;
static void C_ccall trf_8218(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8218(t0,t1,t2);}

C_noret_decl(trf_8289)
static void C_ccall trf_8289(C_word c,C_word *av) C_noret;
static void C_ccall trf_8289(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8289(t0,t1,t2);}

C_noret_decl(trf_8337)
static void C_ccall trf_8337(C_word c,C_word *av) C_noret;
static void C_ccall trf_8337(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8337(t0,t1,t2);}

C_noret_decl(trf_8481)
static void C_ccall trf_8481(C_word c,C_word *av) C_noret;
static void C_ccall trf_8481(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8481(t0,t1,t2);}

C_noret_decl(trf_8544)
static void C_ccall trf_8544(C_word c,C_word *av) C_noret;
static void C_ccall trf_8544(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8544(t0,t1,t2);}

C_noret_decl(trf_8575)
static void C_ccall trf_8575(C_word c,C_word *av) C_noret;
static void C_ccall trf_8575(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8575(t0,t1,t2);}

C_noret_decl(trf_8585)
static void C_ccall trf_8585(C_word c,C_word *av) C_noret;
static void C_ccall trf_8585(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8585(t0,t1);}

C_noret_decl(trf_8618)
static void C_ccall trf_8618(C_word c,C_word *av) C_noret;
static void C_ccall trf_8618(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8618(t0,t1,t2);}

C_noret_decl(trf_8645)
static void C_ccall trf_8645(C_word c,C_word *av) C_noret;
static void C_ccall trf_8645(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8645(t0,t1,t2);}

C_noret_decl(trf_8711)
static void C_ccall trf_8711(C_word c,C_word *av) C_noret;
static void C_ccall trf_8711(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8711(t0,t1,t2);}

C_noret_decl(trf_8718)
static void C_ccall trf_8718(C_word c,C_word *av) C_noret;
static void C_ccall trf_8718(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8718(t0,t1);}

C_noret_decl(trf_8751)
static void C_ccall trf_8751(C_word c,C_word *av) C_noret;
static void C_ccall trf_8751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8751(t0,t1,t2);}

C_noret_decl(trf_8836)
static void C_ccall trf_8836(C_word c,C_word *av) C_noret;
static void C_ccall trf_8836(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8836(t0,t1,t2);}

C_noret_decl(trf_9050)
static void C_ccall trf_9050(C_word c,C_word *av) C_noret;
static void C_ccall trf_9050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9050(t0,t1,t2);}

C_noret_decl(trf_9080)
static void C_ccall trf_9080(C_word c,C_word *av) C_noret;
static void C_ccall trf_9080(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9080(t0,t1,t2,t3);}

C_noret_decl(trf_9094)
static void C_ccall trf_9094(C_word c,C_word *av) C_noret;
static void C_ccall trf_9094(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9094(t0,t1,t2);}

C_noret_decl(trf_9138)
static void C_ccall trf_9138(C_word c,C_word *av) C_noret;
static void C_ccall trf_9138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9138(t0,t1,t2);}

C_noret_decl(trf_9152)
static void C_ccall trf_9152(C_word c,C_word *av) C_noret;
static void C_ccall trf_9152(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9152(t0,t1,t2);}

C_noret_decl(trf_9187)
static void C_ccall trf_9187(C_word c,C_word *av) C_noret;
static void C_ccall trf_9187(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9187(t0,t1,t2);}

C_noret_decl(trf_9227)
static void C_ccall trf_9227(C_word c,C_word *av) C_noret;
static void C_ccall trf_9227(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9227(t0,t1,t2);}

C_noret_decl(trf_9283)
static void C_ccall trf_9283(C_word c,C_word *av) C_noret;
static void C_ccall trf_9283(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9283(t0,t1,t2);}

C_noret_decl(trf_9342)
static void C_ccall trf_9342(C_word c,C_word *av) C_noret;
static void C_ccall trf_9342(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_9342(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9350)
static void C_ccall trf_9350(C_word c,C_word *av) C_noret;
static void C_ccall trf_9350(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9350(t0,t1,t2);}

C_noret_decl(trf_9373)
static void C_ccall trf_9373(C_word c,C_word *av) C_noret;
static void C_ccall trf_9373(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9373(t0,t1,t2);}

C_noret_decl(trf_9401)
static void C_ccall trf_9401(C_word c,C_word *av) C_noret;
static void C_ccall trf_9401(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9401(t0,t1,t2);}

C_noret_decl(trf_9423)
static void C_ccall trf_9423(C_word c,C_word *av) C_noret;
static void C_ccall trf_9423(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9423(t0,t1,t2);}

C_noret_decl(trf_9492)
static void C_ccall trf_9492(C_word c,C_word *av) C_noret;
static void C_ccall trf_9492(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9492(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9504)
static void C_ccall trf_9504(C_word c,C_word *av) C_noret;
static void C_ccall trf_9504(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9504(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9512)
static void C_ccall trf_9512(C_word c,C_word *av) C_noret;
static void C_ccall trf_9512(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9512(t0,t1,t2);}

C_noret_decl(trf_9535)
static void C_ccall trf_9535(C_word c,C_word *av) C_noret;
static void C_ccall trf_9535(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9535(t0,t1,t2);}

C_noret_decl(trf_9563)
static void C_ccall trf_9563(C_word c,C_word *av) C_noret;
static void C_ccall trf_9563(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9563(t0,t1,t2);}

C_noret_decl(trf_9604)
static void C_ccall trf_9604(C_word c,C_word *av) C_noret;
static void C_ccall trf_9604(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9604(t0,t1,t2);}

C_noret_decl(trf_9675)
static void C_ccall trf_9675(C_word c,C_word *av) C_noret;
static void C_ccall trf_9675(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9675(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9687)
static void C_ccall trf_9687(C_word c,C_word *av) C_noret;
static void C_ccall trf_9687(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9687(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9695)
static void C_ccall trf_9695(C_word c,C_word *av) C_noret;
static void C_ccall trf_9695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9695(t0,t1,t2);}

C_noret_decl(trf_9727)
static void C_ccall trf_9727(C_word c,C_word *av) C_noret;
static void C_ccall trf_9727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9727(t0,t1,t2);}

C_noret_decl(trf_9750)
static void C_ccall trf_9750(C_word c,C_word *av) C_noret;
static void C_ccall trf_9750(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9750(t0,t1,t2);}

C_noret_decl(trf_9789)
static void C_ccall trf_9789(C_word c,C_word *av) C_noret;
static void C_ccall trf_9789(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9789(t0,t1,t2);}

C_noret_decl(trf_9842)
static void C_ccall trf_9842(C_word c,C_word *av) C_noret;
static void C_ccall trf_9842(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9842(t0,t1,t2);}

C_noret_decl(trf_9922)
static void C_ccall trf_9922(C_word c,C_word *av) C_noret;
static void C_ccall trf_9922(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9922(t0,t1,t2);}

C_noret_decl(trf_9977)
static void C_ccall trf_9977(C_word c,C_word *av) C_noret;
static void C_ccall trf_9977(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9977(t0,t1,t2);}

/* f12337 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f12337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f12337,c,av);}
/* modules.scm:880: module-rename */
f_10570(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f12341 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f12341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f12341,c,av);}
/* modules.scm:880: module-rename */
f_10570(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f13052 in k6511 in g1262 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f13052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f13052,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f13056 in g1262 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f13056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f13056,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10000 in map-loop2553 in k9963 in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_10002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10002,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9977(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2527 in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_10011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10011,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:795: g2533 */
t4=((C_word*)t0)[4];
f_9922(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10034 in map-loop2527 in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_10036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10036,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10011(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k10052 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10054,c,av);}
/* modules.scm:797: module-imports */
t2=((C_word*)t0)[2];
f_9227(t2,((C_word*)t0)[3],t1);}

/* ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10060(C_word c,C_word *av){
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
C_word t10;
C_word t11;
C_word *a;
if(c!=10) C_bad_argc_2(c,10,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10060,c,av);}
a=C_alloc(11);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10064,a[2]=t3,a[3]=t4,a[4]=t9,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:800: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[182]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[182]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=t2;
av2[4]=lf[199];
tp(5,av2);}}

/* k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10064(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_10064,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li173),tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdr(((C_word*)t0)[9]);
t4=C_i_check_list_2(t3,lf[70]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10099,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10101,a[2]=t7,a[3]=t2,a[4]=((C_word)li174),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10101(t9,t5,t3);}

/* g2596 in k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10065(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,8)))){
C_save_and_reclaim_args((void *)trf_10065,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10071,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li171),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10077,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li172),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:803: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a10070 in g2596 in k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10071,c,av);}
/* modules.scm:803: ##sys#decompose-import */
t2=*((C_word*)lf[105]+1);{
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
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a10076 in g2596 in k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10077(C_word c,C_word *av){
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
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_10077,c,av);}
if(C_truep(C_i_not(t4))){
/* modules.scm:805: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[196];
av2[4]=t2;
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}
else{
/* modules.scm:806: ##sys#import */
t8=*((C_word*)lf[197]+1);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=t7;
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(11,av2);}}}

/* k10097 in k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10099,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[198];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2595 in k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10101(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10101,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10111,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:801: g2596 */
t4=((C_word*)t0)[3];
f_10065(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10109 in for-each-loop2595 in k10062 in ##sys#expand-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10111,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10101(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10124(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=11) C_bad_argc_2(c,11,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10124,c,av);}
a=C_alloc(12);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10128,a[2]=t6,a[3]=t3,a[4]=t7,a[5]=t4,a[6]=t1,a[7]=t9,a[8]=t5,a[9]=t10,a[10]=t8,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:811: ##sys#current-module */
t12=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10128,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10545,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:816: module-meta-import-forms */
  f_5404(lf[30],t1)
);
t5=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:816: scheme#append */
t6=*((C_word*)lf[58]+1);{
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
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10560,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:819: module-import-forms */
  f_5386(lf[27],t1)
);
t5=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:819: scheme#append */
t6=*((C_word*)lf[58]+1);{
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
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_10131(2,av2);}}}

/* k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10131(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10131,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10141,a[2]=((C_word*)t0)[2],a[3]=((C_word)li176),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[70]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10185,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10514,a[2]=t6,a[3]=t2,a[4]=((C_word)li183),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10514(t8,t4,((C_word*)t0)[3]);}

/* g2657 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10141(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_10141,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10148,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:826: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[202]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[202]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[161];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k10146 in g2657 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10148,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:827: import-env */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k10177 in k10146 in g2657 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10179,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=C_i_cdr(t2);
t5=C_eqp(t3,t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:830: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[200]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[200]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[201];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10185(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10185,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10186,a[2]=((C_word*)t0)[2],a[3]=((C_word)li177),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[70]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10491,a[2]=t6,a[3]=t2,a[4]=((C_word)li182),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10491(t8,t4,((C_word*)t0)[3]);}

/* g2667 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10186(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_10186,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10193,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:835: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[202]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[202]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[161];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k10191 in g2667 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10193,c,av);}
a=C_alloc(5);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10226,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:836: macro-env */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k10224 in k10191 in g2667 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10226,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_i_cdr(t2);
t5=C_eqp(t3,t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:838: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[200]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[200]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[203];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
tp(4,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_10232,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10260,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_10260(2,av2);}}
else{
/* modules.scm:842: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[204];
tp(4,av2);}}}
else{
t3=t2;
f_10235(t3,C_SCHEME_UNDEFINED);}}

/* k10233 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10235(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_10235,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10253,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10257,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:863: import-env */
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k10236 in k10233 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10238,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10249,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:864: macro-env */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k10243 in k10236 in k10233 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10245,c,av);}
/* modules.scm:864: macro-env */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k10247 in k10236 in k10233 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10249,c,av);}
a=C_alloc(6);
/* modules.scm:864: merge-se */
f_6605(((C_word*)t0)[2],C_a_i_list(&a,2,t1,((C_word*)t0)[3]));}

/* k10251 in k10233 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10253,c,av);}
/* modules.scm:863: import-env */
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
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k10255 in k10233 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10257,c,av);}
a=C_alloc(6);
/* modules.scm:863: merge-se */
f_6605(((C_word*)t0)[2],C_a_i_list(&a,2,t1,((C_word*)t0)[3]));}

/* k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10260(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_10260,c,av);}
a=C_alloc(27);
t2=(
/* modules.scm:843: module-export-list */
  f_5296(lf[12],((C_word*)t0)[2])
);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10286,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10383,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(
/* modules.scm:845: module-sexports */
  f_5458(lf[39],((C_word*)t0)[2])
);
/* modules.scm:845: scheme#append */
t8=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10394,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(
/* modules.scm:855: module-export-list */
  f_5296(lf[12],((C_word*)t0)[2])
);
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:t6);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10408,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10451,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li181),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_10451(t17,t13,((C_word*)t0)[6]);}}

/* k10264 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_10266,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10276,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:861: module-iexports */
  f_5476(lf[42],((C_word*)t0)[3])
);
/* modules.scm:861: merge-se */
f_6605(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[4]));}

/* k10267 in k10264 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10269,c,av);}
t2=((C_word*)t0)[2];
f_10235(t2,C_SCHEME_UNDEFINED);}

/* k10274 in k10264 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10276,c,av);}
/* modules.scm:859: set-module-iexports! */
t2=lf[44];
f_5485(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10284 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10286(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10286,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(
/* modules.scm:848: module-exist-list */
  f_5332(lf[19],((C_word*)t0)[3])
);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10304,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10347,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li179),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10347(t12,t8,((C_word*)t0)[5]);}

/* k10291 in k10284 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10293,c,av);}
/* modules.scm:846: set-module-exist-list! */
t2=lf[21];
f_5341(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10302 in k10284 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10304(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10304,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10313,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li178),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10313(t10,t6,((C_word*)t0)[4]);}

/* k10309 in k10302 in k10284 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10311,c,av);}
/* modules.scm:848: scheme#append */
t2=*((C_word*)lf[58]+1);{
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

/* map-loop2738 in k10302 in k10284 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10313(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10313,3,t0,t1,t2);}
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

/* map-loop2712 in k10284 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10347(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10347,3,t0,t1,t2);}
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

/* k10381 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10383,c,av);}
/* modules.scm:845: set-module-sexports! */
t2=lf[41];
f_5467(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10392 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10394,c,av);}
/* modules.scm:852: set-module-export-list! */
t2=lf[14];
f_5305(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10406 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10408(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10408,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10417,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li180),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10417(t10,t6,((C_word*)t0)[4]);}

/* k10413 in k10406 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10415,c,av);}
/* modules.scm:854: scheme#append */
t2=*((C_word*)lf[58]+1);{
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

/* map-loop2792 in k10406 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10417(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10417,3,t0,t1,t2);}
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

/* map-loop2766 in k10258 in k10230 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10451(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10451,3,t0,t1,t2);}
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

/* for-each-loop2666 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10491(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10491,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10501,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:832: g2667 */
t4=((C_word*)t0)[3];
f_10186(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10499 in for-each-loop2666 in k10183 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10501,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10491(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2656 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10514(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10514,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10524,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:823: g2657 */
t4=((C_word*)t0)[3];
f_10141(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10522 in for-each-loop2656 in k10129 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10524,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10514(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k10543 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10545,c,av);}
/* modules.scm:814: set-module-meta-import-forms! */
t2=lf[32];
f_5413(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10558 in k10126 in ##sys#import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10560,c,av);}
/* modules.scm:817: set-module-import-forms! */
t2=lf[29];
f_5395(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* module-rename in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10570(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_10570,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10578,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10582,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:869: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[175]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[175]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k10576 in module-rename in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10578,c,av);}
/* modules.scm:867: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[188]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[188]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k10580 in module-rename in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10582,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10586,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:871: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[175]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[175]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k10584 in k10580 in module-rename in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10586,c,av);}
/* modules.scm:868: scheme#string-append */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[205];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10588(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_10588,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10591,a[2]=t3,a[3]=t4,a[4]=((C_word)li188),tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_namespaced_symbolp(t2))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10660,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:883: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t6;
tp(2,av2);}}}

/* mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10591(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10591,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10595,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:875: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10595,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li187),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:875: g2849 */
t3=t2;
f_10599(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10599(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_10599,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10606,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12337,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:880: module-name */
t5=lf[8];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
f_5278(3,av2);}}
else{
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:250: module-undefined-list */
t5=*((C_word*)lf[25]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12341,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:880: module-name */
t5=lf[8];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
f_5278(3,av2);}}}}

/* k10604 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10606,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:880: module-name */
t3=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
f_5278(3,av2);}}

/* k10611 in k10604 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10613,c,av);}
/* modules.scm:880: module-rename */
f_10570(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* g2860 in k10658 in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_10634,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:888: mrename */
t4=((C_word*)t0)[2];
f_10591(t4,t1,((C_word*)t0)[3]);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10658 in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10660,c,av);}
a=C_alloc(5);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10634,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li189),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:882: g2860 */
t4=t3;
f_10634(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:889: mrename */
t3=((C_word*)t0)[3];
f_10591(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10662(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10662,c,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10665,a[2]=t3,a[3]=((C_word)li191),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10671,a[2]=t5,a[3]=t2,a[4]=((C_word)li192),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[210],t2);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:899: iface */
t11=((C_word*)t7)[1];
f_10671(t11,t1,t2);}
else{
t11=C_i_listp(t2);
if(C_truep(C_i_not(t11))){
/* modules.scm:901: err */
t12=((C_word*)t5)[1];
f_10665(t12,t1,C_a_i_list(&a,2,lf[211],t2));}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10712,a[2]=t5,a[3]=t2,a[4]=t13,a[5]=t7,a[6]=((C_word)li194),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10712(t15,t1,t2);}}}}

/* err in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10665(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10665,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[177]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* iface in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10671,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_getprop(t2,lf[208],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:897: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10665(t4,t1,C_a_i_list(&a,3,lf[209],t2,((C_word*)t0)[3]));}}

/* loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10712(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_10712,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:906: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10665(t4,t1,C_a_i_list(&a,2,lf[212],((C_word*)t0)[3]));}
else{
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10744,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:909: loop */
t13=t5;
t14=C_u_i_cdr(t2);
t1=t13;
t2=t14;
goto loop;}
else{
t5=C_i_listp(t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:911: err */
t6=((C_word*)((C_word*)t0)[2])[1];
f_10665(t6,t1,C_a_i_list(&a,3,lf[213],t4,((C_word*)t0)[3]));}
else{
t6=C_i_car(t4);
t7=C_eqp(lf[214],t6);
if(C_truep(t7)){
t8=C_u_i_cdr(t4);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10770,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:913: loop */
t13=t9;
t14=C_u_i_cdr(t2);
t1=t13;
t2=t14;
goto loop;}
else{
t8=C_eqp(lf[215],C_u_i_car(t4));
if(C_truep(t8)){
t9=C_i_pairp(C_u_i_cdr(t4));
t10=(C_truep(t9)?C_i_symbolp(C_i_cadr(t4)):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10791,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:916: iface */
t12=((C_word*)((C_word*)t0)[5])[1];
f_10671(t12,t11,C_i_cadr(t4));}
else{
/* modules.scm:917: err */
t11=((C_word*)((C_word*)t0)[2])[1];
f_10665(t11,t1,C_a_i_list(&a,3,lf[216],t4,((C_word*)t0)[3]));}}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10821,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t10,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word)li193),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_10821(t12,t1,t4);}}}}}}}

/* k10742 in loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10744,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10768 in loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10770,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10789 in loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10791,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10795,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:916: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10712(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k10793 in k10789 in loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10795,c,av);}
/* modules.scm:916: scheme#append */
t2=*((C_word*)lf[58]+1);{
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

/* loop2 in loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10821(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10821,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10835,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:920: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_10712(t4,t3,C_i_cdr(((C_word*)t0)[4]));}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
/* modules.scm:921: loop2 */
t5=t1;
t6=C_u_i_cdr(t2);
t1=t5;
t2=t6;
goto loop;}
else{
/* modules.scm:922: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_10665(t4,t1,C_a_i_list(&a,3,lf[217],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* k10833 in loop2 in loop in ##sys#validate-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10835,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_10877,c,av);}
a=C_alloc(14);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_putprop(&a,3,t2,lf[100],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10893(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10893,c,av);}
a=C_alloc(18);
t5=C_i_getprop(t3,lf[100],C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10901,a[2]=t2,a[3]=((C_word)li197),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10908,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_10908(2,av2);}}
else{
/* modules.scm:931: err */
t8=t6;
f_10901(t8,t7,C_a_i_list(&a,2,lf[224],t3));}}

/* err in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10901,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[177]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10908(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10908,c,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li199),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10981,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11002,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t6,a[5]=t9,a[6]=((C_word)li201),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11002(t11,t7,((C_word*)t0)[4],t2);}

/* merr in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10918(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_10918,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[57]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10940,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10942,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li198),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10942(t12,t8,((C_word*)t0)[4]);}

/* k10938 in merr in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10940,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:936: err */
t3=((C_word*)t0)[3];
f_10901(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[220],((C_word*)t0)[5],t2));}

/* map-loop2938 in merr in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_10942(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10942,3,t0,t1,t2);}
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

/* k10979 in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_10981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_10981,c,av);}
a=C_alloc(18);
t2=C_eqp(lf[210],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[221],t4);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[222],t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11002(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_11002,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11014,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li200),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_11014(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:955: merr */
t4=((C_word*)t0)[4];
f_10918(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_u_i_cdr(t4);
t7=C_i_pairp(t5);
t8=(C_truep(t7)?C_i_car(t5):t5);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11089,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:963: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=t9;
av2[2]=C_i_car(t2);
tp(3,av2);}}}}

/* loop2 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11014(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11014,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t3);
t6=C_i_caar(t3);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11037,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11057,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:949: scheme#cadar */
t9=*((C_word*)lf[130]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* modules.scm:953: merr */
t5=((C_word*)t0)[5];
f_10918(t5,t1);}}}

/* k11035 in loop2 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_11037,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11040,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:950: match-functor-argument */
f_11119(t2,((C_word*)t0)[6],t1,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k11038 in k11035 in loop2 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11040,c,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11051,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:951: loop2 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_11014(t4,t3,C_u_i_cdr(((C_word*)t0)[6]));}

/* k11049 in k11038 in k11035 in loop2 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11051,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11055 in loop2 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11057,c,av);}
/* modules.scm:949: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k11087 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_11089,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11092,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:964: match-functor-argument */
f_11119(t2,((C_word*)t0)[7],t1,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k11090 in k11087 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11092,c,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11103,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:966: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_11002(t4,t3,C_u_i_cdr(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[7]));}

/* k11101 in k11090 in k11087 in loop in k10906 in ##sys#instantiate-functor in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11103,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11119(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_11119,5,t1,t2,t3,t4,t5);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11123,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11276,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:973: ##sys#resolve-module-name */
t8=*((C_word*)lf[59]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=lf[6];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11123(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11123,c,av);}
a=C_alloc(21);
t2=C_eqp(((C_word*)t0)[2],lf[210]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11130,a[2]=t1,a[3]=t4,a[4]=((C_word)li203),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[70]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11170,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11251,a[2]=t9,a[3]=t5,a[4]=((C_word)li205),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_11251(t11,t7,((C_word*)t0)[2]);}}

/* g2999 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11130,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=(
/* modules.scm:979: module-vexports */
  f_5440(lf[36],((C_word*)t0)[2])
);
t6=C_i_assq(t4,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11143,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_11143(t8,t6);}
else{
t8=(
/* modules.scm:980: module-sexports */
  f_5458(lf[39],((C_word*)t0)[2])
);
t9=t7;
f_11143(t9,C_i_assq(t4,t8));}}

/* k11141 in g2999 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11143(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_11143,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11170,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11183,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11187,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:988: scheme#symbol->string */
t4=*((C_word*)lf[145]+1);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11181 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11183,c,av);}
/* modules.scm:984: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=t1;
tp(4,av2);}}

/* k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11187,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:989: scheme#symbol->string */
t3=*((C_word*)lf[145]+1);{
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

/* k11189 in k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11191,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:990: scheme#symbol->string */
t3=*((C_word*)lf[145]+1);{
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

/* k11193 in k11189 in k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11195(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11195,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[57]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11215,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11217,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li204),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11217(t12,t8,t6);}

/* k11207 in map-loop3020 in k11193 in k11189 in k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11209,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[169]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[169]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[230];
av2[3]=t1;
tp(4,av2);}}

/* k11213 in k11193 in k11189 in k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,11)))){
C_save_and_reclaim((void *)f_11215,c,av);}{
C_word *av2;
if(c >= 12) {
  av2=av;
} else {
  av2=C_alloc(12);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[142]+1);
av2[3]=lf[225];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[226];
av2[6]=lf[227];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[228];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[229];
av2[11]=t1;
C_apply(12,av2);}}

/* map-loop3020 in k11193 in k11189 in k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_11217,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11209,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:991: scheme#symbol->string */
t6=*((C_word*)lf[145]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11240 in map-loop3020 in k11193 in k11189 in k11185 in k11168 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11242,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11217(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* for-each-loop2998 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11251(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11251,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11261,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:976: g2999 */
t4=((C_word*)t0)[3];
f_11130(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11259 in for-each-loop2998 in k11121 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11261,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_11251(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k11274 in match-functor-argument in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11276,c,av);}
/* modules.scm:973: ##sys#find-module */
t2=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[6];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11279,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11674,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1126: scheme#append */
t4=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[316];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_11282,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1132: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[315];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11285,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1133: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[314];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11288,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1135: ##sys#register-module-alias */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[312];
av2[3]=lf[313];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11291,c,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[233]+1 /* (set! se-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11293,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11666,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11670,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1297: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t5;
tp(2,av2);}}

/* se-subset in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11293(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11293,c,av);}
a=C_alloc(18);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11298,a[2]=t3,a[3]=((C_word)li207),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t2,lf[57]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11310,a[2]=t8,a[3]=t6,a[4]=t11,a[5]=t7,a[6]=((C_word)li208),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11310(t13,t1,t2);}

/* g3062 in se-subset in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_11298(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3056 in se-subset in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_11310(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11310,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1138: g3062 */
  f_11298(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11345,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11662,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1301: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t3;
tp(2,av2);}}

/* k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11348,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1303: ##sys#register-primitive-module */
t3=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[306];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=*((C_word*)lf[307]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11351,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1306: ##sys#register-primitive-module */
t3=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[304];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=*((C_word*)lf[305]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11354,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11658,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1310: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[303];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11357,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11654,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1313: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[301];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11360,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11650,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1316: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[299];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11363,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1318: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
av2[3]=lf[296];
av2[4]=lf[297];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11366,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11646,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1332: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[293];
av2[3]=*((C_word*)lf[294]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_11369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11369,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11642,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1335: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[290];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_11372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11372,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1337: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[287];
av2[3]=lf[248];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=*((C_word*)lf[288]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_11375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11375,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_assq(lf[283],*((C_word*)lf[232]+1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11638,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1348: se-subset */
t5=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[286];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_11378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11378,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1350: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[281];
av2[3]=lf[248];
av2[4]=lf[282];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in ... */
static void C_ccall f_11381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11381,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1357: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
av2[3]=lf[248];
av2[4]=lf[280];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in ... */
static void C_ccall f_11384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11384,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1384: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
av2[3]=lf[248];
av2[4]=lf[278];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in ... */
static void C_ccall f_11387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11387,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11626,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1397: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[275];
av2[3]=*((C_word*)lf[276]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in ... */
static void C_ccall f_11390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11390,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11622,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1400: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[272];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in ... */
static void C_ccall f_11393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11393,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1402: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[268];
av2[3]=lf[269];
av2[4]=lf[270];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in ... */
static void C_ccall f_11396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11396,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11618,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1406: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[267];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in ... */
static void C_ccall f_11399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11399,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11614,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1409: se-subset */
t4=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[265];
av2[3]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in ... */
static void C_ccall f_11402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11402,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1411: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[262];
av2[3]=lf[248];
av2[4]=lf[263];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in ... */
static void C_ccall f_11405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11405,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[234]+1 /* (set! chicken.module#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11407,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[238]+1 /* (set! scheme.eval#environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11443,a[2]=((C_word)li215),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1455: ##sys#register-core-module */
t5=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[260];
av2[3]=lf[254];
av2[4]=lf[261];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.module#module-environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in ... */
static void C_ccall f_11407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11407,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?t2:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11414,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1418: find-module/import-library */
f_9050(t5,t2,lf[235]);}

/* k11412 in chicken.module#module-environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in ... */
static void C_ccall f_11414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11414,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
/* modules.scm:1420: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[235];
av2[3]=lf[236];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=(
/* modules.scm:1422: module-saved-environments */
  f_5494(lf[45],t1)
);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record5(&a,5,lf[237],((C_word*)t0)[4],t3,t4,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in ... */
static void C_ccall f_11443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_11443,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11447,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1430: chicken.base#gensym */
t4=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[242];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in ... */
static void C_ccall f_11447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11447,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11449,a[2]=t1,a[3]=((C_word)li212),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11508,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li214),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1439: scheme#dynamic-wind */
t4=*((C_word*)lf[239]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[240]+1);
av2[3]=t3;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* delmod in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in ... */
static void C_ccall f_11449(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11449,c,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],*((C_word*)lf[64]+1));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11460,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[64]+1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11468,a[2]=t2,a[3]=t6,a[4]=((C_word)li211),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11468(t8,t3,*((C_word*)lf[64]+1));}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11458 in delmod in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in ... */
static void C_ccall f_11460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11460,c,av);}
t2=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#module-table ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in delmod in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in ... */
static void f_11468(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_11468,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11495,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1438: loop */
t8=t6;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}}}

/* k11493 in loop in delmod in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in ... */
static void C_ccall f_11495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11495,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a11507 in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in ... */
static void C_ccall f_11508(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_11508,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11512,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11555,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11557,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li213),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_11557(t11,t7,((C_word*)t0)[2]);}

/* k11510 in a11507 in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in ... */
static void C_ccall f_11512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11512,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1445: ##sys#find-module */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11513 in k11510 in a11507 in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in ... */
static void C_ccall f_11515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11515,c,av);}
a=C_alloc(9);
t2=(
/* modules.scm:1446: module-saved-environments */
  f_5494(lf[45],t1)
);
t3=C_a_i_cons(&a,2,lf[110],((C_word*)t0)[2]);
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_record5(&a,5,lf[237],t3,t4,t5,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11553 in a11507 in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in ... */
static void C_ccall f_11555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11555,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,lf[6],t3);
/* modules.scm:1443: scheme#eval */
t5=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop3116 in a11507 in k11445 in scheme.eval#environment in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in ... */
static void f_11557(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11557,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[110],t3);
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

/* k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in ... */
static void C_ccall f_11592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11592,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1460: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[258];
av2[3]=lf[254];
av2[4]=lf[259];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11593 in k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in ... */
static void C_ccall f_11595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11595,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11598,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1464: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[256];
av2[3]=lf[248];
av2[4]=lf[257];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11596 in k11593 in k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in ... */
static void C_ccall f_11598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11598,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1468: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[253];
av2[3]=lf[254];
av2[4]=lf[255];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11599 in k11596 in k11593 in k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in ... */
static void C_ccall f_11601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11601,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1472: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[251];
av2[3]=lf[248];
av2[4]=lf[252];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11602 in k11599 in k11596 in k11593 in k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in ... */
static void C_ccall f_11604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11604,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base.import.scm:26: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[247];
av2[3]=lf[248];
av2[4]=lf[249];
av2[5]=*((C_word*)lf[250]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11605 in k11602 in k11599 in k11596 in k11593 in k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in ... */
static void C_ccall f_11607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11607,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.syntax.import.scm:30: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[243];
av2[3]=lf[244];
av2[4]=lf[245];
av2[5]=*((C_word*)lf[246]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11608 in k11605 in k11602 in k11599 in k11596 in k11593 in k11590 in k11403 in k11400 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in ... */
static void C_ccall f_11610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11610,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11612 in k11397 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in ... */
static void C_ccall f_11614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11614,c,av);}
/* modules.scm:1408: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[264];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11616 in k11394 in k11391 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in ... */
static void C_ccall f_11618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11618,c,av);}
/* modules.scm:1405: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
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

/* k11620 in k11388 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in ... */
static void C_ccall f_11622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11622,c,av);}
/* modules.scm:1399: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11624 in k11385 in k11382 in k11379 in k11376 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in ... */
static void C_ccall f_11626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11626,c,av);}
/* modules.scm:1393: ##sys#register-core-module */
t2=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[273];
av2[3]=lf[248];
av2[4]=lf[274];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k11636 in k11373 in k11370 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_11638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11638,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:1342: ##sys#register-core-module */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[284];
av2[3]=lf[248];
av2[4]=lf[285];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11640 in k11367 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_11642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11642,c,av);}
/* modules.scm:1334: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[289];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11644 in k11364 in k11361 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_11646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11646,c,av);}
/* modules.scm:1321: ##sys#register-core-module */
t2=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[291];
av2[3]=lf[248];
av2[4]=lf[292];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k11648 in k11358 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11650,c,av);}
/* modules.scm:1315: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[298];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11652 in k11355 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11654,c,av);}
/* modules.scm:1312: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[300];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11656 in k11352 in k11349 in k11346 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11658,c,av);}
/* modules.scm:1309: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[302];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11660 in k11343 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11662,c,av);}
/* modules.scm:1300: ##sys#register-primitive-module */
t2=*((C_word*)lf[114]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[308];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11664 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11666,c,av);}
/* modules.scm:1140: ##sys#register-core-module */
t2=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[309];
av2[3]=lf[248];
av2[4]=lf[310];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k11668 in k11289 in k11286 in k11283 in k11280 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11670,c,av);}
/* modules.scm:1292: se-subset */
t2=*((C_word*)lf[233]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[311];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k11672 in k11277 in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_11674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11674,c,av);}
/* modules.scm:1124: ##sys#register-core-module */
t2=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[313];
av2[3]=lf[248];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3957 */
static void C_ccall f_3959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3959,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k3960 in k3957 */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3962,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3965,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3963 in k3960 in k3957 */
static void C_ccall f_3965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3965,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3968,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_3968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3968,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3971,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_3974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3974,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[1] /* (set! delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[2] /* (set! filter-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4629,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:78: scheme#make-parameter */
t5=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* delete in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_4465(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4465,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4471,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4471(t8,t1,t3);}

/* loop in delete in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_4471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4471,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:106: test */
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k4482 in loop in delete in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_4484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4484,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* mini-srfi-1.scm:107: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4471(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4498,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4471(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k4496 in k4482 in loop in delete in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_4498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4498,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6760 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_4546(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4546,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4560,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4573,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:123: delete */
f_4465(t6,t3,t4,((C_word*)t0)[3]);}}

/* k4558 in loop in k6760 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_4560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4560,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4571 in loop in k6760 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_4573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4573,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4546(t2,((C_word*)t0)[3],t1);}

/* filter-map in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_4629(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4629,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_check_list_2(t3,lf[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4638,a[2]=t2,a[3]=t6,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4638(t8,t1,t3);}

/* foldr339 in filter-map in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_4638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4638,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4646,a[2]=((C_word*)t0)[2],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4672,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g344 in foldr339 in filter-map in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_4646(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4646,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4650,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4648 in g344 in foldr339 in filter-map in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_4650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4650,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4654,a[2]=((C_word*)t0)[2],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: g354 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* mini-srfi-1.scm:135: g354 */
  f_4654(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g354 in k4648 in g344 in foldr339 in filter-map in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_4654(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k4670 in foldr339 in filter-map in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4672,c,av);}
/* mini-srfi-1.scm:134: g344 */
t2=((C_word*)t0)[2];
f_4646(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5256,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5260,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:79: scheme#make-parameter */
t4=*((C_word*)lf[318]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5260(C_word c,C_word *av){
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
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(231,c,16)))){
C_save_and_reclaim((void *)f_5260,c,av);}
a=C_alloc(231);
t2=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_a_i_vector1(&a,1,lf[6]);
t4=C_mutate((C_word*)lf[6]+1 /* (set! module ...) */,t3);
t5=*((C_word*)lf[6]+1);
t6=C_mutate(&lf[7] /* (set! %make-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5266,a[2]=t5,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[6]+1);
t8=*((C_word*)lf[6]+1);
t9=C_mutate(&lf[8] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5278,a[2]=t8,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t10=*((C_word*)lf[6]+1);
t11=C_mutate(&lf[10] /* (set! module-library ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5287,a[2]=t10,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t12=*((C_word*)lf[6]+1);
t13=C_mutate(&lf[12] /* (set! module-export-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5296,a[2]=t12,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t14=*((C_word*)lf[6]+1);
t15=C_mutate(&lf[14] /* (set! set-module-export-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5305,a[2]=t14,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t16=*((C_word*)lf[6]+1);
t17=C_mutate(&lf[16] /* (set! module-defined-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5314,a[2]=t16,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[6]+1);
t19=C_mutate(&lf[18] /* (set! set-module-defined-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5323,a[2]=t18,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[6]+1);
t21=C_mutate(&lf[19] /* (set! module-exist-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5332,a[2]=t20,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t22=*((C_word*)lf[6]+1);
t23=C_mutate(&lf[21] /* (set! set-module-exist-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5341,a[2]=t22,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t24=*((C_word*)lf[6]+1);
t25=C_mutate(&lf[22] /* (set! module-defined-syntax-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5350,a[2]=t24,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[6]+1);
t27=C_mutate(&lf[24] /* (set! set-module-defined-syntax-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5359,a[2]=t26,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[6]+1);
t29=C_mutate((C_word*)lf[25]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5368,a[2]=t28,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t30=*((C_word*)lf[6]+1);
t31=C_mutate((C_word*)lf[26]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5377,a[2]=t30,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t32=*((C_word*)lf[6]+1);
t33=C_mutate(&lf[27] /* (set! module-import-forms ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5386,a[2]=t32,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t34=*((C_word*)lf[6]+1);
t35=C_mutate(&lf[29] /* (set! set-module-import-forms! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5395,a[2]=t34,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp));
t36=*((C_word*)lf[6]+1);
t37=C_mutate(&lf[30] /* (set! module-meta-import-forms ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5404,a[2]=t36,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t38=*((C_word*)lf[6]+1);
t39=C_mutate(&lf[32] /* (set! set-module-meta-import-forms! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5413,a[2]=t38,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t40=*((C_word*)lf[6]+1);
t41=C_mutate(&lf[33] /* (set! module-meta-expressions ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5422,a[2]=t40,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t42=*((C_word*)lf[6]+1);
t43=C_mutate(&lf[35] /* (set! set-module-meta-expressions! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5431,a[2]=t42,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));
t44=*((C_word*)lf[6]+1);
t45=C_mutate(&lf[36] /* (set! module-vexports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5440,a[2]=t44,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp));
t46=*((C_word*)lf[6]+1);
t47=C_mutate(&lf[38] /* (set! set-module-vexports! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5449,a[2]=t46,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t48=*((C_word*)lf[6]+1);
t49=C_mutate(&lf[39] /* (set! module-sexports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5458,a[2]=t48,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t50=*((C_word*)lf[6]+1);
t51=C_mutate(&lf[41] /* (set! set-module-sexports! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5467,a[2]=t50,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t52=*((C_word*)lf[6]+1);
t53=C_mutate(&lf[42] /* (set! module-iexports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5476,a[2]=t52,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp));
t54=*((C_word*)lf[6]+1);
t55=C_mutate(&lf[44] /* (set! set-module-iexports! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5485,a[2]=t54,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t56=*((C_word*)lf[6]+1);
t57=C_mutate(&lf[45] /* (set! module-saved-environments ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5494,a[2]=t56,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t58=*((C_word*)lf[6]+1);
t59=C_mutate(&lf[47] /* (set! set-module-saved-environments! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5503,a[2]=t58,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp));
t60=*((C_word*)lf[6]+1);
t61=C_mutate(&lf[48] /* (set! module-rename-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5512,a[2]=t60,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t62=*((C_word*)lf[6]+1);
t63=C_mutate(&lf[50] /* (set! set-module-rename-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5521,a[2]=t62,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t64=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#module-name ...) */,lf[8]);
t65=C_mutate((C_word*)lf[52]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5531,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate(&lf[53] /* (set! make-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5549,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[54]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5564,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[55]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5582,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[59]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5685,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[63]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5732,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t71=C_SCHEME_FALSE;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5786,a[2]=t72,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t74=C_mutate((C_word*)lf[69]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5839,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[71]+1 /* (set! ##sys#add-to-export/rename-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5928,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[72]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5988,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[73]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5991,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate(&lf[74] /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6011,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[78]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6032,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[82]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6121,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[84]+1 /* (set! ##sys#unregister-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6202,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[85]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6295,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate(&lf[86] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6605,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[91]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6837,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[99]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7336,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[112]+1 /* (set! ##sys#register-core-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7670,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[114]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7784,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate(&lf[81] /* (set! find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7799,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[115]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7877,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t90=C_set_block_item(lf[64] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t91=C_mutate((C_word*)lf[93]+1 /* (set! ##sys#with-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8899,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[165]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9004,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t93=C_mutate(&lf[171] /* (set! find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9050,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[105]+1 /* (set! ##sys#decompose-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9065,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[195]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10060,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[197]+1 /* (set! ##sys#import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10124,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t97=C_mutate(&lf[80] /* (set! module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10570,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[206]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10588,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[207]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10662,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[218]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10877,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[219]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10893,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t102=C_mutate(&lf[223] /* (set! match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11119,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t103=lf[231];
t104=*((C_word*)lf[232]+1);
t105=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11279,a[2]=((C_word*)t0)[2],a[3]=t104,a[4]=t103,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1123: ##sys#register-core-module */
t106=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t106;
av2[1]=t105;
av2[2]=lf[317];
av2[3]=lf[248];
av2[4]=t103;
av2[5]=*((C_word*)lf[232]+1);
((C_proc)(void*)(*((C_word*)t106+1)))(6,av2);}}

/* %make-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5266(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13,C_word t14,C_word t15){
C_word tmp;
C_word t16;
C_stack_overflow_check;{}
return(C_a_i_record(&a,16,((C_word*)t0)[2],t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15));}

/* module-name in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5278,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[9]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* module-library in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[11]);
return(C_i_block_ref(t1,C_fix(2)));}

/* module-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5296(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[13]);
return(C_i_block_ref(t1,C_fix(3)));}

/* set-module-export-list! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5305(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5305,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(3);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-defined-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5314(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[17]);
return(C_i_block_ref(t1,C_fix(4)));}

/* set-module-defined-list! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5323(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5323,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(4);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-exist-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[20]);
return(C_i_block_ref(t1,C_fix(5)));}

/* set-module-exist-list! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5341(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5341,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(5);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-defined-syntax-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5350(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[23]);
return(C_i_block_ref(t1,C_fix(6)));}

/* set-module-defined-syntax-list! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5359(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5359,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(6);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-undefined-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5368,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[25]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(7));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* set-module-undefined-list! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5377,c,av);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(7);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-import-forms in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[28]);
return(C_i_block_ref(t1,C_fix(8)));}

/* set-module-import-forms! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5395(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5395,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-meta-import-forms in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[31]);
return(C_i_block_ref(t1,C_fix(9)));}

/* set-module-meta-import-forms! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5413(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5413,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(9);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-meta-expressions in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[34]);
return(C_i_block_ref(t1,C_fix(10)));}

/* set-module-meta-expressions! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5431(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5431,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(10);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-vexports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[37]);
return(C_i_block_ref(t1,C_fix(11)));}

/* set-module-vexports! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5449(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5449,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(11);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-sexports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5458(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[40]);
return(C_i_block_ref(t1,C_fix(12)));}

/* set-module-sexports! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5467(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5467,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(12);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-iexports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5476(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[43]);
return(C_i_block_ref(t1,C_fix(13)));}

/* set-module-iexports! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5485(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5485,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(13);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-saved-environments in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[46]);
return(C_i_block_ref(t1,C_fix(14)));}

/* set-module-saved-environments! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5503(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5503,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(14);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-rename-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[49]);
return(C_i_block_ref(t1,C_fix(15)));}

/* set-module-rename-list! in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5521(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5521,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(15);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#module-exports in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5531(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5531,c,av);}
t3=(
/* modules.scm:123: module-export-list */
  f_5296(lf[12],t2)
);
t4=(
/* modules.scm:124: module-vexports */
  f_5440(lf[36],t2)
);
t5=(
/* modules.scm:125: module-sexports */
  f_5458(lf[39],t2)
);
/* modules.scm:122: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
C_values(5,av2);}}

/* make-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5549(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;{}
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_car(t7));
return((
/* modules.scm:128: %make-module */
  f_5266(C_a_i(&a,17),lf[7],t1,t2,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4,t5,t6,C_SCHEME_FALSE,t9)
));}

/* ##sys#register-module-alias in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5564,c,av);}
a=C_alloc(7);
t4=C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5580,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
t6=*((C_word*)lf[5]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5578 in ##sys#register-module-alias in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5580,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:132: ##sys#module-alias-environment */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5582(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5582,c,av);}
a=C_alloc(21);
t4=*((C_word*)lf[5]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5586,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[57]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5645,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5651,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5651(t15,t11,t2);}

/* k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5586(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5586,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5591,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[3],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5614,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:136: ##sys#dynamic-wind */
t9=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a5590 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5591,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* modules.scm:136: ##sys#module-alias-environment973 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_5595(2,av2);}}}

/* k5593 in a5590 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5595,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:136: ##sys#module-alias-environment973 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5597 in k5593 in a5590 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5599,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:136: ##sys#module-alias-environment973 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k5600 in k5597 in k5593 in a5590 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5602,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5607 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5608,c,av);}
/* modules.scm:140: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5613 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5614,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:136: ##sys#module-alias-environment973 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5616 in a5613 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5618,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:136: ##sys#module-alias-environment973 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k5619 in k5616 in a5613 in k5584 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5621,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5643 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5645,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5649,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:139: ##sys#module-alias-environment */
t3=*((C_word*)lf[5]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5647 in k5643 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5649,c,av);}
/* modules.scm:137: scheme#append */
t2=*((C_word*)lf[58]+1);{
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

/* map-loop982 in ##sys#with-module-aliases in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5651(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5651,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#resolve-module-name in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5685,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5693,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:143: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[62]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k5691 in ##sys#resolve-module-name in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5693,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5695(t5,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* loop in k5691 in ##sys#resolve-module-name in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5695(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5695,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5730,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:144: ##sys#module-alias-environment */
t5=*((C_word*)lf[5]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* g1026 in k5728 in loop in k5691 in ##sys#resolve-module-name in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5703(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5703,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:148: chicken.base#error */
t4=*((C_word*)lf[60]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[61];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:149: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5695(t5,t1,t3,t4);}}

/* k5728 in loop in k5691 in ##sys#resolve-module-name in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5730,c,av);}
a=C_alloc(7);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:144: g1026 */
t4=t3;
f_5703(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#find-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5732(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5732,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_TRUE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_assq(t2,*((C_word*)lf[64]+1));
if(C_truep(t9)){
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
if(C_truep(t4)){
/* modules.scm:154: chicken.base#error */
t10=*((C_word*)lf[60]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t7;
av2[3]=lf[65];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5786,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5833,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:160: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5791 in k5835 in k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5793,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[5],a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:161: g1064 */
t4=t3;
f_5821(t4,t2,t1);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)t0)[5]);
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_5796(2,av2);}}}

/* k5794 in k5791 in k5835 in k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5796,c,av);}
a=C_alloc(8);
t2=(C_truep(((C_word*)t0)[2])?(
/* modules.scm:166: module-saved-environments */
  f_5494(lf[45],((C_word*)t0)[2])
):((C_word*)((C_word*)t0)[3])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:168: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t4;
av2[2]=C_i_car(t2);
tp(3,av2);}}
else{
/* modules.scm:170: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5800 in k5794 in k5791 in k5835 in k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5802,c,av);}
/* modules.scm:170: ##sys#current-module */
t2=*((C_word*)lf[4]+1);{
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

/* k5806 in k5794 in k5791 in k5835 in k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5808,c,av);}
/* modules.scm:169: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[67]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
tp(3,av2);}}

/* g1064 in k5791 in k5835 in k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5821(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5821,3,t0,t1,t2);}
/* modules.scm:163: set-module-saved-environments! */
t3=lf[47];
f_5503(t3,t1,t2,((C_word*)t0)[2]);}

/* k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5833,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5837,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:160: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5835 in k5831 in ##sys#switch-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5837,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5793,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:161: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5839(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5839,c,av);}
a=C_alloc(6);
t4=(
/* modules.scm:173: module-export-list */
  f_5296(lf[12],t2)
);
t5=C_eqp(t4,C_SCHEME_TRUE);
if(C_truep(t5)){
t6=(
/* modules.scm:175: module-exist-list */
  f_5332(lf[19],t2)
);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5855,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:176: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5926,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:186: scheme#append */
t7=*((C_word*)lf[58]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5855,c,av);}
a=C_alloc(25);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5864,a[2]=t3,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5856,a[2]=t1,a[3]=t4,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[70]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5898,a[2]=t5,a[3]=t9,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5898(t11,t7,((C_word*)t0)[2]);}

/* g1081 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5856(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return((
/* modules.scm:180: g1097 */
  f_5864(C_a_i(&a,3),((C_word*)t0)[3],t2)
));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* g1097 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_5864(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k5876 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5878,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5892,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:184: module-sexports */
  f_5458(lf[39],((C_word*)t0)[3])
);
/* modules.scm:184: scheme#append */
t5=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5879 in k5876 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5881,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:185: scheme#append */
t3=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5886 in k5879 in k5876 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5888,c,av);}
/* modules.scm:185: set-module-exist-list! */
t2=lf[21];
f_5341(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5890 in k5876 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5892,c,av);}
/* modules.scm:184: set-module-sexports! */
t2=lf[41];
f_5467(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* for-each-loop1080 in k5853 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5898(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5898,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:178: g1081 */
  f_5856(C_a_i(&a,3),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t5=t1;
t6=C_slot(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5924 in ##sys#add-to-export-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5926,c,av);}
/* modules.scm:186: set-module-export-list! */
t2=lf[14];
f_5305(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##sys#add-to-export/rename-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5928(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5928,c,av);}
a=C_alloc(9);
t4=(
/* modules.scm:189: module-rename-list */
  f_5512(lf[48],t2)
);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5935,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5986,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:190: scheme#append */
t7=*((C_word*)lf[58]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k5933 in ##sys#add-to-export/rename-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5935(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_5935,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5948,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5950,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5950(t11,t7,((C_word*)t0)[2]);}

/* k5946 in k5933 in ##sys#add-to-export/rename-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5948,c,av);}
/* modules.scm:191: ##sys#add-to-export-list */
t2=*((C_word*)lf[69]+1);{
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

/* map-loop1113 in k5933 in ##sys#add-to-export/rename-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_5950(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_5950,3,t0,t1,t2);}
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

/* k5984 in ##sys#add-to-export/rename-list in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5986,c,av);}
/* modules.scm:190: set-module-rename-list! */
t2=lf[50];
f_5521(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##sys#toplevel-definition-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5988(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5988,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#register-meta-expression in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5991,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5995,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:196: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5993 in ##sys#register-meta-expression in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5995,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(
/* modules.scm:197: module-meta-expressions */
  f_5422(lf[33],t1)
);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
/* modules.scm:197: set-module-meta-expressions! */
t4=lf[35];
f_5431(t4,((C_word*)t0)[3],t1,t3);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* check-for-redef in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6011(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6011,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:201: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t6;
av2[2]=lf[77];
av2[3]=t2;
tp(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_6018(2,av2);}}}

/* k6016 in check-for-redef in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6018,c,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:203: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[76];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6032(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6032,c,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(
/* modules.scm:207: module-export-list */
  f_5296(lf[12],t3)
);
t5=C_eqp(C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6042,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
f_6042(2,av2);}}
else{
/* modules.scm:208: find-export */
f_7799(t6,t2,t3,C_SCHEME_TRUE);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6042,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6045,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:209: module-undefined-list */
t3=*((C_word*)lf[25]+1);{
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

/* k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6045,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6048,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6108,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6112,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:211: module-name */
t5=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
f_5278(3,av2);}}

/* k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6048,c,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6104,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:213: delete */
f_4465(t4,t2,((C_word*)t0)[3],*((C_word*)lf[79]+1));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6054(2,av2);}}}

/* k6052 in k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6054,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6093,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:214: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6055 in k6052 in k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6057,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(
/* modules.scm:215: module-exist-list */
  f_5332(lf[19],((C_word*)t0)[4])
);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
/* modules.scm:215: set-module-exist-list! */
t5=lf[21];
f_5341(t5,t2,((C_word*)t0)[4],t4);}

/* k6058 in k6055 in k6052 in k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6060,c,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=(
/* modules.scm:221: module-defined-list */
  f_5314(lf[16],((C_word*)t0)[4])
);
t4=C_a_i_cons(&a,2,t2,t3);
/* modules.scm:218: set-module-defined-list! */
t5=lf[18];
f_5323(t5,((C_word*)t0)[5],((C_word*)t0)[4],t4);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6091 in k6052 in k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6093,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:214: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6095 in k6091 in k6052 in k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6097,c,av);}
/* modules.scm:214: check-for-redef */
f_6011(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6102 in k6046 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6104,c,av);}
/* modules.scm:213: set-module-undefined-list! */
t2=*((C_word*)lf[26]+1);{
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

/* k6106 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6108,c,av);}
/* modules.scm:210: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[72]+1);{
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

/* k6110 in k6043 in k6040 in ##sys#register-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6112,c,av);}
/* modules.scm:211: module-rename */
f_10570(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6121(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6121,c,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=(
/* modules.scm:225: module-export-list */
  f_5296(lf[12],t3)
);
t6=C_eqp(C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6131,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
f_6131(2,av2);}}
else{
/* modules.scm:226: find-export */
f_7799(t7,t2,t3,C_SCHEME_TRUE);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6131,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:227: module-undefined-list */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6134,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:228: module-name */
t3=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
f_5278(3,av2);}}

/* k6135 in k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6137,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[7]))){
/* modules.scm:230: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t2;
av2[2]=lf[83];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6140(2,av2);}}}

/* k6138 in k6135 in k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6140,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6183,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:231: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6141 in k6138 in k6135 in k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6143,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=(
/* modules.scm:237: module-defined-list */
  f_5314(lf[16],((C_word*)t0)[4])
);
t5=C_a_i_cons(&a,2,t3,t4);
/* modules.scm:234: set-module-defined-list! */
t6=lf[18];
f_5323(t6,t2,((C_word*)t0)[4],t5);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6149(2,av2);}}}

/* k6147 in k6141 in k6138 in k6135 in k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6149,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(
/* modules.scm:240: module-defined-syntax-list */
  f_5350(lf[22],((C_word*)t0)[4])
);
t4=C_a_i_cons(&a,2,t2,t3);
/* modules.scm:238: set-module-defined-syntax-list! */
t5=lf[24];
f_5359(t5,((C_word*)t0)[5],((C_word*)t0)[4],t4);}

/* k6181 in k6138 in k6135 in k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6183,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:231: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6185 in k6181 in k6138 in k6135 in k6132 in k6129 in ##sys#register-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6187,c,av);}
/* modules.scm:231: check-for-redef */
f_6011(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#unregister-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6202(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6202,c,av);}
a=C_alloc(7);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6213,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(
/* modules.scm:246: module-defined-syntax-list */
  f_5350(lf[22],t3)
);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6219,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:246: delete */
f_4465(t4,t2,t5,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6211 in ##sys#unregister-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6213,c,av);}
/* modules.scm:244: set-module-defined-syntax-list! */
t2=lf[24];
f_5359(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a6218 in ##sys#unregister-syntax-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6219,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(t2,C_i_car(t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6234 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6236(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6236,c,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6243,a[2]=((C_word*)t0)[3],a[3]=((C_word)li186),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:251: g1204 */
t4=t3;
f_6243(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:256: set-module-undefined-list! */
t6=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:256: set-module-undefined-list! */
t5=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* g1204 in k6234 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6243(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6243,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6250,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=t3;
f_6250(t5,C_i_not(C_i_memq(((C_word*)t0)[2],t4)));}
else{
t4=t3;
f_6250(t4,C_SCHEME_FALSE);}}

/* k6248 in g1204 in k6234 in g2849 in k10593 in mrename in ##sys#alias-global-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_6250,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_set_cdr(((C_word*)t0)[2],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#register-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6295(C_word c,C_word *av){
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
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(23,c,1)))){
C_save_and_reclaim((void *)f_6295,c,av);}
a=C_alloc(23);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=(
/* modules.scm:261: make-module */
  f_5549(C_a_i(&a,17),t2,t3,t4,t6,t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST)
);
t12=C_a_i_cons(&a,2,t2,t11);
t13=C_a_i_cons(&a,2,t12,*((C_word*)lf[64]+1));
t14=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#module-table ...) */,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6352(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6352,c,av);}
a=C_alloc(13);
t2=(
/* modules.scm:268: module-defined-list */
  f_5314(lf[16],((C_word*)t0)[2])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6401,a[2]=t1,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_8471(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6424,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6424(t8,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* warn in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6401(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6401,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6409,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6413,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:277: scheme#symbol->string */
t6=*((C_word*)lf[145]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6407 in warn in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6409,c,av);}
/* modules.scm:276: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k6411 in warn in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6413,c,av);}
/* modules.scm:277: scheme#string-append */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[143];
av2[4]=t1;
av2[5]=lf[144];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6424(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6424,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
/* modules.scm:283: loop */
t9=t1;
t10=C_u_i_cdr(t2);
t1=t9;
t2=t10;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6451,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li112),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6451(t8,t1,t4);}}}

/* loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6451(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6451,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* modules.scm:286: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6424(t3,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6599,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:287: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k6472 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_6474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6474,c,av);}
/* modules.scm:289: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6451(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* g1262 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void f_6488(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6488,3,t0,t1,t2);}
a=C_alloc(13);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6513,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,t3,t4);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f13056,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:296: loop2 */
t8=((C_word*)((C_word*)t0)[3])[1];
f_6451(t8,t7,C_u_i_cdr(((C_word*)t0)[2]));}
else{
/* modules.scm:295: module-rename */
f_10570(t5,C_u_i_car(((C_word*)t0)[2]),((C_word*)t0)[4]);}}

/* k6511 in g1262 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_6513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6513,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f13052,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:296: loop2 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6451(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* g1269 in k6587 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_6528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6528,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(t2);
t6=C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6546,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:300: loop2 */
t8=((C_word*)((C_word*)t0)[3])[1];
f_6451(t8,t7,C_u_i_cdr(((C_word*)t0)[2]));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6557,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:302: warn */
t5=((C_word*)t0)[4];
f_6401(t5,t4,lf[147],C_i_car(((C_word*)t0)[2]));}}

/* k6544 in g1269 in k6587 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_6546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6546,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6555 in g1269 in k6587 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_6557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6557,c,av);}
/* modules.scm:303: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6451(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k6574 in k6587 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_6576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6576,c,av);}
/* modules.scm:306: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6451(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k6587 in k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_6589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6589,c,av);}
a=C_alloc(6);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6528,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:286: g1269 */
t4=t3;
f_6528(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6576,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:305: warn */
t4=((C_word*)t0)[5];
f_6401(t4,t3,lf[148],C_u_i_car(((C_word*)t0)[3]));}}

/* k6597 in loop2 in loop in k6350 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6599,c,av);}
a=C_alloc(7);
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6474,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:288: warn */
t3=((C_word*)t0)[6];
f_6401(t3,t2,lf[146],C_u_i_car(((C_word*)t0)[5]));}
else{
t2=C_i_assq(C_u_i_car(((C_word*)t0)[5]),((C_word*)t0)[7]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6488,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:286: g1262 */
t4=t3;
f_6488(t4,((C_word*)t0)[4],t2);}
else{
t3=C_u_i_car(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6589,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:297: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t4;
tp(2,av2);}}}}

/* merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6605(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6605,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6609,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:309: chicken.internal#make-hash-table */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[90]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6609,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6612,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:309: scheme#reverse */
t3=*((C_word*)lf[89]+1);{
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

/* k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6612(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_6612,c,av);}
a=C_alloc(7);
t2=C_i_cdr(t1);
t3=C_u_i_car(t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6623,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6623(t7,((C_word*)t0)[3],t2,C_SCHEME_FALSE,t3);}

/* loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6623(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_6623,5,t0,t1,t2,t3,t4);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_eqp(t3,t5);
t7=(C_truep(t6)?t6:C_i_nullp(C_u_i_car(t2)));
if(C_truep(t7)){
/* modules.scm:313: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
if(C_truep(C_i_not(t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6651,a[2]=((C_word*)t0)[3],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t4,lf[70]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6665,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6670,a[2]=t12,a[3]=t8,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6670(t14,t10,t4);}
else{
t8=C_u_i_car(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6698,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6698(t12,t1,t8,t4);}}}}

/* g1300 in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6651(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6651,3,t0,t1,t2);}
/* modules.scm:315: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_i_car(t2);
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}

/* k6663 in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6665,c,av);}
/* modules.scm:316: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6623(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[5]);}

/* for-each-loop1299 in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6670,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6680,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:315: g1300 */
t4=((C_word*)t0)[3];
f_6651(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6678 in for-each-loop1299 in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6680,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6670(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* lp in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6698(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6698,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
/* modules.scm:318: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6623(t4,t1,C_i_cdr(((C_word*)t0)[3]),C_u_i_car(((C_word*)t0)[3]),t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6720,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:319: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_i_caar(t2);
tp(4,av2);}}}

/* k6718 in lp in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6720,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
/* modules.scm:320: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6698(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6728,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:321: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_caar(((C_word*)t0)[4]);
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}}

/* k6726 in k6718 in lp in loop in k6610 in k6607 in merge-se in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6728,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* modules.scm:322: lp */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6698(t5,((C_word*)t0)[5],t2,t4);}

/* k6760 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6762(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6762,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6773,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=*((C_word*)lf[79]+1);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4546,a[2]=t9,a[3]=t7,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4546(t11,t6,t1);}

/* k6771 in k6760 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6773,c,av);}
a=C_alloc(8);
t2=C_i_check_list_2(t1,lf[57]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6781,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6781(t6,((C_word*)t0)[4],t1);}

/* map-loop1335 in k6771 in k6760 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6781(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6781,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[104],t3);
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

/* a6814 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6815,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6821,a[2]=t2,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6827,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:326: ##sys#call-with-values */{
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

/* a6820 in a6814 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6821,c,av);}
/* modules.scm:326: ##sys#decompose-import */
t2=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[106]+1);
av2[4]=*((C_word*)lf[79]+1);
av2[5]=lf[6];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a6826 in a6814 in k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_6827,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6837(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6837,c,av);}
a=C_alloc(6);
t4=(
/* modules.scm:332: module-defined-list */
  f_5314(lf[16],t2)
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6844,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:333: module-name */
t6=lf[8];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
f_5278(3,av2);}}

/* k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6844(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6844,c,av);}
a=C_alloc(16);
t2=(
/* modules.scm:334: module-import-forms */
  f_5386(lf[27],((C_word*)t0)[2])
);
t3=(
/* modules.scm:335: module-sexports */
  f_5458(lf[39],((C_word*)t0)[2])
);
t4=(
/* modules.scm:336: module-meta-import-forms */
  f_5404(lf[30],((C_word*)t0)[2])
);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6872,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6876,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7319,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(((C_word*)t0)[5],lf[107]);
if(C_truep(t8)){
t9=C_i_pairp(t2);
t10=t7;
f_7319(t10,(C_truep(t9)?C_i_pairp(t3):C_SCHEME_FALSE));}
else{
t9=t7;
f_7319(t9,C_SCHEME_FALSE);}}

/* k6870 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_6872,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[92],t2);
t4=C_a_i_list(&a,2,lf[93],t3);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6876(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6876,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6880,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6884,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_i_pairp(((C_word*)t0)[8]);
t5=(C_truep(t4)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7310,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:343: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[98]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;
f_6884(t6,C_SCHEME_END_OF_LIST);}}

/* k6878 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6880,c,av);}
/* modules.scm:337: ##sys#append */
t2=*((C_word*)lf[94]+1);{
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

/* k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6884(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6884,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6892,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_pairp(((C_word*)t0)[7]);
t5=(C_truep(t4)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7282,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:346: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[98]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;
f_6892(t6,C_SCHEME_END_OF_LIST);}}

/* k6886 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6888,c,av);}
/* modules.scm:337: ##sys#append */
t2=*((C_word*)lf[94]+1);{
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

/* k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6892(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_6892,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6896,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6900,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_getprop(((C_word*)t0)[6],lf[100],C_SCHEME_FALSE);
t5=(C_truep(t4)?t4:C_i_pairp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7261,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(
/* modules.scm:349: module-meta-expressions */
  f_5422(lf[33],((C_word*)t0)[3])
);
/* modules.scm:349: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[98]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
f_6900(2,av2);}}}

/* k6894 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6896,c,av);}
/* modules.scm:337: ##sys#append */
t2=*((C_word*)lf[94]+1);{
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

/* k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6900,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:352: module-name */
t3=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
f_5278(3,av2);}}

/* k6930 in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6932(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_6932,2,t0,t1);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(
/* modules.scm:384: module-rename-list */
  f_5512(lf[48],((C_word*)t0)[2])
);
t7=C_i_check_list_2(t6,lf[57]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6968,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6970,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6970(t12,t8,t6);}

/* k6966 in k6930 in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_6968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_6968,c,av);}
a=C_alloc(30);
t2=C_a_i_cons(&a,2,lf[96],t1);
t3=C_a_i_list(&a,8,lf[99],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
t4=C_a_i_list(&a,1,t3);
/* modules.scm:337: ##sys#append */
t5=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[9];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop1479 in k6930 in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_6970(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_6970,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list(&a,2,lf[95],t4);
t6=C_u_i_cdr(t3);
t7=C_a_i_list(&a,2,lf[95],t6);
t8=C_a_i_list(&a,3,lf[97],t5,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t1=t13;
t2=t14;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7004 in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7006,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_6932(t2,C_a_i_cons(&a,2,lf[96],t1));}

/* loop in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7018(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7018,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
/* modules.scm:376: loop */
t11=t1;
t12=C_u_i_cdr(t2);
t1=t11;
t2=t12;
goto loop;}
else{
t4=C_i_caar(t2);
t5=C_u_i_car(t2);
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[95],t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7060,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_u_i_car(t2);
/* modules.scm:379: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[98]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_u_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}

/* k7048 in k7058 in loop in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7050,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7058 in loop in k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7060,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[97],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7050,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:380: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7018(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* g1432 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7075,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_car(t2);
t6=C_a_i_list(&a,2,lf[95],t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7099,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:366: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[98]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[95],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7097 in g1432 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7099,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[97],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7113 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7115(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7115,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,lf[96],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7006,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[9]))){
t5=t3;
f_6932(t5,C_a_i_cons(&a,2,lf[96],C_SCHEME_END_OF_LIST));}
else{
t5=(
/* modules.scm:374: module-defined-syntax-list */
  f_5350(lf[22],((C_word*)t0)[2])
);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[9],a[3]=t7,a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7018(t9,t4,t5);}}

/* map-loop1426 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7117,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:362: g1432 */
t4=((C_word*)t0)[4];
f_7075(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7140 in map-loop1426 in k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7142,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7117(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7202 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7204(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_7204,c,av);}
a=C_alloc(37);
t2=C_a_i_cons(&a,2,lf[96],t1);
t3=(
/* modules.scm:360: module-vexports */
  f_5440(lf[36],((C_word*)t0)[2])
);
t4=C_a_i_list(&a,2,lf[95],t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7075,a[2]=((C_word*)t0)[3],a[3]=((C_word)li68),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[4],lf[57]);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7117,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_7117(t15,t11,((C_word*)t0)[4]);}

/* map-loop1393 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7206(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_7206,3,t0,t1,t2);}
a=C_alloc(30);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_7231(t9,C_a_i_list(&a,2,lf[95],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[95],t6);
t8=C_a_i_list(&a,2,lf[95],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_7231(t10,C_a_i_list(&a,4,lf[96],t7,t8,t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7229 in map-loop1393 in k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7231(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7231,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7206(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7244 in k6898 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7246(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_7246,c,av);}
a=C_alloc(34);
t2=C_a_i_list(&a,2,lf[95],t1);
t3=(
/* modules.scm:353: module-library */
  f_5287(lf[10],((C_word*)t0)[2])
);
t4=C_a_i_list(&a,2,lf[95],t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(
/* modules.scm:359: module-iexports */
  f_5476(lf[42],((C_word*)t0)[2])
);
t10=C_i_check_list_2(t9,lf[57]);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7206,a[2]=t7,a[3]=t13,a[4]=t8,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_7206(t15,t11,t9);}

/* k7259 in k6890 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7261,c,av);}
/* modules.scm:349: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7280 in k6882 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7282,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[102],t1);
t3=((C_word*)t0)[2];
f_6892(t3,C_a_i_list(&a,1,t2));}

/* k7308 in k6874 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_7310,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[102],t1);
t3=C_a_i_list(&a,2,lf[95],t2);
t4=C_a_i_list(&a,2,lf[103],t3);
t5=((C_word*)t0)[2];
f_6884(t5,C_a_i_list(&a,1,t4));}

/* k7317 in k6842 in ##sys#compiled-module-registration in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7319(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7319,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6815,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
t4=(
/* modules.scm:327: module-import-forms */
  f_5386(lf[27],((C_word*)t0)[3])
);
/* modules.scm:325: filter-map */
f_4629(t2,t3,t4);}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
f_6876(2,av2);}}}

/* ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7336(C_word c,C_word *av){
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
C_word *a;
if(c<7) C_bad_min_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7336,c,av);}
a=C_alloc(13);
t7=C_rest_nullp(c,7);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,7,av,7,t0));
t9=C_rest_nullp(c,7);
t10=C_rest_nullp(c,8);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,8,av,7,t0));
t12=C_rest_nullp(c,8);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7378,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=t11,a[8]=t1,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7618,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:400: filter-map */
f_4629(t13,t14,t6);}

/* k7373 in a7605 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7375,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:396: ##sys#error */
t4=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[110];
av2[3]=lf[111];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* modules.scm:396: ##sys#error */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[110];
av2[3]=lf[111];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7378,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7606,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:405: filter-map */
f_4629(t2,t3,((C_word*)t0)[9]);}

/* k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7381(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7381,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7572,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7572(t11,t7,((C_word*)t0)[2]);}

/* k7395 in map-loop1541 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7397,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_7572(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7407,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:411: scheme#append */
t3=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7413(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_7413,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7414,a[2]=t1,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[70]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7439,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7517,a[2]=t6,a[3]=t2,a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7517(t8,t4,((C_word*)t0)[2]);}

/* g1574 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7414,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7426,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
if(C_truep(t5)){
/* modules.scm:422: merge-se */
f_6605(t4,C_a_i_list(&a,2,t5,((C_word*)t0)[2]));}
else{
/* modules.scm:422: merge-se */
f_6605(t4,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7424 in g1574 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7426,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7439(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7439,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7440,a[2]=((C_word*)t0)[2],a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[70]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7465,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7494,a[2]=t6,a[3]=t2,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7494(t8,t4,((C_word*)t0)[3]);}

/* g1584 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7440(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7440,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7452,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
if(C_truep(t5)){
/* modules.scm:426: merge-se */
f_6605(t4,C_a_i_list(&a,2,t5,((C_word*)t0)[2]));}
else{
/* modules.scm:426: merge-se */
f_6605(t4,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7450 in g1584 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7452,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7463 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7465,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7484,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7492,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:430: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7466 in k7463 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7468,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[64]+1));
t4=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7482 in k7463 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7484,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7488,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:431: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7486 in k7482 in k7463 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7488,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:428: set-module-saved-environments! */
t3=lf[47];
f_5503(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k7490 in k7463 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7492,c,av);}
a=C_alloc(9);
/* modules.scm:430: merge-se */
f_6605(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* for-each-loop1583 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7494,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7504,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:424: g1584 */
t4=((C_word*)t0)[3];
f_7440(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7502 in for-each-loop1583 in k7437 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7504,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7494(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1573 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7517(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7517,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7527,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:420: g1574 */
t4=((C_word*)t0)[3];
f_7414(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7525 in for-each-loop1573 in k7411 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7527,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7517(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k7549 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7551,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7555,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:417: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7553 in k7549 in k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7555,c,av);}
a=C_alloc(18);
/* modules.scm:415: merge-se */
f_6605(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k7568 in k7405 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7570(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,2)))){
C_save_and_reclaim((void *)f_7570,c,av);}
a=C_alloc(35);
t2=(
/* modules.scm:411: make-module */
  f_5549(C_a_i(&a,17),((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],t1,((C_word*)t0)[5],C_a_i_list(&a,1,((C_word*)t0)[6]))
);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7413,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t4=C_i_nullp(((C_word*)t0)[7]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_i_not(C_i_nullp(((C_word*)t0)[8])));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7551,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:416: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
f_7413(2,av2);}}}

/* map-loop1541 in k7379 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7572(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7572,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7397,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:409: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[108]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[108]+1);
av2[1]=t5;
av2[2]=C_u_i_cdr(t3);
av2[3]=C_u_i_car(t3);
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7605 in k7376 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7606,c,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7375,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:393: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7617 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7618(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7618,c,av);}
a=C_alloc(4);
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7636,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:402: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[108]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[108]+1);
av2[1]=t5;
av2[2]=C_u_i_cdr(t2);
av2[3]=C_u_i_car(t2);
tp(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7634 in a7617 in ##sys#register-compiled-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7636,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7670(C_word c,C_word *av){
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
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7670,c,av);}
a=C_alloc(7);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,5,av,5,t0));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7677,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:436: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t7;
tp(2,av2);}}

/* k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7677(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_7677,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7720,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[57]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7744,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li88),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7744(t12,t8,((C_word*)t0)[3]);}

/* k7681 in k7740 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7683,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[64]+1));
t4=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7697 in k7740 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7699,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7703,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:454: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7701 in k7697 in k7740 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7703,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:449: set-module-saved-environments! */
t3=lf[47];
f_5503(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k7705 in k7740 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7707,c,av);}
a=C_alloc(9);
t2=(
/* modules.scm:452: module-vexports */
  f_5440(lf[36],((C_word*)t0)[2])
);
t3=(
/* modules.scm:453: module-sexports */
  f_5458(lf[39],((C_word*)t0)[2])
);
/* modules.scm:451: merge-se */
f_6605(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t2,t3));}

/* g1642 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7720,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:443: ##sys#error */
t4=*((C_word*)lf[109]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[113];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7740 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,2)))){
C_save_and_reclaim((void *)f_7742,c,av);}
a=C_alloc(30);
t2=(
/* modules.scm:437: make-module */
  f_5549(C_a_i(&a,17),((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST)
);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7683,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7699,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7707,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:451: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t5;
tp(2,av2);}}

/* map-loop1636 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7744(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7744,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:440: g1642 */
t4=((C_word*)t0)[4];
f_7720(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7767 in map-loop1636 in k7675 in ##sys#register-core-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7769,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7744(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* ##sys#register-primitive-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7784,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* modules.scm:461: ##sys#register-core-module */
t4=*((C_word*)lf[112]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* modules.scm:461: ##sys#register-core-module */
t4=*((C_word*)lf[112]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
av2[5]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* find-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7799(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7799,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(
/* modules.scm:464: module-export-list */
  f_5296(lf[12],t3)
);
t6=C_eqp(C_SCHEME_TRUE,t5);
t7=(C_truep(t6)?(
/* modules.scm:465: module-exist-list */
  f_5332(lf[19],t3)
):t5);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7812,a[2]=t2,a[3]=t4,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(
  f_7812(t8,t7)
);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* loop in find-export in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_7812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_pairp(C_u_i_car(t1)))){
t4=C_i_caar(t1);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t5);}
else{
if(C_truep(((C_word*)t0)[3])){
t6=C_u_i_car(t1);
t7=C_i_memq(((C_word*)t0)[2],C_u_i_cdr(t6));
if(C_truep(t7)){
return(t7);}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}}}

/* ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7877(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7877,c,av);}
a=C_alloc(14);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8892,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp):C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7883,a[2]=t2,a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t6=(
/* modules.scm:546: module-export-list */
  f_5296(lf[12],t2)
);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8390,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:547: module-name */
t8=lf[8];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
f_5278(3,av2);}}

/* report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7883(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7883,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7887,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:485: scheme#open-output-string */
t4=*((C_word*)lf[125]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7887,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[116]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7893,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:486: ##sys#print */
t4=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[140];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7893,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8325,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:486: module-name */
t4=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
f_5278(3,av2);}}

/* k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7896,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:486: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[139];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7899(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_7899,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8216,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[57]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8287,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8289,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8289(t13,t9,((C_word*)t0)[4]);}

/* k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7902,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7903,a[2]=((C_word*)t0)[2],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8182,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8191,a[2]=t5,a[3]=t2,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8191(t7,t3,((C_word*)t0)[4]);}

/* g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7903(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_7903,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[116]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7910,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:501: ##sys#print */
t5=*((C_word*)lf[119]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[135];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7910,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:501: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7913,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:501: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[127]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[127]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7916,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7917,a[2]=((C_word*)t0)[2],a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:519: scheme#reverse */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7917(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_7917,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7920,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?(C_truep(C_u_i_car(t2))?C_u_i_cdr(t2):C_SCHEME_FALSE):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7950,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7960,a[2]=t3,a[3]=t2,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:511: g1821 */
t8=t7;
f_7960(t8,t6,t5);}
else{
t7=C_i_pairp(t2);
t8=(C_truep(t7)?C_u_i_cdr(t2):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8002,a[2]=t6,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:516: scheme#open-output-string */
t10=*((C_word*)lf[125]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8025,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:517: scheme#open-output-string */
t10=*((C_word*)lf[125]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* ln->num in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7920(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7920,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7924,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:506: chicken.string#string-split */
t4=*((C_word*)lf[117]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[118];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7922 in ln->num in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_7924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7924,c,av);}
if(C_truep(C_i_pairp(t1))){
t2=C_i_length(t1);
t3=C_eqp(C_fix(2),t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_i_cadr(t1):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7948 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_7950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7950,c,av);}
a=C_alloc(5);
t2=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[116]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7956,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:518: ##sys#print */
t4=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[120];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7954 in k7948 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_7956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7956,c,av);}
/* modules.scm:518: ##sys#print */
t2=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_7960(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7960,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7964,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:514: scheme#open-output-string */
t4=*((C_word*)lf[125]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7962 in g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_7964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7964,c,av);}
a=C_alloc(7);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[121]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7970,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:514: ##sys#print */
t4=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[124];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7968 in k7962 in g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_7970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7970,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:514: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[6]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7971 in k7968 in k7962 in g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_7973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7973,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:514: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[123];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7974 in k7971 in k7968 in k7962 in g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_7976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7976,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7986,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:514: ln->num */
f_7920(t3,((C_word*)t0)[5]);}

/* k7977 in k7974 in k7971 in k7968 in k7962 in g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in ... */
static void C_ccall f_7979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7979,c,av);}
/* modules.scm:514: scheme#get-output-string */
t2=*((C_word*)lf[122]+1);{
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

/* k7984 in k7974 in k7971 in k7968 in k7962 in g1821 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in ... */
static void C_ccall f_7986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7986,c,av);}
/* modules.scm:514: ##sys#print */
t2=*((C_word*)lf[119]+1);{
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

/* k8000 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8002,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[121]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8008,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:516: ##sys#print */
t4=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[126];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8006 in k8000 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8008,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8018,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:516: ln->num */
f_7920(t3,C_i_cdr(((C_word*)t0)[5]));}

/* k8009 in k8006 in k8000 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8011,c,av);}
/* modules.scm:516: scheme#get-output-string */
t2=*((C_word*)lf[122]+1);{
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

/* k8016 in k8006 in k8000 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8018,c,av);}
/* modules.scm:516: ##sys#print */
t2=*((C_word*)lf[119]+1);{
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

/* k8023 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8025,c,av);}
a=C_alloc(5);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[121]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8031,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:517: ##sys#print */
t4=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[128];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8029 in k8023 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8031,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:517: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8032 in k8029 in k8023 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8034,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8037,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:517: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[127]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[127]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8035 in k8032 in k8029 in k8023 in g1794 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_8037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8037,c,av);}
/* modules.scm:517: scheme#get-output-string */
t2=*((C_word*)lf[122]+1);{
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

/* k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8055,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8152,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8152(t6,t2,t1);}

/* k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8058,c,av);}
a=C_alloc(5);
t2=C_u_i_car(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_i_getprop(t2,lf[129],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[116]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8076,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:524: ##sys#print */
t6=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[134];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8076,c,av);}
a=C_alloc(5);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[116]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8088,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:527: ##sys#print */
t6=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[131];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[116]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8104,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:529: ##sys#print */
t6=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[133];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k8086 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8088,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8098,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:527: scheme#cadar */
t4=*((C_word*)lf[130]+1);{
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

/* k8089 in k8086 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_8091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8091,c,av);}
/* modules.scm:527: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[127]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[127]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8096 in k8086 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8098,c,av);}
/* modules.scm:527: ##sys#print */
t2=*((C_word*)lf[119]+1);{
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

/* k8102 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8104,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[2],a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8124,a[2]=t4,a[3]=t2,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8124(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1904 in k8102 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void f_8105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_8105,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[116]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8112,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:532: ##sys#print */
t5=*((C_word*)lf[119]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[132];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8110 in g1904 in k8102 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_8112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8112,c,av);}
/* modules.scm:532: ##sys#print */
t2=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop1903 in k8102 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void f_8124(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8124,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8134,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:530: g1904 */
t4=((C_word*)t0)[3];
f_8105(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8132 in for-each-loop1903 in k8102 in k8074 in k8056 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_8134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8134,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8124(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1793 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8152,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8162,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:504: g1794 */
t4=((C_word*)t0)[3];
f_7917(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8160 in for-each-loop1793 in k8053 in k7914 in k7911 in k7908 in g1726 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8162,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8152(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8180 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8182,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:536: scheme#get-output-string */
t3=*((C_word*)lf[122]+1);{
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

/* k8187 in k8180 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8189,c,av);}
/* modules.scm:536: ##sys#error */
t2=*((C_word*)lf[109]+1);{
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

/* for-each-loop1725 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8191(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8191,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8201,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:499: g1726 */
t4=((C_word*)t0)[3];
f_7903(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8199 in for-each-loop1725 in k7900 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8201,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8191(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8214 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8216,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8218,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8218(t5,((C_word*)t0)[3],t1);}

/* lp in k8214 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8218(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8218,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(t3)){
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_u_i_cdr(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8248,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:493: chicken.string#string-split */
t7=*((C_word*)lf[117]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[138];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* modules.scm:497: lp */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}
else{
/* modules.scm:497: lp */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k8246 in lp in k8214 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8248,c,av);}
a=C_alloc(5);
t2=C_eqp(C_fix(2),C_u_i_length(t1));
if(C_truep(t2)){
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[116]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:495: ##sys#print */
t5=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[137];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* modules.scm:497: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8218(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[5]));}}

/* k8258 in k8246 in lp in k8214 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8260,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:495: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8261 in k8258 in k8246 in lp in k8214 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8263,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:495: ##sys#print */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[136];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8264 in k8261 in k8258 in k8246 in lp in k8214 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8266,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8285 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8287,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[58]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop1761 in k7897 in k7894 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8289(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8289,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k8323 in k7891 in k7885 in report-unresolved-identifiers in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8325,c,av);}
/* modules.scm:486: ##sys#print */
t2=*((C_word*)lf[119]+1);{
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

/* loop in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_8337,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8380,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:541: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[160]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[160]+1);
av2[1]=t3;
av2[2]=C_i_caar(t2);
av2[3]=lf[161];
tp(4,av2);}}}

/* k8364 in k8374 in k8378 in loop in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8366,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8374 in k8378 in loop in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8376,c,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8366,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:544: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8337(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* k8378 in loop in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8380,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[162]);
if(C_truep(t2)){
/* modules.scm:542: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8337(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t3=C_i_caar(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8376,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:543: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8390(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_8390,c,av);}
a=C_alloc(19);
t2=(
/* modules.scm:548: module-defined-list */
  f_5314(lf[16],((C_word*)t0)[2])
);
t3=(
/* modules.scm:549: module-exist-list */
  f_5332(lf[19],((C_word*)t0)[2])
);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8399,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
t7=(
/* modules.scm:539: module-defined-syntax-list */
  f_5350(lf[22],((C_word*)t0)[2])
);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8337,a[2]=t9,a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8337(t11,t6,t7);}

/* k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8399,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8402,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
if(C_truep(t3)){
t4=(
/* modules.scm:554: module-sexports */
  f_5458(lf[39],((C_word*)t0)[4])
);
/* modules.scm:554: merge-se */
f_6605(t2,C_a_i_list(&a,2,t4,t1));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8834,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:555: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8402(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8402,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[9]);
t4=(C_truep(t3)?((C_word*)t0)[2]:((C_word*)t0)[9]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8645,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[11],a[8]=((C_word)li118),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_8645(t8,t2,t4);}

/* k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_8405,c,av);}
a=C_alloc(19);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8406,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8424,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:606: module-undefined-list */
t6=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* g1996 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_8406(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_car(t1);
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
return(t4);}}

/* k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8424(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8424,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[70]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8618,a[2]=((C_word*)t0)[11],a[3]=t5,a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8618(t7,t3,t1);}

/* k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8430,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[9])[1]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8433(2,av2);}}
else{
/* modules.scm:608: report-unresolved-identifiers */
t3=((C_word*)t0)[10];
f_7883(t3,t2,((C_word*)((C_word*)t0)[9])[1]);}}

/* k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8433,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:611: ##sys#error */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[149];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8436(2,av2);}}}

/* k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8436(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_8436,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t7=(
/* modules.scm:266: module-export-list */
  f_5296(lf[12],((C_word*)t0)[4])
);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:267: module-name */
t9=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
f_5278(3,av2);}}

/* k8462 in map-loop2015 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8464,c,av);}
a=C_alloc(3);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_8585(t3,C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST));}
else{
/* modules.scm:616: ##sys#error */
t3=*((C_word*)lf[109]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[141];
av2[3]=C_u_i_car(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8471(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_8471,c,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8575,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8575(t7,t3,t1);}

/* k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8477,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8569,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:619: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8480(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8480,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8481,a[2]=t1,a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[70]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8503,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8544,a[2]=t6,a[3]=t2,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8544(t8,t4,((C_word*)t0)[2]);}

/* g2051 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8481(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_8481,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8485,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:624: merge-se */
f_6605(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k8483 in g2051 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8485,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(C_u_i_cdr(((C_word*)t0)[3]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8503,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:635: set-module-vexports! */
t3=lf[38];
f_5449(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8509,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:636: set-module-sexports! */
t3=lf[41];
f_5467(t3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k8510 in k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8512,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8538,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:639: module-iexports */
  f_5476(lf[42],((C_word*)t0)[3])
);
/* modules.scm:639: merge-se */
f_6605(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[6]));}

/* k8513 in k8510 in k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_8515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8515,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8534,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:642: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8524 in k8513 in k8510 in k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_8526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8526,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8530,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:643: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8528 in k8524 in k8513 in k8510 in k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in ... */
static void C_ccall f_8530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8530,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:640: set-module-saved-environments! */
t3=lf[47];
f_5503(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k8532 in k8513 in k8510 in k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_8534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8534,c,av);}
a=C_alloc(9);
/* modules.scm:642: merge-se */
f_6605(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k8536 in k8510 in k8507 in k8501 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_8538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8538,c,av);}
/* modules.scm:637: set-module-iexports! */
t2=lf[44];
f_5485(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* for-each-loop2050 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8544(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8544,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8554,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:622: g2051 */
t4=((C_word*)t0)[3];
f_8481(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8552 in for-each-loop2050 in k8478 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8554,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8544(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8567 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8569,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8573,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:620: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8571 in k8567 in k8475 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8573,c,av);}
a=C_alloc(18);
/* modules.scm:618: merge-se */
f_6605(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop2015 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8575(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_8575,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8600,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_i_cdr(t5);
if(C_truep(C_i_symbolp(t6))){
t7=t3;
f_8585(t7,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t7=C_u_i_car(t5);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8464,a[2]=t7,a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:615: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t8;
tp(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8583 in map-loop2015 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_8585,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8575(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8598 in map-loop2015 in k8469 in k8434 in k8431 in k8428 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8600,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_8585(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* for-each-loop1995 in k8422 in k8403 in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8618(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8618,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:603: g1996 */
  f_8406(C_a_i(&a,3),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t5=t1;
t6=C_slot(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8645(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_8645,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8808,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:568: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[160]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[160]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[161];
tp(4,av2);}}}

/* k8689 in k8698 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8691,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8698 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8700,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8691,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:599: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8645(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* fail in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8711(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8711,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8715,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:580: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k8713 in fail in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8715,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* id-string in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8718(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8718,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8726,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:583: scheme#symbol->string */
t3=*((C_word*)lf[145]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8724 in id-string in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8726,c,av);}
/* modules.scm:583: scheme#string-append */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[151];
av2[3]=t1;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8745 in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8747,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:584: g1986 */
t3=t2;
f_8751(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8783,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:596: id-string */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8718(t4,t3);}
else{
/* modules.scm:598: bomb */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[158]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[158]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[159];
tp(3,av2);}}}}

/* g1986 in k8745 in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8751,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8759,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8763,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:592: id-string */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8718(t5,t4);}

/* k8757 in g1986 in k8745 in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8759,c,av);}
/* modules.scm:591: fail */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8711(t2,((C_word*)t0)[3],t1);}

/* k8761 in g1986 in k8745 in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8763,c,av);}
/* modules.scm:591: scheme#string-append */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[153];
av2[3]=t1;
av2[4]=lf[154];
av2[5]=((C_word*)t0)[3];
av2[6]=lf[155];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k8777 in k8745 in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8779,c,av);}
/* modules.scm:595: fail */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8711(t2,((C_word*)t0)[3],t1);}

/* k8781 in k8745 in k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8783,c,av);}
/* modules.scm:595: scheme#string-append */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[156];
av2[3]=t1;
av2[4]=lf[157];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8795 in k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8797(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8797,c,av);}
a=C_alloc(18);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8711,a[2]=((C_word*)t0)[3],a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8718,a[2]=((C_word*)t0)[2],a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp));
t9=(C_truep(t2)?C_i_symbolp(C_i_cdr(t2)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t2);
f_8700(2,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:587: module-rename */
f_10570(((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8747,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:588: invalid-export */
t11=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}}}

/* k8806 in loop in k8400 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8808,c,av);}
a=C_alloc(14);
t2=C_eqp(t1,lf[150]);
if(C_truep(t2)){
/* modules.scm:569: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8645(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
if(C_truep(C_i_assq(((C_word*)t0)[5],((C_word*)t0)[6]))){
/* modules.scm:570: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8645(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t3=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8700,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(t3)?C_i_symbolp(C_i_cdr(t3)):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_cdr(t3);
f_8700(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8797,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:578: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[68]+1);
av2[1]=t6;
tp(2,av2);}}}}}

/* k8832 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8834,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8836,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8836(t5,((C_word*)t0)[3],t1);}

/* loop in k8832 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_8836(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8836,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8884,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:557: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[160]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[160]+1);
av2[1]=t3;
av2[2]=C_i_caar(t2);
av2[3]=lf[161];
tp(4,av2);}}}

/* k8858 in k8882 in loop in k8832 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8860,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8869,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:560: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8836(t4,t3,C_u_i_cdr(((C_word*)t0)[2]));}
else{
/* modules.scm:561: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8836(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[2]));}}

/* k8867 in k8858 in k8882 in loop in k8832 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8869,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8882 in loop in k8832 in k8397 in k8388 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8884,c,av);}
a=C_alloc(5);
t2=C_eqp(t1,lf[162]);
if(C_truep(t2)){
/* modules.scm:558: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8836(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8860,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:559: find-export */
f_7799(t3,C_i_caar(((C_word*)t0)[4]),((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* f_8892 in ##sys#finalize-module in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8892,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8899(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8899,c,av);}
a=C_alloc(8);
t3=*((C_word*)lf[4]+1);
t4=*((C_word*)lf[68]+1);
t5=*((C_word*)lf[163]+1);
t6=*((C_word*)lf[67]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8903,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:654: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[163]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t7;
tp(2,av2);}}

/* k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8903,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8906,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:656: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[164]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[164]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8906(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_8906,c,av);}
a=C_alloc(37);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8911,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word)li122),tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8967,a[2]=((C_word*)t0)[7],a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8973,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word)li124),tmp=(C_word)a,a+=11,tmp);
/* modules.scm:651: ##sys#dynamic-wind */
t15=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[8];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8911,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:651: ##sys#current-module2085 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_8915(2,av2);}}}

/* k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8915,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:651: ##sys#current-environment2086 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_8918(2,av2);}}}

/* k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_8918,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:651: ##sys#current-meta-environment2087 */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[4])[1];
f_8921(2,av2);}}}

/* k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8921,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:651: ##sys#macro-environment2088 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
f_8924(2,av2);}}}

/* k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8924,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_8928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* modules.scm:651: ##sys#current-module2085 */
t3=((C_word*)t0)[13];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8928,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8932,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:651: ##sys#current-environment2086 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8932,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8936,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:651: ##sys#current-meta-environment2087 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8934 in k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8936,c,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8940,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:651: ##sys#macro-environment2088 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8938 in k8934 in k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_8940,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8943,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:651: ##sys#current-module2085 */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k8941 in k8938 in k8934 in k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8943,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:651: ##sys#current-environment2086 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8944 in k8941 in k8938 in k8934 in k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_8946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8946,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:651: ##sys#current-meta-environment2087 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8947 in k8944 in k8941 in k8938 in k8934 in k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_8949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8949,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:651: ##sys#macro-environment2088 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8950 in k8947 in k8944 in k8941 in k8938 in k8934 in k8930 in k8926 in k8922 in k8919 in k8916 in k8913 in a8910 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_8952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8952,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a8966 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8967,c,av);}
/* modules.scm:657: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8973,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:651: ##sys#current-module2085 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8977,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8980,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:651: ##sys#current-environment2086 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8980,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:651: ##sys#current-meta-environment2087 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8981 in k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8983,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:651: ##sys#macro-environment2088 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8984 in k8981 in k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_8986,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:651: ##sys#current-module2085 */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8987 in k8984 in k8981 in k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8989,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:651: ##sys#current-environment2086 */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8990 in k8987 in k8984 in k8981 in k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8992,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:651: ##sys#current-meta-environment2087 */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8993 in k8990 in k8987 in k8984 in k8981 in k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8995,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:651: ##sys#macro-environment2088 */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8996 in k8993 in k8990 in k8987 in k8984 in k8981 in k8978 in k8975 in a8972 in k8904 in k8901 in ##sys#with-environment in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_8998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8998,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9004,c,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9008,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9043,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9047,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:661: scheme#symbol->string */
t6=*((C_word*)lf[145]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9006 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9008,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9016,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:663: ##sys#with-environment */
t3=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a9015 in k9006 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9016(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_9016,c,av);}
a=C_alloc(19);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9022,a[2]=t5,a[3]=t3,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9036,a[2]=t3,a[3]=t5,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:665: ##sys#dynamic-wind */
t9=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a9021 in a9015 in k9006 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9022,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[166]+1));
t3=C_mutate((C_word*)lf[166]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a9026 in a9015 in k9006 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9027,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9031,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:666: scheme#load */
t3=*((C_word*)lf[167]+1);{
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

/* k9029 in a9026 in a9015 in k9006 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9031,c,av);}
/* modules.scm:667: ##sys#find-module */
t2=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[110];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a9035 in a9015 in k9006 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9036,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[166]+1));
t3=C_mutate((C_word*)lf[166]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9041 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9043,c,av);}
/* modules.scm:660: chicken.load#find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[168]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[168]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k9045 in ##sys#import-library-hook in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9047,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[169]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[169]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[170];
tp(4,av2);}}

/* find-module/import-library in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9050(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_9050,3,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9054,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:670: ##sys#resolve-module-name */
t5=*((C_word*)lf[59]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k9052 in find-module/import-library in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9054,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9057,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:671: ##sys#find-module */
t3=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9055 in k9052 in find-module/import-library in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9057,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* modules.scm:672: ##sys#import-library-hook */
t2=*((C_word*)lf[165]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9065,c,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9069,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:675: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[194];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9069,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:676: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9072,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:677: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[192];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9075,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:678: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9078(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_9078,c,av);}
a=C_alloc(29);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9080,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9094,a[2]=((C_word*)t0)[2],a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9138,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9224,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word)li169),tmp=(C_word)a,a+=13,tmp);
/* modules.scm:697: scheme#call-with-current-continuation */
t12=*((C_word*)lf[190]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=((C_word*)t0)[8];
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* warn in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9080(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9080,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9088,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9092,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:680: scheme#symbol->string */
t7=*((C_word*)lf[145]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k9086 in warn in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9088,c,av);}
/* modules.scm:680: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9090 in warn in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9092,c,av);}
/* modules.scm:680: scheme#string-append */
t2=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[172];
av2[4]=t1;
av2[5]=lf[173];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tostr in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9094,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_stringp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9107,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:683: chicken.keyword#keyword? */
t4=*((C_word*)lf[179]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9105 in tostr in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9107,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:683: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[175]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[175]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:684: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[175]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[175]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[176]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[176]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(10);
tp(4,av2);}}
else{
/* modules.scm:686: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[178];
tp(4,av2);}}}}}

/* k9112 in k9105 in tostr in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9114,c,av);}
/* modules.scm:683: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[169]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[169]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[174];
tp(4,av2);}}

/* export-rename in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9138(C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_9138,3,t1,t2,t3);}
a=C_alloc(18);
t4=(
/* modules.scm:688: module-rename-list */
  f_5512(lf[48],t2)
);
if(C_truep(C_i_nullp(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9152,a[2]=t4,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(t3,lf[57]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9187,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=t8,a[6]=((C_word)li136),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_9187(t14,t1,t3);}}

/* g2194 in export-rename in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_9152,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9160,a[2]=t2,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:692: g2212 */
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
/* modules.scm:692: g2212 */
  f_9160(C_a_i(&a,3),t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* g2212 in g2194 in export-rename in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static C_word f_9160(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
t3=C_i_cdr(((C_word*)t0)[2]);
return(C_a_i_cons(&a,2,t2,t3));}

/* map-loop2188 in export-rename in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9187(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9187,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:691: g2194 */
t4=((C_word*)t0)[4];
f_9152(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9210 in map-loop2188 in export-rename in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9212,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9187(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9224(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_9224,c,av);}
a=C_alloc(21);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9227,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li138),tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9283,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word)li168),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_9283(t7,t1,((C_word*)t0)[11]);}

/* module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9227(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9227,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9231,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:700: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k9229 in module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9231,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:701: find-module/import-library */
f_9050(t2,t1,((C_word*)t0)[5]);}

/* k9232 in k9229 in module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_9234,c,av);}
a=C_alloc(5);
if(C_truep(C_i_not(t1))){
/* modules.scm:703: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(8,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9250,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:704: module-name */
t3=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
f_5278(3,av2);}}}

/* k9248 in k9232 in k9229 in module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9250,c,av);}
a=C_alloc(7);
t2=(
/* modules.scm:705: module-library */
  f_5287(lf[10],((C_word*)t0)[2])
);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:706: module-name */
t4=lf[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
f_5278(3,av2);}}

/* k9256 in k9248 in k9232 in k9229 in module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9258,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(
/* modules.scm:707: module-vexports */
  f_5440(lf[36],((C_word*)t0)[2])
);
/* modules.scm:707: export-rename */
f_9138(t2,((C_word*)t0)[2],t3);}

/* k9260 in k9256 in k9248 in k9232 in k9229 in module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9262,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(
/* modules.scm:708: module-sexports */
  f_5458(lf[39],((C_word*)t0)[2])
);
/* modules.scm:708: export-rename */
f_9138(t2,((C_word*)t0)[2],t3);}

/* k9264 in k9260 in k9256 in k9248 in k9232 in k9229 in module-imports in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_9266,c,av);}
t2=(
/* modules.scm:709: module-iexports */
  f_5476(lf[42],((C_word*)t0)[2])
);
/* modules.scm:704: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
av2[6]=t1;
av2[7]=t2;
C_values(8,av2);}}

/* outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_9283,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9297,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:712: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[98]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:714: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[180];
av2[4]=t2;
tp(5,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9315,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:717: c */
t6=((C_word*)t0)[7];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[11];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}}

/* k9295 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9297,c,av);}
/* modules.scm:712: module-imports */
t2=((C_word*)t0)[2];
f_9227(t2,((C_word*)t0)[3],t1);}

/* k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_9315,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:718: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[182]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[182]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[183];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:736: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[13];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9318,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9333,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:719: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9322 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9323,c,av);}
/* modules.scm:719: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9283(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9333(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9333,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9337,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t5,a[9]=t6,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:720: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[98]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,6)))){
C_save_and_reclaim((void *)f_9337,c,av);}
a=C_alloc(15);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word)li144),tmp=(C_word)a,a+=13,tmp));
t5=((C_word*)t3)[1];
f_9342(t5,((C_word*)t0)[10],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9342(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(23,0,5)))){
C_save_and_reclaim_args((void *)trf_9342,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(t5,lf[70]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9360,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9373,a[2]=t10,a[3]=t6,a[4]=((C_word)li141),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_9373(t12,t8,t5);}
else{
t6=C_i_car(t2);
t7=C_i_assq(t6,((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9401,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=t5,a[7]=((C_word)li142),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:722: g2299 */
t9=t8;
f_9401(t9,t1,t7);}
else{
t8=C_i_assq(C_u_i_car(t2),((C_word*)t0)[11]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9423,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=t3,a[6]=t5,a[7]=((C_word)li143),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:722: g2303 */
t10=t9;
f_9423(t10,t1,t8);}
else{
t9=C_u_i_cdr(t2);
t10=C_u_i_car(t2);
t11=C_a_i_cons(&a,2,t10,t5);
/* modules.scm:735: loop */
t13=t1;
t14=t9;
t15=t3;
t16=t4;
t17=t11;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
t5=t17;
goto loop;}}}}

/* g2279 in loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9350(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9350,3,t0,t1,t2);}
/* modules.scm:725: warn */
f_9080(t1,lf[181],((C_word*)t0)[3],t2);}

/* k9358 in loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9360,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:727: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2278 in loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9373,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9383,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:723: g2279 */
t4=((C_word*)t0)[3];
f_9350(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9381 in for-each-loop2278 in loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_9383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9383,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9373(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g2299 in loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_9401,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:730: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9342(t5,t1,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* g2303 in loop in k9335 in a9332 in k9316 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_9423,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:733: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9342(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[6]);}

/* k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9465,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:737: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[182]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[182]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[185];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:759: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9468,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9483,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:738: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9472 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9473,c,av);}
/* modules.scm:738: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9283(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9483(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9483,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9487,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t6,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:739: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[98]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9487,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word)li152),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_9492(t5,((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_END_OF_LIST,t1);}

/* loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void f_9492(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_9492,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li150),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_9504(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9604,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:741: g2382 */
t8=t7;
f_9604(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:758: loopv */
t11=t1;
t12=t7;
t13=t9;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void f_9504(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_9504,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li147),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(t4,lf[70]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9522,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9535,a[2]=t9,a[3]=t5,a[4]=((C_word)li148),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_9535(t11,t7,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9563,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li149),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:743: g2377 */
t8=t7;
f_9563(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:753: loops */
t12=t1;
t13=t7;
t14=t9;
t15=t4;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}}

/* g2357 in loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_9512(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9512,3,t0,t1,t2);}
/* modules.scm:746: warn */
f_9080(t1,lf[184],((C_word*)t0)[3],t2);}

/* k9520 in loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_9522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9522,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:748: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2356 in loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_9535(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9535,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9545,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:744: g2357 */
t4=((C_word*)t0)[3];
f_9512(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9543 in for-each-loop2356 in loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9545,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9535(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g2377 in loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_9563(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_9563,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9575,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:751: delete */
f_4465(t4,C_i_car(t2),((C_word*)t0)[5],*((C_word*)lf[79]+1));}

/* k9573 in g2377 in loops in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9575,c,av);}
/* modules.scm:751: loops */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9504(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g2382 in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void f_9604(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_9604,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9616,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:756: delete */
f_4465(t4,C_i_car(t2),((C_word*)t0)[5],*((C_word*)lf[79]+1));}

/* k9614 in g2382 in loopv in k9485 in a9482 in k9466 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_9616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9616,c,av);}
/* modules.scm:756: loopv */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9492(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_9648,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:760: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[182]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[182]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[187];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:786: c */
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
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9651,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li154),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9666,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li162),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:761: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9655 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9656,c,av);}
/* modules.scm:761: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9283(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9666(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9666,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9670,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t6,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:762: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[98]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9670,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word)li161),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_9675(t5,((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_END_OF_LIST,t1);}

/* loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void f_9675(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_9675,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li159),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_9687(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9842,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li160),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:764: g2487 */
t8=t7;
f_9842(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:785: loopv */
t11=t1;
t12=t7;
t13=t9;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_9687(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,4)))){
C_save_and_reclaim_args((void *)trf_9687,5,t0,t1,t2,t3,t4);}
a=C_alloc(30);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li155),tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t4,lf[57]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9708,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t5,tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9750,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li157),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9750(t15,t11,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9789,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li158),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:766: g2482 */
t8=t7;
f_9789(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:778: loops */
t16=t1;
t17=t7;
t18=t9;
t19=t4;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2436 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void f_9695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9695,3,t0,t1,t2);}
/* modules.scm:769: warn */
f_9080(t1,lf[186],((C_word*)t0)[3],t2);}

/* k9706 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9708(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_9708,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[70]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9727,a[2]=t5,a[3]=((C_word*)t0)[11],a[4]=((C_word)li156),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9727(t7,t3,t1);}

/* k9712 in k9706 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_9714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9714,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:771: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2435 in k9706 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void f_9727(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9727,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9737,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:767: g2436 */
t4=((C_word*)t0)[3];
f_9695(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9735 in for-each-loop2435 in k9706 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in ... */
static void C_ccall f_9737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9737,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9727(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop2448 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void f_9750(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9750,3,t0,t1,t2);}
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

/* g2482 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void f_9789(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9789,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9805,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:776: delete */
f_4465(t8,t2,((C_word*)t0)[5],*((C_word*)lf[79]+1));}

/* k9803 in g2482 in loops in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_9805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9805,c,av);}
/* modules.scm:774: loops */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9687(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g2487 in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_9842(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9842,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:783: delete */
f_4465(t8,t2,((C_word*)t0)[5],*((C_word*)lf[79]+1));}

/* k9856 in g2487 in loopv in k9668 in a9665 in k9649 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9858,c,av);}
/* modules.scm:781: loopv */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9675(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_9898,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:787: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[182]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[182]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[189];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10054,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:797: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[98]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9901,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li163),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9916,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li167),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:788: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9905 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9906,c,av);}
/* modules.scm:788: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9283(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 */
static void C_ccall f_9916(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9916,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t1,a[8]=t2,a[9]=t3,a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:789: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[98]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in k3957 in ... */
static void C_ccall f_9920(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_9920,c,av);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9922,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li164),tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[5],lf[57]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9965,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=((C_word*)t0)[10],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10011,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=((C_word)li166),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10011(t13,t9,((C_word*)t0)[5]);}

/* rename in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void f_9922(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_9922,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9930,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9936,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9940,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:793: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9094(t6,t5,((C_word*)t0)[3]);}

/* k9928 in rename in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9930,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9934 in rename in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9936,c,av);}
/* modules.scm:792: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[188]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[188]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k9938 in rename in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9940,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9944,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:793: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[175]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[175]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
tp(3,av2);}}

/* k9942 in k9938 in rename in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in ... */
static void C_ccall f_9944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9944,c,av);}
/* modules.scm:793: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[169]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[169]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9963 in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in k3960 in ... */
static void C_ccall f_9965(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9965,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9977,a[2]=t4,a[3]=t9,a[4]=((C_word*)t0)[8],a[5]=t5,a[6]=((C_word)li165),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_9977(t11,t7,((C_word*)t0)[2]);}

/* k9973 in k9963 in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void C_ccall f_9975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_9975,c,av);}
/* modules.scm:795: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=t1;
av2[7]=((C_word*)t0)[7];
C_values(8,av2);}}

/* map-loop2553 in k9963 in k9918 in a9915 in k9899 in k9896 in k9646 in k9463 in k9313 in outer in a9223 in k9076 in k9073 in k9070 in k9067 in ##sys#decompose-import in k5258 in k5254 in k3972 in k3969 in k3966 in k3963 in ... */
static void f_9977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9977,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:795: g2559 */
t4=((C_word*)t0)[4];
f_9922(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_modules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_modules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(13416))){
C_save(t1);
C_rereclaim2(13416*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,319);
lf[0]=C_h_intern(&lf[0],7, C_text("modules"));
lf[3]=C_h_intern(&lf[3],5, C_text("foldr"));
lf[4]=C_h_intern(&lf[4],20, C_text("##sys#current-module"));
lf[5]=C_h_intern(&lf[5],30, C_text("##sys#module-alias-environment"));
lf[6]=C_h_intern(&lf[6],6, C_text("module"));
lf[9]=C_h_intern(&lf[9],11, C_text("module-name"));
lf[11]=C_h_intern(&lf[11],14, C_text("module-library"));
lf[13]=C_h_intern(&lf[13],18, C_text("module-export-list"));
lf[15]=C_h_intern(&lf[15],16, C_text("##sys#block-set!"));
lf[17]=C_h_intern(&lf[17],19, C_text("module-defined-list"));
lf[20]=C_h_intern(&lf[20],17, C_text("module-exist-list"));
lf[23]=C_h_intern(&lf[23],26, C_text("module-defined-syntax-list"));
lf[25]=C_h_intern(&lf[25],21, C_text("module-undefined-list"));
lf[26]=C_h_intern(&lf[26],26, C_text("set-module-undefined-list!"));
lf[28]=C_h_intern(&lf[28],19, C_text("module-import-forms"));
lf[31]=C_h_intern(&lf[31],24, C_text("module-meta-import-forms"));
lf[34]=C_h_intern(&lf[34],23, C_text("module-meta-expressions"));
lf[37]=C_h_intern(&lf[37],15, C_text("module-vexports"));
lf[40]=C_h_intern(&lf[40],15, C_text("module-sexports"));
lf[43]=C_h_intern(&lf[43],15, C_text("module-iexports"));
lf[46]=C_h_intern(&lf[46],25, C_text("module-saved-environments"));
lf[49]=C_h_intern(&lf[49],18, C_text("module-rename-list"));
lf[51]=C_h_intern(&lf[51],17, C_text("##sys#module-name"));
lf[52]=C_h_intern(&lf[52],20, C_text("##sys#module-exports"));
lf[54]=C_h_intern(&lf[54],27, C_text("##sys#register-module-alias"));
lf[55]=C_h_intern(&lf[55],25, C_text("##sys#with-module-aliases"));
lf[56]=C_h_intern(&lf[56],18, C_text("##sys#dynamic-wind"));
lf[57]=C_h_intern(&lf[57],3, C_text("map"));
lf[58]=C_h_intern(&lf[58],13, C_text("scheme#append"));
lf[59]=C_h_intern(&lf[59],25, C_text("##sys#resolve-module-name"));
lf[60]=C_h_intern(&lf[60],18, C_text("chicken.base#error"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\155\157\144\165\154\145\040\141\154\151\141\163\040\162\145\146\145\162\163\040\164\157\040\151\164\163\145\154\146\000"));
lf[62]=C_h_intern(&lf[62],27, C_text("chicken.internal#library-id"));
lf[63]=C_h_intern(&lf[63],17, C_text("##sys#find-module"));
lf[64]=C_h_intern(&lf[64],18, C_text("##sys#module-table"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\155\157\144\165\154\145\040\156\157\164\040\146\157\165\156\144\000"));
lf[66]=C_h_intern(&lf[66],19, C_text("##sys#switch-module"));
lf[67]=C_h_intern(&lf[67],23, C_text("##sys#macro-environment"));
lf[68]=C_h_intern(&lf[68],25, C_text("##sys#current-environment"));
lf[69]=C_h_intern(&lf[69],24, C_text("##sys#add-to-export-list"));
lf[70]=C_h_intern(&lf[70],8, C_text("for-each"));
lf[71]=C_h_intern(&lf[71],31, C_text("##sys#add-to-export/rename-list"));
lf[72]=C_h_intern(&lf[72],30, C_text("##sys#toplevel-definition-hook"));
lf[73]=C_h_intern(&lf[73],30, C_text("##sys#register-meta-expression"));
lf[75]=C_h_intern(&lf[75],10, C_text("##sys#warn"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\162\145\144\145\146\151\156\151\164\151\157\156\040\157\146\040\163\171\156\164\141\170\040\142\151\156\144\151\156\147\000"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\162\145\144\145\146\151\156\151\164\151\157\156\040\157\146\040\166\141\154\165\145\040\142\151\156\144\151\156\147\000"));
lf[78]=C_h_intern(&lf[78],21, C_text("##sys#register-export"));
lf[79]=C_h_intern(&lf[79],10, C_text("scheme#eq?"));
lf[82]=C_h_intern(&lf[82],28, C_text("##sys#register-syntax-export"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\165\163\145\040\157\146\040\163\171\156\164\141\170\040\160\162\145\143\145\144\145\163\040\144\145\146\151\156\151\164\151\157\156\000"));
lf[84]=C_h_intern(&lf[84],30, C_text("##sys#unregister-syntax-export"));
lf[85]=C_h_intern(&lf[85],21, C_text("##sys#register-module"));
lf[87]=C_h_intern(&lf[87],32, C_text("chicken.internal#hash-table-set!"));
lf[88]=C_h_intern(&lf[88],31, C_text("chicken.internal#hash-table-ref"));
lf[89]=C_h_intern(&lf[89],14, C_text("scheme#reverse"));
lf[90]=C_h_intern(&lf[90],32, C_text("chicken.internal#make-hash-table"));
lf[91]=C_h_intern(&lf[91],34, C_text("##sys#compiled-module-registration"));
lf[92]=C_h_intern(&lf[92],6, C_text("lambda"));
lf[93]=C_h_intern(&lf[93],22, C_text("##sys#with-environment"));
lf[94]=C_h_intern(&lf[94],12, C_text("##sys#append"));
lf[95]=C_h_intern(&lf[95],5, C_text("quote"));
lf[96]=C_h_intern(&lf[96],11, C_text("scheme#list"));
lf[97]=C_h_intern(&lf[97],11, C_text("scheme#cons"));
lf[98]=C_h_intern(&lf[98],27, C_text("chicken.syntax#strip-syntax"));
lf[99]=C_h_intern(&lf[99],30, C_text("##sys#register-compiled-module"));
lf[100]=C_h_intern(&lf[100],14, C_text("##core#functor"));
lf[101]=C_h_intern(&lf[101],18, C_text("##sys#fast-reverse"));
lf[102]=C_h_intern(&lf[102],13, C_text("import-syntax"));
lf[103]=C_h_intern(&lf[103],11, C_text("scheme#eval"));
lf[104]=C_h_intern(&lf[104],14, C_text("##core#require"));
lf[105]=C_h_intern(&lf[105],22, C_text("##sys#decompose-import"));
lf[106]=C_h_intern(&lf[106],14, C_text("chicken.base#o"));
lf[107]=C_h_intern(&lf[107],6, C_text("static"));
lf[108]=C_h_intern(&lf[108],24, C_text("##sys#ensure-transformer"));
lf[109]=C_h_intern(&lf[109],11, C_text("##sys#error"));
lf[110]=C_h_intern(&lf[110],6, C_text("import"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\143\141\156\156\157\164\040\146\151\156\144\040\151\155\160\154\145\155\145\156\164\141\164\151\157\156\040\157\146\040\162\145\055\145\170\160\157\162\164\145\144\040\163\171\156\164\141\170\000"));
lf[112]=C_h_intern(&lf[112],26, C_text("##sys#register-core-module"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\063\165\156\153\156\157\167\156\040\163\171\156\164\141\170\040\162\145\146\145\162\145\156\143\145\144\040\167\150\151\154\145\040\162\145\147\151\163\164\145\162\151\156\147\040\155\157\144\165\154\145\000"));
lf[114]=C_h_intern(&lf[114],31, C_text("##sys#register-primitive-module"));
lf[115]=C_h_intern(&lf[115],21, C_text("##sys#finalize-module"));
lf[116]=C_h_intern(&lf[116],7, C_text("fprintf"));
lf[117]=C_h_intern(&lf[117],27, C_text("chicken.string#string-split"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\072\000"));
lf[119]=C_h_intern(&lf[119],11, C_text("##sys#print"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\012\040\040\040\040\000"));
lf[121]=C_h_intern(&lf[121],6, C_text("format"));
lf[122]=C_h_intern(&lf[122],24, C_text("scheme#get-output-string"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\047\040\157\156\040\154\151\156\145\040\000"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\111\156\040\160\162\157\143\145\144\165\162\145\040\140\000"));
lf[125]=C_h_intern(&lf[125],25, C_text("scheme#open-output-string"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\117\156\040\154\151\156\145\040\000"));
lf[127]=C_h_intern(&lf[127],18, C_text("##sys#write-char-0"));
lf[128]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\111\156\040\160\162\157\143\145\144\165\162\145\040\140\000"));
lf[129]=C_h_intern(&lf[129],9, C_text("##core#db"));
lf[130]=C_h_intern(&lf[130],12, C_text("scheme#cadar"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\155\157\144\165\154\145\040\140\000"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\012\040\040\040\040\000"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\157\156\145\040\157\146\040\164\150\145\163\145\040\155\157\144\165\154\145\163\072\000"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\012\040\040\123\165\147\147\145\163\164\151\157\156\072\040\164\162\171\040\151\155\160\157\162\164\151\156\147\040\000"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\012\012\040\040\125\156\153\156\157\167\156\040\151\144\145\156\164\151\146\151\145\162\040\140\000"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\047\072\000"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\012\040\040\111\156\040\146\151\154\145\040\140\000"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\072\000"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\047\040\150\141\163\040\165\156\162\145\163\157\154\166\145\144\040\151\144\145\156\164\151\146\151\145\162\163\000"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\115\157\144\165\154\145\040\140\000"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\050\151\156\164\145\162\156\141\154\051\040\151\156\144\151\162\145\143\164\040\145\170\160\157\162\164\040\156\157\164\040\146\157\165\156\144\000"));
lf[142]=C_h_intern(&lf[142],20, C_text("scheme#string-append"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\040\151\156\040\155\157\144\165\154\145\040\140\000"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[145]=C_h_intern(&lf[145],21, C_text("scheme#symbol->string"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\156\144\151\162\145\143\164\040\145\170\160\157\162\164\040\157\146\040\163\171\156\164\141\170\040\142\151\156\144\151\156\147\000"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\151\156\144\151\162\145\143\164\040\162\145\145\170\160\157\162\164\040\157\146\040\163\171\156\164\141\170\000"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\151\156\144\151\162\145\143\164\040\145\170\160\157\162\164\040\157\146\040\165\156\153\156\157\167\156\040\142\151\156\144\151\156\147\000"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\155\157\144\165\154\145\040\165\156\162\145\163\157\154\166\145\144\000"));
lf[150]=C_h_intern(&lf[150],6, C_text("syntax"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\140\000"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\141\156\156\157\164\040\145\170\160\157\162\164\040\000"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\040\142\145\143\141\165\163\145\040\151\164\040\151\163\040\000"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\105\170\160\157\162\164\145\144\040\151\144\145\156\164\151\146\151\145\162\040\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\040\150\141\163\040\156\157\164\040\142\145\145\156\040\144\145\146\151\156\145\144\056\000"));
lf[158]=C_h_intern(&lf[158],4, C_text("bomb"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\146\141\151\154\000"));
lf[160]=C_h_intern(&lf[160],9, C_text("##sys#get"));
lf[161]=C_h_intern(&lf[161],14, C_text("##sys#override"));
lf[162]=C_h_intern(&lf[162],5, C_text("value"));
lf[163]=C_h_intern(&lf[163],30, C_text("##sys#current-meta-environment"));
lf[164]=C_h_intern(&lf[164],28, C_text("##sys#meta-macro-environment"));
lf[165]=C_h_intern(&lf[165],25, C_text("##sys#import-library-hook"));
lf[166]=C_h_intern(&lf[166],21, C_text("##sys#notices-enabled"));
lf[167]=C_h_intern(&lf[167],11, C_text("scheme#load"));
lf[168]=C_h_intern(&lf[168],35, C_text("chicken.load#find-dynamic-extension"));
lf[169]=C_h_intern(&lf[169],19, C_text("##sys#string-append"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\056\151\155\160\157\162\164\000"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\040\151\156\040\155\157\144\165\154\145\040\140\000"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\072\000"));
lf[175]=C_h_intern(&lf[175],27, C_text("##sys#symbol->string/shared"));
lf[176]=C_h_intern(&lf[176],20, C_text("##sys#number->string"));
lf[177]=C_h_intern(&lf[177],18, C_text("##sys#syntax-error"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\160\162\145\146\151\170\000"));
lf[179]=C_h_intern(&lf[179],24, C_text("chicken.keyword#keyword?"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\151\156\166\141\154\151\144\040\151\155\160\157\162\164\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\155\160\157\162\164\145\144\040\151\144\145\156\164\151\146\151\145\162\040\144\157\145\163\156\047\164\040\145\170\151\163\164\000"));
lf[182]=C_h_intern(&lf[182],18, C_text("##sys#check-syntax"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\001\000\000\000\000"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\145\170\143\154\165\144\145\144\040\151\144\145\156\164\151\146\151\145\162\040\144\157\145\163\156\047\164\040\145\170\151\163\164\000"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\001\000\000\000\000"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\162\145\156\141\155\145\144\040\151\144\145\156\164\151\146\151\145\162\040\144\157\145\163\156\047\164\040\145\170\151\163\164\000"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\377\001\000\000\000\000"));
lf[188]=C_h_intern(&lf[188],20, C_text("##sys#string->symbol"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[190]=C_h_intern(&lf[190],37, C_text("scheme#call-with-current-continuation"));
lf[191]=C_h_intern(&lf[191],6, C_text("prefix"));
lf[192]=C_h_intern(&lf[192],6, C_text("except"));
lf[193]=C_h_intern(&lf[193],6, C_text("rename"));
lf[194]=C_h_intern(&lf[194],4, C_text("only"));
lf[195]=C_h_intern(&lf[195],19, C_text("##sys#expand-import"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\143\141\156\156\157\164\040\151\155\160\157\162\164\040\146\162\157\155\040\165\156\144\145\146\151\156\145\144\040\155\157\144\165\154\145\000"));
lf[197]=C_h_intern(&lf[197],12, C_text("##sys#import"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[200]=C_h_intern(&lf[200],12, C_text("##sys#notice"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\162\145\055\151\155\160\157\162\164\151\156\147\040\141\154\162\145\141\144\171\040\151\155\160\157\162\164\145\144\040\151\144\145\156\164\151\146\151\145\162\000"));
lf[202]=C_h_intern(&lf[202],10, C_text("##sys#put!"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\162\145\055\151\155\160\157\162\164\151\156\147\040\141\154\162\145\141\144\171\040\151\155\160\157\162\164\145\144\040\163\171\156\164\141\170\000"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\140\162\145\145\170\160\157\162\164\047\040\157\156\154\171\040\166\141\154\151\144\040\151\156\163\151\144\145\040\141\040\155\157\144\165\154\145\000"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[206]=C_h_intern(&lf[206],23, C_text("##sys#alias-global-hook"));
lf[207]=C_h_intern(&lf[207],22, C_text("##sys#validate-exports"));
lf[208]=C_h_intern(&lf[208],16, C_text("##core#interface"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\165\156\153\156\157\167\156\040\151\156\164\145\162\146\141\143\145\000"));
lf[210]=C_h_intern(&lf[210],1, C_text("*"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\151\156\166\141\154\151\144\040\145\170\160\157\162\164\163\000"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\151\156\166\141\154\151\144\040\145\170\160\157\162\164\163\000"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\145\170\160\157\162\164\000"));
lf[214]=C_h_intern_kw(&lf[214],6, C_text("syntax"));
lf[215]=C_h_intern_kw(&lf[215],9, C_text("interface"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\156\166\141\154\151\144\040\151\156\164\145\162\146\141\143\145\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\145\170\160\157\162\164\000"));
lf[218]=C_h_intern(&lf[218],22, C_text("##sys#register-functor"));
lf[219]=C_h_intern(&lf[219],25, C_text("##sys#instantiate-functor"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\141\162\147\165\155\145\156\164\040\154\151\163\164\040\155\151\163\155\141\164\143\150\040\151\156\040\146\165\156\143\164\157\162\040\151\156\163\164\141\156\164\151\141\164\151\157\156\000"));
lf[221]=C_h_intern(&lf[221],13, C_text("##core#module"));
lf[222]=C_h_intern(&lf[222],23, C_text("##core#let-module-alias"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\156\163\164\141\156\164\141\164\151\157\156\040\157\146\040\165\156\144\145\146\151\156\145\144\040\146\165\156\143\164\157\162\000"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\141\162\147\165\155\145\156\164\040\155\157\144\165\154\145\040\140\000"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\047\040\144\157\145\163\040\156\157\164\040\155\141\164\143\150\040\162\145\161\165\151\162\145\144\040\163\151\147\156\141\164\165\162\145\012\000"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\151\156\040\151\156\163\164\141\156\164\151\141\164\151\157\156\040\140\000"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\047\040\157\146\040\146\165\156\143\164\157\162\040\140\000"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\070\047\054\040\142\145\143\141\165\163\145\040\164\150\145\040\146\157\154\154\157\167\151\156\147\040\162\145\161\165\151\162\145\144\040\145\170\160\157\162\164\163\040\141\162\145\040\155\151\163\163\151\156\147\072\012\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\012\040\040\000"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\156\157\164\376\001\000\000\012\001\163\143\150\145\155\145\043\156\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\142\157\157\154\145\141\156\077\376\001\000\000\017\001\163\143\150\145\155\145\043\142\157\157\154\145\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\161\077\376\001\000\000\012\001\163\143\150\145\155\145\043\145\161\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\161\166\077\376\001\000\000\013\001\163\143\150\145\155\145\043\145\161\166\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\161\165\141\154\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\161\165\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\157\156\163\376\001\000\000\013\001\163\143\150\145\155\145\043\143\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\141\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\144\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\141\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\141\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\144\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\144\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\156\165\154\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\156\165\154\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\154\151\163\164\077\376\001\000\000\014\001\163\143\150\145\155\145\043\154\151\163\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\013\001\163\143\150\145\155\145\043\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\154\145\156\147\164\150\376\001\000\000\015\001\163\143\150\145\155\145\043\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\164\141\151\154\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\164\141\151\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\162\145\146\376\001\000\000\017\001\163\143\150\145\155\145\043\154\151\163\164\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\141\160\160\145\156\144\376\001\000\000\015\001\163\143\150\145\155\145\043\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\166\145\162\163\145\376\001\000\000\016\001\163\143\150\145\155\145\043\162\145\166\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\161\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\166\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\145\155\142\145\162\376\001\000\000\015\001\163\143\150\145\155\145\043\155\145\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\161\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\166\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\163\163\157\143\376\001\000\000\014\001\163\143\150\145\155\145\043\141\163\163\157\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\171\155\142\157\154\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\171\155\142\157\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\165\155\142\145\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\156\165\155\142\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\147\145\162\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\170\141\143\164\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\145\141\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\162\145\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\154\145\170\077\376\001\000\000\017\001\163\143\150\145\155\145\043\143\157\155\160\154\145\170\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\145\170\141\143\164\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\141\164\151\157\156\141\154\077\376\001\000\000\020\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\172\145\162\157\077\376\001\000\000\014\001\163\143\150\145\155\145\043\172\145\162\157\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\157\144\144\077\376\001\000\000\013\001\163\143\150\145\155\145\043\157\144\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\166\145\156\077\376\001\000\000\014\001\163\143\150\145\155\145\043\145\166\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\163\151\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\160\157\163\151\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\145\147\141\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\156\145\147\141\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\170\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\155\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\053\376\001\000\000\010\001\163\143\150\145\155\145\043\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\055\376\001\000\000\010\001\163\143\150\145\155\145\043\055\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\052\376\001\000\000\010\001\163\143\150\145\155\145\043\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\057\376\001\000\000\010\001\163\143\150\145\155\145\043\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\075\376\001\000\000\010\001\163\143\150\145\155\145\043\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\076\376\001\000\000\010\001\163\143\150\145\155\145\043\076\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\074\376\001\000\000\010\001\163\143\150\145\155\145\043\074\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\076\075\376\001\000\000\011\001\163\143\150\145\155\145\043\076\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\074\075\376\001\000\000\011\001\163\143\150\145\155\145\043\074\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\161\165\157\164\151\145\156\164\376\001\000\000\017\001\163\143\150\145\155\145\043\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\155\141\151\156\144\145\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\157\144\165\154\157\376\001\000\000\015\001\163\143\150\145\155\145\043\155\157\144\165\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\147\143\144\376\001\000\000\012\001\163\143\150\145\155\145\043\147\143\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\143\155\376\001\000\000\012\001\163\143\150\145\155\145\043\154\143\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\141\142\163\376\001\000\000\012\001\163\143\150\145\155\145\043\141\142\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\154\157\157\162\376\001\000\000\014\001\163\143\150\145\155\145\043\146\154\157\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\145\151\154\151\156\147\376\001\000\000\016\001\163\143\150\145\155\145\043\143\145\151\154\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\164\162\165\156\143\141\164\145\376\001\000\000\017\001\163\143\150\145\155\145\043\164\162\165\156\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\157\165\156\144\376\001\000\000\014\001\163\143\150\145\155\145\043\162\157\165\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\141\164\151\157\156\141\154\151\172\145\376\001\000\000\022\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\170\160\376\001\000\000\012\001\163\143\150\145\155\145\043\145\170\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\157\147\376\001\000\000\012\001\163\143\150\145\155\145\043\154\157\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\160\164\376\001\000\000\013\001\163\143\150\145\155\145\043\145\170\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\161\162\164\376\001\000\000\013\001\163\143\150\145\155\145\043\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\163\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\157\163\376\001\000\000\012\001\163\143\150\145\155\145\043\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\164\141\156\376\001\000\000\012\001\163\143\150\145\155\145\043\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\151\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\143\157\163\376\001\000\000\013\001\163\143\150\145\155\145\043\141\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\164\141\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\150\141\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\143\150\141\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\075\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\076\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\074\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\076\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\074\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\074\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\076\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\076\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\074\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\156\165\155\145\162\151\143\077\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\156\165\155\145\162\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\165\160\143\141\163\145\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\144\157\167\156\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\076\151\156\164\145\147\145\162\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\076\151\156\164\145\147\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\156\164\145\147\145\162\055\076\143\150\141\162\376\001\000\000\024\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\055\076\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\164\162\151\156\147\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\164\162\151\156\147\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\075\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\076\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\074\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\076\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\074\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\075\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\074\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\076\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\076\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\074\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\163\164\162\151\156\147\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\141\160\160\145\156\144\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\157\160\171\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\163\164\162\151\156\147\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\165\142\163\164\162\151\156\147\376\001\000\000\020\001\163\143\150\145\155\145\043\163\165\142\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\166\145\143\164\157\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\166\145\143\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\001\000\000\015\001\163\143\150\145\155\145\043\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\001\000\000\015\001\163\143\150\145\155\145\043\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\166\145\143\164\157\162\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\162\157\143\145\144\165\162\145\077\376\001\000\000\021\001\163\143\150\145\155\145\043\160\162\157\143\145\144\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\160\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\157\162\055\145\141\143\150\376\001\000\000\017\001\163\143\150\145\155\145\043\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\160\160\154\171\376\001\000\000\014\001\163\143\150\145\155\145\043\141\160\160\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\162\143\145\376\001\000\000\014\001\163\143\150\145\155\145\043\146\157\162\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\001\000\000\045\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\156\160\165\164\055\160\157\162\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\151\156\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\157\165\164\160\165\164\055\160\157\162\164\077\376\001\000\000\023\001\163\143\150\145\155\145\043\157\165\164\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\031\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\032\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\034\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\026\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\027\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\027\001\163\143\150\145\155\145\043\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\030\001\163\143\150\145\155\145\043\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\157\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\154\157\141\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\162\145\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\162\145\141\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\144\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\145\145\153\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\160\145\145\153\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\167\162\151\164\145\376\001\000\000\014\001\163\143\150\145\155\145\043\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\160\154\141\171\376\001\000\000\016\001\163\143\150\145\155\145\043\144\151\163\160\154\141\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\145\167\154\151\156\145\376\001\000\000\016\001\163\143\150\145\155\145\043\156\145\167\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\157\146\055\157\142\152\145\143\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\145\157\146\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\001\000\000\032\001\163\143\150\145\155\145\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\162\145\141\144\171\077\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\155\141\147\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\151\155\141\147\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\154\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\154\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\001\000\000\027\001\163\143\150\145\155\145\043\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\155\141\153\145\055\160\157\154\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\155\141\153\145\055\160\157\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\156\147\154\145\376\001\000\000\014\001\163\143\150\145\155\145\043\141\156\147\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\141\147\156\151\164\165\144\145\376\001\000\000\020\001\163\143\150\145\155\145\043\155\141\147\156\151\164\165\144\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\165\155\145\162\141\164\157\162\376\001\000\000\020\001\163\143\150\145\155\145\043\156\165\155\145\162\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\145\156\157\155\151\156\141\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\144\145\156\157\155\151\156\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\040\001\163\143\150\145\155\145\043\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\027\001\163\143\150\145\155\145\043\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\036\001\163\143\150\145\155\145\043\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[232]=C_h_intern(&lf[232],30, C_text("##sys#scheme-macro-environment"));
lf[233]=C_h_intern(&lf[233],9, C_text("se-subset"));
lf[234]=C_h_intern(&lf[234],33, C_text("chicken.module#module-environment"));
lf[235]=C_h_intern(&lf[235],18, C_text("module-environment"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\165\156\144\145\146\151\156\145\144\040\155\157\144\165\154\145\000"));
lf[237]=C_h_intern(&lf[237],11, C_text("environment"));
lf[238]=C_h_intern(&lf[238],23, C_text("scheme.eval#environment"));
lf[239]=C_h_intern(&lf[239],19, C_text("scheme#dynamic-wind"));
lf[240]=C_h_intern(&lf[240],17, C_text("chicken.base#void"));
lf[241]=C_h_intern(&lf[241],19, C_text("chicken.base#gensym"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\145\156\166\151\162\157\156\155\145\156\164\055\155\157\144\165\154\145\055\000"));
lf[243]=C_h_intern(&lf[243],14, C_text("chicken.syntax"));
lf[244]=C_h_intern(&lf[244],6, C_text("expand"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\170\160\141\156\144\376\001\000\000\025\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\145\170\160\141\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\147\145\164\055\154\151\156\145\055\156\165\155\142\145\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\147\145\164\055\154\151\156\145\055\156\165\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\162\145\141\144\055\167\151\164\150\055\163\157\165\162\143\145\055\151\156\146\157\376\001\000\000\044\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\162\145\141\144\055\167\151\164\150\055\163\157\165\162\143\145\055\151\156\146\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\160\055\163\171\156\164\141\170\376\001\000\000\033\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\163\164\162\151\160\055\163\171\156\164\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\145\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\145\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\151\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\151\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\377\016"));
lf[246]=C_h_intern(&lf[246],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[247]=C_h_intern(&lf[247],12, C_text("chicken.base"));
lf[248]=C_h_intern(&lf[248],7, C_text("library"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\144\144\061\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\144\144\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\141\154\151\163\164\055\162\145\146\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\141\154\151\163\164\055\165\160\144\141\164\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\165\160\144\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\141\154\151\163\164\055\165\160\144\141\164\145\041\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\165\160\144\141\164\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\164\157\155\077\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\164\157\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\142\151\147\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\151\147\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\167\160\055\157\142\152\145\143\164\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\167\160\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\142\165\164\154\141\163\164\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\165\164\154\141\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\141\163\145\055\163\145\156\163\151\164\151\166\145\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\141\163\145\055\163\145\156\163\151\164\151\166\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\156\141\155\145\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\150\141\162\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\146\157\154\144\143\141\163\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\150\141\162\055\146\157\154\144\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\150\157\160\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\150\157\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\155\160\154\145\155\145\156\164\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\155\160\154\145\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\157\155\160\157\163\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\155\160\157\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\162\145\163\163\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\155\160\162\145\163\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\157\156\152\157\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\156\152\157\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\156\163\164\141\156\164\154\171\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\156\163\164\141\156\164\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\160\154\170\156\165\155\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\160\154\170\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\152\157\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\144\151\163\152\157\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\141\143\150\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\155\145\162\147\145\156\143\171\055\145\170\151\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\155\145\162\147\145\156\143\171\055\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\145\156\141\142\154\145\055\167\141\162\156\151\156\147\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\156\141\142\154\145\055\167\141\162\156\151\156\147\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\145\161\165\141\154\075\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\161\165\141\154\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\162\162\157\162\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\162\162\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\170\141\143\164\055\151\156\164\145\147\145\162\077\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\141\143\164\055\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\145\170\141\143\164\055\151\156\164\145\147\145\162\055\156\164\150\055\162\157\157\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\141\143\164\055\151\156\164\145\147\145\162\055\156\164\150\055\162\157\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\151\164\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\145\170\151\164\055\150\141\156\144\154\145\162\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\151\164\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\151\156\151\164\145\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\156\151\164\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\151\170\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\170\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\154\141\164\164\145\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\141\164\164\145\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\154\151\160\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\151\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\154\157\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\157\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\154\165\163\150\055\157\165\164\160\165\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\165\163\150\055\157\165\164\160\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\154\144\154\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\154\144\162\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\147\145\156\163\171\155\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\156\163\171\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\147\145\164\055\143\141\154\154\055\143\150\141\151\156\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\055\143\141\154\154\055\143\150\141\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\144\145\156\164\151\164\171\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\144\145\156\164\151\164\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\151\155\160\154\151\143\151\164\055\145\170\151\164\055\150\141\156\144\154\145\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\155\160\154\151\143\151\164\055\145\170\151\164\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\156\146\151\156\151\164\145\077\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\146\151\156\151\164\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\156\164\145\162\163\160\145\162\163\145\376\001\000\000\030\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\164\145\162\163\160\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\152\157\151\156\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\152\157\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\153\145\171\167\157\162\144\055\163\164\171\154\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\153\145\171\167\157\162\144\055\163\164\171\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\157\146\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\154\151\163\164\055\157\146\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\153\145\055\160\162\157\155\151\163\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\155\141\153\145\055\160\162\157\155\151\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\156\141\156\077\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\156\157\164\151\143\145\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\157\164\151\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\157\376\001\000\000\016\001\143\150\151\143\153\145\156\056\142\141\163\145\043\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\157\156\055\145\170\151\164\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\157\156\055\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\001\000\000\041\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\157\162\164\055\143\154\157\163\145\144\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\157\162\164\055\143\154\157\163\145\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\162\151\156\164\055\143\141\154\154\055\143\150\141\151\156\376\001\000\000\035\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\055\143\141\154\154\055\143\150\141\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\162\151\156\164\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\160\162\151\156\164\052\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\160\162\157\143\145\144\165\162\145\055\151\156\146\157\162\155\141\164\151\157\156\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\157\143\145\144\165\162\145\055\151\156\146\157\162\155\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\162\157\155\151\163\145\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\157\155\151\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\161\165\157\164\151\145\156\164\046\155\157\144\165\154\157\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\141\163\145\043\161\165\157\164\151\145\156\164\046\155\157\144\165\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\161\165\157\164\151\145\156\164\046\162\145\155\141\151\156\144\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\161\165\157\164\151\145\156\164\046\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\162\141\163\163\157\143\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\141\163\163\157\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\141\164\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\141\164\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\162\145\143\157\162\144\055\160\162\151\156\164\145\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\145\143\157\162\144\055\160\162\151\156\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\164\055\162\145\143\157\162\144\055\160\162\151\156\164\145\162\041\376\001\000\000\040\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\055\162\145\143\157\162\144\055\160\162\151\156\164\145\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\145\164\164\145\162\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\151\147\156\165\155\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\151\147\156\165\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\163\154\145\145\160\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\154\145\145\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\163\164\162\151\156\147\055\076\165\156\151\156\164\145\162\156\145\144\055\163\171\155\142\157\154\376\001\000\000\046\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\164\162\151\156\147\055\076\165\156\151\156\164\145\162\156\145\144\055\163\171\155\142\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\146\157\154\144\143\141\163\145\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\164\162\151\156\147\055\146\157\154\144\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\165\142\061\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\165\142\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\165\142\166\145\143\164\157\162\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\165\142\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\171\155\142\157\154\055\141\160\160\145\156\144\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\171\155\142\157\154\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\171\155\142\157\154\055\145\163\143\141\160\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\171\155\142\157\154\055\145\163\143\141\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\164\141\151\154\077\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\164\141\151\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\162\145\163\151\172\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\166\145\143\164\157\162\055\162\145\163\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\166\157\151\144\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\166\157\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\167\141\162\156\151\156\147\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\141\162\156\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\167\145\141\153\055\143\157\156\163\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\145\141\153\055\143\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\145\141\153\055\160\141\151\162\077\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\145\141\153\055\160\141\151\162\077\376\377\016"));
lf[250]=C_h_intern(&lf[250],36, C_text("##sys#chicken.base-macro-environment"));
lf[251]=C_h_intern(&lf[251],11, C_text("scheme.char"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\074\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\074\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\076\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\076\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\144\157\167\156\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\146\157\154\144\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\146\157\154\144\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\156\165\155\145\162\151\143\077\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\156\165\155\145\162\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\165\160\143\141\163\145\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\151\147\151\164\055\166\141\154\165\145\376\001\000\000\027\001\163\143\150\145\155\145\056\143\150\141\162\043\144\151\147\151\164\055\166\141\154\165\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\074\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\074\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\075\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\076\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\076\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\144\157\167\156\143\141\163\145\376\001\000\000\026\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\146\157\154\144\143\141\163\145\376\001\000\000\026\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\157\154\144\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\165\160\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\165\160\143\141\163\145\376\377\016"));
lf[253]=C_h_intern(&lf[253],11, C_text("scheme.repl"));
lf[254]=C_h_intern(&lf[254],4, C_text("eval"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\036\001\163\143\150\145\155\145\043\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[256]=C_h_intern(&lf[256],11, C_text("scheme.read"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\162\145\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\162\145\141\144\376\377\016"));
lf[258]=C_h_intern(&lf[258],11, C_text("scheme.load"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\157\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\154\157\141\144\376\377\016"));
lf[260]=C_h_intern(&lf[260],11, C_text("scheme.eval"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\001\000\000\013\001\163\143\150\145\155\145\043\145\166\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\027\001\163\143\150\145\155\145\056\145\166\141\154\043\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[262]=C_h_intern(&lf[262],7, C_text("srfi-88"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\153\145\171\167\157\162\144\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\153\145\171\167\157\162\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\153\145\171\167\157\162\144\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\153\145\171\167\157\162\144\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\076\153\145\171\167\157\162\144\376\001\000\000\037\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\163\164\162\151\156\147\055\076\153\145\171\167\157\162\144\376\377\016"));
lf[264]=C_h_intern(&lf[264],7, C_text("srfi-55"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021\001\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\376\377\016"));
lf[266]=C_h_intern(&lf[266],7, C_text("srfi-31"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\162\145\143\376\377\016"));
lf[268]=C_h_intern(&lf[268],7, C_text("srfi-28"));
lf[269]=C_h_intern(&lf[269],6, C_text("extras"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\157\162\155\141\164\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\157\162\155\141\164\376\377\016"));
lf[271]=C_h_intern(&lf[271],7, C_text("srfi-26"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\143\165\164\376\003\000\000\002\376\001\000\000\004\001\143\165\164\145\376\377\016"));
lf[273]=C_h_intern(&lf[273],7, C_text("srfi-17"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\145\164\164\145\162\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\164\145\162\376\377\016"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004\001\163\145\164\041\376\377\016"));
lf[276]=C_h_intern(&lf[276],31, C_text("##sys#default-macro-environment"));
lf[277]=C_h_intern(&lf[277],14, C_text("scheme.inexact"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\170\160\376\001\000\000\012\001\163\143\150\145\155\145\043\145\170\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\157\147\376\001\000\000\012\001\163\143\150\145\155\145\043\154\157\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\160\164\376\001\000\000\013\001\163\143\150\145\155\145\043\145\170\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\161\162\164\376\001\000\000\013\001\163\143\150\145\155\145\043\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\156\141\156\077\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\163\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\157\163\376\001\000\000\012\001\163\143\150\145\155\145\043\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\164\141\156\376\001\000\000\012\001\163\143\150\145\155\145\043\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\151\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\143\157\163\376\001\000\000\013\001\163\143\150\145\155\145\043\141\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\164\141\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\151\156\151\164\145\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\156\151\164\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\156\146\151\156\151\164\145\077\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\146\151\156\151\164\145\077\376\377\016"));
lf[279]=C_h_intern(&lf[279],10, C_text("scheme.cxr"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\144\162\376\377\016"));
lf[281]=C_h_intern(&lf[281],14, C_text("scheme.complex"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\155\141\147\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\151\155\141\147\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\154\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\154\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\001\000\000\027\001\163\143\150\145\155\145\043\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\155\141\153\145\055\160\157\154\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\155\141\153\145\055\160\157\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\156\147\154\145\376\001\000\000\014\001\163\143\150\145\155\145\043\141\156\147\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\141\147\156\151\164\165\144\145\376\001\000\000\020\001\163\143\150\145\155\145\043\155\141\147\156\151\164\165\144\145\376\377\016"));
lf[283]=C_h_intern(&lf[283],5, C_text("delay"));
lf[284]=C_h_intern(&lf[284],11, C_text("scheme.lazy"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\162\143\145\376\001\000\000\014\001\163\143\150\145\155\145\043\146\157\162\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\162\157\155\151\163\145\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\157\155\151\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\153\145\055\160\162\157\155\151\163\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\155\141\153\145\055\160\162\157\155\151\163\145\376\377\016"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\013\001\144\145\154\141\171\055\146\157\162\143\145\376\377\016"));
lf[287]=C_h_intern(&lf[287],18, C_text("scheme.case-lambda"));
lf[288]=C_h_intern(&lf[288],42, C_text("##sys#scheme.case-lambda-macro-environment"));
lf[289]=C_h_intern(&lf[289],7, C_text("srfi-15"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\011\001\146\154\165\151\144\055\154\145\164\376\377\016"));
lf[291]=C_h_intern(&lf[291],7, C_text("srfi-12"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\142\157\162\164\376\001\000\000\027\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\141\142\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\156\144\151\164\151\157\156\077\376\001\000\000\034\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\157\156\144\151\164\151\157\156\055\160\162\145\144\151\143\141\164\145\376\001\000\000\045\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\160\162\145\144\151\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\055\141\143\143\145\163\163\157\162\376\001\000\000\055\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\055\141\143\143\145\163\163\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\143\165\162\162\145\156\164\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\165\162\162\145\156\164\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\155\141\153\145\055\143\157\155\160\157\163\151\164\145\055\143\157\156\144\151\164\151\157\156\376\001\000\000\052\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\155\141\153\145\055\143\157\155\160\157\163\151\164\145\055\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\155\141\153\145\055\160\162\157\160\145\162\164\171\055\143\157\156\144\151\164\151\157\156\376\001\000\000\051\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\155\141\153\145\055\160\162\157\160\145\162\164\171\055\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\151\147\156\141\154\376\001\000\000\030\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\163\151\147\156\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\050\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\377\016"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021\001\150\141\156\144\154\145\055\145\170\143\145\160\164\151\157\156\163\376\377\016"));
lf[294]=C_h_intern(&lf[294],41, C_text("##sys#chicken.condition-macro-environment"));
lf[295]=C_h_intern(&lf[295],7, C_text("srfi-10"));
lf[296]=C_h_intern(&lf[296],11, C_text("read-syntax"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\141\144\145\162\055\143\164\157\162\376\001\000\000\046\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\144\145\146\151\156\145\055\162\145\141\144\145\162\055\143\164\157\162\376\377\016"));
lf[298]=C_h_intern(&lf[298],6, C_text("srfi-9"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\143\157\162\144\055\164\171\160\145\376\377\016"));
lf[300]=C_h_intern(&lf[300],6, C_text("srfi-8"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\162\145\143\145\151\166\145\376\377\016"));
lf[302]=C_h_intern(&lf[302],6, C_text("srfi-2"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001\141\156\144\055\154\145\164\052\376\377\016"));
lf[304]=C_h_intern(&lf[304],12, C_text("chicken.type"));
lf[305]=C_h_intern(&lf[305],36, C_text("##sys#chicken.type-macro-environment"));
lf[306]=C_h_intern(&lf[306],14, C_text("chicken.module"));
lf[307]=C_h_intern(&lf[307],38, C_text("##sys#chicken.module-macro-environment"));
lf[308]=C_h_intern(&lf[308],23, C_text("chicken.internal.syntax"));
lf[309]=C_h_intern(&lf[309],11, C_text("scheme.base"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\156\157\164\376\001\000\000\012\001\163\143\150\145\155\145\043\156\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\142\157\157\154\145\141\156\077\376\001\000\000\017\001\163\143\150\145\155\145\043\142\157\157\154\145\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\161\077\376\001\000\000\012\001\163\143\150\145\155\145\043\145\161\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\161\166\077\376\001\000\000\013\001\163\143\150\145\155\145\043\145\161\166\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\161\165\141\154\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\161\165\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\157\156\163\376\001\000\000\013\001\163\143\150\145\155\145\043\143\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\141\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\144\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\141\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\141\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\144\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\144\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\156\165\154\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\156\165\154\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\154\151\163\164\077\376\001\000\000\014\001\163\143\150\145\155\145\043\154\151\163\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\013\001\163\143\150\145\155\145\043\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\154\145\156\147\164\150\376\001\000\000\015\001\163\143\150\145\155\145\043\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\164\141\151\154\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\164\141\151\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\162\145\146\376\001\000\000\017\001\163\143\150\145\155\145\043\154\151\163\164\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\163\145\164\041\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\143\157\160\171\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\142\157\157\154\145\141\156\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\142\157\157\154\145\141\156\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\171\155\142\157\154\075\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\171\155\142\157\154\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\141\160\160\145\156\144\376\001\000\000\015\001\163\143\150\145\155\145\043\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\166\145\162\163\145\376\001\000\000\016\001\163\143\150\145\155\145\043\162\145\166\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\161\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\166\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\145\155\142\145\162\376\001\000\000\015\001\163\143\150\145\155\145\043\155\145\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\161\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\166\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\163\163\157\143\376\001\000\000\014\001\163\143\150\145\155\145\043\141\163\163\157\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\171\155\142\157\154\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\171\155\142\157\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\157\162\164\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\151\156\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\001\000\000\027\001\163\143\150\145\155\145\043\151\156\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\157\165\164\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\001\000\000\030\001\163\143\150\145\155\145\043\157\165\164\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\141\154\154\055\167\151\164\150\055\160\157\162\164\376\001\000\000\025\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\166\145\143\164\157\162\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\166\145\143\164\157\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\141\160\160\145\156\144\376\001\000\000\024\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\155\141\160\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\166\145\143\164\157\162\055\146\157\162\055\145\141\143\150\376\001\000\000\026\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\155\141\160\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\146\157\162\055\145\141\143\150\376\001\000\000\026\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\165\155\142\145\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\156\165\155\142\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\147\145\162\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\170\141\143\164\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\145\141\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\162\145\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\154\145\170\077\376\001\000\000\017\001\163\143\150\145\155\145\043\143\157\155\160\154\145\170\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\145\170\141\143\164\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\141\164\151\157\156\141\154\077\376\001\000\000\020\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\172\145\162\157\077\376\001\000\000\014\001\163\143\150\145\155\145\043\172\145\162\157\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\157\144\144\077\376\001\000\000\013\001\163\143\150\145\155\145\043\157\144\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\166\145\156\077\376\001\000\000\014\001\163\143\150\145\155\145\043\145\166\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\163\151\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\160\157\163\151\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\145\147\141\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\156\145\147\141\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\170\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\155\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\053\376\001\000\000\010\001\163\143\150\145\155\145\043\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\055\376\001\000\000\010\001\163\143\150\145\155\145\043\055\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\052\376\001\000\000\010\001\163\143\150\145\155\145\043\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\057\376\001\000\000\010\001\163\143\150\145\155\145\043\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\075\376\001\000\000\010\001\163\143\150\145\155\145\043\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\076\376\001\000\000\010\001\163\143\150\145\155\145\043\076\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\074\376\001\000\000\010\001\163\143\150\145\155\145\043\074\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\076\075\376\001\000\000\011\001\163\143\150\145\155\145\043\076\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\074\075\376\001\000\000\011\001\163\143\150\145\155\145\043\074\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\161\165\157\164\151\145\156\164\376\001\000\000\017\001\163\143\150\145\155\145\043\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\155\141\151\156\144\145\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\154\157\157\162\055\161\165\157\164\151\145\156\164\376\001\000\000\025\001\163\143\150\145\155\145\043\146\154\157\157\162\055\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\146\154\157\157\162\055\162\145\155\141\151\156\144\145\162\376\001\000\000\026\001\163\143\150\145\155\145\043\146\154\157\157\162\055\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\164\162\165\156\143\141\164\145\055\161\165\157\164\151\145\156\164\376\001\000\000\017\001\163\143\150\145\155\145\043\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\164\162\165\156\143\141\164\145\055\162\145\155\141\151\156\144\145\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\154\157\157\162\057\376\001\000\000\015\001\163\143\150\145\155\145\043\146\154\157\157\162\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\164\162\165\156\143\141\164\145\057\376\001\000\000\020\001\163\143\150\145\155\145\043\164\162\165\156\143\141\164\145\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\157\144\165\154\157\376\001\000\000\015\001\163\143\150\145\155\145\043\155\157\144\165\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\147\143\144\376\001\000\000\012\001\163\143\150\145\155\145\043\147\143\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\143\155\376\001\000\000\012\001\163\143\150\145\155\145\043\154\143\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\141\142\163\376\001\000\000\012\001\163\143\150\145\155\145\043\141\142\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\154\157\157\162\376\001\000\000\014\001\163\143\150\145\155\145\043\146\154\157\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\145\151\154\151\156\147\376\001\000\000\016\001\163\143\150\145\155\145\043\143\145\151\154\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\164\162\165\156\143\141\164\145\376\001\000\000\017\001\163\143\150\145\155\145\043\164\162\165\156\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\157\165\156\144\376\001\000\000\014\001\163\143\150\145\155\145\043\162\157\165\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\141\164\151\157\156\141\154\151\172\145\376\001\000\000\022\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\151\156\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\161\162\164\376\001\000\000\013\001\163\143\150\145\155\145\043\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\161\165\141\162\145\376\001\000\000\015\001\163\143\150\145\155\145\043\163\161\165\141\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\145\170\141\143\164\055\151\156\164\145\147\145\162\055\163\161\162\164\376\001\000\000\031\001\163\143\150\145\155\145\043\145\170\141\143\164\055\151\156\164\145\147\145\162\055\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\150\141\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\143\150\141\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\075\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\076\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\074\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\076\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\074\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\076\151\156\164\145\147\145\162\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\076\151\156\164\145\147\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\156\164\145\147\145\162\055\076\143\150\141\162\376\001\000\000\024\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\055\076\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\164\162\151\156\147\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\164\162\151\156\147\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\075\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\076\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\074\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\076\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\074\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\163\164\162\151\156\147\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\141\153\145\055\154\151\163\164\376\001\000\000\020\001\163\143\150\145\155\145\043\155\141\153\145\055\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\141\160\160\145\156\144\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\157\160\171\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\157\160\171\041\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\163\164\162\151\156\147\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\165\142\163\164\162\151\156\147\376\001\000\000\020\001\163\143\150\145\155\145\043\163\165\142\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\166\145\143\164\157\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\166\145\143\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\001\000\000\015\001\163\143\150\145\155\145\043\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\001\000\000\015\001\163\143\150\145\155\145\043\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\166\145\143\164\157\162\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\143\157\160\171\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\001\000\000\027\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\141\154\165\145\163\376\001\000\000\015\001\163\143\150\145\155\145\043\166\141\154\165\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\162\157\143\145\144\165\162\145\077\376\001\000\000\021\001\163\143\150\145\155\145\043\160\162\157\143\145\144\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\160\141\162\141\155\145\164\145\162\376\001\000\000\025\001\163\143\150\145\155\145\043\155\141\153\145\055\160\141\162\141\155\145\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\160\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\157\162\055\145\141\143\150\376\001\000\000\017\001\163\143\150\145\155\145\043\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\160\160\154\171\376\001\000\000\014\001\163\143\150\145\155\145\043\141\160\160\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\144\171\156\141\155\151\143\055\167\151\156\144\376\001\000\000\023\001\163\143\150\145\155\145\043\144\171\156\141\155\151\143\055\167\151\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\001\000\000\045\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\141\154\154\057\143\143\376\001\000\000\045\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\156\160\165\164\055\160\157\162\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\151\156\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\157\165\164\160\165\164\055\160\157\162\164\077\376\001\000\000\023\001\163\143\150\145\155\145\043\157\165\164\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\031\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\032\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\026\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\027\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\027\001\163\143\150\145\155\145\043\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\030\001\163\143\150\145\155\145\043\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\144\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\145\145\153\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\160\145\145\153\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\163\164\162\151\156\147\376\001\000\000\026\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\160\145\145\153\055\165\070\376\001\000\000\016\001\163\143\150\145\155\145\043\160\145\145\153\055\165\070\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\145\141\164\165\162\145\163\376\001\000\000\017\001\163\143\150\145\155\145\043\146\145\141\164\165\162\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\141\144\055\165\070\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\167\162\151\164\145\055\165\070\376\001\000\000\025\001\143\150\151\143\153\145\156\056\151\157\043\167\162\151\164\145\055\142\171\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\145\167\154\151\156\145\376\001\000\000\016\001\163\143\150\145\155\145\043\156\145\167\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\157\146\055\157\142\152\145\143\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\145\157\146\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\157\146\055\157\142\152\145\143\164\376\001\000\000\021\001\163\143\150\145\155\145\043\145\157\146\055\157\142\152\145\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\146\154\165\163\150\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\165\163\150\055\157\165\164\160\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\001\000\000\032\001\163\143\150\145\155\145\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\154\157\163\145\055\160\157\162\164\376\001\000\000\021\001\163\143\150\145\155\145\043\143\154\157\163\145\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\162\145\141\144\171\077\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\070\055\162\145\141\144\171\077\376\001\000\000\020\001\163\143\150\145\155\145\043\165\070\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\165\155\145\162\141\164\157\162\376\001\000\000\020\001\163\143\150\145\155\145\043\156\165\155\145\162\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\145\156\157\155\151\156\141\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\144\145\156\157\155\151\156\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\040\001\163\143\150\145\155\145\043\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\027\001\163\143\150\145\155\145\043\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\157\160\145\156\055\151\156\160\165\164\055\163\164\162\151\156\147\376\001\000\000\030\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\031\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\157\160\145\156\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\035\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\157\160\145\156\055\151\156\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\034\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\030\001\163\143\150\145\155\145\043\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\147\145\164\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\034\001\163\143\150\145\155\145\043\147\145\164\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\035\001\163\143\150\145\155\145\043\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\141\151\163\145\376\001\000\000\014\001\163\143\150\145\155\145\043\162\141\151\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\162\141\151\163\145\055\143\157\156\164\151\156\165\141\142\154\145\376\001\000\000\030\001\163\143\150\145\155\145\043\162\141\151\163\145\055\143\157\156\164\151\156\165\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\162\162\157\162\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\162\162\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\151\154\145\055\145\162\162\157\162\077\376\001\000\000\022\001\163\143\150\145\155\145\043\146\151\154\145\055\145\162\162\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\145\162\162\157\162\077\376\001\000\000\022\001\163\143\150\145\155\145\043\162\145\141\144\055\145\162\162\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\145\162\162\157\162\055\157\142\152\145\143\164\077\376\001\000\000\024\001\163\143\150\145\155\145\043\145\162\162\157\162\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\145\162\162\157\162\055\157\142\152\145\143\164\055\155\145\163\163\141\147\145\376\001\000\000\033\001\163\143\150\145\155\145\043\145\162\162\157\162\055\157\142\152\145\143\164\055\155\145\163\163\141\147\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\145\162\162\157\162\055\157\142\152\145\143\164\055\151\162\162\151\164\141\156\164\163\376\001\000\000\035\001\163\143\150\145\155\145\043\145\162\162\157\162\055\157\142\152\145\143\164\055\151\162\162\151\164\141\156\164\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\165\164\146\070\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\163\164\162\151\156\147\055\076\165\164\146\070\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\165\164\146\070\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\165\164\146\070\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\167\162\151\164\145\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\027\001\163\143\150\145\155\145\043\167\162\151\164\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\171\164\145\166\145\143\164\157\162\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\141\160\160\145\156\144\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\165\070\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\165\070\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\142\171\164\145\166\145\143\164\157\162\055\165\070\055\163\145\164\041\376\001\000\000\045\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\165\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\032\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\041\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\154\151\156\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\167\162\151\164\145\055\163\164\162\151\156\147\376\001\000\000\023\001\163\143\150\145\155\145\043\167\162\151\164\145\055\163\164\162\151\156\147\376\377\016"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\144\145\146\151\156\145\376\003\000\000\002\376\001\000\000\003\001\154\145\164\376\003\000\000\002\376\001\000\000\004\001\154\145\164\052\376\003\000\000\002\376\001\000\000\006\001\154\145\164\162\145\143\376\003\000\000\002\376\001\000\000\007\001\154\145\164\162\145\143\052\376\003\000\000\002\376\001\000\000\012\001\154\145\164\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\015\001\144\145\146\151\156\145\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\013\001\154\145\164\052\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\014\001\160\141\162\141\155\145\164\145\162\151\172\145\376\003\000\000\002\376\001\000\000\004\001\167\150\145\156\376\003\000\000\002\376\001\000\000\006\001\165\156\154\145\163\163\376\003\000\000\002\376\001\000\000\002\001\144\157\376\003\000\000\002\376\001\000\000\006\001\144\145\146\151\156\145\376\003\000\000\002\376\001\000\000\015\001\144\145\146\151\156\145\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\004\001\143\141\163\145\376\003\000\000\002\376\001\000\000\004\001\143\157\156\144\376\003\000\000\002\376\001\000\000\005\001\147\165\141\162\144\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\143\157\162\144\055\164\171\160\145\376\003\000\000\002\376\001\000\000\007\001\151\156\143\154\165\144\145\376\003\000\000\002\376\001\000\000\012\001\151\156\143\154\165\144\145\055\143\151\376\003\000\000\002\376\001\000\000\004\001\163\145\164\041\376\003\000\000\002\376\001\000\000\014\001\163\171\156\164\141\170\055\162\165\154\145\163\376\003\000\000\002\376\001\000\000\013\001\143\157\156\144\055\145\170\160\141\156\144\376\003\000\000\002\376\001\000\000\006\001\151\155\160\157\162\164\376\003\000\000\002\376\001\000\000\006\001\145\170\160\157\162\164\376\003\000\000\002\376\001\000\000\005\001\142\145\147\151\156\376\003\000\000\002\376\001\000\000\021\001\151\155\160\157\162\164\055\146\157\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\003\001\141\156\144\376\003\000\000\002\376\001\000\000\002\001\157\162\376\003\000\000\002\376\001\000\000\006\001\154\141\155\142\144\141\376\003\000\000\002\376\001\000\000\002\001\151\146\376\003\000\000\002\376\001\000\000\005\001\161\165\157\164\145\376\003\000\000\002\376\001\000\000\013\001\143\141\163\145\055\154\141\155\142\144\141\376\003\000\000\002\376\001\000\000\012\001\161\165\141\163\151\161\165\157\164\145\376\003\000\000\002\376\001\000\000\014\001\163\171\156\164\141\170\055\145\162\162\157\162\376\377\016"));
lf[312]=C_h_intern(&lf[312],6, C_text("scheme"));
lf[313]=C_h_intern(&lf[313],11, C_text("scheme.r5rs"));
lf[314]=C_h_intern(&lf[314],16, C_text("scheme.r5rs-null"));
lf[315]=C_h_intern(&lf[315],16, C_text("scheme.r4rs-null"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\144\171\156\141\155\151\143\055\167\151\156\144\376\001\000\000\023\001\163\143\150\145\155\145\043\144\171\156\141\155\151\143\055\167\151\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\001\000\000\013\001\163\143\150\145\155\145\043\145\166\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\141\154\165\145\163\376\001\000\000\015\001\163\143\150\145\155\145\043\166\141\154\165\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\001\000\000\027\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\377\016"));
lf[317]=C_h_intern(&lf[317],11, C_text("scheme.r4rs"));
lf[318]=C_h_intern(&lf[318],21, C_text("scheme#make-parameter"));
C_register_lf2(lf,319,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3959,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[641] = {
{C_text("f12337:modules_2escm"),(void*)f12337},
{C_text("f12341:modules_2escm"),(void*)f12341},
{C_text("f13052:modules_2escm"),(void*)f13052},
{C_text("f13056:modules_2escm"),(void*)f13056},
{C_text("f_10002:modules_2escm"),(void*)f_10002},
{C_text("f_10011:modules_2escm"),(void*)f_10011},
{C_text("f_10036:modules_2escm"),(void*)f_10036},
{C_text("f_10054:modules_2escm"),(void*)f_10054},
{C_text("f_10060:modules_2escm"),(void*)f_10060},
{C_text("f_10064:modules_2escm"),(void*)f_10064},
{C_text("f_10065:modules_2escm"),(void*)f_10065},
{C_text("f_10071:modules_2escm"),(void*)f_10071},
{C_text("f_10077:modules_2escm"),(void*)f_10077},
{C_text("f_10099:modules_2escm"),(void*)f_10099},
{C_text("f_10101:modules_2escm"),(void*)f_10101},
{C_text("f_10111:modules_2escm"),(void*)f_10111},
{C_text("f_10124:modules_2escm"),(void*)f_10124},
{C_text("f_10128:modules_2escm"),(void*)f_10128},
{C_text("f_10131:modules_2escm"),(void*)f_10131},
{C_text("f_10141:modules_2escm"),(void*)f_10141},
{C_text("f_10148:modules_2escm"),(void*)f_10148},
{C_text("f_10179:modules_2escm"),(void*)f_10179},
{C_text("f_10185:modules_2escm"),(void*)f_10185},
{C_text("f_10186:modules_2escm"),(void*)f_10186},
{C_text("f_10193:modules_2escm"),(void*)f_10193},
{C_text("f_10226:modules_2escm"),(void*)f_10226},
{C_text("f_10232:modules_2escm"),(void*)f_10232},
{C_text("f_10235:modules_2escm"),(void*)f_10235},
{C_text("f_10238:modules_2escm"),(void*)f_10238},
{C_text("f_10245:modules_2escm"),(void*)f_10245},
{C_text("f_10249:modules_2escm"),(void*)f_10249},
{C_text("f_10253:modules_2escm"),(void*)f_10253},
{C_text("f_10257:modules_2escm"),(void*)f_10257},
{C_text("f_10260:modules_2escm"),(void*)f_10260},
{C_text("f_10266:modules_2escm"),(void*)f_10266},
{C_text("f_10269:modules_2escm"),(void*)f_10269},
{C_text("f_10276:modules_2escm"),(void*)f_10276},
{C_text("f_10286:modules_2escm"),(void*)f_10286},
{C_text("f_10293:modules_2escm"),(void*)f_10293},
{C_text("f_10304:modules_2escm"),(void*)f_10304},
{C_text("f_10311:modules_2escm"),(void*)f_10311},
{C_text("f_10313:modules_2escm"),(void*)f_10313},
{C_text("f_10347:modules_2escm"),(void*)f_10347},
{C_text("f_10383:modules_2escm"),(void*)f_10383},
{C_text("f_10394:modules_2escm"),(void*)f_10394},
{C_text("f_10408:modules_2escm"),(void*)f_10408},
{C_text("f_10415:modules_2escm"),(void*)f_10415},
{C_text("f_10417:modules_2escm"),(void*)f_10417},
{C_text("f_10451:modules_2escm"),(void*)f_10451},
{C_text("f_10491:modules_2escm"),(void*)f_10491},
{C_text("f_10501:modules_2escm"),(void*)f_10501},
{C_text("f_10514:modules_2escm"),(void*)f_10514},
{C_text("f_10524:modules_2escm"),(void*)f_10524},
{C_text("f_10545:modules_2escm"),(void*)f_10545},
{C_text("f_10560:modules_2escm"),(void*)f_10560},
{C_text("f_10570:modules_2escm"),(void*)f_10570},
{C_text("f_10578:modules_2escm"),(void*)f_10578},
{C_text("f_10582:modules_2escm"),(void*)f_10582},
{C_text("f_10586:modules_2escm"),(void*)f_10586},
{C_text("f_10588:modules_2escm"),(void*)f_10588},
{C_text("f_10591:modules_2escm"),(void*)f_10591},
{C_text("f_10595:modules_2escm"),(void*)f_10595},
{C_text("f_10599:modules_2escm"),(void*)f_10599},
{C_text("f_10606:modules_2escm"),(void*)f_10606},
{C_text("f_10613:modules_2escm"),(void*)f_10613},
{C_text("f_10634:modules_2escm"),(void*)f_10634},
{C_text("f_10660:modules_2escm"),(void*)f_10660},
{C_text("f_10662:modules_2escm"),(void*)f_10662},
{C_text("f_10665:modules_2escm"),(void*)f_10665},
{C_text("f_10671:modules_2escm"),(void*)f_10671},
{C_text("f_10712:modules_2escm"),(void*)f_10712},
{C_text("f_10744:modules_2escm"),(void*)f_10744},
{C_text("f_10770:modules_2escm"),(void*)f_10770},
{C_text("f_10791:modules_2escm"),(void*)f_10791},
{C_text("f_10795:modules_2escm"),(void*)f_10795},
{C_text("f_10821:modules_2escm"),(void*)f_10821},
{C_text("f_10835:modules_2escm"),(void*)f_10835},
{C_text("f_10877:modules_2escm"),(void*)f_10877},
{C_text("f_10893:modules_2escm"),(void*)f_10893},
{C_text("f_10901:modules_2escm"),(void*)f_10901},
{C_text("f_10908:modules_2escm"),(void*)f_10908},
{C_text("f_10918:modules_2escm"),(void*)f_10918},
{C_text("f_10940:modules_2escm"),(void*)f_10940},
{C_text("f_10942:modules_2escm"),(void*)f_10942},
{C_text("f_10981:modules_2escm"),(void*)f_10981},
{C_text("f_11002:modules_2escm"),(void*)f_11002},
{C_text("f_11014:modules_2escm"),(void*)f_11014},
{C_text("f_11037:modules_2escm"),(void*)f_11037},
{C_text("f_11040:modules_2escm"),(void*)f_11040},
{C_text("f_11051:modules_2escm"),(void*)f_11051},
{C_text("f_11057:modules_2escm"),(void*)f_11057},
{C_text("f_11089:modules_2escm"),(void*)f_11089},
{C_text("f_11092:modules_2escm"),(void*)f_11092},
{C_text("f_11103:modules_2escm"),(void*)f_11103},
{C_text("f_11119:modules_2escm"),(void*)f_11119},
{C_text("f_11123:modules_2escm"),(void*)f_11123},
{C_text("f_11130:modules_2escm"),(void*)f_11130},
{C_text("f_11143:modules_2escm"),(void*)f_11143},
{C_text("f_11170:modules_2escm"),(void*)f_11170},
{C_text("f_11183:modules_2escm"),(void*)f_11183},
{C_text("f_11187:modules_2escm"),(void*)f_11187},
{C_text("f_11191:modules_2escm"),(void*)f_11191},
{C_text("f_11195:modules_2escm"),(void*)f_11195},
{C_text("f_11209:modules_2escm"),(void*)f_11209},
{C_text("f_11215:modules_2escm"),(void*)f_11215},
{C_text("f_11217:modules_2escm"),(void*)f_11217},
{C_text("f_11242:modules_2escm"),(void*)f_11242},
{C_text("f_11251:modules_2escm"),(void*)f_11251},
{C_text("f_11261:modules_2escm"),(void*)f_11261},
{C_text("f_11276:modules_2escm"),(void*)f_11276},
{C_text("f_11279:modules_2escm"),(void*)f_11279},
{C_text("f_11282:modules_2escm"),(void*)f_11282},
{C_text("f_11285:modules_2escm"),(void*)f_11285},
{C_text("f_11288:modules_2escm"),(void*)f_11288},
{C_text("f_11291:modules_2escm"),(void*)f_11291},
{C_text("f_11293:modules_2escm"),(void*)f_11293},
{C_text("f_11298:modules_2escm"),(void*)f_11298},
{C_text("f_11310:modules_2escm"),(void*)f_11310},
{C_text("f_11345:modules_2escm"),(void*)f_11345},
{C_text("f_11348:modules_2escm"),(void*)f_11348},
{C_text("f_11351:modules_2escm"),(void*)f_11351},
{C_text("f_11354:modules_2escm"),(void*)f_11354},
{C_text("f_11357:modules_2escm"),(void*)f_11357},
{C_text("f_11360:modules_2escm"),(void*)f_11360},
{C_text("f_11363:modules_2escm"),(void*)f_11363},
{C_text("f_11366:modules_2escm"),(void*)f_11366},
{C_text("f_11369:modules_2escm"),(void*)f_11369},
{C_text("f_11372:modules_2escm"),(void*)f_11372},
{C_text("f_11375:modules_2escm"),(void*)f_11375},
{C_text("f_11378:modules_2escm"),(void*)f_11378},
{C_text("f_11381:modules_2escm"),(void*)f_11381},
{C_text("f_11384:modules_2escm"),(void*)f_11384},
{C_text("f_11387:modules_2escm"),(void*)f_11387},
{C_text("f_11390:modules_2escm"),(void*)f_11390},
{C_text("f_11393:modules_2escm"),(void*)f_11393},
{C_text("f_11396:modules_2escm"),(void*)f_11396},
{C_text("f_11399:modules_2escm"),(void*)f_11399},
{C_text("f_11402:modules_2escm"),(void*)f_11402},
{C_text("f_11405:modules_2escm"),(void*)f_11405},
{C_text("f_11407:modules_2escm"),(void*)f_11407},
{C_text("f_11414:modules_2escm"),(void*)f_11414},
{C_text("f_11443:modules_2escm"),(void*)f_11443},
{C_text("f_11447:modules_2escm"),(void*)f_11447},
{C_text("f_11449:modules_2escm"),(void*)f_11449},
{C_text("f_11460:modules_2escm"),(void*)f_11460},
{C_text("f_11468:modules_2escm"),(void*)f_11468},
{C_text("f_11495:modules_2escm"),(void*)f_11495},
{C_text("f_11508:modules_2escm"),(void*)f_11508},
{C_text("f_11512:modules_2escm"),(void*)f_11512},
{C_text("f_11515:modules_2escm"),(void*)f_11515},
{C_text("f_11555:modules_2escm"),(void*)f_11555},
{C_text("f_11557:modules_2escm"),(void*)f_11557},
{C_text("f_11592:modules_2escm"),(void*)f_11592},
{C_text("f_11595:modules_2escm"),(void*)f_11595},
{C_text("f_11598:modules_2escm"),(void*)f_11598},
{C_text("f_11601:modules_2escm"),(void*)f_11601},
{C_text("f_11604:modules_2escm"),(void*)f_11604},
{C_text("f_11607:modules_2escm"),(void*)f_11607},
{C_text("f_11610:modules_2escm"),(void*)f_11610},
{C_text("f_11614:modules_2escm"),(void*)f_11614},
{C_text("f_11618:modules_2escm"),(void*)f_11618},
{C_text("f_11622:modules_2escm"),(void*)f_11622},
{C_text("f_11626:modules_2escm"),(void*)f_11626},
{C_text("f_11638:modules_2escm"),(void*)f_11638},
{C_text("f_11642:modules_2escm"),(void*)f_11642},
{C_text("f_11646:modules_2escm"),(void*)f_11646},
{C_text("f_11650:modules_2escm"),(void*)f_11650},
{C_text("f_11654:modules_2escm"),(void*)f_11654},
{C_text("f_11658:modules_2escm"),(void*)f_11658},
{C_text("f_11662:modules_2escm"),(void*)f_11662},
{C_text("f_11666:modules_2escm"),(void*)f_11666},
{C_text("f_11670:modules_2escm"),(void*)f_11670},
{C_text("f_11674:modules_2escm"),(void*)f_11674},
{C_text("f_3959:modules_2escm"),(void*)f_3959},
{C_text("f_3962:modules_2escm"),(void*)f_3962},
{C_text("f_3965:modules_2escm"),(void*)f_3965},
{C_text("f_3968:modules_2escm"),(void*)f_3968},
{C_text("f_3971:modules_2escm"),(void*)f_3971},
{C_text("f_3974:modules_2escm"),(void*)f_3974},
{C_text("f_4465:modules_2escm"),(void*)f_4465},
{C_text("f_4471:modules_2escm"),(void*)f_4471},
{C_text("f_4484:modules_2escm"),(void*)f_4484},
{C_text("f_4498:modules_2escm"),(void*)f_4498},
{C_text("f_4546:modules_2escm"),(void*)f_4546},
{C_text("f_4560:modules_2escm"),(void*)f_4560},
{C_text("f_4573:modules_2escm"),(void*)f_4573},
{C_text("f_4629:modules_2escm"),(void*)f_4629},
{C_text("f_4638:modules_2escm"),(void*)f_4638},
{C_text("f_4646:modules_2escm"),(void*)f_4646},
{C_text("f_4650:modules_2escm"),(void*)f_4650},
{C_text("f_4654:modules_2escm"),(void*)f_4654},
{C_text("f_4672:modules_2escm"),(void*)f_4672},
{C_text("f_5256:modules_2escm"),(void*)f_5256},
{C_text("f_5260:modules_2escm"),(void*)f_5260},
{C_text("f_5266:modules_2escm"),(void*)f_5266},
{C_text("f_5278:modules_2escm"),(void*)f_5278},
{C_text("f_5287:modules_2escm"),(void*)f_5287},
{C_text("f_5296:modules_2escm"),(void*)f_5296},
{C_text("f_5305:modules_2escm"),(void*)f_5305},
{C_text("f_5314:modules_2escm"),(void*)f_5314},
{C_text("f_5323:modules_2escm"),(void*)f_5323},
{C_text("f_5332:modules_2escm"),(void*)f_5332},
{C_text("f_5341:modules_2escm"),(void*)f_5341},
{C_text("f_5350:modules_2escm"),(void*)f_5350},
{C_text("f_5359:modules_2escm"),(void*)f_5359},
{C_text("f_5368:modules_2escm"),(void*)f_5368},
{C_text("f_5377:modules_2escm"),(void*)f_5377},
{C_text("f_5386:modules_2escm"),(void*)f_5386},
{C_text("f_5395:modules_2escm"),(void*)f_5395},
{C_text("f_5404:modules_2escm"),(void*)f_5404},
{C_text("f_5413:modules_2escm"),(void*)f_5413},
{C_text("f_5422:modules_2escm"),(void*)f_5422},
{C_text("f_5431:modules_2escm"),(void*)f_5431},
{C_text("f_5440:modules_2escm"),(void*)f_5440},
{C_text("f_5449:modules_2escm"),(void*)f_5449},
{C_text("f_5458:modules_2escm"),(void*)f_5458},
{C_text("f_5467:modules_2escm"),(void*)f_5467},
{C_text("f_5476:modules_2escm"),(void*)f_5476},
{C_text("f_5485:modules_2escm"),(void*)f_5485},
{C_text("f_5494:modules_2escm"),(void*)f_5494},
{C_text("f_5503:modules_2escm"),(void*)f_5503},
{C_text("f_5512:modules_2escm"),(void*)f_5512},
{C_text("f_5521:modules_2escm"),(void*)f_5521},
{C_text("f_5531:modules_2escm"),(void*)f_5531},
{C_text("f_5549:modules_2escm"),(void*)f_5549},
{C_text("f_5564:modules_2escm"),(void*)f_5564},
{C_text("f_5580:modules_2escm"),(void*)f_5580},
{C_text("f_5582:modules_2escm"),(void*)f_5582},
{C_text("f_5586:modules_2escm"),(void*)f_5586},
{C_text("f_5591:modules_2escm"),(void*)f_5591},
{C_text("f_5595:modules_2escm"),(void*)f_5595},
{C_text("f_5599:modules_2escm"),(void*)f_5599},
{C_text("f_5602:modules_2escm"),(void*)f_5602},
{C_text("f_5608:modules_2escm"),(void*)f_5608},
{C_text("f_5614:modules_2escm"),(void*)f_5614},
{C_text("f_5618:modules_2escm"),(void*)f_5618},
{C_text("f_5621:modules_2escm"),(void*)f_5621},
{C_text("f_5645:modules_2escm"),(void*)f_5645},
{C_text("f_5649:modules_2escm"),(void*)f_5649},
{C_text("f_5651:modules_2escm"),(void*)f_5651},
{C_text("f_5685:modules_2escm"),(void*)f_5685},
{C_text("f_5693:modules_2escm"),(void*)f_5693},
{C_text("f_5695:modules_2escm"),(void*)f_5695},
{C_text("f_5703:modules_2escm"),(void*)f_5703},
{C_text("f_5730:modules_2escm"),(void*)f_5730},
{C_text("f_5732:modules_2escm"),(void*)f_5732},
{C_text("f_5786:modules_2escm"),(void*)f_5786},
{C_text("f_5793:modules_2escm"),(void*)f_5793},
{C_text("f_5796:modules_2escm"),(void*)f_5796},
{C_text("f_5802:modules_2escm"),(void*)f_5802},
{C_text("f_5808:modules_2escm"),(void*)f_5808},
{C_text("f_5821:modules_2escm"),(void*)f_5821},
{C_text("f_5833:modules_2escm"),(void*)f_5833},
{C_text("f_5837:modules_2escm"),(void*)f_5837},
{C_text("f_5839:modules_2escm"),(void*)f_5839},
{C_text("f_5855:modules_2escm"),(void*)f_5855},
{C_text("f_5856:modules_2escm"),(void*)f_5856},
{C_text("f_5864:modules_2escm"),(void*)f_5864},
{C_text("f_5878:modules_2escm"),(void*)f_5878},
{C_text("f_5881:modules_2escm"),(void*)f_5881},
{C_text("f_5888:modules_2escm"),(void*)f_5888},
{C_text("f_5892:modules_2escm"),(void*)f_5892},
{C_text("f_5898:modules_2escm"),(void*)f_5898},
{C_text("f_5926:modules_2escm"),(void*)f_5926},
{C_text("f_5928:modules_2escm"),(void*)f_5928},
{C_text("f_5935:modules_2escm"),(void*)f_5935},
{C_text("f_5948:modules_2escm"),(void*)f_5948},
{C_text("f_5950:modules_2escm"),(void*)f_5950},
{C_text("f_5986:modules_2escm"),(void*)f_5986},
{C_text("f_5988:modules_2escm"),(void*)f_5988},
{C_text("f_5991:modules_2escm"),(void*)f_5991},
{C_text("f_5995:modules_2escm"),(void*)f_5995},
{C_text("f_6011:modules_2escm"),(void*)f_6011},
{C_text("f_6018:modules_2escm"),(void*)f_6018},
{C_text("f_6032:modules_2escm"),(void*)f_6032},
{C_text("f_6042:modules_2escm"),(void*)f_6042},
{C_text("f_6045:modules_2escm"),(void*)f_6045},
{C_text("f_6048:modules_2escm"),(void*)f_6048},
{C_text("f_6054:modules_2escm"),(void*)f_6054},
{C_text("f_6057:modules_2escm"),(void*)f_6057},
{C_text("f_6060:modules_2escm"),(void*)f_6060},
{C_text("f_6093:modules_2escm"),(void*)f_6093},
{C_text("f_6097:modules_2escm"),(void*)f_6097},
{C_text("f_6104:modules_2escm"),(void*)f_6104},
{C_text("f_6108:modules_2escm"),(void*)f_6108},
{C_text("f_6112:modules_2escm"),(void*)f_6112},
{C_text("f_6121:modules_2escm"),(void*)f_6121},
{C_text("f_6131:modules_2escm"),(void*)f_6131},
{C_text("f_6134:modules_2escm"),(void*)f_6134},
{C_text("f_6137:modules_2escm"),(void*)f_6137},
{C_text("f_6140:modules_2escm"),(void*)f_6140},
{C_text("f_6143:modules_2escm"),(void*)f_6143},
{C_text("f_6149:modules_2escm"),(void*)f_6149},
{C_text("f_6183:modules_2escm"),(void*)f_6183},
{C_text("f_6187:modules_2escm"),(void*)f_6187},
{C_text("f_6202:modules_2escm"),(void*)f_6202},
{C_text("f_6213:modules_2escm"),(void*)f_6213},
{C_text("f_6219:modules_2escm"),(void*)f_6219},
{C_text("f_6236:modules_2escm"),(void*)f_6236},
{C_text("f_6243:modules_2escm"),(void*)f_6243},
{C_text("f_6250:modules_2escm"),(void*)f_6250},
{C_text("f_6295:modules_2escm"),(void*)f_6295},
{C_text("f_6352:modules_2escm"),(void*)f_6352},
{C_text("f_6401:modules_2escm"),(void*)f_6401},
{C_text("f_6409:modules_2escm"),(void*)f_6409},
{C_text("f_6413:modules_2escm"),(void*)f_6413},
{C_text("f_6424:modules_2escm"),(void*)f_6424},
{C_text("f_6451:modules_2escm"),(void*)f_6451},
{C_text("f_6474:modules_2escm"),(void*)f_6474},
{C_text("f_6488:modules_2escm"),(void*)f_6488},
{C_text("f_6513:modules_2escm"),(void*)f_6513},
{C_text("f_6528:modules_2escm"),(void*)f_6528},
{C_text("f_6546:modules_2escm"),(void*)f_6546},
{C_text("f_6557:modules_2escm"),(void*)f_6557},
{C_text("f_6576:modules_2escm"),(void*)f_6576},
{C_text("f_6589:modules_2escm"),(void*)f_6589},
{C_text("f_6599:modules_2escm"),(void*)f_6599},
{C_text("f_6605:modules_2escm"),(void*)f_6605},
{C_text("f_6609:modules_2escm"),(void*)f_6609},
{C_text("f_6612:modules_2escm"),(void*)f_6612},
{C_text("f_6623:modules_2escm"),(void*)f_6623},
{C_text("f_6651:modules_2escm"),(void*)f_6651},
{C_text("f_6665:modules_2escm"),(void*)f_6665},
{C_text("f_6670:modules_2escm"),(void*)f_6670},
{C_text("f_6680:modules_2escm"),(void*)f_6680},
{C_text("f_6698:modules_2escm"),(void*)f_6698},
{C_text("f_6720:modules_2escm"),(void*)f_6720},
{C_text("f_6728:modules_2escm"),(void*)f_6728},
{C_text("f_6762:modules_2escm"),(void*)f_6762},
{C_text("f_6773:modules_2escm"),(void*)f_6773},
{C_text("f_6781:modules_2escm"),(void*)f_6781},
{C_text("f_6815:modules_2escm"),(void*)f_6815},
{C_text("f_6821:modules_2escm"),(void*)f_6821},
{C_text("f_6827:modules_2escm"),(void*)f_6827},
{C_text("f_6837:modules_2escm"),(void*)f_6837},
{C_text("f_6844:modules_2escm"),(void*)f_6844},
{C_text("f_6872:modules_2escm"),(void*)f_6872},
{C_text("f_6876:modules_2escm"),(void*)f_6876},
{C_text("f_6880:modules_2escm"),(void*)f_6880},
{C_text("f_6884:modules_2escm"),(void*)f_6884},
{C_text("f_6888:modules_2escm"),(void*)f_6888},
{C_text("f_6892:modules_2escm"),(void*)f_6892},
{C_text("f_6896:modules_2escm"),(void*)f_6896},
{C_text("f_6900:modules_2escm"),(void*)f_6900},
{C_text("f_6932:modules_2escm"),(void*)f_6932},
{C_text("f_6968:modules_2escm"),(void*)f_6968},
{C_text("f_6970:modules_2escm"),(void*)f_6970},
{C_text("f_7006:modules_2escm"),(void*)f_7006},
{C_text("f_7018:modules_2escm"),(void*)f_7018},
{C_text("f_7050:modules_2escm"),(void*)f_7050},
{C_text("f_7060:modules_2escm"),(void*)f_7060},
{C_text("f_7075:modules_2escm"),(void*)f_7075},
{C_text("f_7099:modules_2escm"),(void*)f_7099},
{C_text("f_7115:modules_2escm"),(void*)f_7115},
{C_text("f_7117:modules_2escm"),(void*)f_7117},
{C_text("f_7142:modules_2escm"),(void*)f_7142},
{C_text("f_7204:modules_2escm"),(void*)f_7204},
{C_text("f_7206:modules_2escm"),(void*)f_7206},
{C_text("f_7231:modules_2escm"),(void*)f_7231},
{C_text("f_7246:modules_2escm"),(void*)f_7246},
{C_text("f_7261:modules_2escm"),(void*)f_7261},
{C_text("f_7282:modules_2escm"),(void*)f_7282},
{C_text("f_7310:modules_2escm"),(void*)f_7310},
{C_text("f_7319:modules_2escm"),(void*)f_7319},
{C_text("f_7336:modules_2escm"),(void*)f_7336},
{C_text("f_7375:modules_2escm"),(void*)f_7375},
{C_text("f_7378:modules_2escm"),(void*)f_7378},
{C_text("f_7381:modules_2escm"),(void*)f_7381},
{C_text("f_7397:modules_2escm"),(void*)f_7397},
{C_text("f_7407:modules_2escm"),(void*)f_7407},
{C_text("f_7413:modules_2escm"),(void*)f_7413},
{C_text("f_7414:modules_2escm"),(void*)f_7414},
{C_text("f_7426:modules_2escm"),(void*)f_7426},
{C_text("f_7439:modules_2escm"),(void*)f_7439},
{C_text("f_7440:modules_2escm"),(void*)f_7440},
{C_text("f_7452:modules_2escm"),(void*)f_7452},
{C_text("f_7465:modules_2escm"),(void*)f_7465},
{C_text("f_7468:modules_2escm"),(void*)f_7468},
{C_text("f_7484:modules_2escm"),(void*)f_7484},
{C_text("f_7488:modules_2escm"),(void*)f_7488},
{C_text("f_7492:modules_2escm"),(void*)f_7492},
{C_text("f_7494:modules_2escm"),(void*)f_7494},
{C_text("f_7504:modules_2escm"),(void*)f_7504},
{C_text("f_7517:modules_2escm"),(void*)f_7517},
{C_text("f_7527:modules_2escm"),(void*)f_7527},
{C_text("f_7551:modules_2escm"),(void*)f_7551},
{C_text("f_7555:modules_2escm"),(void*)f_7555},
{C_text("f_7570:modules_2escm"),(void*)f_7570},
{C_text("f_7572:modules_2escm"),(void*)f_7572},
{C_text("f_7606:modules_2escm"),(void*)f_7606},
{C_text("f_7618:modules_2escm"),(void*)f_7618},
{C_text("f_7636:modules_2escm"),(void*)f_7636},
{C_text("f_7670:modules_2escm"),(void*)f_7670},
{C_text("f_7677:modules_2escm"),(void*)f_7677},
{C_text("f_7683:modules_2escm"),(void*)f_7683},
{C_text("f_7699:modules_2escm"),(void*)f_7699},
{C_text("f_7703:modules_2escm"),(void*)f_7703},
{C_text("f_7707:modules_2escm"),(void*)f_7707},
{C_text("f_7720:modules_2escm"),(void*)f_7720},
{C_text("f_7742:modules_2escm"),(void*)f_7742},
{C_text("f_7744:modules_2escm"),(void*)f_7744},
{C_text("f_7769:modules_2escm"),(void*)f_7769},
{C_text("f_7784:modules_2escm"),(void*)f_7784},
{C_text("f_7799:modules_2escm"),(void*)f_7799},
{C_text("f_7812:modules_2escm"),(void*)f_7812},
{C_text("f_7877:modules_2escm"),(void*)f_7877},
{C_text("f_7883:modules_2escm"),(void*)f_7883},
{C_text("f_7887:modules_2escm"),(void*)f_7887},
{C_text("f_7893:modules_2escm"),(void*)f_7893},
{C_text("f_7896:modules_2escm"),(void*)f_7896},
{C_text("f_7899:modules_2escm"),(void*)f_7899},
{C_text("f_7902:modules_2escm"),(void*)f_7902},
{C_text("f_7903:modules_2escm"),(void*)f_7903},
{C_text("f_7910:modules_2escm"),(void*)f_7910},
{C_text("f_7913:modules_2escm"),(void*)f_7913},
{C_text("f_7916:modules_2escm"),(void*)f_7916},
{C_text("f_7917:modules_2escm"),(void*)f_7917},
{C_text("f_7920:modules_2escm"),(void*)f_7920},
{C_text("f_7924:modules_2escm"),(void*)f_7924},
{C_text("f_7950:modules_2escm"),(void*)f_7950},
{C_text("f_7956:modules_2escm"),(void*)f_7956},
{C_text("f_7960:modules_2escm"),(void*)f_7960},
{C_text("f_7964:modules_2escm"),(void*)f_7964},
{C_text("f_7970:modules_2escm"),(void*)f_7970},
{C_text("f_7973:modules_2escm"),(void*)f_7973},
{C_text("f_7976:modules_2escm"),(void*)f_7976},
{C_text("f_7979:modules_2escm"),(void*)f_7979},
{C_text("f_7986:modules_2escm"),(void*)f_7986},
{C_text("f_8002:modules_2escm"),(void*)f_8002},
{C_text("f_8008:modules_2escm"),(void*)f_8008},
{C_text("f_8011:modules_2escm"),(void*)f_8011},
{C_text("f_8018:modules_2escm"),(void*)f_8018},
{C_text("f_8025:modules_2escm"),(void*)f_8025},
{C_text("f_8031:modules_2escm"),(void*)f_8031},
{C_text("f_8034:modules_2escm"),(void*)f_8034},
{C_text("f_8037:modules_2escm"),(void*)f_8037},
{C_text("f_8055:modules_2escm"),(void*)f_8055},
{C_text("f_8058:modules_2escm"),(void*)f_8058},
{C_text("f_8076:modules_2escm"),(void*)f_8076},
{C_text("f_8088:modules_2escm"),(void*)f_8088},
{C_text("f_8091:modules_2escm"),(void*)f_8091},
{C_text("f_8098:modules_2escm"),(void*)f_8098},
{C_text("f_8104:modules_2escm"),(void*)f_8104},
{C_text("f_8105:modules_2escm"),(void*)f_8105},
{C_text("f_8112:modules_2escm"),(void*)f_8112},
{C_text("f_8124:modules_2escm"),(void*)f_8124},
{C_text("f_8134:modules_2escm"),(void*)f_8134},
{C_text("f_8152:modules_2escm"),(void*)f_8152},
{C_text("f_8162:modules_2escm"),(void*)f_8162},
{C_text("f_8182:modules_2escm"),(void*)f_8182},
{C_text("f_8189:modules_2escm"),(void*)f_8189},
{C_text("f_8191:modules_2escm"),(void*)f_8191},
{C_text("f_8201:modules_2escm"),(void*)f_8201},
{C_text("f_8216:modules_2escm"),(void*)f_8216},
{C_text("f_8218:modules_2escm"),(void*)f_8218},
{C_text("f_8248:modules_2escm"),(void*)f_8248},
{C_text("f_8260:modules_2escm"),(void*)f_8260},
{C_text("f_8263:modules_2escm"),(void*)f_8263},
{C_text("f_8266:modules_2escm"),(void*)f_8266},
{C_text("f_8287:modules_2escm"),(void*)f_8287},
{C_text("f_8289:modules_2escm"),(void*)f_8289},
{C_text("f_8325:modules_2escm"),(void*)f_8325},
{C_text("f_8337:modules_2escm"),(void*)f_8337},
{C_text("f_8366:modules_2escm"),(void*)f_8366},
{C_text("f_8376:modules_2escm"),(void*)f_8376},
{C_text("f_8380:modules_2escm"),(void*)f_8380},
{C_text("f_8390:modules_2escm"),(void*)f_8390},
{C_text("f_8399:modules_2escm"),(void*)f_8399},
{C_text("f_8402:modules_2escm"),(void*)f_8402},
{C_text("f_8405:modules_2escm"),(void*)f_8405},
{C_text("f_8406:modules_2escm"),(void*)f_8406},
{C_text("f_8424:modules_2escm"),(void*)f_8424},
{C_text("f_8430:modules_2escm"),(void*)f_8430},
{C_text("f_8433:modules_2escm"),(void*)f_8433},
{C_text("f_8436:modules_2escm"),(void*)f_8436},
{C_text("f_8464:modules_2escm"),(void*)f_8464},
{C_text("f_8471:modules_2escm"),(void*)f_8471},
{C_text("f_8477:modules_2escm"),(void*)f_8477},
{C_text("f_8480:modules_2escm"),(void*)f_8480},
{C_text("f_8481:modules_2escm"),(void*)f_8481},
{C_text("f_8485:modules_2escm"),(void*)f_8485},
{C_text("f_8503:modules_2escm"),(void*)f_8503},
{C_text("f_8509:modules_2escm"),(void*)f_8509},
{C_text("f_8512:modules_2escm"),(void*)f_8512},
{C_text("f_8515:modules_2escm"),(void*)f_8515},
{C_text("f_8526:modules_2escm"),(void*)f_8526},
{C_text("f_8530:modules_2escm"),(void*)f_8530},
{C_text("f_8534:modules_2escm"),(void*)f_8534},
{C_text("f_8538:modules_2escm"),(void*)f_8538},
{C_text("f_8544:modules_2escm"),(void*)f_8544},
{C_text("f_8554:modules_2escm"),(void*)f_8554},
{C_text("f_8569:modules_2escm"),(void*)f_8569},
{C_text("f_8573:modules_2escm"),(void*)f_8573},
{C_text("f_8575:modules_2escm"),(void*)f_8575},
{C_text("f_8585:modules_2escm"),(void*)f_8585},
{C_text("f_8600:modules_2escm"),(void*)f_8600},
{C_text("f_8618:modules_2escm"),(void*)f_8618},
{C_text("f_8645:modules_2escm"),(void*)f_8645},
{C_text("f_8691:modules_2escm"),(void*)f_8691},
{C_text("f_8700:modules_2escm"),(void*)f_8700},
{C_text("f_8711:modules_2escm"),(void*)f_8711},
{C_text("f_8715:modules_2escm"),(void*)f_8715},
{C_text("f_8718:modules_2escm"),(void*)f_8718},
{C_text("f_8726:modules_2escm"),(void*)f_8726},
{C_text("f_8747:modules_2escm"),(void*)f_8747},
{C_text("f_8751:modules_2escm"),(void*)f_8751},
{C_text("f_8759:modules_2escm"),(void*)f_8759},
{C_text("f_8763:modules_2escm"),(void*)f_8763},
{C_text("f_8779:modules_2escm"),(void*)f_8779},
{C_text("f_8783:modules_2escm"),(void*)f_8783},
{C_text("f_8797:modules_2escm"),(void*)f_8797},
{C_text("f_8808:modules_2escm"),(void*)f_8808},
{C_text("f_8834:modules_2escm"),(void*)f_8834},
{C_text("f_8836:modules_2escm"),(void*)f_8836},
{C_text("f_8860:modules_2escm"),(void*)f_8860},
{C_text("f_8869:modules_2escm"),(void*)f_8869},
{C_text("f_8884:modules_2escm"),(void*)f_8884},
{C_text("f_8892:modules_2escm"),(void*)f_8892},
{C_text("f_8899:modules_2escm"),(void*)f_8899},
{C_text("f_8903:modules_2escm"),(void*)f_8903},
{C_text("f_8906:modules_2escm"),(void*)f_8906},
{C_text("f_8911:modules_2escm"),(void*)f_8911},
{C_text("f_8915:modules_2escm"),(void*)f_8915},
{C_text("f_8918:modules_2escm"),(void*)f_8918},
{C_text("f_8921:modules_2escm"),(void*)f_8921},
{C_text("f_8924:modules_2escm"),(void*)f_8924},
{C_text("f_8928:modules_2escm"),(void*)f_8928},
{C_text("f_8932:modules_2escm"),(void*)f_8932},
{C_text("f_8936:modules_2escm"),(void*)f_8936},
{C_text("f_8940:modules_2escm"),(void*)f_8940},
{C_text("f_8943:modules_2escm"),(void*)f_8943},
{C_text("f_8946:modules_2escm"),(void*)f_8946},
{C_text("f_8949:modules_2escm"),(void*)f_8949},
{C_text("f_8952:modules_2escm"),(void*)f_8952},
{C_text("f_8967:modules_2escm"),(void*)f_8967},
{C_text("f_8973:modules_2escm"),(void*)f_8973},
{C_text("f_8977:modules_2escm"),(void*)f_8977},
{C_text("f_8980:modules_2escm"),(void*)f_8980},
{C_text("f_8983:modules_2escm"),(void*)f_8983},
{C_text("f_8986:modules_2escm"),(void*)f_8986},
{C_text("f_8989:modules_2escm"),(void*)f_8989},
{C_text("f_8992:modules_2escm"),(void*)f_8992},
{C_text("f_8995:modules_2escm"),(void*)f_8995},
{C_text("f_8998:modules_2escm"),(void*)f_8998},
{C_text("f_9004:modules_2escm"),(void*)f_9004},
{C_text("f_9008:modules_2escm"),(void*)f_9008},
{C_text("f_9016:modules_2escm"),(void*)f_9016},
{C_text("f_9022:modules_2escm"),(void*)f_9022},
{C_text("f_9027:modules_2escm"),(void*)f_9027},
{C_text("f_9031:modules_2escm"),(void*)f_9031},
{C_text("f_9036:modules_2escm"),(void*)f_9036},
{C_text("f_9043:modules_2escm"),(void*)f_9043},
{C_text("f_9047:modules_2escm"),(void*)f_9047},
{C_text("f_9050:modules_2escm"),(void*)f_9050},
{C_text("f_9054:modules_2escm"),(void*)f_9054},
{C_text("f_9057:modules_2escm"),(void*)f_9057},
{C_text("f_9065:modules_2escm"),(void*)f_9065},
{C_text("f_9069:modules_2escm"),(void*)f_9069},
{C_text("f_9072:modules_2escm"),(void*)f_9072},
{C_text("f_9075:modules_2escm"),(void*)f_9075},
{C_text("f_9078:modules_2escm"),(void*)f_9078},
{C_text("f_9080:modules_2escm"),(void*)f_9080},
{C_text("f_9088:modules_2escm"),(void*)f_9088},
{C_text("f_9092:modules_2escm"),(void*)f_9092},
{C_text("f_9094:modules_2escm"),(void*)f_9094},
{C_text("f_9107:modules_2escm"),(void*)f_9107},
{C_text("f_9114:modules_2escm"),(void*)f_9114},
{C_text("f_9138:modules_2escm"),(void*)f_9138},
{C_text("f_9152:modules_2escm"),(void*)f_9152},
{C_text("f_9160:modules_2escm"),(void*)f_9160},
{C_text("f_9187:modules_2escm"),(void*)f_9187},
{C_text("f_9212:modules_2escm"),(void*)f_9212},
{C_text("f_9224:modules_2escm"),(void*)f_9224},
{C_text("f_9227:modules_2escm"),(void*)f_9227},
{C_text("f_9231:modules_2escm"),(void*)f_9231},
{C_text("f_9234:modules_2escm"),(void*)f_9234},
{C_text("f_9250:modules_2escm"),(void*)f_9250},
{C_text("f_9258:modules_2escm"),(void*)f_9258},
{C_text("f_9262:modules_2escm"),(void*)f_9262},
{C_text("f_9266:modules_2escm"),(void*)f_9266},
{C_text("f_9283:modules_2escm"),(void*)f_9283},
{C_text("f_9297:modules_2escm"),(void*)f_9297},
{C_text("f_9315:modules_2escm"),(void*)f_9315},
{C_text("f_9318:modules_2escm"),(void*)f_9318},
{C_text("f_9323:modules_2escm"),(void*)f_9323},
{C_text("f_9333:modules_2escm"),(void*)f_9333},
{C_text("f_9337:modules_2escm"),(void*)f_9337},
{C_text("f_9342:modules_2escm"),(void*)f_9342},
{C_text("f_9350:modules_2escm"),(void*)f_9350},
{C_text("f_9360:modules_2escm"),(void*)f_9360},
{C_text("f_9373:modules_2escm"),(void*)f_9373},
{C_text("f_9383:modules_2escm"),(void*)f_9383},
{C_text("f_9401:modules_2escm"),(void*)f_9401},
{C_text("f_9423:modules_2escm"),(void*)f_9423},
{C_text("f_9465:modules_2escm"),(void*)f_9465},
{C_text("f_9468:modules_2escm"),(void*)f_9468},
{C_text("f_9473:modules_2escm"),(void*)f_9473},
{C_text("f_9483:modules_2escm"),(void*)f_9483},
{C_text("f_9487:modules_2escm"),(void*)f_9487},
{C_text("f_9492:modules_2escm"),(void*)f_9492},
{C_text("f_9504:modules_2escm"),(void*)f_9504},
{C_text("f_9512:modules_2escm"),(void*)f_9512},
{C_text("f_9522:modules_2escm"),(void*)f_9522},
{C_text("f_9535:modules_2escm"),(void*)f_9535},
{C_text("f_9545:modules_2escm"),(void*)f_9545},
{C_text("f_9563:modules_2escm"),(void*)f_9563},
{C_text("f_9575:modules_2escm"),(void*)f_9575},
{C_text("f_9604:modules_2escm"),(void*)f_9604},
{C_text("f_9616:modules_2escm"),(void*)f_9616},
{C_text("f_9648:modules_2escm"),(void*)f_9648},
{C_text("f_9651:modules_2escm"),(void*)f_9651},
{C_text("f_9656:modules_2escm"),(void*)f_9656},
{C_text("f_9666:modules_2escm"),(void*)f_9666},
{C_text("f_9670:modules_2escm"),(void*)f_9670},
{C_text("f_9675:modules_2escm"),(void*)f_9675},
{C_text("f_9687:modules_2escm"),(void*)f_9687},
{C_text("f_9695:modules_2escm"),(void*)f_9695},
{C_text("f_9708:modules_2escm"),(void*)f_9708},
{C_text("f_9714:modules_2escm"),(void*)f_9714},
{C_text("f_9727:modules_2escm"),(void*)f_9727},
{C_text("f_9737:modules_2escm"),(void*)f_9737},
{C_text("f_9750:modules_2escm"),(void*)f_9750},
{C_text("f_9789:modules_2escm"),(void*)f_9789},
{C_text("f_9805:modules_2escm"),(void*)f_9805},
{C_text("f_9842:modules_2escm"),(void*)f_9842},
{C_text("f_9858:modules_2escm"),(void*)f_9858},
{C_text("f_9898:modules_2escm"),(void*)f_9898},
{C_text("f_9901:modules_2escm"),(void*)f_9901},
{C_text("f_9906:modules_2escm"),(void*)f_9906},
{C_text("f_9916:modules_2escm"),(void*)f_9916},
{C_text("f_9920:modules_2escm"),(void*)f_9920},
{C_text("f_9922:modules_2escm"),(void*)f_9922},
{C_text("f_9930:modules_2escm"),(void*)f_9930},
{C_text("f_9936:modules_2escm"),(void*)f_9936},
{C_text("f_9940:modules_2escm"),(void*)f_9940},
{C_text("f_9944:modules_2escm"),(void*)f_9944},
{C_text("f_9965:modules_2escm"),(void*)f_9965},
{C_text("f_9975:modules_2escm"),(void*)f_9975},
{C_text("f_9977:modules_2escm"),(void*)f_9977},
{C_text("toplevel:modules_2escm"),(void*)C_modules_toplevel},
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
S|  chicken.format#format		3
S|  chicken.format#fprintf		8
S|  scheme#for-each		16
S|  chicken.base#foldl		3
S|  scheme#map		25
S|  chicken.base#foldr		3
o|eliminated procedure checks: 483 
o|specializations:
o|  1 (scheme#cddr (pair * pair))
o|  1 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  3 (scheme#= fixnum fixnum)
o|  1 (scheme#length list)
o|  11 (##sys#check-output-port * * *)
o|  2 (scheme#cdar (pair pair *))
o|  1 (scheme#caar (pair pair *))
o|  1 (scheme#eqv? * *)
o|  11 (##sys#check-list (or pair list) *)
o|  79 (scheme#cdr pair)
o|  37 (scheme#car pair)
(o e)|safe calls: 1108 
(o e)|dropped branches: 2 
(o e)|assignments to immediate values: 1 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4356 
o|inlining procedure: k4356 
o|inlining procedure: k4387 
o|inlining procedure: k4387 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|inlining procedure: k4473 
o|inlining procedure: k4473 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4604 
o|inlining procedure: k4604 
o|inlining procedure: k4596 
o|inlining procedure: k4596 
o|inlining procedure: k4651 
o|inlining procedure: k4651 
o|inlining procedure: k4640 
o|inlining procedure: k4640 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k4995 
o|inlining procedure: k4995 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|removed side-effect free assignment to unused variable: module? 
o|merged explicitly consed rest parameter: rest953960 
o|inlining procedure: k5653 
o|contracted procedure: "(modules.scm:138) g988997" 
o|inlining procedure: k5653 
o|inlining procedure: k5708 
o|inlining procedure: k5708 
o|inlining procedure: k5700 
o|inlining procedure: k5700 
o|inlining procedure: k5749 
o|inlining procedure: k5749 
o|inlining procedure: k5800 
o|inlining procedure: k5800 
o|inlining procedure: k5861 
o|inlining procedure: k5861 
o|inlining procedure: k5844 
o|inlining procedure: k5900 
o|inlining procedure: k5900 
o|inlining procedure: k5844 
o|inlining procedure: k5952 
o|inlining procedure: k5952 
o|inlining procedure: k5996 
o|inlining procedure: k5996 
o|inlining procedure: k6022 
o|inlining procedure: k6022 
o|inlining procedure: k6034 
o|inlining procedure: k6034 
o|inlining procedure: k6123 
o|inlining procedure: k6123 
o|inlining procedure: k6204 
o|inlining procedure: k6204 
o|consed rest parameter at call site: "(modules.scm:261) make-module" 7 
o|merged explicitly consed rest parameter: ses*1283 
o|inlining procedure: k6625 
o|inlining procedure: k6625 
o|inlining procedure: k6645 
o|inlining procedure: k6672 
o|inlining procedure: k6672 
o|inlining procedure: k6645 
o|inlining procedure: k6700 
o|inlining procedure: k6700 
o|inlining procedure: k6972 
o|contracted procedure: "(modules.scm:382) g14851494" 
o|inlining procedure: k6972 
o|inlining procedure: k7004 
o|inlining procedure: k7004 
o|inlining procedure: k7020 
o|inlining procedure: k7020 
o|inlining procedure: k7083 
o|inlining procedure: k7083 
o|inlining procedure: k7119 
o|inlining procedure: k7119 
o|inlining procedure: k7208 
o|contracted procedure: "(modules.scm:355) g13991408" 
o|inlining procedure: k7160 
o|inlining procedure: k7160 
o|inlining procedure: k7208 
o|contracted procedure: "(modules.scm:348) g13871388" 
o|contracted procedure: "(modules.scm:340) compiled-module-dependencies" 
o|inlining procedure: k6783 
o|contracted procedure: "(modules.scm:328) g13411350" 
o|inlining procedure: k6783 
o|contracted procedure: "(modules.scm:329) delete-duplicates" 
o|inlining procedure: k4548 
o|inlining procedure: k4548 
o|inlining procedure: k7326 
o|inlining procedure: k7326 
o|consed rest parameter at call site: "(modules.scm:422) merge-se" 1 
o|inlining procedure: k7431 
o|consed rest parameter at call site: "(modules.scm:422) merge-se" 1 
o|inlining procedure: k7431 
o|consed rest parameter at call site: "(modules.scm:422) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:426) merge-se" 1 
o|inlining procedure: k7457 
o|consed rest parameter at call site: "(modules.scm:426) merge-se" 1 
o|inlining procedure: k7457 
o|consed rest parameter at call site: "(modules.scm:426) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:430) merge-se" 1 
o|inlining procedure: k7496 
o|inlining procedure: k7496 
o|inlining procedure: k7519 
o|inlining procedure: k7519 
o|consed rest parameter at call site: "(modules.scm:415) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:411) make-module" 7 
o|inlining procedure: k7574 
o|contracted procedure: "(modules.scm:408) g15471556" 
o|inlining procedure: k7574 
o|inlining procedure: k7608 
o|contracted procedure: "(modules.scm:405) find-reexport1528" 
o|inlining procedure: k7356 
o|inlining procedure: k7356 
o|inlining procedure: k7608 
o|inlining procedure: k7620 
o|inlining procedure: k7620 
o|consed rest parameter at call site: "(modules.scm:451) merge-se" 1 
o|inlining procedure: k7722 
o|inlining procedure: k7722 
o|consed rest parameter at call site: "(modules.scm:437) make-module" 7 
o|inlining procedure: k7746 
o|inlining procedure: k7746 
o|inlining procedure: k7814 
o|inlining procedure: k7814 
o|inlining procedure: k7826 
o|inlining procedure: k7841 
o|inlining procedure: k7841 
o|inlining procedure: k7826 
o|substituted constant variable: a7889 
o|substituted constant variable: a7890 
o|substituted constant variable: a7906 
o|substituted constant variable: a7907 
o|inlining procedure: k7925 
o|inlining procedure: k7925 
o|substituted constant variable: a7940 
o|substituted constant variable: a7952 
o|substituted constant variable: a7953 
o|substituted constant variable: a7966 
o|substituted constant variable: a7967 
o|substituted constant variable: a8004 
o|substituted constant variable: a8005 
o|inlining procedure: k7994 
o|substituted constant variable: a8027 
o|substituted constant variable: a8028 
o|inlining procedure: k7994 
o|inlining procedure: k8048 
o|inlining procedure: k8048 
o|inlining procedure: k8060 
o|substituted constant variable: a8072 
o|substituted constant variable: a8073 
o|substituted constant variable: a8084 
o|substituted constant variable: a8085 
o|inlining procedure: k8077 
o|substituted constant variable: a8100 
o|substituted constant variable: a8101 
o|substituted constant variable: a8108 
o|substituted constant variable: a8109 
o|inlining procedure: k8077 
o|inlining procedure: k8126 
o|inlining procedure: k8126 
o|substituted constant variable: a8146 
o|contracted procedure: "(modules.scm:523) g18761877" 
o|inlining procedure: k8060 
o|inlining procedure: k8154 
o|inlining procedure: k8154 
o|inlining procedure: k8193 
o|inlining procedure: k8193 
o|inlining procedure: k8220 
o|inlining procedure: k8220 
o|inlining procedure: k8243 
o|substituted constant variable: a8256 
o|substituted constant variable: a8257 
o|substituted constant variable: a8271 
o|inlining procedure: k8243 
o|inlining procedure: k8291 
o|inlining procedure: k8291 
o|inlining procedure: k8408 
o|inlining procedure: k8408 
o|consed rest parameter at call site: "(modules.scm:624) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:642) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:639) merge-se" 1 
o|inlining procedure: k8546 
o|inlining procedure: k8546 
o|consed rest parameter at call site: "(modules.scm:618) merge-se" 1 
o|inlining procedure: k8577 
o|contracted procedure: "(modules.scm:613) g20212030" 
o|inlining procedure: k8442 
o|inlining procedure: k8442 
o|inlining procedure: k8577 
o|contracted procedure: "(modules.scm:617) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?1234 
o|inlining procedure: k6414 
o|inlining procedure: k6414 
o|inlining procedure: k6426 
o|inlining procedure: k6426 
o|inlining procedure: k6453 
o|inlining procedure: k6453 
o|inlining procedure: k6511 
o|inlining procedure: k6511 
o|inlining procedure: k6485 
o|inlining procedure: k6485 
o|inlining procedure: k6530 
o|inlining procedure: k6530 
o|inlining procedure: k8620 
o|inlining procedure: k8620 
o|inlining procedure: k8647 
o|inlining procedure: k8647 
o|inlining procedure: k8670 
o|inlining procedure: k8670 
o|inlining procedure: k8698 
o|inlining procedure: k8698 
o|inlining procedure: k8739 
o|inlining procedure: k8739 
o|inlining procedure: k8767 
o|inlining procedure: k8767 
o|consed rest parameter at call site: "(modules.scm:554) merge-se" 1 
o|inlining procedure: k8838 
o|inlining procedure: k8838 
o|inlining procedure: k8855 
o|inlining procedure: k8855 
o|contracted procedure: "(modules.scm:551) filter-sdlist1717" 
o|inlining procedure: k8339 
o|inlining procedure: k8339 
o|substituted constant variable: saved208920902109 
o|substituted constant variable: saved209120922110 
o|inlining procedure: k9009 
o|inlining procedure: k9009 
o|substituted constant variable: a9048 
o|inlining procedure: k9058 
o|inlining procedure: k9058 
o|inlining procedure: k9096 
o|inlining procedure: k9096 
o|inlining procedure: k9115 
o|inlining procedure: k9115 
o|inlining procedure: k9143 
o|inlining procedure: k9157 
o|inlining procedure: k9157 
o|inlining procedure: k9143 
o|inlining procedure: k9189 
o|inlining procedure: k9189 
o|inlining procedure: k9235 
o|inlining procedure: k9235 
o|inlining procedure: k9285 
o|inlining procedure: k9285 
o|inlining procedure: k9310 
o|inlining procedure: k9344 
o|inlining procedure: k9375 
o|inlining procedure: k9375 
o|inlining procedure: k9344 
o|inlining procedure: k9420 
o|inlining procedure: k9420 
o|inlining procedure: k9310 
o|inlining procedure: k9494 
o|inlining procedure: k9506 
o|inlining procedure: k9537 
o|inlining procedure: k9537 
o|inlining procedure: k9506 
o|inlining procedure: k9494 
o|inlining procedure: k9643 
o|inlining procedure: k9677 
o|inlining procedure: k9689 
o|inlining procedure: k9729 
o|inlining procedure: k9729 
o|inlining procedure: k9752 
o|inlining procedure: k9752 
o|inlining procedure: k9689 
o|inlining procedure: k9677 
o|inlining procedure: k9643 
o|inlining procedure: k9979 
o|inlining procedure: k9979 
o|inlining procedure: k10013 
o|inlining procedure: k10013 
o|inlining procedure: k10079 
o|inlining procedure: k10079 
o|inlining procedure: k10103 
o|inlining procedure: k10103 
o|inlining procedure: k10152 
o|inlining procedure: k10162 
o|inlining procedure: k10162 
o|inlining procedure: k10152 
o|inlining procedure: k10197 
o|inlining procedure: k10197 
o|consed rest parameter at call site: "(modules.scm:864) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:863) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:861) merge-se" 1 
o|inlining procedure: k10315 
o|inlining procedure: k10315 
o|inlining procedure: k10349 
o|inlining procedure: k10349 
o|inlining procedure: k10419 
o|inlining procedure: k10419 
o|inlining procedure: k10453 
o|inlining procedure: k10453 
o|inlining procedure: k10493 
o|inlining procedure: k10493 
o|inlining procedure: k10516 
o|inlining procedure: k10516 
o|inlining procedure: k10536 
o|inlining procedure: k10536 
o|contracted procedure: "(modules.scm:879) register-undefined" 
o|inlining procedure: k6231 
o|inlining procedure: k6245 
o|inlining procedure: k6245 
o|inlining procedure: k6288 
o|inlining procedure: k6288 
o|inlining procedure: k6231 
o|inlining procedure: k10596 
o|inlining procedure: k10596 
o|inlining procedure: k10620 
o|inlining procedure: k10620 
o|inlining procedure: k10642 
o|inlining procedure: k10642 
o|contracted procedure: "(modules.scm:882) g28562857" 
o|merged explicitly consed rest parameter: args2877 
o|inlining procedure: k10678 
o|inlining procedure: k10678 
o|consed rest parameter at call site: "(modules.scm:897) err2875" 1 
o|contracted procedure: "(modules.scm:896) g28822883" 
o|inlining procedure: k10684 
o|inlining procedure: k10684 
o|inlining procedure: k10699 
o|consed rest parameter at call site: "(modules.scm:901) err2875" 1 
o|inlining procedure: k10699 
o|inlining procedure: k10714 
o|inlining procedure: k10714 
o|consed rest parameter at call site: "(modules.scm:906) err2875" 1 
o|inlining procedure: k10732 
o|inlining procedure: k10732 
o|consed rest parameter at call site: "(modules.scm:911) err2875" 1 
o|inlining procedure: k10756 
o|inlining procedure: k10756 
o|inlining procedure: k10779 
o|inlining procedure: k10779 
o|consed rest parameter at call site: "(modules.scm:917) err2875" 1 
o|inlining procedure: k10823 
o|inlining procedure: k10823 
o|consed rest parameter at call site: "(modules.scm:922) err2875" 1 
o|contracted procedure: "(modules.scm:925) g29132914" 
o|merged explicitly consed rest parameter: args2928 
o|consed rest parameter at call site: "(modules.scm:936) err2927" 1 
o|inlining procedure: k10944 
o|inlining procedure: k10944 
o|inlining procedure: k10995 
o|inlining procedure: k10995 
o|inlining procedure: k11004 
o|inlining procedure: k11016 
o|inlining procedure: k11016 
o|removed unused parameter to known procedure: alias2989 "(modules.scm:950) match-functor-argument" 
o|inlining procedure: k11004 
o|removed unused parameter to known procedure: alias2989 "(modules.scm:964) match-functor-argument" 
o|consed rest parameter at call site: "(modules.scm:931) err2927" 1 
o|contracted procedure: "(modules.scm:928) g29232924" 
o|removed unused formal parameters: (alias2989) 
o|inlining procedure: k11124 
o|inlining procedure: k11135 
o|inlining procedure: k11135 
o|inlining procedure: k11124 
o|inlining procedure: k11219 
o|contracted procedure: "(modules.scm:991) g30263035" 
o|substituted constant variable: a11205 
o|inlining procedure: k11219 
o|inlining procedure: k11253 
o|inlining procedure: k11253 
o|inlining procedure: k11312 
o|inlining procedure: k11312 
o|inlining procedure: k11415 
o|inlining procedure: k11415 
o|inlining procedure: k11454 
o|contracted procedure: "(modules.scm:1433) delq3099" 
o|inlining procedure: k11470 
o|inlining procedure: k11470 
o|propagated global variable: lst3103 ##sys#module-table 
o|inlining procedure: k11454 
o|inlining procedure: k11559 
o|contracted procedure: "(modules.scm:1444) g31223131" 
o|inlining procedure: k11559 
o|propagated global variable: r4rs-syntax3047 ##sys#scheme-macro-environment 
o|replaced variables: 1742 
o|removed binding forms: 539 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|substituted constant variable: r464111688 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r599711718 
o|substituted constant variable: r602311720 
o|removed call to pure procedure with unused result: "(modules.scm:217) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:232) chicken.base#void" 
o|substituted constant variable: r700511737 
o|substituted constant variable: r700511737 
o|substituted constant variable: r702111741 
o|removed call to pure procedure with unused result: "(modules.scm:368) chicken.base#void" 
o|substituted constant variable: prop1390 
o|substituted constant variable: r732711756 
o|substituted constant variable: r743211759 
o|substituted constant variable: r743211759 
o|substituted constant variable: r745811763 
o|substituted constant variable: r745811763 
o|substituted constant variable: r760911774 
o|substituted constant variable: r762111776 
o|substituted constant variable: r781511781 
o|substituted constant variable: r804911792 
o|converted assignments to bindings: (ln->num1808) 
o|substituted constant variable: prop1879 
o|substituted constant variable: r806111798 
o|substituted constant variable: r824411806 
o|removed call to pure procedure with unused result: "(modules.scm:625) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:628) chicken.base#void" 
o|substituted constant variable: r641511817 
o|substituted constant variable: r642711819 
o|converted assignments to bindings: (warn1235) 
o|substituted constant variable: r864811833 
o|removed call to pure procedure with unused result: "(modules.scm:585) chicken.base#void" 
o|substituted constant variable: r883911845 
o|substituted constant variable: r834011849 
o|converted assignments to bindings: (report-unresolved-identifiers1716) 
o|substituted constant variable: r901011852 
o|converted assignments to bindings: (rename2520) 
o|converted assignments to bindings: (module-imports2223) 
o|substituted constant variable: r1016311903 
o|substituted constant variable: r1015311904 
o|substituted constant variable: r1019811906 
o|removed call to pure procedure with unused result: "(modules.scm:862) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:822) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:821) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:820) chicken.base#void" 
o|substituted constant variable: r628911926 
o|substituted constant variable: r628911926 
o|removed call to pure procedure with unused result: "(modules.scm:877) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:886) chicken.base#void" 
o|converted assignments to bindings: (mrename2841) 
o|substituted constant variable: prop2885 
o|substituted constant variable: r1071511941 
o|substituted constant variable: prop2916 
o|substituted constant variable: r1099611953 
o|substituted constant variable: r1099611953 
o|substituted constant variable: r1101711958 
o|converted assignments to bindings: (merr2935) 
o|converted assignments to bindings: (err2927) 
o|substituted constant variable: prop2926 
o|substituted constant variable: r1145511976 
o|converted assignments to bindings: (delmod3098) 
o|simplifications: ((let . 9)) 
o|replaced variables: 106 
o|removed binding forms: 1515 
o|contracted procedure: k6064 
o|contracted procedure: k6144 
o|contracted procedure: k7104 
o|inlining procedure: k7786 
o|inlining procedure: k7928 
o|inlining procedure: k8229 
o|inlining procedure: k8229 
o|inlining procedure: k8229 
o|inlining procedure: k8229 
o|contracted procedure: k8486 
o|contracted procedure: k8504 
o|inlining procedure: k8598 
o|inlining procedure: k8598 
o|contracted procedure: k8733 
o|contracted procedure: k10132 
o|contracted procedure: k10135 
o|contracted procedure: k10138 
o|contracted procedure: k10601 
o|inlining procedure: k10604 
o|inlining procedure: k10604 
o|contracted procedure: k10639 
o|removed binding forms: 131 
o|contracted procedure: k7249 
o|inlining procedure: k7359 
o|substituted constant variable: r778712254 
o|inlining procedure: k7838 
o|substituted constant variable: r792912257 
o|contracted procedure: k8065 
o|substituted constant variable: r823012265 
o|substituted constant variable: r823012265 
o|substituted constant variable: r823012267 
o|substituted constant variable: r823012267 
o|substituted constant variable: r823012269 
o|substituted constant variable: r823012269 
o|substituted constant variable: r823012271 
o|substituted constant variable: r823012271 
o|contracted procedure: k10625 
o|contracted procedure: k10675 
o|contracted procedure: k10897 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 20 
o|removed conditional forms: 5 
o|substituted constant variable: r736012399 
o|substituted constant variable: r783912402 
o|substituted constant variable: r783912402 
o|removed binding forms: 9 
o|removed conditional forms: 2 
o|removed binding forms: 2 
o|simplifications: ((if . 33) (##core#call . 746) (let . 57)) 
o|  call simplifications:
o|    scheme#vector
o|    scheme#list?	2
o|    scheme#set-cdr!
o|    scheme#caddr
o|    scheme#cddr	3
o|    scheme#string?
o|    scheme#number?
o|    scheme#cdar	3
o|    scheme#apply	4
o|    scheme#length	2
o|    scheme#list	7
o|    scheme#set-car!	3
o|    ##sys#call-with-values	6
o|    scheme#list-ref
o|    scheme#equal?
o|    scheme#symbol?	17
o|    ##sys#cons	23
o|    ##sys#list	27
o|    scheme#not	15
o|    scheme#caar	14
o|    scheme#eq?	28
o|    scheme#assq	33
o|    scheme#cdr	39
o|    scheme#memq	6
o|    scheme#cadr	15
o|    ##sys#setslot	22
o|    scheme#values	6
o|    ##sys#check-structure	28
o|    ##sys#block-ref	15
o|    ##sys#make-structure	3
o|    ##sys#check-list	31
o|    scheme#pair?	60
o|    ##sys#slot	104
o|    scheme#null?	46
o|    scheme#car	63
o|    scheme#cons	114
o|contracted procedure: k4476 
o|contracted procedure: k4502 
o|contracted procedure: k4631 
o|contracted procedure: k4643 
o|contracted procedure: k4666 
o|contracted procedure: k4674 
o|contracted procedure: k5262 
o|contracted procedure: k5280 
o|contracted procedure: k5289 
o|contracted procedure: k5298 
o|contracted procedure: k5307 
o|contracted procedure: k5316 
o|contracted procedure: k5325 
o|contracted procedure: k5334 
o|contracted procedure: k5343 
o|contracted procedure: k5352 
o|contracted procedure: k5361 
o|contracted procedure: k5370 
o|contracted procedure: k5379 
o|contracted procedure: k5388 
o|contracted procedure: k5397 
o|contracted procedure: k5406 
o|contracted procedure: k5415 
o|contracted procedure: k5424 
o|contracted procedure: k5433 
o|contracted procedure: k5442 
o|contracted procedure: k5451 
o|contracted procedure: k5460 
o|contracted procedure: k5469 
o|contracted procedure: k5478 
o|contracted procedure: k5487 
o|contracted procedure: k5496 
o|contracted procedure: k5505 
o|contracted procedure: k5514 
o|contracted procedure: k5523 
o|contracted procedure: k5557 
o|contracted procedure: k5551 
o|contracted procedure: k5574 
o|contracted procedure: k5570 
o|contracted procedure: k5624 
o|contracted procedure: k5640 
o|contracted procedure: k5656 
o|contracted procedure: k5678 
o|contracted procedure: k5633 
o|contracted procedure: k5637 
o|contracted procedure: k5674 
o|contracted procedure: k5659 
o|contracted procedure: k5662 
o|contracted procedure: k5670 
o|contracted procedure: k5697 
o|contracted procedure: k5705 
o|contracted procedure: k5711 
o|contracted procedure: k5721 
o|contracted procedure: k5779 
o|contracted procedure: k5734 
o|contracted procedure: k5773 
o|contracted procedure: k5737 
o|contracted procedure: k5767 
o|contracted procedure: k5740 
o|contracted procedure: k5761 
o|contracted procedure: k5743 
o|contracted procedure: k5746 
o|contracted procedure: k5788 
o|contracted procedure: k5815 
o|contracted procedure: k5847 
o|contracted procedure: k5858 
o|contracted procedure: k5867 
o|contracted procedure: k5873 
o|contracted procedure: k5903 
o|contracted procedure: k5913 
o|contracted procedure: k5917 
o|contracted procedure: k5940 
o|contracted procedure: k5943 
o|contracted procedure: k5955 
o|contracted procedure: k5977 
o|contracted procedure: k5973 
o|contracted procedure: k5958 
o|contracted procedure: k5961 
o|contracted procedure: k5969 
o|contracted procedure: k6003 
o|contracted procedure: k6013 
o|contracted procedure: k6019 
o|contracted procedure: k6037 
o|contracted procedure: k6049 
o|contracted procedure: k6075 
o|contracted procedure: k6071 
o|contracted procedure: k6083 
o|contracted procedure: k6126 
o|contracted procedure: k6158 
o|contracted procedure: k6154 
o|contracted procedure: k6173 
o|contracted procedure: k6169 
o|contracted procedure: k6188 
o|contracted procedure: k6225 
o|contracted procedure: k6338 
o|contracted procedure: k6297 
o|contracted procedure: k6332 
o|contracted procedure: k6300 
o|contracted procedure: k6326 
o|contracted procedure: k6303 
o|contracted procedure: k6320 
o|contracted procedure: k6306 
o|contracted procedure: k6317 
o|contracted procedure: k6313 
o|contracted procedure: k6617 
o|contracted procedure: k6628 
o|contracted procedure: k6754 
o|contracted procedure: k6634 
o|contracted procedure: k6637 
o|contracted procedure: k6648 
o|contracted procedure: k6657 
o|contracted procedure: k6660 
o|contracted procedure: k6675 
o|contracted procedure: k6685 
o|contracted procedure: k6689 
o|contracted procedure: k6703 
o|contracted procedure: k6710 
o|contracted procedure: k6735 
o|contracted procedure: k6741 
o|contracted procedure: k6745 
o|contracted procedure: k6866 
o|contracted procedure: k6862 
o|contracted procedure: k6858 
o|contracted procedure: k6910 
o|contracted procedure: k6914 
o|contracted procedure: k7155 
o|contracted procedure: k7199 
o|contracted procedure: k6918 
o|contracted procedure: k6922 
o|contracted procedure: k7072 
o|contracted procedure: k7077 
o|contracted procedure: k7080 
o|contracted procedure: k7086 
o|contracted procedure: k7093 
o|contracted procedure: k7110 
o|contracted procedure: k6926 
o|contracted procedure: k6938 
o|contracted procedure: k6963 
o|contracted procedure: k6934 
o|contracted procedure: k6906 
o|contracted procedure: k6902 
o|contracted procedure: k6975 
o|contracted procedure: k6997 
o|contracted procedure: k6957 
o|contracted procedure: k6947 
o|contracted procedure: k6951 
o|contracted procedure: k6993 
o|contracted procedure: k6978 
o|contracted procedure: k6981 
o|contracted procedure: k6989 
o|contracted procedure: k7007 
o|contracted procedure: k7023 
o|contracted procedure: k7068 
o|contracted procedure: k7029 
o|contracted procedure: k7037 
o|contracted procedure: k7054 
o|contracted procedure: k7044 
o|contracted procedure: k7122 
o|contracted procedure: k7125 
o|contracted procedure: k7128 
o|contracted procedure: k7136 
o|contracted procedure: k7144 
o|contracted procedure: k7211 
o|contracted procedure: k7214 
o|contracted procedure: k7217 
o|contracted procedure: k7225 
o|contracted procedure: k7233 
o|contracted procedure: k7193 
o|contracted procedure: k7163 
o|contracted procedure: k7170 
o|contracted procedure: k7181 
o|contracted procedure: k7185 
o|contracted procedure: k7252 
o|contracted procedure: k7283 
o|contracted procedure: k7269 
o|contracted procedure: k7276 
o|contracted procedure: k7311 
o|contracted procedure: k7289 
o|contracted procedure: k7304 
o|contracted procedure: k7300 
o|contracted procedure: k7296 
o|contracted procedure: k6763 
o|contracted procedure: k6774 
o|contracted procedure: k6786 
o|contracted procedure: k6808 
o|contracted procedure: k6804 
o|contracted procedure: k6789 
o|contracted procedure: k6792 
o|contracted procedure: k6800 
o|contracted procedure: k4551 
o|contracted procedure: k4554 
o|contracted procedure: k4564 
o|contracted procedure: k7323 
o|contracted procedure: k7329 
o|contracted procedure: k7663 
o|contracted procedure: k7338 
o|contracted procedure: k7657 
o|contracted procedure: k7341 
o|contracted procedure: k7651 
o|contracted procedure: k7344 
o|contracted procedure: k7645 
o|contracted procedure: k7347 
o|contracted procedure: k7382 
o|contracted procedure: k7402 
o|contracted procedure: k7420 
o|contracted procedure: k7428 
o|contracted procedure: k7434 
o|contracted procedure: k7446 
o|contracted procedure: k7454 
o|contracted procedure: k7460 
o|contracted procedure: k7474 
o|contracted procedure: k7470 
o|contracted procedure: k7478 
o|contracted procedure: k7499 
o|contracted procedure: k7509 
o|contracted procedure: k7513 
o|contracted procedure: k7522 
o|contracted procedure: k7532 
o|contracted procedure: k7536 
o|contracted procedure: k7564 
o|contracted procedure: k7539 
o|contracted procedure: k7560 
o|contracted procedure: k7577 
o|contracted procedure: k7599 
o|contracted procedure: k7391 
o|contracted procedure: k7595 
o|contracted procedure: k7580 
o|contracted procedure: k7583 
o|contracted procedure: k7591 
o|contracted procedure: k7611 
o|contracted procedure: k7353 
o|contracted procedure: k7369 
o|contracted procedure: k7359 
o|contracted procedure: k7642 
o|contracted procedure: k7623 
o|contracted procedure: k7630 
o|contracted procedure: k7777 
o|contracted procedure: k7672 
o|contracted procedure: k7689 
o|contracted procedure: k7685 
o|contracted procedure: k7693 
o|contracted procedure: k7717 
o|contracted procedure: k7725 
o|contracted procedure: k7728 
o|contracted procedure: k7737 
o|contracted procedure: k7749 
o|contracted procedure: k7752 
o|contracted procedure: k7755 
o|contracted procedure: k7763 
o|contracted procedure: k7771 
o|contracted procedure: k7792 
o|contracted procedure: k7786 
o|contracted procedure: k7817 
o|contracted procedure: k7867 
o|contracted procedure: k7820 
o|contracted procedure: k7829 
o|contracted procedure: k7856 
o|contracted procedure: k7832 
o|contracted procedure: k7838 
o|contracted procedure: k7870 
o|contracted procedure: k8889 
o|contracted procedure: k7879 
o|contracted procedure: k7934 
o|contracted procedure: k7942 
o|contracted procedure: k7928 
o|contracted procedure: k8045 
o|contracted procedure: k7945 
o|contracted procedure: k7988 
o|contracted procedure: k8041 
o|contracted procedure: k7997 
o|contracted procedure: k8020 
o|contracted procedure: k8148 
o|contracted procedure: k8080 
o|contracted procedure: k8117 
o|contracted procedure: k8129 
o|contracted procedure: k8139 
o|contracted procedure: k8143 
o|contracted procedure: k8157 
o|contracted procedure: k8167 
o|contracted procedure: k8171 
o|contracted procedure: k8177 
o|contracted procedure: k8196 
o|contracted procedure: k8206 
o|contracted procedure: k8210 
o|contracted procedure: k8223 
o|contracted procedure: k8226 
o|contracted procedure: k8274 
o|contracted procedure: k8240 
o|contracted procedure: k8249 
o|contracted procedure: k8268 
o|contracted procedure: k8279 
o|contracted procedure: k8282 
o|contracted procedure: k8294 
o|contracted procedure: k8316 
o|contracted procedure: k8312 
o|contracted procedure: k8297 
o|contracted procedure: k8300 
o|contracted procedure: k8308 
o|contracted procedure: k8419 
o|contracted procedure: k8411 
o|contracted procedure: k8415 
o|contracted procedure: k8425 
o|contracted procedure: k8437 
o|contracted procedure: k8472 
o|contracted procedure: k8495 
o|contracted procedure: k8498 
o|contracted procedure: k8520 
o|contracted procedure: k8549 
o|contracted procedure: k8559 
o|contracted procedure: k8563 
o|contracted procedure: k8580 
o|contracted procedure: k8586 
o|contracted procedure: k8594 
o|contracted procedure: k8602 
o|contracted procedure: k8466 
o|contracted procedure: k8445 
o|contracted procedure: k8448 
o|contracted procedure: k6417 
o|contracted procedure: k6429 
o|contracted procedure: k6601 
o|contracted procedure: k6435 
o|contracted procedure: k6447 
o|contracted procedure: k6456 
o|contracted procedure: k6463 
o|contracted procedure: k6593 
o|contracted procedure: k6469 
o|contracted procedure: k6482 
o|contracted procedure: k6504 
o|contracted procedure: k6508 
o|inlining procedure: k6494 
o|inlining procedure: k6494 
o|contracted procedure: k6522 
o|contracted procedure: k6568 
o|contracted procedure: k6533 
o|contracted procedure: k6550 
o|contracted procedure: k6540 
o|contracted procedure: k6564 
o|contracted procedure: k8611 
o|contracted procedure: k8623 
o|contracted procedure: k8633 
o|contracted procedure: k8637 
o|contracted procedure: k8815 
o|contracted procedure: k8641 
o|contracted procedure: k8650 
o|contracted procedure: k8653 
o|contracted procedure: k8809 
o|contracted procedure: k8656 
o|contracted procedure: k8662 
o|contracted procedure: k8673 
o|contracted procedure: k8695 
o|contracted procedure: k8685 
o|contracted procedure: k8707 
o|contracted procedure: k8770 
o|contracted procedure: k8791 
o|contracted procedure: k8802 
o|contracted procedure: k8818 
o|contracted procedure: k8841 
o|contracted procedure: k8847 
o|contracted procedure: k8878 
o|contracted procedure: k8886 
o|contracted procedure: k8342 
o|contracted procedure: k8348 
o|contracted procedure: k8370 
o|contracted procedure: k8360 
o|contracted procedure: k8382 
o|contracted procedure: k9099 
o|contracted procedure: k9118 
o|contracted procedure: k9127 
o|contracted procedure: k9146 
o|contracted procedure: k9149 
o|contracted procedure: k9177 
o|contracted procedure: k9154 
o|contracted procedure: k9166 
o|contracted procedure: k9170 
o|contracted procedure: k9180 
o|contracted procedure: k9192 
o|contracted procedure: k9195 
o|contracted procedure: k9198 
o|contracted procedure: k9206 
o|contracted procedure: k9214 
o|contracted procedure: k9238 
o|contracted procedure: k9288 
o|contracted procedure: k10056 
o|contracted procedure: k9301 
o|contracted procedure: k9307 
o|contracted procedure: k9329 
o|contracted procedure: k9347 
o|contracted procedure: k9355 
o|contracted procedure: k9369 
o|contracted procedure: k9365 
o|contracted procedure: k9378 
o|contracted procedure: k9388 
o|contracted procedure: k9392 
o|contracted procedure: k9453 
o|contracted procedure: k9395 
o|contracted procedure: k9407 
o|contracted procedure: k9411 
o|contracted procedure: k9417 
o|contracted procedure: k9429 
o|contracted procedure: k9433 
o|contracted procedure: k9445 
o|contracted procedure: k9457 
o|contracted procedure: k9479 
o|contracted procedure: k9497 
o|contracted procedure: k9509 
o|contracted procedure: k9517 
o|contracted procedure: k9531 
o|contracted procedure: k9527 
o|contracted procedure: k9540 
o|contracted procedure: k9550 
o|contracted procedure: k9554 
o|contracted procedure: k9595 
o|contracted procedure: k9557 
o|contracted procedure: k9569 
o|contracted procedure: k9577 
o|contracted procedure: k9589 
o|contracted procedure: k9636 
o|contracted procedure: k9598 
o|contracted procedure: k9610 
o|contracted procedure: k9618 
o|contracted procedure: k9630 
o|contracted procedure: k9640 
o|contracted procedure: k9662 
o|contracted procedure: k9680 
o|contracted procedure: k9692 
o|contracted procedure: k9700 
o|contracted procedure: k9703 
o|contracted procedure: k9709 
o|contracted procedure: k9723 
o|contracted procedure: k9719 
o|contracted procedure: k9732 
o|contracted procedure: k9742 
o|contracted procedure: k9746 
o|contracted procedure: k9755 
o|contracted procedure: k9777 
o|contracted procedure: k9773 
o|contracted procedure: k9758 
o|contracted procedure: k9761 
o|contracted procedure: k9769 
o|contracted procedure: k9833 
o|contracted procedure: k9783 
o|contracted procedure: k9795 
o|contracted procedure: k9811 
o|contracted procedure: k9815 
o|contracted procedure: k9807 
o|contracted procedure: k9799 
o|contracted procedure: k9827 
o|contracted procedure: k9886 
o|contracted procedure: k9836 
o|contracted procedure: k9848 
o|contracted procedure: k9864 
o|contracted procedure: k9868 
o|contracted procedure: k9860 
o|contracted procedure: k9852 
o|contracted procedure: k9880 
o|contracted procedure: k9890 
o|contracted procedure: k9912 
o|contracted procedure: k9946 
o|contracted procedure: k9953 
o|contracted procedure: k9957 
o|contracted procedure: k9960 
o|contracted procedure: k9967 
o|contracted procedure: k9970 
o|contracted procedure: k9982 
o|contracted procedure: k9985 
o|contracted procedure: k9988 
o|contracted procedure: k9996 
o|contracted procedure: k10004 
o|contracted procedure: k10016 
o|contracted procedure: k10019 
o|contracted procedure: k10022 
o|contracted procedure: k10030 
o|contracted procedure: k10038 
o|contracted procedure: k10045 
o|contracted procedure: k10082 
o|contracted procedure: k10091 
o|contracted procedure: k10094 
o|contracted procedure: k10106 
o|contracted procedure: k10116 
o|contracted procedure: k10120 
o|contracted procedure: k10143 
o|contracted procedure: k10149 
o|contracted procedure: k10173 
o|contracted procedure: k10169 
o|contracted procedure: k10159 
o|contracted procedure: k10180 
o|contracted procedure: k10188 
o|contracted procedure: k10194 
o|contracted procedure: k10218 
o|contracted procedure: k10212 
o|contracted procedure: k10200 
o|contracted procedure: k10227 
o|contracted procedure: k10281 
o|contracted procedure: k10299 
o|contracted procedure: k10306 
o|contracted procedure: k10318 
o|contracted procedure: k10340 
o|contracted procedure: k10336 
o|contracted procedure: k10321 
o|contracted procedure: k10324 
o|contracted procedure: k10332 
o|contracted procedure: k10352 
o|contracted procedure: k10374 
o|contracted procedure: k10370 
o|contracted procedure: k10355 
o|contracted procedure: k10358 
o|contracted procedure: k10366 
o|contracted procedure: k10484 
o|contracted procedure: k10399 
o|contracted procedure: k10403 
o|contracted procedure: k10410 
o|contracted procedure: k10422 
o|contracted procedure: k10444 
o|contracted procedure: k10440 
o|contracted procedure: k10425 
o|contracted procedure: k10428 
o|contracted procedure: k10436 
o|contracted procedure: k10456 
o|contracted procedure: k10478 
o|contracted procedure: k10474 
o|contracted procedure: k10459 
o|contracted procedure: k10462 
o|contracted procedure: k10470 
o|contracted procedure: k10496 
o|contracted procedure: k10506 
o|contracted procedure: k10510 
o|contracted procedure: k10519 
o|contracted procedure: k10529 
o|contracted procedure: k10533 
o|contracted procedure: k10551 
o|contracted procedure: k10566 
o|contracted procedure: k6237 
o|contracted procedure: k6259 
o|contracted procedure: k6255 
o|contracted procedure: k6270 
o|contracted procedure: k6266 
o|contracted procedure: k6280 
o|contracted procedure: k6288 
o|contracted procedure: k10628 
o|contracted procedure: k10636 
o|contracted procedure: k10645 
o|contracted procedure: k10687 
o|contracted procedure: k10693 
o|contracted procedure: k10873 
o|contracted procedure: k10702 
o|contracted procedure: k10717 
o|contracted procedure: k10869 
o|contracted procedure: k10723 
o|contracted procedure: k10729 
o|contracted procedure: k10735 
o|contracted procedure: k10865 
o|contracted procedure: k10750 
o|contracted procedure: k10861 
o|contracted procedure: k10759 
o|contracted procedure: k10776 
o|contracted procedure: k10799 
o|contracted procedure: k10805 
o|contracted procedure: k10812 
o|contracted procedure: k10826 
o|contracted procedure: k10837 
o|contracted procedure: k10855 
o|contracted procedure: k10843 
o|contracted procedure: k10889 
o|contracted procedure: k10885 
o|contracted procedure: k10909 
o|contracted procedure: k10912 
o|contracted procedure: k10924 
o|contracted procedure: k10932 
o|contracted procedure: k10935 
o|contracted procedure: k10928 
o|contracted procedure: k10947 
o|contracted procedure: k10969 
o|contracted procedure: k10965 
o|contracted procedure: k10950 
o|contracted procedure: k10953 
o|contracted procedure: k10961 
o|contracted procedure: k10998 
o|contracted procedure: k10991 
o|contracted procedure: k10987 
o|contracted procedure: k10983 
o|contracted procedure: k11007 
o|contracted procedure: k11019 
o|contracted procedure: k11022 
o|contracted procedure: k11062 
o|contracted procedure: k11028 
o|contracted procedure: k11032 
o|contracted procedure: k11045 
o|contracted procedure: k11068 
o|contracted procedure: k11074 
o|contracted procedure: k11077 
o|contracted procedure: k11081 
o|contracted procedure: k11084 
o|contracted procedure: k11097 
o|contracted procedure: k11109 
o|contracted procedure: k11127 
o|contracted procedure: k11159 
o|contracted procedure: k11132 
o|contracted procedure: k11138 
o|contracted procedure: k11145 
o|contracted procedure: k11165 
o|contracted procedure: k11174 
o|contracted procedure: k11197 
o|contracted procedure: k11210 
o|contracted procedure: k11222 
o|contracted procedure: k11225 
o|contracted procedure: k11228 
o|contracted procedure: k11236 
o|contracted procedure: k11244 
o|contracted procedure: k11256 
o|contracted procedure: k11266 
o|contracted procedure: k11270 
o|contracted procedure: k11295 
o|contracted procedure: k11303 
o|contracted procedure: k11315 
o|contracted procedure: k11318 
o|contracted procedure: k11321 
o|contracted procedure: k11329 
o|contracted procedure: k11337 
o|contracted procedure: k11436 
o|contracted procedure: k11409 
o|contracted procedure: k11418 
o|contracted procedure: k11431 
o|contracted procedure: k11451 
o|contracted procedure: k11473 
o|contracted procedure: k11501 
o|contracted procedure: k11479 
o|contracted procedure: k11489 
o|contracted procedure: k11497 
o|contracted procedure: k11523 
o|contracted procedure: k11527 
o|contracted procedure: k11545 
o|contracted procedure: k11541 
o|contracted procedure: k11537 
o|contracted procedure: k11533 
o|contracted procedure: k11562 
o|contracted procedure: k11584 
o|contracted procedure: k11580 
o|contracted procedure: k11565 
o|contracted procedure: k11568 
o|contracted procedure: k11576 
o|contracted procedure: k11632 
o|contracted procedure: k11628 
o|simplifications: ((if . 4) (let . 204)) 
o|removed binding forms: 640 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10351037 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10351037 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10351037 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest10351037 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest12121216 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest12121216 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest12121216 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest12121216 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15111517 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15111517 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15111517 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest15111517 0 
o|contracted procedure: k7542 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16221626 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16221626 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16701673 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16701673 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest17071709 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest17071709 0 
o|contracted procedure: k8701 
o|contracted procedure: k8730 
o|inlining procedure: k6284 
o|inlining procedure: k6284 
o|contracted procedure: k10782 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest30853087 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest30853087 0 
o|removed binding forms: 5 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5738 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5738 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5738 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5738 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6301 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6301 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6301 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6301 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7342 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r7342 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7342 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7342 1 
o|removed binding forms: 1 
o|removed binding forms: 6 
o|direct leaf routine/allocation: g354355 3 
o|direct leaf routine/allocation: %make-module 17 
o|direct leaf routine/allocation: module-library 0 
o|direct leaf routine/allocation: module-export-list 0 
o|direct leaf routine/allocation: module-defined-list 0 
o|direct leaf routine/allocation: module-exist-list 0 
o|direct leaf routine/allocation: module-defined-syntax-list 0 
o|direct leaf routine/allocation: module-import-forms 0 
o|direct leaf routine/allocation: module-meta-import-forms 0 
o|direct leaf routine/allocation: module-meta-expressions 0 
o|direct leaf routine/allocation: module-vexports 0 
o|direct leaf routine/allocation: module-sexports 0 
o|direct leaf routine/allocation: module-iexports 0 
o|direct leaf routine/allocation: module-saved-environments 0 
o|direct leaf routine/allocation: module-rename-list 0 
o|direct leaf routine/allocation: make-module 17 
o|direct leaf routine/allocation: g10971098 3 
o|direct leaf routine/allocation: loop1684 0 
o|direct leaf routine/allocation: g19962003 3 
o|direct leaf routine/allocation: g22122213 3 
o|direct leaf routine/allocation: g30623071 0 
o|contracted procedure: "(modules.scm:123) k5537" 
o|contracted procedure: "(modules.scm:124) k5541" 
o|contracted procedure: "(modules.scm:125) k5545" 
o|contracted procedure: "(modules.scm:173) k5841" 
o|contracted procedure: "(modules.scm:175) k5850" 
o|contracted procedure: "(modules.scm:184) k5894" 
o|contracted procedure: "(modules.scm:189) k5930" 
o|contracted procedure: "(modules.scm:197) k6007" 
o|contracted procedure: "(modules.scm:207) k6117" 
o|contracted procedure: "(modules.scm:221) k6079" 
o|contracted procedure: "(modules.scm:215) k6087" 
o|contracted procedure: "(modules.scm:225) k6198" 
o|contracted procedure: "(modules.scm:240) k6162" 
o|contracted procedure: "(modules.scm:237) k6177" 
o|contracted procedure: "(modules.scm:246) k6215" 
o|contracted procedure: "(modules.scm:261) k6309" 
o|contracted procedure: "(modules.scm:332) k6839" 
o|contracted procedure: "(modules.scm:334) k6845" 
o|contracted procedure: "(modules.scm:335) k6848" 
o|contracted procedure: "(modules.scm:336) k6851" 
o|contracted procedure: "(modules.scm:353) k7240" 
o|contracted procedure: "(modules.scm:359) k7196" 
o|contracted procedure: "(modules.scm:360) k7151" 
o|contracted procedure: "(modules.scm:384) k6960" 
o|contracted procedure: "(modules.scm:374) k7014" 
o|contracted procedure: "(modules.scm:349) k7263" 
o|contracted procedure: "(modules.scm:327) k6833" 
o|contracted procedure: "(modules.scm:411) k7408" 
o|contracted procedure: "(modules.scm:437) k7678" 
o|contracted procedure: "(modules.scm:452) k7709" 
o|contracted procedure: "(modules.scm:453) k7713" 
o|contracted procedure: "(modules.scm:464) k7801" 
o|converted assignments to bindings: (loop1684) 
o|contracted procedure: "(modules.scm:546) k8385" 
o|contracted procedure: "(modules.scm:548) k8391" 
o|contracted procedure: "(modules.scm:549) k8394" 
o|contracted procedure: "(modules.scm:639) k8540" 
o|contracted procedure: "(modules.scm:266) k6347" 
o|contracted procedure: "(modules.scm:268) k6353" 
o|contracted procedure: "(modules.scm:603) k8626" 
o|contracted procedure: "(modules.scm:554) k8825" 
o|contracted procedure: "(modules.scm:539) k8333" 
o|contracted procedure: "(modules.scm:688) k9140" 
o|contracted procedure: "(modules.scm:705) k9252" 
o|contracted procedure: "(modules.scm:709) k9268" 
o|contracted procedure: "(modules.scm:708) k9272" 
o|contracted procedure: "(modules.scm:707) k9276" 
o|contracted procedure: "(modules.scm:843) k10261" 
o|contracted procedure: "(modules.scm:861) k10278" 
o|contracted procedure: "(modules.scm:848) k10295" 
o|contracted procedure: "(modules.scm:845) k10385" 
o|contracted procedure: "(modules.scm:855) k10396" 
o|contracted procedure: "(modules.scm:816) k10547" 
o|contracted procedure: "(modules.scm:819) k10562" 
o|contracted procedure: "(modules.scm:979) k11156" 
o|contracted procedure: "(modules.scm:980) k11152" 
o|contracted procedure: "(modules.scm:1138) k11333" 
o|contracted procedure: "(modules.scm:1422) k11424" 
o|contracted procedure: "(modules.scm:1446) k11516" 
o|simplifications: ((let . 1) (if . 2)) 
o|removed binding forms: 58 
o|contracted procedure: "(modules.scm:166) k5797" 
o|contracted procedure: "(modules.scm:465) k7808" 
o|removed binding forms: 2 
o|direct leaf routine with hoistable closures/allocation: g10811088 (g10971098) 3 
o|contracted procedure: "(modules.scm:178) k5906" 
o|removed binding forms: 2 
o|customizable procedures: (map-loop31163137 loop3104 map-loop30563074 g29993006 for-each-loop29983013 map-loop30203038 k11141 loop2962 merr2935 match-functor-argument loop22969 map-loop29382955 err2927 loop22898 loop2886 iface2876 err2875 g28602861 mrename2841 g28492850 g12041205 k6248 set-module-import-forms! set-module-meta-import-forms! g26572674 for-each-loop26562685 g26672690 for-each-loop26662700 map-loop27662783 map-loop27922809 map-loop27122729 map-loop27382755 k10233 g25962603 for-each-loop25952630 map-loop25272544 rename2520 map-loop25532570 tostr2173 g24872488 loopv2415 g24822483 loops2424 map-loop24482465 g24362443 for-each-loop24352472 g23822383 loopv2336 g23772378 loops2345 g23572364 for-each-loop23562367 g23032304 g22992300 loop2266 g22792286 for-each-loop22782289 warn2172 outer2227 module-imports2223 find-module/import-library export-rename2174 g21942203 map-loop21882215 loop1939 loop1953 g19861987 id-string1978 fail1977 loop1961 for-each-loop19952006 report-unresolved-identifiers1716 g12691270 g12621263 warn1235 loop21253 loop1247 k8583 map-loop20152040 g20512060 for-each-loop20502067 set-module-vexports! set-module-iexports! map-loop17611778 lp1737 g17261785 for-each-loop17251930 g17941805 for-each-loop17931869 g19041911 for-each-loop19031920 g18211822 ln->num1808 g16421651 map-loop16361657 map-loop15411559 g15741591 for-each-loop15731597 g15841602 for-each-loop15831608 merge-se k7317 filter-map loop304 map-loop13351356 k6882 k6890 k7229 map-loop13931417 g14321441 map-loop14261459 loop1466 k6930 map-loop14791500 lp1316 g13001307 for-each-loop12991310 loop1286 set-module-defined-syntax-list! find-export module-rename delete check-for-redef set-module-defined-list! set-module-meta-expressions! set-module-rename-list! map-loop11131130 set-module-export-list! for-each-loop10801100 set-module-sexports! set-module-exist-list! g10641065 set-module-saved-environments! g10261027 loop1017 map-loop9821000 foldr339342 g344345 loop284) 
o|calls to known targets: 338 
o|identified direct recursive calls: f_4638 1 
o|identified direct recursive calls: f_5651 1 
o|unused rest argument: rest10351037 f_5732 
o|identified direct recursive calls: f_5898 1 
o|identified direct recursive calls: f_5950 1 
o|unused rest argument: rest12121216 f_6295 
o|identified direct recursive calls: f_6623 1 
o|identified direct recursive calls: f_6970 1 
o|identified direct recursive calls: f_7018 1 
o|identified direct recursive calls: f_6781 1 
o|unused rest argument: rest15111517 f_7336 
o|unused rest argument: rest16221626 f_7670 
o|unused rest argument: rest16701673 f_7784 
o|identified direct recursive calls: f_7812 3 
o|unused rest argument: _1715 f_8892 
o|identified direct recursive calls: f_8218 2 
o|identified direct recursive calls: f_8289 1 
o|identified direct recursive calls: f_6424 1 
o|identified direct recursive calls: f_8618 1 
o|unused rest argument: rest17071709 f_7877 
o|identified direct recursive calls: f_9342 1 
o|identified direct recursive calls: f_9504 1 
o|identified direct recursive calls: f_9492 1 
o|identified direct recursive calls: f_9750 1 
o|identified direct recursive calls: f_9687 1 
o|identified direct recursive calls: f_9675 1 
o|identified direct recursive calls: f_10313 1 
o|identified direct recursive calls: f_10347 1 
o|identified direct recursive calls: f_10417 1 
o|identified direct recursive calls: f_10451 1 
o|identified direct recursive calls: f_10821 1 
o|identified direct recursive calls: f_10712 2 
o|identified direct recursive calls: f_10942 1 
o|identified direct recursive calls: f_11310 1 
o|unused rest argument: rest30853087 f_11407 
o|identified direct recursive calls: f_11468 1 
o|identified direct recursive calls: f_11557 1 
o|fast box initializations: 69 
o|fast global references: 135 
o|fast global assignments: 36 
o|dropping unused closure argument: f_10570 
o|dropping unused closure argument: f_11119 
o|dropping unused closure argument: f_4465 
o|dropping unused closure argument: f_4629 
o|dropping unused closure argument: f_5549 
o|dropping unused closure argument: f_6011 
o|dropping unused closure argument: f_6605 
o|dropping unused closure argument: f_7799 
o|dropping unused closure argument: f_7920 
o|dropping unused closure argument: f_9050 
o|dropping unused closure argument: f_9080 
o|dropping unused closure argument: f_9138 
*/
/* end of file */
