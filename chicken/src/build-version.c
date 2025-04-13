/* Generated from build-version.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: build-version.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file build-version.c
   unit: build-version
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_word lf[7];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_build_2dversion_toplevel)
C_extern void C_ccall C_build_2dversion_toplevel(C_word c,C_word *av) C_noret;

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_build_2dversion_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("build-version"));
C_check_nursery_minimum(C_calculate_demand(8,c,1));
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void*)C_build_2dversion_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(28))){
C_save(t1);
C_rereclaim2(28*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(8);
C_initialize_lf(lf,7);
lf[0]=C_h_intern(&lf[0],13, C_text("build-version"));
lf[1]=C_h_intern(&lf[1],14, C_text("##sys#build-id"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\060\065\142\145\061\065\144\064\000"));
lf[3]=C_h_intern(&lf[3],18, C_text("##sys#build-branch"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\050\110\105\101\104\040\144\145\164\141\143\150\145\144\040\141\164\040\066\056\060\056\060\160\162\145\061\051\000"));
lf[5]=C_h_intern(&lf[5],19, C_text("##sys#build-version"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\066\056\060\056\060\160\162\145\061\000"));
C_register_lf2(lf,7,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#build-id ...) */,lf[2]);
t4=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#build-branch ...) */,lf[4]);
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#build-version ...) */,lf[6]);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[2] = {
{C_text("toplevel:build_2dversion_2escm"),(void*)C_build_2dversion_toplevel},
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
o|safe globals: (##sys#build-version ##sys#build-branch ##sys#build-id) 
o|removed binding forms: 3 
*/
/* end of file */
