/* Generated from snow/retropikzel/pffi.sld by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev fbb6ce81)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: snow/retropikzel/pffi.sld -output-file src/retropikzel.pffi.c -emit-all-import-libraries -optimize-level 3
   uses: eval extras expand lolevel r7lib library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_extern void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_r7lib_toplevel)
C_extern void C_ccall C_r7lib_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[2];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_149)
static void C_ccall f_149(C_word c,C_word *av) C_noret;
C_noret_decl(f_152)
static void C_ccall f_152(C_word c,C_word *av) C_noret;
C_noret_decl(f_155)
static void C_ccall f_155(C_word c,C_word *av) C_noret;
C_noret_decl(f_158)
static void C_ccall f_158(C_word c,C_word *av) C_noret;
C_noret_decl(f_161)
static void C_ccall f_161(C_word c,C_word *av) C_noret;
C_noret_decl(f_164)
static void C_ccall f_164(C_word c,C_word *av) C_noret;
C_noret_decl(f_170)
static void C_ccall f_170(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k147 */
static void C_ccall f_149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_149,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k150 in k147 */
static void C_ccall f_152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_152,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_r7lib_toplevel(2,av2);}}

/* k153 in k150 in k147 */
static void C_ccall f_155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_155,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k156 in k153 in k150 in k147 */
static void C_ccall f_158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_158,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k159 in k156 in k153 in k150 in k147 */
static void C_ccall f_161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_161,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_164,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k162 in k159 in k156 in k153 in k150 in k147 */
static void C_ccall f_164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_164,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[1]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k168 in k162 in k159 in k156 in k153 in k150 in k147 */
static void C_ccall f_170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_170,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

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
if(C_unlikely(!C_demand_2(14))){
C_save(t1);
C_rereclaim2(14*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,2);
lf[0]=C_h_intern(&lf[0],17, C_text("retropikzel.pffi#"));
lf[1]=C_h_intern(&lf[1],34, C_text("chicken.base#implicit-exit-handler"));
C_register_lf2(lf,2,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_149,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[9] = {
{C_text("f_149:snow_2fretropikzel_2fpffi_2esld"),(void*)f_149},
{C_text("f_152:snow_2fretropikzel_2fpffi_2esld"),(void*)f_152},
{C_text("f_155:snow_2fretropikzel_2fpffi_2esld"),(void*)f_155},
{C_text("f_158:snow_2fretropikzel_2fpffi_2esld"),(void*)f_158},
{C_text("f_161:snow_2fretropikzel_2fpffi_2esld"),(void*)f_161},
{C_text("f_164:snow_2fretropikzel_2fpffi_2esld"),(void*)f_164},
{C_text("f_170:snow_2fretropikzel_2fpffi_2esld"),(void*)f_170},
{C_text("toplevel:snow_2fretropikzel_2fpffi_2esld"),(void*)C_toplevel},
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
(o e)|safe calls: 2 
o|replaced variables: 1 
o|removed binding forms: 15 
o|removed binding forms: 1 
*/
/* end of file */
