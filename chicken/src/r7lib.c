/* Generated from r7lib.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: r7lib.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file r7lib.c -emit-import-library scheme.write -emit-import-library scheme.time -emit-import-library scheme.file -emit-import-library scheme.process-context
   unit: r7lib
   uses: file library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[36];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,46,119,114,105,116,101,35,105,110,116,101,114,101,115,116,105,110,103,63,41,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,33),40,115,99,104,101,109,101,46,119,114,105,116,101,35,100,105,115,112,108,97,121,45,115,116,114,105,110,103,32,115,32,112,41,0,0,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,15),40,97,115,115,105,103,110,45,108,97,98,101,108,33,41,0};
static C_char li3[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,111,41};
static C_char li4[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,56,52,32,105,41,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,9),40,102,95,55,57,51,32,111,41,0,0,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,9),40,102,95,57,50,50,32,111,41,0,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,7),40,115,101,101,110,63,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,7),40,115,101,101,110,33,41,0};
static C_char li9[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,108,49,49,49,32,103,49,49,50,32,103,49,49,48,41,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,50,57,32,105,41,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,9),40,119,97,108,107,33,32,111,41,0,0,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,71),40,115,99,104,101,109,101,46,119,114,105,116,101,35,119,114,105,116,101,45,119,105,116,104,45,115,104,97,114,101,100,45,115,116,114,117,99,116,117,114,101,32,119,114,105,116,101,114,32,111,98,106,32,99,121,99,108,101,115,45,111,110,108,121,63,32,112,111,114,116,41,0};
static C_char li13[] C_aligned={C_lihdr(0,0,31),40,115,99,104,101,109,101,46,119,114,105,116,101,35,100,105,115,112,108,97,121,32,111,32,46,32,114,101,115,116,41,0};
static C_char li14[] C_aligned={C_lihdr(0,0,29),40,115,99,104,101,109,101,46,119,114,105,116,101,35,119,114,105,116,101,32,111,32,46,32,114,101,115,116,41,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,46,119,114,105,116,101,35,119,114,105,116,101,45,115,104,97,114,101,100,32,111,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,28),40,115,99,104,101,109,101,46,116,105,109,101,35,99,117,114,114,101,110,116,45,115,101,99,111,110,100,41,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,46,116,105,109,101,35,99,117,114,114,101,110,116,45,106,105,102,102,121,41,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,46,116,105,109,101,35,106,105,102,102,105,101,115,45,112,101,114,45,115,101,99,111,110,100,41};
static C_char li19[] C_aligned={C_lihdr(0,0,49),40,115,99,104,101,109,101,46,102,105,108,101,35,111,112,101,110,45,98,105,110,97,114,121,45,105,110,112,117,116,45,102,105,108,101,32,102,110,97,109,101,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,50),40,115,99,104,101,109,101,46,102,105,108,101,35,111,112,101,110,45,98,105,110,97,114,121,45,111,117,116,112,117,116,45,102,105,108,101,32,102,110,97,109,101,32,46,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,46,102,105,108,101,35,102,105,108,101,45,101,120,105,115,116,115,63,32,102,110,97,109,101,41};
static C_char li22[] C_aligned={C_lihdr(0,0,37),40,115,99,104,101,109,101,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,35,99,111,109,109,97,110,100,45,108,105,110,101,41,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,8),40,117,110,119,105,110,100,41};
static C_char li24[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,35,101,120,105,116,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from scheme.time#current-jiffy in k511 */
C_regparm static C_word stub282(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_int_to_num(&C_a,clock());
return C_r;}

C_noret_decl(f_1012)
static void C_ccall f_1012(C_word c,C_word *av) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word *av) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word *av) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word *av) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word *av) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word *av) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word *av) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word *av) C_noret;
C_noret_decl(f_1055)
static void C_ccall f_1055(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1064)
static void C_ccall f_1064(C_word c,C_word *av) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word *av) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word *av) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word *av) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word *av) C_noret;
C_noret_decl(f_1100)
static void C_ccall f_1100(C_word c,C_word *av) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word *av) C_noret;
C_noret_decl(f_1116)
static void f_1116(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word *av) C_noret;
C_noret_decl(f_513)
static void C_ccall f_513(C_word c,C_word *av) C_noret;
C_noret_decl(f_515)
static C_word f_515(C_word t0);
C_noret_decl(f_560)
static void f_560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_588)
static C_word f_588(C_word t0,C_word t1);
C_noret_decl(f_594)
static C_word f_594(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word *av) C_noret;
C_noret_decl(f_644)
static void f_644(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_668)
static void f_668(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word *av) C_noret;
C_noret_decl(f_728)
static void C_ccall f_728(C_word c,C_word *av) C_noret;
C_noret_decl(f_752)
static void f_752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word *av) C_noret;
C_noret_decl(f_775)
static void f_775(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_779)
static C_word f_779(C_word t0,C_word t1);
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word *av) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word *av) C_noret;
C_noret_decl(f_803)
static void C_ccall f_803(C_word c,C_word *av) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word *av) C_noret;
C_noret_decl(f_813)
static void f_813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_829)
static void f_829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word *av) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word *av) C_noret;
C_noret_decl(f_850)
static void C_ccall f_850(C_word c,C_word *av) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word *av) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word *av) C_noret;
C_noret_decl(f_889)
static void f_889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word *av) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word *av) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word *av) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word *av) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word *av) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word *av) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word *av) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word *av) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word *av) C_noret;
C_noret_decl(C_r7lib_toplevel)
C_extern void C_ccall C_r7lib_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1116)
static void C_ccall trf_1116(C_word c,C_word *av) C_noret;
static void C_ccall trf_1116(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1116(t0,t1);}

C_noret_decl(trf_560)
static void C_ccall trf_560(C_word c,C_word *av) C_noret;
static void C_ccall trf_560(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_560(t0,t1,t2);}

C_noret_decl(trf_644)
static void C_ccall trf_644(C_word c,C_word *av) C_noret;
static void C_ccall trf_644(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_644(t0,t1,t2,t3);}

C_noret_decl(trf_668)
static void C_ccall trf_668(C_word c,C_word *av) C_noret;
static void C_ccall trf_668(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_668(t0,t1,t2);}

C_noret_decl(trf_752)
static void C_ccall trf_752(C_word c,C_word *av) C_noret;
static void C_ccall trf_752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_752(t0,t1,t2);}

C_noret_decl(trf_775)
static void C_ccall trf_775(C_word c,C_word *av) C_noret;
static void C_ccall trf_775(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_775(t0,t1,t2,t3,t4);}

C_noret_decl(trf_813)
static void C_ccall trf_813(C_word c,C_word *av) C_noret;
static void C_ccall trf_813(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_813(t0,t1,t2);}

C_noret_decl(trf_829)
static void C_ccall trf_829(C_word c,C_word *av) C_noret;
static void C_ccall trf_829(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_829(t0,t1);}

C_noret_decl(trf_889)
static void C_ccall trf_889(C_word c,C_word *av) C_noret;
static void C_ccall trf_889(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_889(t0,t1,t2);}

/* scheme.write#write-shared in k511 */
static void C_ccall f_1012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1012,c,av);}
if(C_truep(C_rest_nullp(c,3))){
t3=*((C_word*)lf[9]+1);
/* r7lib.scm:168: write-with-shared-structure */
f_775(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_FALSE,*((C_word*)lf[9]+1));}
else{
/* r7lib.scm:168: write-with-shared-structure */
f_775(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_FALSE,C_get_rest_arg(c,3,av,3,t0));}}

/* scheme.time#current-second in k511 */
static void C_ccall f_1027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1027,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:187: chicken.time#current-seconds */
t3=*((C_word*)lf[17]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1033 in scheme.time#current-second in k511 */
static void C_ccall f_1035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1035,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_s_a_i_plus(&a,2,t1,lf[16]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* scheme.time#current-jiffy in k511 */
static void C_ccall f_1037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_1037,c,av);}
a=C_alloc(8);
t2=C_a_i_bytevector(&a,1,C_fix(6));
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub282(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.time#jiffies-per-second in k511 */
static void C_ccall f_1040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_1040,c,av);}
a=C_alloc(6);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int_to_num(&a,CLOCKS_PER_SEC);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1042 in k511 */
static void C_ccall f_1044(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_1044,c,av);}
a=C_alloc(23);
t2=C_mutate((C_word*)lf[21]+1 /* (set! scheme.file#open-binary-input-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1046,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[25]+1 /* (set! scheme.file#open-binary-output-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1055,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[27]+1 /* (set! scheme.file#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1064,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t5=C_a_i_provide(&a,1,lf[29]);
t6=C_mutate((C_word*)lf[30]+1 /* (set! scheme.process-context#command-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1073,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[33]+1 /* (set! scheme.process-context#exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1100,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* scheme.file#open-binary-input-file in k1042 in k511 */
static void C_ccall f_1046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1046,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1050,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[23]+1);
av2[3]=t2;
av2[4]=lf[24];
av2[5]=t3;
C_apply(6,av2);}}

/* k1048 in scheme.file#open-binary-input-file in k1042 in k511 */
static void C_ccall f_1050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1050,c,av);}
t2=C_i_setslot(t1,C_fix(14),lf[22]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.file#open-binary-output-file in k1042 in k511 */
static void C_ccall f_1055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1055,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[26]+1);
av2[3]=t2;
av2[4]=lf[24];
av2[5]=t3;
C_apply(6,av2);}}

/* k1057 in scheme.file#open-binary-output-file in k1042 in k511 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1059,c,av);}
t2=C_i_setslot(t1,C_fix(14),lf[22]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.file#file-exists? in k1042 in k511 */
static void C_ccall f_1064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1064,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1071,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:215: chicken.file#file-exists? */
t4=*((C_word*)lf[28]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1069 in scheme.file#file-exists? in k1042 in k511 */
static void C_ccall f_1071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1071,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* scheme.process-context#command-line in k1042 in k511 */
static void C_ccall f_1073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1073,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:231: chicken.process-context#program-name */
t3=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1079 in scheme.process-context#command-line in k1042 in k511 */
static void C_ccall f_1081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1081,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1085,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:231: chicken.process-context#command-line-arguments */
t3=*((C_word*)lf[31]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1083 in k1079 in scheme.process-context#command-line in k1042 in k511 */
static void C_ccall f_1085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1085,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* scheme.process-context#exit in k1042 in k511 */
static void C_ccall f_1100(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1100,c,av);}
a=C_alloc(10);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_fix(0):C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1107,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=t6,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1116(t8,t4);}

/* k1105 in scheme.process-context#exit in k1042 in k511 */
static void C_ccall f_1107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1107,c,av);}
if(C_truep(C_i_integerp(((C_word*)t0)[2]))){
/* r7lib.scm:248: chicken.base#exit */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_FALSE);
if(C_truep(t2)){
/* r7lib.scm:248: chicken.base#exit */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* r7lib.scm:248: chicken.base#exit */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* unwind in scheme.process-context#exit in k1042 in k511 */
static void f_1116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1116,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_nullp(*((C_word*)lf[35]+1)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_cdar(*((C_word*)lf[35]+1));
t3=C_i_cdr(*((C_word*)lf[35]+1));
t4=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#dynamic-winds ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1133,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:245: after */
t6=t2;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}}

/* k1131 in unwind in scheme.process-context#exit in k1042 in k511 */
static void C_ccall f_1133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1133,c,av);}
/* r7lib.scm:246: unwind */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1116(t2,((C_word*)t0)[3]);}

/* k511 */
static void C_ccall f_513(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(46,c,6)))){
C_save_and_reclaim((void *)f_513,c,av);}
a=C_alloc(46);
t2=C_mutate(&lf[2] /* (set! scheme.write#interesting? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_515,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[3] /* (set! scheme.write#display-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_560,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! scheme.write#write-with-shared-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_775,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[8]+1 /* (set! scheme.write#display ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[11]+1 /* (set! scheme.write#write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_997,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[13]+1 /* (set! scheme.write#write-shared ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1012,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=C_a_i_provide(&a,1,lf[14]);
t9=C_mutate((C_word*)lf[15]+1 /* (set! scheme.time#current-second ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1027,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[18]+1 /* (set! scheme.time#current-jiffy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1037,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[19]+1 /* (set! scheme.time#jiffies-per-second ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1040,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_a_i_provide(&a,1,lf[20]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t13;
C_file_toplevel(2,av2);}}

/* scheme.write#interesting? in k511 */
static C_word f_515(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_pairp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_vectorp(t1);
return((C_truep(t3)?C_fixnum_less_or_equal_p(C_fix(1),C_block_size(t1)):C_SCHEME_FALSE));}}

/* scheme.write#display-string in k511 */
static void f_560(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_560,3,t1,t2,t3);}
t4=C_slot(t2,C_fix(0));
t5=C_slot(t3,C_fix(2));
t6=C_slot(t5,C_fix(3));
t7=C_block_size(t4);
/* r7lib.scm:52: g97 */
t8=t6;{
C_word av2[6];
av2[0]=t8;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=C_fix(0);
av2[5]=C_fixnum_difference(t7,C_fix(1));
((C_proc)C_fast_retrieve_proc(t8))(6,av2);}}

/* seen? in scheme.write#write-with-shared-structure in k511 */
static C_word f_588(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]));}

/* seen! in scheme.write#write-with-shared-structure in k511 */
static C_word f_594(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,C_fix(1));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k604 in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_606(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_606,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[7]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_644,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_644(t7,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST);}

/* foldl111 in k604 in scheme.write#write-with-shared-structure in k511 */
static void f_644(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_644,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_i_cdr(t5);
if(C_truep(C_fixnum_less_or_equal_p(t6,C_fix(1)))){
t7=C_u_i_car(t5);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_FALSE);
t9=C_a_i_cons(&a,2,t8,t3);
t11=t1;
t12=t4;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t7=C_u_i_car(t5);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t8,t3);
t11=t1;
t12=t4;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* walk! in scheme.write#write-with-shared-structure in k511 */
static void f_668(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_668,3,t0,t1,t2);}
a=C_alloc(21);
t3=(
/* r7lib.scm:67: interesting? */
  f_515(t2)
);
if(C_truep(t3)){
t4=(
/* r7lib.scm:68: seen? */
  f_588(((C_word*)((C_word*)t0)[2])[1],t2)
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=C_i_cdr(t4);
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_setslot(t4,C_fix(1),C_fixnum_plus(t6,C_fix(1)));
f_681(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t6=(
/* r7lib.scm:72: seen! */
  f_594(C_a_i(&a,6),((C_word*)((C_word*)t0)[4])[1],t2)
);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_728,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:73: walk! */
t12=t7;
t13=C_u_i_car(t2);
t1=t12;
t2=t13;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t6=(
/* r7lib.scm:76: seen! */
  f_594(C_a_i(&a,6),((C_word*)((C_word*)t0)[4])[1],t2)
);
t7=C_block_size(t2);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_752,a[2]=t7,a[3]=t9,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li10),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_752(t11,t5,C_fix(0));}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_681(2,av2);}}}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k679 in walk! in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_681,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=(
/* r7lib.scm:85: seen? */
  f_588(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4])
);
t3=C_i_cdr(t2);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(1)))){
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_set_i_slot(t2,C_fix(1),C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k726 in walk! in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_728,c,av);}
/* r7lib.scm:74: walk! */
t2=((C_word*)((C_word*)t0)[2])[1];
f_668(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* doloop129 in walk! in scheme.write#write-with-shared-structure in k511 */
static void f_752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_752,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:80: walk! */
t5=((C_word*)((C_word*)t0)[4])[1];
f_668(t5,t4,C_slot(((C_word*)t0)[5],t2));}}

/* k760 in doloop129 in walk! in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_762,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_752(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* scheme.write#write-with-shared-structure in k511 */
static void f_775(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(52,0,3)))){
C_save_and_reclaim_args((void *)trf_775,5,t1,t2,t3,t4,t5);}
a=C_alloc(52);
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
t16=C_set_block_item(t7,0,C_fix(0));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_779,a[2]=t7,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t18=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_791,a[2]=t11,a[3]=t13,a[4]=t5,a[5]=t15,a[6]=t2,a[7]=t9,a[8]=t7,a[9]=t1,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_set_block_item(t20,0,C_SCHEME_END_OF_LIST);
t26=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_588,a[2]=t20,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_594,a[2]=t20,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_606,a[2]=t20,a[3]=t18,tmp=(C_word)a,a+=4,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_668,a[2]=t22,a[3]=t4,a[4]=t24,a[5]=t30,a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp));
t32=((C_word*)t30)[1];
f_668(t32,t28,t3);}

/* assign-label! in scheme.write#write-with-shared-structure in k511 */
static C_word f_779(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_setslot(t1,C_fix(1),((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[2],0,t3);
return(t4);}

/* k789 in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_791,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_793,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_922,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li6),tmp=(C_word)a,a+=9,tmp));
/* r7lib.scm:151: write/shared */
t5=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* f_793 in k789 in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_793(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_793,c,av);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_803,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g91 */
t5=C_slot(t4,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(40);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_878,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* r7lib.scm:124: display-string */
f_560(t3,lf[6],((C_word*)t0)[2]);}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k801 */
static void C_ccall f_803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_803,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* r7lib.scm:110: write/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k804 in k801 */
static void C_ccall f_806(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_806,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_813(t6,((C_word*)t0)[6],t2);}

/* loop in k804 in k801 */
static void f_813(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_813,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g91 */
t4=C_slot(t3,C_fix(2));{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(41);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
t5=t3;
f_829(t5,C_i_not(C_i_cdr(t4)));}
else{
t4=t3;
f_829(t4,C_SCHEME_FALSE);}}}

/* k827 in loop in k804 in k801 */
static void f_829(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_829,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(2));
/* r7lib.scm:48: g91 */
t4=C_slot(t3,C_fix(2));{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_make_character(32);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_847,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* r7lib.scm:120: display-string */
f_560(t2,lf[5],((C_word*)t0)[6]);}}

/* k830 in k827 in loop in k804 in k801 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_832,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:117: write/shared */
t3=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k833 in k830 in k827 in loop in k804 in k801 */
static void C_ccall f_835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_835,c,av);}
/* r7lib.scm:118: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_813(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k845 in k827 in loop in k804 in k801 */
static void C_ccall f_847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_847,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:121: write/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k848 in k845 in k827 in loop in k804 in k801 */
static void C_ccall f_850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_850,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g91 */
t3=C_slot(t2,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(41);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k876 */
static void C_ccall f_878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_878,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* r7lib.scm:125: write/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k879 in k876 */
static void C_ccall f_881(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_881,c,av);}
a=C_alloc(10);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_889,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word)li4),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_889(t6,((C_word*)t0)[5],C_fix(1));}

/* doloop184 in k879 in k876 */
static void f_889(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_889,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g91 */
t5=C_slot(t4,C_fix(2));{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(41);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g91 */
t6=C_slot(t5,C_fix(2));{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(32);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k900 in doloop184 in k879 in k876 */
static void C_ccall f_902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_902,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:131: write/shared */
t3=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[6],((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k903 in k900 in doloop184 in k879 in k876 */
static void C_ccall f_905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_905,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_889(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* f_922 in k789 in scheme.write#write-with-shared-structure in k511 */
static void C_ccall f_922(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_922,c,av);}
a=C_alloc(10);
t3=(
/* r7lib.scm:46: interesting? */
  f_515(t2)
);
if(C_truep(C_i_not(t3))){
/* r7lib.scm:135: writer */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[4])[1]);
t5=C_i_cdr(t4);
if(C_truep(C_i_not(t5))){
/* r7lib.scm:139: write-interesting/shared */
t6=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
if(C_truep(C_i_numberp(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_956,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g91 */
t8=C_slot(t7,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(35);
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_965,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t7=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g91 */
t8=C_slot(t7,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(35);
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}}}}

/* k954 */
static void C_ccall f_956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_956,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:142: writer */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k957 in k954 */
static void C_ccall f_959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_959,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g91 */
t3=C_slot(t2,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(35);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k963 */
static void C_ccall f_965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_965,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* r7lib.scm:146: writer */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[9])[1];
av2[3]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k966 in k963 */
static void C_ccall f_968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_968,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[7],C_fix(2));
/* r7lib.scm:48: g91 */
t4=C_slot(t3,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_make_character(61);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}

/* k969 in k966 in k963 */
static void C_ccall f_971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_971,c,av);}
t2=(
/* r7lib.scm:148: assign-label! */
  f_779(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3])
);
/* r7lib.scm:149: write-interesting/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* scheme.write#display in k511 */
static void C_ccall f_982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_982,c,av);}
if(C_truep(C_rest_nullp(c,3))){
t3=*((C_word*)lf[9]+1);
/* r7lib.scm:154: write-with-shared-structure */
f_775(t1,*((C_word*)lf[10]+1),t2,C_SCHEME_TRUE,*((C_word*)lf[9]+1));}
else{
/* r7lib.scm:154: write-with-shared-structure */
f_775(t1,*((C_word*)lf[10]+1),t2,C_SCHEME_TRUE,C_get_rest_arg(c,3,av,3,t0));}}

/* scheme.write#write in k511 */
static void C_ccall f_997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_997,c,av);}
if(C_truep(C_rest_nullp(c,3))){
t3=*((C_word*)lf[9]+1);
/* r7lib.scm:161: write-with-shared-structure */
f_775(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_TRUE,*((C_word*)lf[9]+1));}
else{
/* r7lib.scm:161: write-with-shared-structure */
f_775(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_TRUE,C_get_rest_arg(c,3,av,3,t0));}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_r7lib_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("r7lib"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_r7lib_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(214))){
C_save(t1);
C_rereclaim2(214*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,36);
lf[0]=C_h_intern(&lf[0],5, C_text("r7lib"));
lf[1]=C_h_intern(&lf[1],13, C_text("scheme.write#"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\056\040\000"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\050\000"));
lf[7]=C_h_intern(&lf[7],5, C_text("foldl"));
lf[8]=C_h_intern(&lf[8],20, C_text("scheme.write#display"));
lf[9]=C_h_intern(&lf[9],21, C_text("##sys#standard-output"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_h_intern(&lf[11],18, C_text("scheme.write#write"));
lf[12]=C_h_intern(&lf[12],12, C_text("scheme#write"));
lf[13]=C_h_intern(&lf[13],25, C_text("scheme.write#write-shared"));
lf[14]=C_h_intern(&lf[14],12, C_text("scheme.time#"));
lf[15]=C_h_intern(&lf[15],26, C_text("scheme.time#current-second"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\12535.0\000"));
lf[17]=C_h_intern(&lf[17],28, C_text("chicken.time#current-seconds"));
lf[18]=C_h_intern(&lf[18],25, C_text("scheme.time#current-jiffy"));
lf[19]=C_h_intern(&lf[19],30, C_text("scheme.time#jiffies-per-second"));
lf[20]=C_h_intern(&lf[20],12, C_text("scheme.file#"));
lf[21]=C_h_intern(&lf[21],34, C_text("scheme.file#open-binary-input-file"));
lf[22]=C_h_intern(&lf[22],6, C_text("binary"));
lf[23]=C_h_intern(&lf[23],22, C_text("scheme#open-input-file"));
lf[24]=C_h_intern_kw(&lf[24],6, C_text("binary"));
lf[25]=C_h_intern(&lf[25],35, C_text("scheme.file#open-binary-output-file"));
lf[26]=C_h_intern(&lf[26],23, C_text("scheme#open-output-file"));
lf[27]=C_h_intern(&lf[27],24, C_text("scheme.file#file-exists?"));
lf[28]=C_h_intern(&lf[28],25, C_text("chicken.file#file-exists?"));
lf[29]=C_h_intern(&lf[29],23, C_text("scheme.process-context#"));
lf[30]=C_h_intern(&lf[30],35, C_text("scheme.process-context#command-line"));
lf[31]=C_h_intern(&lf[31],46, C_text("chicken.process-context#command-line-arguments"));
lf[32]=C_h_intern(&lf[32],36, C_text("chicken.process-context#program-name"));
lf[33]=C_h_intern(&lf[33],27, C_text("scheme.process-context#exit"));
lf[34]=C_h_intern(&lf[34],17, C_text("chicken.base#exit"));
lf[35]=C_h_intern(&lf[35],19, C_text("##sys#dynamic-winds"));
C_register_lf2(lf,36,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_513,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[58] = {
{C_text("f_1012:r7lib_2escm"),(void*)f_1012},
{C_text("f_1027:r7lib_2escm"),(void*)f_1027},
{C_text("f_1035:r7lib_2escm"),(void*)f_1035},
{C_text("f_1037:r7lib_2escm"),(void*)f_1037},
{C_text("f_1040:r7lib_2escm"),(void*)f_1040},
{C_text("f_1044:r7lib_2escm"),(void*)f_1044},
{C_text("f_1046:r7lib_2escm"),(void*)f_1046},
{C_text("f_1050:r7lib_2escm"),(void*)f_1050},
{C_text("f_1055:r7lib_2escm"),(void*)f_1055},
{C_text("f_1059:r7lib_2escm"),(void*)f_1059},
{C_text("f_1064:r7lib_2escm"),(void*)f_1064},
{C_text("f_1071:r7lib_2escm"),(void*)f_1071},
{C_text("f_1073:r7lib_2escm"),(void*)f_1073},
{C_text("f_1081:r7lib_2escm"),(void*)f_1081},
{C_text("f_1085:r7lib_2escm"),(void*)f_1085},
{C_text("f_1100:r7lib_2escm"),(void*)f_1100},
{C_text("f_1107:r7lib_2escm"),(void*)f_1107},
{C_text("f_1116:r7lib_2escm"),(void*)f_1116},
{C_text("f_1133:r7lib_2escm"),(void*)f_1133},
{C_text("f_513:r7lib_2escm"),(void*)f_513},
{C_text("f_515:r7lib_2escm"),(void*)f_515},
{C_text("f_560:r7lib_2escm"),(void*)f_560},
{C_text("f_588:r7lib_2escm"),(void*)f_588},
{C_text("f_594:r7lib_2escm"),(void*)f_594},
{C_text("f_606:r7lib_2escm"),(void*)f_606},
{C_text("f_644:r7lib_2escm"),(void*)f_644},
{C_text("f_668:r7lib_2escm"),(void*)f_668},
{C_text("f_681:r7lib_2escm"),(void*)f_681},
{C_text("f_728:r7lib_2escm"),(void*)f_728},
{C_text("f_752:r7lib_2escm"),(void*)f_752},
{C_text("f_762:r7lib_2escm"),(void*)f_762},
{C_text("f_775:r7lib_2escm"),(void*)f_775},
{C_text("f_779:r7lib_2escm"),(void*)f_779},
{C_text("f_791:r7lib_2escm"),(void*)f_791},
{C_text("f_793:r7lib_2escm"),(void*)f_793},
{C_text("f_803:r7lib_2escm"),(void*)f_803},
{C_text("f_806:r7lib_2escm"),(void*)f_806},
{C_text("f_813:r7lib_2escm"),(void*)f_813},
{C_text("f_829:r7lib_2escm"),(void*)f_829},
{C_text("f_832:r7lib_2escm"),(void*)f_832},
{C_text("f_835:r7lib_2escm"),(void*)f_835},
{C_text("f_847:r7lib_2escm"),(void*)f_847},
{C_text("f_850:r7lib_2escm"),(void*)f_850},
{C_text("f_878:r7lib_2escm"),(void*)f_878},
{C_text("f_881:r7lib_2escm"),(void*)f_881},
{C_text("f_889:r7lib_2escm"),(void*)f_889},
{C_text("f_902:r7lib_2escm"),(void*)f_902},
{C_text("f_905:r7lib_2escm"),(void*)f_905},
{C_text("f_922:r7lib_2escm"),(void*)f_922},
{C_text("f_956:r7lib_2escm"),(void*)f_956},
{C_text("f_959:r7lib_2escm"),(void*)f_959},
{C_text("f_965:r7lib_2escm"),(void*)f_965},
{C_text("f_968:r7lib_2escm"),(void*)f_968},
{C_text("f_971:r7lib_2escm"),(void*)f_971},
{C_text("f_982:r7lib_2escm"),(void*)f_982},
{C_text("f_997:r7lib_2escm"),(void*)f_997},
{C_text("toplevel:r7lib_2escm"),(void*)C_r7lib_toplevel},
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
o|hiding unexported module binding: scheme.write#interesting? 
o|hiding unexported module binding: scheme.write#uninteresting? 
o|hiding unexported module binding: scheme.write#display-char 
o|hiding unexported module binding: scheme.write#display-string 
o|hiding unexported module binding: scheme.write#find-shared 
o|hiding unexported module binding: scheme.write#write-with-shared-structure 
o|hiding unexported module binding: scheme.process-context#->exit-status 
S|applied compiler syntax:
S|  chicken.base#foldl		1
o|eliminated procedure checks: 15 
o|specializations:
o|  1 (scheme#integer? *)
o|  3 (scheme#cdr pair)
o|  4 (scheme#car pair)
(o e)|safe calls: 101 
(o e)|assignments to immediate values: 3 
o|safe globals: (scheme.process-context#exit scheme.process-context#->exit-status scheme.process-context#command-line scheme.file#file-exists? scheme.file#open-binary-output-file scheme.file#open-binary-input-file scheme.time#jiffies-per-second scheme.time#current-jiffy scheme.time#current-second scheme.write#write-shared scheme.write#write scheme.write#display scheme.write#write-with-shared-structure scheme.write#find-shared scheme.write#display-string scheme.write#display-char scheme.write#uninteresting? scheme.write#interesting?) 
o|inlining procedure: k520 
o|inlining procedure: k520 
o|inlining procedure: k795 
o|inlining procedure: k815 
o|inlining procedure: k815 
o|inlining procedure: k795 
o|inlining procedure: k891 
o|inlining procedure: k891 
o|inlining procedure: k924 
o|inlining procedure: k924 
o|inlining procedure: k948 
o|inlining procedure: k948 
o|contracted procedure: "(r7lib.scm:134) scheme.write#uninteresting?" 
o|contracted procedure: "(r7lib.scm:105) scheme.write#find-shared" 
o|inlining procedure: k646 
o|contracted procedure: "(r7lib.scm:90) g109139" 
o|inlining procedure: k609 
o|inlining procedure: k609 
o|inlining procedure: k646 
o|substituted constant variable: g110138 
o|inlining procedure: k670 
o|inlining procedure: k688 
o|inlining procedure: k688 
o|contracted procedure: "(r7lib.scm:68) g123124" 
o|inlining procedure: k717 
o|inlining procedure: k717 
o|inlining procedure: k754 
o|inlining procedure: k754 
o|inlining procedure: k670 
o|inlining procedure: k1066 
o|inlining procedure: k1066 
o|contracted procedure: "(r7lib.scm:248) scheme.process-context#->exit-status" 
o|inlining procedure: k1089 
o|inlining procedure: k1089 
o|inlining procedure: k1118 
o|inlining procedure: k1118 
o|replaced variables: 127 
o|removed binding forms: 74 
o|substituted constant variable: r10671167 
o|substituted constant variable: r10671168 
o|replaced variables: 24 
o|removed binding forms: 122 
o|inlining procedure: k984 
o|propagated global variable: r9851205 ##sys#standard-output 
o|inlining procedure: k999 
o|propagated global variable: r10001206 ##sys#standard-output 
o|inlining procedure: k1014 
o|propagated global variable: r10151207 ##sys#standard-output 
o|inlining procedure: k1112 
o|inlining procedure: k1112 
o|inlining procedure: k1112 
o|removed binding forms: 17 
o|substituted constant variable: r11131209 
o|substituted constant variable: r11131210 
o|replaced variables: 1 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 2) (let . 4) (##core#call . 74)) 
o|  call simplifications:
o|    scheme#cdar
o|    scheme#eq?
o|    scheme#apply	2
o|    scheme#+
o|    ##sys#check-list
o|    scheme#cons	7
o|    scheme#number?
o|    chicken.fixnum#fx=	2
o|    scheme#null?	6
o|    scheme#assq	3
o|    scheme#cdr	6
o|    scheme#not	3
o|    scheme#car	5
o|    ##sys#setslot	5
o|    chicken.fixnum#fx+	4
o|    chicken.fixnum#fx-
o|    ##sys#slot	10
o|    scheme#pair?	5
o|    scheme#vector?	3
o|    ##sys#size	4
o|    chicken.fixnum#fx<=	3
o|contracted procedure: k517 
o|contracted procedure: k526 
o|contracted procedure: k533 
o|contracted procedure: k556 
o|contracted procedure: k549 
o|contracted procedure: k562 
o|contracted procedure: k580 
o|contracted procedure: k565 
o|contracted procedure: k576 
o|contracted procedure: k572 
o|contracted procedure: k781 
o|contracted procedure: k785 
o|contracted procedure: k798 
o|contracted procedure: k818 
o|contracted procedure: k842 
o|contracted procedure: k854 
o|contracted procedure: k865 
o|contracted procedure: k861 
o|contracted procedure: k873 
o|contracted procedure: k882 
o|contracted procedure: k894 
o|contracted procedure: k910 
o|contracted procedure: k914 
o|contracted procedure: k918 
o|contracted procedure: k927 
o|contracted procedure: k933 
o|contracted procedure: k936 
o|contracted procedure: k942 
o|contracted procedure: k951 
o|contracted procedure: k601 
o|contracted procedure: k597 
o|contracted procedure: k637 
o|contracted procedure: k649 
o|contracted procedure: k656 
o|contracted procedure: k664 
o|contracted procedure: k634 
o|contracted procedure: k612 
o|contracted procedure: k619 
o|inlining procedure: k660 
o|contracted procedure: k628 
o|inlining procedure: k660 
o|contracted procedure: k698 
o|contracted procedure: k691 
o|contracted procedure: k711 
o|contracted procedure: k707 
o|contracted procedure: k720 
o|contracted procedure: k739 
o|contracted procedure: k745 
o|contracted procedure: k757 
o|contracted procedure: k767 
o|contracted procedure: k771 
o|contracted procedure: k990 
o|contracted procedure: k984 
o|contracted procedure: k1005 
o|contracted procedure: k999 
o|contracted procedure: k1020 
o|contracted procedure: k1014 
o|contracted procedure: k1051 
o|contracted procedure: k1060 
o|contracted procedure: k1137 
o|contracted procedure: k1102 
o|contracted procedure: k1096 
o|contracted procedure: k1121 
o|contracted procedure: k1124 
o|contracted procedure: k1128 
o|simplifications: ((if . 1) (let . 30)) 
o|removed binding forms: 63 
o|inlining procedure: "(r7lib.scm:113) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:116) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:122) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:109) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:129) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:130) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:143) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:141) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:147) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:145) scheme.write#display-char" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest214216 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest214216 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest226228 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest226228 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest238240 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest238240 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest348349 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest348349 0 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: scheme.write#display-char 
o|substituted constant variable: c891276 
o|substituted constant variable: c891280 
o|substituted constant variable: c891284 
o|substituted constant variable: c891290 
o|substituted constant variable: c891294 
o|substituted constant variable: c891298 
o|substituted constant variable: c891304 
o|substituted constant variable: c891308 
o|substituted constant variable: c891312 
o|substituted constant variable: c891316 
o|replaced variables: 30 
o|removed binding forms: 31 
o|direct leaf routine/allocation: scheme.write#interesting? 0 
o|direct leaf routine/allocation: assign-label!158 0 
o|direct leaf routine/allocation: seen?103 0 
o|direct leaf routine/allocation: seen!104 6 
o|contracted procedure: "(r7lib.scm:46) k543" 
o|contracted procedure: "(r7lib.scm:148) k972" 
o|contracted procedure: "(r7lib.scm:67) k673" 
o|contracted procedure: "(r7lib.scm:68) k676" 
o|contracted procedure: "(r7lib.scm:85) k685" 
o|contracted procedure: "(r7lib.scm:72) k723" 
o|contracted procedure: "(r7lib.scm:76) k742" 
o|removed binding forms: 7 
o|customizable procedures: (unwind355 scheme.write#write-with-shared-structure doloop129130 walk!115 foldl111143 doloop184185 k827 scheme.write#display-string loop169) 
o|calls to known targets: 27 
o|identified direct recursive calls: f_644 2 
o|identified direct recursive calls: f_668 1 
o|unused rest argument: rest214216 f_982 
o|unused rest argument: rest226228 f_997 
o|unused rest argument: rest238240 f_1012 
o|unused rest argument: rest348349 f_1100 
o|fast box initializations: 9 
o|fast global references: 10 
o|fast global assignments: 3 
o|dropping unused closure argument: f_515 
o|dropping unused closure argument: f_560 
o|dropping unused closure argument: f_775 
*/
/* end of file */
