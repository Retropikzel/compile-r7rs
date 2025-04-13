/* Generated from internal.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: internal.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file internal.c -emit-import-library chicken.internal
   unit: internal
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[44];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,55,50,32,105,41,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,115,116,114,105,110,103,45,62,99,45,105,100,101,110,116,105,102,105,101,114,32,115,116,114,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,118,97,108,105,100,45,108,105,98,114,97,114,121,45,115,112,101,99,105,102,105,101,114,63,32,120,41,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,24),40,108,105,98,114,97,114,121,45,112,97,114,116,45,62,115,116,114,105,110,103,32,120,41};
static C_char li6[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,54,49,52,32,108,115,116,32,115,116,114,41,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,108,105,98,114,97,114,121,45,105,100,32,108,105,98,41,0,0,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,111,100,117,108,101,45,114,101,113,117,105,114,101,109,101,110,116,32,105,100,41};
static C_char li9[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,115,32,115,101,101,110,32,119,97,114,110,101,100,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,99,104,101,99,107,45,102,111,114,45,109,117,108,116,105,112,108,101,45,98,105,110,100,105,110,103,115,32,98,105,110,100,105,110,103,115,32,102,111,114,109,32,108,111,99,41};
static C_char li11[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,11),40,103,54,55,55,32,115,100,101,102,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,55,54,32,103,54,56,51,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,115,121,109,98,111,108,32,110,41};
static C_char li17[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,114,101,102,32,104,116,32,107,101,121,41};
static C_char li20[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,98,117,99,107,101,116,41,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,32,107,101,121,32,118,97,108,41,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,32,107,101,121,32,117,112,100,116,102,117,110,99,32,118,97,108,117,102,117,110,99,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,13),40,103,55,52,55,32,98,117,99,107,101,116,41,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,52,54,32,103,55,53,51,41,0};
static C_char li25[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,55,52,49,32,105,41,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,112,32,104,116,41,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,108,101,110,32,98,107,116,32,115,105,122,101,41,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,41,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_1399)
static C_word f_1399(C_word t0);
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word *av) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void f_2314(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word *av) C_noret;
C_noret_decl(f_2340)
static void f_2340(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word *av) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word *av) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word *av) C_noret;
C_noret_decl(f_2432)
static void f_2432(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void f_2475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2527)
static void f_2527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void f_2555(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word *av) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word *av) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word *av) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word *av) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word *av) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word *av) C_noret;
C_noret_decl(f_2610)
static void f_2610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2623)
static void f_2623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word *av) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word *av) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void f_2694(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word *av) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2736)
static void f_2736(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word *av) C_noret;
C_noret_decl(f_2777)
static void f_2777(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word *av) C_noret;
C_noret_decl(f_2809)
static C_word f_2809(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word *av) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static C_word f_2856(C_word t0,C_word t1);
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void f_2917(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word *av) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word *av) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void f_2995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3003)
static void f_3003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void f_3033(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void f_3066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2314)
static void C_ccall trf_2314(C_word c,C_word *av) C_noret;
static void C_ccall trf_2314(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2314(t0,t1,t2);}

C_noret_decl(trf_2340)
static void C_ccall trf_2340(C_word c,C_word *av) C_noret;
static void C_ccall trf_2340(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2340(t0,t1);}

C_noret_decl(trf_2432)
static void C_ccall trf_2432(C_word c,C_word *av) C_noret;
static void C_ccall trf_2432(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2432(t0,t1);}

C_noret_decl(trf_2475)
static void C_ccall trf_2475(C_word c,C_word *av) C_noret;
static void C_ccall trf_2475(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2475(t0,t1,t2);}

C_noret_decl(trf_2527)
static void C_ccall trf_2527(C_word c,C_word *av) C_noret;
static void C_ccall trf_2527(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2527(t0,t1);}

C_noret_decl(trf_2555)
static void C_ccall trf_2555(C_word c,C_word *av) C_noret;
static void C_ccall trf_2555(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2555(t0,t1,t2,t3);}

C_noret_decl(trf_2610)
static void C_ccall trf_2610(C_word c,C_word *av) C_noret;
static void C_ccall trf_2610(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2610(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2623)
static void C_ccall trf_2623(C_word c,C_word *av) C_noret;
static void C_ccall trf_2623(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2623(t0,t1);}

C_noret_decl(trf_2694)
static void C_ccall trf_2694(C_word c,C_word *av) C_noret;
static void C_ccall trf_2694(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2694(t0,t1,t2);}

C_noret_decl(trf_2736)
static void C_ccall trf_2736(C_word c,C_word *av) C_noret;
static void C_ccall trf_2736(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2736(t0,t1,t2);}

C_noret_decl(trf_2777)
static void C_ccall trf_2777(C_word c,C_word *av) C_noret;
static void C_ccall trf_2777(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2777(t0,t1,t2);}

C_noret_decl(trf_2917)
static void C_ccall trf_2917(C_word c,C_word *av) C_noret;
static void C_ccall trf_2917(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2917(t0,t1,t2);}

C_noret_decl(trf_2995)
static void C_ccall trf_2995(C_word c,C_word *av) C_noret;
static void C_ccall trf_2995(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2995(t0,t1,t2);}

C_noret_decl(trf_3003)
static void C_ccall trf_3003(C_word c,C_word *av) C_noret;
static void C_ccall trf_3003(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3003(t0,t1,t2);}

C_noret_decl(trf_3033)
static void C_ccall trf_3033(C_word c,C_word *av) C_noret;
static void C_ccall trf_3033(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3033(t0,t1,t2);}

C_noret_decl(trf_3066)
static void C_ccall trf_3066(C_word c,C_word *av) C_noret;
static void C_ccall trf_3066(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3066(t0,t1,t2,t3,t4);}

/* k1020 */
static void C_ccall f_1022(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(49,c,6)))){
C_save_and_reclaim((void *)f_1022,c,av);}
a=C_alloc(49);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.internal#string->c-identifier ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2302,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! chicken.internal#valid-library-specifier? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.internal#library-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2429,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[20]+1 /* (set! chicken.internal#module-requirement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2590,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[22]+1 /* (set! chicken.internal#check-for-multiple-bindings ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2604,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[26]+1 /* (set! chicken.internal#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2678,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[27]+1 /* (set! chicken.internal#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2728,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_rand(C_fix(65536));
t14=C_mutate(&lf[31] /* (set! chicken.internal#hash-symbol ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2809,a[2]=t10,a[3]=t12,a[4]=t13,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t15=C_mutate((C_word*)lf[32]+1 /* (set! chicken.internal#make-hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[34]+1 /* (set! chicken.internal#hash-table-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[35]+1 /* (set! chicken.internal#hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2905,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[36]+1 /* (set! chicken.internal#hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[37]+1 /* (set! chicken.internal#hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[38]+1 /* (set! chicken.internal#hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[40]+1 /* (set! chicken.internal#default-imports ...) */,lf[41]);
t22=C_mutate((C_word*)lf[42]+1 /* (set! chicken.internal#default-syntax-imports ...) */,lf[43]);
t23=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* loop in chicken.internal#valid-library-specifier? in k1020 */
static C_word f_1399(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_i_symbolp(t3);
if(C_truep(t4)){
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t5=C_fixnump(t3);
if(C_truep(C_i_not(t5))){
return(C_SCHEME_FALSE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}}}

/* chicken.internal#string->c-identifier in k1020 */
static void C_ccall f_2302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2302,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2306,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:69: scheme#open-output-string */
t4=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2304 in chicken.internal#string->c-identifier in k1020 */
static void C_ccall f_2306(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2306,c,av);}
a=C_alloc(9);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2314,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2314(t6,((C_word*)t0)[3],C_fix(0));}

/* doloop572 in k2304 in chicken.internal#string->c-identifier in k1020 */
static void f_2314(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2314,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* internal.scm:72: scheme#get-output-string */
t3=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2340,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_char_alphabeticp(t3);
if(C_truep(C_i_not(t6))){
t7=C_u_i_char_numericp(t3);
t8=C_i_not(t7);
t9=t5;
f_2340(t9,(C_truep(t8)?t8:C_eqp(t2,C_fix(0))));}
else{
t7=t5;
f_2340(t7,C_SCHEME_FALSE);}}}

/* k2328 in doloop572 in k2304 in chicken.internal#string->c-identifier in k1020 */
static void C_ccall f_2330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2330,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2314(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k2338 in doloop572 in k2304 in chicken.internal#string->c-identifier in k1020 */
static void f_2340(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2340,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_fix(C_character_code(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#write-char/port */
t4=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(95);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* ##sys#write-char/port */
t2=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2344 in k2338 in doloop572 in k2304 in chicken.internal#string->c-identifier in k1020 */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2346,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(16)))){
/* ##sys#write-char/port */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(48);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2349(2,av2);}}}

/* k2347 in k2344 in k2338 in doloop572 in k2304 in chicken.internal#string->c-identifier in k1020 */
static void C_ccall f_2349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2349,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2354 in k2347 in k2344 in k2338 in doloop572 in k2304 in chicken.internal#string->c-identifier in k1020 */
static void C_ccall f_2356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2356,c,av);}
/* internal.scm:79: scheme#display */
t2=*((C_word*)lf[4]+1);{
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

/* chicken.internal#valid-library-specifier? in k1020 */
static void C_ccall f_2389(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2389,c,av);}
a=C_alloc(3);
t3=C_i_symbolp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t4=C_i_nullp(t2);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1399,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_1399(t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* chicken.internal#library-id in k1020 */
static void C_ccall f_2429(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2429,c,av);}
a=C_alloc(17);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2432,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_symbolp(t2))){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t2))){
/* internal.scm:105: fail */
t9=((C_word*)t4)[1];
f_2432(t9,t1);}
else{
t9=C_i_listp(t2);
if(C_truep(C_i_not(t9))){
/* internal.scm:106: fail */
t10=((C_word*)t4)[1];
f_2432(t10,t1);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2527,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t11=C_i_cdr(t2);
if(C_truep(C_i_pairp(t11))){
t12=C_i_cddr(t2);
if(C_truep(C_i_nullp(t12))){
t13=C_eqp(lf[19],C_u_i_car(t2));
if(C_truep(t13)){
t14=C_u_i_cdr(t2);
t15=t10;
f_2527(t15,C_fixnump(C_u_i_car(t14)));}
else{
t14=t10;
f_2527(t14,C_SCHEME_FALSE);}}
else{
t13=t10;
f_2527(t13,C_SCHEME_FALSE);}}
else{
t12=t10;
f_2527(t12,C_SCHEME_FALSE);}}}}}

/* fail in chicken.internal#library-id in k1020 */
static void f_2432(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2432,2,t0,t1);}
/* internal.scm:93: ##sys#error */
t2=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[11];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* library-part->string in chicken.internal#library-id in k1020 */
static void f_2475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2475,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* internal.scm:100: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
if(C_truep(C_fixnump(t2))){
/* internal.scm:101: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* internal.scm:102: fail */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2432(t3,t1);}}}

/* k2525 in chicken.internal#library-id in k1020 */
static void f_2527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2527,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2538,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* internal.scm:109: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:112: library-part->string */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2475(t4,t3,C_u_i_car(((C_word*)t0)[3]));}}

/* k2532 in k2525 in chicken.internal#library-id in k1020 */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2534,c,av);}
/* internal.scm:108: ##sys#string->symbol */
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

/* k2536 in k2525 in chicken.internal#library-id in k1020 */
static void C_ccall f_2538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2538,c,av);}
/* internal.scm:109: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[16];
av2[3]=t1;
tp(4,av2);}}

/* k2551 in k2525 in chicken.internal#library-id in k1020 */
static void C_ccall f_2553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2553,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2555,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2555(t5,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* doloop614 in k2551 in k2525 in chicken.internal#library-id in k1020 */
static void f_2555(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2555,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* internal.scm:115: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2580,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:113: library-part->string */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2475(t7,t6,C_u_i_car(t2));}}

/* k2574 in doloop614 in k2551 in k2525 in chicken.internal#library-id in k1020 */
static void C_ccall f_2576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2576,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2555(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2578 in doloop614 in k2551 in k2525 in chicken.internal#library-id in k1020 */
static void C_ccall f_2580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2580,c,av);}
/* internal.scm:113: scheme#string-append */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[18];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.internal#module-requirement in k1020 */
static void C_ccall f_2590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2590,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2598,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2602,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* internal.scm:122: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k2596 in chicken.internal#module-requirement in k1020 */
static void C_ccall f_2598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2598,c,av);}
/* internal.scm:121: ##sys#string->symbol */
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

/* k2600 in chicken.internal#module-requirement in k1020 */
static void C_ccall f_2602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2602,c,av);}
/* internal.scm:122: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[21];
tp(4,av2);}}

/* chicken.internal#check-for-multiple-bindings in k1020 */
static void C_ccall f_2604(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2604,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2610,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2610(t8,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in chicken.internal#check-for-multiple-bindings in k1020 */
static void f_2610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2610,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2623,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=C_i_caar(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=C_u_i_car(t2);
t9=t6;
f_2623(t9,C_i_not(C_i_memq(C_u_i_car(t8),t4)));}
else{
t8=t6;
f_2623(t8,C_SCHEME_FALSE);}}}

/* k2621 in loop in chicken.internal#check-for-multiple-bindings in k1020 */
static void f_2623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_2623,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* internal.scm:134: scheme#string-append */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[24];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_caar(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* internal.scm:138: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2610(t5,((C_word*)t0)[5],t2,t4,((C_word*)t0)[3]);}}

/* k2624 in k2621 in loop in chicken.internal#check-for-multiple-bindings in k1020 */
static void C_ccall f_2626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2626,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_caar(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* internal.scm:137: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2610(t5,((C_word*)t0)[5],t2,((C_word*)t0)[6],t4);}

/* k2641 in k2621 in loop in chicken.internal#check-for-multiple-bindings in k1020 */
static void C_ccall f_2643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2643,c,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* internal.scm:133: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_u_i_car(t2);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* chicken.internal#macro-subset in k1020 */
static void C_ccall f_2678(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2678,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2685,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2692,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:143: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2683 in chicken.internal#macro-subset in k1020 */
static void C_ccall f_2685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2685,c,av);}
/* internal.scm:147: fixup-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2690 in chicken.internal#macro-subset in k1020 */
static void C_ccall f_2692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2692,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2694(t5,((C_word*)t0)[3],t1);}

/* loop in k2690 in chicken.internal#macro-subset in k1020 */
static void f_2694(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2694,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2715,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:146: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* k2713 in loop in k2690 in chicken.internal#macro-subset in k1020 */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2715,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.internal#fixup-macro-environment in k1020 */
static void C_ccall f_2728(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2728,c,av);}
a=C_alloc(4);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2735,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* internal.scm:151: ##sys#append */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
f_2735(2,av2);}}}

/* k2733 in chicken.internal#fixup-macro-environment in k1020 */
static void C_ccall f_2735(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2735,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2736,a[2]=t1,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[30]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2775,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2777,a[2]=t6,a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2777(t8,t4,((C_word*)t0)[2]);}

/* g677 in k2733 in chicken.internal#fixup-macro-environment in k1020 */
static void f_2736(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2736,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2752,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(C_i_nullp(t6))){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_car(t4,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_u_i_cdr(t2);
/* internal.scm:159: ##sys#append */
t8=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_u_i_car(t7);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2750 in g677 in k2733 in chicken.internal#fixup-macro-environment in k1020 */
static void C_ccall f_2752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2752,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2773 in k2733 in chicken.internal#fixup-macro-environment in k1020 */
static void C_ccall f_2775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2775,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop676 in k2733 in chicken.internal#fixup-macro-environment in k1020 */
static void f_2777(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2777,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:152: g677 */
t4=((C_word*)t0)[3];
f_2736(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2785 in for-each-loop676 in k2733 in chicken.internal#fixup-macro-environment in k1020 */
static void C_ccall f_2787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2787,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2777(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.internal#hash-symbol in k1020 */
static C_word f_2809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t3=C_eqp(t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
return(C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2));}
else{
t4=C_slot(t1,C_fix(1));
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t6=C_block_size(t4);
t7=C_fixnum_difference(t6,C_fix(1));
t8=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_u_i_bytevector_hash(t4,C_fix(0),t7,((C_word*)t0)[4]));
return(C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2));}}

/* chicken.internal#make-hash-table in k1020 */
static void C_ccall f_2831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2831,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* internal.scm:180: scheme#make-vector */
t2=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* internal.scm:180: scheme#make-vector */
t2=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_get_rest_arg(c,2,av,2,t0);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* chicken.internal#hash-table-ref in k1020 */
static void C_ccall f_2846(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2846,c,av);}
a=C_alloc(4);
t4=(
/* internal.scm:183: hash-symbol */
  f_2809(lf[31],t3,C_block_size(t2))
);
t5=C_slot(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2856,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
  f_2856(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* loop in chicken.internal#hash-table-ref in k1020 */
static C_word f_2856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_eqp(C_SCHEME_END_OF_LIST,t1);
if(C_truep(C_i_not(t2))){
t3=C_slot(t1,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(C_slot(C_slot(t1,C_fix(0)),C_fix(1)));}
else{
t7=C_slot(t1,C_fix(1));
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* chicken.internal#hash-table-set! in k1020 */
static void C_ccall f_2905(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2905,c,av);}
a=C_alloc(11);
t5=(
/* internal.scm:190: hash-symbol */
  f_2809(lf[31],t3,C_block_size(t2))
);
t6=C_slot(t2,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2917,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=t2,a[6]=t5,a[7]=t8,a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2917(t10,t1,t6);}

/* loop in chicken.internal#hash-table-set! in k1020 */
static void f_2917(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2917,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_setslot(C_slot(t2,C_fix(0)),C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* internal.scm:197: loop */
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}}}

/* chicken.internal#hash-table-update! in k1020 */
static void C_ccall f_2969(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2969,c,av);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2977,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=t4,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:200: hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k2975 in chicken.internal#hash-table-update! in k1020 */
static void C_ccall f_2977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2977,c,av);}
/* internal.scm:200: hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k2979 in chicken.internal#hash-table-update! in k1020 */
static void C_ccall f_2981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2981,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* internal.scm:200: updtfunc */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
/* internal.scm:200: valufunc */
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k2982 in k2979 in chicken.internal#hash-table-update! in k1020 */
static void C_ccall f_2984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2984,c,av);}
/* internal.scm:200: updtfunc */
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

/* chicken.internal#hash-table-for-each in k1020 */
static void C_ccall f_2989(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2989,c,av);}
a=C_alloc(9);
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2995,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2995(t8,t1,C_fix(0));}

/* doloop741 in chicken.internal#hash-table-for-each in k1020 */
static void f_2995(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_2995,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[3],a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3033,a[2]=t8,a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3033(t10,t6,t4);}}

/* g747 in doloop741 in chicken.internal#hash-table-for-each in k1020 */
static void f_3003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3003,3,t0,t1,t2);}
/* internal.scm:206: p */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t2,C_fix(1));
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k3022 in doloop741 in chicken.internal#hash-table-for-each in k1020 */
static void C_ccall f_3024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3024,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2995(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop746 in doloop741 in chicken.internal#hash-table-for-each in k1020 */
static void f_3033(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3033,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:206: g747 */
t4=((C_word*)t0)[3];
f_3003(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3041 in for-each-loop746 in doloop741 in chicken.internal#hash-table-for-each in k1020 */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3043,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3033(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.internal#hash-table-size in k1020 */
static void C_ccall f_3056(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_3056,c,av);}
a=C_alloc(7);
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3066,a[2]=t5,a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3066(t7,t1,t3,C_fix(0),C_fix(0));}

/* loop in chicken.internal#hash-table-size in k1020 */
static void f_3066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3066,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(t3,t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_fixnum_plus(t3,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3088,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* internal.scm:213: ##sys#length */
t8=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_slot(((C_word*)t0)[3],t3);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k3086 in loop in chicken.internal#hash-table-size in k1020 */
static void C_ccall f_3088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3088,c,av);}
/* internal.scm:213: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3066(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[6],t1));}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_internal_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("internal"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_internal_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(305))){
C_save(t1);
C_rereclaim2(305*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,44);
lf[0]=C_h_intern(&lf[0],8, C_text("internal"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.internal#"));
lf[2]=C_h_intern(&lf[2],37, C_text("chicken.internal#string->c-identifier"));
lf[3]=C_h_intern(&lf[3],24, C_text("scheme#get-output-string"));
lf[4]=C_h_intern(&lf[4],14, C_text("scheme#display"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#fixnum->string"));
lf[6]=C_h_intern(&lf[6],21, C_text("##sys#write-char/port"));
lf[7]=C_h_intern(&lf[7],25, C_text("scheme#open-output-string"));
lf[8]=C_h_intern(&lf[8],41, C_text("chicken.internal#valid-library-specifier?"));
lf[9]=C_h_intern(&lf[9],27, C_text("chicken.internal#library-id"));
lf[10]=C_h_intern(&lf[10],11, C_text("##sys#error"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\151\156\166\141\154\151\144\040\154\151\142\162\141\162\171\040\163\160\145\143\151\146\151\145\162\000"));
lf[12]=C_h_intern(&lf[12],27, C_text("##sys#symbol->string/shared"));
lf[13]=C_h_intern(&lf[13],20, C_text("##sys#number->string"));
lf[14]=C_h_intern(&lf[14],20, C_text("##sys#string->symbol"));
lf[15]=C_h_intern(&lf[15],19, C_text("##sys#string-append"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\163\162\146\151\055\000"));
lf[17]=C_h_intern(&lf[17],20, C_text("scheme#string-append"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[19]=C_h_intern(&lf[19],4, C_text("srfi"));
lf[20]=C_h_intern(&lf[20],35, C_text("chicken.internal#module-requirement"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[22]=C_h_intern(&lf[22],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[23]=C_h_intern(&lf[23],10, C_text("##sys#warn"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\166\141\162\151\141\142\154\145\040\142\157\165\156\144\040\155\165\154\164\151\160\154\145\040\164\151\155\145\163\040\151\156\040\000"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\040\143\157\156\163\164\162\165\143\164\000"));
lf[26]=C_h_intern(&lf[26],29, C_text("chicken.internal#macro-subset"));
lf[27]=C_h_intern(&lf[27],40, C_text("chicken.internal#fixup-macro-environment"));
lf[28]=C_h_intern(&lf[28],23, C_text("##sys#macro-environment"));
lf[29]=C_h_intern(&lf[29],12, C_text("##sys#append"));
lf[30]=C_h_intern(&lf[30],8, C_text("for-each"));
lf[32]=C_h_intern(&lf[32],32, C_text("chicken.internal#make-hash-table"));
lf[33]=C_h_intern(&lf[33],18, C_text("scheme#make-vector"));
lf[34]=C_h_intern(&lf[34],31, C_text("chicken.internal#hash-table-ref"));
lf[35]=C_h_intern(&lf[35],32, C_text("chicken.internal#hash-table-set!"));
lf[36]=C_h_intern(&lf[36],35, C_text("chicken.internal#hash-table-update!"));
lf[37]=C_h_intern(&lf[37],36, C_text("chicken.internal#hash-table-for-each"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.internal#hash-table-size"));
lf[39]=C_h_intern(&lf[39],12, C_text("##sys#length"));
lf[40]=C_h_intern(&lf[40],32, C_text("chicken.internal#default-imports"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\143\150\145\155\145\376\003\000\000\002\376\001\000\000\014\001\143\150\151\143\153\145\156\056\142\141\163\145\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\376\377\016"));
lf[42]=C_h_intern(&lf[42],39, C_text("chicken.internal#default-syntax-imports"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\143\150\145\155\145\376\003\000\000\002\376\001\000\000\014\001\143\150\151\143\153\145\156\056\142\141\163\145\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\376\377\016"));
C_register_lf2(lf,44,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[62] = {
{C_text("f_1022:internal_2escm"),(void*)f_1022},
{C_text("f_1399:internal_2escm"),(void*)f_1399},
{C_text("f_2302:internal_2escm"),(void*)f_2302},
{C_text("f_2306:internal_2escm"),(void*)f_2306},
{C_text("f_2314:internal_2escm"),(void*)f_2314},
{C_text("f_2330:internal_2escm"),(void*)f_2330},
{C_text("f_2340:internal_2escm"),(void*)f_2340},
{C_text("f_2346:internal_2escm"),(void*)f_2346},
{C_text("f_2349:internal_2escm"),(void*)f_2349},
{C_text("f_2356:internal_2escm"),(void*)f_2356},
{C_text("f_2389:internal_2escm"),(void*)f_2389},
{C_text("f_2429:internal_2escm"),(void*)f_2429},
{C_text("f_2432:internal_2escm"),(void*)f_2432},
{C_text("f_2475:internal_2escm"),(void*)f_2475},
{C_text("f_2527:internal_2escm"),(void*)f_2527},
{C_text("f_2534:internal_2escm"),(void*)f_2534},
{C_text("f_2538:internal_2escm"),(void*)f_2538},
{C_text("f_2553:internal_2escm"),(void*)f_2553},
{C_text("f_2555:internal_2escm"),(void*)f_2555},
{C_text("f_2576:internal_2escm"),(void*)f_2576},
{C_text("f_2580:internal_2escm"),(void*)f_2580},
{C_text("f_2590:internal_2escm"),(void*)f_2590},
{C_text("f_2598:internal_2escm"),(void*)f_2598},
{C_text("f_2602:internal_2escm"),(void*)f_2602},
{C_text("f_2604:internal_2escm"),(void*)f_2604},
{C_text("f_2610:internal_2escm"),(void*)f_2610},
{C_text("f_2623:internal_2escm"),(void*)f_2623},
{C_text("f_2626:internal_2escm"),(void*)f_2626},
{C_text("f_2643:internal_2escm"),(void*)f_2643},
{C_text("f_2678:internal_2escm"),(void*)f_2678},
{C_text("f_2685:internal_2escm"),(void*)f_2685},
{C_text("f_2692:internal_2escm"),(void*)f_2692},
{C_text("f_2694:internal_2escm"),(void*)f_2694},
{C_text("f_2715:internal_2escm"),(void*)f_2715},
{C_text("f_2728:internal_2escm"),(void*)f_2728},
{C_text("f_2735:internal_2escm"),(void*)f_2735},
{C_text("f_2736:internal_2escm"),(void*)f_2736},
{C_text("f_2752:internal_2escm"),(void*)f_2752},
{C_text("f_2775:internal_2escm"),(void*)f_2775},
{C_text("f_2777:internal_2escm"),(void*)f_2777},
{C_text("f_2787:internal_2escm"),(void*)f_2787},
{C_text("f_2809:internal_2escm"),(void*)f_2809},
{C_text("f_2831:internal_2escm"),(void*)f_2831},
{C_text("f_2846:internal_2escm"),(void*)f_2846},
{C_text("f_2856:internal_2escm"),(void*)f_2856},
{C_text("f_2905:internal_2escm"),(void*)f_2905},
{C_text("f_2917:internal_2escm"),(void*)f_2917},
{C_text("f_2969:internal_2escm"),(void*)f_2969},
{C_text("f_2977:internal_2escm"),(void*)f_2977},
{C_text("f_2981:internal_2escm"),(void*)f_2981},
{C_text("f_2984:internal_2escm"),(void*)f_2984},
{C_text("f_2989:internal_2escm"),(void*)f_2989},
{C_text("f_2995:internal_2escm"),(void*)f_2995},
{C_text("f_3003:internal_2escm"),(void*)f_3003},
{C_text("f_3024:internal_2escm"),(void*)f_3024},
{C_text("f_3033:internal_2escm"),(void*)f_3033},
{C_text("f_3043:internal_2escm"),(void*)f_3043},
{C_text("f_3056:internal_2escm"),(void*)f_3056},
{C_text("f_3066:internal_2escm"),(void*)f_3066},
{C_text("f_3088:internal_2escm"),(void*)f_3088},
{C_text("toplevel:internal_2escm"),(void*)C_internal_toplevel},
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
o|hiding unexported module binding: chicken.internal#d 
o|hiding unexported module binding: chicken.internal#define-alias 
o|hiding unexported module binding: chicken.internal#partition 
o|hiding unexported module binding: chicken.internal#span 
o|hiding unexported module binding: chicken.internal#take 
o|hiding unexported module binding: chicken.internal#drop 
o|hiding unexported module binding: chicken.internal#split-at 
o|hiding unexported module binding: chicken.internal#append-map 
o|hiding unexported module binding: chicken.internal#every 
o|hiding unexported module binding: chicken.internal#any 
o|hiding unexported module binding: chicken.internal#cons* 
o|hiding unexported module binding: chicken.internal#concatenate 
o|hiding unexported module binding: chicken.internal#delete 
o|hiding unexported module binding: chicken.internal#first 
o|hiding unexported module binding: chicken.internal#second 
o|hiding unexported module binding: chicken.internal#third 
o|hiding unexported module binding: chicken.internal#fourth 
o|hiding unexported module binding: chicken.internal#fifth 
o|hiding unexported module binding: chicken.internal#delete-duplicates 
o|hiding unexported module binding: chicken.internal#alist-cons 
o|hiding unexported module binding: chicken.internal#filter 
o|hiding unexported module binding: chicken.internal#filter-map 
o|hiding unexported module binding: chicken.internal#remove 
o|hiding unexported module binding: chicken.internal#unzip1 
o|hiding unexported module binding: chicken.internal#last 
o|hiding unexported module binding: chicken.internal#list-index 
o|hiding unexported module binding: chicken.internal#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.internal#lset-difference/eq? 
o|hiding unexported module binding: chicken.internal#lset-union/eq? 
o|hiding unexported module binding: chicken.internal#lset-intersection/eq? 
o|hiding unexported module binding: chicken.internal#list-tabulate 
o|hiding unexported module binding: chicken.internal#lset<=/eq? 
o|hiding unexported module binding: chicken.internal#lset=/eq? 
o|hiding unexported module binding: chicken.internal#length+ 
o|hiding unexported module binding: chicken.internal#find 
o|hiding unexported module binding: chicken.internal#find-tail 
o|hiding unexported module binding: chicken.internal#iota 
o|hiding unexported module binding: chicken.internal#make-list 
o|hiding unexported module binding: chicken.internal#posq 
o|hiding unexported module binding: chicken.internal#posv 
o|hiding unexported module binding: chicken.internal#hash-symbol 
S|applied compiler syntax:
S|  ##sys#for-each		1
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		3
S|  chicken.base#foldr		3
o|eliminated procedure checks: 49 
o|specializations:
o|  2 (scheme#caar (pair pair *))
o|  2 (scheme#cadr (pair * pair))
o|  1 (scheme#number->string fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 292 
o|safe globals: (chicken.internal#default-syntax-imports chicken.internal#default-imports chicken.internal#hash-table-size chicken.internal#hash-table-for-each chicken.internal#hash-table-update! chicken.internal#hash-table-set! chicken.internal#hash-table-ref chicken.internal#make-hash-table chicken.internal#hash-symbol chicken.internal#fixup-macro-environment chicken.internal#macro-subset chicken.internal#check-for-multiple-bindings chicken.internal#module-requirement chicken.internal#library-id chicken.internal#valid-library-specifier? chicken.internal#string->c-identifier chicken.internal#posv chicken.internal#posq chicken.internal#make-list chicken.internal#iota chicken.internal#find-tail chicken.internal#find chicken.internal#length+ chicken.internal#lset=/eq? chicken.internal#lset<=/eq? chicken.internal#list-tabulate chicken.internal#lset-intersection/eq? chicken.internal#lset-union/eq? chicken.internal#lset-difference/eq? chicken.internal#lset-adjoin/eq? chicken.internal#list-index chicken.internal#last chicken.internal#unzip1 chicken.internal#remove chicken.internal#filter-map chicken.internal#filter chicken.internal#alist-cons chicken.internal#delete-duplicates chicken.internal#fifth chicken.internal#fourth chicken.internal#third chicken.internal#second chicken.internal#first chicken.internal#delete chicken.internal#concatenate chicken.internal#cons* chicken.internal#any chicken.internal#every chicken.internal#append-map chicken.internal#split-at chicken.internal#drop chicken.internal#take chicken.internal#span chicken.internal#partition) 
o|removed side-effect free assignment to unused variable: chicken.internal#partition 
o|removed side-effect free assignment to unused variable: chicken.internal#span 
o|removed side-effect free assignment to unused variable: chicken.internal#drop 
o|removed side-effect free assignment to unused variable: chicken.internal#split-at 
o|removed side-effect free assignment to unused variable: chicken.internal#append-map 
o|inlining procedure: k1404 
o|inlining procedure: k1404 
o|inlining procedure: k1435 
o|inlining procedure: k1435 
o|removed side-effect free assignment to unused variable: chicken.internal#cons* 
o|removed side-effect free assignment to unused variable: chicken.internal#concatenate 
o|removed side-effect free assignment to unused variable: chicken.internal#first 
o|removed side-effect free assignment to unused variable: chicken.internal#second 
o|removed side-effect free assignment to unused variable: chicken.internal#third 
o|removed side-effect free assignment to unused variable: chicken.internal#fourth 
o|removed side-effect free assignment to unused variable: chicken.internal#fifth 
o|removed side-effect free assignment to unused variable: chicken.internal#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.internal#alist-cons 
o|inlining procedure: k1652 
o|inlining procedure: k1652 
o|inlining procedure: k1644 
o|inlining procedure: k1644 
o|removed side-effect free assignment to unused variable: chicken.internal#filter-map 
o|removed side-effect free assignment to unused variable: chicken.internal#remove 
o|removed side-effect free assignment to unused variable: chicken.internal#unzip1 
o|removed side-effect free assignment to unused variable: chicken.internal#last 
o|removed side-effect free assignment to unused variable: chicken.internal#list-index 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-intersection/eq? 
o|inlining procedure: k2043 
o|inlining procedure: k2043 
o|removed side-effect free assignment to unused variable: chicken.internal#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#length+ 
o|removed side-effect free assignment to unused variable: chicken.internal#find 
o|removed side-effect free assignment to unused variable: chicken.internal#find-tail 
o|removed side-effect free assignment to unused variable: chicken.internal#iota 
o|removed side-effect free assignment to unused variable: chicken.internal#make-list 
o|removed side-effect free assignment to unused variable: chicken.internal#posq 
o|removed side-effect free assignment to unused variable: chicken.internal#posv 
o|inlining procedure: k2316 
o|inlining procedure: k2316 
o|substituted constant variable: a2358 
o|inlining procedure: k2374 
o|inlining procedure: k2374 
o|inlining procedure: k2394 
o|inlining procedure: k2394 
o|inlining procedure: k2403 
o|inlining procedure: k2418 
o|inlining procedure: k2418 
o|inlining procedure: k2403 
o|inlining procedure: k2477 
o|inlining procedure: k2477 
o|inlining procedure: k2498 
o|inlining procedure: k2498 
o|inlining procedure: k2513 
o|inlining procedure: k2513 
o|inlining procedure: k2557 
o|inlining procedure: k2557 
o|contracted procedure: "(internal.scm:107) srfi?603" 
o|inlining procedure: k2440 
o|inlining procedure: k2452 
o|inlining procedure: k2452 
o|inlining procedure: k2440 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2696 
o|inlining procedure: k2696 
o|inlining procedure: k2738 
o|inlining procedure: k2750 
o|inlining procedure: k2750 
o|inlining procedure: k2738 
o|inlining procedure: k2779 
o|inlining procedure: k2779 
o|inlining procedure: k2811 
o|inlining procedure: k2811 
o|inlining procedure: k2833 
o|inlining procedure: k2833 
o|inlining procedure: k2858 
o|inlining procedure: k2858 
o|inlining procedure: k2919 
o|inlining procedure: k2919 
o|inlining procedure: k2982 
o|inlining procedure: k2982 
o|inlining procedure: k2997 
o|inlining procedure: k2997 
o|inlining procedure: k3035 
o|inlining procedure: k3035 
o|inlining procedure: k3068 
o|inlining procedure: k3068 
o|replaced variables: 226 
o|removed binding forms: 89 
o|removed side-effect free assignment to unused variable: chicken.internal#any 
o|removed side-effect free assignment to unused variable: chicken.internal#filter 
o|removed side-effect free assignment to unused variable: chicken.internal#list-tabulate 
o|contracted procedure: "(internal.scm:89) chicken.internal#every" 
o|substituted constant variable: r24043114 
o|substituted constant variable: r24533125 
o|substituted constant variable: r24413126 
o|substituted constant variable: r26973129 
o|substituted constant variable: r28343141 
o|substituted constant variable: r28343141 
o|substituted constant variable: r28593152 
o|replaced variables: 20 
o|removed binding forms: 221 
o|replaced variables: 3 
o|removed binding forms: 25 
o|removed binding forms: 3 
o|contracted procedure: "(mini-srfi-1.scm:82) a2412" 
o|removed binding forms: 1 
o|replaced variables: 4 
o|inlining procedure: k1419 
o|removed binding forms: 2 
o|replaced variables: 1 
o|removed binding forms: 1 
o|simplifications: ((let . 11) (if . 4) (##core#call . 109)) 
o|  call simplifications:
o|    ##sys#setslot	2
o|    ##sys#size	4
o|    chicken.fixnum#fx-
o|    ##sys#check-list	2
o|    ##sys#slot	20
o|    scheme#set-car!	2
o|    scheme#memq	2
o|    scheme#caar	3
o|    scheme#cons	5
o|    scheme#pair?	4
o|    scheme#cddr
o|    scheme#eq?	7
o|    scheme#cdr	4
o|    scheme#cadr	2
o|    scheme#list?	2
o|    scheme#null?	11
o|    scheme#car	5
o|    scheme#symbol?	4
o|    chicken.base#fixnum?	3
o|    scheme#string-length
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref
o|    scheme#char-alphabetic?
o|    scheme#char-numeric?
o|    scheme#not	8
o|    chicken.fixnum#fx=	2
o|    scheme#char->integer
o|    chicken.fixnum#fx<
o|    scheme#write-char	3
o|    chicken.fixnum#fx+	4
o|contracted procedure: k2307 
o|contracted procedure: k2319 
o|contracted procedure: k2325 
o|contracted procedure: k2335 
o|contracted procedure: k2341 
o|contracted procedure: k2359 
o|contracted procedure: k2385 
o|contracted procedure: k2368 
o|contracted procedure: k2381 
o|contracted procedure: k2371 
o|contracted procedure: k2391 
o|contracted procedure: k2400 
o|contracted procedure: k2425 
o|contracted procedure: k2406 
o|contracted procedure: k1401 
o|contracted procedure: k1423 
o|contracted procedure: k2415 
o|inlining procedure: k1410 
o|contracted procedure: k1419 
o|inlining procedure: k1410 
o|contracted procedure: k2480 
o|contracted procedure: k2489 
o|contracted procedure: k2501 
o|contracted procedure: k2507 
o|contracted procedure: k2586 
o|contracted procedure: k2516 
o|contracted procedure: k2540 
o|contracted procedure: k2547 
o|contracted procedure: k2560 
o|contracted procedure: k2570 
o|contracted procedure: k2471 
o|contracted procedure: k2443 
o|contracted procedure: k2467 
o|contracted procedure: k2449 
o|contracted procedure: k2455 
o|contracted procedure: k2612 
o|contracted procedure: k2637 
o|contracted procedure: k2633 
o|contracted procedure: k2657 
o|contracted procedure: k2653 
o|contracted procedure: k2674 
o|contracted procedure: k2660 
o|contracted procedure: k2667 
o|contracted procedure: k2721 
o|contracted procedure: k2680 
o|contracted procedure: k2699 
o|contracted procedure: k2702 
o|contracted procedure: k2709 
o|contracted procedure: k2802 
o|contracted procedure: k2730 
o|contracted procedure: k2767 
o|contracted procedure: k2741 
o|contracted procedure: k2763 
o|contracted procedure: k2753 
o|contracted procedure: k2770 
o|contracted procedure: k2782 
o|contracted procedure: k2792 
o|contracted procedure: k2796 
o|contracted procedure: k2814 
o|contracted procedure: k2817 
o|contracted procedure: k2827 
o|contracted procedure: k2823 
o|contracted procedure: k2839 
o|contracted procedure: k2833 
o|contracted procedure: k2852 
o|contracted procedure: k2893 
o|contracted procedure: k2861 
o|contracted procedure: k2889 
o|contracted procedure: k2885 
o|contracted procedure: k2867 
o|contracted procedure: k2874 
o|contracted procedure: k2881 
o|contracted procedure: k2901 
o|contracted procedure: k2910 
o|contracted procedure: k2922 
o|contracted procedure: k2933 
o|contracted procedure: k2929 
o|contracted procedure: k2961 
o|contracted procedure: k2957 
o|contracted procedure: k2939 
o|contracted procedure: k2946 
o|contracted procedure: k2953 
o|contracted procedure: k2965 
o|contracted procedure: k3000 
o|contracted procedure: k3009 
o|contracted procedure: k3013 
o|contracted procedure: k3016 
o|contracted procedure: k3019 
o|contracted procedure: k3029 
o|contracted procedure: k3038 
o|contracted procedure: k3048 
o|contracted procedure: k3052 
o|contracted procedure: k3062 
o|contracted procedure: k3071 
o|contracted procedure: k3078 
o|contracted procedure: k3082 
o|contracted procedure: k3090 
o|simplifications: ((let . 40)) 
o|removed binding forms: 95 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest646648 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest646648 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest665667 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest665667 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest706707 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest706707 0 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop204 0 
o|direct leaf routine/allocation: chicken.internal#hash-symbol 0 
o|direct leaf routine/allocation: loop716 0 
o|converted assignments to bindings: (loop204) 
o|contracted procedure: "(internal.scm:183) k2897" 
o|converted assignments to bindings: (loop716) 
o|contracted procedure: "(internal.scm:190) k2907" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 2 
o|customizable procedures: (loop766 g747754 for-each-loop746757 doloop741742 loop726 g677684 for-each-loop676687 loop655 k2621 loop628 k2525 library-part->string604 doloop614615 fail602 k2338 doloop572573) 
o|calls to known targets: 36 
o|identified direct recursive calls: f_1399 2 
o|identified direct recursive calls: f_2694 1 
o|unused rest argument: rest646648 f_2678 
o|unused rest argument: rest665667 f_2728 
o|unused rest argument: rest706707 f_2831 
o|identified direct recursive calls: f_2856 1 
o|identified direct recursive calls: f_2917 1 
o|fast box initializations: 11 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_1399 
*/
/* end of file */
