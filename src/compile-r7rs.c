/* Generated from compile-r7rs.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: compile-r7rs.scm -output-file src/compile-r7rs.c -optimize-level 3
   uses: eval r7lib library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_r7lib_toplevel)
C_extern void C_ccall C_r7lib_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[16];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f209)
static void C_ccall f209(C_word c,C_word *av) C_noret;
C_noret_decl(f_145)
static void C_ccall f_145(C_word c,C_word *av) C_noret;
C_noret_decl(f_148)
static void C_ccall f_148(C_word c,C_word *av) C_noret;
C_noret_decl(f_151)
static void C_ccall f_151(C_word c,C_word *av) C_noret;
C_noret_decl(f_155)
static void C_ccall f_155(C_word c,C_word *av) C_noret;
C_noret_decl(f_161)
static void C_ccall f_161(C_word c,C_word *av) C_noret;
C_noret_decl(f_172)
static void C_ccall f_172(C_word c,C_word *av) C_noret;
C_noret_decl(f_178)
static void C_ccall f_178(C_word c,C_word *av) C_noret;
C_noret_decl(f_192)
static void C_ccall f_192(C_word c,C_word *av) C_noret;
C_noret_decl(f_199)
static void C_ccall f_199(C_word c,C_word *av) C_noret;
C_noret_decl(f_206)
static void C_ccall f_206(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* f209 in k190 in k197 in k204 in k159 in k153 in k149 in k146 in k143 */
static void C_ccall f209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f209,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k143 */
static void C_ccall f_145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_145,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_148,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k146 in k143 */
static void C_ccall f_148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_148,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_151,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_r7lib_toplevel(2,av2);}}

/* k149 in k146 in k143 */
static void C_ccall f_151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_151,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compile-r7rs.scm:5: chicken.process-context#get-environment-variable"));
t3=C_fast_retrieve(lf[14]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[15];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k153 in k149 in k146 in k143 */
static void C_ccall f_155(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_155,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[0]+1 /* (set! scheme ...) */,t1);
t3=C_mutate((C_word*)lf[1]+1 /* (set! interpreters ...) */,lf[2]);
t4=C_mutate((C_word*)lf[3]+1 /* (set! compilers ...) */,lf[4]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compile-r7rs.scm:9: scheme#append"));
t6=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fast_retrieve(lf[1]);
av2[3]=C_fast_retrieve(lf[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k159 in k153 in k149 in k146 in k143 */
static void C_ccall f_161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_161,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[5]+1 /* (set! implementations ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compile-r7rs.scm:11: scheme#string->symbol"));
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fast_retrieve(lf[0]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k170 in k197 in k204 in k159 in k153 in k149 in k146 in k143 */
static void C_ccall f_172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_172,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_178,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[8]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k176 in k170 in k197 in k204 in k159 in k153 in k149 in k146 in k143 */
static void C_ccall f_178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_178,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k190 in k197 in k204 in k159 in k153 in k149 in k146 in k143 */
static void C_ccall f_192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_192,c,av);}
a=C_alloc(3);
t2=C_i_member(t1,C_fast_retrieve(lf[9]));
if(C_truep(C_i_not(t2))){
C_trace(C_text("compile-r7rs.scm:15: chicken.base#error"));
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[11];
av2[3]=C_fast_retrieve(lf[0]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f209,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t4=C_fast_retrieve(lf[8]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k197 in k204 in k159 in k153 in k149 in k146 in k143 */
static void C_ccall f_199(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_199,c,av);}
a=C_alloc(7);
t2=C_i_member(t1,C_fast_retrieve(lf[1]));
t3=(C_truep(t2)?C_SCHEME_TRUE:C_SCHEME_FALSE);
t4=C_set_block_item(lf[7] /* is-compiler? */,0,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_192,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("compile-r7rs.scm:14: scheme#string->symbol"));
t7=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_fast_retrieve(lf[0]);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k204 in k159 in k153 in k149 in k146 in k143 */
static void C_ccall f_206(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_206,c,av);}
a=C_alloc(3);
t2=C_i_member(t1,C_fast_retrieve(lf[1]));
t3=(C_truep(t2)?C_SCHEME_TRUE:C_SCHEME_FALSE);
t4=C_set_block_item(lf[6] /* is-interpreter? */,0,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_199,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compile-r7rs.scm:12: scheme#string->symbol"));
t6=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fast_retrieve(lf[0]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

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
if(C_unlikely(!C_demand_2(104))){
C_save(t1);
C_rereclaim2(104*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,16);
lf[0]=C_h_intern(&lf[0],6, C_text("scheme"));
lf[1]=C_h_intern(&lf[1],12, C_text("interpreters"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001\143\150\151\142\151\376\377\016"));
lf[3]=C_h_intern(&lf[3],9, C_text("compilers"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\143\150\151\143\153\145\156\376\377\016"));
lf[5]=C_h_intern(&lf[5],15, C_text("implementations"));
lf[6]=C_h_intern(&lf[6],15, C_text("is-interpreter?"));
lf[7]=C_h_intern(&lf[7],12, C_text("is-compiler?"));
lf[8]=C_h_intern(&lf[8],34, C_text("chicken.base#implicit-exit-handler"));
lf[9]=C_h_intern(&lf[9],14, C_text("implementation"));
lf[10]=C_h_intern(&lf[10],18, C_text("chicken.base#error"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\125\156\163\165\160\160\157\162\164\145\144\040\163\143\150\145\155\145\040\151\155\160\154\145\155\145\156\164\141\164\151\157\156\000"));
lf[12]=C_h_intern(&lf[12],21, C_text("scheme#string->symbol"));
lf[13]=C_h_intern(&lf[13],13, C_text("scheme#append"));
lf[14]=C_h_intern(&lf[14],48, C_text("chicken.process-context#get-environment-variable"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\123\103\110\105\115\105\000"));
C_register_lf2(lf,16,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_145,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[13] = {
{C_text("f209:compile_2dr7rs_2escm"),(void*)f209},
{C_text("f_145:compile_2dr7rs_2escm"),(void*)f_145},
{C_text("f_148:compile_2dr7rs_2escm"),(void*)f_148},
{C_text("f_151:compile_2dr7rs_2escm"),(void*)f_151},
{C_text("f_155:compile_2dr7rs_2escm"),(void*)f_155},
{C_text("f_161:compile_2dr7rs_2escm"),(void*)f_161},
{C_text("f_172:compile_2dr7rs_2escm"),(void*)f_172},
{C_text("f_178:compile_2dr7rs_2escm"),(void*)f_178},
{C_text("f_192:compile_2dr7rs_2escm"),(void*)f_192},
{C_text("f_199:compile_2dr7rs_2escm"),(void*)f_199},
{C_text("f_206:compile_2dr7rs_2escm"),(void*)f_206},
{C_text("toplevel:compile_2dr7rs_2escm"),(void*)C_toplevel},
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
(o e)|safe calls: 12 
(o e)|assignments to immediate values: 2 
o|replaced variables: 6 
o|removed binding forms: 12 
o|removed binding forms: 6 
o|inlining procedure: k170 
o|removed binding forms: 1 
o|simplifications: ((if . 2) (##core#call . 4)) 
o|  call simplifications:
o|    scheme#member	3
o|    scheme#not
o|contracted procedure: k200 
o|contracted procedure: k163 
o|contracted procedure: k193 
o|contracted procedure: k167 
o|contracted procedure: k186 
o|contracted procedure: k179 
o|simplifications: ((let . 1)) 
o|removed binding forms: 6 
*/
/* end of file */
