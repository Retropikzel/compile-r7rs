/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: eval.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval.c -emit-import-library chicken.eval -emit-import-library chicken.load
   unit: eval
   uses: modules eval expand internal library
*/
#include "chicken.h"


#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME    "."
#endif

#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME NULL
#endif

#ifndef C_BINARY_VERSION
# define C_BINARY_VERSION      0
#endif


#define C_store_result(x, ptr)   (*((C_word *)C_block_item(ptr, 0)) = (x), C_SCHEME_TRUE)


#define C_copy_result_string(str, buf, n)  (C_memcpy((char *)C_block_item(buf, 0), C_c_string(str), C_unfix(n)), ((char *)C_block_item(buf, 0))[ C_unfix(n) ] = '\0', C_SCHEME_TRUE)


C_extern  void  CHICKEN_get_error_message(char *t0,int t1);

C_extern  int  CHICKEN_load(char * t0);

C_extern  int  CHICKEN_read(char * t0,C_word *t1);

C_extern  int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3);

C_extern  int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2);

C_extern  int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2);

C_extern  int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2);

C_extern  int  CHICKEN_eval_string(char * t0,C_word *t1);

C_extern  int  CHICKEN_eval(C_word t0,C_word *t1);

C_extern  int  CHICKEN_yield();

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_modules_toplevel)
C_extern void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[360];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,15),40,102,105,110,100,45,105,100,32,105,100,32,115,101,41,0};
static C_char li1[] C_aligned={C_lihdr(0,0,7),40,97,51,54,57,51,41,0};
static C_char li2[] C_aligned={C_lihdr(0,0,13),40,97,51,54,57,57,32,46,32,116,109,112,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,118,97,114,41,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li5[] C_aligned={C_lihdr(0,0,8),40,103,50,54,49,32,112,41};
static C_char li6[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,110,118,115,32,101,105,41,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,15),40,108,111,111,107,117,112,32,118,97,114,48,32,101,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,34),40,101,109,105,116,45,116,114,97,99,101,45,105,110,102,111,32,108,110,32,105,110,102,111,32,99,110,116,114,32,101,32,118,41,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,37),40,101,109,105,116,45,115,121,110,116,97,120,45,116,114,97,99,101,45,105,110,102,111,32,116,102,32,105,110,102,111,32,99,110,116,114,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,9),40,97,51,53,56,49,32,120,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,11),40,97,51,53,57,52,32,112,32,105,41,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,15),40,100,101,99,111,114,97,116,101,32,112,32,108,108,41,0};
static C_char li13[] C_aligned={C_lihdr(0,0,7),40,97,51,56,57,49,41,0};
static C_char li14[] C_aligned={C_lihdr(0,0,7),40,97,51,56,57,54,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,50,41,0};
static C_char li16[] C_aligned={C_lihdr(0,0,18),40,97,51,56,56,50,32,102,111,114,109,115,32,112,97,116,104,41,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,33),40,105,110,99,108,117,100,101,45,102,105,108,101,32,120,32,99,105,32,101,32,116,102,32,99,110,116,114,32,116,108,63,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,52,49,32,46,32,118,41,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,7),40,97,51,57,53,50,41,0};
static C_char li20[] C_aligned={C_lihdr(0,0,10),40,102,95,51,57,55,57,32,118,41,0,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,57,48,32,46,32,118,41,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,57,53,32,46,32,118,41,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,54,51,32,118,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,55,56,32,118,41,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,57,55,32,118,41,0,0,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,10),40,102,95,52,49,50,48,32,118,41,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,10),40,102,95,52,49,52,49,32,118,41,0,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,11),40,97,51,57,53,56,32,105,32,106,41,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,54,55,32,46,32,118,41,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,55,53,32,46,32,118,41,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,56,51,32,46,32,118,41,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,57,49,32,46,32,118,41,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,57,51,32,46,32,118,41,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,49,50,32,46,32,118,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,49,52,32,46,32,118,41,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,50,53,32,46,32,118,41,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,21),40,102,95,51,56,52,52,32,105,110,112,117,116,32,111,117,116,112,117,116,41,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,56,52,32,46,32,118,41,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,57,50,32,46,32,118,41,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,48,48,32,46,32,118,41,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,48,56,32,46,32,118,41,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,49,54,32,46,32,118,41,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,50,52,32,46,32,118,41,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,51,50,32,46,32,118,41,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,51,52,32,46,32,118,41,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,54,51,32,46,32,118,41,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,10),40,102,95,52,51,57,55,32,118,41,0,0,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,49,52,32,118,41,0,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,57,57,32,118,41,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,50,52,32,118,41,0,0,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,97,52,53,57,57,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,50,51,32,118,41,0,0,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,51,49,32,118,41,0,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,54,54,32,118,41,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,55,57,32,118,41,0,0,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,11),40,97,52,54,48,53,32,105,32,106,41,0,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,52,51,32,118,41,0,0,0,0,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,56,48,32,118,41,0,0,0,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,10),40,102,95,52,56,51,53,32,118,41,0,0,0,0,0,0};
static C_char li60[] C_aligned={C_lihdr(0,0,10),40,102,95,52,57,48,53,32,118,41,0,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,8),40,103,53,57,53,32,120,41};
static C_char li62[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,54,49,54,32,105,32,118,108,105,115,116,41,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,10),40,102,95,52,57,56,51,32,118,41,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,56,57,32,103,54,48,49,41,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,7),40,97,53,48,55,48,41,0};
static C_char li66[] C_aligned={C_lihdr(0,0,7),40,97,53,48,56,55,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,7),40,97,53,49,48,53,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,50,50,32,103,53,51,52,41,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,52,57,52,32,103,53,48,54,41,0,0,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,53,55,32,103,54,54,57,41,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,51,48,32,103,54,52,50,41,0,0,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,56,48,54,32,103,56,49,56,32,103,56,49,57,41,0};
static C_char li73[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,55,55,51,32,103,55,56,53,32,103,55,56,54,41,0};
static C_char li74[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,52,54,32,103,55,53,56,41,0,0,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,49,54,32,103,55,50,56,41,0,0,0,0,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,56,57,32,103,55,48,49,41,0,0,0,0,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,11),40,97,53,54,57,54,32,46,32,114,41,0,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,57,49,32,118,41,0,0,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,7),40,97,53,55,49,53,41,0};
static C_char li80[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,49,48,32,118,41,0,0,0,0,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,14),40,97,53,55,51,57,32,97,49,32,46,32,114,41,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,51,52,32,118,41,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,10),40,97,53,55,53,56,32,97,49,41,0,0,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,53,51,32,118,41,0,0,0,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,17),40,97,53,55,56,54,32,97,49,32,97,50,32,46,32,114,41,0,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,56,49,32,118,41,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,13),40,97,53,56,48,53,32,97,49,32,97,50,41,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,48,48,32,118,41,0,0,0,0,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,20),40,97,53,56,51,51,32,97,49,32,97,50,32,97,51,32,46,32,114,41,0,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,50,56,32,118,41,0,0,0,0,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,16),40,97,53,56,53,50,32,97,49,32,97,50,32,97,51,41};
static C_char li92[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,52,55,32,118,41,0,0,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,23),40,97,53,56,56,48,32,97,49,32,97,50,32,97,51,32,97,52,32,46,32,114,41,0};
static C_char li94[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,55,53,32,118,41,0,0,0,0,0,0};
static C_char li95[] C_aligned={C_lihdr(0,0,19),40,97,53,56,57,57,32,97,49,32,97,50,32,97,51,32,97,52,41,0,0,0,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,57,52,32,118,41,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,50,57,57,32,110,32,99,32,97,114,103,115,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,12),40,97,53,57,50,49,32,46,32,97,115,41,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,10),40,102,95,53,57,49,54,32,118,41,0,0,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,12),40,97,53,57,52,52,32,46,32,97,115,41,0,0,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,10),40,102,95,53,57,51,57,32,118,41,0,0,0,0,0,0};
static C_char li102[] C_aligned={C_lihdr(0,0,7),40,97,53,57,56,50,41,0};
static C_char li103[] C_aligned={C_lihdr(0,0,7),40,97,53,57,57,57,41,0};
static C_char li104[] C_aligned={C_lihdr(0,0,7),40,97,54,48,49,51,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,53,55,32,103,56,54,57,41,0,0,0,0,0,0};
static C_char li106[] C_aligned={C_lihdr(0,0,22),40,97,53,54,54,49,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,7),40,97,54,48,54,55,41,0};
static C_char li108[] C_aligned={C_lihdr(0,0,24),40,97,54,48,55,55,32,108,108,105,115,116,56,52,54,32,98,111,100,121,56,52,55,41};
static C_char li109[] C_aligned={C_lihdr(0,0,7),40,97,54,49,48,50,41,0};
static C_char li110[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,57,41,0};
static C_char li111[] C_aligned={C_lihdr(0,0,7),40,97,54,49,51,55,41,0};
static C_char li112[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,48,32,103,57,55,50,41,0,0,0,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,7),40,103,49,48,50,52,41,0};
static C_char li114[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,50,51,41,0,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,7),40,97,54,50,57,53,41,0};
static C_char li116[] C_aligned={C_lihdr(0,0,7),40,97,54,51,49,50,41,0};
static C_char li117[] C_aligned={C_lihdr(0,0,7),40,97,54,51,51,48,41,0};
static C_char li118[] C_aligned={C_lihdr(0,0,19),40,109,97,112,45,108,111,111,112,57,57,53,32,103,49,48,48,55,41,0,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,7),40,97,54,53,51,56,41,0};
static C_char li120[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,54,53,32,103,49,48,55,55,41,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,7),40,97,54,54,49,54,41,0};
static C_char li122[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,50,32,120,115,41,0,0,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,10),40,102,95,54,55,48,54,32,118,41,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,98,111,100,121,32,120,115,41,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,7),40,97,54,54,55,56,41,0};
static C_char li126[] C_aligned={C_lihdr(0,0,7),40,97,54,54,55,50,41,0};
static C_char li127[] C_aligned={C_lihdr(0,0,7),40,97,54,55,54,56,41,0};
static C_char li128[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,11),40,103,49,49,48,56,32,101,120,112,41,0,0,0,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,48,50,32,103,49,49,49,52,41,0,0,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,10),40,103,49,50,56,49,32,99,108,41,0,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,7),40,97,55,49,53,49,41,0};
static C_char li133[] C_aligned={C_lihdr(0,0,7),40,97,55,49,53,54,41,0};
static C_char li134[] C_aligned={C_lihdr(0,0,7),40,97,55,49,54,54,41,0};
static C_char li135[] C_aligned={C_lihdr(0,0,7),40,97,55,51,52,57,41,0};
static C_char li136[] C_aligned={C_lihdr(0,0,7),40,97,55,51,53,52,41,0};
static C_char li137[] C_aligned={C_lihdr(0,0,7),40,97,55,51,54,52,41,0};
static C_char li138[] C_aligned={C_lihdr(0,0,27),40,99,111,109,112,105,108,101,32,120,32,101,32,104,32,116,102,32,99,110,116,114,32,116,108,63,41,0,0,0,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char li140[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,52,51,32,118,41,0,0,0,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,54,51,32,118,41,0,0,0,0,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,57,52,32,118,41,0,0,0,0,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,51,51,32,118,41,0,0,0,0,0,0};
static C_char li144[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,56,48,32,118,41,0,0,0,0,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,9),40,103,49,51,55,54,32,97,41,0,0,0,0,0,0,0};
static C_char li146[] C_aligned={C_lihdr(0,0,9),40,103,49,52,48,52,32,97,41,0,0,0,0,0,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,57,56,32,103,49,52,49,48,41,0,0,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,10),40,102,95,55,55,50,56,32,118,41,0,0,0,0,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,55,48,32,103,49,51,56,50,41,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,12),40,102,95,55,56,51,56,32,46,32,95,41,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,26),40,99,111,109,112,105,108,101,45,99,97,108,108,32,120,32,101,32,116,102,32,99,110,116,114,41,0,0,0,0,0,0};
static C_char li152[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,101,118,97,108,35,99,111,109,112,105,108,101,45,116,111,45,99,108,111,115,117,114,101,32,101,120,112,32,101,110,118,32,114,101,115,116,41,0,0};
static C_char li153[] C_aligned={C_lihdr(0,0,7),40,97,55,57,49,56,41,0};
static C_char li154[] C_aligned={C_lihdr(0,0,7),40,97,55,57,54,55,41,0};
static C_char li155[] C_aligned={C_lihdr(0,0,7),40,97,55,57,55,54,41,0};
static C_char li156[] C_aligned={C_lihdr(0,0,7),40,97,55,57,54,49,41,0};
static C_char li157[] C_aligned={C_lihdr(0,0,7),40,97,55,57,57,51,41,0};
static C_char li158[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,101,118,97,108,47,109,101,116,97,32,102,111,114,109,41,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,21),40,115,99,104,101,109,101,35,101,118,97,108,32,120,32,46,32,101,110,118,41,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,101,118,97,108,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,41,0,0};
static C_char li161[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,108,105,115,116,32,118,97,114,115,32,97,114,103,99,41,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,32,107,41,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,35,105,110,116,101,114,97,99,116,105,111,110,45,101,110,118,105,114,111,110,109,101,110,116,41};
static C_char li165[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,49,54,48,48,32,103,49,54,48,49,41,0,0,0,0,0,0,0};
static C_char li166[] C_aligned={C_lihdr(0,0,10),40,115,116,114,105,112,32,115,101,41,0,0,0,0,0,0};
static C_char li167[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,35,115,99,104,101,109,101,45,114,101,112,111,114,116,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0};
static C_char li168[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,35,110,117,108,108,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0,0};
static C_char li169[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,111,114,101,45,108,105,98,114,97,114,121,63,32,105,100,41,0};
static C_char li170[] C_aligned={C_lihdr(0,0,18),40,35,35,115,121,115,35,112,114,111,118,105,100,101,32,105,100,41,0,0,0,0,0,0};
static C_char li171[] C_aligned={C_lihdr(0,0,20),40,35,35,115,121,115,35,112,114,111,118,105,100,101,100,63,32,105,100,41,0,0,0,0};
static C_char li172[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li173[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,97,116,104,45,115,101,112,97,114,97,116,111,114,45,105,110,100,101,120,47,114,105,103,104,116,32,115,41,0,0,0,0,0};
static C_char li174[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,108,111,97,100,35,109,97,107,101,45,114,101,108,97,116,105,118,101,45,112,97,116,104,110,97,109,101,32,102,114,111,109,32,102,105,108,101,41,0};
static C_char li175[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,109,111,100,101,41,0,0,0,0,0};
static C_char li176[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,115,101,116,45,100,121,110,97,109,105,99,45,108,111,97,100,45,109,111,100,101,33,32,109,111,100,101,41,0,0,0,0,0,0};
static C_char li177[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,45,116,111,112,108,101,118,101,108,32,110,97,109,101,32,108,111,99,41,0,0,0,0,0,0};
static C_char li178[] C_aligned={C_lihdr(0,0,13),40,102,95,57,56,49,57,32,112,97,116,104,41,0,0,0};
static C_char li179[] C_aligned={C_lihdr(0,0,7),40,97,57,56,55,55,41,0};
static C_char li180[] C_aligned={C_lihdr(0,0,7),40,97,57,56,57,56,41,0};
static C_char li181[] C_aligned={C_lihdr(0,0,7),40,97,57,57,53,52,41,0};
static C_char li182[] C_aligned={C_lihdr(0,0,11),40,97,57,57,54,48,32,46,32,116,41,0,0,0,0,0};
static C_char li183[] C_aligned={C_lihdr(0,0,7),40,97,57,57,52,50,41,0};
static C_char li184[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,56,53,32,103,50,51,57,50,41,0,0,0,0,0,0,0};
static C_char li185[] C_aligned={C_lihdr(0,0,17),40,97,57,57,55,54,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li186[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,50,51,55,53,32,120,41,0,0};
static C_char li187[] C_aligned={C_lihdr(0,0,7),40,97,57,57,48,53,41,0};
static C_char li188[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,51,54,41};
static C_char li189[] C_aligned={C_lihdr(0,0,7),40,97,57,56,56,54,41,0};
static C_char li190[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,52,56,41};
static C_char li191[] C_aligned={C_lihdr(0,0,7),40,97,57,56,55,49,41,0};
static C_char li192[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,47,105,110,116,101,114,110,97,108,32,105,110,112,117,116,32,101,118,97,108,117,97,116,111,114,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li193[] C_aligned={C_lihdr(0,0,11),40,102,95,49,48,50,48,50,32,121,41,0,0,0,0,0};
static C_char li194[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,108,111,97,100,35,101,118,97,108,117,97,116,111,114,32,120,41,0,0,0,0,0,0};
static C_char li195[] C_aligned={C_lihdr(0,0,29),40,115,99,104,101,109,101,35,108,111,97,100,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char li196[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,114,101,108,97,116,105,118,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li197[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,54,55,41};
static C_char li198[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,55,48,41};
static C_char li199[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,110,111,105,115,105,108,121,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li200[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,116,101,32,103,50,52,54,56,41};
static C_char li201[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,105,98,115,41,0,0,0,0,0};
static C_char li202[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,117,110,105,116,32,117,110,105,116,45,110,97,109,101,32,108,105,98,32,108,111,99,41,0,0,0,0,0,0};
static C_char li203[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,108,105,98,114,97,114,121,32,117,110,105,116,45,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li204[] C_aligned={C_lihdr(0,0,8),40,97,49,48,52,51,50,41};
static C_char li205[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,50,53,53,52,32,120,32,120,115,41,0,0,0,0,0,0,0};
static C_char li206[] C_aligned={C_lihdr(0,0,8),40,97,49,48,52,51,55,41};
static C_char li207[] C_aligned={C_lihdr(0,0,8),40,97,49,48,52,56,48,41};
static C_char li208[] C_aligned={C_lihdr(0,0,11),40,97,49,48,52,49,57,32,105,110,41,0,0,0,0,0};
static C_char li209[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,105,110,99,108,117,100,101,45,102,111,114,109,115,45,102,114,111,109,45,102,105,108,101,32,102,105,108,101,110,97,109,101,32,115,111,117,114,99,101,32,99,105,32,107,41,0,0,0,0};
static C_char li210[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char li211[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,102,105,108,101,32,110,97,109,101,32,115,101,97,114,99,104,45,112,97,116,104,41,0,0,0,0,0,0,0};
static C_char li212[] C_aligned={C_lihdr(0,0,12),40,99,104,101,99,107,32,112,97,116,104,41,0,0,0,0};
static C_char li213[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char li214[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,100,121,110,97,109,105,99,45,101,120,116,101,110,115,105,111,110,32,105,100,32,105,110,99,63,41,0,0,0};
static C_char li215[] C_aligned={C_lihdr(0,0,11),40,103,50,54,50,55,32,101,120,116,41,0,0,0,0,0};
static C_char li216[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,101,120,116,101,110,115,105,111,110,32,108,105,98,32,109,111,100,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li217[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,51,54,41,0,0,0,0,0};
static C_char li218[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,52,54,32,103,50,54,53,51,41,0,0,0,0,0,0,0};
static C_char li219[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,114,101,113,117,105,114,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char li220[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,56,57,41,0,0,0,0,0};
static C_char li221[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,57,57,32,103,50,55,48,54,41,0,0,0,0,0,0,0};
static C_char li222[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char li223[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,52,50,41,0,0,0,0,0};
static C_char li224[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li225[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,100,63,32,46,32,105,100,115,41,0,0};
static C_char li226[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,114,101,113,117,105,114,101,32,108,105,98,32,109,111,100,32,99,111,109,112,105,108,101,45,109,111,100,101,41,0,0,0,0};
static C_char li227[] C_aligned={C_lihdr(0,0,27),40,116,101,115,116,45,101,120,116,101,110,115,105,111,110,115,32,102,110,97,109,101,32,108,115,116,41,0,0,0,0,0};
static C_char li228[] C_aligned={C_lihdr(0,0,12),40,116,101,115,116,32,102,110,97,109,101,41,0,0,0,0};
static C_char li229[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char li230[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,105,110,99,108,117,100,101,45,102,105,108,101,110,97,109,101,32,102,110,97,109,101,32,101,120,116,115,32,114,101,112,111,32,115,111,117,114,99,101,41,0};
static C_char li231[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,50,49,41};
static C_char li232[] C_aligned={C_lihdr(0,0,11),40,97,49,49,49,49,53,32,101,120,41,0,0,0,0,0};
static C_char li233[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,52,48,41};
static C_char li234[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,53,50,41};
static C_char li235[] C_aligned={C_lihdr(0,0,15),40,97,49,49,49,52,54,32,46,32,97,114,103,115,41,0};
static C_char li236[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,51,52,41};
static C_char li237[] C_aligned={C_lihdr(0,0,10),40,97,49,49,49,48,57,32,107,41,0,0,0,0,0,0};
static C_char li238[] C_aligned={C_lihdr(0,0,16),40,114,117,110,45,115,97,102,101,32,116,104,117,110,107,41};
static C_char li239[] C_aligned={C_lihdr(0,0,23),40,115,116,111,114,101,45,114,101,115,117,108,116,32,120,32,114,101,115,117,108,116,41,0};
static C_char li240[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,55,51,41};
static C_char li241[] C_aligned={C_lihdr(0,0,15),40,67,72,73,67,75,69,78,95,121,105,101,108,100,41,0};
static C_char li242[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,56,53,41};
static C_char li243[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,101,118,97,108,32,101,120,112,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char li244[] C_aligned={C_lihdr(0,0,8),40,97,49,49,50,48,52,41};
static C_char li245[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,32,115,116,114,32,114,101,115,117,108,116,41};
static C_char li246[] C_aligned={C_lihdr(0,0,26),40,115,116,111,114,101,45,115,116,114,105,110,103,32,98,117,102,115,105,122,101,32,98,117,102,41,0,0,0,0,0,0};
static C_char li247[] C_aligned={C_lihdr(0,0,8),40,97,49,49,50,52,55,41};
static C_char li248[] C_aligned={C_lihdr(0,0,40),40,67,72,73,67,75,69,78,95,101,118,97,108,95,116,111,95,115,116,114,105,110,103,32,101,120,112,32,98,117,102,32,98,117,102,115,105,122,101,41};
static C_char li249[] C_aligned={C_lihdr(0,0,8),40,97,49,49,50,55,54,41};
static C_char li250[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,95,116,111,95,115,116,114,105,110,103,32,115,116,114,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char li251[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,49,48,41};
static C_char li252[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,97,112,112,108,121,32,102,117,110,99,32,97,114,103,115,32,114,101,115,117,108,116,41};
static C_char li253[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,50,54,41};
static C_char li254[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,97,112,112,108,121,95,116,111,95,115,116,114,105,110,103,32,102,117,110,99,32,97,114,103,115,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char li255[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,53,53,41};
static C_char li256[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,114,101,97,100,32,115,116,114,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char li257[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,55,55,41};
static C_char li258[] C_aligned={C_lihdr(0,0,18),40,67,72,73,67,75,69,78,95,108,111,97,100,32,115,116,114,41,0,0,0,0,0,0};
static C_char li259[] C_aligned={C_lihdr(0,0,39),40,67,72,73,67,75,69,78,95,103,101,116,95,101,114,114,111,114,95,109,101,115,115,97,103,101,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char li260[] C_aligned={C_lihdr(0,0,10),40,97,49,49,52,48,48,32,120,41,0,0,0,0,0,0};
static C_char li261[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,55,53,32,103,50,52,56,55,41,0,0,0,0};
static C_char li262[] C_aligned={C_lihdr(0,0,12),40,97,49,49,53,51,52,32,101,32,112,41,0,0,0,0};
static C_char li263[] C_aligned={C_lihdr(0,0,21),40,97,49,49,53,53,54,32,115,121,109,32,112,114,111,112,32,118,97,108,41,0,0,0};
static C_char li264[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,56,51,41};
static C_char li265[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,53,54,48,41,0,0,0,0};
static C_char li266[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,56,56,41};
static C_char li267[] C_aligned={C_lihdr(0,0,14),40,97,49,49,53,55,55,32,116,104,117,110,107,41,0,0};
static C_char li268[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,53,48,41};
static C_char li269[] C_aligned={C_lihdr(0,0,63),40,97,49,49,54,49,56,32,35,35,115,121,115,35,112,117,116,47,114,101,115,116,111,114,101,33,49,53,52,55,32,35,35,115,121,115,35,119,105,116,104,45,112,114,111,112,101,114,116,121,45,114,101,115,116,111,114,101,49,53,52,56,41,0};
static C_char li270[] C_aligned={C_lihdr(0,0,8),40,97,49,49,54,53,54,41};
static C_char li271[] C_aligned={C_lihdr(0,0,8),40,97,49,49,54,56,54,41};
static C_char li272[] C_aligned={C_lihdr(0,0,8),40,97,49,49,54,57,54,41};
static C_char li273[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,50,51,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li274[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f12353)
static void C_ccall f12353(C_word c,C_word *av) C_noret;
C_noret_decl(f_10004)
static void C_ccall f_10004(C_word c,C_word *av) C_noret;
C_noret_decl(f_10028)
static void C_ccall f_10028(C_word c,C_word *av) C_noret;
C_noret_decl(f_10032)
static void C_ccall f_10032(C_word c,C_word *av) C_noret;
C_noret_decl(f_10037)
static void C_ccall f_10037(C_word c,C_word *av) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word *av) C_noret;
C_noret_decl(f_10049)
static void C_ccall f_10049(C_word c,C_word *av) C_noret;
C_noret_decl(f_10068)
static void C_ccall f_10068(C_word c,C_word *av) C_noret;
C_noret_decl(f_10071)
static void C_ccall f_10071(C_word c,C_word *av) C_noret;
C_noret_decl(f_10074)
static void C_ccall f_10074(C_word c,C_word *av) C_noret;
C_noret_decl(f_10080)
static void C_ccall f_10080(C_word c,C_word *av) C_noret;
C_noret_decl(f_10083)
static void C_ccall f_10083(C_word c,C_word *av) C_noret;
C_noret_decl(f_10098)
static void C_ccall f_10098(C_word c,C_word *av) C_noret;
C_noret_decl(f_10101)
static void C_ccall f_10101(C_word c,C_word *av) C_noret;
C_noret_decl(f_10104)
static void f_10104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10110)
static void C_ccall f_10110(C_word c,C_word *av) C_noret;
C_noret_decl(f_10122)
static void C_ccall f_10122(C_word c,C_word *av) C_noret;
C_noret_decl(f_10128)
static void C_ccall f_10128(C_word c,C_word *av) C_noret;
C_noret_decl(f_10188)
static void f_10188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10202)
static void C_ccall f_10202(C_word c,C_word *av) C_noret;
C_noret_decl(f_10208)
static void C_ccall f_10208(C_word c,C_word *av) C_noret;
C_noret_decl(f_10219)
static void C_ccall f_10219(C_word c,C_word *av) C_noret;
C_noret_decl(f_10227)
static void C_ccall f_10227(C_word c,C_word *av) C_noret;
C_noret_decl(f_10234)
static void C_ccall f_10234(C_word c,C_word *av) C_noret;
C_noret_decl(f_10241)
static void C_ccall f_10241(C_word c,C_word *av) C_noret;
C_noret_decl(f_10249)
static void C_ccall f_10249(C_word c,C_word *av) C_noret;
C_noret_decl(f_10256)
static void C_ccall f_10256(C_word c,C_word *av) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word *av) C_noret;
C_noret_decl(f_10266)
static void C_ccall f_10266(C_word c,C_word *av) C_noret;
C_noret_decl(f_10268)
static void C_ccall f_10268(C_word c,C_word *av) C_noret;
C_noret_decl(f_10271)
static void C_ccall f_10271(C_word c,C_word *av) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word *av) C_noret;
C_noret_decl(f_10278)
static void f_10278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10285)
static void C_ccall f_10285(C_word c,C_word *av) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word *av) C_noret;
C_noret_decl(f_10294)
static void C_ccall f_10294(C_word c,C_word *av) C_noret;
C_noret_decl(f_10297)
static void f_10297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10300)
static void C_ccall f_10300(C_word c,C_word *av) C_noret;
C_noret_decl(f_10303)
static void C_ccall f_10303(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void f_10308(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10322)
static void C_ccall f_10322(C_word c,C_word *av) C_noret;
C_noret_decl(f_10331)
static void C_ccall f_10331(C_word c,C_word *av) C_noret;
C_noret_decl(f_10342)
static void C_ccall f_10342(C_word c,C_word *av) C_noret;
C_noret_decl(f_10349)
static void C_ccall f_10349(C_word c,C_word *av) C_noret;
C_noret_decl(f_10352)
static void C_ccall f_10352(C_word c,C_word *av) C_noret;
C_noret_decl(f_10355)
static void C_ccall f_10355(C_word c,C_word *av) C_noret;
C_noret_decl(f_10368)
static void C_ccall f_10368(C_word c,C_word *av) C_noret;
C_noret_decl(f_10372)
static void C_ccall f_10372(C_word c,C_word *av) C_noret;
C_noret_decl(f_10376)
static void C_ccall f_10376(C_word c,C_word *av) C_noret;
C_noret_decl(f_10378)
static void C_ccall f_10378(C_word c,C_word *av) C_noret;
C_noret_decl(f_10405)
static void C_ccall f_10405(C_word c,C_word *av) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word *av) C_noret;
C_noret_decl(f_10412)
static void C_ccall f_10412(C_word c,C_word *av) C_noret;
C_noret_decl(f_10415)
static void C_ccall f_10415(C_word c,C_word *av) C_noret;
C_noret_decl(f_10420)
static void C_ccall f_10420(C_word c,C_word *av) C_noret;
C_noret_decl(f_10431)
static void C_ccall f_10431(C_word c,C_word *av) C_noret;
C_noret_decl(f_10433)
static void C_ccall f_10433(C_word c,C_word *av) C_noret;
C_noret_decl(f_10438)
static void C_ccall f_10438(C_word c,C_word *av) C_noret;
C_noret_decl(f_10449)
static void C_ccall f_10449(C_word c,C_word *av) C_noret;
C_noret_decl(f_10451)
static void f_10451(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10471)
static void C_ccall f_10471(C_word c,C_word *av) C_noret;
C_noret_decl(f_10481)
static void C_ccall f_10481(C_word c,C_word *av) C_noret;
C_noret_decl(f_10487)
static void C_ccall f_10487(C_word c,C_word *av) C_noret;
C_noret_decl(f_10499)
static void f_10499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10506)
static void C_ccall f_10506(C_word c,C_word *av) C_noret;
C_noret_decl(f_10508)
static void C_ccall f_10508(C_word c,C_word *av) C_noret;
C_noret_decl(f_10537)
static void C_ccall f_10537(C_word c,C_word *av) C_noret;
C_noret_decl(f_10549)
static void C_ccall f_10549(C_word c,C_word *av) C_noret;
C_noret_decl(f_10555)
static void C_ccall f_10555(C_word c,C_word *av) C_noret;
C_noret_decl(f_10559)
static void C_ccall f_10559(C_word c,C_word *av) C_noret;
C_noret_decl(f_10562)
static void C_ccall f_10562(C_word c,C_word *av) C_noret;
C_noret_decl(f_10564)
static void f_10564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10568)
static void C_ccall f_10568(C_word c,C_word *av) C_noret;
C_noret_decl(f_10571)
static void C_ccall f_10571(C_word c,C_word *av) C_noret;
C_noret_decl(f_10581)
static void C_ccall f_10581(C_word c,C_word *av) C_noret;
C_noret_decl(f_10593)
static void C_ccall f_10593(C_word c,C_word *av) C_noret;
C_noret_decl(f_10600)
static void C_ccall f_10600(C_word c,C_word *av) C_noret;
C_noret_decl(f_10607)
static void C_ccall f_10607(C_word c,C_word *av) C_noret;
C_noret_decl(f_10609)
static void f_10609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10622)
static void C_ccall f_10622(C_word c,C_word *av) C_noret;
C_noret_decl(f_10656)
static void C_ccall f_10656(C_word c,C_word *av) C_noret;
C_noret_decl(f_10665)
static void C_ccall f_10665(C_word c,C_word *av) C_noret;
C_noret_decl(f_10681)
static void C_ccall f_10681(C_word c,C_word *av) C_noret;
C_noret_decl(f_10694)
static void C_ccall f_10694(C_word c,C_word *av) C_noret;
C_noret_decl(f_10697)
static void C_ccall f_10697(C_word c,C_word *av) C_noret;
C_noret_decl(f_10709)
static void C_ccall f_10709(C_word c,C_word *av) C_noret;
C_noret_decl(f_10713)
static void f_10713(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10717)
static void C_ccall f_10717(C_word c,C_word *av) C_noret;
C_noret_decl(f_10720)
static void C_ccall f_10720(C_word c,C_word *av) C_noret;
C_noret_decl(f_10728)
static void C_ccall f_10728(C_word c,C_word *av) C_noret;
C_noret_decl(f_10747)
static void f_10747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10757)
static void C_ccall f_10757(C_word c,C_word *av) C_noret;
C_noret_decl(f_10770)
static C_word f_10770(C_word t0);
C_noret_decl(f_10793)
static void C_ccall f_10793(C_word c,C_word *av) C_noret;
C_noret_decl(f_10812)
static void f_10812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10822)
static void C_ccall f_10822(C_word c,C_word *av) C_noret;
C_noret_decl(f_10835)
static C_word f_10835(C_word t0);
C_noret_decl(f_10858)
static void C_ccall f_10858(C_word c,C_word *av) C_noret;
C_noret_decl(f_10872)
static C_word f_10872(C_word t0);
C_noret_decl(f_10899)
static void C_ccall f_10899(C_word c,C_word *av) C_noret;
C_noret_decl(f_10968)
static void C_ccall f_10968(C_word c,C_word *av) C_noret;
C_noret_decl(f_10971)
static void f_10971(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10984)
static void C_ccall f_10984(C_word c,C_word *av) C_noret;
C_noret_decl(f_10987)
static void C_ccall f_10987(C_word c,C_word *av) C_noret;
C_noret_decl(f_10990)
static void C_ccall f_10990(C_word c,C_word *av) C_noret;
C_noret_decl(f_11004)
static void f_11004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11040)
static void C_ccall f_11040(C_word c,C_word *av) C_noret;
C_noret_decl(f_11043)
static void C_ccall f_11043(C_word c,C_word *av) C_noret;
C_noret_decl(f_11053)
static void C_ccall f_11053(C_word c,C_word *av) C_noret;
C_noret_decl(f_11055)
static void f_11055(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11065)
static void C_ccall f_11065(C_word c,C_word *av) C_noret;
C_noret_decl(f_11079)
static void C_ccall f_11079(C_word c,C_word *av) C_noret;
C_noret_decl(f_11090)
static void C_ccall f_11090(C_word c,C_word *av) C_noret;
C_noret_decl(f_11097)
static void C_ccall f_11097(C_word c,C_word *av) C_noret;
C_noret_decl(f_11100)
static void f_11100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11105)
static void C_ccall f_11105(C_word c,C_word *av) C_noret;
C_noret_decl(f_11110)
static void C_ccall f_11110(C_word c,C_word *av) C_noret;
C_noret_decl(f_11116)
static void C_ccall f_11116(C_word c,C_word *av) C_noret;
C_noret_decl(f_11122)
static void C_ccall f_11122(C_word c,C_word *av) C_noret;
C_noret_decl(f_11126)
static void C_ccall f_11126(C_word c,C_word *av) C_noret;
C_noret_decl(f_11129)
static void C_ccall f_11129(C_word c,C_word *av) C_noret;
C_noret_decl(f_11133)
static void C_ccall f_11133(C_word c,C_word *av) C_noret;
C_noret_decl(f_11135)
static void C_ccall f_11135(C_word c,C_word *av) C_noret;
C_noret_decl(f_11141)
static void C_ccall f_11141(C_word c,C_word *av) C_noret;
C_noret_decl(f_11147)
static void C_ccall f_11147(C_word c,C_word *av) C_noret;
C_noret_decl(f_11153)
static void C_ccall f_11153(C_word c,C_word *av) C_noret;
C_noret_decl(f_11159)
static void f_11159(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11163)
static void C_ccall f_11163(C_word c,C_word *av) C_noret;
C_noret_decl(f_11168)
static void C_ccall f_11168(C_word c,C_word *av) C_noret;
C_noret_decl(f_11174)
static void C_ccall f_11174(C_word c,C_word *av) C_noret;
C_noret_decl(f_11178)
static void C_ccall f_11178(C_word c,C_word *av) C_noret;
C_noret_decl(f_11180)
static void C_ccall f_11180(C_word c,C_word *av) C_noret;
C_noret_decl(f_11186)
static void C_ccall f_11186(C_word c,C_word *av) C_noret;
C_noret_decl(f_11194)
static void C_ccall f_11194(C_word c,C_word *av) C_noret;
C_noret_decl(f_11196)
static void C_ccall f_11196(C_word c,C_word *av) C_noret;
C_noret_decl(f_11200)
static void C_ccall f_11200(C_word c,C_word *av) C_noret;
C_noret_decl(f_11205)
static void C_ccall f_11205(C_word c,C_word *av) C_noret;
C_noret_decl(f_11209)
static void C_ccall f_11209(C_word c,C_word *av) C_noret;
C_noret_decl(f_11216)
static void C_ccall f_11216(C_word c,C_word *av) C_noret;
C_noret_decl(f_11220)
static void C_ccall f_11220(C_word c,C_word *av) C_noret;
C_noret_decl(f_11222)
static C_word f_11222(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_11242)
static void C_ccall f_11242(C_word c,C_word *av) C_noret;
C_noret_decl(f_11248)
static void C_ccall f_11248(C_word c,C_word *av) C_noret;
C_noret_decl(f_11252)
static void C_ccall f_11252(C_word c,C_word *av) C_noret;
C_noret_decl(f_11255)
static void C_ccall f_11255(C_word c,C_word *av) C_noret;
C_noret_decl(f_11262)
static void C_ccall f_11262(C_word c,C_word *av) C_noret;
C_noret_decl(f_11266)
static void C_ccall f_11266(C_word c,C_word *av) C_noret;
C_noret_decl(f_11268)
static void C_ccall f_11268(C_word c,C_word *av) C_noret;
C_noret_decl(f_11272)
static void C_ccall f_11272(C_word c,C_word *av) C_noret;
C_noret_decl(f_11277)
static void C_ccall f_11277(C_word c,C_word *av) C_noret;
C_noret_decl(f_11281)
static void C_ccall f_11281(C_word c,C_word *av) C_noret;
C_noret_decl(f_11284)
static void C_ccall f_11284(C_word c,C_word *av) C_noret;
C_noret_decl(f_11291)
static void C_ccall f_11291(C_word c,C_word *av) C_noret;
C_noret_decl(f_11295)
static void C_ccall f_11295(C_word c,C_word *av) C_noret;
C_noret_decl(f_11299)
static void C_ccall f_11299(C_word c,C_word *av) C_noret;
C_noret_decl(f_11303)
static void C_ccall f_11303(C_word c,C_word *av) C_noret;
C_noret_decl(f_11305)
static void C_ccall f_11305(C_word c,C_word *av) C_noret;
C_noret_decl(f_11311)
static void C_ccall f_11311(C_word c,C_word *av) C_noret;
C_noret_decl(f_11319)
static void C_ccall f_11319(C_word c,C_word *av) C_noret;
C_noret_decl(f_11321)
static void C_ccall f_11321(C_word c,C_word *av) C_noret;
C_noret_decl(f_11327)
static void C_ccall f_11327(C_word c,C_word *av) C_noret;
C_noret_decl(f_11331)
static void C_ccall f_11331(C_word c,C_word *av) C_noret;
C_noret_decl(f_11334)
static void C_ccall f_11334(C_word c,C_word *av) C_noret;
C_noret_decl(f_11341)
static void C_ccall f_11341(C_word c,C_word *av) C_noret;
C_noret_decl(f_11345)
static void C_ccall f_11345(C_word c,C_word *av) C_noret;
C_noret_decl(f_11347)
static void C_ccall f_11347(C_word c,C_word *av) C_noret;
C_noret_decl(f_11351)
static void C_ccall f_11351(C_word c,C_word *av) C_noret;
C_noret_decl(f_11356)
static void C_ccall f_11356(C_word c,C_word *av) C_noret;
C_noret_decl(f_11360)
static void C_ccall f_11360(C_word c,C_word *av) C_noret;
C_noret_decl(f_11367)
static void C_ccall f_11367(C_word c,C_word *av) C_noret;
C_noret_decl(f_11369)
static void C_ccall f_11369(C_word c,C_word *av) C_noret;
C_noret_decl(f_11373)
static void C_ccall f_11373(C_word c,C_word *av) C_noret;
C_noret_decl(f_11378)
static void C_ccall f_11378(C_word c,C_word *av) C_noret;
C_noret_decl(f_11382)
static void C_ccall f_11382(C_word c,C_word *av) C_noret;
C_noret_decl(f_11384)
static void C_ccall f_11384(C_word c,C_word *av) C_noret;
C_noret_decl(f_11399)
static void C_ccall f_11399(C_word c,C_word *av) C_noret;
C_noret_decl(f_11401)
static void C_ccall f_11401(C_word c,C_word *av) C_noret;
C_noret_decl(f_11407)
static void f_11407(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11432)
static void C_ccall f_11432(C_word c,C_word *av) C_noret;
C_noret_decl(f_11446)
static void C_ccall f_11446(C_word c,C_word *av) C_noret;
C_noret_decl(f_11458)
static void C_ccall f_11458(C_word c,C_word *av) C_noret;
C_noret_decl(f_11462)
static void C_ccall f_11462(C_word c,C_word *av) C_noret;
C_noret_decl(f_11489)
static void C_ccall f_11489(C_word c,C_word *av) C_noret;
C_noret_decl(f_11493)
static void C_ccall f_11493(C_word c,C_word *av) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_11501)
static void C_ccall f_11501(C_word c,C_word *av) C_noret;
C_noret_decl(f_11505)
static void C_ccall f_11505(C_word c,C_word *av) C_noret;
C_noret_decl(f_11513)
static void C_ccall f_11513(C_word c,C_word *av) C_noret;
C_noret_decl(f_11521)
static void C_ccall f_11521(C_word c,C_word *av) C_noret;
C_noret_decl(f_11529)
static void C_ccall f_11529(C_word c,C_word *av) C_noret;
C_noret_decl(f_11535)
static void C_ccall f_11535(C_word c,C_word *av) C_noret;
C_noret_decl(f_11539)
static void C_ccall f_11539(C_word c,C_word *av) C_noret;
C_noret_decl(f_11542)
static void C_ccall f_11542(C_word c,C_word *av) C_noret;
C_noret_decl(f_11551)
static void C_ccall f_11551(C_word c,C_word *av) C_noret;
C_noret_decl(f_11557)
static void C_ccall f_11557(C_word c,C_word *av) C_noret;
C_noret_decl(f_11561)
static void f_11561(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11564)
static void C_ccall f_11564(C_word c,C_word *av) C_noret;
C_noret_decl(f_11576)
static void C_ccall f_11576(C_word c,C_word *av) C_noret;
C_noret_decl(f_11578)
static void C_ccall f_11578(C_word c,C_word *av) C_noret;
C_noret_decl(f_11584)
static void C_ccall f_11584(C_word c,C_word *av) C_noret;
C_noret_decl(f_11589)
static void C_ccall f_11589(C_word c,C_word *av) C_noret;
C_noret_decl(f_11593)
static void C_ccall f_11593(C_word c,C_word *av) C_noret;
C_noret_decl(f_11596)
static void f_11596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11606)
static void C_ccall f_11606(C_word c,C_word *av) C_noret;
C_noret_decl(f_11619)
static void C_ccall f_11619(C_word c,C_word *av) C_noret;
C_noret_decl(f_11624)
static void C_ccall f_11624(C_word c,C_word *av) C_noret;
C_noret_decl(f_11631)
static void C_ccall f_11631(C_word c,C_word *av) C_noret;
C_noret_decl(f_11634)
static void C_ccall f_11634(C_word c,C_word *av) C_noret;
C_noret_decl(f_11649)
static void C_ccall f_11649(C_word c,C_word *av) C_noret;
C_noret_decl(f_11657)
static void C_ccall f_11657(C_word c,C_word *av) C_noret;
C_noret_decl(f_11661)
static void C_ccall f_11661(C_word c,C_word *av) C_noret;
C_noret_decl(f_11664)
static void C_ccall f_11664(C_word c,C_word *av) C_noret;
C_noret_decl(f_11668)
static void C_ccall f_11668(C_word c,C_word *av) C_noret;
C_noret_decl(f_11672)
static void C_ccall f_11672(C_word c,C_word *av) C_noret;
C_noret_decl(f_11675)
static void C_ccall f_11675(C_word c,C_word *av) C_noret;
C_noret_decl(f_11678)
static void C_ccall f_11678(C_word c,C_word *av) C_noret;
C_noret_decl(f_11687)
static void C_ccall f_11687(C_word c,C_word *av) C_noret;
C_noret_decl(f_11697)
static void C_ccall f_11697(C_word c,C_word *av) C_noret;
C_noret_decl(f_11701)
static void C_ccall f_11701(C_word c,C_word *av) C_noret;
C_noret_decl(f_11704)
static void C_ccall f_11704(C_word c,C_word *av) C_noret;
C_noret_decl(f_11707)
static void C_ccall f_11707(C_word c,C_word *av) C_noret;
C_noret_decl(f_11710)
static void C_ccall f_11710(C_word c,C_word *av) C_noret;
C_noret_decl(f_11718)
static void C_ccall f_11718(C_word c,C_word *av) C_noret;
C_noret_decl(f_11727)
static void C_ccall f_11727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word *av) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word *av) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word *av) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3620)
static void f_3620(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3647)
static void f_3647(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3660)
static void f_3660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3682)
static void f_3682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word *av) C_noret;
C_noret_decl(f_3694)
static void C_ccall f_3694(C_word c,C_word *av) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word *av) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void f_3716(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3728)
static void f_3728(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3745)
static void f_3745(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3775)
static C_word f_3775(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3805)
static C_word f_3805(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5);
C_noret_decl(f_3819)
static void f_3819(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_3836)
static void f_3836(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word *av) C_noret;
C_noret_decl(f_3869)
static void f_3869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3920)
static void C_ccall f_3920(C_word c,C_word *av) C_noret;
C_noret_decl(f_3933)
static void f_3933(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word *av) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word *av) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word *av) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word *av) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void f_3972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word *av) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void f_3999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word *av) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word *av) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word *av) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word *av) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word *av) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word *av) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word *av) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word *av) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word *av) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word *av) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word *av) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word *av) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word *av) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word *av) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word *av) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word *av) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word *av) C_noret;
C_noret_decl(f_4499)
static void C_ccall f_4499(C_word c,C_word *av) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word *av) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word *av) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word *av) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word *av) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word *av) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word *av) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word *av) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word *av) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word *av) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word *av) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word *av) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word *av) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word *av) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word *av) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word *av) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word *av) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word *av) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word *av) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4812)
static void C_ccall f_4812(C_word c,C_word *av) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word *av) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word *av) C_noret;
C_noret_decl(f_4834)
static void C_ccall f_4834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word *av) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word *av) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word *av) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word *av) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word *av) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word *av) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word *av) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word *av) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word *av) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word *av) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word *av) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word *av) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4961)
static void C_ccall f_4961(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void f_4969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4999)
static void f_4999(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void f_5029(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word *av) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word *av) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word *av) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word *av) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5106)
static void C_ccall f_5106(C_word c,C_word *av) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word *av) C_noret;
C_noret_decl(f_5120)
static void f_5120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word *av) C_noret;
C_noret_decl(f_5154)
static void f_5154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word *av) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word *av) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word *av) C_noret;
C_noret_decl(f_5265)
static void f_5265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5299)
static void f_5299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word *av) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word *av) C_noret;
C_noret_decl(f_5384)
static void C_ccall f_5384(C_word c,C_word *av) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word *av) C_noret;
C_noret_decl(f_5415)
static void C_ccall f_5415(C_word c,C_word *av) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word *av) C_noret;
C_noret_decl(f_5441)
static void f_5441(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5489)
static void f_5489(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5537)
static void f_5537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5571)
static void f_5571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void f_5605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5646)
static void C_ccall f_5646(C_word c,C_word *av) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word *av) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word *av) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word *av) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word *av) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word *av) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word *av) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word *av) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word *av) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word *av) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5875)
static void C_ccall f_5875(C_word c,C_word *av) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word *av) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word *av) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5922)
static void C_ccall f_5922(C_word c,C_word *av) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word *av) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word *av) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word *av) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word *av) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word *av) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word *av) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word *av) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word *av) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word *av) C_noret;
C_noret_decl(f_6028)
static void f_6028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word *av) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word *av) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word *av) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word *av) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word *av) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word *av) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word *av) C_noret;
C_noret_decl(f_6107)
static void C_ccall f_6107(C_word c,C_word *av) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word *av) C_noret;
C_noret_decl(f_6114)
static void C_ccall f_6114(C_word c,C_word *av) C_noret;
C_noret_decl(f_6120)
static void C_ccall f_6120(C_word c,C_word *av) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word *av) C_noret;
C_noret_decl(f_6138)
static void C_ccall f_6138(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word *av) C_noret;
C_noret_decl(f_6145)
static void C_ccall f_6145(C_word c,C_word *av) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word *av) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word *av) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word *av) C_noret;
C_noret_decl(f_6175)
static void C_ccall f_6175(C_word c,C_word *av) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word *av) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word *av) C_noret;
C_noret_decl(f_6196)
static void f_6196(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word *av) C_noret;
C_noret_decl(f_6254)
static void C_ccall f_6254(C_word c,C_word *av) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word *av) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word *av) C_noret;
C_noret_decl(f_6276)
static void C_ccall f_6276(C_word c,C_word *av) C_noret;
C_noret_decl(f_6277)
static C_word f_6277(C_word t0,C_word t1);
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word *av) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word *av) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word *av) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word *av) C_noret;
C_noret_decl(f_6313)
static void C_ccall f_6313(C_word c,C_word *av) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word *av) C_noret;
C_noret_decl(f_6341)
static C_word f_6341(C_word t0,C_word t1);
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word *av) C_noret;
C_noret_decl(f_6368)
static void f_6368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word *av) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word *av) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word *av) C_noret;
C_noret_decl(f_6424)
static void C_ccall f_6424(C_word c,C_word *av) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word *av) C_noret;
C_noret_decl(f_6438)
static void C_ccall f_6438(C_word c,C_word *av) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word *av) C_noret;
C_noret_decl(f_6459)
static void C_ccall f_6459(C_word c,C_word *av) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word *av) C_noret;
C_noret_decl(f_6489)
static void C_ccall f_6489(C_word c,C_word *av) C_noret;
C_noret_decl(f_6525)
static void C_ccall f_6525(C_word c,C_word *av) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word *av) C_noret;
C_noret_decl(f_6539)
static void C_ccall f_6539(C_word c,C_word *av) C_noret;
C_noret_decl(f_6553)
static void f_6553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word *av) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word *av) C_noret;
C_noret_decl(f_6603)
static void C_ccall f_6603(C_word c,C_word *av) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606(C_word c,C_word *av) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word *av) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word *av) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621(C_word c,C_word *av) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word *av) C_noret;
C_noret_decl(f_6627)
static void C_ccall f_6627(C_word c,C_word *av) C_noret;
C_noret_decl(f_6630)
static void C_ccall f_6630(C_word c,C_word *av) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word *av) C_noret;
C_noret_decl(f_6638)
static void C_ccall f_6638(C_word c,C_word *av) C_noret;
C_noret_decl(f_6642)
static void C_ccall f_6642(C_word c,C_word *av) C_noret;
C_noret_decl(f_6646)
static void C_ccall f_6646(C_word c,C_word *av) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649(C_word c,C_word *av) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word *av) C_noret;
C_noret_decl(f_6655)
static void C_ccall f_6655(C_word c,C_word *av) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word *av) C_noret;
C_noret_decl(f_6673)
static void C_ccall f_6673(C_word c,C_word *av) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word *av) C_noret;
C_noret_decl(f_6689)
static void f_6689(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6699)
static void C_ccall f_6699(C_word c,C_word *av) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word *av) C_noret;
C_noret_decl(f_6705)
static void C_ccall f_6705(C_word c,C_word *av) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6712)
static void f_6712(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6735)
static void C_ccall f_6735(C_word c,C_word *av) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word *av) C_noret;
C_noret_decl(f_6765)
static void C_ccall f_6765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_6776)
static void C_ccall f_6776(C_word c,C_word *av) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word *av) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word *av) C_noret;
C_noret_decl(f_6785)
static void C_ccall f_6785(C_word c,C_word *av) C_noret;
C_noret_decl(f_6788)
static void C_ccall f_6788(C_word c,C_word *av) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word *av) C_noret;
C_noret_decl(f_6794)
static void C_ccall f_6794(C_word c,C_word *av) C_noret;
C_noret_decl(f_6801)
static void C_ccall f_6801(C_word c,C_word *av) C_noret;
C_noret_decl(f_6808)
static void f_6808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6821)
static void f_6821(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6832)
static C_word f_6832(C_word t0);
C_noret_decl(f_6865)
static void f_6865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6890)
static void C_ccall f_6890(C_word c,C_word *av) C_noret;
C_noret_decl(f_6918)
static void C_ccall f_6918(C_word c,C_word *av) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word *av) C_noret;
C_noret_decl(f_6978)
static void C_ccall f_6978(C_word c,C_word *av) C_noret;
C_noret_decl(f_6999)
static void C_ccall f_6999(C_word c,C_word *av) C_noret;
C_noret_decl(f_7028)
static void f_7028(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word *av) C_noret;
C_noret_decl(f_7063)
static void C_ccall f_7063(C_word c,C_word *av) C_noret;
C_noret_decl(f_7076)
static void f_7076(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word *av) C_noret;
C_noret_decl(f_7122)
static void f_7122(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7140)
static void C_ccall f_7140(C_word c,C_word *av) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word *av) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word *av) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word *av) C_noret;
C_noret_decl(f_7167)
static void C_ccall f_7167(C_word c,C_word *av) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word *av) C_noret;
C_noret_decl(f_7355)
static void C_ccall f_7355(C_word c,C_word *av) C_noret;
C_noret_decl(f_7363)
static void C_ccall f_7363(C_word c,C_word *av) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word *av) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word *av) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word *av) C_noret;
C_noret_decl(f_7407)
static void C_ccall f_7407(C_word c,C_word *av) C_noret;
C_noret_decl(f_7436)
static void f_7436(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7465)
static void C_ccall f_7465(C_word c,C_word *av) C_noret;
C_noret_decl(f_7482)
static C_word f_7482(C_word t0,C_word t1);
C_noret_decl(f_7508)
static void f_7508(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7515)
static void C_ccall f_7515(C_word c,C_word *av) C_noret;
C_noret_decl(f_7524)
static void C_ccall f_7524(C_word c,C_word *av) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word *av) C_noret;
C_noret_decl(f_7550)
static void C_ccall f_7550(C_word c,C_word *av) C_noret;
C_noret_decl(f_7562)
static void C_ccall f_7562(C_word c,C_word *av) C_noret;
C_noret_decl(f_7563)
static void C_ccall f_7563(C_word c,C_word *av) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word *av) C_noret;
C_noret_decl(f_7577)
static void C_ccall f_7577(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word *av) C_noret;
C_noret_decl(f_7594)
static void C_ccall f_7594(C_word c,C_word *av) C_noret;
C_noret_decl(f_7601)
static void C_ccall f_7601(C_word c,C_word *av) C_noret;
C_noret_decl(f_7608)
static void C_ccall f_7608(C_word c,C_word *av) C_noret;
C_noret_decl(f_7612)
static void C_ccall f_7612(C_word c,C_word *av) C_noret;
C_noret_decl(f_7626)
static void C_ccall f_7626(C_word c,C_word *av) C_noret;
C_noret_decl(f_7629)
static void C_ccall f_7629(C_word c,C_word *av) C_noret;
C_noret_decl(f_7632)
static void C_ccall f_7632(C_word c,C_word *av) C_noret;
C_noret_decl(f_7633)
static void C_ccall f_7633(C_word c,C_word *av) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_7647)
static void C_ccall f_7647(C_word c,C_word *av) C_noret;
C_noret_decl(f_7651)
static void C_ccall f_7651(C_word c,C_word *av) C_noret;
C_noret_decl(f_7655)
static void C_ccall f_7655(C_word c,C_word *av) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word *av) C_noret;
C_noret_decl(f_7676)
static void C_ccall f_7676(C_word c,C_word *av) C_noret;
C_noret_decl(f_7679)
static void C_ccall f_7679(C_word c,C_word *av) C_noret;
C_noret_decl(f_7680)
static void C_ccall f_7680(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word *av) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word *av) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word *av) C_noret;
C_noret_decl(f_7706)
static void C_ccall f_7706(C_word c,C_word *av) C_noret;
C_noret_decl(f_7717)
static void f_7717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7727)
static void C_ccall f_7727(C_word c,C_word *av) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word *av) C_noret;
C_noret_decl(f_7739)
static void C_ccall f_7739(C_word c,C_word *av) C_noret;
C_noret_decl(f_7744)
static void f_7744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word *av) C_noret;
C_noret_decl(f_7756)
static void f_7756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7781)
static void C_ccall f_7781(C_word c,C_word *av) C_noret;
C_noret_decl(f_7790)
static void f_7790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word *av) C_noret;
C_noret_decl(f_7838)
static void C_ccall f_7838(C_word c,C_word *av) C_noret;
C_noret_decl(f_7857)
static void C_ccall f_7857(C_word c,C_word *av) C_noret;
C_noret_decl(f_7907)
static void C_ccall f_7907(C_word c,C_word *av) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word *av) C_noret;
C_noret_decl(f_7914)
static void C_ccall f_7914(C_word c,C_word *av) C_noret;
C_noret_decl(f_7919)
static void C_ccall f_7919(C_word c,C_word *av) C_noret;
C_noret_decl(f_7923)
static void C_ccall f_7923(C_word c,C_word *av) C_noret;
C_noret_decl(f_7926)
static void C_ccall f_7926(C_word c,C_word *av) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word *av) C_noret;
C_noret_decl(f_7933)
static void C_ccall f_7933(C_word c,C_word *av) C_noret;
C_noret_decl(f_7937)
static void C_ccall f_7937(C_word c,C_word *av) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word *av) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word *av) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word *av) C_noret;
C_noret_decl(f_7950)
static void C_ccall f_7950(C_word c,C_word *av) C_noret;
C_noret_decl(f_7962)
static void C_ccall f_7962(C_word c,C_word *av) C_noret;
C_noret_decl(f_7968)
static void C_ccall f_7968(C_word c,C_word *av) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word *av) C_noret;
C_noret_decl(f_7977)
static void C_ccall f_7977(C_word c,C_word *av) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word *av) C_noret;
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word *av) C_noret;
C_noret_decl(f_7992)
static void C_ccall f_7992(C_word c,C_word *av) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7998)
static void C_ccall f_7998(C_word c,C_word *av) C_noret;
C_noret_decl(f_8001)
static void C_ccall f_8001(C_word c,C_word *av) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word *av) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word *av) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word *av) C_noret;
C_noret_decl(f_8013)
static void C_ccall f_8013(C_word c,C_word *av) C_noret;
C_noret_decl(f_8020)
static void C_ccall f_8020(C_word c,C_word *av) C_noret;
C_noret_decl(f_8022)
static void C_ccall f_8022(C_word c,C_word *av) C_noret;
C_noret_decl(f_8030)
static void C_ccall f_8030(C_word c,C_word *av) C_noret;
C_noret_decl(f_8032)
static void C_ccall f_8032(C_word c,C_word *av) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word *av) C_noret;
C_noret_decl(f_8041)
static void C_ccall f_8041(C_word c,C_word *av) C_noret;
C_noret_decl(f_8044)
static void f_8044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8054)
static void f_8054(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8068)
static void C_ccall f_8068(C_word c,C_word *av) C_noret;
C_noret_decl(f_8087)
static void C_ccall f_8087(C_word c,C_word *av) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word *av) C_noret;
C_noret_decl(f_8130)
static void C_ccall f_8130(C_word c,C_word *av) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word *av) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word *av) C_noret;
C_noret_decl(f_8139)
static void C_ccall f_8139(C_word c,C_word *av) C_noret;
C_noret_decl(f_8142)
static void C_ccall f_8142(C_word c,C_word *av) C_noret;
C_noret_decl(f_8144)
static void f_8144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8153)
static void f_8153(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8184)
static void C_ccall f_8184(C_word c,C_word *av) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word *av) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word *av) C_noret;
C_noret_decl(f_8253)
static void C_ccall f_8253(C_word c,C_word *av) C_noret;
C_noret_decl(f_8630)
static void f_8630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8652)
static void C_ccall f_8652(C_word c,C_word *av) C_noret;
C_noret_decl(f_9543)
static void f_9543(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9546)
static void C_ccall f_9546(C_word c,C_word *av) C_noret;
C_noret_decl(f_9560)
static void C_ccall f_9560(C_word c,C_word *av) C_noret;
C_noret_decl(f_9563)
static void f_9563(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9565)
static void C_ccall f_9565(C_word c,C_word *av) C_noret;
C_noret_decl(f_9568)
static void C_ccall f_9568(C_word c,C_word *av) C_noret;
C_noret_decl(f_9575)
static void f_9575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9585)
static C_word f_9585(C_word t0,C_word t1);
C_noret_decl(f_9613)
static void f_9613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9617)
static void C_ccall f_9617(C_word c,C_word *av) C_noret;
C_noret_decl(f_9630)
static void C_ccall f_9630(C_word c,C_word *av) C_noret;
C_noret_decl(f_9658)
static void C_ccall f_9658(C_word c,C_word *av) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word *av) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word *av) C_noret;
C_noret_decl(f_9674)
static void f_9674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9687)
static void C_ccall f_9687(C_word c,C_word *av) C_noret;
C_noret_decl(f_9756)
static void C_ccall f_9756(C_word c,C_word *av) C_noret;
C_noret_decl(f_9760)
static void C_ccall f_9760(C_word c,C_word *av) C_noret;
C_noret_decl(f_9762)
static void f_9762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9770)
static void C_ccall f_9770(C_word c,C_word *av) C_noret;
C_noret_decl(f_9774)
static void C_ccall f_9774(C_word c,C_word *av) C_noret;
C_noret_decl(f_9776)
static void f_9776(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9814)
static void C_ccall f_9814(C_word c,C_word *av) C_noret;
C_noret_decl(f_9819)
static void f_9819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9823)
static void C_ccall f_9823(C_word c,C_word *av) C_noret;
C_noret_decl(f_9826)
static void C_ccall f_9826(C_word c,C_word *av) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word *av) C_noret;
C_noret_decl(f_9846)
static void C_ccall f_9846(C_word c,C_word *av) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word *av) C_noret;
C_noret_decl(f_9854)
static void C_ccall f_9854(C_word c,C_word *av) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word *av) C_noret;
C_noret_decl(f_9861)
static void C_ccall f_9861(C_word c,C_word *av) C_noret;
C_noret_decl(f_9864)
static void C_ccall f_9864(C_word c,C_word *av) C_noret;
C_noret_decl(f_9867)
static void C_ccall f_9867(C_word c,C_word *av) C_noret;
C_noret_decl(f_9872)
static void f_9872(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9878)
static void C_ccall f_9878(C_word c,C_word *av) C_noret;
C_noret_decl(f_9887)
static void C_ccall f_9887(C_word c,C_word *av) C_noret;
C_noret_decl(f_9891)
static void C_ccall f_9891(C_word c,C_word *av) C_noret;
C_noret_decl(f_9894)
static void C_ccall f_9894(C_word c,C_word *av) C_noret;
C_noret_decl(f_9899)
static void C_ccall f_9899(C_word c,C_word *av) C_noret;
C_noret_decl(f_9904)
static void C_ccall f_9904(C_word c,C_word *av) C_noret;
C_noret_decl(f_9906)
static void C_ccall f_9906(C_word c,C_word *av) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word *av) C_noret;
C_noret_decl(f_9913)
static void C_ccall f_9913(C_word c,C_word *av) C_noret;
C_noret_decl(f_9916)
static void C_ccall f_9916(C_word c,C_word *av) C_noret;
C_noret_decl(f_9921)
static void f_9921(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9931)
static void C_ccall f_9931(C_word c,C_word *av) C_noret;
C_noret_decl(f_9934)
static void C_ccall f_9934(C_word c,C_word *av) C_noret;
C_noret_decl(f_9941)
static void C_ccall f_9941(C_word c,C_word *av) C_noret;
C_noret_decl(f_9943)
static void C_ccall f_9943(C_word c,C_word *av) C_noret;
C_noret_decl(f_9950)
static void C_ccall f_9950(C_word c,C_word *av) C_noret;
C_noret_decl(f_9955)
static void C_ccall f_9955(C_word c,C_word *av) C_noret;
C_noret_decl(f_9961)
static void C_ccall f_9961(C_word c,C_word *av) C_noret;
C_noret_decl(f_9965)
static void C_ccall f_9965(C_word c,C_word *av) C_noret;
C_noret_decl(f_9972)
static void C_ccall f_9972(C_word c,C_word *av) C_noret;
C_noret_decl(f_9977)
static void C_ccall f_9977(C_word c,C_word *av) C_noret;
C_noret_decl(f_9986)
static void C_ccall f_9986(C_word c,C_word *av) C_noret;
C_noret_decl(f_9994)
static void f_9994(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);C_callback_wrapper((void *)f_11384,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))),*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11369,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11347,2));}

/* from CHICKEN_apply_to_string */
 int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t3);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11321,4));}

/* from CHICKEN_apply */
 int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11305,3));}

/* from CHICKEN_eval_string_to_string */
 int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11268,3));}

/* from CHICKEN_eval_to_string */
 int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11242,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11196,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11180,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
return C_truep(C_callback_wrapper((void *)f_11168,0));}

C_noret_decl(trf_10104)
static void C_ccall trf_10104(C_word c,C_word *av) C_noret;
static void C_ccall trf_10104(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10104(t0,t1);}

C_noret_decl(trf_10188)
static void C_ccall trf_10188(C_word c,C_word *av) C_noret;
static void C_ccall trf_10188(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10188(t0,t1);}

C_noret_decl(trf_10278)
static void C_ccall trf_10278(C_word c,C_word *av) C_noret;
static void C_ccall trf_10278(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10278(t0,t1,t2);}

C_noret_decl(trf_10297)
static void C_ccall trf_10297(C_word c,C_word *av) C_noret;
static void C_ccall trf_10297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10297(t0,t1);}

C_noret_decl(trf_10308)
static void C_ccall trf_10308(C_word c,C_word *av) C_noret;
static void C_ccall trf_10308(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10308(t0,t1,t2);}

C_noret_decl(trf_10451)
static void C_ccall trf_10451(C_word c,C_word *av) C_noret;
static void C_ccall trf_10451(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10451(t0,t1,t2,t3);}

C_noret_decl(trf_10499)
static void C_ccall trf_10499(C_word c,C_word *av) C_noret;
static void C_ccall trf_10499(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10499(t0,t1);}

C_noret_decl(trf_10564)
static void C_ccall trf_10564(C_word c,C_word *av) C_noret;
static void C_ccall trf_10564(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10564(t0,t1,t2);}

C_noret_decl(trf_10609)
static void C_ccall trf_10609(C_word c,C_word *av) C_noret;
static void C_ccall trf_10609(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10609(t0,t1,t2);}

C_noret_decl(trf_10713)
static void C_ccall trf_10713(C_word c,C_word *av) C_noret;
static void C_ccall trf_10713(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10713(t0,t1,t2);}

C_noret_decl(trf_10747)
static void C_ccall trf_10747(C_word c,C_word *av) C_noret;
static void C_ccall trf_10747(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10747(t0,t1,t2);}

C_noret_decl(trf_10812)
static void C_ccall trf_10812(C_word c,C_word *av) C_noret;
static void C_ccall trf_10812(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10812(t0,t1,t2);}

C_noret_decl(trf_10971)
static void C_ccall trf_10971(C_word c,C_word *av) C_noret;
static void C_ccall trf_10971(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10971(t0,t1,t2,t3);}

C_noret_decl(trf_11004)
static void C_ccall trf_11004(C_word c,C_word *av) C_noret;
static void C_ccall trf_11004(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11004(t0,t1,t2);}

C_noret_decl(trf_11055)
static void C_ccall trf_11055(C_word c,C_word *av) C_noret;
static void C_ccall trf_11055(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11055(t0,t1,t2);}

C_noret_decl(trf_11100)
static void C_ccall trf_11100(C_word c,C_word *av) C_noret;
static void C_ccall trf_11100(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11100(t0,t1);}

C_noret_decl(trf_11159)
static void C_ccall trf_11159(C_word c,C_word *av) C_noret;
static void C_ccall trf_11159(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11159(t0,t1,t2);}

C_noret_decl(trf_11407)
static void C_ccall trf_11407(C_word c,C_word *av) C_noret;
static void C_ccall trf_11407(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11407(t0,t1,t2);}

C_noret_decl(trf_11561)
static void C_ccall trf_11561(C_word c,C_word *av) C_noret;
static void C_ccall trf_11561(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11561(t0,t1);}

C_noret_decl(trf_11596)
static void C_ccall trf_11596(C_word c,C_word *av) C_noret;
static void C_ccall trf_11596(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11596(t0,t1);}

C_noret_decl(trf_3620)
static void C_ccall trf_3620(C_word c,C_word *av) C_noret;
static void C_ccall trf_3620(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3620(t0,t1,t2,t3);}

C_noret_decl(trf_3647)
static void C_ccall trf_3647(C_word c,C_word *av) C_noret;
static void C_ccall trf_3647(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3647(t0,t1,t2,t3);}

C_noret_decl(trf_3660)
static void C_ccall trf_3660(C_word c,C_word *av) C_noret;
static void C_ccall trf_3660(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3660(t0,t1);}

C_noret_decl(trf_3682)
static void C_ccall trf_3682(C_word c,C_word *av) C_noret;
static void C_ccall trf_3682(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3682(t0,t1,t2);}

C_noret_decl(trf_3716)
static void C_ccall trf_3716(C_word c,C_word *av) C_noret;
static void C_ccall trf_3716(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3716(t0,t1,t2,t3);}

C_noret_decl(trf_3728)
static void C_ccall trf_3728(C_word c,C_word *av) C_noret;
static void C_ccall trf_3728(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3728(t0,t1,t2,t3);}

C_noret_decl(trf_3745)
static void C_ccall trf_3745(C_word c,C_word *av) C_noret;
static void C_ccall trf_3745(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3745(t0,t1,t2);}

C_noret_decl(trf_3819)
static void C_ccall trf_3819(C_word c,C_word *av) C_noret;
static void C_ccall trf_3819(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3819(t0,t1,t2,t3);}

C_noret_decl(trf_3836)
static void C_ccall trf_3836(C_word c,C_word *av) C_noret;
static void C_ccall trf_3836(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3836(t0,t1,t2);}

C_noret_decl(trf_3869)
static void C_ccall trf_3869(C_word c,C_word *av) C_noret;
static void C_ccall trf_3869(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3869(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3933)
static void C_ccall trf_3933(C_word c,C_word *av) C_noret;
static void C_ccall trf_3933(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3933(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3972)
static void C_ccall trf_3972(C_word c,C_word *av) C_noret;
static void C_ccall trf_3972(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3972(t0,t1);}

C_noret_decl(trf_3999)
static void C_ccall trf_3999(C_word c,C_word *av) C_noret;
static void C_ccall trf_3999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3999(t0,t1);}

C_noret_decl(trf_4969)
static void C_ccall trf_4969(C_word c,C_word *av) C_noret;
static void C_ccall trf_4969(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4969(t0,t1,t2);}

C_noret_decl(trf_4999)
static void C_ccall trf_4999(C_word c,C_word *av) C_noret;
static void C_ccall trf_4999(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4999(t0,t1,t2,t3);}

C_noret_decl(trf_5029)
static void C_ccall trf_5029(C_word c,C_word *av) C_noret;
static void C_ccall trf_5029(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5029(t0,t1,t2);}

C_noret_decl(trf_5120)
static void C_ccall trf_5120(C_word c,C_word *av) C_noret;
static void C_ccall trf_5120(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5120(t0,t1,t2);}

C_noret_decl(trf_5154)
static void C_ccall trf_5154(C_word c,C_word *av) C_noret;
static void C_ccall trf_5154(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5154(t0,t1,t2);}

C_noret_decl(trf_5265)
static void C_ccall trf_5265(C_word c,C_word *av) C_noret;
static void C_ccall trf_5265(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5265(t0,t1,t2);}

C_noret_decl(trf_5299)
static void C_ccall trf_5299(C_word c,C_word *av) C_noret;
static void C_ccall trf_5299(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5299(t0,t1,t2);}

C_noret_decl(trf_5441)
static void C_ccall trf_5441(C_word c,C_word *av) C_noret;
static void C_ccall trf_5441(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5441(t0,t1,t2,t3);}

C_noret_decl(trf_5489)
static void C_ccall trf_5489(C_word c,C_word *av) C_noret;
static void C_ccall trf_5489(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5489(t0,t1,t2,t3);}

C_noret_decl(trf_5537)
static void C_ccall trf_5537(C_word c,C_word *av) C_noret;
static void C_ccall trf_5537(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5537(t0,t1,t2);}

C_noret_decl(trf_5571)
static void C_ccall trf_5571(C_word c,C_word *av) C_noret;
static void C_ccall trf_5571(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5571(t0,t1,t2);}

C_noret_decl(trf_5605)
static void C_ccall trf_5605(C_word c,C_word *av) C_noret;
static void C_ccall trf_5605(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5605(t0,t1,t2);}

C_noret_decl(trf_6028)
static void C_ccall trf_6028(C_word c,C_word *av) C_noret;
static void C_ccall trf_6028(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6028(t0,t1,t2);}

C_noret_decl(trf_6196)
static void C_ccall trf_6196(C_word c,C_word *av) C_noret;
static void C_ccall trf_6196(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6196(t0,t1,t2);}

C_noret_decl(trf_6368)
static void C_ccall trf_6368(C_word c,C_word *av) C_noret;
static void C_ccall trf_6368(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6368(t0,t1,t2);}

C_noret_decl(trf_6553)
static void C_ccall trf_6553(C_word c,C_word *av) C_noret;
static void C_ccall trf_6553(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6553(t0,t1,t2);}

C_noret_decl(trf_6689)
static void C_ccall trf_6689(C_word c,C_word *av) C_noret;
static void C_ccall trf_6689(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6689(t0,t1,t2,t3);}

C_noret_decl(trf_6712)
static void C_ccall trf_6712(C_word c,C_word *av) C_noret;
static void C_ccall trf_6712(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6712(t0,t1,t2);}

C_noret_decl(trf_6808)
static void C_ccall trf_6808(C_word c,C_word *av) C_noret;
static void C_ccall trf_6808(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6808(t0,t1,t2);}

C_noret_decl(trf_6821)
static void C_ccall trf_6821(C_word c,C_word *av) C_noret;
static void C_ccall trf_6821(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6821(t0,t1);}

C_noret_decl(trf_6865)
static void C_ccall trf_6865(C_word c,C_word *av) C_noret;
static void C_ccall trf_6865(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6865(t0,t1,t2);}

C_noret_decl(trf_7028)
static void C_ccall trf_7028(C_word c,C_word *av) C_noret;
static void C_ccall trf_7028(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7028(t0,t1);}

C_noret_decl(trf_7076)
static void C_ccall trf_7076(C_word c,C_word *av) C_noret;
static void C_ccall trf_7076(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7076(t0,t1);}

C_noret_decl(trf_7122)
static void C_ccall trf_7122(C_word c,C_word *av) C_noret;
static void C_ccall trf_7122(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7122(t0,t1,t2);}

C_noret_decl(trf_7436)
static void C_ccall trf_7436(C_word c,C_word *av) C_noret;
static void C_ccall trf_7436(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7436(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7508)
static void C_ccall trf_7508(C_word c,C_word *av) C_noret;
static void C_ccall trf_7508(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7508(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7717)
static void C_ccall trf_7717(C_word c,C_word *av) C_noret;
static void C_ccall trf_7717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7717(t0,t1,t2);}

C_noret_decl(trf_7744)
static void C_ccall trf_7744(C_word c,C_word *av) C_noret;
static void C_ccall trf_7744(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7744(t0,t1,t2);}

C_noret_decl(trf_7756)
static void C_ccall trf_7756(C_word c,C_word *av) C_noret;
static void C_ccall trf_7756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7756(t0,t1,t2);}

C_noret_decl(trf_7790)
static void C_ccall trf_7790(C_word c,C_word *av) C_noret;
static void C_ccall trf_7790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7790(t0,t1,t2);}

C_noret_decl(trf_8044)
static void C_ccall trf_8044(C_word c,C_word *av) C_noret;
static void C_ccall trf_8044(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8044(t0,t1);}

C_noret_decl(trf_8054)
static void C_ccall trf_8054(C_word c,C_word *av) C_noret;
static void C_ccall trf_8054(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8054(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8144)
static void C_ccall trf_8144(C_word c,C_word *av) C_noret;
static void C_ccall trf_8144(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8144(t0,t1);}

C_noret_decl(trf_8153)
static void C_ccall trf_8153(C_word c,C_word *av) C_noret;
static void C_ccall trf_8153(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8153(t0,t1,t2);}

C_noret_decl(trf_8630)
static void C_ccall trf_8630(C_word c,C_word *av) C_noret;
static void C_ccall trf_8630(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8630(t0,t1,t2);}

C_noret_decl(trf_9543)
static void C_ccall trf_9543(C_word c,C_word *av) C_noret;
static void C_ccall trf_9543(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9543(t0,t1);}

C_noret_decl(trf_9563)
static void C_ccall trf_9563(C_word c,C_word *av) C_noret;
static void C_ccall trf_9563(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9563(t0,t1);}

C_noret_decl(trf_9575)
static void C_ccall trf_9575(C_word c,C_word *av) C_noret;
static void C_ccall trf_9575(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9575(t0,t1);}

C_noret_decl(trf_9613)
static void C_ccall trf_9613(C_word c,C_word *av) C_noret;
static void C_ccall trf_9613(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9613(t0,t1,t2);}

C_noret_decl(trf_9674)
static void C_ccall trf_9674(C_word c,C_word *av) C_noret;
static void C_ccall trf_9674(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9674(t0,t1,t2);}

C_noret_decl(trf_9762)
static void C_ccall trf_9762(C_word c,C_word *av) C_noret;
static void C_ccall trf_9762(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9762(t0,t1,t2);}

C_noret_decl(trf_9776)
static void C_ccall trf_9776(C_word c,C_word *av) C_noret;
static void C_ccall trf_9776(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9776(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9819)
static void C_ccall trf_9819(C_word c,C_word *av) C_noret;
static void C_ccall trf_9819(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9819(t0,t1,t2);}

C_noret_decl(trf_9872)
static void C_ccall trf_9872(C_word c,C_word *av) C_noret;
static void C_ccall trf_9872(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9872(t0,t1);}

C_noret_decl(trf_9921)
static void C_ccall trf_9921(C_word c,C_word *av) C_noret;
static void C_ccall trf_9921(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9921(t0,t1,t2);}

C_noret_decl(trf_9994)
static void C_ccall trf_9994(C_word c,C_word *av) C_noret;
static void C_ccall trf_9994(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9994(t0,t1,t2);}

/* f12353 in scheme#load in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f12353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f12353,c,av);}
/* eval.scm:1137: load/internal */
t2=lf[235];
f_9776(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k10002 in for-each-loop2385 in a9976 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in ... */
static void C_ccall f_10004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10004,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9994(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k10026 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in ... */
static void C_ccall f_10028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10028,c,av);}
/* eval.scm:1101: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[237];
av2[3]=t1;
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10030 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in ... */
static void C_ccall f_10032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10032,c,av);}
if(C_truep(t1)){
/* eval.scm:1103: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[245];
av2[3]=t1;
tp(4,av2);}}
else{
/* eval.scm:1103: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[245];
av2[3]=lf[246];
tp(4,av2);}}}

/* a10036 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in ... */
static void C_ccall f_10037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10037,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10041,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1124: case-sensitive */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10039 in a10036 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in ... */
static void C_ccall f_10041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10041,c,av);}
/* eval.scm:1125: close-input-port */
t2=*((C_word*)lf[249]+1);{
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

/* a10048 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10049(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10049,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[239]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[215]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[19]+1));
t5=C_mutate((C_word*)lf[239]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[215]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k10066 in k10078 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10068,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1083: display */
t3=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10069 in k10066 in k10078 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10071,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1084: display */
t3=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[253];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10072 in k10069 in k10066 in k10078 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10074,c,av);}
/* eval.scm:1085: chicken.base#flush-output */
t2=*((C_word*)lf[251]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10078 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10080,c,av);}
a=C_alloc(4);
t2=(C_truep(t1)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10068,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1082: display */
t4=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[254];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_9861(2,av2);}}}

/* k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_10083,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_9858(2,av2);}}
else{
t2=C_i_stringp(((C_word*)t0)[3]);
if(C_truep(C_i_not(t2))){
/* eval.scm:1072: ##sys#signal-hook */
t3=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[255];
av2[3]=lf[237];
av2[4]=lf[256];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1073: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[237];
tp(6,av2);}}}}

/* k10096 in k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10098,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_9858(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1074: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[201]+1);
tp(4,av2);}}}

/* k10099 in k10096 in k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_10101,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10128,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1075: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[237];
tp(6,av2);}}
else{
t3=t2;
f_10104(t3,C_SCHEME_FALSE);}}

/* k10102 in k10099 in k10096 in k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void f_10104(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10104,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
f_9858(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1076: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[198];
tp(4,av2);}}}

/* k10108 in k10102 in k10099 in k10096 in k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_10110,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10122,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1077: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[237];
tp(6,av2);}}

/* k10120 in k10108 in k10102 in k10099 in k10096 in k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10122,c,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_9858(2,av2);}}
else{
/* eval.scm:1079: ##sys#signal-hook */
t2=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[257];
av2[3]=lf[237];
av2[4]=lf[258];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}
else{
/* eval.scm:1079: ##sys#signal-hook */
t2=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[257];
av2[3]=lf[237];
av2[4]=lf[258];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k10126 in k10099 in k10096 in k10081 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10128,c,av);}
t2=((C_word*)t0)[2];
f_10104(t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* chicken.load#evaluator in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void f_10188(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10188,2,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_closurep(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_not(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(C_truep(t3)?C_SCHEME_FALSE:(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10202,a[2]=t2,a[3]=((C_word)li193),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_10202 in chicken.load#evaluator in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_10202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10202,c,av);}
/* eval.scm:1133: eval */
t3=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* scheme#load in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_10208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10208,c,av);}
a=C_alloc(4);
if(C_truep(C_rest_nullp(c,3))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12353,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1137: evaluator */
f_10188(t3,C_SCHEME_FALSE);}
else{
t3=C_get_rest_arg(c,3,av,3,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10219,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1137: evaluator */
f_10188(t4,t3);}}

/* k10217 in scheme#load in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_10219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10219,c,av);}
/* eval.scm:1137: load/internal */
t2=lf[235];
f_9776(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* chicken.load#load-relative in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_10227(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10227,c,av);}
a=C_alloc(4);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10234,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1140: make-relative-pathname */
f_9613(t5,*((C_word*)lf[215]+1),t2);}

/* k10232 in chicken.load#load-relative in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_10234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10234,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10241,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1141: evaluator */
f_10188(t2,((C_word*)t0)[3]);}

/* k10239 in k10232 in chicken.load#load-relative in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10241,c,av);}
/* eval.scm:1141: load/internal */
t2=lf[235];
f_9776(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* chicken.load#load-noisily in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_10249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_10249,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_get_keyword(lf[267],t3,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10256,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10271,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1143: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[268]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[268]+1);
av2[1]=t5;
av2[2]=lf[270];
av2[3]=t3;
av2[4]=t6;
tp(5,av2);}}

/* k10254 in chicken.load#load-noisily in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_10256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10256,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10268,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1143: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[268]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[268]+1);
av2[1]=t2;
av2[2]=lf[269];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
tp(5,av2);}}

/* k10257 in k10254 in chicken.load#load-noisily in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10259,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1144: evaluator */
f_10188(t2,((C_word*)t0)[5]);}

/* k10264 in k10257 in k10254 in chicken.load#load-noisily in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10266,c,av);}
a=C_alloc(9);
/* eval.scm:1144: load/internal */
t2=lf[235];
f_9776(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_a_i_list(&a,3,C_SCHEME_TRUE,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* a10267 in k10254 in chicken.load#load-noisily in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10268,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a10270 in chicken.load#load-noisily in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_10271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10271,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
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
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10276,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10278,a[2]=t1,a[3]=((C_word)li200),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=lf[203];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11399,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11407,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=((C_word)li261),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11407(t13,t9,lf[203]);}

/* complete in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void f_10278(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10278,3,t0,t1,t2);}
t3=*((C_word*)lf[228]+1);
/* eval.scm:1155: g2471 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_10285(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(75,c,6)))){
C_save_and_reclaim((void *)f_10285,c,av);}
a=C_alloc(75);
t2=C_mutate((C_word*)lf[271]+1 /* (set! chicken.load#dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[272]+1 /* (set! chicken.load#load-unit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10287,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[278]+1 /* (set! chicken.load#load-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10378,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#include-forms-from-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10405,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t6=C_set_block_item(lf[286] /* ##sys#setup-mode */,0,C_SCHEME_FALSE);
t7=C_mutate(&lf[287] /* (set! chicken.load#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10499,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[288]+1 /* (set! chicken.load#find-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10508,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[290]+1 /* (set! chicken.load#find-dynamic-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10555,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[115]+1 /* (set! chicken.load#load-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10656,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[298]+1 /* (set! chicken.load#require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10728,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[300]+1 /* (set! chicken.load#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10793,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[302]+1 /* (set! chicken.load#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10858,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[272]+1 /* (set! chicken.load#load-unit ...) */,*((C_word*)lf[272]+1));
t15=C_mutate((C_word*)lf[115]+1 /* (set! chicken.load#load-extension ...) */,*((C_word*)lf[115]+1));
t16=C_mutate((C_word*)lf[288]+1 /* (set! chicken.load#find-file ...) */,*((C_word*)lf[288]+1));
t17=C_mutate((C_word*)lf[290]+1 /* (set! chicken.load#find-dynamic-extension ...) */,*((C_word*)lf[290]+1));
t18=C_mutate((C_word*)lf[117]+1 /* (set! ##sys#process-require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10899,a[2]=((C_word)li226),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[285]+1 /* (set! ##sys#resolve-include-filename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10968,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp));
t20=lf[306] /* last-error */ =C_SCHEME_FALSE;;
t21=C_mutate(&lf[307] /* (set! run-safe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11100,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate(&lf[311] /* (set! store-result ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11159,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[313] /* (set! CHICKEN_yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11168,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[315] /* (set! CHICKEN_eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11180,a[2]=((C_word)li243),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[316] /* (set! CHICKEN_eval_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11196,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate(&lf[319] /* (set! store-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11222,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate(&lf[321] /* (set! CHICKEN_eval_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11242,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate(&lf[322] /* (set! CHICKEN_eval_string_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11268,a[2]=((C_word)li250),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate(&lf[323] /* (set! CHICKEN_apply ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11305,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate(&lf[324] /* (set! CHICKEN_apply_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11321,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate(&lf[325] /* (set! CHICKEN_read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11347,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate(&lf[326] /* (set! CHICKEN_load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11369,a[2]=((C_word)li258),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate(&lf[327] /* (set! CHICKEN_get_error_message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11384,a[2]=((C_word)li259),tmp=(C_word)a,a+=3,tmp));
t34=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t34;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t34+1)))(2,av2);}}

/* chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10287(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10287,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10294,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1163: ##sys#provided? */
t6=*((C_word*)lf[204]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10294,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_10297(t3,C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10368,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10376,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1167: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[233]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[233]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void f_10297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10297,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1170: c-toplevel */
f_9762(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10300,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10349,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1171: load-verbose */
t4=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10301 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10303,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li201),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10308(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* loop in k10301 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void f_10308(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10308,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10322,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[247]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10331,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10342,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1178: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[227]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[227]+1);
av2[1]=t4;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[275];
tp(4,av2);}}}

/* k10320 in loop in k10301 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10322,c,av);}
if(C_truep(t1)){
/* eval.scm:1177: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[273];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* eval.scm:1177: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[273];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[274];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k10329 in loop in k10301 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10331,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1181: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10308(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k10340 in loop in k10301 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10342,c,av);}
/* eval.scm:1178: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[236]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k10347 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10349,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1172: scheme#display */
t3=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10303(2,av2);}}}

/* k10350 in k10347 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10352,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1173: scheme#display */
t3=*((C_word*)lf[252]+1);{
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

/* k10353 in k10350 in k10347 in k10298 in k10295 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10355,c,av);}
/* eval.scm:1174: scheme#display */
t2=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10366 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10368,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10372,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1168: dynamic-load-libraries */
t3=*((C_word*)lf[271]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10370 in k10366 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10372,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_10297(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k10374 in k10292 in chicken.load#load-unit in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10376,c,av);}
/* eval.scm:1167: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[200];
tp(4,av2);}}

/* chicken.load#load-library in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10378(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10378,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_symbol_2(t2,lf[275]);
if(C_truep(C_i_not(t4))){
/* eval.scm:1186: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[272]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[272]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[275];
tp(5,av2);}}
else{
t6=C_i_check_string_2(t4,lf[275]);
/* eval.scm:1186: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[272]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[272]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[275];
tp(5,av2);}}}

/* ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10405(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10405,c,av);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10409,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1192: ##sys#resolve-include-filename */
t7=*((C_word*)lf[285]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_10409,c,av);}
a=C_alloc(7);
t2=*((C_word*)lf[240]+1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10412,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(t1))){
/* eval.scm:1195: ##sys#signal-hook */
t4=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[257];
av2[3]=lf[283];
av2[4]=lf[284];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_10412(2,av2);}}}

/* k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10412,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10487,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1196: load-verbose */
t4=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10415,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li208),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1198: call-with-input-file */
t3=*((C_word*)lf[279]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10420(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10420,c,av);}
a=C_alloc(26);
t3=C_slot(t2,C_fix(13));
t4=((C_word*)t0)[2];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10431,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10433,a[2]=t7,a[3]=t5,a[4]=((C_word)li204),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10438,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word)li206),tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10481,a[2]=t5,a[3]=t7,a[4]=((C_word)li207),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1201: ##sys#dynamic-wind */
t12=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k10429 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10431,c,av);}
/* eval.scm:1201: k */
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
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* a10432 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10433,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a10437 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10438,c,av);}
a=C_alloc(6);
t2=C_i_not(((C_word*)t0)[2]);
t3=C_i_set_i_slot(((C_word*)t0)[3],C_fix(13),t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1203: read-with-source-info */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10447 in a10437 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10449(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10449,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li205),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10451(t5,((C_word*)t0)[5],t1,C_SCHEME_END_OF_LIST);}

/* doloop2554 in k10447 in a10437 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in ... */
static void f_10451(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10451,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),((C_word*)t0)[3]);
/* eval.scm:1207: reverse */
t5=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10471,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1203: read-with-source-info */
t5=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k10469 in doloop2554 in k10447 in a10437 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in ... */
static void C_ccall f_10471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10471,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_10451(t3,((C_word*)t0)[5],t1,t2);}

/* a10480 in a10419 in k10413 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10481,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10485 in k10410 in k10407 in ##sys#include-forms-from-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10487,c,av);}
if(C_truep(t1)){
/* eval.scm:1197: chicken.base#print */
t2=*((C_word*)lf[280]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[281];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[282];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10415(2,av2);}}}

/* chicken.load#file-exists? in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void f_10499(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_10499,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10506,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1216: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k10504 in chicken.load#file-exists? in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10506,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#find-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10508(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_10508,c,av);}
a=C_alloc(8);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t3))){
t4=C_a_i_list1(&a,1,t3);
/* eval.scm:1221: find-file */
t5=*((C_word*)lf[288]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10537,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10549,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1222: scheme#string-append */
t6=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
av2[3]=lf[289];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}}

/* k10535 in chicken.load#find-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10537,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1223: find-file */
t2=*((C_word*)lf[288]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_u_i_cdr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k10547 in chicken.load#find-file in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10549,c,av);}
/* eval.scm:1222: file-exists? */
f_10499(((C_word*)t0)[2],t1);}

/* chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10555(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10555,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10559,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1228: chicken.platform#repository-path */
t5=*((C_word*)lf[296]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10559,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10562,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* eval.scm:1229: scheme#symbol->string */
t3=*((C_word*)lf[295]+1);{
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
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
f_10562(2,av2);}}}

/* k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10562(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_10562,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10564,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li212),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10607,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(*((C_word*)lf[286]+1))?lf[292]:C_SCHEME_END_OF_LIST);
t5=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_SCHEME_END_OF_LIST);
t6=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[293]+1):C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[286]+1))){
/* eval.scm:1237: ##sys#append */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}
else{
/* eval.scm:1237: ##sys#append */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=lf[294];
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}

/* check in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void f_10564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_10564,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10568,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1231: string-append */
t4=*((C_word*)lf[211]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[291];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k10566 in check in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10568,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10571,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_i_not(*((C_word*)lf[216]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10593,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1234: chicken.platform#feature? */
t4=*((C_word*)lf[261]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[262];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10571(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10571(2,av2);}}}

/* k10569 in k10566 in check in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10571,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1236: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[198];
tp(4,av2);}}}

/* k10579 in k10569 in k10566 in check in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10581,c,av);}
/* eval.scm:1236: file-exists? */
f_10499(((C_word*)t0)[2],t1);}

/* k10591 in k10566 in check in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10593,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1235: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[201]+1);
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10571(2,av2);}}}

/* k10598 in k10591 in k10566 in check in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_10600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10600,c,av);}
/* eval.scm:1235: file-exists? */
f_10499(((C_word*)t0)[2],t1);}

/* k10605 in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10607(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10607,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10609,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li213),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10609(t5,((C_word*)t0)[3],t1);}

/* loop in k10605 in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void f_10609(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10609,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10622,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1244: check */
t5=((C_word*)t0)[3];
f_10564(t5,t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10620 in loop in k10605 in k10560 in k10557 in chicken.load#find-dynamic-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10622,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1245: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10609(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10656(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10656,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10697,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10665,a[2]=t5,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1248: ##sys#provided? */
t7=*((C_word*)lf[204]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k10663 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10665,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_10697(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],C_SCHEME_TRUE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1250: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1252: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10697(2,av2);}}}}}

/* k10679 in k10663 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10681,c,av);}
/* eval.scm:1250: ##sys#provided? */
t2=*((C_word*)lf[204]+1);{
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

/* k10692 in k10663 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10694,c,av);}
/* eval.scm:1252: ##sys#provided? */
t2=*((C_word*)lf[204]+1);{
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

/* k10695 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_10697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10697,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(((C_word*)t0)[3],lf[194]))){
/* eval.scm:1258: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[272]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[272]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10709,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1259: find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[290]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[290]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}}

/* k10707 in k10695 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10709,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10713,a[2]=((C_word*)t0)[2],a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1257: g2627 */
t3=t2;
f_10713(t3,((C_word*)t0)[3],t1);}
else{
/* eval.scm:1265: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[297];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* g2627 in k10707 in k10695 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void f_10713(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,4)))){
C_save_and_reclaim_args((void *)trf_10713,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10717,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1261: load/internal */
t4=lf[235];
f_9776(t4,t3,t2,C_SCHEME_FALSE,C_a_i_list(&a,5,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k10715 in g2627 in k10707 in k10695 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_10717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10717,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1262: ##sys#provide */
t3=*((C_word*)lf[102]+1);{
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

/* k10718 in k10715 in g2627 in k10707 in k10695 in chicken.load#load-extension in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_10720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10720,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#require in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10728,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10770,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10770(t2)
);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10747,a[2]=t6,a[3]=((C_word)li218),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10747(t8,t1,t2);}

/* for-each-loop2646 in chicken.load#require in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void f_10747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_10747,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10757,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[115]+1);
/* eval.scm:1269: g2677 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[115]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[299];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10755 in for-each-loop2646 in chicken.load#require in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10757,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10747(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2636 in chicken.load#require in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static C_word f_10770(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[299]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provide in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10793,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10835,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10835(t2)
);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10812,a[2]=t6,a[3]=((C_word)li221),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10812(t8,t1,t2);}

/* for-each-loop2699 in chicken.load#provide in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void f_10812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10812,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10822,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[102]+1);
/* eval.scm:1273: g2730 */
t6=*((C_word*)lf[102]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10820 in for-each-loop2699 in chicken.load#provide in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10822,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10812(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2689 in chicken.load#provide in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static C_word f_10835(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[301]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provided? in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_10858,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10872,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10872(t2)
);
t5=*((C_word*)lf[204]+1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8630,a[2]=t7,a[3]=t5,a[4]=((C_word)li224),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8630(t9,t1,t2);}

/* for-each-loop2742 in chicken.load#provided? in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static C_word f_10872(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[303]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* ##sys#process-require in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10899(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_10899,c,av);}
a=C_alloc(30);
t5=C_eqp(t2,t3);
t6=(C_truep(t5)?t5:t3);
t7=C_i_assq(t2,lf[192]);
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_cdr(t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t2,lf[194]))){
if(C_truep(t4)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,2,lf[149],t2);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_a_i_list(&a,2,lf[32],t2);
t9=C_a_i_list(&a,2,lf[32],C_SCHEME_FALSE);
t10=C_a_i_list(&a,2,lf[32],C_SCHEME_FALSE);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,4,lf[272],t8,t9,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t8=C_eqp(t4,lf[304]);
if(C_truep(t8)){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,2,lf[149],t2);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_a_i_list(&a,2,lf[32],t2);
t10=C_a_i_list(&a,2,lf[32],t6);
t11=C_a_i_list(&a,2,lf[32],C_SCHEME_FALSE);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,4,lf[115],t9,t10,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}}}

/* ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_10968(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10968,c,av);}
a=C_alloc(23);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10971,a[2]=t7,a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11004,a[2]=t3,a[3]=t7,a[4]=((C_word)li228),tmp=(C_word)a,a+=5,tmp));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11043,a[2]=t1,a[3]=t9,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11097,a[2]=t9,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1326: make-relative-pathname */
f_9613(t13,t5,t2);}

/* test-extensions in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void f_10971(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10971,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10984,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1312: file-exists? */
f_10499(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10987,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1313: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_i_car(t3);
tp(4,av2);}}}

/* k10982 in test-extensions in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10984,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10985 in test-extensions in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_10987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10987,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1314: file-exists? */
f_10499(t2,t1);}

/* k10988 in k10985 in test-extensions in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_10990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10990,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1315: test-extensions */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10971(t2,((C_word*)t0)[2],((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}}

/* test in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void f_11004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11004,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* eval.scm:1317: test-extensions */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10971(t3,t1,t2,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11040,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1320: chicken.platform#feature? */
t4=*((C_word*)lf[261]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[262];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k11038 in test in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11040,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,lf[198]);
/* eval.scm:1317: test-extensions */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10971(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t2=C_i_not(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_a_i_list2(&a,2,*((C_word*)lf[201]+1),lf[198]):C_a_i_list2(&a,2,lf[198],*((C_word*)lf[201]+1)));
/* eval.scm:1317: test-extensions */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10971(t4,((C_word*)t0)[3],((C_word*)t0)[4],t3);}}

/* k11041 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11043,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11090,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1330: chicken.platform#repository-path */
t4=*((C_word*)lf[296]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=*((C_word*)lf[293]+1);
f_11053(2,av2);}}}}

/* k11051 in k11041 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11053,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11055,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li229),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_11055(t5,((C_word*)t0)[4],t1);}

/* loop in k11051 in k11041 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void f_11055(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11055,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11065,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11079,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1333: string-append */
t6=*((C_word*)lf[211]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[305];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k11063 in loop in k11051 in k11041 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11065,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1336: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_11055(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k11077 in loop in k11051 in k11041 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11079,c,av);}
/* eval.scm:1333: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11004(t2,((C_word*)t0)[3],t1);}

/* k11088 in k11041 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11090,c,av);}
if(C_truep(t1)){
/* eval.scm:1328: ##sys#append */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[293]+1);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* eval.scm:1328: ##sys#append */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[293]+1);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k11095 in ##sys#resolve-include-filename in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11097,c,av);}
/* eval.scm:1326: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11004(t2,((C_word*)t0)[3],t1);}

/* run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void f_11100(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_11100,2,t1,t2);}
a=C_alloc(7);
t3=lf[306] /* last-error */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11105,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11110,a[2]=t2,a[3]=((C_word)li237),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: scheme#call-with-current-continuation */
t6=*((C_word*)lf[310]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11103 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11105,c,av);}
/* eval.scm:1355: g2911 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11110,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11116,a[2]=t2,a[3]=((C_word)li232),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11135,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li236),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1357: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[309]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a11115 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11116(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11116,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11122,a[2]=t2,a[3]=((C_word)li231),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: k2908 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11121 in a11115 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11122,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11126,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1358: scheme#open-output-string */
t3=*((C_word*)lf[17]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11124 in a11121 in a11115 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11126,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11129,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1359: chicken.condition#print-error-message */
t3=*((C_word*)lf[308]+1);{
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

/* k11127 in k11124 in a11121 in a11115 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_11129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11129,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1360: scheme#get-output-string */
t3=*((C_word*)lf[15]+1);{
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

/* k11131 in k11127 in k11124 in a11121 in a11115 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_11133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11133,c,av);}
t2=C_mutate(&lf[306] /* (set! last-error ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11134 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11135,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11141,a[2]=((C_word*)t0)[2],a[3]=((C_word)li233),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11147,a[2]=((C_word*)t0)[3],a[3]=((C_word)li235),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a11140 in a11134 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11141,c,av);}
/* eval.scm:1362: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a11146 in a11134 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_11147,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11153,a[2]=t2,a[3]=((C_word)li234),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: k2908 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11152 in a11146 in a11134 in a11109 in run-safe in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11153,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* store-result in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void f_11159(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11159,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11163,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1369: ##sys#gc */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[312]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[312]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}

/* k11161 in store-result in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11163,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_store_result(((C_word*)t0)[3],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* CHICKEN_yield in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11168,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11174,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1375: run-safe */
f_11100(t1,t2);}

/* a11173 in CHICKEN_yield in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11174,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11178,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1375: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[314]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[314]+1);
av2[1]=t2;
tp(2,av2);}}

/* k11176 in a11173 in CHICKEN_yield in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11178,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_eval in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11180(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11180,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11186,a[2]=t3,a[3]=t2,a[4]=((C_word)li242),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1378: run-safe */
f_11100(t1,t4);}

/* a11185 in CHICKEN_eval in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11186,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11194,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1380: scheme#eval */
t3=*((C_word*)lf[163]+1);{
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

/* k11192 in a11185 in CHICKEN_eval in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11194,c,av);}
/* eval.scm:1380: store-result */
f_11159(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_eval_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11196(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11196,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11200,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1382: ##sys#peek-c-string */
t5=*((C_word*)lf[247]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11198 in CHICKEN_eval_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11200,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11205,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li244),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1383: run-safe */
f_11100(((C_word*)t0)[3],t2);}

/* a11204 in k11198 in CHICKEN_eval_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11205,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11209,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1385: scheme#open-input-string */
t3=*((C_word*)lf[318]+1);{
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

/* k11207 in a11204 in k11198 in CHICKEN_eval_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11209,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11220,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1386: scheme#read */
t4=*((C_word*)lf[317]+1);{
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

/* k11214 in k11207 in a11204 in k11198 in CHICKEN_eval_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11216,c,av);}
/* eval.scm:1386: store-result */
f_11159(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k11218 in k11207 in a11204 in k11198 in CHICKEN_eval_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11220,c,av);}
/* eval.scm:1386: scheme#eval */
t2=*((C_word*)lf[163]+1);{
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

/* store-string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static C_word f_11222(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_slot(t1,C_fix(0));
t5=C_block_size(t4);
t6=C_fixnum_difference(t5,C_fix(1));
if(C_truep(C_fixnum_greater_or_equal_p(t6,t2))){
t7=C_mutate(&lf[306] /* (set! last-error ...) */,lf[320]);
return(C_SCHEME_FALSE);}
else{
return(C_copy_result_string(t4,t3,t6));}}

/* CHICKEN_eval_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11242(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11242,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11248,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li247),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1403: run-safe */
f_11100(t1,t5);}

/* a11247 in CHICKEN_eval_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11248,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11252,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1405: scheme#open-output-string */
t3=*((C_word*)lf[17]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11250 in a11247 in CHICKEN_eval_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11252,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11266,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1406: scheme#eval */
t4=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11253 in k11250 in a11247 in CHICKEN_eval_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11255,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1407: scheme#get-output-string */
t3=*((C_word*)lf[15]+1);{
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

/* k11260 in k11253 in k11250 in a11247 in CHICKEN_eval_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11262,c,av);}
/* eval.scm:1407: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1407: store-string */
  f_11222(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11264 in k11250 in a11247 in CHICKEN_eval_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11266,c,av);}
/* eval.scm:1406: scheme#write */
t2=*((C_word*)lf[16]+1);{
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

/* CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11268(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11268,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11272,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1409: ##sys#peek-c-string */
t6=*((C_word*)lf[247]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11272,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word)li249),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1412: run-safe */
f_11100(((C_word*)t0)[4],t2);}

/* a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11277,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11281,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1414: scheme#open-output-string */
t3=*((C_word*)lf[17]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11279 in a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11281(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11281,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11295,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11299,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11303,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1415: scheme#open-input-string */
t6=*((C_word*)lf[318]+1);{
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

/* k11282 in k11279 in a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11284,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1416: scheme#get-output-string */
t3=*((C_word*)lf[15]+1);{
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

/* k11289 in k11282 in k11279 in a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_11291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11291,c,av);}
/* eval.scm:1416: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1416: store-string */
  f_11222(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11293 in k11279 in a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11295,c,av);}
/* eval.scm:1415: scheme#write */
t2=*((C_word*)lf[16]+1);{
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

/* k11297 in k11279 in a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11299,c,av);}
/* eval.scm:1415: scheme#eval */
t2=*((C_word*)lf[163]+1);{
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

/* k11301 in k11279 in a11276 in k11270 in CHICKEN_eval_string_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11303,c,av);}
/* eval.scm:1415: scheme#read */
t2=*((C_word*)lf[317]+1);{
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

/* CHICKEN_apply in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11305(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11305,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11311,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=((C_word)li251),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1421: run-safe */
f_11100(t1,t5);}

/* a11310 in CHICKEN_apply in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11311,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11319,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k11317 in a11310 in CHICKEN_apply in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11319,c,av);}
/* eval.scm:1421: store-result */
f_11159(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_apply_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11321(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11321,c,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11327,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t3,a[6]=((C_word)li253),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1426: run-safe */
f_11100(t1,t6);}

/* a11326 in CHICKEN_apply_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11327,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11331,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1428: scheme#open-output-string */
t3=*((C_word*)lf[17]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11329 in a11326 in CHICKEN_apply_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11331,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11345,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
C_apply(4,av2);}}

/* k11332 in k11329 in a11326 in CHICKEN_apply_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11334,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1430: scheme#get-output-string */
t3=*((C_word*)lf[15]+1);{
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

/* k11339 in k11332 in k11329 in a11326 in CHICKEN_apply_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11341,c,av);}
/* eval.scm:1430: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1430: store-string */
  f_11222(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11343 in k11329 in a11326 in CHICKEN_apply_to_string in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11345,c,av);}
/* eval.scm:1429: scheme#write */
t2=*((C_word*)lf[16]+1);{
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

/* CHICKEN_read in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11347(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11347,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11351,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1432: ##sys#peek-c-string */
t5=*((C_word*)lf[247]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11349 in CHICKEN_read in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11351,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11356,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li255),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1433: run-safe */
f_11100(((C_word*)t0)[3],t2);}

/* a11355 in k11349 in CHICKEN_read in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11356,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11360,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1435: scheme#open-input-string */
t3=*((C_word*)lf[318]+1);{
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

/* k11358 in a11355 in k11349 in CHICKEN_read in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11360,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1436: scheme#read */
t3=*((C_word*)lf[317]+1);{
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

/* k11365 in k11358 in a11355 in k11349 in CHICKEN_read in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_11367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11367,c,av);}
/* eval.scm:1436: store-result */
f_11159(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_load in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11369(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11369,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11373,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1438: ##sys#peek-c-string */
t4=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11371 in CHICKEN_load in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_11373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11373,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11378,a[2]=t1,a[3]=((C_word)li257),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1439: run-safe */
f_11100(((C_word*)t0)[2],t2);}

/* a11377 in k11371 in CHICKEN_load in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_11378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11378,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11382,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1439: scheme#load */
t3=*((C_word*)lf[264]+1);{
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

/* k11380 in a11377 in k11371 in CHICKEN_load in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_11382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11382,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_get_error_message in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11384(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11384,c,av);}
t4=lf[306];
if(C_truep(lf[306])){
t5=lf[306];
t6=lf[306];
/* eval.scm:1442: store-string */
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
/* eval.scm:1442: store-string */
  f_11222(lf[306],t3,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* eval.scm:1442: store-string */
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
/* eval.scm:1442: store-string */
  f_11222(lf[328],t3,t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11397 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_11399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11399,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11401,a[2]=((C_word)li260),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1156: scheme#make-parameter */
t3=*((C_word*)lf[329]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a11400 in k11397 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11401,c,av);}
t3=C_i_check_list(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop2475 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void f_11407(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11407,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1157: g2481 */
t4=((C_word*)t0)[4];
f_10278(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11430 in map-loop2475 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_11432(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11432,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11407(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11444 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_11446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11446,c,av);}
/* eval.scm:1149: scheme#string-append */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[200];
av2[3]=lf[330];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11456 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11458,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_9563(t2,C_a_i_list(&a,1,t1));}

/* k11460 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11462,c,av);}
/* eval.scm:974: scheme#string-append */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[334];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k11487 in k11491 in k11495 in k11499 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11489,c,av);}
t2=C_eqp(t1,lf[341]);
t3=((C_word*)t0)[2];
f_9543(t3,(C_truep(t2)?lf[342]:lf[196]));}

/* k11491 in k11495 in k11499 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11493,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[340]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:962: chicken.platform#machine-type */
t4=*((C_word*)lf[343]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
f_9543(t3,lf[196]);}}

/* k11495 in k11499 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11497,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[338]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9543(t3,lf[339]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:961: chicken.platform#software-version */
t4=*((C_word*)lf[335]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11499 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11501,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[336]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9543(t3,lf[337]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:960: chicken.platform#software-version */
t4=*((C_word*)lf[335]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11505(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_11505,c,av);}
a=C_alloc(21);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=C_mutate((C_word*)lf[185]+1 /* (set! scheme#scheme-report-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li167),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate((C_word*)lf[188]+1 /* (set! scheme#null-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8227,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word)li168),tmp=(C_word)a,a+=5,tmp));
t5=C_a_i_provide(&a,1,lf[191]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8253,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t6;
C_eval_toplevel(2,av2);}}

/* k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11513,c,av);}
a=C_alloc(7);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11505,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:882: strip */
f_8144(t3,C_slot(((C_word*)t0)[3],C_fix(3)));}

/* k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11521,c,av);}
a=C_alloc(8);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11513,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:881: strip */
f_8144(t3,C_slot(((C_word*)t0)[3],C_fix(3)));}

/* k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11529,c,av);}
a=C_alloc(8);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11521,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:880: strip */
f_8144(t3,C_slot(((C_word*)t0)[3],C_fix(3)));}

/* a11534 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11535(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11535,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11539,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:846: ##sys#print */
t5=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[355];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11537 in a11534 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11539,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:847: ##sys#print */
t3=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[4],C_fix(1));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11540 in k11537 in a11534 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11542,c,av);}
/* eval.scm:848: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[353]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[353]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11551(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_11551,c,av);}
a=C_alloc(14);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11557,a[2]=t5,a[3]=t3,a[4]=((C_word)li263),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11578,a[2]=t5,a[3]=t3,a[4]=((C_word)li267),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:800: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_values(4,av2);}}

/* a11556 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11557(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11557,c,av);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11561,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11576,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:803: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}
else{
t6=t5;
f_11561(t6,C_SCHEME_UNDEFINED);}}

/* k11559 in a11556 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_11561(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11561,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:804: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[357]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[357]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k11562 in k11559 in a11556 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11564,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11574 in a11556 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11576,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_11561(t5,t4);}

/* a11577 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11578(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_11578,c,av);}
a=C_alloc(15);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11584,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word)li264),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11589,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li266),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:809: scheme#dynamic-wind */
t8=*((C_word*)lf[160]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t6;
av2[3]=t2;
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* a11583 in a11577 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11584,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a11588 in a11577 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_11589,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11596,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word)li265),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11596(t6,t2);}

/* k11591 in a11588 in a11577 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11593,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop1560 in a11588 in a11577 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_11596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_11596,2,t0,t1);}
a=C_alloc(5);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[357]+1);
av2[3]=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
C_apply(4,av2);}}}

/* k11604 in doloop1560 in a11588 in a11577 in a11550 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11606,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_11596(t4,((C_word*)t0)[4]);}

/* a11618 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11619(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11619,c,av);}
t4=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#put/restore! ...) */,t2);
t5=C_mutate((C_word*)lf[106]+1 /* (set! ##sys#with-property-restore ...) */,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11624(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11624,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11631,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:762: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}

/* k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11631(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_11631,c,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11727,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[179],*((C_word*)lf[358]+1));
t5=C_a_i_cons(&a,2,lf[178],*((C_word*)lf[359]+1));
t6=C_a_i_list(&a,3,lf[23],t4,t5);
/* eval.scm:768: compile-to-closure */
f_3620(t3,t6,C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_11634(2,av2);}}}

/* k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11634(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_11634,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[168],lf[0]);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=C_slot(((C_word*)t0)[2],C_fix(3));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11649,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t6=*((C_word*)lf[98]+1);
t7=*((C_word*)lf[9]+1);
t8=t4;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=t3;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_TRUE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11657,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t7,a[6]=t6,a[7]=((C_word)li270),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li271),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11697,a[2]=t9,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li272),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:777: ##sys#dynamic-wind */
t17=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t5;
av2[2]=t14;
av2[3]=t15;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}
else{
/* eval.scm:780: compile-to-closure */
f_3620(t5,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_TRUE));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11718,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:783: compile-to-closure */
f_3620(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}}

/* k11647 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11649,c,av);}
/* eval.scm:774: g1508 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11657,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:777: ##sys#macro-environment1511 */
t3=((C_word*)t0)[6];{
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
f_11661(2,av2);}}}

/* k11659 in a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11661,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:777: ##sys#current-environment1512 */
t3=((C_word*)t0)[6];{
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
f_11664(2,av2);}}}

/* k11662 in k11659 in a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11664,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:777: ##sys#macro-environment1511 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11666 in k11662 in k11659 in a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11668,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11672,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:777: ##sys#current-environment1512 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k11670 in k11666 in k11662 in k11659 in a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11672,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11675,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:777: ##sys#macro-environment1511 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k11673 in k11670 in k11666 in k11662 in k11659 in a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11675,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:777: ##sys#current-environment1512 */
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

/* k11676 in k11673 in k11670 in k11666 in k11662 in k11659 in a11656 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11678,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11686 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11687,c,av);}
a=C_alloc(12);
t2=C_slot(((C_word*)t0)[2],C_fix(4));
/* eval.scm:779: compile-to-closure */
f_3620(t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],t2,C_SCHEME_TRUE));}

/* a11696 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11697,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:777: ##sys#macro-environment1511 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11699 in a11696 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11701,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11704,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:777: ##sys#current-environment1512 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11702 in k11699 in a11696 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11704,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:777: ##sys#macro-environment1511 */
t3=((C_word*)t0)[7];{
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

/* k11705 in k11702 in k11699 in a11696 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_11707,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:777: ##sys#current-environment1512 */
t3=((C_word*)t0)[7];{
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

/* k11708 in k11705 in k11702 in k11699 in a11696 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11710,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11716 in k11632 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11718,c,av);}
/* eval.scm:772: g1540 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k11725 in k11629 in a11623 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_11727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11727,c,av);}
/* eval.scm:767: g1501 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k3563 */
static void C_ccall f_3565(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3565,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k3566 in k3563 */
static void C_ccall f_3568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3568,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3569 in k3566 in k3563 */
static void C_ccall f_3571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3571,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3574,c,av);}
a=C_alloc(3);
t2=C_set_block_item(lf[2] /* ##sys#unbound-in-eval */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:82: scheme#make-parameter */
t4=*((C_word*)lf[329]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a3581 in decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3582,c,av);}
t3=C_immp(t2);
t4=C_i_not(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?C_lambdainfop(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a3594 in decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3595(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3595,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3603,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3607,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:76: scheme#open-output-string */
t6=*((C_word*)lf[17]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3601 in a3594 in decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3603,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3605 in a3594 in decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3607,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:77: scheme#write */
t3=*((C_word*)lf[16]+1);{
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

/* k3608 in k3605 in a3594 in decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3610,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:78: scheme#get-output-string */
t3=*((C_word*)lf[15]+1);{
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

/* k3611 in k3608 in k3605 in a3594 in decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3613,c,av);}
/* eval.scm:75: ##sys#make-lambda-info */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3618(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3618,c,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#eval-debug-level ...) */,t1);
t3=C_mutate(&lf[4] /* (set! chicken.eval#compile-to-closure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[78]+1 /* (set! ##sys#eval/meta ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7907,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11624,a[2]=((C_word)li273),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:760: scheme#make-parameter */
t7=*((C_word*)lf[329]+1);{
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

/* chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3620(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(68,0,8)))){
C_save_and_reclaim_args((void *)trf_3620,4,t1,t2,t3,t4);}
a=C_alloc(68);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3647,a[2]=t22,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t40=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3682,a[2]=t22,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3716,a[2]=t24,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3805,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3819,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3836,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=t36,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t46=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3933,a[2]=t26,a[3]=t14,a[4]=t36,a[5]=t10,a[6]=t32,a[7]=t24,a[8]=t34,a[9]=t38,a[10]=t30,a[11]=((C_word)li138),tmp=(C_word)a,a+=12,tmp));
t47=C_set_block_item(t38,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7508,a[2]=t28,a[3]=t36,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp));
t48=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7857,a[2]=t36,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t6,a[7]=t18,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:734: ##sys#eval-debug-level */
t49=*((C_word*)lf[3]+1);{
C_word av2[2];
av2[0]=t49;
av2[1]=t48;
((C_proc)(void*)(*((C_word*)t49+1)))(2,av2);}}

/* find-id in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3647(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3647,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3660,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_caar(t3);
t6=C_eqp(t2,t5);
if(C_truep(t6)){
t7=C_u_i_car(t3);
t8=t4;
f_3660(t8,C_i_symbolp(C_u_i_cdr(t7)));}
else{
t7=t4;
f_3660(t7,C_SCHEME_FALSE);}}}

/* k3658 in find-id in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3660(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3660,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_u_i_cdr(C_u_i_car(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:94: find-id */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3647(t2,((C_word*)t0)[2],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}

/* rename in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3682(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3682,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3686,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:97: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k3684 in rename in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3686,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3694,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3700,a[2]=((C_word*)t0)[3],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:97: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}}

/* a3693 in k3684 in rename in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3694,c,av);}
/* eval.scm:98: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[6];
tp(4,av2);}}

/* a3699 in k3684 in rename in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3700,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3707,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[8]+1);
av2[3]=t2;
C_apply(4,av2);}}

/* k3705 in a3699 in k3684 in rename in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3707,c,av);}
if(C_truep(t1)){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[7]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3712 in rename in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3714,c,av);}
/* eval.scm:97: find-id */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3647(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* lookup in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3716(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3716,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3720,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:102: rename */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3682(t5,t4,t2);}

/* k3718 in lookup in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3720(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3720,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3728,a[2]=t1,a[3]=t3,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3728(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop in k3718 in lookup in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3728(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3728,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
/* eval.scm:105: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[2];
C_values(4,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t6=(
  f_3775(t5,t4,C_fix(0))
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3745,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:105: g261 */
t8=t7;
f_3745(t8,t1,t6);}
else{
/* eval.scm:107: loop */
t9=t1;
t10=C_slot(t2,C_fix(1));
t11=C_fixnum_plus(t3,C_fix(1));
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* g261 in loop in k3718 in lookup in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3745(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3745,3,t0,t1,t2);}
/* eval.scm:106: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
C_values(4,av2);}}

/* loop in loop in k3718 in lookup in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static C_word f_3775(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t6=C_slot(t1,C_fix(1));
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}}

/* emit-trace-info in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static C_word f_3805(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
if(C_truep(t1)){
t7=C_a_i_record4(&a,4,lf[10],t4,t5,t6);
return(C_emit_trace_info(t2,t3,t7,C_slot(*((C_word*)lf[11]+1),C_fix(14))));}
else{
t7=C_SCHEME_UNDEFINED;
return(t7);}}

/* emit-syntax-trace-info in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3819(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3819,4,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(t2)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3827,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:126: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3825 in emit-syntax-trace-info in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3827,c,av);}
t2=(C_truep(t1)?t1:lf[12]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_emit_trace_info(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_slot(*((C_word*)lf[11]+1),C_fix(14)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* decorate in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3836(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3836,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=t3,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:69: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* f_3844 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3844(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3844,c,av);}
a=C_alloc(10);
t4=C_eqp(t2,t3);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3851,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3854,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:137: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3849 */
static void C_ccall f_3851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3851,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3852 */
static void C_ccall f_3854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3854,c,av);}
if(C_truep(t1)){
if(C_truep(t1)){
/* eval.scm:138: ##sys#update-line-number-database! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
if(C_truep(((C_word*)t0)[5])){
/* eval.scm:138: ##sys#update-line-number-database! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_3869,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(9);
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t2,a[8]=((C_word)li16),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:142: ##sys#include-forms-from-file */
t11=*((C_word*)lf[24]+1);{
C_word av2[6];
av2[0]=t11;
av2[1]=t1;
av2[2]=t8;
av2[3]=t9;
av2[4]=t3;
av2[5]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(6,av2);}}

/* a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3883(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3883,c,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3887,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=C_i_cdddr(((C_word*)t0)[7]);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3916,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:147: scheme#append */
t7=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=C_i_cadddr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[23],t2);
f_3887(2,av2);}}}

/* k3885 in a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3887(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_3887,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3892,a[2]=t5,a[3]=t3,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3897,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li14),tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3903,a[2]=t3,a[3]=t5,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:150: ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a3891 in k3885 in a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3892,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a3896 in k3885 in a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3897,c,av);}
/* eval.scm:151: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* a3902 in k3885 in a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3903,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3914 in a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3916,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3920,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:148: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k3918 in k3914 in a3882 in include-file in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3920,c,av);}
/* eval.scm:146: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3933(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_3933,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(18);
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3940,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=t5,a[11]=t7,a[12]=((C_word*)t0)[5],a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[10],tmp=(C_word)a,a+=18,tmp);
/* eval.scm:154: chicken.keyword#keyword? */
t9=*((C_word*)lf[155]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3940(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3940,c,av);}
a=C_alloc(22);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3953,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:156: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[2]))){
switch(((C_word*)t0)[2]){
case C_fix(-1):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4167,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4175,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4183,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4191,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[2],a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4214,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=C_charp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_4224(2,av2);}}
else{
t4=C_eofp(((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4224(2,av2);}}
else{
t5=C_bwpp(((C_word*)t0)[2]);
if(C_truep(t5)){
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_4224(2,av2);}}
else{
t6=C_i_stringp(((C_word*)t0)[2]);
if(C_truep(t6)){
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_4224(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7407,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:210: chicken.bytevector#bytevector? */
t8=*((C_word*)lf[154]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}}}}}}}

/* f_3941 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3941,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3952 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3953,c,av);}
/* eval.scm:156: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3716(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3959(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3959,c,av);}
a=C_alloc(12);
if(C_truep(C_i_not(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3969,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_symbolp(t3);
if(C_truep(C_i_not(t5))){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
f_3969(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:159: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
tp(2,av2);}}}
else{
switch(t2){
case C_fix(0):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4063,a[2]=t3,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(1):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4078,a[2]=t3,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_fix(2):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4097,a[2]=t3,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(3):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4120,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
default:
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4141,a[2]=t2,a[3]=t3,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3969(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3969,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3972,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3999,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t4=C_i_not(t1);
if(C_truep(t4)){
t5=t3;
f_3999(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4020,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:166: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t5;
av2[2]=t1;
tp(3,av2);}}}
else{
t4=t3;
f_3999(t4,C_SCHEME_FALSE);}}

/* k3970 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3972,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[4],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:172: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* f_3979 in k3970 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3979,c,av);}
/* eval.scm:171: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[26];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3987 in k3970 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3989,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[2],a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3995,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_3990 in k3987 in k3970 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3990,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3995 in k3987 in k3970 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3995,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fast_retrieve(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3997 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_3999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_3999,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[2]+1));
t4=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#unbound-in-eval ...) */,t3);
t5=((C_word*)t0)[4];
f_3972(t5,t4);}
else{
t2=((C_word*)t0)[4];
f_3972(t2,C_SCHEME_UNDEFINED);}}

/* k4018 in k3967 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4020,c,av);}
t2=((C_word*)t0)[2];
f_3999(t2,C_i_not(t1));}

/* k4050 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4052,c,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
f_3969(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
/* eval.scm:161: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
tp(5,av2);}}
else{
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[4]);
t3=C_i_not(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?((C_word*)t0)[4]:C_SCHEME_FALSE);
f_3969(2,av2);}}}}

/* f_4063 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4063,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(C_slot(t2,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4078 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4078,c,av);}
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(C_slot(t3,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4097 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4097,c,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_slot(C_slot(t4,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4120 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4120(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4120,c,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_slot(C_slot(t5,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* f_4141 in a3958 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4141,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(C_u_i_list_ref(t2,((C_word*)t0)[2]),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4167 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4167,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4175 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4175,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4183 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4183,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4191 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4191,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4193 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4193,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4212 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4212,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4214 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4214,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_4224,c,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[2],a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_pairp(((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
/* eval.scm:215: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[30];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(0));
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* eval.scm:217: emit-syntax-trace-info */
f_3819(t4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7371,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:670: emit-syntax-trace-info */
f_3819(t4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8]);}}}}

/* f_4225 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4225,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_4244,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* eval.scm:218: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4247(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,4)))){
C_save_and_reclaim((void *)f_4247,c,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=t1,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7350,a[2]=t6,a[3]=t4,a[4]=((C_word)li135),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[2],a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7365,a[2]=t4,a[3]=t6,a[4]=((C_word)li137),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:219: ##sys#dynamic-wind */
t11=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,7)))){
C_save_and_reclaim((void *)f_4253,c,av);}
a=C_alloc(17);
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
/* eval.scm:224: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3933(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* eval.scm:225: rename */
t4=((C_word*)((C_word*)t0)[14])[1];
f_3682(t4,t3,C_slot(((C_word*)t0)[2],C_fix(0)));}}

/* k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4268(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,7)))){
C_save_and_reclaim((void *)f_4268,c,av);}
a=C_alloc(25);
t2=C_eqp(t1,lf[32]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:231: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[34]);
if(C_truep(t3)){
t4=C_i_cadr(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4363,a[2]=t4,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_eqp(t1,lf[35]);
if(C_truep(t4)){
/* eval.scm:247: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3933(t5,((C_word*)t0)[2],C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t5=C_eqp(t1,lf[36]);
if(C_truep(t5)){
/* eval.scm:250: compile */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3933(t6,((C_word*)t0)[2],C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t6=C_eqp(t1,lf[37]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4397,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t1,lf[38]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:255: compile */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3933(t9,t8,C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t8=C_eqp(t1,lf[23]);
if(C_truep(t8)){
t9=C_slot(((C_word*)t0)[3],C_fix(1));
t10=C_i_length(t9);
switch(t10){
case C_fix(0):
/* eval.scm:266: compile */
t11=((C_word*)((C_word*)t0)[4])[1];
f_3933(t11,((C_word*)t0)[2],lf[40],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
case C_fix(1):
/* eval.scm:267: compile */
t11=((C_word*)((C_word*)t0)[4])[1];
f_3933(t11,((C_word*)t0)[2],C_slot(t9,C_fix(0)),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
case C_fix(2):
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t9,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:268: compile */
t12=((C_word*)((C_word*)t0)[4])[1];
f_3933(t12,t11,C_slot(t9,C_fix(0)),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
default:
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:272: compile */
t12=((C_word*)((C_word*)t0)[4])[1];
f_3933(t12,t11,C_slot(t9,C_fix(0)),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}}
else{
t9=C_eqp(t1,lf[41]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[9])){
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_4569(2,av2);}}
else{
/* eval.scm:279: ##sys#error */
t11=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[46];
av2[3]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}
else{
t10=C_eqp(t1,lf[47]);
if(C_truep(t10)){
t11=C_i_cadr(((C_word*)t0)[3]);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[10],a[3]=t11,a[4]=((C_word*)t0)[5],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=t11,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],a[10]=((C_word)li56),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:286: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t12;
av2[3]=t13;
C_call_with_values(4,av2);}}
else{
t11=C_eqp(t1,lf[52]);
if(C_truep(t11)){
t12=C_i_cadr(((C_word*)t0)[3]);
t13=C_i_length(t12);
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[5],a[3]=t13,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t12,a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5154,a[2]=t16,a[3]=t20,a[4]=t17,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_5154(t22,t18,t12);}
else{
t12=C_eqp(t1,lf[59]);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t0)[3]);
t14=C_u_i_cdr(((C_word*)t0)[3]);
t15=C_u_i_cdr(t14);
t16=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t17=t16;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=((C_word*)t18)[1];
t20=C_i_check_list_2(t13,lf[53]);
t21=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5227,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t15,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5299,a[2]=t18,a[3]=t23,a[4]=t19,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_5299(t25,t21,t13);}
else{
t13=C_eqp(t1,lf[62]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[3]);
t15=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t16=t15;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)t17)[1];
t19=C_i_check_list_2(t14,lf[53]);
t20=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t14,tmp=(C_word)a,a+=10,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5605,a[2]=t17,a[3]=t22,a[4]=t18,a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_5605(t24,t20,t14);}
else{
t14=C_eqp(t1,lf[64]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5646,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6089,a[2]=t15,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:389: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t16;
tp(2,av2);}}
else{
t15=C_eqp(t1,lf[76]);
if(C_truep(t15)){
t16=*((C_word*)lf[9]+1);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6098,a[2]=t16,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t18=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t19=t18;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=((C_word*)t20)[1];
t22=C_i_cadr(((C_word*)t0)[3]);
t23=C_i_check_list_2(t22,lf[53]);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6190,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6196,a[2]=t20,a[3]=t26,a[4]=t21,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t28=((C_word*)t26)[1];
f_6196(t28,t24,t22);}
else{
t16=C_eqp(t1,lf[79]);
if(C_truep(t16)){
t17=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t18=t17;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=((C_word*)t19)[1];
t21=C_i_cadr(((C_word*)t0)[3]);
t22=C_i_check_list_2(t21,lf[53]);
t23=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6368,a[2]=t19,a[3]=t25,a[4]=t20,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t27=((C_word*)t25)[1];
f_6368(t27,t23,t21);}
else{
t17=C_eqp(t1,lf[81]);
if(C_truep(t17)){
t18=C_i_cadr(((C_word*)t0)[3]);
t19=C_i_caddr(((C_word*)t0)[3]);
t20=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6415,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t19,a[8]=((C_word*)t0)[11],a[9]=t18,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:521: rename */
t21=((C_word*)((C_word*)t0)[14])[1];
f_3682(t21,t20,t18);}
else{
t18=C_eqp(t1,lf[88]);
if(C_truep(t18)){
/* eval.scm:535: compile */
t19=((C_word*)((C_word*)t0)[4])[1];
f_3933(t19,((C_word*)t0)[2],lf[89],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t19=C_eqp(t1,lf[90]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6481,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t21=C_i_cddr(((C_word*)t0)[3]);
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6489,a[2]=t20,a[3]=t21,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:539: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t22;
tp(2,av2);}}
else{
t20=C_eqp(t1,lf[91]);
if(C_truep(t20)){
/* eval.scm:543: include-file */
t21=((C_word*)((C_word*)t0)[15])[1];
f_3869(t21,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t21=C_eqp(t1,lf[92]);
if(C_truep(t21)){
/* eval.scm:546: include-file */
t22=((C_word*)((C_word*)t0)[15])[1];
f_3869(t22,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t22=C_eqp(t1,lf[93]);
if(C_truep(t22)){
t23=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t24=t23;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=((C_word*)t25)[1];
t27=C_i_cadr(((C_word*)t0)[3]);
t28=C_i_check_list_2(t27,lf[53]);
t29=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6553,a[2]=t25,a[3]=t31,a[4]=t26,a[5]=((C_word)li120),tmp=(C_word)a,a+=6,tmp));
t33=((C_word*)t31)[1];
f_6553(t33,t29,t27);}
else{
t23=C_eqp(t1,lf[97]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6594,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:558: chicken.syntax#strip-syntax */
t25=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t25;
av2[1]=t24;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}
else{
t24=C_eqp(t1,lf[111]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:610: rename */
t26=((C_word*)((C_word*)t0)[14])[1];
f_3682(t26,t25,lf[74]);}
else{
t25=C_eqp(t1,lf[112]);
if(C_truep(t25)){
t26=C_i_cadr(((C_word*)t0)[3]);
t27=C_a_i_list(&a,2,lf[32],t26);
t28=C_a_i_list(&a,2,lf[102],t27);
/* eval.scm:613: compile */
t29=((C_word*)((C_word*)t0)[4])[1];
f_3933(t29,((C_word*)t0)[2],t28,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t26=C_eqp(t1,lf[113]);
if(C_truep(t26)){
t27=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6952,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:616: chicken.load#load-extension */
t28=*((C_word*)lf[115]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t28+1)))(5,av2);}}
else{
t27=C_eqp(t1,lf[116]);
if(C_truep(t27)){
t28=C_i_cadr(((C_word*)t0)[3]);
t29=C_u_i_cdr(((C_word*)t0)[3]);
t30=C_i_pairp(C_u_i_cdr(t29));
t31=(C_truep(t30)?C_i_caddr(((C_word*)t0)[3]):C_SCHEME_FALSE);
t32=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6978,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:622: ##sys#process-require */
t33=*((C_word*)lf[117]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t33;
av2[1]=t32;
av2[2]=t28;
av2[3]=t31;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t33+1)))(5,av2);}}
else{
t28=C_eqp(t1,lf[118]);
t29=(C_truep(t28)?t28:C_eqp(t1,lf[119]));
if(C_truep(t29)){
t30=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6999,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:625: ##sys#eval/meta */
t31=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t31;
av2[1]=t30;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t31+1)))(3,av2);}}
else{
t30=C_eqp(t1,lf[121]);
if(C_truep(t30)){
/* eval.scm:629: compile */
t31=((C_word*)((C_word*)t0)[4])[1];
f_3933(t31,((C_word*)t0)[2],C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t31=C_eqp(t1,lf[122]);
t32=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7028,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[16],a[12]=((C_word*)t0)[6],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t31)){
t33=t32;
f_7028(t33,t31);}
else{
t33=C_eqp(t1,lf[149]);
t34=t32;
f_7028(t34,(C_truep(t33)?t33:C_eqp(t1,lf[150])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4277(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4277,c,av);}
a=C_alloc(4);
switch(t1){
case C_fix(-1):
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4284,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4300,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4308,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_SCHEME_TRUE:
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_SCHEME_FALSE:
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4324,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4332,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4334,a[2]=t1,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_4284 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4284,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4292 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4292,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4300 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4300,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4308 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4308,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4316 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4316,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4324 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4324,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4332 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4332,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4334 in k4275 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4334,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4363 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4363,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4397 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4397,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4405 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4407,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4410,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:256: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3933(t3,t2,C_i_caddr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4408 in k4405 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_4410,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4413,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t3))){
/* eval.scm:258: compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3933(t4,t2,C_i_cadddr(((C_word*)t0)[4]),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
/* eval.scm:259: compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3933(t4,t2,lf[39],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k4411 in k4408 in k4405 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4413,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4414 in k4411 in k4408 in k4405 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4414(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4414,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4419 */
static void C_ccall f_4421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4421,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
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
t2=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4493 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4495,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4498,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:269: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3933(t3,t2,C_i_cadr(((C_word*)t0)[4]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4496 in k4493 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4498,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4499,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4499 in k4496 in k4493 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4499,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4501 */
static void C_ccall f_4503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4503,c,av);}
t2=((C_word*)t0)[2];{
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

/* k4515 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,7)))){
C_save_and_reclaim((void *)f_4517,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:273: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3933(t3,t2,C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4518 in k4515 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_4520,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4523,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_a_i_cons(&a,2,lf[23],t4);
/* eval.scm:274: compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3933(t6,t2,t5,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k4521 in k4518 in k4515 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4523,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4524,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4524 in k4521 in k4518 in k4515 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4524(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4524,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4528,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4526 */
static void C_ccall f_4528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4528,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];{
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

/* k4529 in k4526 */
static void C_ccall f_4531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4531,c,av);}
t2=((C_word*)t0)[2];{
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

/* k4567 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4569,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:280: ##sys#put/restore! */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
av2[3]=lf[44];
av2[4]=lf[45];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4570 in k4567 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4572,c,av);}
/* eval.scm:281: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],lf[42],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* a4599 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4600,c,av);}
/* eval.scm:286: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3716(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4606(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4606,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4610,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:287: compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3933(t5,t4,C_i_caddr(((C_word*)t0)[7]),((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[9],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4610,c,av);}
a=C_alloc(13);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[49]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4661,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:290: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4619(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_zerop(((C_word*)t0)[2]))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4666,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4617 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4619,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4623,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:296: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}}

/* f_4623 in k4617 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4623,c,av);}
/* eval.scm:295: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[0];
av2[3]=lf[48];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4628 in k4617 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4630,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4631,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4631 in k4628 in k4617 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4631(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4631,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4633 */
static void C_ccall f_4635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4635,c,av);}
t2=C_i_persist_symbol(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4659 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4661,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:292: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[50]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[51];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4619(2,av2);}}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_4619(2,av2);}}}

/* f_4666 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4666,c,av);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4678,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4676 */
static void C_ccall f_4678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4678,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4679 in k4608 in a4605 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4679,c,av);}
a=C_alloc(5);
t3=C_u_i_list_ref(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4688,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4686 */
static void C_ccall f_4688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4688,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4715(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4715,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[53]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5120,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5120(t11,t7,t1);}

/* k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4724,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5118,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:313: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4730(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_4730,c,av);}
a=C_alloc(33);
t2=*((C_word*)lf[9]+1);
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_TRUE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5071,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5106,a[2]=t4,a[3]=t2,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:314: ##sys#dynamic-wind */
t11=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4733(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4733,c,av);}
a=C_alloc(26);
switch(((C_word*)t0)[2]){
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4742,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:319: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4812,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:322: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:326: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4961,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:334: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5029,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5029(t11,t7,((C_word*)t0)[9]);}}

/* k4740 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4742,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4743,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4743 in k4740 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4743,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4759,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4757 */
static void C_ccall f_4759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4759,c,av);}
a=C_alloc(5);
t2=C_a_i_vector1(&a,1,t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4761 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4763,c,av);}
/* eval.scm:319: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4774 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4776,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:323: scheme#cadadr */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4777 in k4774 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4779,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4780 in k4777 in k4774 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4780(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4780,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4796,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4794 */
static void C_ccall f_4796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4796,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4800,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k4798 in k4794 */
static void C_ccall f_4800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4800,c,av);}
a=C_alloc(6);
t2=C_a_i_vector2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4802 in k4774 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4804,c,av);}
/* eval.scm:323: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4810 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4812,c,av);}
/* eval.scm:322: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4823 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4825,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4871,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:327: scheme#cadadr */
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
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4826 in k4823 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4828,c,av);}
a=C_alloc(14);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4834,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4863,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:329: scheme#cadar */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4832 in k4826 in k4823 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4834,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li59),tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4835 in k4832 in k4826 in k4823 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4835,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4851,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4849 */
static void C_ccall f_4851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4851,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4855,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k4853 in k4849 */
static void C_ccall f_4855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4855,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k4857 in k4853 in k4849 */
static void C_ccall f_4859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4859,c,av);}
a=C_alloc(7);
t2=C_a_i_vector3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4861 in k4826 in k4823 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4863,c,av);}
/* eval.scm:329: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4869 in k4823 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4871,c,av);}
/* eval.scm:327: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4877 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4879,c,av);}
/* eval.scm:326: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4892,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:335: scheme#cadadr */
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
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4893 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4895,c,av);}
a=C_alloc(20);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:337: scheme#cadar */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4899 in k4893 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4901,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:338: scheme#cadadr */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4902 in k4899 in k4893 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4904,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4905,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li60),tmp=(C_word)a,a+=8,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4905 in k4902 in k4899 in k4893 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_4905(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4905,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4921,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4919 */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4921,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4925,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4923 in k4919 */
static void C_ccall f_4925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4925,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4927 in k4923 in k4919 */
static void C_ccall f_4929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4929,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4931 in k4927 in k4923 in k4919 */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4933,c,av);}
a=C_alloc(8);
t2=C_a_i_vector4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4935 in k4899 in k4893 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4937,c,av);}
/* eval.scm:338: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4943 in k4893 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4945,c,av);}
/* eval.scm:337: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4951 in k4890 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4953,c,av);}
/* eval.scm:335: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4959 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4961,c,av);}
/* eval.scm:334: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* g595 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_4969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_4969,3,t0,t1,t2);}
/* eval.scm:348: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3933(t3,t1,C_i_cadr(t2),((C_word*)t0)[3],C_u_i_car(t2),((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4980 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4982,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4983 in k4980 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_4983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4983,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4987,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:350: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k4985 */
static void C_ccall f_4987(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4987,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4990,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4999(t6,t2,C_fix(0),((C_word*)t0)[6]);}

/* k4988 in k4985 */
static void C_ccall f_4990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4990,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop616 in k4985 */
static void f_4999(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4999,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5024,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5022 in doloop616 in k4985 */
static void C_ccall f_5024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5024,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)((C_word*)t0)[4])[1];
f_4999(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop589 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5029(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5029,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:348: g595 */
t4=((C_word*)t0)[4];
f_4969(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5052 in map-loop589 in k4731 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5054(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5054,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5029(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a5070 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5071,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:314: ##sys#current-environment550 */
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
f_5075(2,av2);}}}

/* k5073 in a5070 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5075,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:314: ##sys#current-environment550 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5077 in k5073 in a5070 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5079,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:314: ##sys#current-environment550 */
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

/* k5080 in k5077 in k5073 in a5070 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5082,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5087 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5088,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5096,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:316: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k5094 in a5087 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5096,c,av);}
a=C_alloc(12);
/* eval.scm:315: compile-to-closure */
f_3620(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}

/* k5102 in a5087 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5104,c,av);}
/* eval.scm:316: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a5105 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5106,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:314: ##sys#current-environment550 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5108 in a5105 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5110,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:314: ##sys#current-environment550 */
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

/* k5111 in k5108 in a5105 in k4728 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5113,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5116 in k4722 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5118,c,av);}
/* eval.scm:313: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop522 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5120,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:311: g528 */
t4=*((C_word*)lf[58]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5143 in map-loop522 in k4713 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5145(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5145,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5120(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop494 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5154(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5154,3,t0,t1,t2);}
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

/* k5225 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5227(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5227,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5231,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5251,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5265,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5265(t11,t7,((C_word*)t0)[9]);}

/* k5229 in k5225 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_5231,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[52],t2);
/* eval.scm:360: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3933(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k5249 in k5225 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5251,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[52],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:361: ##sys#append */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop657 in k5225 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5265(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5265,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_list(&a,3,lf[47],t4,t5);
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

/* map-loop630 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5299(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5299,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[61]);
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

/* k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5349(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5349,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[53]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5571,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5571(t11,t7,t1);}

/* k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5358(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5358,c,av);}
a=C_alloc(25);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5384,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5537,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5537(t11,t7,((C_word*)t0)[10]);}

/* k5382 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5384(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_5384,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[53]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5411,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5489,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5489(t11,t7,((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k5409 in k5382 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5411(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5411,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5415,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5441,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5441(t11,t7,((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k5413 in k5409 in k5382 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,7)))){
C_save_and_reclaim((void *)f_5415,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[52],t2);
t4=C_a_i_list(&a,3,lf[52],((C_word*)t0)[3],t3);
/* eval.scm:376: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3933(t5,((C_word*)t0)[5],t4,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k5425 in k5409 in k5382 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5427,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[52],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:377: ##sys#append */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop806 in k5409 in k5382 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5441(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5441,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[47],t6,t7);
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

/* map-loop773 in k5382 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5489(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5489,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_cadr(t7);
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

/* map-loop746 in k5356 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5537(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5537,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[63]);
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

/* map-loop716 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5571(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5571,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:374: g722 */
t4=*((C_word*)lf[58]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5594 in map-loop716 in k5347 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5596(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5596,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5571(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop689 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_5605(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5605,3,t0,t1,t2);}
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

/* k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5646(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5646,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_truep(((C_word*)t0)[3])?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t4)[1]):C_a_i_cons(&a,2,lf[65],((C_word*)t4)[1]));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5657,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t7,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6063,a[2]=t4,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:393: ##sys#extended-lambda-list? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t10;
av2[2]=((C_word*)t4)[1];
tp(3,av2);}}

/* k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5657,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li106),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:398: ##sys#decompose-lambda-list */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[10];
av2[2]=((C_word*)((C_word*)t0)[11])[1];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5662(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5662,c,av);}
a=C_alloc(27);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[53]);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5672,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6028,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6028(t14,t10,t2);}

/* k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5672,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5675,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6026,a[2]=t2,a[3]=((C_word*)t0)[13],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:402: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5675(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5675,c,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=*((C_word*)lf[9]+1);
t4=t1;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_TRUE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5681,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5983,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6000,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=t1,a[9]=((C_word)li103),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6014,a[2]=t5,a[3]=t3,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: ##sys#dynamic-wind */
t12=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5681(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5681,c,av);}
a=C_alloc(7);
switch(((C_word*)t0)[2]){
case C_fix(0):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5691,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5710,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(1):
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5734,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5753,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
case C_fix(2):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5781,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5800,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(3):
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5828,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5847,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
default:
t2=C_eqp(((C_word*)t0)[2],C_fix(4));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5875,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5894,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp)):(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5916,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5939,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li101),tmp=(C_word)a,a+=7,tmp)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_5691 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5691,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5697,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:412: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5696 */
static void C_ccall f_5697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5697,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5710 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5710,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5716,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:417: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5715 */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5716,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5734 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5734,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5740,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:422: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5739 */
static void C_ccall f_5740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_5740,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5753 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5753,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5759,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:427: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5758 */
static void C_ccall f_5759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5759,c,av);}
a=C_alloc(5);
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5781 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5781,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5787,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:433: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5786 */
static void C_ccall f_5787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_5787,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5800 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5800,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5806,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:438: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5805 */
static void C_ccall f_5806(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5806,c,av);}
a=C_alloc(6);
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5828 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5828,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5834,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:444: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5833 */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_5834,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
t6=C_a_i_vector4(&a,4,t2,t3,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* f_5847 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5847,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5853,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:449: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5852 */
static void C_ccall f_5853(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5853,c,av);}
a=C_alloc(7);
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5875 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5875,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5881,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5880 */
static void C_ccall f_5881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c<6) C_bad_min_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_5881,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+9);
t6=C_build_rest(&a,c,6,av);
C_word t7;
C_word t8;
C_word t9;
t7=C_a_i_vector5(&a,5,t2,t3,t4,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* f_5894 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5894,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5900,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:460: decorate */
f_3836(t1,t3,((C_word*)t0)[4]);}

/* a5899 */
static void C_ccall f_5900(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5900,c,av);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:462: ##sys#vector */
t7=*((C_word*)lf[66]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* k5910 in a5899 */
static void C_ccall f_5912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5912,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5916 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5916,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5922,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:467: decorate */
f_3836(t1,t3,((C_word*)t0)[5]);}

/* a5921 */
static void C_ccall f_5922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +15,c,6)))){
C_save_and_reclaim((void*)f_5922,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+15);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5938,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_list1(&a,1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[66]+1);
av2[3]=t5;
C_apply(4,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7436,a[2]=t2,a[3]=t6,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7436(t8,t4,((C_word*)t0)[4],C_fix(0),t2,C_SCHEME_FALSE);}}

/* k5932 in a5921 */
static void C_ccall f_5934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5934,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5936 in a5921 */
static void C_ccall f_5938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5938,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[66]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* f_5939 in k5679 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5939,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5945,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:474: decorate */
f_3836(t1,t3,((C_word*)t0)[5]);}

/* a5944 */
static void C_ccall f_5945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_5945,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_fix(c - 2);
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(C_i_not(t4))){
/* eval.scm:478: ##sys#error */
t5=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[68];
av2[3]=((C_word*)t0)[2];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5967,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[66]+1);
av2[3]=t2;
C_apply(4,av2);}}}

/* k5965 in a5944 */
static void C_ccall f_5967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5967,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a5982 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5983,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:405: ##sys#current-environment885 */
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
f_5987(2,av2);}}}

/* k5985 in a5982 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5987,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5991,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:405: ##sys#current-environment885 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5989 in k5985 in a5982 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_5991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5991,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:405: ##sys#current-environment885 */
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

/* k5992 in k5989 in k5985 in a5982 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_5994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5994,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5999 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6000,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6008,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:407: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=((C_word*)t0)[8];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k6006 in a5999 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6008,c,av);}
a=C_alloc(12);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm:406: compile-to-closure */
f_3620(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}
else{
/* eval.scm:406: compile-to-closure */
f_3620(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}}

/* a6013 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6014,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: ##sys#current-environment885 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6016 in a6013 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6018,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: ##sys#current-environment885 */
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

/* k6019 in k6016 in a6013 in k5673 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6021,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6024 in k5670 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6026,c,av);}
/* eval.scm:402: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop857 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6028(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6028,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:401: g863 */
t4=*((C_word*)lf[58]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6051 in map-loop857 in a5661 in k5655 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6053(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6053,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6028(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6061 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6063,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:394: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5657(2,av2);}}}

/* a6067 in k6061 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6068,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6076,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:397: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6074 in a6067 in k6061 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6076,c,av);}
/* eval.scm:396: ##sys#expand-extended-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=*((C_word*)lf[71]+1);
av2[5]=t1;
tp(6,av2);}}

/* a6077 in k6061 in k5644 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6078(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6078,c,av);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6087 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6089,c,av);}
/* eval.scm:389: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[73]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[74];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[75];
av2[5]=C_SCHEME_FALSE;
av2[6]=t1;
tp(7,av2);}}

/* k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6098(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_6098,c,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6103,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li110),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6138,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:483: ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a6102 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6103,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:483: ##sys#current-environment951 */
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
f_6107(2,av2);}}}

/* k6105 in a6102 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6107,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:483: ##sys#current-environment951 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6109 in k6105 in a6102 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6111,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:483: ##sys#current-environment951 */
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

/* k6112 in k6109 in k6105 in a6102 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6114,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6119 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6120,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6128,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6136,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:496: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6126 in a6119 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6128,c,av);}
/* eval.scm:495: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6134 in a6119 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6136,c,av);}
/* eval.scm:496: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6137 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6138,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:483: ##sys#current-environment951 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6140 in a6137 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6142,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6145,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:483: ##sys#current-environment951 */
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

/* k6143 in k6140 in a6137 in k6096 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6145,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6161 in map-loop960 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6163,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6167,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6171,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:491: ##sys#eval/meta */
t4=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6165 in k6161 in map-loop960 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6167(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6167,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t6=((C_word*)((C_word*)t0)[5])[1];
f_6196(t6,((C_word*)t0)[6],C_slot(((C_word*)t0)[7],C_fix(1)));}

/* k6169 in k6161 in map-loop960 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6171,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:492: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6173 in k6169 in k6161 in map-loop960 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6175,c,av);}
/* eval.scm:490: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6188 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6190,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6194,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:494: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6192 in k6188 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6194,c,av);}
/* eval.scm:485: scheme#append */
t2=*((C_word*)lf[22]+1);{
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

/* map-loop960 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6196(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6196,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6163,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:489: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6248 in map-loop995 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6250(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6250,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_6368(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k6252 in map-loop995 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6254,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6258,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:506: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6256 in k6252 in map-loop995 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6258,c,av);}
/* eval.scm:504: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6273,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6276,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6366,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:508: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6276(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_6276,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6277,a[2]=t1,a[3]=((C_word)li113),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[80]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6341,a[2]=t2,a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_6341(t4,((C_word*)t0)[2])
);
t6=*((C_word*)lf[9]+1);
t7=t1;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_TRUE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6296,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6313,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li116),tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6331,a[2]=t8,a[3]=t6,a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:513: ##sys#dynamic-wind */
t14=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=((C_word*)t0)[8];
av2[2]=t11;
av2[3]=t12;
av2[4]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}

/* g1024 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static C_word f_6277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_set_car(C_i_cdr(t1),((C_word*)t0)[2]));}

/* a6295 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6296,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:513: ##sys#current-environment1032 */
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
f_6300(2,av2);}}}

/* k6298 in a6295 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6300,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:513: ##sys#current-environment1032 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6302 in k6298 in a6295 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6304,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6307,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:513: ##sys#current-environment1032 */
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

/* k6305 in k6302 in k6298 in a6295 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6307,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6312 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6313,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6321,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6329,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:515: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6319 in a6312 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6321,c,av);}
/* eval.scm:514: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6327 in a6312 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6329,c,av);}
/* eval.scm:515: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6330 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6331,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:513: ##sys#current-environment1032 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6333 in a6330 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6335,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6338,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:513: ##sys#current-environment1032 */
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

/* k6336 in k6333 in a6330 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6338,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* for-each-loop1023 in k6274 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static C_word f_6341(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* eval.scm:509: g1024 */
  f_6277(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k6364 in k6271 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6366,c,av);}
/* eval.scm:508: scheme#append */
t2=*((C_word*)lf[22]+1);{
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

/* map-loop995 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6368(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6368,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6250,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6254,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:505: ##sys#eval/meta */
t7=*((C_word*)lf[78]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_cadr(t3);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6415,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6459,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:522: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6418(2,av2);}}}

/* k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6418,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:524: ##sys#put/restore! */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[44];
av2[4]=lf[86];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6419 in k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6421,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6442,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:526: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6422 in k6419 in k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6424,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6434,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:530: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6425 in k6422 in k6419 in k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6427,c,av);}
/* eval.scm:532: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6432 in k6422 in k6419 in k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6434,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:531: ##sys#eval/meta */
t3=*((C_word*)lf[78]+1);{
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

/* k6436 in k6432 in k6422 in k6419 in k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6438,c,av);}
/* eval.scm:528: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k6440 in k6419 in k6416 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6442,c,av);}
/* eval.scm:525: ##sys#register-syntax-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k6457 in k6413 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6459,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(C_i_not(t2))){
/* eval.scm:523: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[0];
av2[3]=lf[87];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6418(2,av2);}}}

/* k6479 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6481,c,av);}
/* eval.scm:538: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6487 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6489,c,av);}
/* eval.scm:539: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k6523 in map-loop1065 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6525,c,av);}
/* eval.scm:552: chicken.syntax#strip-syntax */
t2=*((C_word*)lf[33]+1);{
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

/* k6535 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6537,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:549: ##sys#with-module-aliases */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a6538 in k6535 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6539,c,av);}
a=C_alloc(3);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[23],t2);
/* eval.scm:555: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3933(t4,t1,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* map-loop1065 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6553,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6525,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:551: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[73]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t5;
av2[2]=lf[95];
av2[3]=t4;
av2[4]=lf[96];
tp(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6576 in map-loop1065 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6578(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6578,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6553(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6594(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6594,c,av);}
a=C_alloc(26);
t2=C_i_cadr(t1);
t3=C_i_caddr(t1);
t4=C_eqp(C_SCHEME_TRUE,t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6603,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_6603(2,av2);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6808,a[2]=t2,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp);
t11=C_u_i_cdr(t1);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=C_i_check_list_2(t13,lf[53]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6865,a[2]=t8,a[3]=t16,a[4]=t10,a[5]=t9,a[6]=((C_word)li130),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_6865(t18,t5,t13);}}

/* k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6603,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6801,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:575: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6606(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6606,c,av);}
a=C_alloc(12);
t2=*((C_word*)lf[85]+1);
t3=*((C_word*)lf[9]+1);
t4=*((C_word*)lf[98]+1);
t5=*((C_word*)lf[99]+1);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6609,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:578: ##sys#register-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}

/* k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6609,c,av);}
a=C_alloc(14);
t2=*((C_word*)lf[100]+1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6612,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:583: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[99]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
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
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_6612,c,av);}
a=C_alloc(41);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6617,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li121),tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6673,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word)li126),tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6769,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li127),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:577: ##sys#dynamic-wind */
t15=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[13];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6617,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:577: ##sys#current-module1140 */
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
f_6621(2,av2);}}}

/* k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6621,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:577: ##sys#current-environment1141 */
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
f_6624(2,av2);}}}

/* k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6624,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:577: ##sys#macro-environment1142 */
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
f_6627(2,av2);}}}

/* k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_6627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6627,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:577: ##sys#module-alias-environment1143 */
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
f_6630(2,av2);}}}

/* k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_6630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6630,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* eval.scm:577: ##sys#current-module1140 */
t3=((C_word*)t0)[13];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in ... */
static void C_ccall f_6634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6634,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6638,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* eval.scm:577: ##sys#current-environment1141 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in ... */
static void C_ccall f_6638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6638,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6642,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:577: ##sys#macro-environment1142 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6640 in k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in ... */
static void C_ccall f_6642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6642,c,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6646,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:577: ##sys#module-alias-environment1143 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6644 in k6640 in k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6646,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:577: ##sys#current-module1140 */
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

/* k6647 in k6644 in k6640 in k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in ... */
static void C_ccall f_6649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6649,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:577: ##sys#current-environment1141 */
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

/* k6650 in k6647 in k6644 in k6640 in k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in ... */
static void C_ccall f_6652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6652,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:577: ##sys#macro-environment1142 */
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

/* k6653 in k6650 in k6647 in k6644 in k6640 in k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in ... */
static void C_ccall f_6655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6655,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:577: ##sys#module-alias-environment1143 */
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

/* k6656 in k6653 in k6650 in k6647 in k6644 in k6640 in k6636 in k6632 in k6628 in k6625 in k6622 in k6619 in a6616 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in ... */
static void C_ccall f_6658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6658,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6673,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li125),tmp=(C_word)a,a+=8,tmp);
/* eval.scm:584: ##sys#with-property-restore */
t3=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6679,c,av);}
a=C_alloc(10);
t2=C_i_cdddr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6689,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li124),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6689(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6689(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_6689,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6699,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:588: reverse */
t5=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6765,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:603: compile */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3933(t6,t5,C_u_i_car(t2),C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}}

/* k6697 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_6699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6699,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6702,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6750,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:589: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6700 in k6697 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_6702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6702,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6746,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:590: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6703 in k6700 in k6697 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in ... */
static void C_ccall f_6705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6705,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_6706 in k6703 in k6700 in k6697 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in ... */
static void C_ccall f_6706(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6706,c,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6712,a[2]=t4,a[3]=t2,a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6712(t6,t1,((C_word*)t0)[2]);}

/* loop2 */
static void f_6712(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6712,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[101]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6735,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:596: g1197 */
t6=t4;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
/* eval.scm:596: g1200 */
t4=C_u_i_car(t2);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}}

/* k6733 in loop2 */
static void C_ccall f_6735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6735,c,av);}
/* eval.scm:598: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6712(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6744 in k6700 in k6697 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in ... */
static void C_ccall f_6746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6746,c,av);}
/* eval.scm:590: ##sys#provide */
t2=*((C_word*)lf[102]+1);{
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

/* k6748 in k6697 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_6750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6750,c,av);}
/* eval.scm:589: ##sys#finalize-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6763 in loop in a6678 in a6672 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_6765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6765,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* eval.scm:601: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6689(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6769,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:577: ##sys#current-module1140 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6773,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6776,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:577: ##sys#current-environment1141 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6776,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:577: ##sys#macro-environment1142 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6777 in k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_6779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6779,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:577: ##sys#module-alias-environment1143 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6780 in k6777 in k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_6782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6782,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:577: ##sys#current-module1140 */
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

/* k6783 in k6780 in k6777 in k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in ... */
static void C_ccall f_6785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6785,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:577: ##sys#current-environment1141 */
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

/* k6786 in k6783 in k6780 in k6777 in k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in ... */
static void C_ccall f_6788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6788,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:577: ##sys#macro-environment1142 */
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

/* k6789 in k6786 in k6783 in k6780 in k6777 in k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in ... */
static void C_ccall f_6791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_6791,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:577: ##sys#module-alias-environment1143 */
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

/* k6792 in k6789 in k6786 in k6783 in k6780 in k6777 in k6774 in k6771 in a6768 in k6610 in k6607 in k6604 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6794(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6794,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6799 in k6601 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6801,c,av);}
if(C_truep(t1)){
/* eval.scm:576: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[71]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[108];
av2[3]=lf[109];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6606(2,av2);}}}

/* g1108 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6808(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6808,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6821,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6832,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
t5=t3;
f_6821(t5,(
  f_6832(t2)
));}
else{
t4=t3;
f_6821(t4,C_SCHEME_FALSE);}}}

/* k6819 in g1108 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6821(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6821,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:571: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[71]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[108];
av2[3]=lf[110];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}}

/* loop in g1108 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static C_word f_6832(C_word t1){
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
if(C_truep(C_i_symbolp(t3))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* map-loop1102 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_6865(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6865,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:562: g1108 */
t4=((C_word*)t0)[4];
f_6808(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6888 in map-loop1102 in k6592 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6890(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6890,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6865(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6916 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6918,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:610: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3933(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k6950 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6952,c,av);}
/* eval.scm:617: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],lf[114],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6976 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6978,c,av);}
/* eval.scm:622: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6997 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_6999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6999,c,av);}
/* eval.scm:626: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],lf[120],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_7028(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,7)))){
C_save_and_reclaim_args((void *)trf_7028,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
/* eval.scm:632: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],lf[123],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[124]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:635: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[50]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
av2[2]=lf[126];
av2[3]=((C_word*)t0)[9];
tp(4,av2);}}
else{
t3=C_eqp(((C_word*)t0)[8],lf[127]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[128]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7063,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:639: rename */
t6=((C_word*)((C_word*)t0)[10])[1];
f_3682(t6,t5,lf[129]);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[130]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t5)){
t7=t6;
f_7076(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[8],lf[139]);
if(C_truep(t7)){
t8=t6;
f_7076(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[8],lf[140]);
if(C_truep(t8)){
t9=t6;
f_7076(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[8],lf[141]);
if(C_truep(t9)){
t10=t6;
f_7076(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[8],lf[142]);
if(C_truep(t10)){
t11=t6;
f_7076(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[8],lf[143]);
if(C_truep(t11)){
t12=t6;
f_7076(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[8],lf[144]);
if(C_truep(t12)){
t13=t6;
f_7076(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[8],lf[145]);
if(C_truep(t13)){
t14=t6;
f_7076(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[8],lf[146]);
if(C_truep(t14)){
t15=t6;
f_7076(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[8],lf[147]);
t16=t6;
f_7076(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[8],lf[148])));}}}}}}}}}}}}}

/* k7038 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7040,c,av);}
/* eval.scm:636: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],lf[125],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7061 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7063,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:639: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3933(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_7076(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,7)))){
C_save_and_reclaim_args((void *)trf_7076,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
/* eval.scm:646: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[71]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[131];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[132]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7096,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:649: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[133]);
if(C_truep(t3)){
/* eval.scm:652: compile */
t4=((C_word*)((C_word*)t0)[9])[1];
f_3933(t4,((C_word*)t0)[2],C_i_cadddr(((C_word*)t0)[3]),((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[11]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[134]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7140,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:656: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cdddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],*((C_word*)lf[138]+1));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7152,a[2]=t9,a[3]=t7,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7157,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li133),tmp=(C_word)a,a+=8,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7167,a[2]=t7,a[3]=t9,a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:666: ##sys#dynamic-wind */
t13=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=((C_word*)t0)[2];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}}}}

/* k7094 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7096,c,av);}
/* eval.scm:649: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7508(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* g1281 in k7138 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_7122(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7122,3,t0,t1,t2);}
/* eval.scm:658: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3933(t3,t1,C_i_cadr(t2),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7138 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7140,c,av);}
a=C_alloc(9);
t2=C_i_assq(lf[135],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li131),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:656: g1281 */
t4=t3;
f_7122(t4,((C_word*)t0)[8],t2);}
else{
/* eval.scm:660: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[71]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=lf[136];
av2[3]=lf[137];
av2[4]=((C_word*)t0)[9];
tp(5,av2);}}}

/* a7151 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7152,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[138]+1));
t3=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7156 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7157,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7165,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:667: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7163 in a7156 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7165,c,av);}
/* eval.scm:667: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7508(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* a7166 in k7074 in k7026 in k4266 in k4251 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7167,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[138]+1));
t3=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7349 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7350,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[151]+1));
t3=C_mutate((C_word*)lf[151]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7354 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7355,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7363,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:221: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7361 in a7354 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7363,c,av);}
/* eval.scm:221: chicken.syntax#expand */
t2=*((C_word*)lf[152]+1);{
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

/* a7364 in k4245 in k4242 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7365,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[151]+1));
t3=C_mutate((C_word*)lf[151]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7369 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7371,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:671: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7376 in k7369 in k4222 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7378,c,av);}
/* eval.scm:671: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7508(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7405 in k3938 in compile in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7407,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_4224(2,av2);}}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4224(2,av2);}}
else{
/* eval.scm:212: ##sys#srfi-4-vector? */
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* doloop1299 in a5921 */
static void f_7436(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_7436,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,t4);
t8=C_i_setslot(t5,C_fix(1),t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_fixnum_difference(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7465,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,a[5]=t8,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t10)){
/* eval.scm:680: ##sys#error */
t11=*((C_word*)lf[25]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t9;
av2[2]=lf[67];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t12=t1;
t13=t7;
t14=t8;
t15=C_slot(t4,C_fix(1));
t16=t4;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
goto loop;}}}

/* k7463 in doloop1299 in a5921 */
static void C_ccall f_7465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7465,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7436(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* loop in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static C_word f_7482(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t4=C_slot(t1,C_fix(1));
t5=C_fixnum_plus(t2,C_fix(1));
t1=t4;
t2=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_7508(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,7)))){
C_save_and_reclaim_args((void *)trf_7508,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7515,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_closurep(t6))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7838,a[2]=t6,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp);
f_7515(2,av2);}}
else{
/* eval.scm:697: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3933(t8,t7,C_slot(t2,C_fix(0)),t3,C_SCHEME_FALSE,t4,t5,C_SCHEME_FALSE);}}

/* k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7515(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7515,c,av);}
a=C_alloc(15);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7482,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_7482(t2,C_fix(0))
);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7524,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[8],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* eval.scm:701: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7524(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,7)))){
C_save_and_reclaim((void *)f_7524,c,av);}
a=C_alloc(31);
t2=(C_truep(t1)?t1:lf[156]);
switch(((C_word*)t0)[2]){
case C_SCHEME_FALSE:
/* eval.scm:703: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[157];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}
case C_fix(0):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7543,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word)li140),tmp=(C_word)a,a+=10,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7562,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:707: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3933(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
case C_fix(2):
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:711: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3933(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
case C_fix(3):
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7626,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:716: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3933(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
case C_fix(4):
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7670,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:722: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3933(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
default:
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7717,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp);
t8=C_i_check_list_2(((C_word*)t0)[11],lf[53]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7727,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7790,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li149),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7790(t13,t9,((C_word*)t0)[11]);}}

/* f_7543 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7543,c,av);}
a=C_alloc(8);
t3=(
/* eval.scm:705: emit-trace-info */
  f_3805(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7550,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7548 */
static void C_ccall f_7550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7550,c,av);}
/* eval.scm:704: g1338 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k7560 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7562,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word)li141),tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7563 in k7560 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7563,c,av);}
a=C_alloc(10);
t3=(
/* eval.scm:709: emit-trace-info */
  f_3805(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7570,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7568 */
static void C_ccall f_7570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7570,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7577,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
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

/* k7575 in k7568 */
static void C_ccall f_7577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7577,c,av);}
/* eval.scm:708: g1343 */
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

/* k7588 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_7590,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:712: compile */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3933(t3,t2,C_u_i_list_ref(((C_word*)t0)[11],C_fix(1)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7591 in k7588 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7593,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7594,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li142),tmp=(C_word)a,a+=12,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7594 in k7591 in k7588 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7594,c,av);}
a=C_alloc(11);
t3=(
/* eval.scm:714: emit-trace-info */
  f_3805(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7601,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7599 */
static void C_ccall f_7601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7601,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k7606 in k7599 */
static void C_ccall f_7608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7608,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];{
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

/* k7610 in k7606 in k7599 */
static void C_ccall f_7612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7612,c,av);}
/* eval.scm:713: g1349 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k7624 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_7626,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:717: compile */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3933(t3,t2,C_u_i_list_ref(((C_word*)t0)[11],C_fix(1)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7627 in k7624 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7629,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:718: compile */
t3=((C_word*)((C_word*)t0)[11])[1];
f_3933(t3,t2,C_u_i_list_ref(((C_word*)t0)[12],C_fix(2)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7630 in k7627 in k7624 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7632,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word)li143),tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[11];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7633 in k7630 in k7627 in k7624 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7633,c,av);}
a=C_alloc(12);
t3=(
/* eval.scm:720: emit-trace-info */
  f_3805(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7640,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7638 */
static void C_ccall f_7640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7640,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7647,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7645 in k7638 */
static void C_ccall f_7647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7647,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7649 in k7645 in k7638 */
static void C_ccall f_7651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7651,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k7653 in k7649 in k7645 in k7638 */
static void C_ccall f_7655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7655,c,av);}
/* eval.scm:719: g1356 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k7668 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_7670,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:723: compile */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3933(t3,t2,C_u_i_list_ref(((C_word*)t0)[11],C_fix(1)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7671 in k7668 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_7673,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:724: compile */
t3=((C_word*)((C_word*)t0)[11])[1];
f_3933(t3,t2,C_u_i_list_ref(((C_word*)t0)[12],C_fix(2)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7674 in k7671 in k7668 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_7676,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:725: compile */
t3=((C_word*)((C_word*)t0)[12])[1];
f_3933(t3,t2,C_u_i_list_ref(((C_word*)t0)[13],C_fix(3)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7677 in k7674 in k7671 in k7668 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7679,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word)li144),tmp=(C_word)a,a+=14,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7680 in k7677 in k7674 in k7671 in k7668 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7680,c,av);}
a=C_alloc(13);
t3=(
/* eval.scm:727: emit-trace-info */
  f_3805(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7687,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7685 */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7687,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7694,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7692 in k7685 */
static void C_ccall f_7694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7694,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7696 in k7692 in k7685 */
static void C_ccall f_7698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7698,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7700 in k7696 in k7692 in k7685 */
static void C_ccall f_7702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7702,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7704 in k7700 in k7696 in k7692 in k7685 */
static void C_ccall f_7706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7706,c,av);}
/* eval.scm:726: g1364 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* g1376 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_7717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7717,3,t0,t1,t2);}
/* eval.scm:729: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3933(t3,t1,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7725 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7727,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7728,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word)li148),tmp=(C_word)a,a+=11,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7728 in k7725 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7728,c,av);}
a=C_alloc(10);
t3=(
/* eval.scm:731: emit-trace-info */
  f_3805(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7739,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7737 */
static void C_ccall f_7739(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7739,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7744,a[2]=((C_word*)t0)[2],a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[53]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7754,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7756,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li147),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7756(t12,t8,((C_word*)t0)[3]);}

/* g1404 in k7737 */
static void f_7744(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7744,3,t0,t1,t2);}
t3=t2;{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7752 in k7737 */
static void C_ccall f_7754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7754,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop1398 in k7737 */
static void f_7756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7756,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:732: g1404 */
t4=((C_word*)t0)[4];
f_7744(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7779 in map-loop1398 in k7737 */
static void C_ccall f_7781(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7781,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7756(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1370 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_7790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7790,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:729: g1376 */
t4=((C_word*)t0)[4];
f_7717(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7813 in map-loop1370 in k7522 in k7513 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7815(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7815,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7790(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* f_7838 in compile-call in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7838,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7855 in chicken.eval#compile-to-closure in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7857,c,av);}
/* eval.scm:734: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3933(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,C_fixnum_greaterp(t1,C_fix(0)),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7907(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7907,c,av);}
a=C_alloc(7);
t3=*((C_word*)lf[85]+1);
t4=*((C_word*)lf[98]+1);
t5=*((C_word*)lf[9]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7911,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:740: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[158]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[158]+1);
av2[1]=t6;
tp(2,av2);}}

/* k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7911,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7914,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:741: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[159]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[159]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7914(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_7914,c,av);}
a=C_alloc(31);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t1;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7919,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li153),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7962,a[2]=((C_word*)t0)[6],a[3]=((C_word)li156),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7994,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li157),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:739: ##sys#dynamic-wind */
t13=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=((C_word*)t0)[7];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_7919,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:739: ##sys#current-module1440 */
t3=((C_word*)t0)[8];{
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
f_7923(2,av2);}}}

/* k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7923,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:739: ##sys#macro-environment1441 */
t3=((C_word*)t0)[8];{
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
f_7926(2,av2);}}}

/* k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_7926,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:739: ##sys#current-environment1442 */
t3=((C_word*)t0)[7];{
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
f_7929(2,av2);}}}

/* k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7929,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:739: ##sys#current-module1440 */
t3=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7931 in k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7933,c,av);}
a=C_alloc(12);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7937,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:739: ##sys#macro-environment1441 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7935 in k7931 in k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7937,c,av);}
a=C_alloc(11);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:739: ##sys#current-environment1442 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7939 in k7935 in k7931 in k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7941,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7944,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:739: ##sys#current-module1440 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k7942 in k7939 in k7935 in k7931 in k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7944,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:739: ##sys#macro-environment1441 */
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

/* k7945 in k7942 in k7939 in k7935 in k7931 in k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7947,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:739: ##sys#current-environment1442 */
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

/* k7948 in k7945 in k7942 in k7939 in k7935 in k7931 in k7927 in k7924 in k7921 in a7918 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7950,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7962,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7968,a[2]=((C_word*)t0)[2],a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7977,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:742: scheme#dynamic-wind */
t4=*((C_word*)lf[160]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[161]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a7967 in a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7968,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7972,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:745: compile-to-closure */
f_3620(t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}

/* k7970 in a7967 in a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7972,c,av);}
/* eval.scm:744: g1474 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a7976 in a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7977(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7977,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7992,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:756: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7979 in a7976 in a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7981,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7988,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:757: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7986 in k7979 in a7976 in a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7988,c,av);}
/* eval.scm:757: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[158]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[158]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7990 in a7976 in a7961 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7992,c,av);}
/* eval.scm:756: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[159]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[159]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7994,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:739: ##sys#current-module1440 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7996 in a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_7998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7998,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8001,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:739: ##sys#macro-environment1441 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7999 in k7996 in a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8001,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:739: ##sys#current-environment1442 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8002 in k7999 in k7996 in a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8004,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:739: ##sys#current-module1440 */
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
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8005 in k8002 in k7999 in k7996 in a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_8007,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:739: ##sys#macro-environment1441 */
t3=((C_word*)t0)[10];{
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

/* k8008 in k8005 in k8002 in k7999 in k7996 in a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_8010,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:739: ##sys#current-environment1442 */
t3=((C_word*)t0)[9];{
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

/* k8011 in k8008 in k8005 in k8002 in k7999 in k7996 in a7993 in k7912 in k7909 in ##sys#eval/meta in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8013,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8020(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8020,c,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[162]+1 /* (set! chicken.eval#eval-handler ...) */,t1);
t3=C_mutate((C_word*)lf[163]+1 /* (set! scheme#eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8022,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[164]+1 /* (set! chicken.eval#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8032,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11551,a[2]=((C_word)li268),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11619,a[2]=((C_word)li269),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:797: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}

/* scheme#eval in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_8022,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8030,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:787: eval-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[162]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t4;
tp(2,av2);}}

/* k8028 in scheme#eval in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8030,c,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
C_apply(5,av2);}}

/* chicken.eval#module-environment in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8032,c,av);}
/* eval.scm:792: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[165]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8039(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8039,c,av);}
a=C_alloc(19);
t2=C_mutate((C_word*)lf[69]+1 /* (set! ##sys#decompose-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8041,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t3=C_a_i_record5(&a,5,lf[168],lf[169],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_mutate((C_word*)lf[170]+1 /* (set! scheme#interaction-environment ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8126,a[2]=t3,a[3]=((C_word)li164),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8130,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11535,a[2]=((C_word)li262),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:844: chicken.base#set-record-printer! */
t7=*((C_word*)lf[356]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[168];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* ##sys#decompose-lambda-list in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8041(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_8041,c,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8044,a[2]=t2,a[3]=((C_word)li161),tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8054,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=((C_word)li162),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8054(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* err in ##sys#decompose-lambda-list in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_8044(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_8044,2,t0,t1);}
t2=C_set_block_item(lf[166] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
/* eval.scm:829: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[71]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[71]+1);
av2[1]=t1;
av2[2]=lf[167];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* loop in ##sys#decompose-lambda-list in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_8054(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_8054,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8068,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:832: reverse */
t7=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
if(C_truep(C_i_not(C_blockp(t2)))){
/* eval.scm:833: err */
t6=((C_word*)t0)[3];
f_8044(t6,t1);}
else{
if(C_truep(C_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8087,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,t2,t3);
/* eval.scm:834: reverse */
t8=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(C_i_not(C_pairp(t2)))){
/* eval.scm:835: err */
t6=((C_word*)t0)[3];
f_8044(t6,t1);}
else{
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(0));
t8=C_a_i_cons(&a,2,t7,t3);
/* eval.scm:836: loop */
t10=t1;
t11=t6;
t12=t8;
t13=C_fixnum_plus(t4,C_fix(1));
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}}}}}

/* k8066 in loop in ##sys#decompose-lambda-list in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8068,c,av);}
/* eval.scm:832: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k8085 in loop in ##sys#decompose-lambda-list in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8087,c,av);}
/* eval.scm:834: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* scheme#interaction-environment in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8126,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8130,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:850: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[165]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t2;
av2[2]=lf[351];
av2[3]=lf[352];
tp(4,av2);}}

/* k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8133,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8136,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:851: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[165]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t2;
av2[2]=lf[349];
av2[3]=lf[350];
tp(4,av2);}}

/* k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8136,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8139,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:852: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[165]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t2;
av2[2]=lf[347];
av2[3]=lf[348];
tp(4,av2);}}

/* k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8139,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8142,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:853: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[165]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t2;
av2[2]=lf[345];
av2[3]=lf[346];
tp(4,av2);}}

/* k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8142,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8144,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:879: strip */
f_8144(t3,C_slot(((C_word*)t0)[2],C_fix(3)));}

/* strip in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_8144(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8144,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[171]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8153,a[2]=t5,a[3]=((C_word)li165),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8153(t7,t1,t2);}

/* foldr1600 in strip in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_8153(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8153,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8184,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8182 in foldr1600 in strip in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8184,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep((C_truep(C_eqp(t2,lf[172]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[173]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[174]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[175]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[176]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[95]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[177]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[178]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[179]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[180]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[181]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[182]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[108]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[183]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[184]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[86]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))?t1:C_a_i_cons(&a,2,((C_word*)t0)[2],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme#scheme-report-environment in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8202,c,av);}
t3=C_i_check_fixnum_2(t2,lf[186]);
switch(t2){
case C_fix(4):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(5):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
default:
/* eval.scm:890: ##sys#error */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[186];
av2[3]=lf[187];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* scheme#null-environment in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8227,c,av);}
t3=C_i_check_fixnum_2(t2,lf[189]);
switch(t2){
case C_fix(4):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(5):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
default:
/* eval.scm:900: ##sys#error */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[189];
av2[3]=lf[190];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_8253(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8253,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[192] /* (set! chicken.load#constant2165 ...) */,lf[193]);
t3=C_mutate(&lf[194] /* (set! chicken.load#constant2168 ...) */,lf[195]);
t4=C_mutate(&lf[196] /* (set! chicken.load#constant2198 ...) */,lf[197]);
t5=C_mutate(&lf[198] /* (set! chicken.load#constant2207 ...) */,lf[199]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11501,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:959: chicken.platform#software-type */
t8=*((C_word*)lf[344]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* loop in chicken.load#provided? in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void f_8630(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8630,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8652,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:82: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k8650 in loop in chicken.load#provided? in k10283 in k10274 in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_8652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8652,c,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* mini-srfi-1.scm:83: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8630(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_9543(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9543,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(&lf[200] /* (set! chicken.load#load-library-extension ...) */,t1);
t3=C_mutate((C_word*)lf[201]+1 /* (set! ##sys#load-dynamic-extension ...) */,lf[196]);
t4=C_mutate((C_word*)lf[202]+1 /* (set! chicken.load#core-library? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9546,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:972: chicken.platform#software-version */
t6=*((C_word*)lf[335]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.load#core-library? in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_9546(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9546,c,av);}
t3=C_i_memq(t2,lf[194]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_assq(t2,lf[192]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_9560(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9560,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(t1,lf[332]);
if(C_truep(t3)){
t4=t2;
f_9563(t4,lf[333]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11458,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11462,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_9563(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_9563,2,t0,t1);}
a=C_alloc(15);
t2=C_mutate(&lf[203] /* (set! chicken.load#default-dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9565,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[204]+1 /* (set! ##sys#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9568,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t5=(C_truep(*((C_word*)lf[205]+1))?lf[206]:lf[207]);
t6=C_mutate(&lf[208] /* (set! chicken.load#path-separators ...) */,t5);
t7=C_mutate(&lf[209] /* (set! chicken.load#path-separator-index/right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9575,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[210] /* (set! chicken.load#make-relative-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9613,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1007: scheme#make-parameter */
t10=*((C_word*)lf[329]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_i_debug_modep();
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* ##sys#provide in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_9565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_9565,c,av);}
a=C_alloc(8);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_provide(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#provided? in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_9568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9568,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_providedp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.load#path-separator-index/right in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_9575(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9575,2,t1,t2);}
a=C_alloc(4);
t3=C_i_string_length(t2);
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9585,a[2]=t2,a[3]=((C_word)li172),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_9585(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in chicken.load#path-separator-index/right in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static C_word f_9585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_i_string_ref(((C_word*)t0)[2],t1);
t3=lf[208];
if(C_truep(C_u_i_memq(t2,lf[208]))){
return(t1);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),t1))){
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.load#make-relative-pathname in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void f_9613(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9613,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9617,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t5=C_i_string_length(t3);
if(C_truep(C_i_fixnum_positivep(t5))){
t6=C_i_string_ref(t3,C_fix(0));
t7=lf[208];
if(C_truep(C_i_not(C_u_i_memq(t6,lf[208])))){
/* eval.scm:1001: path-separator-index/right */
f_9575(t4,t2);}
else{
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_9617(2,av2);}}}
else{
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_9617(2,av2);}}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_9617(2,av2);}}}

/* k9615 in chicken.load#make-relative-pathname in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_9617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9617,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1002: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k9628 in k9615 in chicken.load#make-relative-pathname in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9630,c,av);}
/* eval.scm:1002: scheme#string-append */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[212];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 */
static void C_ccall f_9658(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_9658,c,av);}
a=C_alloc(29);
t2=C_mutate((C_word*)lf[214]+1 /* (set! chicken.load#load-verbose ...) */,t1);
t3=C_set_block_item(lf[215] /* ##sys#current-load-filename */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[216] /* ##sys#dload-disabled */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[217]+1 /* (set! chicken.load#set-dynamic-load-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9662,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[226] /* (set! chicken.load#c-toplevel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9762,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[163]+1);
t8=*((C_word*)lf[234]+1);
t9=C_mutate(&lf[235] /* (set! chicken.load#load/internal ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9776,a[2]=t7,a[3]=t8,a[4]=((C_word)li192),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate(&lf[263] /* (set! chicken.load#evaluator ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10188,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[264]+1 /* (set! scheme#load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10208,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[265]+1 /* (set! chicken.load#load-relative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10227,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[266]+1 /* (set! chicken.load#load-noisily ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10249,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_mk_bool(C_USES_SONAME))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11446,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=C_fix((C_word)C_BINARY_VERSION);
/* ##sys#fixnum->string */
t17=*((C_word*)lf[331]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}
else{
t15=t14;{
C_word *av2=av;
av2[0]=t15;
av2[1]=lf[200];
f_10276(2,av2);}}}

/* chicken.load#set-dynamic-load-mode! in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void C_ccall f_9662(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9662,c,av);}
a=C_alloc(20);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?t2:C_a_i_list1(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9669,a[2]=t1,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9674,a[2]=t11,a[3]=t8,a[4]=t6,a[5]=((C_word)li175),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9674(t13,t9,t4);}

/* k9667 in chicken.load#set-dynamic-load-mode! in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9669,c,av);}
/* eval.scm:1027: ##sys#set-dlopen-flags! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
tp(4,av2);}}

/* loop in chicken.load#set-dynamic-load-mode! in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void f_9674(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_9674,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9687,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[219]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t6=C_eqp(t3,lf[220]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t7=C_eqp(t3,lf[221]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_FALSE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t8=C_eqp(t3,lf[222]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
/* eval.scm:1025: ##sys#signal-hook */
t9=*((C_word*)lf[223]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t4;
av2[2]=lf[224];
av2[3]=lf[225];
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9685 in loop in chicken.load#set-dynamic-load-mode! in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_9687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9687,c,av);}
/* eval.scm:1026: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9674(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9754 in chicken.load#c-toplevel in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9756,c,av);}
/* eval.scm:1032: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[231];
tp(4,av2);}}

/* k9758 in chicken.load#c-toplevel in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9760,c,av);}
/* eval.scm:1033: chicken.internal#string->c-identifier */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[232]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[232]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* chicken.load#c-toplevel in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void f_9762(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_9762,3,t1,t2,t3);}
a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9770,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9774,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(t2))){
/* eval.scm:1037: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t4;
av2[2]=lf[229];
av2[3]=lf[230];
tp(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9756,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9760,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1033: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[233]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[233]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}}

/* k9768 in chicken.load#c-toplevel in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9770,c,av);}
/* eval.scm:1037: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[227]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9772 in chicken.load#c-toplevel in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9774,c,av);}
/* eval.scm:1037: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[229];
av2[3]=t1;
tp(4,av2);}}

/* chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in k3563 in ... */
static void f_9776(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_9776,5,t0,t1,t2,t3,t4);}
a=C_alloc(24);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=(C_truep(t3)?t3:((C_word*)t0)[2]);
t30=C_set_block_item(t22,0,t29);
t31=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9819,a[2]=t18,a[3]=((C_word)li178),tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9854,a[2]=t26,a[3]=t28,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t22,a[8]=t6,a[9]=t14,a[10]=t2,a[11]=t24,tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_not(*((C_word*)lf[216]+1)))){
/* eval.scm:1067: chicken.platform#feature? */
t33=*((C_word*)lf[261]+1);{
C_word av2[3];
av2[0]=t33;
av2[1]=t32;
av2[2]=lf[262];
((C_proc)(void*)(*((C_word*)t33+1)))(3,av2);}}
else{
t33=t32;{
C_word av2[2];
av2[0]=t33;
av2[1]=C_SCHEME_FALSE;
f_9854(2,av2);}}}

/* k9812 */
static void C_ccall f_9814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9814,c,av);}
if(C_truep(t1)){
/* eval.scm:1060: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[227]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[237];
tp(4,av2);}}
else{
/* eval.scm:1057: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[228]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[238];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* f_9819 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void f_9819(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_9819,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9823,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9850,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9814,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1055: path-separator-index/right */
f_9575(t5,t2);}

/* k9821 */
static void C_ccall f_9823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_9823,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9846,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1061: c-toplevel */
f_9762(t3,((C_word*)t0)[3],lf[237]);}

/* k9824 in k9821 */
static void C_ccall f_9826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9826,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1063: c-toplevel */
f_9762(t2,C_SCHEME_FALSE,lf[237]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k9840 in k9824 in k9821 */
static void C_ccall f_9842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9842,c,av);}
/* eval.scm:1063: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[236]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9844 in k9821 */
static void C_ccall f_9846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9846,c,av);}
/* eval.scm:1061: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[236]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9848 */
static void C_ccall f_9850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9850,c,av);}
/* eval.scm:1060: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[227]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[237];
tp(4,av2);}}

/* k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in k3566 in ... */
static void C_ccall f_9854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_9854,c,av);}
a=C_alloc(17);
t2=C_set_block_item(((C_word*)t0)[2],0,t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10083,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1070: scheme#port? */
t5=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in k3569 in ... */
static void C_ccall f_9858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_9858,c,av);}
a=C_alloc(16);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9861,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10080,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1081: load-verbose */
t5=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in k3572 in ... */
static void C_ccall f_9861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9861,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
if(C_truep(((C_word*)((C_word*)t0)[10])[1])){
/* eval.scm:1087: dload */
t3=((C_word*)((C_word*)t0)[11])[1];
f_9819(t3,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9864(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9864(2,av2);}}}

/* k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in k3616 in ... */
static void C_ccall f_9864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_9864,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9872,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word)li191),tmp=(C_word)a,a+=10,tmp);
t4=t3;
f_9872(t4,t2);}}

/* k9865 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void C_ccall f_9867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9867,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in k8018 in ... */
static void f_9872(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,4)))){
C_save_and_reclaim_args((void *)trf_9872,2,t0,t1);}
a=C_alloc(40);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9878,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li179),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9887,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],a[9]=((C_word)li189),tmp=(C_word)a,a+=10,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10049,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li190),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1090: ##sys#dynamic-wind */
t17=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t17;
av2[1]=t1;
av2[2]=t14;
av2[3]=t15;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* a9877 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_9878(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9878,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[239]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[215]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[19]+1));
t5=C_mutate((C_word*)lf[239]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[215]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in k8037 in ... */
static void C_ccall f_9887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9887,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* eval.scm:1093: open-input-file */
t3=*((C_word*)lf[250]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[8];
f_9891(2,av2);}}}

/* k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in k8128 in ... */
static void C_ccall f_9891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9891,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9894,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:1094: case-sensitive */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in k8131 in ... */
static void C_ccall f_9894(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_9894,c,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=*((C_word*)lf[240]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9899,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li180),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9906,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li187),tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10037,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word)li188),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1096: ##sys#dynamic-wind */
t8=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[9];
av2[2]=t5;
av2[3]=t6;
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* a9898 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in ... */
static void C_ccall f_9899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9899,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9904,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1097: case-sensitive */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9902 in a9898 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in ... */
static void C_ccall f_9904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9904,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in k8134 in ... */
static void C_ccall f_9906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9906,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:1099: scheme#peek-char */
t3=*((C_word*)lf[248]+1);{
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

/* k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in k8137 in ... */
static void C_ccall f_9910(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_9910,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_eqp(t1,C_make_character(127));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10028,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10032,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9913(2,av2);}}}

/* k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in k8140 in ... */
static void C_ccall f_9913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9913,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1107: read-with-source-info */
t3=((C_word*)t0)[2];{
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

/* k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in k11527 in ... */
static void C_ccall f_9916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9916,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9921,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li186),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_9921(t5,((C_word*)t0)[8],t1);}

/* doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in k11519 in ... */
static void f_9921(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9921,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9931,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[8])){
/* eval.scm:1110: printer */
t4=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9931(2,av2);}}}}

/* k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in k11511 in ... */
static void C_ccall f_9931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_9931,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9943,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li183),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9977,a[2]=((C_word*)t0)[9],a[3]=((C_word)li185),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1111: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k9932 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in ... */
static void C_ccall f_9934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9934,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1108: read-with-source-info */
t3=((C_word*)t0)[4];{
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

/* k9939 in k9932 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in ... */
static void C_ccall f_9941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9941,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9921(t2,((C_word*)t0)[3],t1);}

/* a9942 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in ... */
static void C_ccall f_9943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9943,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1114: ##sys#start-timer */
t3=*((C_word*)lf[243]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* eval.scm:1115: evalproc */
t2=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}}

/* k9948 in a9942 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in ... */
static void C_ccall f_9950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9950,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li181),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9961,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1114: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9954 in k9948 in a9942 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in ... */
static void C_ccall f_9955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9955,c,av);}
/* eval.scm:1114: evalproc */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a9960 in k9948 in a9942 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in ... */
static void C_ccall f_9961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_9961,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9965,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9972,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1114: ##sys#stop-timer */
t5=*((C_word*)lf[242]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9963 in a9960 in k9948 in a9942 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in ... */
static void C_ccall f_9965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9965,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k9970 in a9960 in k9948 in a9942 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in ... */
static void C_ccall f_9972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9972,c,av);}
/* eval.scm:1114: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[241]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a9976 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in k11503 in ... */
static void C_ccall f_9977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_9977,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(((C_word*)t0)[2])){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9994,a[2]=t4,a[3]=((C_word)li184),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9994(t6,t1,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9984 in for-each-loop2385 in a9976 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in ... */
static void C_ccall f_9986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9986,c,av);}
/* eval.scm:1121: newline */
t2=*((C_word*)lf[244]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2385 in a9976 in k9929 in doloop2375 in k9914 in k9911 in k9908 in a9905 in k9892 in k9889 in a9886 in a9871 in k9862 in k9859 in k9856 in k9852 in chicken.load#load/internal in k9656 in k9561 in k9558 in k9541 in k8251 in ... */
static void f_9994(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9994,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10004,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9986,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1120: write */
t6=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_eval_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2340))){
C_save(t1);
C_rereclaim2(2340*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,360);
lf[0]=C_h_intern(&lf[0],4, C_text("eval"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.eval#"));
lf[2]=C_h_intern(&lf[2],21, C_text("##sys#unbound-in-eval"));
lf[3]=C_h_intern(&lf[3],22, C_text("##sys#eval-debug-level"));
lf[5]=C_h_intern(&lf[5],9, C_text("##sys#get"));
lf[6]=C_h_intern(&lf[6],18, C_text("##core#macro-alias"));
lf[7]=C_h_intern(&lf[7],13, C_text("scheme#values"));
lf[8]=C_h_intern(&lf[8],14, C_text("scheme#symbol?"));
lf[9]=C_h_intern(&lf[9],25, C_text("##sys#current-environment"));
lf[10]=C_h_intern(&lf[10],9, C_text("frameinfo"));
lf[11]=C_h_intern(&lf[11],20, C_text("##sys#current-thread"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\074\163\171\156\164\141\170\076\000"));
lf[13]=C_h_intern(&lf[13],30, C_text("chicken.syntax#get-line-number"));
lf[14]=C_h_intern(&lf[14],22, C_text("##sys#make-lambda-info"));
lf[15]=C_h_intern(&lf[15],24, C_text("scheme#get-output-string"));
lf[16]=C_h_intern(&lf[16],12, C_text("scheme#write"));
lf[17]=C_h_intern(&lf[17],25, C_text("scheme#open-output-string"));
lf[18]=C_h_intern(&lf[18],21, C_text("##sys#decorate-lambda"));
lf[19]=C_h_intern(&lf[19],29, C_text("##sys#current-source-filename"));
lf[20]=C_h_intern(&lf[20],18, C_text("##sys#dynamic-wind"));
lf[21]=C_h_intern(&lf[21],23, C_text("##sys#canonicalize-body"));
lf[22]=C_h_intern(&lf[22],13, C_text("scheme#append"));
lf[23]=C_h_intern(&lf[23],12, C_text("##core#begin"));
lf[24]=C_h_intern(&lf[24],29, C_text("##sys#include-forms-from-file"));
lf[25]=C_h_intern(&lf[25],11, C_text("##sys#error"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\165\156\142\157\165\156\144\040\166\141\162\151\141\142\154\145\000"));
lf[27]=C_h_intern(&lf[27],34, C_text("##sys#symbol-has-toplevel-binding?"));
lf[28]=C_h_intern(&lf[28],23, C_text("##sys#alias-global-hook"));
lf[29]=C_h_intern(&lf[29],26, C_text("##sys#syntax-error/context"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\151\154\154\145\147\141\154\040\156\157\156\055\141\164\157\155\151\143\040\157\142\152\145\143\164\000"));
lf[31]=C_h_intern(&lf[31],34, C_text("##sys#update-line-number-database!"));
lf[32]=C_h_intern(&lf[32],12, C_text("##core#quote"));
lf[33]=C_h_intern(&lf[33],27, C_text("chicken.syntax#strip-syntax"));
lf[34]=C_h_intern(&lf[34],13, C_text("##core#syntax"));
lf[35]=C_h_intern(&lf[35],12, C_text("##core#check"));
lf[36]=C_h_intern(&lf[36],16, C_text("##core#immutable"));
lf[37]=C_h_intern(&lf[37],16, C_text("##core#undefined"));
lf[38]=C_h_intern(&lf[38],9, C_text("##core#if"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[41]=C_h_intern(&lf[41],33, C_text("##core#ensure-toplevel-definition"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[43]=C_h_intern(&lf[43],18, C_text("##sys#put/restore!"));
lf[44]=C_h_intern(&lf[44],14, C_text("##sys#override"));
lf[45]=C_h_intern(&lf[45],5, C_text("value"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\071\164\157\160\154\145\166\145\154\040\144\145\146\151\156\151\164\151\157\156\040\151\156\040\156\157\156\055\164\157\160\154\145\166\145\154\040\143\157\156\164\145\170\164\040\146\157\162\040\166\141\162\151\141\142\154\145\000"));
lf[47]=C_h_intern(&lf[47],11, C_text("##core#set!"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\145\156\166\151\162\157\156\155\145\156\164\040\151\163\040\156\157\164\040\155\165\164\141\142\154\145\000"));
lf[49]=C_h_intern(&lf[49],21, C_text("##sys#notices-enabled"));
lf[50]=C_h_intern(&lf[50],12, C_text("##sys#notice"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\141\163\163\151\147\156\155\145\156\164\040\164\157\040\151\155\160\157\162\164\145\144\040\166\141\154\165\145\040\142\151\156\144\151\156\147\000"));
lf[52]=C_h_intern(&lf[52],10, C_text("##core#let"));
lf[53]=C_h_intern(&lf[53],3, C_text("map"));
lf[54]=C_h_intern(&lf[54],12, C_text("scheme#cadar"));
lf[55]=C_h_intern(&lf[55],13, C_text("scheme#cadadr"));
lf[56]=C_h_intern(&lf[56],17, C_text("##sys#make-vector"));
lf[57]=C_h_intern(&lf[57],15, C_text("##sys#extend-se"));
lf[58]=C_h_intern(&lf[58],19, C_text("chicken.base#gensym"));
lf[59]=C_h_intern(&lf[59],14, C_text("##core#letrec*"));
lf[60]=C_h_intern(&lf[60],12, C_text("##sys#append"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[62]=C_h_intern(&lf[62],13, C_text("##core#letrec"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[64]=C_h_intern(&lf[64],13, C_text("##core#lambda"));
lf[65]=C_h_intern(&lf[65],1, C_text("?"));
lf[66]=C_h_intern(&lf[66],12, C_text("##sys#vector"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\142\141\144\040\141\162\147\165\155\145\156\164\040\143\157\165\156\164\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\142\141\144\040\141\162\147\165\155\145\156\164\040\143\157\165\156\164\000"));
lf[69]=C_h_intern(&lf[69],27, C_text("##sys#decompose-lambda-list"));
lf[70]=C_h_intern(&lf[70],33, C_text("##sys#expand-extended-lambda-list"));
lf[71]=C_h_intern(&lf[71],18, C_text("##sys#syntax-error"));
lf[72]=C_h_intern(&lf[72],27, C_text("##sys#extended-lambda-list?"));
lf[73]=C_h_intern(&lf[73],18, C_text("##sys#check-syntax"));
lf[74]=C_h_intern(&lf[74],6, C_text("lambda"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[76]=C_h_intern(&lf[76],17, C_text("##core#let-syntax"));
lf[77]=C_h_intern(&lf[77],24, C_text("##sys#ensure-transformer"));
lf[78]=C_h_intern(&lf[78],15, C_text("##sys#eval/meta"));
lf[79]=C_h_intern(&lf[79],20, C_text("##core#letrec-syntax"));
lf[80]=C_h_intern(&lf[80],8, C_text("for-each"));
lf[81]=C_h_intern(&lf[81],20, C_text("##core#define-syntax"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[83]=C_h_intern(&lf[83],30, C_text("##sys#extend-macro-environment"));
lf[84]=C_h_intern(&lf[84],28, C_text("##sys#register-syntax-export"));
lf[85]=C_h_intern(&lf[85],20, C_text("##sys#current-module"));
lf[86]=C_h_intern(&lf[86],6, C_text("syntax"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\145\156\166\151\162\157\156\155\145\156\164\040\151\163\040\156\157\164\040\155\165\164\141\142\154\145\000"));
lf[88]=C_h_intern(&lf[88],29, C_text("##core#define-compiler-syntax"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[90]=C_h_intern(&lf[90],26, C_text("##core#let-compiler-syntax"));
lf[91]=C_h_intern(&lf[91],14, C_text("##core#include"));
lf[92]=C_h_intern(&lf[92],17, C_text("##core#include-ci"));
lf[93]=C_h_intern(&lf[93],23, C_text("##core#let-module-alias"));
lf[94]=C_h_intern(&lf[94],25, C_text("##sys#with-module-aliases"));
lf[95]=C_h_intern(&lf[95],7, C_text("functor"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016"));
lf[97]=C_h_intern(&lf[97],13, C_text("##core#module"));
lf[98]=C_h_intern(&lf[98],23, C_text("##sys#macro-environment"));
lf[99]=C_h_intern(&lf[99],30, C_text("##sys#module-alias-environment"));
lf[100]=C_h_intern(&lf[100],31, C_text("##sys#initial-macro-environment"));
lf[101]=C_h_intern(&lf[101],21, C_text("##sys#undefined-value"));
lf[102]=C_h_intern(&lf[102],13, C_text("##sys#provide"));
lf[103]=C_h_intern(&lf[103],35, C_text("chicken.internal#module-requirement"));
lf[104]=C_h_intern(&lf[104],21, C_text("##sys#finalize-module"));
lf[105]=C_h_intern(&lf[105],14, C_text("scheme#reverse"));
lf[106]=C_h_intern(&lf[106],27, C_text("##sys#with-property-restore"));
lf[107]=C_h_intern(&lf[107],21, C_text("##sys#register-module"));
lf[108]=C_h_intern(&lf[108],6, C_text("module"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\155\157\144\165\154\145\163\040\155\141\171\040\156\157\164\040\142\145\040\156\145\163\164\145\144\000"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\151\156\166\141\154\151\144\040\145\170\160\157\162\164\040\163\171\156\164\141\170\000"));
lf[111]=C_h_intern(&lf[111],18, C_text("##core#loop-lambda"));
lf[112]=C_h_intern(&lf[112],14, C_text("##core#provide"));
lf[113]=C_h_intern(&lf[113],25, C_text("##core#require-for-syntax"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[115]=C_h_intern(&lf[115],27, C_text("chicken.load#load-extension"));
lf[116]=C_h_intern(&lf[116],14, C_text("##core#require"));
lf[117]=C_h_intern(&lf[117],21, C_text("##sys#process-require"));
lf[118]=C_h_intern(&lf[118],26, C_text("##core#elaborationtimeonly"));
lf[119]=C_h_intern(&lf[119],25, C_text("##core#elaborationtimetoo"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[121]=C_h_intern(&lf[121],21, C_text("##core#compiletimetoo"));
lf[122]=C_h_intern(&lf[122],22, C_text("##core#compiletimeonly"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[124]=C_h_intern(&lf[124],14, C_text("##core#declare"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\144\145\143\154\141\162\141\164\151\157\156\163\040\141\162\145\040\151\147\156\157\162\145\144\040\151\156\040\151\156\164\145\162\160\162\145\164\145\144\040\143\157\144\145\000"));
lf[127]=C_h_intern(&lf[127],20, C_text("##core#define-inline"));
lf[128]=C_h_intern(&lf[128],22, C_text("##core#define-constant"));
lf[129]=C_h_intern(&lf[129],6, C_text("define"));
lf[130]=C_h_intern(&lf[130],16, C_text("##core#primitive"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\145\166\141\154\165\141\164\145\040\143\157\155\160\151\154\145\162\055\163\160\145\143\151\141\154\055\146\157\162\155\000"));
lf[132]=C_h_intern(&lf[132],10, C_text("##core#app"));
lf[133]=C_h_intern(&lf[133],10, C_text("##core#the"));
lf[134]=C_h_intern(&lf[134],15, C_text("##core#typecase"));
lf[135]=C_h_intern(&lf[135],4, C_text("else"));
lf[136]=C_h_intern(&lf[136],17, C_text("compiler-typecase"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\070\156\157\040\140\145\154\163\145\055\143\154\141\165\163\145\047\040\151\156\040\165\156\162\145\163\157\154\166\145\144\040\140\143\157\155\160\151\154\145\162\055\164\171\160\145\143\141\163\145\047\040\146\157\162\155\000"));
lf[138]=C_h_intern(&lf[138],20, C_text("##sys#syntax-context"));
lf[139]=C_h_intern(&lf[139],13, C_text("##core#inline"));
lf[140]=C_h_intern(&lf[140],22, C_text("##core#inline_allocate"));
lf[141]=C_h_intern(&lf[141],21, C_text("##core#foreign-lambda"));
lf[142]=C_h_intern(&lf[142],30, C_text("##core#define-foreign-variable"));
lf[143]=C_h_intern(&lf[143],31, C_text("##core#define-external-variable"));
lf[144]=C_h_intern(&lf[144],19, C_text("##core#let-location"));
lf[145]=C_h_intern(&lf[145],24, C_text("##core#foreign-primitive"));
lf[146]=C_h_intern(&lf[146],15, C_text("##core#location"));
lf[147]=C_h_intern(&lf[147],22, C_text("##core#foreign-lambda*"));
lf[148]=C_h_intern(&lf[148],26, C_text("##core#define-foreign-type"));
lf[149]=C_h_intern(&lf[149],15, C_text("##core#callunit"));
lf[150]=C_h_intern(&lf[150],27, C_text("##core#local-specialization"));
lf[151]=C_h_intern(&lf[151],36, C_text("chicken.syntax#expansion-result-hook"));
lf[152]=C_h_intern(&lf[152],21, C_text("chicken.syntax#expand"));
lf[153]=C_h_intern(&lf[153],20, C_text("##sys#srfi-4-vector?"));
lf[154]=C_h_intern(&lf[154],30, C_text("chicken.bytevector#bytevector?"));
lf[155]=C_h_intern(&lf[155],24, C_text("chicken.keyword#keyword?"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\074\145\166\141\154\076\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\155\141\154\146\157\162\155\145\144\040\145\170\160\162\145\163\163\151\157\156\000"));
lf[158]=C_h_intern(&lf[158],28, C_text("##sys#meta-macro-environment"));
lf[159]=C_h_intern(&lf[159],30, C_text("##sys#current-meta-environment"));
lf[160]=C_h_intern(&lf[160],19, C_text("scheme#dynamic-wind"));
lf[161]=C_h_intern(&lf[161],17, C_text("chicken.base#void"));
lf[162]=C_h_intern(&lf[162],25, C_text("chicken.eval#eval-handler"));
lf[163]=C_h_intern(&lf[163],11, C_text("scheme#eval"));
lf[164]=C_h_intern(&lf[164],31, C_text("chicken.eval#module-environment"));
lf[165]=C_h_intern(&lf[165],33, C_text("chicken.module#module-environment"));
lf[166]=C_h_intern(&lf[166],26, C_text("##sys#syntax-error-culprit"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\151\154\154\145\147\141\154\040\154\141\155\142\144\141\055\154\151\163\164\040\163\171\156\164\141\170\000"));
lf[168]=C_h_intern(&lf[168],11, C_text("environment"));
lf[169]=C_h_intern(&lf[169],23, C_text("interaction-environment"));
lf[170]=C_h_intern(&lf[170],30, C_text("scheme#interaction-environment"));
lf[171]=C_h_intern(&lf[171],5, C_text("foldr"));
lf[172]=C_h_intern(&lf[172],11, C_text("cond-expand"));
lf[173]=C_h_intern(&lf[173],16, C_text("define-interface"));
lf[174]=C_h_intern(&lf[174],11, C_text("delay-force"));
lf[175]=C_h_intern(&lf[175],6, C_text("export"));
lf[176]=C_h_intern(&lf[176],13, C_text("export/rename"));
lf[177]=C_h_intern(&lf[177],14, C_text("define-library"));
lf[178]=C_h_intern(&lf[178],6, C_text("import"));
lf[179]=C_h_intern(&lf[179],17, C_text("import-for-syntax"));
lf[180]=C_h_intern(&lf[180],13, C_text("import-syntax"));
lf[181]=C_h_intern(&lf[181],24, C_text("import-syntax-for-syntax"));
lf[182]=C_h_intern(&lf[182],7, C_text("letrec*"));
lf[183]=C_h_intern(&lf[183],8, C_text("reexport"));
lf[184]=C_h_intern(&lf[184],15, C_text("require-library"));
lf[185]=C_h_intern(&lf[185],32, C_text("scheme#scheme-report-environment"));
lf[186]=C_h_intern(&lf[186],25, C_text("scheme-report-environment"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\165\156\163\165\160\160\157\162\164\145\144\040\163\143\150\145\155\145\040\162\145\160\157\162\164\040\145\156\166\151\162\157\156\155\145\156\164\040\166\145\162\163\151\157\156\000"));
lf[188]=C_h_intern(&lf[188],23, C_text("scheme#null-environment"));
lf[189]=C_h_intern(&lf[189],16, C_text("null-environment"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\165\156\163\165\160\160\157\162\164\145\144\040\156\165\154\154\040\145\156\166\151\162\157\156\155\145\156\164\040\166\145\162\163\151\157\156\000"));
lf[191]=C_h_intern(&lf[191],13, C_text("chicken.load#"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\150\151\143\153\145\156\056\146\157\162\145\151\147\156\376\003\000\000\002\376\001\000\000\031\001\043\043\143\157\162\145\043\162\145\161\165\151\162\145\055\146\157\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\055\146\146\151\055\163\171\156\164\141\170\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\001\000\000\014\001\043\043\143\157\162\145\043\142\145\147\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\043\043\143\157\162\145\043\162\145\161\165\151\162\145\055\146\157\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\055\163\171\156\164\141\170\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\043\043\143\157\162\145\043\162\145\161\165\151\162\145\376\003\000\000\002\376\001\000\000\007\001\154\151\142\162\141\162\171\376\377\016\376\377\016\376\377\016"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\055\146\146\151\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\014\001\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\001\000\000\017\001\144\141\164\141\055\163\164\162\165\143\164\165\162\145\163\376\003\000\000\002\376\001\000\000\017\001\144\145\142\165\147\147\145\162\055\143\154\151\145\156\164\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\003\000\000\002\376\001\000\000\014\001\145\166\141\154\055\155\157\144\165\154\145\163\376\003\000\000\002\376\001\000\000\006\001\145\170\160\141\156\144\376\003\000\000\002\376\001\000\000\006\001\145\170\164\162\141\163\376\003\000\000\002\376\001\000\000\004\001\146\151\154\145\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\162\156\141\154\376\003\000\000\002\376\001\000\000\007\001\151\162\162\145\147\145\170\376\003\000\000\002\376\001\000\000\007\001\154\151\142\162\141\162\171\376\003\000\000\002\376\001\000\000\007\001\154\157\154\145\166\145\154\376\003\000\000\002\376\001\000\000\010\001\160\141\164\150\156\141\155\145\376\003\000\000\002\376\001\000\000\004\001\160\157\162\164\376\003\000\000\002\376\001\000\000\005\001\160\157\163\151\170\376\003\000\000\002\376\001\000\000\010\001\160\162\157\146\151\154\145\162\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\004\001\162\145\160\154\376\003\000\000\002\376\001\000\000\011\001\163\143\150\145\144\165\154\145\162\376\003\000\000\002\376\001\000\000\006\001\163\162\146\151\055\064\376\003\000\000\002\376\001\000\000\003\001\164\143\160\376\003\000\000\002\376\001\000\000\005\001\162\067\154\151\142\376\377\016"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\056\163\157\000"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\163\143\155\000"));
lf[201]=C_h_intern(&lf[201],28, C_text("##sys#load-dynamic-extension"));
lf[202]=C_h_intern(&lf[202],26, C_text("chicken.load#core-library?"));
lf[204]=C_h_intern(&lf[204],15, C_text("##sys#provided?"));
lf[205]=C_h_intern(&lf[205],22, C_text("##sys#windows-platform"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\057\376\377\016"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\057\376\377\016"));
lf[211]=C_h_intern(&lf[211],20, C_text("scheme#string-append"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[213]=C_h_intern(&lf[213],15, C_text("##sys#substring"));
lf[214]=C_h_intern(&lf[214],25, C_text("chicken.load#load-verbose"));
lf[215]=C_h_intern(&lf[215],27, C_text("##sys#current-load-filename"));
lf[216]=C_h_intern(&lf[216],20, C_text("##sys#dload-disabled"));
lf[217]=C_h_intern(&lf[217],35, C_text("chicken.load#set-dynamic-load-mode!"));
lf[218]=C_h_intern(&lf[218],23, C_text("##sys#set-dlopen-flags!"));
lf[219]=C_h_intern(&lf[219],6, C_text("global"));
lf[220]=C_h_intern(&lf[220],5, C_text("local"));
lf[221]=C_h_intern(&lf[221],4, C_text("lazy"));
lf[222]=C_h_intern(&lf[222],3, C_text("now"));
lf[223]=C_h_intern(&lf[223],17, C_text("##sys#signal-hook"));
lf[224]=C_h_intern(&lf[224],22, C_text("set-dynamic-load-mode!"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\151\156\166\141\154\151\144\040\144\171\156\141\155\151\143\055\154\157\141\144\040\155\157\144\145\000"));
lf[227]=C_h_intern(&lf[227],19, C_text("##sys#make-c-string"));
lf[228]=C_h_intern(&lf[228],19, C_text("##sys#string-append"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\103\137\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\164\157\160\154\145\166\145\154\000"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\137\164\157\160\154\145\166\145\154\000"));
lf[232]=C_h_intern(&lf[232],37, C_text("chicken.internal#string->c-identifier"));
lf[233]=C_h_intern(&lf[233],27, C_text("##sys#symbol->string/shared"));
lf[234]=C_h_intern(&lf[234],27, C_text("chicken.base#case-sensitive"));
lf[236]=C_h_intern(&lf[236],11, C_text("##sys#dload"));
lf[237]=C_h_intern(&lf[237],4, C_text("load"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\057\000"));
lf[239]=C_h_intern(&lf[239],33, C_text("##sys#read-error-with-line-number"));
lf[240]=C_h_intern(&lf[240],36, C_text("chicken.syntax#read-with-source-info"));
lf[241]=C_h_intern(&lf[241],19, C_text("##sys#display-times"));
lf[242]=C_h_intern(&lf[242],16, C_text("##sys#stop-timer"));
lf[243]=C_h_intern(&lf[243],17, C_text("##sys#start-timer"));
lf[244]=C_h_intern(&lf[244],14, C_text("scheme#newline"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\165\156\141\142\154\145\040\164\157\040\154\157\141\144\040\143\157\155\160\151\154\145\144\040\155\157\144\165\154\145\040\055\040\000"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\165\156\153\156\157\167\156\040\162\145\141\163\157\156\000"));
lf[247]=C_h_intern(&lf[247],19, C_text("##sys#peek-c-string"));
lf[248]=C_h_intern(&lf[248],16, C_text("scheme#peek-char"));
lf[249]=C_h_intern(&lf[249],23, C_text("scheme#close-input-port"));
lf[250]=C_h_intern(&lf[250],22, C_text("scheme#open-input-file"));
lf[251]=C_h_intern(&lf[251],25, C_text("chicken.base#flush-output"));
lf[252]=C_h_intern(&lf[252],14, C_text("scheme#display"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\056\056\056\012\000"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\073\040\154\157\141\144\151\156\147\040\000"));
lf[255]=C_h_intern_kw(&lf[255],10, C_text("type-error"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[257]=C_h_intern_kw(&lf[257],10, C_text("file-error"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[259]=C_h_intern(&lf[259],18, C_text("##sys#file-exists?"));
lf[260]=C_h_intern(&lf[260],12, C_text("scheme#port?"));
lf[261]=C_h_intern(&lf[261],25, C_text("chicken.platform#feature?"));
lf[262]=C_h_intern_kw(&lf[262],5, C_text("dload"));
lf[264]=C_h_intern(&lf[264],11, C_text("scheme#load"));
lf[265]=C_h_intern(&lf[265],26, C_text("chicken.load#load-relative"));
lf[266]=C_h_intern(&lf[266],25, C_text("chicken.load#load-noisily"));
lf[267]=C_h_intern_kw(&lf[267],3, C_text("env"));
lf[268]=C_h_intern(&lf[268],17, C_text("##sys#get-keyword"));
lf[269]=C_h_intern_kw(&lf[269],7, C_text("printer"));
lf[270]=C_h_intern_kw(&lf[270],4, C_text("time"));
lf[271]=C_h_intern(&lf[271],35, C_text("chicken.load#dynamic-load-libraries"));
lf[272]=C_h_intern(&lf[272],22, C_text("chicken.load#load-unit"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\165\156\141\142\154\145\040\164\157\040\154\157\141\144\040\154\151\142\162\141\162\171\000"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\154\151\142\162\141\162\171\040\156\157\164\040\146\157\165\156\144\000"));
lf[275]=C_h_intern(&lf[275],12, C_text("load-library"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\056\056\056\012\000"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\073\040\154\157\141\144\151\156\147\040\154\151\142\162\141\162\171\040\000"));
lf[278]=C_h_intern(&lf[278],25, C_text("chicken.load#load-library"));
lf[279]=C_h_intern(&lf[279],27, C_text("scheme#call-with-input-file"));
lf[280]=C_h_intern(&lf[280],18, C_text("chicken.base#print"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\073\040\151\156\143\154\165\144\151\156\147\040\000"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\040\056\056\056\000"));
lf[283]=C_h_intern(&lf[283],7, C_text("include"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[285]=C_h_intern(&lf[285],30, C_text("##sys#resolve-include-filename"));
lf[286]=C_h_intern(&lf[286],16, C_text("##sys#setup-mode"));
lf[288]=C_h_intern(&lf[288],22, C_text("chicken.load#find-file"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[290]=C_h_intern(&lf[290],35, C_text("chicken.load#find-dynamic-extension"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\002\056\000\376\377\016"));
lf[293]=C_h_intern(&lf[293],23, C_text("##sys#include-pathnames"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\002\056\000\376\377\016"));
lf[295]=C_h_intern(&lf[295],21, C_text("scheme#symbol->string"));
lf[296]=C_h_intern(&lf[296],32, C_text("chicken.platform#repository-path"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\154\157\141\144\040\145\170\164\145\156\163\151\157\156\000"));
lf[298]=C_h_intern(&lf[298],20, C_text("chicken.load#require"));
lf[299]=C_h_intern(&lf[299],7, C_text("require"));
lf[300]=C_h_intern(&lf[300],20, C_text("chicken.load#provide"));
lf[301]=C_h_intern(&lf[301],7, C_text("provide"));
lf[302]=C_h_intern(&lf[302],22, C_text("chicken.load#provided?"));
lf[303]=C_h_intern(&lf[303],9, C_text("provided?"));
lf[304]=C_h_intern(&lf[304],6, C_text("static"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[308]=C_h_intern(&lf[308],37, C_text("chicken.condition#print-error-message"));
lf[309]=C_h_intern(&lf[309],40, C_text("chicken.condition#with-exception-handler"));
lf[310]=C_h_intern(&lf[310],37, C_text("scheme#call-with-current-continuation"));
lf[312]=C_h_intern(&lf[312],8, C_text("##sys#gc"));
lf[314]=C_h_intern(&lf[314],19, C_text("##sys#thread-yield!"));
lf[317]=C_h_intern(&lf[317],11, C_text("scheme#read"));
lf[318]=C_h_intern(&lf[318],24, C_text("scheme#open-input-string"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\105\162\162\157\162\072\040\156\157\164\040\145\156\157\165\147\150\040\162\157\157\155\040\146\157\162\040\162\145\163\165\154\164\040\163\164\162\151\156\147\000"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\116\157\040\145\162\162\157\162\000"));
lf[329]=C_h_intern(&lf[329],21, C_text("scheme#make-parameter"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[331]=C_h_intern(&lf[331],20, C_text("##sys#fixnum->string"));
lf[332]=C_h_intern(&lf[332],6, C_text("cygwin"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\015\143\171\147\143\150\151\143\153\145\156\055\060\000\376\377\016"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\154\151\142\000"));
lf[335]=C_h_intern(&lf[335],33, C_text("chicken.platform#software-version"));
lf[336]=C_h_intern(&lf[336],7, C_text("windows"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\144\154\154\000"));
lf[338]=C_h_intern(&lf[338],6, C_text("macosx"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\056\144\171\154\151\142\000"));
lf[340]=C_h_intern(&lf[340],4, C_text("hpux"));
lf[341]=C_h_intern(&lf[341],4, C_text("hppa"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\056\163\154\000"));
lf[343]=C_h_intern(&lf[343],29, C_text("chicken.platform#machine-type"));
lf[344]=C_h_intern(&lf[344],30, C_text("chicken.platform#software-type"));
lf[345]=C_h_intern(&lf[345],16, C_text("scheme.r5rs-null"));
lf[346]=C_h_intern(&lf[346],18, C_text("null-environment/5"));
lf[347]=C_h_intern(&lf[347],16, C_text("scheme.r4rs-null"));
lf[348]=C_h_intern(&lf[348],18, C_text("null-environment/4"));
lf[349]=C_h_intern(&lf[349],11, C_text("scheme.r5rs"));
lf[350]=C_h_intern(&lf[350],27, C_text("scheme-report-environment/5"));
lf[351]=C_h_intern(&lf[351],11, C_text("scheme.r4rs"));
lf[352]=C_h_intern(&lf[352],27, C_text("scheme-report-environment/4"));
lf[353]=C_h_intern(&lf[353],18, C_text("##sys#write-char-0"));
lf[354]=C_h_intern(&lf[354],11, C_text("##sys#print"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\043\074\145\156\166\151\162\157\156\155\145\156\164\040\000"));
lf[356]=C_h_intern(&lf[356],32, C_text("chicken.base#set-record-printer!"));
lf[357]=C_h_intern(&lf[357],10, C_text("##sys#put!"));
lf[358]=C_h_intern(&lf[358],39, C_text("chicken.internal#default-syntax-imports"));
lf[359]=C_h_intern(&lf[359],32, C_text("chicken.internal#default-imports"));
C_register_lf2(lf,360,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3565,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_modules_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[745] = {
{C_text("f12353:eval_2escm"),(void*)f12353},
{C_text("f_10004:eval_2escm"),(void*)f_10004},
{C_text("f_10028:eval_2escm"),(void*)f_10028},
{C_text("f_10032:eval_2escm"),(void*)f_10032},
{C_text("f_10037:eval_2escm"),(void*)f_10037},
{C_text("f_10041:eval_2escm"),(void*)f_10041},
{C_text("f_10049:eval_2escm"),(void*)f_10049},
{C_text("f_10068:eval_2escm"),(void*)f_10068},
{C_text("f_10071:eval_2escm"),(void*)f_10071},
{C_text("f_10074:eval_2escm"),(void*)f_10074},
{C_text("f_10080:eval_2escm"),(void*)f_10080},
{C_text("f_10083:eval_2escm"),(void*)f_10083},
{C_text("f_10098:eval_2escm"),(void*)f_10098},
{C_text("f_10101:eval_2escm"),(void*)f_10101},
{C_text("f_10104:eval_2escm"),(void*)f_10104},
{C_text("f_10110:eval_2escm"),(void*)f_10110},
{C_text("f_10122:eval_2escm"),(void*)f_10122},
{C_text("f_10128:eval_2escm"),(void*)f_10128},
{C_text("f_10188:eval_2escm"),(void*)f_10188},
{C_text("f_10202:eval_2escm"),(void*)f_10202},
{C_text("f_10208:eval_2escm"),(void*)f_10208},
{C_text("f_10219:eval_2escm"),(void*)f_10219},
{C_text("f_10227:eval_2escm"),(void*)f_10227},
{C_text("f_10234:eval_2escm"),(void*)f_10234},
{C_text("f_10241:eval_2escm"),(void*)f_10241},
{C_text("f_10249:eval_2escm"),(void*)f_10249},
{C_text("f_10256:eval_2escm"),(void*)f_10256},
{C_text("f_10259:eval_2escm"),(void*)f_10259},
{C_text("f_10266:eval_2escm"),(void*)f_10266},
{C_text("f_10268:eval_2escm"),(void*)f_10268},
{C_text("f_10271:eval_2escm"),(void*)f_10271},
{C_text("f_10276:eval_2escm"),(void*)f_10276},
{C_text("f_10278:eval_2escm"),(void*)f_10278},
{C_text("f_10285:eval_2escm"),(void*)f_10285},
{C_text("f_10287:eval_2escm"),(void*)f_10287},
{C_text("f_10294:eval_2escm"),(void*)f_10294},
{C_text("f_10297:eval_2escm"),(void*)f_10297},
{C_text("f_10300:eval_2escm"),(void*)f_10300},
{C_text("f_10303:eval_2escm"),(void*)f_10303},
{C_text("f_10308:eval_2escm"),(void*)f_10308},
{C_text("f_10322:eval_2escm"),(void*)f_10322},
{C_text("f_10331:eval_2escm"),(void*)f_10331},
{C_text("f_10342:eval_2escm"),(void*)f_10342},
{C_text("f_10349:eval_2escm"),(void*)f_10349},
{C_text("f_10352:eval_2escm"),(void*)f_10352},
{C_text("f_10355:eval_2escm"),(void*)f_10355},
{C_text("f_10368:eval_2escm"),(void*)f_10368},
{C_text("f_10372:eval_2escm"),(void*)f_10372},
{C_text("f_10376:eval_2escm"),(void*)f_10376},
{C_text("f_10378:eval_2escm"),(void*)f_10378},
{C_text("f_10405:eval_2escm"),(void*)f_10405},
{C_text("f_10409:eval_2escm"),(void*)f_10409},
{C_text("f_10412:eval_2escm"),(void*)f_10412},
{C_text("f_10415:eval_2escm"),(void*)f_10415},
{C_text("f_10420:eval_2escm"),(void*)f_10420},
{C_text("f_10431:eval_2escm"),(void*)f_10431},
{C_text("f_10433:eval_2escm"),(void*)f_10433},
{C_text("f_10438:eval_2escm"),(void*)f_10438},
{C_text("f_10449:eval_2escm"),(void*)f_10449},
{C_text("f_10451:eval_2escm"),(void*)f_10451},
{C_text("f_10471:eval_2escm"),(void*)f_10471},
{C_text("f_10481:eval_2escm"),(void*)f_10481},
{C_text("f_10487:eval_2escm"),(void*)f_10487},
{C_text("f_10499:eval_2escm"),(void*)f_10499},
{C_text("f_10506:eval_2escm"),(void*)f_10506},
{C_text("f_10508:eval_2escm"),(void*)f_10508},
{C_text("f_10537:eval_2escm"),(void*)f_10537},
{C_text("f_10549:eval_2escm"),(void*)f_10549},
{C_text("f_10555:eval_2escm"),(void*)f_10555},
{C_text("f_10559:eval_2escm"),(void*)f_10559},
{C_text("f_10562:eval_2escm"),(void*)f_10562},
{C_text("f_10564:eval_2escm"),(void*)f_10564},
{C_text("f_10568:eval_2escm"),(void*)f_10568},
{C_text("f_10571:eval_2escm"),(void*)f_10571},
{C_text("f_10581:eval_2escm"),(void*)f_10581},
{C_text("f_10593:eval_2escm"),(void*)f_10593},
{C_text("f_10600:eval_2escm"),(void*)f_10600},
{C_text("f_10607:eval_2escm"),(void*)f_10607},
{C_text("f_10609:eval_2escm"),(void*)f_10609},
{C_text("f_10622:eval_2escm"),(void*)f_10622},
{C_text("f_10656:eval_2escm"),(void*)f_10656},
{C_text("f_10665:eval_2escm"),(void*)f_10665},
{C_text("f_10681:eval_2escm"),(void*)f_10681},
{C_text("f_10694:eval_2escm"),(void*)f_10694},
{C_text("f_10697:eval_2escm"),(void*)f_10697},
{C_text("f_10709:eval_2escm"),(void*)f_10709},
{C_text("f_10713:eval_2escm"),(void*)f_10713},
{C_text("f_10717:eval_2escm"),(void*)f_10717},
{C_text("f_10720:eval_2escm"),(void*)f_10720},
{C_text("f_10728:eval_2escm"),(void*)f_10728},
{C_text("f_10747:eval_2escm"),(void*)f_10747},
{C_text("f_10757:eval_2escm"),(void*)f_10757},
{C_text("f_10770:eval_2escm"),(void*)f_10770},
{C_text("f_10793:eval_2escm"),(void*)f_10793},
{C_text("f_10812:eval_2escm"),(void*)f_10812},
{C_text("f_10822:eval_2escm"),(void*)f_10822},
{C_text("f_10835:eval_2escm"),(void*)f_10835},
{C_text("f_10858:eval_2escm"),(void*)f_10858},
{C_text("f_10872:eval_2escm"),(void*)f_10872},
{C_text("f_10899:eval_2escm"),(void*)f_10899},
{C_text("f_10968:eval_2escm"),(void*)f_10968},
{C_text("f_10971:eval_2escm"),(void*)f_10971},
{C_text("f_10984:eval_2escm"),(void*)f_10984},
{C_text("f_10987:eval_2escm"),(void*)f_10987},
{C_text("f_10990:eval_2escm"),(void*)f_10990},
{C_text("f_11004:eval_2escm"),(void*)f_11004},
{C_text("f_11040:eval_2escm"),(void*)f_11040},
{C_text("f_11043:eval_2escm"),(void*)f_11043},
{C_text("f_11053:eval_2escm"),(void*)f_11053},
{C_text("f_11055:eval_2escm"),(void*)f_11055},
{C_text("f_11065:eval_2escm"),(void*)f_11065},
{C_text("f_11079:eval_2escm"),(void*)f_11079},
{C_text("f_11090:eval_2escm"),(void*)f_11090},
{C_text("f_11097:eval_2escm"),(void*)f_11097},
{C_text("f_11100:eval_2escm"),(void*)f_11100},
{C_text("f_11105:eval_2escm"),(void*)f_11105},
{C_text("f_11110:eval_2escm"),(void*)f_11110},
{C_text("f_11116:eval_2escm"),(void*)f_11116},
{C_text("f_11122:eval_2escm"),(void*)f_11122},
{C_text("f_11126:eval_2escm"),(void*)f_11126},
{C_text("f_11129:eval_2escm"),(void*)f_11129},
{C_text("f_11133:eval_2escm"),(void*)f_11133},
{C_text("f_11135:eval_2escm"),(void*)f_11135},
{C_text("f_11141:eval_2escm"),(void*)f_11141},
{C_text("f_11147:eval_2escm"),(void*)f_11147},
{C_text("f_11153:eval_2escm"),(void*)f_11153},
{C_text("f_11159:eval_2escm"),(void*)f_11159},
{C_text("f_11163:eval_2escm"),(void*)f_11163},
{C_text("f_11168:eval_2escm"),(void*)f_11168},
{C_text("f_11174:eval_2escm"),(void*)f_11174},
{C_text("f_11178:eval_2escm"),(void*)f_11178},
{C_text("f_11180:eval_2escm"),(void*)f_11180},
{C_text("f_11186:eval_2escm"),(void*)f_11186},
{C_text("f_11194:eval_2escm"),(void*)f_11194},
{C_text("f_11196:eval_2escm"),(void*)f_11196},
{C_text("f_11200:eval_2escm"),(void*)f_11200},
{C_text("f_11205:eval_2escm"),(void*)f_11205},
{C_text("f_11209:eval_2escm"),(void*)f_11209},
{C_text("f_11216:eval_2escm"),(void*)f_11216},
{C_text("f_11220:eval_2escm"),(void*)f_11220},
{C_text("f_11222:eval_2escm"),(void*)f_11222},
{C_text("f_11242:eval_2escm"),(void*)f_11242},
{C_text("f_11248:eval_2escm"),(void*)f_11248},
{C_text("f_11252:eval_2escm"),(void*)f_11252},
{C_text("f_11255:eval_2escm"),(void*)f_11255},
{C_text("f_11262:eval_2escm"),(void*)f_11262},
{C_text("f_11266:eval_2escm"),(void*)f_11266},
{C_text("f_11268:eval_2escm"),(void*)f_11268},
{C_text("f_11272:eval_2escm"),(void*)f_11272},
{C_text("f_11277:eval_2escm"),(void*)f_11277},
{C_text("f_11281:eval_2escm"),(void*)f_11281},
{C_text("f_11284:eval_2escm"),(void*)f_11284},
{C_text("f_11291:eval_2escm"),(void*)f_11291},
{C_text("f_11295:eval_2escm"),(void*)f_11295},
{C_text("f_11299:eval_2escm"),(void*)f_11299},
{C_text("f_11303:eval_2escm"),(void*)f_11303},
{C_text("f_11305:eval_2escm"),(void*)f_11305},
{C_text("f_11311:eval_2escm"),(void*)f_11311},
{C_text("f_11319:eval_2escm"),(void*)f_11319},
{C_text("f_11321:eval_2escm"),(void*)f_11321},
{C_text("f_11327:eval_2escm"),(void*)f_11327},
{C_text("f_11331:eval_2escm"),(void*)f_11331},
{C_text("f_11334:eval_2escm"),(void*)f_11334},
{C_text("f_11341:eval_2escm"),(void*)f_11341},
{C_text("f_11345:eval_2escm"),(void*)f_11345},
{C_text("f_11347:eval_2escm"),(void*)f_11347},
{C_text("f_11351:eval_2escm"),(void*)f_11351},
{C_text("f_11356:eval_2escm"),(void*)f_11356},
{C_text("f_11360:eval_2escm"),(void*)f_11360},
{C_text("f_11367:eval_2escm"),(void*)f_11367},
{C_text("f_11369:eval_2escm"),(void*)f_11369},
{C_text("f_11373:eval_2escm"),(void*)f_11373},
{C_text("f_11378:eval_2escm"),(void*)f_11378},
{C_text("f_11382:eval_2escm"),(void*)f_11382},
{C_text("f_11384:eval_2escm"),(void*)f_11384},
{C_text("f_11399:eval_2escm"),(void*)f_11399},
{C_text("f_11401:eval_2escm"),(void*)f_11401},
{C_text("f_11407:eval_2escm"),(void*)f_11407},
{C_text("f_11432:eval_2escm"),(void*)f_11432},
{C_text("f_11446:eval_2escm"),(void*)f_11446},
{C_text("f_11458:eval_2escm"),(void*)f_11458},
{C_text("f_11462:eval_2escm"),(void*)f_11462},
{C_text("f_11489:eval_2escm"),(void*)f_11489},
{C_text("f_11493:eval_2escm"),(void*)f_11493},
{C_text("f_11497:eval_2escm"),(void*)f_11497},
{C_text("f_11501:eval_2escm"),(void*)f_11501},
{C_text("f_11505:eval_2escm"),(void*)f_11505},
{C_text("f_11513:eval_2escm"),(void*)f_11513},
{C_text("f_11521:eval_2escm"),(void*)f_11521},
{C_text("f_11529:eval_2escm"),(void*)f_11529},
{C_text("f_11535:eval_2escm"),(void*)f_11535},
{C_text("f_11539:eval_2escm"),(void*)f_11539},
{C_text("f_11542:eval_2escm"),(void*)f_11542},
{C_text("f_11551:eval_2escm"),(void*)f_11551},
{C_text("f_11557:eval_2escm"),(void*)f_11557},
{C_text("f_11561:eval_2escm"),(void*)f_11561},
{C_text("f_11564:eval_2escm"),(void*)f_11564},
{C_text("f_11576:eval_2escm"),(void*)f_11576},
{C_text("f_11578:eval_2escm"),(void*)f_11578},
{C_text("f_11584:eval_2escm"),(void*)f_11584},
{C_text("f_11589:eval_2escm"),(void*)f_11589},
{C_text("f_11593:eval_2escm"),(void*)f_11593},
{C_text("f_11596:eval_2escm"),(void*)f_11596},
{C_text("f_11606:eval_2escm"),(void*)f_11606},
{C_text("f_11619:eval_2escm"),(void*)f_11619},
{C_text("f_11624:eval_2escm"),(void*)f_11624},
{C_text("f_11631:eval_2escm"),(void*)f_11631},
{C_text("f_11634:eval_2escm"),(void*)f_11634},
{C_text("f_11649:eval_2escm"),(void*)f_11649},
{C_text("f_11657:eval_2escm"),(void*)f_11657},
{C_text("f_11661:eval_2escm"),(void*)f_11661},
{C_text("f_11664:eval_2escm"),(void*)f_11664},
{C_text("f_11668:eval_2escm"),(void*)f_11668},
{C_text("f_11672:eval_2escm"),(void*)f_11672},
{C_text("f_11675:eval_2escm"),(void*)f_11675},
{C_text("f_11678:eval_2escm"),(void*)f_11678},
{C_text("f_11687:eval_2escm"),(void*)f_11687},
{C_text("f_11697:eval_2escm"),(void*)f_11697},
{C_text("f_11701:eval_2escm"),(void*)f_11701},
{C_text("f_11704:eval_2escm"),(void*)f_11704},
{C_text("f_11707:eval_2escm"),(void*)f_11707},
{C_text("f_11710:eval_2escm"),(void*)f_11710},
{C_text("f_11718:eval_2escm"),(void*)f_11718},
{C_text("f_11727:eval_2escm"),(void*)f_11727},
{C_text("f_3565:eval_2escm"),(void*)f_3565},
{C_text("f_3568:eval_2escm"),(void*)f_3568},
{C_text("f_3571:eval_2escm"),(void*)f_3571},
{C_text("f_3574:eval_2escm"),(void*)f_3574},
{C_text("f_3582:eval_2escm"),(void*)f_3582},
{C_text("f_3595:eval_2escm"),(void*)f_3595},
{C_text("f_3603:eval_2escm"),(void*)f_3603},
{C_text("f_3607:eval_2escm"),(void*)f_3607},
{C_text("f_3610:eval_2escm"),(void*)f_3610},
{C_text("f_3613:eval_2escm"),(void*)f_3613},
{C_text("f_3618:eval_2escm"),(void*)f_3618},
{C_text("f_3620:eval_2escm"),(void*)f_3620},
{C_text("f_3647:eval_2escm"),(void*)f_3647},
{C_text("f_3660:eval_2escm"),(void*)f_3660},
{C_text("f_3682:eval_2escm"),(void*)f_3682},
{C_text("f_3686:eval_2escm"),(void*)f_3686},
{C_text("f_3694:eval_2escm"),(void*)f_3694},
{C_text("f_3700:eval_2escm"),(void*)f_3700},
{C_text("f_3707:eval_2escm"),(void*)f_3707},
{C_text("f_3714:eval_2escm"),(void*)f_3714},
{C_text("f_3716:eval_2escm"),(void*)f_3716},
{C_text("f_3720:eval_2escm"),(void*)f_3720},
{C_text("f_3728:eval_2escm"),(void*)f_3728},
{C_text("f_3745:eval_2escm"),(void*)f_3745},
{C_text("f_3775:eval_2escm"),(void*)f_3775},
{C_text("f_3805:eval_2escm"),(void*)f_3805},
{C_text("f_3819:eval_2escm"),(void*)f_3819},
{C_text("f_3827:eval_2escm"),(void*)f_3827},
{C_text("f_3836:eval_2escm"),(void*)f_3836},
{C_text("f_3844:eval_2escm"),(void*)f_3844},
{C_text("f_3851:eval_2escm"),(void*)f_3851},
{C_text("f_3854:eval_2escm"),(void*)f_3854},
{C_text("f_3869:eval_2escm"),(void*)f_3869},
{C_text("f_3883:eval_2escm"),(void*)f_3883},
{C_text("f_3887:eval_2escm"),(void*)f_3887},
{C_text("f_3892:eval_2escm"),(void*)f_3892},
{C_text("f_3897:eval_2escm"),(void*)f_3897},
{C_text("f_3903:eval_2escm"),(void*)f_3903},
{C_text("f_3916:eval_2escm"),(void*)f_3916},
{C_text("f_3920:eval_2escm"),(void*)f_3920},
{C_text("f_3933:eval_2escm"),(void*)f_3933},
{C_text("f_3940:eval_2escm"),(void*)f_3940},
{C_text("f_3941:eval_2escm"),(void*)f_3941},
{C_text("f_3953:eval_2escm"),(void*)f_3953},
{C_text("f_3959:eval_2escm"),(void*)f_3959},
{C_text("f_3969:eval_2escm"),(void*)f_3969},
{C_text("f_3972:eval_2escm"),(void*)f_3972},
{C_text("f_3979:eval_2escm"),(void*)f_3979},
{C_text("f_3989:eval_2escm"),(void*)f_3989},
{C_text("f_3990:eval_2escm"),(void*)f_3990},
{C_text("f_3995:eval_2escm"),(void*)f_3995},
{C_text("f_3999:eval_2escm"),(void*)f_3999},
{C_text("f_4020:eval_2escm"),(void*)f_4020},
{C_text("f_4052:eval_2escm"),(void*)f_4052},
{C_text("f_4063:eval_2escm"),(void*)f_4063},
{C_text("f_4078:eval_2escm"),(void*)f_4078},
{C_text("f_4097:eval_2escm"),(void*)f_4097},
{C_text("f_4120:eval_2escm"),(void*)f_4120},
{C_text("f_4141:eval_2escm"),(void*)f_4141},
{C_text("f_4167:eval_2escm"),(void*)f_4167},
{C_text("f_4175:eval_2escm"),(void*)f_4175},
{C_text("f_4183:eval_2escm"),(void*)f_4183},
{C_text("f_4191:eval_2escm"),(void*)f_4191},
{C_text("f_4193:eval_2escm"),(void*)f_4193},
{C_text("f_4212:eval_2escm"),(void*)f_4212},
{C_text("f_4214:eval_2escm"),(void*)f_4214},
{C_text("f_4224:eval_2escm"),(void*)f_4224},
{C_text("f_4225:eval_2escm"),(void*)f_4225},
{C_text("f_4244:eval_2escm"),(void*)f_4244},
{C_text("f_4247:eval_2escm"),(void*)f_4247},
{C_text("f_4253:eval_2escm"),(void*)f_4253},
{C_text("f_4268:eval_2escm"),(void*)f_4268},
{C_text("f_4277:eval_2escm"),(void*)f_4277},
{C_text("f_4284:eval_2escm"),(void*)f_4284},
{C_text("f_4292:eval_2escm"),(void*)f_4292},
{C_text("f_4300:eval_2escm"),(void*)f_4300},
{C_text("f_4308:eval_2escm"),(void*)f_4308},
{C_text("f_4316:eval_2escm"),(void*)f_4316},
{C_text("f_4324:eval_2escm"),(void*)f_4324},
{C_text("f_4332:eval_2escm"),(void*)f_4332},
{C_text("f_4334:eval_2escm"),(void*)f_4334},
{C_text("f_4363:eval_2escm"),(void*)f_4363},
{C_text("f_4397:eval_2escm"),(void*)f_4397},
{C_text("f_4407:eval_2escm"),(void*)f_4407},
{C_text("f_4410:eval_2escm"),(void*)f_4410},
{C_text("f_4413:eval_2escm"),(void*)f_4413},
{C_text("f_4414:eval_2escm"),(void*)f_4414},
{C_text("f_4421:eval_2escm"),(void*)f_4421},
{C_text("f_4495:eval_2escm"),(void*)f_4495},
{C_text("f_4498:eval_2escm"),(void*)f_4498},
{C_text("f_4499:eval_2escm"),(void*)f_4499},
{C_text("f_4503:eval_2escm"),(void*)f_4503},
{C_text("f_4517:eval_2escm"),(void*)f_4517},
{C_text("f_4520:eval_2escm"),(void*)f_4520},
{C_text("f_4523:eval_2escm"),(void*)f_4523},
{C_text("f_4524:eval_2escm"),(void*)f_4524},
{C_text("f_4528:eval_2escm"),(void*)f_4528},
{C_text("f_4531:eval_2escm"),(void*)f_4531},
{C_text("f_4569:eval_2escm"),(void*)f_4569},
{C_text("f_4572:eval_2escm"),(void*)f_4572},
{C_text("f_4600:eval_2escm"),(void*)f_4600},
{C_text("f_4606:eval_2escm"),(void*)f_4606},
{C_text("f_4610:eval_2escm"),(void*)f_4610},
{C_text("f_4619:eval_2escm"),(void*)f_4619},
{C_text("f_4623:eval_2escm"),(void*)f_4623},
{C_text("f_4630:eval_2escm"),(void*)f_4630},
{C_text("f_4631:eval_2escm"),(void*)f_4631},
{C_text("f_4635:eval_2escm"),(void*)f_4635},
{C_text("f_4661:eval_2escm"),(void*)f_4661},
{C_text("f_4666:eval_2escm"),(void*)f_4666},
{C_text("f_4678:eval_2escm"),(void*)f_4678},
{C_text("f_4679:eval_2escm"),(void*)f_4679},
{C_text("f_4688:eval_2escm"),(void*)f_4688},
{C_text("f_4715:eval_2escm"),(void*)f_4715},
{C_text("f_4724:eval_2escm"),(void*)f_4724},
{C_text("f_4730:eval_2escm"),(void*)f_4730},
{C_text("f_4733:eval_2escm"),(void*)f_4733},
{C_text("f_4742:eval_2escm"),(void*)f_4742},
{C_text("f_4743:eval_2escm"),(void*)f_4743},
{C_text("f_4759:eval_2escm"),(void*)f_4759},
{C_text("f_4763:eval_2escm"),(void*)f_4763},
{C_text("f_4776:eval_2escm"),(void*)f_4776},
{C_text("f_4779:eval_2escm"),(void*)f_4779},
{C_text("f_4780:eval_2escm"),(void*)f_4780},
{C_text("f_4796:eval_2escm"),(void*)f_4796},
{C_text("f_4800:eval_2escm"),(void*)f_4800},
{C_text("f_4804:eval_2escm"),(void*)f_4804},
{C_text("f_4812:eval_2escm"),(void*)f_4812},
{C_text("f_4825:eval_2escm"),(void*)f_4825},
{C_text("f_4828:eval_2escm"),(void*)f_4828},
{C_text("f_4834:eval_2escm"),(void*)f_4834},
{C_text("f_4835:eval_2escm"),(void*)f_4835},
{C_text("f_4851:eval_2escm"),(void*)f_4851},
{C_text("f_4855:eval_2escm"),(void*)f_4855},
{C_text("f_4859:eval_2escm"),(void*)f_4859},
{C_text("f_4863:eval_2escm"),(void*)f_4863},
{C_text("f_4871:eval_2escm"),(void*)f_4871},
{C_text("f_4879:eval_2escm"),(void*)f_4879},
{C_text("f_4892:eval_2escm"),(void*)f_4892},
{C_text("f_4895:eval_2escm"),(void*)f_4895},
{C_text("f_4901:eval_2escm"),(void*)f_4901},
{C_text("f_4904:eval_2escm"),(void*)f_4904},
{C_text("f_4905:eval_2escm"),(void*)f_4905},
{C_text("f_4921:eval_2escm"),(void*)f_4921},
{C_text("f_4925:eval_2escm"),(void*)f_4925},
{C_text("f_4929:eval_2escm"),(void*)f_4929},
{C_text("f_4933:eval_2escm"),(void*)f_4933},
{C_text("f_4937:eval_2escm"),(void*)f_4937},
{C_text("f_4945:eval_2escm"),(void*)f_4945},
{C_text("f_4953:eval_2escm"),(void*)f_4953},
{C_text("f_4961:eval_2escm"),(void*)f_4961},
{C_text("f_4969:eval_2escm"),(void*)f_4969},
{C_text("f_4982:eval_2escm"),(void*)f_4982},
{C_text("f_4983:eval_2escm"),(void*)f_4983},
{C_text("f_4987:eval_2escm"),(void*)f_4987},
{C_text("f_4990:eval_2escm"),(void*)f_4990},
{C_text("f_4999:eval_2escm"),(void*)f_4999},
{C_text("f_5024:eval_2escm"),(void*)f_5024},
{C_text("f_5029:eval_2escm"),(void*)f_5029},
{C_text("f_5054:eval_2escm"),(void*)f_5054},
{C_text("f_5071:eval_2escm"),(void*)f_5071},
{C_text("f_5075:eval_2escm"),(void*)f_5075},
{C_text("f_5079:eval_2escm"),(void*)f_5079},
{C_text("f_5082:eval_2escm"),(void*)f_5082},
{C_text("f_5088:eval_2escm"),(void*)f_5088},
{C_text("f_5096:eval_2escm"),(void*)f_5096},
{C_text("f_5104:eval_2escm"),(void*)f_5104},
{C_text("f_5106:eval_2escm"),(void*)f_5106},
{C_text("f_5110:eval_2escm"),(void*)f_5110},
{C_text("f_5113:eval_2escm"),(void*)f_5113},
{C_text("f_5118:eval_2escm"),(void*)f_5118},
{C_text("f_5120:eval_2escm"),(void*)f_5120},
{C_text("f_5145:eval_2escm"),(void*)f_5145},
{C_text("f_5154:eval_2escm"),(void*)f_5154},
{C_text("f_5227:eval_2escm"),(void*)f_5227},
{C_text("f_5231:eval_2escm"),(void*)f_5231},
{C_text("f_5251:eval_2escm"),(void*)f_5251},
{C_text("f_5265:eval_2escm"),(void*)f_5265},
{C_text("f_5299:eval_2escm"),(void*)f_5299},
{C_text("f_5349:eval_2escm"),(void*)f_5349},
{C_text("f_5358:eval_2escm"),(void*)f_5358},
{C_text("f_5384:eval_2escm"),(void*)f_5384},
{C_text("f_5411:eval_2escm"),(void*)f_5411},
{C_text("f_5415:eval_2escm"),(void*)f_5415},
{C_text("f_5427:eval_2escm"),(void*)f_5427},
{C_text("f_5441:eval_2escm"),(void*)f_5441},
{C_text("f_5489:eval_2escm"),(void*)f_5489},
{C_text("f_5537:eval_2escm"),(void*)f_5537},
{C_text("f_5571:eval_2escm"),(void*)f_5571},
{C_text("f_5596:eval_2escm"),(void*)f_5596},
{C_text("f_5605:eval_2escm"),(void*)f_5605},
{C_text("f_5646:eval_2escm"),(void*)f_5646},
{C_text("f_5657:eval_2escm"),(void*)f_5657},
{C_text("f_5662:eval_2escm"),(void*)f_5662},
{C_text("f_5672:eval_2escm"),(void*)f_5672},
{C_text("f_5675:eval_2escm"),(void*)f_5675},
{C_text("f_5681:eval_2escm"),(void*)f_5681},
{C_text("f_5691:eval_2escm"),(void*)f_5691},
{C_text("f_5697:eval_2escm"),(void*)f_5697},
{C_text("f_5710:eval_2escm"),(void*)f_5710},
{C_text("f_5716:eval_2escm"),(void*)f_5716},
{C_text("f_5734:eval_2escm"),(void*)f_5734},
{C_text("f_5740:eval_2escm"),(void*)f_5740},
{C_text("f_5753:eval_2escm"),(void*)f_5753},
{C_text("f_5759:eval_2escm"),(void*)f_5759},
{C_text("f_5781:eval_2escm"),(void*)f_5781},
{C_text("f_5787:eval_2escm"),(void*)f_5787},
{C_text("f_5800:eval_2escm"),(void*)f_5800},
{C_text("f_5806:eval_2escm"),(void*)f_5806},
{C_text("f_5828:eval_2escm"),(void*)f_5828},
{C_text("f_5834:eval_2escm"),(void*)f_5834},
{C_text("f_5847:eval_2escm"),(void*)f_5847},
{C_text("f_5853:eval_2escm"),(void*)f_5853},
{C_text("f_5875:eval_2escm"),(void*)f_5875},
{C_text("f_5881:eval_2escm"),(void*)f_5881},
{C_text("f_5894:eval_2escm"),(void*)f_5894},
{C_text("f_5900:eval_2escm"),(void*)f_5900},
{C_text("f_5912:eval_2escm"),(void*)f_5912},
{C_text("f_5916:eval_2escm"),(void*)f_5916},
{C_text("f_5922:eval_2escm"),(void*)f_5922},
{C_text("f_5934:eval_2escm"),(void*)f_5934},
{C_text("f_5938:eval_2escm"),(void*)f_5938},
{C_text("f_5939:eval_2escm"),(void*)f_5939},
{C_text("f_5945:eval_2escm"),(void*)f_5945},
{C_text("f_5967:eval_2escm"),(void*)f_5967},
{C_text("f_5983:eval_2escm"),(void*)f_5983},
{C_text("f_5987:eval_2escm"),(void*)f_5987},
{C_text("f_5991:eval_2escm"),(void*)f_5991},
{C_text("f_5994:eval_2escm"),(void*)f_5994},
{C_text("f_6000:eval_2escm"),(void*)f_6000},
{C_text("f_6008:eval_2escm"),(void*)f_6008},
{C_text("f_6014:eval_2escm"),(void*)f_6014},
{C_text("f_6018:eval_2escm"),(void*)f_6018},
{C_text("f_6021:eval_2escm"),(void*)f_6021},
{C_text("f_6026:eval_2escm"),(void*)f_6026},
{C_text("f_6028:eval_2escm"),(void*)f_6028},
{C_text("f_6053:eval_2escm"),(void*)f_6053},
{C_text("f_6063:eval_2escm"),(void*)f_6063},
{C_text("f_6068:eval_2escm"),(void*)f_6068},
{C_text("f_6076:eval_2escm"),(void*)f_6076},
{C_text("f_6078:eval_2escm"),(void*)f_6078},
{C_text("f_6089:eval_2escm"),(void*)f_6089},
{C_text("f_6098:eval_2escm"),(void*)f_6098},
{C_text("f_6103:eval_2escm"),(void*)f_6103},
{C_text("f_6107:eval_2escm"),(void*)f_6107},
{C_text("f_6111:eval_2escm"),(void*)f_6111},
{C_text("f_6114:eval_2escm"),(void*)f_6114},
{C_text("f_6120:eval_2escm"),(void*)f_6120},
{C_text("f_6128:eval_2escm"),(void*)f_6128},
{C_text("f_6136:eval_2escm"),(void*)f_6136},
{C_text("f_6138:eval_2escm"),(void*)f_6138},
{C_text("f_6142:eval_2escm"),(void*)f_6142},
{C_text("f_6145:eval_2escm"),(void*)f_6145},
{C_text("f_6163:eval_2escm"),(void*)f_6163},
{C_text("f_6167:eval_2escm"),(void*)f_6167},
{C_text("f_6171:eval_2escm"),(void*)f_6171},
{C_text("f_6175:eval_2escm"),(void*)f_6175},
{C_text("f_6190:eval_2escm"),(void*)f_6190},
{C_text("f_6194:eval_2escm"),(void*)f_6194},
{C_text("f_6196:eval_2escm"),(void*)f_6196},
{C_text("f_6250:eval_2escm"),(void*)f_6250},
{C_text("f_6254:eval_2escm"),(void*)f_6254},
{C_text("f_6258:eval_2escm"),(void*)f_6258},
{C_text("f_6273:eval_2escm"),(void*)f_6273},
{C_text("f_6276:eval_2escm"),(void*)f_6276},
{C_text("f_6277:eval_2escm"),(void*)f_6277},
{C_text("f_6296:eval_2escm"),(void*)f_6296},
{C_text("f_6300:eval_2escm"),(void*)f_6300},
{C_text("f_6304:eval_2escm"),(void*)f_6304},
{C_text("f_6307:eval_2escm"),(void*)f_6307},
{C_text("f_6313:eval_2escm"),(void*)f_6313},
{C_text("f_6321:eval_2escm"),(void*)f_6321},
{C_text("f_6329:eval_2escm"),(void*)f_6329},
{C_text("f_6331:eval_2escm"),(void*)f_6331},
{C_text("f_6335:eval_2escm"),(void*)f_6335},
{C_text("f_6338:eval_2escm"),(void*)f_6338},
{C_text("f_6341:eval_2escm"),(void*)f_6341},
{C_text("f_6366:eval_2escm"),(void*)f_6366},
{C_text("f_6368:eval_2escm"),(void*)f_6368},
{C_text("f_6415:eval_2escm"),(void*)f_6415},
{C_text("f_6418:eval_2escm"),(void*)f_6418},
{C_text("f_6421:eval_2escm"),(void*)f_6421},
{C_text("f_6424:eval_2escm"),(void*)f_6424},
{C_text("f_6427:eval_2escm"),(void*)f_6427},
{C_text("f_6434:eval_2escm"),(void*)f_6434},
{C_text("f_6438:eval_2escm"),(void*)f_6438},
{C_text("f_6442:eval_2escm"),(void*)f_6442},
{C_text("f_6459:eval_2escm"),(void*)f_6459},
{C_text("f_6481:eval_2escm"),(void*)f_6481},
{C_text("f_6489:eval_2escm"),(void*)f_6489},
{C_text("f_6525:eval_2escm"),(void*)f_6525},
{C_text("f_6537:eval_2escm"),(void*)f_6537},
{C_text("f_6539:eval_2escm"),(void*)f_6539},
{C_text("f_6553:eval_2escm"),(void*)f_6553},
{C_text("f_6578:eval_2escm"),(void*)f_6578},
{C_text("f_6594:eval_2escm"),(void*)f_6594},
{C_text("f_6603:eval_2escm"),(void*)f_6603},
{C_text("f_6606:eval_2escm"),(void*)f_6606},
{C_text("f_6609:eval_2escm"),(void*)f_6609},
{C_text("f_6612:eval_2escm"),(void*)f_6612},
{C_text("f_6617:eval_2escm"),(void*)f_6617},
{C_text("f_6621:eval_2escm"),(void*)f_6621},
{C_text("f_6624:eval_2escm"),(void*)f_6624},
{C_text("f_6627:eval_2escm"),(void*)f_6627},
{C_text("f_6630:eval_2escm"),(void*)f_6630},
{C_text("f_6634:eval_2escm"),(void*)f_6634},
{C_text("f_6638:eval_2escm"),(void*)f_6638},
{C_text("f_6642:eval_2escm"),(void*)f_6642},
{C_text("f_6646:eval_2escm"),(void*)f_6646},
{C_text("f_6649:eval_2escm"),(void*)f_6649},
{C_text("f_6652:eval_2escm"),(void*)f_6652},
{C_text("f_6655:eval_2escm"),(void*)f_6655},
{C_text("f_6658:eval_2escm"),(void*)f_6658},
{C_text("f_6673:eval_2escm"),(void*)f_6673},
{C_text("f_6679:eval_2escm"),(void*)f_6679},
{C_text("f_6689:eval_2escm"),(void*)f_6689},
{C_text("f_6699:eval_2escm"),(void*)f_6699},
{C_text("f_6702:eval_2escm"),(void*)f_6702},
{C_text("f_6705:eval_2escm"),(void*)f_6705},
{C_text("f_6706:eval_2escm"),(void*)f_6706},
{C_text("f_6712:eval_2escm"),(void*)f_6712},
{C_text("f_6735:eval_2escm"),(void*)f_6735},
{C_text("f_6746:eval_2escm"),(void*)f_6746},
{C_text("f_6750:eval_2escm"),(void*)f_6750},
{C_text("f_6765:eval_2escm"),(void*)f_6765},
{C_text("f_6769:eval_2escm"),(void*)f_6769},
{C_text("f_6773:eval_2escm"),(void*)f_6773},
{C_text("f_6776:eval_2escm"),(void*)f_6776},
{C_text("f_6779:eval_2escm"),(void*)f_6779},
{C_text("f_6782:eval_2escm"),(void*)f_6782},
{C_text("f_6785:eval_2escm"),(void*)f_6785},
{C_text("f_6788:eval_2escm"),(void*)f_6788},
{C_text("f_6791:eval_2escm"),(void*)f_6791},
{C_text("f_6794:eval_2escm"),(void*)f_6794},
{C_text("f_6801:eval_2escm"),(void*)f_6801},
{C_text("f_6808:eval_2escm"),(void*)f_6808},
{C_text("f_6821:eval_2escm"),(void*)f_6821},
{C_text("f_6832:eval_2escm"),(void*)f_6832},
{C_text("f_6865:eval_2escm"),(void*)f_6865},
{C_text("f_6890:eval_2escm"),(void*)f_6890},
{C_text("f_6918:eval_2escm"),(void*)f_6918},
{C_text("f_6952:eval_2escm"),(void*)f_6952},
{C_text("f_6978:eval_2escm"),(void*)f_6978},
{C_text("f_6999:eval_2escm"),(void*)f_6999},
{C_text("f_7028:eval_2escm"),(void*)f_7028},
{C_text("f_7040:eval_2escm"),(void*)f_7040},
{C_text("f_7063:eval_2escm"),(void*)f_7063},
{C_text("f_7076:eval_2escm"),(void*)f_7076},
{C_text("f_7096:eval_2escm"),(void*)f_7096},
{C_text("f_7122:eval_2escm"),(void*)f_7122},
{C_text("f_7140:eval_2escm"),(void*)f_7140},
{C_text("f_7152:eval_2escm"),(void*)f_7152},
{C_text("f_7157:eval_2escm"),(void*)f_7157},
{C_text("f_7165:eval_2escm"),(void*)f_7165},
{C_text("f_7167:eval_2escm"),(void*)f_7167},
{C_text("f_7350:eval_2escm"),(void*)f_7350},
{C_text("f_7355:eval_2escm"),(void*)f_7355},
{C_text("f_7363:eval_2escm"),(void*)f_7363},
{C_text("f_7365:eval_2escm"),(void*)f_7365},
{C_text("f_7371:eval_2escm"),(void*)f_7371},
{C_text("f_7378:eval_2escm"),(void*)f_7378},
{C_text("f_7407:eval_2escm"),(void*)f_7407},
{C_text("f_7436:eval_2escm"),(void*)f_7436},
{C_text("f_7465:eval_2escm"),(void*)f_7465},
{C_text("f_7482:eval_2escm"),(void*)f_7482},
{C_text("f_7508:eval_2escm"),(void*)f_7508},
{C_text("f_7515:eval_2escm"),(void*)f_7515},
{C_text("f_7524:eval_2escm"),(void*)f_7524},
{C_text("f_7543:eval_2escm"),(void*)f_7543},
{C_text("f_7550:eval_2escm"),(void*)f_7550},
{C_text("f_7562:eval_2escm"),(void*)f_7562},
{C_text("f_7563:eval_2escm"),(void*)f_7563},
{C_text("f_7570:eval_2escm"),(void*)f_7570},
{C_text("f_7577:eval_2escm"),(void*)f_7577},
{C_text("f_7590:eval_2escm"),(void*)f_7590},
{C_text("f_7593:eval_2escm"),(void*)f_7593},
{C_text("f_7594:eval_2escm"),(void*)f_7594},
{C_text("f_7601:eval_2escm"),(void*)f_7601},
{C_text("f_7608:eval_2escm"),(void*)f_7608},
{C_text("f_7612:eval_2escm"),(void*)f_7612},
{C_text("f_7626:eval_2escm"),(void*)f_7626},
{C_text("f_7629:eval_2escm"),(void*)f_7629},
{C_text("f_7632:eval_2escm"),(void*)f_7632},
{C_text("f_7633:eval_2escm"),(void*)f_7633},
{C_text("f_7640:eval_2escm"),(void*)f_7640},
{C_text("f_7647:eval_2escm"),(void*)f_7647},
{C_text("f_7651:eval_2escm"),(void*)f_7651},
{C_text("f_7655:eval_2escm"),(void*)f_7655},
{C_text("f_7670:eval_2escm"),(void*)f_7670},
{C_text("f_7673:eval_2escm"),(void*)f_7673},
{C_text("f_7676:eval_2escm"),(void*)f_7676},
{C_text("f_7679:eval_2escm"),(void*)f_7679},
{C_text("f_7680:eval_2escm"),(void*)f_7680},
{C_text("f_7687:eval_2escm"),(void*)f_7687},
{C_text("f_7694:eval_2escm"),(void*)f_7694},
{C_text("f_7698:eval_2escm"),(void*)f_7698},
{C_text("f_7702:eval_2escm"),(void*)f_7702},
{C_text("f_7706:eval_2escm"),(void*)f_7706},
{C_text("f_7717:eval_2escm"),(void*)f_7717},
{C_text("f_7727:eval_2escm"),(void*)f_7727},
{C_text("f_7728:eval_2escm"),(void*)f_7728},
{C_text("f_7739:eval_2escm"),(void*)f_7739},
{C_text("f_7744:eval_2escm"),(void*)f_7744},
{C_text("f_7754:eval_2escm"),(void*)f_7754},
{C_text("f_7756:eval_2escm"),(void*)f_7756},
{C_text("f_7781:eval_2escm"),(void*)f_7781},
{C_text("f_7790:eval_2escm"),(void*)f_7790},
{C_text("f_7815:eval_2escm"),(void*)f_7815},
{C_text("f_7838:eval_2escm"),(void*)f_7838},
{C_text("f_7857:eval_2escm"),(void*)f_7857},
{C_text("f_7907:eval_2escm"),(void*)f_7907},
{C_text("f_7911:eval_2escm"),(void*)f_7911},
{C_text("f_7914:eval_2escm"),(void*)f_7914},
{C_text("f_7919:eval_2escm"),(void*)f_7919},
{C_text("f_7923:eval_2escm"),(void*)f_7923},
{C_text("f_7926:eval_2escm"),(void*)f_7926},
{C_text("f_7929:eval_2escm"),(void*)f_7929},
{C_text("f_7933:eval_2escm"),(void*)f_7933},
{C_text("f_7937:eval_2escm"),(void*)f_7937},
{C_text("f_7941:eval_2escm"),(void*)f_7941},
{C_text("f_7944:eval_2escm"),(void*)f_7944},
{C_text("f_7947:eval_2escm"),(void*)f_7947},
{C_text("f_7950:eval_2escm"),(void*)f_7950},
{C_text("f_7962:eval_2escm"),(void*)f_7962},
{C_text("f_7968:eval_2escm"),(void*)f_7968},
{C_text("f_7972:eval_2escm"),(void*)f_7972},
{C_text("f_7977:eval_2escm"),(void*)f_7977},
{C_text("f_7981:eval_2escm"),(void*)f_7981},
{C_text("f_7988:eval_2escm"),(void*)f_7988},
{C_text("f_7992:eval_2escm"),(void*)f_7992},
{C_text("f_7994:eval_2escm"),(void*)f_7994},
{C_text("f_7998:eval_2escm"),(void*)f_7998},
{C_text("f_8001:eval_2escm"),(void*)f_8001},
{C_text("f_8004:eval_2escm"),(void*)f_8004},
{C_text("f_8007:eval_2escm"),(void*)f_8007},
{C_text("f_8010:eval_2escm"),(void*)f_8010},
{C_text("f_8013:eval_2escm"),(void*)f_8013},
{C_text("f_8020:eval_2escm"),(void*)f_8020},
{C_text("f_8022:eval_2escm"),(void*)f_8022},
{C_text("f_8030:eval_2escm"),(void*)f_8030},
{C_text("f_8032:eval_2escm"),(void*)f_8032},
{C_text("f_8039:eval_2escm"),(void*)f_8039},
{C_text("f_8041:eval_2escm"),(void*)f_8041},
{C_text("f_8044:eval_2escm"),(void*)f_8044},
{C_text("f_8054:eval_2escm"),(void*)f_8054},
{C_text("f_8068:eval_2escm"),(void*)f_8068},
{C_text("f_8087:eval_2escm"),(void*)f_8087},
{C_text("f_8126:eval_2escm"),(void*)f_8126},
{C_text("f_8130:eval_2escm"),(void*)f_8130},
{C_text("f_8133:eval_2escm"),(void*)f_8133},
{C_text("f_8136:eval_2escm"),(void*)f_8136},
{C_text("f_8139:eval_2escm"),(void*)f_8139},
{C_text("f_8142:eval_2escm"),(void*)f_8142},
{C_text("f_8144:eval_2escm"),(void*)f_8144},
{C_text("f_8153:eval_2escm"),(void*)f_8153},
{C_text("f_8184:eval_2escm"),(void*)f_8184},
{C_text("f_8202:eval_2escm"),(void*)f_8202},
{C_text("f_8227:eval_2escm"),(void*)f_8227},
{C_text("f_8253:eval_2escm"),(void*)f_8253},
{C_text("f_8630:eval_2escm"),(void*)f_8630},
{C_text("f_8652:eval_2escm"),(void*)f_8652},
{C_text("f_9543:eval_2escm"),(void*)f_9543},
{C_text("f_9546:eval_2escm"),(void*)f_9546},
{C_text("f_9560:eval_2escm"),(void*)f_9560},
{C_text("f_9563:eval_2escm"),(void*)f_9563},
{C_text("f_9565:eval_2escm"),(void*)f_9565},
{C_text("f_9568:eval_2escm"),(void*)f_9568},
{C_text("f_9575:eval_2escm"),(void*)f_9575},
{C_text("f_9585:eval_2escm"),(void*)f_9585},
{C_text("f_9613:eval_2escm"),(void*)f_9613},
{C_text("f_9617:eval_2escm"),(void*)f_9617},
{C_text("f_9630:eval_2escm"),(void*)f_9630},
{C_text("f_9658:eval_2escm"),(void*)f_9658},
{C_text("f_9662:eval_2escm"),(void*)f_9662},
{C_text("f_9669:eval_2escm"),(void*)f_9669},
{C_text("f_9674:eval_2escm"),(void*)f_9674},
{C_text("f_9687:eval_2escm"),(void*)f_9687},
{C_text("f_9756:eval_2escm"),(void*)f_9756},
{C_text("f_9760:eval_2escm"),(void*)f_9760},
{C_text("f_9762:eval_2escm"),(void*)f_9762},
{C_text("f_9770:eval_2escm"),(void*)f_9770},
{C_text("f_9774:eval_2escm"),(void*)f_9774},
{C_text("f_9776:eval_2escm"),(void*)f_9776},
{C_text("f_9814:eval_2escm"),(void*)f_9814},
{C_text("f_9819:eval_2escm"),(void*)f_9819},
{C_text("f_9823:eval_2escm"),(void*)f_9823},
{C_text("f_9826:eval_2escm"),(void*)f_9826},
{C_text("f_9842:eval_2escm"),(void*)f_9842},
{C_text("f_9846:eval_2escm"),(void*)f_9846},
{C_text("f_9850:eval_2escm"),(void*)f_9850},
{C_text("f_9854:eval_2escm"),(void*)f_9854},
{C_text("f_9858:eval_2escm"),(void*)f_9858},
{C_text("f_9861:eval_2escm"),(void*)f_9861},
{C_text("f_9864:eval_2escm"),(void*)f_9864},
{C_text("f_9867:eval_2escm"),(void*)f_9867},
{C_text("f_9872:eval_2escm"),(void*)f_9872},
{C_text("f_9878:eval_2escm"),(void*)f_9878},
{C_text("f_9887:eval_2escm"),(void*)f_9887},
{C_text("f_9891:eval_2escm"),(void*)f_9891},
{C_text("f_9894:eval_2escm"),(void*)f_9894},
{C_text("f_9899:eval_2escm"),(void*)f_9899},
{C_text("f_9904:eval_2escm"),(void*)f_9904},
{C_text("f_9906:eval_2escm"),(void*)f_9906},
{C_text("f_9910:eval_2escm"),(void*)f_9910},
{C_text("f_9913:eval_2escm"),(void*)f_9913},
{C_text("f_9916:eval_2escm"),(void*)f_9916},
{C_text("f_9921:eval_2escm"),(void*)f_9921},
{C_text("f_9931:eval_2escm"),(void*)f_9931},
{C_text("f_9934:eval_2escm"),(void*)f_9934},
{C_text("f_9941:eval_2escm"),(void*)f_9941},
{C_text("f_9943:eval_2escm"),(void*)f_9943},
{C_text("f_9950:eval_2escm"),(void*)f_9950},
{C_text("f_9955:eval_2escm"),(void*)f_9955},
{C_text("f_9961:eval_2escm"),(void*)f_9961},
{C_text("f_9965:eval_2escm"),(void*)f_9965},
{C_text("f_9972:eval_2escm"),(void*)f_9972},
{C_text("f_9977:eval_2escm"),(void*)f_9977},
{C_text("f_9986:eval_2escm"),(void*)f_9986},
{C_text("f_9994:eval_2escm"),(void*)f_9994},
{C_text("toplevel:eval_2escm"),(void*)C_eval_toplevel},
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
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#define-alias 
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#eval-decorator 
o|hiding unexported module binding: chicken.eval#compile-to-closure 
o|hiding unexported module binding: chicken.load#partition 
o|hiding unexported module binding: chicken.load#span 
o|hiding unexported module binding: chicken.load#take 
o|hiding unexported module binding: chicken.load#drop 
o|hiding unexported module binding: chicken.load#split-at 
o|hiding unexported module binding: chicken.load#append-map 
o|hiding unexported module binding: chicken.load#every 
o|hiding unexported module binding: chicken.load#any 
o|hiding unexported module binding: chicken.load#cons* 
o|hiding unexported module binding: chicken.load#concatenate 
o|hiding unexported module binding: chicken.load#delete 
o|hiding unexported module binding: chicken.load#first 
o|hiding unexported module binding: chicken.load#second 
o|hiding unexported module binding: chicken.load#third 
o|hiding unexported module binding: chicken.load#fourth 
o|hiding unexported module binding: chicken.load#fifth 
o|hiding unexported module binding: chicken.load#delete-duplicates 
o|hiding unexported module binding: chicken.load#alist-cons 
o|hiding unexported module binding: chicken.load#filter 
o|hiding unexported module binding: chicken.load#filter-map 
o|hiding unexported module binding: chicken.load#remove 
o|hiding unexported module binding: chicken.load#unzip1 
o|hiding unexported module binding: chicken.load#last 
o|hiding unexported module binding: chicken.load#list-index 
o|hiding unexported module binding: chicken.load#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.load#lset-difference/eq? 
o|hiding unexported module binding: chicken.load#lset-union/eq? 
o|hiding unexported module binding: chicken.load#lset-intersection/eq? 
o|hiding unexported module binding: chicken.load#list-tabulate 
o|hiding unexported module binding: chicken.load#lset<=/eq? 
o|hiding unexported module binding: chicken.load#lset=/eq? 
o|hiding unexported module binding: chicken.load#length+ 
o|hiding unexported module binding: chicken.load#find 
o|hiding unexported module binding: chicken.load#find-tail 
o|hiding unexported module binding: chicken.load#iota 
o|hiding unexported module binding: chicken.load#make-list 
o|hiding unexported module binding: chicken.load#posq 
o|hiding unexported module binding: chicken.load#posv 
o|hiding unexported module binding: chicken.load#constant2165 
o|hiding unexported module binding: chicken.load#constant2168 
o|hiding unexported module binding: chicken.load#constant2172 
o|hiding unexported module binding: chicken.load#constant2177 
o|hiding unexported module binding: chicken.load#constant2183 
o|hiding unexported module binding: chicken.load#constant2190 
o|hiding unexported module binding: chicken.load#constant2198 
o|hiding unexported module binding: chicken.load#constant2207 
o|hiding unexported module binding: chicken.load#load-library-extension 
o|hiding unexported module binding: chicken.load#default-dynamic-load-libraries 
o|hiding unexported module binding: chicken.load#path-separators 
o|hiding unexported module binding: chicken.load#path-separator-index/right 
o|hiding unexported module binding: chicken.load#make-relative-pathname 
o|hiding unexported module binding: chicken.load#toplevel 
o|hiding unexported module binding: chicken.load#c-toplevel 
o|hiding unexported module binding: chicken.load#load/internal 
o|hiding unexported module binding: chicken.load#evaluator 
o|hiding unexported module binding: chicken.load#load-unit 
o|hiding unexported module binding: chicken.load#file-exists? 
o|hiding unexported module binding: chicken.load#find-file 
o|hiding unexported module binding: chicken.load#find-dynamic-extension 
o|hiding unexported module binding: chicken.load#load-extension 
S|applied compiler syntax:
S|  chicken.base#foldl		3
S|  chicken.base#foldr		4
S|  scheme#for-each		7
S|  ##sys#map		4
S|  scheme#map		17
o|eliminated procedure checks: 316 
o|folded constant expression: (scheme#integer->char (quote 127)) 
o|specializations:
o|  1 (scheme#number->string fixnum)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (scheme#memq * list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  1 (scheme#length list)
o|  3 (scheme#cddr (pair * pair))
o|  13 (scheme#car pair)
o|  17 (##sys#check-list (or pair list) *)
o|  1 (scheme#zero? *)
o|  12 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  79 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  26 (scheme#cdr pair)
o|  2 (scheme#cdar (pair pair *))
(o e)|safe calls: 1093 
(o e)|assignments to immediate values: 1 
o|safe globals: (##sys#unbound-in-eval chicken.eval#eval-decorator) 
o|merged explicitly consed rest parameter: rest171174 
o|inlining procedure: k3649 
o|inlining procedure: k3649 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|inlining procedure: k3702 
o|inlining procedure: k3702 
o|inlining procedure: k3730 
o|inlining procedure: k3730 
o|contracted procedure: "(eval.scm:106) posq221" 
o|inlining procedure: k3777 
o|inlining procedure: k3777 
o|inlining procedure: k3807 
o|inlining procedure: k3807 
o|inlining procedure: k3821 
o|inlining procedure: k3821 
o|contracted procedure: "(eval.scm:132) chicken.eval#eval-decorator" 
o|inlining procedure: k3584 
o|inlining procedure: k3584 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|inlining procedure: k3961 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|inlining procedure: k4011 
o|inlining procedure: k4011 
o|inlining procedure: k4024 
o|inlining procedure: k4024 
o|inlining procedure: k4039 
o|inlining procedure: k4039 
o|inlining procedure: k3961 
o|inlining procedure: k4072 
o|inlining procedure: k4072 
o|inlining procedure: k4114 
o|inlining procedure: k4114 
o|substituted constant variable: a4148 
o|substituted constant variable: a4150 
o|substituted constant variable: a4152 
o|substituted constant variable: a4154 
o|inlining procedure: k4155 
o|inlining procedure: k4169 
o|inlining procedure: k4169 
o|inlining procedure: k4185 
o|inlining procedure: k4185 
o|substituted constant variable: a4196 
o|substituted constant variable: a4198 
o|substituted constant variable: a4200 
o|substituted constant variable: a4202 
o|inlining procedure: k4155 
o|inlining procedure: k4209 
o|inlining procedure: k4209 
o|inlining procedure: k4216 
o|inlining procedure: k4216 
o|inlining procedure: k4236 
o|inlining procedure: k4269 
o|inlining procedure: k4286 
o|inlining procedure: k4286 
o|inlining procedure: k4302 
o|inlining procedure: k4302 
o|inlining procedure: k4318 
o|inlining procedure: k4318 
o|substituted constant variable: a4337 
o|substituted constant variable: a4339 
o|substituted constant variable: a4341 
o|substituted constant variable: a4343 
o|substituted constant variable: a4345 
o|substituted constant variable: a4347 
o|substituted constant variable: a4349 
o|inlining procedure: k4269 
o|inlining procedure: k4365 
o|inlining procedure: k4365 
o|inlining procedure: k4391 
o|inlining procedure: k4391 
o|inlining procedure: k4416 
o|inlining procedure: k4416 
o|inlining procedure: k4453 
o|inlining procedure: k4474 
o|inlining procedure: k4474 
o|substituted constant variable: a4556 
o|substituted constant variable: a4558 
o|substituted constant variable: a4560 
o|inlining procedure: k4453 
o|inlining procedure: k4587 
o|inlining procedure: k4611 
o|inlining procedure: k4642 
o|inlining procedure: k4642 
o|inlining procedure: k4611 
o|inlining procedure: k4587 
o|inlining procedure: k4734 
o|inlining procedure: k4734 
o|inlining procedure: k4817 
o|inlining procedure: k4817 
o|inlining procedure: k5001 
o|inlining procedure: k5001 
o|inlining procedure: k5031 
o|inlining procedure: k5031 
o|substituted constant variable: a5063 
o|substituted constant variable: a5065 
o|substituted constant variable: a5067 
o|substituted constant variable: a5069 
o|consed rest parameter at call site: "(eval.scm:315) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5122 
o|inlining procedure: k5122 
o|inlining procedure: k5156 
o|contracted procedure: "(eval.scm:310) g500509" 
o|inlining procedure: k5156 
o|inlining procedure: k5187 
o|inlining procedure: k5267 
o|contracted procedure: "(eval.scm:365) g663672" 
o|inlining procedure: k5267 
o|inlining procedure: k5301 
o|contracted procedure: "(eval.scm:362) g636645" 
o|inlining procedure: k5301 
o|inlining procedure: k5187 
o|inlining procedure: k5443 
o|contracted procedure: "(eval.scm:382) g812822" 
o|inlining procedure: k5443 
o|inlining procedure: k5491 
o|contracted procedure: "(eval.scm:381) g779789" 
o|inlining procedure: k5491 
o|inlining procedure: k5539 
o|contracted procedure: "(eval.scm:378) g752761" 
o|inlining procedure: k5539 
o|inlining procedure: k5573 
o|inlining procedure: k5573 
o|inlining procedure: k5607 
o|inlining procedure: k5607 
o|inlining procedure: k5638 
o|inlining procedure: k5682 
o|inlining procedure: k5682 
o|inlining procedure: k5731 
o|inlining procedure: k5731 
o|inlining procedure: k5772 
o|inlining procedure: k5772 
o|inlining procedure: k5825 
o|inlining procedure: k5825 
o|inlining procedure: k5866 
o|inlining procedure: k5866 
o|contracted procedure: "(eval.scm:471) fudge-argument-list228" 
o|inlining procedure: k7423 
o|inlining procedure: k7423 
o|inlining procedure: k7438 
o|inlining procedure: k7438 
o|inlining procedure: k7463 
o|inlining procedure: k7463 
o|inlining procedure: k5948 
o|inlining procedure: k5948 
o|substituted constant variable: a5973 
o|substituted constant variable: a5975 
o|substituted constant variable: a5977 
o|substituted constant variable: a5979 
o|substituted constant variable: a5981 
o|consed rest parameter at call site: "(eval.scm:406) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k6010 
o|consed rest parameter at call site: "(eval.scm:406) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k6010 
o|consed rest parameter at call site: "(eval.scm:406) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k6030 
o|inlining procedure: k6030 
o|inlining procedure: k6083 
o|inlining procedure: k6083 
o|inlining procedure: k5638 
o|inlining procedure: k6198 
o|contracted procedure: "(eval.scm:486) g966975" 
o|inlining procedure: k6198 
o|inlining procedure: k6229 
o|inlining procedure: k6343 
o|inlining procedure: k6343 
o|inlining procedure: k6370 
o|contracted procedure: "(eval.scm:500) g10011010" 
o|inlining procedure: k6370 
o|inlining procedure: k6229 
o|inlining procedure: k6460 
o|inlining procedure: k6460 
o|inlining procedure: k6490 
o|inlining procedure: k6490 
o|inlining procedure: k6508 
o|inlining procedure: k6555 
o|contracted procedure: "(eval.scm:550) g10711080" 
o|inlining procedure: k6555 
o|inlining procedure: k6508 
o|substituted constant variable: saved114611471165 
o|inlining procedure: k6691 
o|inlining procedure: k6714 
o|inlining procedure: k6714 
o|inlining procedure: k6691 
o|inlining procedure: k6810 
o|inlining procedure: k6810 
o|inlining procedure: k6837 
o|inlining procedure: k6837 
o|inlining procedure: k6867 
o|inlining procedure: k6867 
o|inlining procedure: k6902 
o|inlining procedure: k6902 
o|inlining procedure: k6944 
o|inlining procedure: k6944 
o|inlining procedure: k6988 
o|inlining procedure: k6988 
o|inlining procedure: k7020 
o|inlining procedure: k7020 
o|inlining procedure: k7044 
o|inlining procedure: k7044 
o|inlining procedure: k7080 
o|removed unused parameter to known procedure: se1320 "(eval.scm:649) compile-call230" 
o|inlining procedure: k7080 
o|inlining procedure: k7110 
o|inlining procedure: k7110 
o|removed unused parameter to known procedure: se1320 "(eval.scm:667) compile-call230" 
o|substituted constant variable: a7172 
o|substituted constant variable: a7174 
o|substituted constant variable: a7176 
o|inlining procedure: k7180 
o|inlining procedure: k7180 
o|inlining procedure: k7192 
o|inlining procedure: k7192 
o|inlining procedure: k7204 
o|inlining procedure: k7204 
o|inlining procedure: k7216 
o|inlining procedure: k7216 
o|inlining procedure: k7228 
o|inlining procedure: k7228 
o|substituted constant variable: a7235 
o|substituted constant variable: a7237 
o|substituted constant variable: a7239 
o|substituted constant variable: a7241 
o|substituted constant variable: a7243 
o|substituted constant variable: a7245 
o|substituted constant variable: a7247 
o|substituted constant variable: a7249 
o|substituted constant variable: a7251 
o|substituted constant variable: a7253 
o|substituted constant variable: a7255 
o|substituted constant variable: a7260 
o|substituted constant variable: a7262 
o|substituted constant variable: a7264 
o|inlining procedure: k7268 
o|inlining procedure: k7268 
o|substituted constant variable: a7275 
o|substituted constant variable: a7277 
o|substituted constant variable: a7279 
o|substituted constant variable: a7281 
o|substituted constant variable: a7286 
o|substituted constant variable: a7288 
o|substituted constant variable: a7290 
o|substituted constant variable: a7292 
o|substituted constant variable: a7294 
o|substituted constant variable: a7296 
o|substituted constant variable: a7298 
o|substituted constant variable: a7300 
o|substituted constant variable: a7302 
o|substituted constant variable: a7304 
o|substituted constant variable: a7306 
o|substituted constant variable: a7308 
o|substituted constant variable: a7310 
o|substituted constant variable: a7312 
o|substituted constant variable: a7314 
o|substituted constant variable: a7316 
o|substituted constant variable: a7318 
o|substituted constant variable: a7320 
o|substituted constant variable: a7322 
o|substituted constant variable: a7324 
o|substituted constant variable: a7326 
o|substituted constant variable: a7328 
o|substituted constant variable: a7330 
o|substituted constant variable: a7332 
o|substituted constant variable: a7334 
o|substituted constant variable: a7336 
o|substituted constant variable: a7338 
o|substituted constant variable: a7340 
o|contracted procedure: "(eval.scm:220) handle-expansion-result225" 
o|inlining procedure: k3849 
o|inlining procedure: k3849 
o|inlining procedure: k4236 
o|removed unused parameter to known procedure: se1320 "(eval.scm:671) compile-call230" 
o|inlining procedure: k7390 
o|inlining procedure: k7390 
o|inlining procedure: k7402 
o|inlining procedure: k7402 
o|inlining procedure: k7414 
o|inlining procedure: k7414 
o|removed unused formal parameters: (se1320) 
o|inlining procedure: k7528 
o|inlining procedure: k7528 
o|inlining procedure: k7554 
o|inlining procedure: k7554 
o|inlining procedure: k7618 
o|inlining procedure: k7618 
o|inlining procedure: k7758 
o|inlining procedure: k7758 
o|inlining procedure: k7792 
o|inlining procedure: k7792 
o|substituted constant variable: a7824 
o|substituted constant variable: a7826 
o|substituted constant variable: a7828 
o|substituted constant variable: a7830 
o|substituted constant variable: a7832 
o|substituted constant variable: a7834 
o|contracted procedure: "(eval.scm:699) checked-length229" 
o|inlining procedure: k7484 
o|inlining procedure: k7484 
o|substituted constant variable: saved144314441458 
o|consed rest parameter at call site: "(eval.scm:745) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k8056 
o|inlining procedure: k8056 
o|inlining procedure: k8078 
o|inlining procedure: k8078 
o|inlining procedure: k8155 
o|contracted procedure: "(eval.scm:855) g16051606" 
o|substituted constant variable: a8170 
o|inlining procedure: k8163 
o|inlining procedure: k8163 
o|inlining procedure: k8155 
o|inlining procedure: k8207 
o|inlining procedure: k8207 
o|substituted constant variable: a8223 
o|substituted constant variable: a8225 
o|inlining procedure: k8232 
o|inlining procedure: k8232 
o|substituted constant variable: a8248 
o|substituted constant variable: a8250 
o|removed side-effect free assignment to unused variable: chicken.load#partition 
o|removed side-effect free assignment to unused variable: chicken.load#span 
o|removed side-effect free assignment to unused variable: chicken.load#drop 
o|removed side-effect free assignment to unused variable: chicken.load#split-at 
o|removed side-effect free assignment to unused variable: chicken.load#append-map 
o|inlining procedure: k8635 
o|inlining procedure: k8635 
o|inlining procedure: k8666 
o|inlining procedure: k8666 
o|removed side-effect free assignment to unused variable: chicken.load#cons* 
o|removed side-effect free assignment to unused variable: chicken.load#concatenate 
o|removed side-effect free assignment to unused variable: chicken.load#first 
o|removed side-effect free assignment to unused variable: chicken.load#second 
o|removed side-effect free assignment to unused variable: chicken.load#third 
o|removed side-effect free assignment to unused variable: chicken.load#fourth 
o|removed side-effect free assignment to unused variable: chicken.load#fifth 
o|removed side-effect free assignment to unused variable: chicken.load#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.load#alist-cons 
o|inlining procedure: k8883 
o|inlining procedure: k8883 
o|inlining procedure: k8875 
o|inlining procedure: k8875 
o|removed side-effect free assignment to unused variable: chicken.load#filter-map 
o|removed side-effect free assignment to unused variable: chicken.load#remove 
o|removed side-effect free assignment to unused variable: chicken.load#unzip1 
o|removed side-effect free assignment to unused variable: chicken.load#last 
o|removed side-effect free assignment to unused variable: chicken.load#list-index 
o|removed side-effect free assignment to unused variable: chicken.load#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-intersection/eq? 
o|inlining procedure: k9274 
o|inlining procedure: k9274 
o|removed side-effect free assignment to unused variable: chicken.load#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#length+ 
o|removed side-effect free assignment to unused variable: chicken.load#find 
o|removed side-effect free assignment to unused variable: chicken.load#find-tail 
o|removed side-effect free assignment to unused variable: chicken.load#iota 
o|removed side-effect free assignment to unused variable: chicken.load#make-list 
o|removed side-effect free assignment to unused variable: chicken.load#posq 
o|removed side-effect free assignment to unused variable: chicken.load#posv 
o|inlining procedure: k9551 
o|inlining procedure: k9551 
o|inlining procedure: k9587 
o|inlining procedure: k9587 
o|inlining procedure: k9618 
o|inlining procedure: k9618 
o|inlining procedure: k9634 
o|substituted constant variable: a9653 
o|inlining procedure: k9634 
o|inlining procedure: k9676 
o|inlining procedure: k9699 
o|inlining procedure: k9699 
o|inlining procedure: k9713 
o|inlining procedure: k9713 
o|substituted constant variable: a9728 
o|substituted constant variable: a9730 
o|substituted constant variable: a9732 
o|substituted constant variable: a9734 
o|inlining procedure: k9676 
o|contracted procedure: "(eval.scm:1037) chicken.load#toplevel" 
o|inlining procedure: k9744 
o|inlining procedure: k9744 
o|merged explicitly consed rest parameter: rest22842287 
o|inlining procedure: k9809 
o|inlining procedure: k9809 
o|inlining procedure: k9827 
o|inlining procedure: k9827 
o|inlining procedure: k9865 
o|inlining procedure: k9865 
o|inlining procedure: k9923 
o|inlining procedure: k9923 
o|inlining procedure: k9945 
o|inlining procedure: k9945 
o|inlining procedure: k9979 
o|inlining procedure: k9996 
o|inlining procedure: k9996 
o|inlining procedure: k9979 
o|inlining procedure: k10033 
o|inlining procedure: k10033 
o|inlining procedure: k10057 
o|inlining procedure: k10057 
o|inlining procedure: k10084 
o|inlining procedure: k10084 
o|inlining procedure: k10105 
o|inlining procedure: k10105 
o|inlining procedure: k10123 
o|inlining procedure: k10123 
o|inlining procedure: k10190 
o|inlining procedure: k10190 
o|consed rest parameter at call site: "(eval.scm:1137) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1141) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1144) chicken.load#load/internal" 3 
o|propagated global variable: g24712472 ##sys#string-append 
o|inlining procedure: k10289 
o|inlining procedure: k10289 
o|inlining procedure: k10310 
o|inlining procedure: k10323 
o|inlining procedure: k10323 
o|inlining procedure: k10310 
o|inlining procedure: k10453 
o|inlining procedure: k10453 
o|inlining procedure: k10501 
o|inlining procedure: k10501 
o|inlining procedure: k10510 
o|inlining procedure: k10510 
o|inlining procedure: k10522 
o|inlining procedure: k10522 
o|inlining procedure: k10572 
o|inlining procedure: k10572 
o|inlining procedure: k10582 
o|inlining procedure: k10582 
o|inlining procedure: k10611 
o|inlining procedure: k10611 
o|inlining procedure: k10646 
o|inlining procedure: k10646 
o|inlining procedure: k10658 
o|inlining procedure: k10658 
o|consed rest parameter at call site: "(eval.scm:1261) chicken.load#load/internal" 3 
o|inlining procedure: k10710 
o|inlining procedure: k10710 
o|contracted procedure: "(eval.scm:1256) g26102611" 
o|inlining procedure: k10666 
o|inlining procedure: k10666 
o|inlining procedure: k10682 
o|inlining procedure: k10682 
o|inlining procedure: k10749 
o|contracted procedure: "(eval.scm:1269) g26472669" 
o|propagated global variable: g26772678 chicken.load#load-extension 
o|inlining procedure: k10749 
o|inlining procedure: k10772 
o|contracted procedure: "(eval.scm:1268) g26372654" 
o|inlining procedure: k10772 
o|inlining procedure: k10814 
o|contracted procedure: "(eval.scm:1273) g27002722" 
o|propagated global variable: g27302731 ##sys#provide 
o|inlining procedure: k10814 
o|inlining procedure: k10837 
o|contracted procedure: "(eval.scm:1272) g26902707" 
o|inlining procedure: k10837 
o|inlining procedure: k10874 
o|contracted procedure: "(eval.scm:1276) g27432750" 
o|inlining procedure: k10874 
o|inlining procedure: k10910 
o|inlining procedure: k10910 
o|inlining procedure: k10922 
o|inlining procedure: k10922 
o|inlining procedure: k10943 
o|inlining procedure: k10943 
o|inlining procedure: k10973 
o|inlining procedure: k10973 
o|inlining procedure: k11010 
o|inlining procedure: k11010 
o|inlining procedure: k11025 
o|inlining procedure: k11025 
o|inlining procedure: k11044 
o|inlining procedure: k11044 
o|inlining procedure: k11057 
o|inlining procedure: k11057 
o|inlining procedure: k11091 
o|inlining procedure: k11091 
o|inlining procedure: k11164 
o|inlining procedure: k11164 
o|inlining procedure: k11230 
o|inlining procedure: k11230 
o|propagated global variable: tmp30203022 last-error 
o|inlining procedure: k11390 
o|propagated global variable: tmp30203022 last-error 
o|inlining procedure: k11390 
o|inlining procedure: k11409 
o|inlining procedure: k11409 
o|substituted constant variable: chicken.load#constant2172 
o|substituted constant variable: a11464 
o|substituted constant variable: chicken.load#constant2183 
o|inlining procedure: k11468 
o|substituted constant variable: chicken.load#constant2177 
o|propagated global variable: r1146912098 chicken.load#constant2177 
o|inlining procedure: k11468 
o|substituted constant variable: chicken.load#constant2190 
o|inlining procedure: k11477 
o|substituted constant variable: chicken.load#constant2190 
o|inlining procedure: k11477 
o|substituted constant variable: chicken.load#constant2190 
o|inlining procedure: k11598 
o|inlining procedure: k11598 
o|inlining procedure: k11635 
o|consed rest parameter at call site: "(eval.scm:779) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:780) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k11635 
o|consed rest parameter at call site: "(eval.scm:783) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:768) chicken.eval#compile-to-closure" 3 
o|simplifications: ((if . 1)) 
o|replaced variables: 1977 
o|removed binding forms: 490 
o|substituted constant variable: r365011749 
o|substituted constant variable: r377811757 
o|removed call to pure procedure with unused result: "(eval.scm:103) chicken.base#void" 
o|substituted constant variable: r358511764 
o|substituted constant variable: r404011775 
o|substituted constant variable: r464311813 
o|substituted constant variable: r608411873 
o|substituted constant variable: r608411873 
o|removed call to pure procedure with unused result: "(eval.scm:222) chicken.base#void" 
o|inlining procedure: k3849 
o|converted assignments to bindings: (err1573) 
o|substituted constant variable: r815611959 
o|removed side-effect free assignment to unused variable: chicken.load#any 
o|removed side-effect free assignment to unused variable: chicken.load#filter 
o|removed side-effect free assignment to unused variable: chicken.load#list-tabulate 
o|removed side-effect free assignment to unused variable: chicken.load#constant2172 
o|removed side-effect free assignment to unused variable: chicken.load#constant2183 
o|removed side-effect free assignment to unused variable: chicken.load#constant2190 
o|substituted constant variable: r963511981 
o|substituted constant variable: r974511988 
o|contracted procedure: "(eval.scm:1118) g23862393" 
o|substituted constant variable: r1003412008 
o|substituted constant variable: r1003412008 
o|substituted constant variable: r1005812011 
o|substituted constant variable: r1012412017 
o|substituted constant variable: r1032412025 
o|substituted constant variable: r1032412025 
o|inlining procedure: k10386 
o|substituted constant variable: r1050212031 
o|substituted constant variable: r1051112032 
o|substituted constant variable: r1058312039 
o|substituted constant variable: r1061212041 
o|substituted constant variable: r1064712042 
o|substituted constant variable: r1064712042 
o|substituted constant variable: r1064712044 
o|substituted constant variable: r1064712044 
o|converted assignments to bindings: (check2585) 
o|substituted constant variable: r1068312053 
o|contracted procedure: "(eval.scm:1277) chicken.load#every" 
o|substituted constant variable: r1105812080 
o|substituted constant variable: r1109212084 
o|substituted constant variable: r1109212084 
o|substituted constant variable: r1123112090 
o|propagated global variable: r1139112092 last-error 
o|substituted constant variable: r1139112094 
o|substituted constant variable: r1139112094 
o|converted assignments to bindings: (complete2464) 
o|substituted constant variable: chicken.load#constant2177 
o|substituted constant variable: r1147812101 
o|converted assignments to bindings: (strip1594) 
o|simplifications: ((let . 4)) 
o|replaced variables: 139 
o|removed binding forms: 1670 
o|removed conditional forms: 1 
o|contracted procedure: k3721 
o|removed unused formal parameters: (h290 cntr291) 
o|contracted procedure: k4254 
o|removed unused parameter to known procedure: h290 "(eval.scm:412) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:412) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:417) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:417) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:422) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:422) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:427) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:427) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:433) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:433) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:438) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:438) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:444) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:444) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:449) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:449) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:455) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:455) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:460) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:460) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:467) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:467) decorate224" 
o|removed unused parameter to known procedure: h290 "(eval.scm:474) decorate224" 
o|removed unused parameter to known procedure: cntr291 "(eval.scm:474) decorate224" 
o|inlining procedure: k6443 
o|inlining procedure: k3855 
o|inlining procedure: k3855 
o|removed side-effect free assignment to unused variable: chicken.load#constant2177 
o|inlining procedure: k9685 
o|inlining procedure: k9685 
o|inlining procedure: k9685 
o|inlining procedure: k9685 
o|inlining procedure: k9772 
o|inlining procedure: k10111 
o|inlining procedure: k10111 
o|inlining procedure: k10210 
o|propagated global variable: r1139112092 last-error 
o|replaced variables: 4 
o|removed binding forms: 149 
o|contracted procedure: k4248 
o|substituted constant variable: r644412295 
o|substituted constant variable: r977312344 
o|substituted constant variable: r1011212350 
o|substituted constant variable: r1011212350 
o|substituted constant variable: r1021112351 
o|replaced variables: 6 
o|removed binding forms: 16 
o|removed conditional forms: 2 
o|removed binding forms: 7 
o|simplifications: ((if . 54) (##core#call . 721) (let . 28)) 
o|  call simplifications:
o|    ##sys#check-structure
o|    ##sys#size
o|    ##sys#setislot	2
o|    ##sys#check-symbol	4
o|    ##sys#check-string
o|    ##sys#get-keyword
o|    scheme#call-with-current-continuation
o|    scheme#string-length	2
o|    scheme#string-ref
o|    chicken.fixnum#fx<
o|    scheme#memq	3
o|    ##sys#check-fixnum	2
o|    chicken.fixnum#fx>
o|    scheme#procedure?	2
o|    scheme#number?
o|    scheme#boolean?
o|    scheme#char?
o|    scheme#eof-object?	3
o|    chicken.base#bwp-object?
o|    scheme#string?	4
o|    scheme#vector?
o|    ##sys#void
o|    scheme#set-car!
o|    chicken.fixnum#fx=	2
o|    chicken.fixnum#fx-	4
o|    scheme#apply	7
o|    scheme#list	13
o|    ##sys#list	20
o|    ##sys#check-list	15
o|    chicken.fixnum#fx>=	2
o|    scheme#cddr	8
o|    scheme#car	29
o|    scheme#vector	12
o|    scheme#cdr	17
o|    scheme#length	2
o|    scheme#assq	6
o|    scheme#cons	64
o|    scheme#cadr	34
o|    scheme#caddr	8
o|    scheme#cdddr	4
o|    scheme#pair?	39
o|    ##sys#cons	18
o|    scheme#cadddr	4
o|    ##sys#setslot	28
o|    ##sys#immediate?
o|    scheme#not	30
o|    ##sys#make-structure	2
o|    ##sys#slot	141
o|    chicken.fixnum#fx+	6
o|    scheme#values	3
o|    ##sys#call-with-values	8
o|    ##sys#apply	4
o|    scheme#null?	33
o|    scheme#caar
o|    scheme#eq?	109
o|    scheme#symbol?	10
o|contracted procedure: k7900 
o|contracted procedure: k3622 
o|contracted procedure: k7894 
o|contracted procedure: k3625 
o|contracted procedure: k7888 
o|contracted procedure: k3628 
o|contracted procedure: k7882 
o|contracted procedure: k3631 
o|contracted procedure: k7876 
o|contracted procedure: k3634 
o|contracted procedure: k7870 
o|contracted procedure: k3637 
o|contracted procedure: k7864 
o|contracted procedure: k3640 
o|contracted procedure: k7858 
o|contracted procedure: k3643 
o|contracted procedure: k3652 
o|contracted procedure: k3678 
o|contracted procedure: k3668 
o|contracted procedure: k3733 
o|contracted procedure: k3757 
o|contracted procedure: k3761 
o|contracted procedure: k3765 
o|contracted procedure: k3780 
o|contracted procedure: k3801 
o|contracted procedure: k3786 
o|contracted procedure: k3793 
o|contracted procedure: k3797 
o|contracted procedure: k3811 
o|contracted procedure: k3815 
o|contracted procedure: k3828 
o|contracted procedure: k3832 
o|contracted procedure: k3591 
o|contracted procedure: k3587 
o|contracted procedure: k3597 
o|contracted procedure: k3875 
o|contracted procedure: k3879 
o|contracted procedure: k3929 
o|contracted procedure: k3907 
o|contracted procedure: k3922 
o|contracted procedure: k3946 
o|contracted procedure: k3964 
o|contracted procedure: k3976 
o|contracted procedure: k4005 
o|contracted procedure: k4001 
o|contracted procedure: k4008 
o|contracted procedure: k4054 
o|contracted procedure: k4021 
o|contracted procedure: k4027 
o|contracted procedure: k4033 
o|contracted procedure: k4046 
o|contracted procedure: k4042 
o|contracted procedure: k4060 
o|contracted procedure: k4069 
o|contracted procedure: k4075 
o|contracted procedure: k4088 
o|contracted procedure: k4084 
o|contracted procedure: k4094 
o|contracted procedure: k4111 
o|contracted procedure: k4107 
o|contracted procedure: k4103 
o|contracted procedure: k4117 
o|contracted procedure: k4138 
o|contracted procedure: k4134 
o|contracted procedure: k4130 
o|contracted procedure: k4126 
o|contracted procedure: k4158 
o|contracted procedure: k4164 
o|contracted procedure: k4172 
o|contracted procedure: k4180 
o|contracted procedure: k4188 
o|contracted procedure: k4206 
o|contracted procedure: k4219 
o|contracted procedure: k7384 
o|contracted procedure: k4230 
o|contracted procedure: k7380 
o|contracted procedure: k4239 
o|contracted procedure: k3865 
o|contracted procedure: k3846 
o|contracted procedure: k7346 
o|contracted procedure: k4260 
o|contracted procedure: k4272 
o|contracted procedure: k4281 
o|contracted procedure: k4289 
o|contracted procedure: k4297 
o|contracted procedure: k4305 
o|contracted procedure: k4313 
o|contracted procedure: k4321 
o|contracted procedure: k4329 
o|contracted procedure: k4351 
o|contracted procedure: k4357 
o|contracted procedure: k4360 
o|contracted procedure: k4368 
o|contracted procedure: k4375 
o|contracted procedure: k4381 
o|contracted procedure: k4388 
o|contracted procedure: k4394 
o|contracted procedure: k4402 
o|contracted procedure: k4442 
o|contracted procedure: k4428 
o|contracted procedure: k4435 
o|contracted procedure: k4446 
o|contracted procedure: k4450 
o|contracted procedure: k4456 
o|contracted procedure: k4459 
o|contracted procedure: k4462 
o|contracted procedure: k4468 
o|contracted procedure: k4477 
o|contracted procedure: k4484 
o|contracted procedure: k4490 
o|contracted procedure: k4508 
o|contracted procedure: k4512 
o|contracted procedure: k4544 
o|contracted procedure: k4540 
o|contracted procedure: k4536 
o|contracted procedure: k4548 
o|contracted procedure: k4552 
o|contracted procedure: k4564 
o|contracted procedure: k4577 
o|contracted procedure: k4584 
o|contracted procedure: k4590 
o|contracted procedure: k4593 
o|contracted procedure: k4614 
o|contracted procedure: k4639 
o|contracted procedure: k4655 
o|contracted procedure: k4645 
o|contracted procedure: k4672 
o|contracted procedure: k4690 
o|contracted procedure: k4696 
o|contracted procedure: k4699 
o|contracted procedure: k4702 
o|contracted procedure: k4705 
o|contracted procedure: k4716 
o|contracted procedure: k4719 
o|contracted procedure: k4725 
o|contracted procedure: k4737 
o|contracted procedure: k4753 
o|contracted procedure: k4749 
o|contracted procedure: k4765 
o|contracted procedure: k4771 
o|contracted procedure: k4790 
o|contracted procedure: k4786 
o|contracted procedure: k4806 
o|contracted procedure: k4814 
o|contracted procedure: k4820 
o|contracted procedure: k4829 
o|contracted procedure: k4845 
o|contracted procedure: k4841 
o|contracted procedure: k4865 
o|contracted procedure: k4873 
o|contracted procedure: k4881 
o|contracted procedure: k4887 
o|contracted procedure: k4896 
o|contracted procedure: k4915 
o|contracted procedure: k4911 
o|contracted procedure: k4939 
o|contracted procedure: k4947 
o|contracted procedure: k4955 
o|contracted procedure: k4963 
o|contracted procedure: k4966 
o|contracted procedure: k4975 
o|contracted procedure: k4995 
o|contracted procedure: k5004 
o|contracted procedure: k5007 
o|contracted procedure: k5014 
o|contracted procedure: k5018 
o|contracted procedure: k5025 
o|contracted procedure: k5034 
o|contracted procedure: k5037 
o|contracted procedure: k5040 
o|contracted procedure: k5048 
o|contracted procedure: k5056 
o|contracted procedure: k5098 
o|contracted procedure: k5125 
o|contracted procedure: k5128 
o|contracted procedure: k5131 
o|contracted procedure: k5139 
o|contracted procedure: k5147 
o|contracted procedure: k5159 
o|contracted procedure: k5181 
o|contracted procedure: k5177 
o|contracted procedure: k5162 
o|contracted procedure: k5165 
o|contracted procedure: k5173 
o|contracted procedure: k5190 
o|contracted procedure: k5193 
o|contracted procedure: k5210 
o|contracted procedure: k5222 
o|contracted procedure: k5206 
o|contracted procedure: k5202 
o|contracted procedure: k5233 
o|contracted procedure: k5261 
o|contracted procedure: k5257 
o|contracted procedure: k5253 
o|contracted procedure: k5270 
o|contracted procedure: k5292 
o|contracted procedure: k5242 
o|contracted procedure: k5246 
o|contracted procedure: k5288 
o|contracted procedure: k5273 
o|contracted procedure: k5276 
o|contracted procedure: k5284 
o|contracted procedure: k5304 
o|contracted procedure: k5326 
o|contracted procedure: k5219 
o|contracted procedure: k5322 
o|contracted procedure: k5307 
o|contracted procedure: k5310 
o|contracted procedure: k5318 
o|contracted procedure: k5335 
o|contracted procedure: k5338 
o|contracted procedure: k5341 
o|contracted procedure: k5344 
o|contracted procedure: k5350 
o|contracted procedure: k5353 
o|contracted procedure: k5359 
o|contracted procedure: k5370 
o|contracted procedure: k5394 
o|contracted procedure: k5406 
o|contracted procedure: k5390 
o|contracted procedure: k5386 
o|contracted procedure: k5366 
o|contracted procedure: k5417 
o|contracted procedure: k5437 
o|contracted procedure: k5433 
o|contracted procedure: k5429 
o|contracted procedure: k5482 
o|contracted procedure: k5446 
o|contracted procedure: k5472 
o|contracted procedure: k5476 
o|contracted procedure: k5468 
o|contracted procedure: k5449 
o|contracted procedure: k5452 
o|contracted procedure: k5460 
o|contracted procedure: k5464 
o|contracted procedure: k5530 
o|contracted procedure: k5494 
o|contracted procedure: k5520 
o|contracted procedure: k5524 
o|contracted procedure: k5403 
o|contracted procedure: k5516 
o|contracted procedure: k5497 
o|contracted procedure: k5500 
o|contracted procedure: k5508 
o|contracted procedure: k5512 
o|contracted procedure: k5542 
o|contracted procedure: k5564 
o|contracted procedure: k5379 
o|contracted procedure: k5560 
o|contracted procedure: k5545 
o|contracted procedure: k5548 
o|contracted procedure: k5556 
o|contracted procedure: k5576 
o|contracted procedure: k5579 
o|contracted procedure: k5582 
o|contracted procedure: k5590 
o|contracted procedure: k5598 
o|contracted procedure: k5610 
o|contracted procedure: k5632 
o|contracted procedure: k5628 
o|contracted procedure: k5613 
o|contracted procedure: k5616 
o|contracted procedure: k5624 
o|contracted procedure: k5641 
o|contracted procedure: k5647 
o|contracted procedure: k5652 
o|contracted procedure: k5664 
o|contracted procedure: k5667 
o|contracted procedure: k5676 
o|contracted procedure: k5685 
o|contracted procedure: k5707 
o|contracted procedure: k5703 
o|contracted procedure: k5722 
o|contracted procedure: k5728 
o|contracted procedure: k5750 
o|contracted procedure: k5746 
o|contracted procedure: k5769 
o|contracted procedure: k5765 
o|contracted procedure: k5775 
o|contracted procedure: k5797 
o|contracted procedure: k5793 
o|contracted procedure: k5816 
o|contracted procedure: k5812 
o|contracted procedure: k5822 
o|contracted procedure: k5844 
o|contracted procedure: k5840 
o|contracted procedure: k5863 
o|contracted procedure: k5859 
o|contracted procedure: k5869 
o|contracted procedure: k5891 
o|contracted procedure: k5887 
o|contracted procedure: k5906 
o|contracted procedure: k5928 
o|contracted procedure: k7426 
o|inlining procedure: k5936 
o|contracted procedure: k7441 
o|contracted procedure: k7448 
o|contracted procedure: k7444 
o|contracted procedure: k7455 
o|contracted procedure: k7459 
o|contracted procedure: k7466 
o|inlining procedure: k7463 
o|contracted procedure: k5969 
o|contracted procedure: k5951 
o|contracted procedure: k5961 
o|contracted procedure: k6033 
o|contracted procedure: k6036 
o|contracted procedure: k6039 
o|contracted procedure: k6047 
o|contracted procedure: k6055 
o|contracted procedure: k6093 
o|contracted procedure: k6130 
o|contracted procedure: k6148 
o|contracted procedure: k6182 
o|contracted procedure: k6185 
o|contracted procedure: k6201 
o|contracted procedure: k6223 
o|contracted procedure: k6157 
o|contracted procedure: k6219 
o|contracted procedure: k6204 
o|contracted procedure: k6207 
o|contracted procedure: k6215 
o|contracted procedure: k6179 
o|contracted procedure: k6232 
o|contracted procedure: k6235 
o|contracted procedure: k6265 
o|contracted procedure: k6268 
o|contracted procedure: k6283 
o|contracted procedure: k6286 
o|contracted procedure: k6323 
o|contracted procedure: k6346 
o|contracted procedure: k6356 
o|contracted procedure: k6360 
o|contracted procedure: k6373 
o|contracted procedure: k6395 
o|contracted procedure: k6244 
o|contracted procedure: k6391 
o|contracted procedure: k6376 
o|contracted procedure: k6379 
o|contracted procedure: k6387 
o|contracted procedure: k6262 
o|contracted procedure: k6404 
o|contracted procedure: k6407 
o|contracted procedure: k6410 
o|contracted procedure: k6453 
o|contracted procedure: k6443 
o|contracted procedure: k6463 
o|contracted procedure: k6472 
o|contracted procedure: k6483 
o|contracted procedure: k6493 
o|contracted procedure: k6502 
o|contracted procedure: k6511 
o|contracted procedure: k6518 
o|contracted procedure: k6529 
o|contracted procedure: k6532 
o|contracted procedure: k6549 
o|contracted procedure: k6545 
o|contracted procedure: k6558 
o|contracted procedure: k6561 
o|contracted procedure: k6564 
o|contracted procedure: k6572 
o|contracted procedure: k6580 
o|contracted procedure: k6589 
o|contracted procedure: k6595 
o|contracted procedure: k6899 
o|contracted procedure: k6598 
o|contracted procedure: k6685 
o|contracted procedure: k6694 
o|contracted procedure: k6717 
o|contracted procedure: k6723 
o|contracted procedure: k6729 
o|contracted procedure: k6755 
o|contracted procedure: k6759 
o|contracted procedure: k6805 
o|contracted procedure: k6813 
o|contracted procedure: k6825 
o|contracted procedure: k6834 
o|contracted procedure: k6852 
o|contracted procedure: k6843 
o|contracted procedure: k6858 
o|contracted procedure: k6870 
o|contracted procedure: k6873 
o|contracted procedure: k6876 
o|contracted procedure: k6884 
o|contracted procedure: k6892 
o|contracted procedure: k6905 
o|contracted procedure: k6920 
o|contracted procedure: k6912 
o|contracted procedure: k6926 
o|contracted procedure: k6941 
o|contracted procedure: k6937 
o|contracted procedure: k6933 
o|contracted procedure: k6947 
o|contracted procedure: k6957 
o|contracted procedure: k6963 
o|contracted procedure: k6966 
o|contracted procedure: k6979 
o|contracted procedure: k6969 
o|contracted procedure: k6991 
o|contracted procedure: k6994 
o|contracted procedure: k7004 
o|contracted procedure: k7010 
o|contracted procedure: k7017 
o|contracted procedure: k7023 
o|contracted procedure: k7035 
o|contracted procedure: k7047 
o|contracted procedure: k7050 
o|contracted procedure: k7065 
o|contracted procedure: k7057 
o|contracted procedure: k7071 
o|contracted procedure: k7083 
o|contracted procedure: k7090 
o|contracted procedure: k7100 
o|contracted procedure: k7107 
o|contracted procedure: k7113 
o|contracted procedure: k7116 
o|contracted procedure: k7128 
o|contracted procedure: k7142 
o|contracted procedure: k7145 
o|contracted procedure: k7177 
o|contracted procedure: k7183 
o|contracted procedure: k7189 
o|contracted procedure: k7195 
o|contracted procedure: k7201 
o|contracted procedure: k7207 
o|contracted procedure: k7213 
o|contracted procedure: k7219 
o|contracted procedure: k7225 
o|contracted procedure: k7265 
o|contracted procedure: k7342 
o|contracted procedure: k7387 
o|contracted procedure: k7393 
o|contracted procedure: k7399 
o|contracted procedure: k7411 
o|contracted procedure: k7510 
o|contracted procedure: k7516 
o|contracted procedure: k7525 
o|contracted procedure: k7531 
o|contracted procedure: k7540 
o|contracted procedure: k7557 
o|contracted procedure: k7579 
o|contracted procedure: k7585 
o|contracted procedure: k7615 
o|contracted procedure: k7621 
o|contracted procedure: k7659 
o|contracted procedure: k7665 
o|contracted procedure: k7711 
o|contracted procedure: k7714 
o|contracted procedure: k7722 
o|contracted procedure: k7741 
o|contracted procedure: k7749 
o|contracted procedure: k7761 
o|contracted procedure: k7764 
o|contracted procedure: k7767 
o|contracted procedure: k7775 
o|contracted procedure: k7783 
o|contracted procedure: k7795 
o|contracted procedure: k7798 
o|contracted procedure: k7801 
o|contracted procedure: k7809 
o|contracted procedure: k7817 
o|contracted procedure: k7487 
o|contracted procedure: k7493 
o|contracted procedure: k7500 
o|contracted procedure: k7504 
o|contracted procedure: k7835 
o|contracted procedure: k7844 
o|contracted procedure: k7851 
o|contracted procedure: k8059 
o|contracted procedure: k8072 
o|contracted procedure: k8089 
o|contracted procedure: k8095 
o|contracted procedure: k8105 
o|contracted procedure: k8117 
o|contracted procedure: k8109 
o|contracted procedure: k8113 
o|contracted procedure: k8123 
o|contracted procedure: k8146 
o|contracted procedure: k8158 
o|contracted procedure: k8178 
o|contracted procedure: k8167 
o|contracted procedure: k8186 
o|contracted procedure: k8189 
o|contracted procedure: k8192 
o|contracted procedure: k8195 
o|contracted procedure: k8198 
o|contracted procedure: k8204 
o|contracted procedure: k8210 
o|contracted procedure: k8216 
o|contracted procedure: k8229 
o|contracted procedure: k8235 
o|contracted procedure: k8241 
o|contracted procedure: k9548 
o|contracted procedure: k9571 
o|contracted procedure: k9609 
o|contracted procedure: k9581 
o|contracted procedure: k9591 
o|contracted procedure: k9598 
o|contracted procedure: k9605 
o|contracted procedure: k9621 
o|contracted procedure: k9631 
o|contracted procedure: k9638 
o|contracted procedure: k9644 
o|contracted procedure: k9735 
o|contracted procedure: k9664 
o|contracted procedure: k9679 
o|contracted procedure: k9682 
o|contracted procedure: k9692 
o|contracted procedure: k9695 
o|contracted procedure: k969212329 
o|contracted procedure: k9702 
o|contracted procedure: k969212333 
o|contracted procedure: k9709 
o|contracted procedure: k969212337 
o|contracted procedure: k9716 
o|contracted procedure: k969212341 
o|contracted procedure: k9724 
o|contracted procedure: k9747 
o|contracted procedure: k10181 
o|contracted procedure: k9778 
o|contracted procedure: k10175 
o|contracted procedure: k9781 
o|contracted procedure: k10169 
o|contracted procedure: k9784 
o|contracted procedure: k10163 
o|contracted procedure: k9787 
o|contracted procedure: k10157 
o|contracted procedure: k9790 
o|contracted procedure: k10151 
o|contracted procedure: k9793 
o|contracted procedure: k10145 
o|contracted procedure: k9796 
o|contracted procedure: k10139 
o|contracted procedure: k9799 
o|contracted procedure: k9803 
o|contracted procedure: k9833 
o|removed unused formal parameters: (abrt2342) 
o|contracted procedure: k9926 
o|contracted procedure: k9999 
o|contracted procedure: k10009 
o|contracted procedure: k10013 
o|contracted procedure: k10019 
o|removed unused parameter to known procedure: abrt2342 a9871 
o|contracted procedure: k10063 
o|contracted procedure: k10130 
o|contracted procedure: k10087 
o|contracted procedure: k10133 
o|contracted procedure: k10193 
o|contracted procedure: k10199 
o|contracted procedure: k10220 
o|contracted procedure: k10210 
o|contracted procedure: k10242 
o|contracted procedure: k10229 
o|contracted procedure: k10251 
o|contracted procedure: k10313 
o|contracted procedure: k10336 
o|contracted procedure: k10344 
o|contracted procedure: k10398 
o|contracted procedure: k10380 
o|contracted procedure: k10383 
o|contracted procedure: k10392 
o|contracted procedure: k10386 
o|contracted procedure: k10422 
o|contracted procedure: k10477 
o|contracted procedure: k10440 
o|contracted procedure: k10456 
o|contracted procedure: k10459 
o|contracted procedure: k10473 
o|contracted procedure: k10491 
o|contracted procedure: k10513 
o|contracted procedure: k10519 
o|contracted procedure: k10525 
o|contracted procedure: k10532 
o|contracted procedure: k10551 
o|contracted procedure: k10585 
o|contracted procedure: k10614 
o|contracted procedure: k10617 
o|contracted procedure: k10630 
o|contracted procedure: k10634 
o|contracted procedure: k10638 
o|contracted procedure: k10642 
o|contracted procedure: k10649 
o|contracted procedure: k10701 
o|contracted procedure: k10672 
o|contracted procedure: k10685 
o|contracted procedure: k10752 
o|contracted procedure: k10762 
o|contracted procedure: k10766 
o|contracted procedure: k10775 
o|contracted procedure: k10789 
o|contracted procedure: k10778 
o|contracted procedure: k10785 
o|contracted procedure: k10817 
o|contracted procedure: k10827 
o|contracted procedure: k10831 
o|contracted procedure: k10840 
o|contracted procedure: k10854 
o|contracted procedure: k10843 
o|contracted procedure: k10850 
o|contracted procedure: k8632 
o|contracted procedure: k8641 
o|contracted procedure: k8654 
o|contracted procedure: k10877 
o|contracted procedure: k10891 
o|contracted procedure: k10880 
o|contracted procedure: k10887 
o|contracted procedure: k10901 
o|contracted procedure: k10904 
o|contracted procedure: k10907 
o|contracted procedure: k10919 
o|contracted procedure: k10932 
o|contracted procedure: k10936 
o|contracted procedure: k10940 
o|contracted procedure: k10946 
o|contracted procedure: k10956 
o|contracted procedure: k10960 
o|contracted procedure: k10964 
o|contracted procedure: k10976 
o|contracted procedure: k11000 
o|contracted procedure: k11013 
o|contracted procedure: k11019 
o|inlining procedure: k11010 
o|contracted procedure: k11028 
o|inlining procedure: k11010 
o|contracted procedure: k11060 
o|contracted procedure: k11073 
o|contracted procedure: k11081 
o|contracted procedure: k11224 
o|contracted procedure: k11238 
o|contracted procedure: k11227 
o|contracted procedure: k11233 
o|contracted procedure: k11394 
o|contracted procedure: k11403 
o|contracted procedure: k11412 
o|contracted procedure: k11415 
o|contracted procedure: k11418 
o|contracted procedure: k11426 
o|contracted procedure: k11434 
o|contracted procedure: k11449 
o|contracted procedure: k11465 
o|contracted procedure: k11471 
o|contracted procedure: k11480 
o|contracted procedure: k11477 
o|contracted procedure: k11507 
o|contracted procedure: k11515 
o|contracted procedure: k11523 
o|contracted procedure: k11531 
o|contracted procedure: k11547 
o|contracted procedure: k11570 
o|contracted procedure: k11566 
o|contracted procedure: k11601 
o|contracted procedure: k11608 
o|contracted procedure: k11615 
o|contracted procedure: k11743 
o|contracted procedure: k11626 
o|contracted procedure: k11638 
o|contracted procedure: k11641 
o|contracted procedure: k11644 
o|contracted procedure: k11693 
o|contracted procedure: k11722 
o|contracted procedure: k11736 
o|contracted procedure: k11740 
o|contracted procedure: k11732 
o|simplifications: ((let . 230)) 
o|removed binding forms: 657 
(o x)|known list op on rest arg sublist: ##core#rest-length as946 0 
o|contracted procedure: "(eval.scm:1060) dload-path2303" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24312433 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24312433 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24432445 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24432445 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest25252527 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest25252527 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14891491 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14891491 0 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|replaced variables: 5 
o|removed binding forms: 1 
o|inlining procedure: k9848 
o|removed binding forms: 2 
o|replaced variables: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop268 0 
o|direct leaf routine/allocation: emit-trace-info222 5 
o|direct leaf routine/allocation: g10241037 0 
o|direct leaf routine/allocation: loop1125 0 
o|direct leaf routine/allocation: loop1308 0 
o|direct leaf routine/allocation: loop2238 0 
o|direct leaf routine/allocation: for-each-loop26362664 0 
o|direct leaf routine/allocation: for-each-loop26892717 0 
o|direct leaf routine/allocation: for-each-loop27422760 0 
o|direct leaf routine/allocation: store-string 0 
o|contracted procedure: k3739 
o|converted assignments to bindings: (loop268) 
o|contracted procedure: "(eval.scm:509) k6349" 
o|converted assignments to bindings: (loop1125) 
o|contracted procedure: k7519 
o|contracted procedure: "(eval.scm:705) k7545" 
o|contracted procedure: "(eval.scm:709) k7565" 
o|contracted procedure: "(eval.scm:714) k7596" 
o|contracted procedure: "(eval.scm:720) k7635" 
o|contracted procedure: "(eval.scm:727) k7682" 
o|contracted procedure: "(eval.scm:731) k7730" 
o|converted assignments to bindings: (loop1308) 
o|converted assignments to bindings: (loop2238) 
o|contracted procedure: k10735 
o|converted assignments to bindings: (for-each-loop26362664) 
o|contracted procedure: k10800 
o|converted assignments to bindings: (for-each-loop26892717) 
o|contracted procedure: k10865 
o|converted assignments to bindings: (for-each-loop27422760) 
o|simplifications: ((let . 7)) 
o|removed binding forms: 12 
o|direct leaf routine/allocation: for-each-loop10231040 0 
o|contracted procedure: k6289 
o|converted assignments to bindings: (for-each-loop10231040) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop15601561 k11559 strip1594 k9541 k9561 complete2464 map-loop24752492 store-result run-safe test2805 loop2819 test-extensions2804 loop1801 for-each-loop26992732 for-each-loop26462679 g26272628 check2585 loop2594 chicken.load#file-exists? doloop25542555 k10295 loop2510 chicken.load#make-relative-pathname chicken.load#evaluator chicken.load#load/internal k10102 dload2304 a9871 for-each-loop23852397 doloop23752376 chicken.load#c-toplevel loop2257 chicken.load#path-separator-index/right foldr16001603 loop1575 err1573 g13761385 map-loop13701388 g14041413 map-loop13981416 emit-syntax-trace-info223 k7026 k7074 g12811282 compile-call230 g11081117 map-loop11021132 k6819 loop1185 loop21190 map-loop10651084 include-file226 map-loop9951013 map-loop960978 map-loop857874 doloop12991300 decorate224 map-loop689706 map-loop716733 map-loop746764 map-loop773794 map-loop806830 map-loop630648 map-loop657678 map-loop494512 map-loop522539 chicken.eval#compile-to-closure g595604 map-loop589607 doloop616617 k3997 k3970 lookup220 compile227 rename219 loop252 g261262 k3658 find-id218) 
o|calls to known targets: 323 
o|identified direct recursive calls: f_3775 1 
o|identified direct recursive calls: f_3728 1 
o|unused rest argument: v336 f_3941 
o|unused rest argument: v357 f_3990 
o|unused rest argument: v358 f_3995 
o|unused rest argument: v377 f_4167 
o|unused rest argument: v378 f_4175 
o|unused rest argument: v379 f_4183 
o|unused rest argument: v380 f_4191 
o|unused rest argument: v381 f_4193 
o|unused rest argument: v382 f_4212 
o|unused rest argument: v383 f_4214 
o|unused rest argument: v402 f_4225 
o|unused rest argument: v430 f_4284 
o|unused rest argument: v431 f_4292 
o|unused rest argument: v432 f_4300 
o|unused rest argument: v433 f_4308 
o|unused rest argument: v434 f_4316 
o|unused rest argument: v435 f_4324 
o|unused rest argument: v436 f_4332 
o|unused rest argument: v437 f_4334 
o|unused rest argument: v439 f_4363 
o|identified direct recursive calls: f_5154 1 
o|identified direct recursive calls: f_5265 1 
o|identified direct recursive calls: f_5299 1 
o|identified direct recursive calls: f_5441 1 
o|identified direct recursive calls: f_5489 1 
o|identified direct recursive calls: f_5537 1 
o|identified direct recursive calls: f_5605 1 
o|identified direct recursive calls: f_7436 1 
o|identified direct recursive calls: f_6341 1 
o|identified direct recursive calls: f_6832 1 
o|identified direct recursive calls: f_7482 1 
o|unused rest argument: _1323 f_7838 
o|identified direct recursive calls: f_8054 1 
o|identified direct recursive calls: f_8153 1 
o|identified direct recursive calls: f_9585 1 
o|identified direct recursive calls: f_9674 4 
o|unused rest argument: rest24312433 f_10208 
o|unused rest argument: rest24432445 f_10227 
o|unused rest argument: rest25252527 f_10378 
o|identified direct recursive calls: f_10770 1 
o|identified direct recursive calls: f_10835 1 
o|identified direct recursive calls: f_10872 1 
o|unused rest argument: rest14891491 f_11624 
o|fast box initializations: 49 
o|fast global references: 74 
o|fast global assignments: 31 
o|dropping unused closure argument: f_10188 
o|dropping unused closure argument: f_10499 
o|dropping unused closure argument: f_10770 
o|dropping unused closure argument: f_10835 
o|dropping unused closure argument: f_10872 
o|dropping unused closure argument: f_11100 
o|dropping unused closure argument: f_11159 
o|dropping unused closure argument: f_11222 
o|dropping unused closure argument: f_3620 
o|dropping unused closure argument: f_3805 
o|dropping unused closure argument: f_3819 
o|dropping unused closure argument: f_3836 
o|dropping unused closure argument: f_6832 
o|dropping unused closure argument: f_7482 
o|dropping unused closure argument: f_8144 
o|dropping unused closure argument: f_9575 
o|dropping unused closure argument: f_9613 
o|dropping unused closure argument: f_9762 
*/
/* end of file */
