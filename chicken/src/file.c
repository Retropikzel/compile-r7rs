/* Generated from file.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0pre1 ((HEAD detached at 6.0.0pre1)) (rev 05be15d4)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: file.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file file.c -emit-import-library chicken.file
   unit: file
   uses: extras pathname irregex library
*/
#include "chicken.h"

#include <errno.h>

#define C_test_access(fn, m) C_fix(access(C_c_string(fn), C_unfix(m)))

/* For Windows */
#ifndef R_OK
# define R_OK 2
#endif
#ifndef W_OK
# define W_OK 4
#endif
#ifndef X_OK
# define X_OK 2
#endif

#define C_rename(old, new)  C_fix(rename(C_c_string(old), C_c_string(new)))
#define C_remove(str)       C_fix(remove(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str)))
#endif

#include <sys/types.h>
#include <dirent.h>

#define C_opendir(s,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(s)))
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_foundfile(e,b,l)  (C_strlcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name, l), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

static C_word C_u_i_symbolic_linkp(C_word path)
{
#if !defined(_WIN32) || defined(__CYGWIN__)
  struct stat buf;
  if (lstat(C_c_string(path), &buf) == 0)
    return C_mk_bool(S_ISLNK(buf.st_mode));
#endif
  return C_SCHEME_FALSE;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_extern void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[112];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char li2[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,45,101,120,105,115,116,115,63,32,110,97,109,101,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,116,101,115,116,45,97,99,99,101,115,115,32,102,105,108,101,110,97,109,101,32,97,99,99,32,108,111,99,41,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,114,101,97,100,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,119,114,105,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,101,99,117,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41};
static C_char li7[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,32,46,32,114,101,115,116,41,0};
static C_char li9[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,105,114,41,0,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,51,41,0};
static C_char li11[] C_aligned={C_lihdr(0,0,29),40,97,49,48,53,57,32,100,105,114,50,51,56,32,102,105,108,101,50,52,48,32,101,120,116,50,52,50,41,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,11),40,114,109,100,105,114,32,100,105,114,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,8),40,103,50,55,53,32,102,41};
static C_char li15[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,52,32,103,50,56,49,41,0};
static C_char li16[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,41,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,41};
static C_char li19[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,35,114,101,110,97,109,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,111,112,121,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,109,111,118,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char li24[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,9),40,97,49,54,50,53,32,112,41,0,0,0,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,7),40,97,49,55,52,51,41,0};
static C_char li31[] C_aligned={C_lihdr(0,0,8),40,103,52,55,56,32,109,41};
static C_char li32[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,102,110,115,41,0,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,7),40,97,49,56,51,57,41,0};
static C_char li34[] C_aligned={C_lihdr(0,0,13),40,97,49,56,51,51,32,101,120,118,97,114,41,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,55,50,55,41,0,0,0,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,7),40,97,49,56,56,56,41,0};
static C_char li37[] C_aligned={C_lihdr(0,0,14),40,116,109,112,50,55,50,56,32,97,114,103,115,41,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,7),40,97,49,56,55,53,41,0};
static C_char li39[] C_aligned={C_lihdr(0,0,9),40,97,49,56,50,55,32,107,41,0,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,28),40,97,49,55,52,57,32,100,105,114,52,53,48,32,102,105,108,52,53,50,32,101,120,116,52,53,52,41,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,17),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,102,105,108,101,35,103,108,111,98,32,46,32,112,97,116,104,115,41,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,7),40,97,50,48,49,56,41,0};
static C_char li44[] C_aligned={C_lihdr(0,0,7),40,97,50,48,50,51,41,0};
static C_char li45[] C_aligned={C_lihdr(0,0,7),40,97,50,48,52,51,41,0};
static C_char li46[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,105,114,32,102,115,32,114,41,0};
static C_char li47[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,57,53,32,120,41,0,0,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,48,51,32,46,32,95,41,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,49,49,32,46,32,95,41,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,54,41,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,57,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,50,41,0};
static C_char li53[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,53,41,0};
static C_char li54[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,51,49,32,120,32,121,41,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,56,41,0};
static C_char li56[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,51,57,32,46,32,95,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,7),40,97,50,49,51,54,41,0};
static C_char li58[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,110,100,45,102,105,108,101,115,32,100,105,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from getpid */
C_regparm static C_word stub438(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from getpid */
C_regparm static C_word stub429(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k755 */
C_regparm static C_word stub143(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word *av) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1012)
static void f_1012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1019)
static void f_1019(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word *av) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word *av) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word *av) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word *av) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word *av) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word *av) C_noret;
C_noret_decl(f_1099)
static void C_ccall f_1099(C_word c,C_word *av) C_noret;
C_noret_decl(f_1105)
static void f_1105(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word *av) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word *av) C_noret;
C_noret_decl(f_1129)
static void f_1129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1142)
static void C_ccall f_1142(C_word c,C_word *av) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word *av) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word *av) C_noret;
C_noret_decl(f_1159)
static void f_1159(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word *av) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word *av) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word *av) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word *av) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word *av) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word *av) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word *av) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word *av) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word *av) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word *av) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261(C_word c,C_word *av) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word *av) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word *av) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word *av) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word *av) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word *av) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word *av) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word *av) C_noret;
C_noret_decl(f_1347)
static void f_1347(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word *av) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word *av) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word *av) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word *av) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word *av) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word *av) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word *av) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word *av) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word *av) C_noret;
C_noret_decl(f_1462)
static void C_ccall f_1462(C_word c,C_word *av) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word *av) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void f_1477(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word *av) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word *av) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word *av) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word *av) C_noret;
C_noret_decl(f_1561)
static void f_1561(C_word t0) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word *av) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word *av) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word *av) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1606)
static void f_1606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word *av) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word *av) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word *av) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word *av) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word *av) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word *av) C_noret;
C_noret_decl(f_1663)
static void f_1663(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word *av) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word *av) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word *av) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word *av) C_noret;
C_noret_decl(f_1729)
static void f_1729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word *av) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word *av) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word *av) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word *av) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word *av) C_noret;
C_noret_decl(f_1769)
static void f_1769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void f_1790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word *av) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word *av) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word *av) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word *av) C_noret;
C_noret_decl(f_1834)
static void C_ccall f_1834(C_word c,C_word *av) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word *av) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word *av) C_noret;
C_noret_decl(f_1878)
static void f_1878(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void f_1883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word *av) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word *av) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word *av) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word *av) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word *av) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word *av) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word *av) C_noret;
C_noret_decl(f_1939)
static void f_1939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void f_1942(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word *av) C_noret;
C_noret_decl(f_1951)
static void f_1951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word *av) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word *av) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word *av) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word *av) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word *av) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word *av) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word *av) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word *av) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word *av) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word *av) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word *av) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word *av) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word *av) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word *av) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word *av) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word *av) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word *av) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word *av) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word *av) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word *av) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word *av) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word *av) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word *av) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word *av) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word *av) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word *av) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word *av) C_noret;
C_noret_decl(f_758)
static void f_758(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word *av) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word *av) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word *av) C_noret;
C_noret_decl(f_799)
static void f_799(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word *av) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word *av) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word *av) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word *av) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word *av) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word *av) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void f_890(C_word t0,C_word t1) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word *av) C_noret;
C_noret_decl(f_916)
static void f_916(C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word *av) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word *av) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1012)
static void C_ccall trf_1012(C_word c,C_word *av) C_noret;
static void C_ccall trf_1012(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1012(t0,t1,t2);}

C_noret_decl(trf_1019)
static void C_ccall trf_1019(C_word c,C_word *av) C_noret;
static void C_ccall trf_1019(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1019(t0,t1);}

C_noret_decl(trf_1105)
static void C_ccall trf_1105(C_word c,C_word *av) C_noret;
static void C_ccall trf_1105(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1105(t0,t1);}

C_noret_decl(trf_1129)
static void C_ccall trf_1129(C_word c,C_word *av) C_noret;
static void C_ccall trf_1129(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1129(t0,t1,t2);}

C_noret_decl(trf_1159)
static void C_ccall trf_1159(C_word c,C_word *av) C_noret;
static void C_ccall trf_1159(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1159(t0,t1,t2);}

C_noret_decl(trf_1347)
static void C_ccall trf_1347(C_word c,C_word *av) C_noret;
static void C_ccall trf_1347(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1347(t0,t1,t2,t3);}

C_noret_decl(trf_1477)
static void C_ccall trf_1477(C_word c,C_word *av) C_noret;
static void C_ccall trf_1477(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1477(t0,t1,t2,t3);}

C_noret_decl(trf_1561)
static void C_ccall trf_1561(C_word c,C_word *av) C_noret;
static void C_ccall trf_1561(C_word c,C_word *av){
C_word t0=av[0];
f_1561(t0);}

C_noret_decl(trf_1606)
static void C_ccall trf_1606(C_word c,C_word *av) C_noret;
static void C_ccall trf_1606(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1606(t0,t1);}

C_noret_decl(trf_1663)
static void C_ccall trf_1663(C_word c,C_word *av) C_noret;
static void C_ccall trf_1663(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1663(t0,t1);}

C_noret_decl(trf_1729)
static void C_ccall trf_1729(C_word c,C_word *av) C_noret;
static void C_ccall trf_1729(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1729(t0,t1,t2);}

C_noret_decl(trf_1769)
static void C_ccall trf_1769(C_word c,C_word *av) C_noret;
static void C_ccall trf_1769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1769(t0,t1,t2);}

C_noret_decl(trf_1790)
static void C_ccall trf_1790(C_word c,C_word *av) C_noret;
static void C_ccall trf_1790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1790(t0,t1,t2);}

C_noret_decl(trf_1878)
static void C_ccall trf_1878(C_word c,C_word *av) C_noret;
static void C_ccall trf_1878(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1878(t0,t1);}

C_noret_decl(trf_1883)
static void C_ccall trf_1883(C_word c,C_word *av) C_noret;
static void C_ccall trf_1883(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1883(t0,t1,t2);}

C_noret_decl(trf_1939)
static void C_ccall trf_1939(C_word c,C_word *av) C_noret;
static void C_ccall trf_1939(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1939(t0,t1);}

C_noret_decl(trf_1942)
static void C_ccall trf_1942(C_word c,C_word *av) C_noret;
static void C_ccall trf_1942(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1942(t0,t1);}

C_noret_decl(trf_1951)
static void C_ccall trf_1951(C_word c,C_word *av) C_noret;
static void C_ccall trf_1951(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1951(t0,t1,t2,t3,t4);}

C_noret_decl(trf_758)
static void C_ccall trf_758(C_word c,C_word *av) C_noret;
static void C_ccall trf_758(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_758(t0,t1,t2,t3,t4);}

C_noret_decl(trf_799)
static void C_ccall trf_799(C_word c,C_word *av) C_noret;
static void C_ccall trf_799(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_799(t0,t1,t2,t3);}

C_noret_decl(trf_890)
static void C_ccall trf_890(C_word c,C_word *av) C_noret;
static void C_ccall trf_890(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_890(t0,t1);}

C_noret_decl(trf_916)
static void C_ccall trf_916(C_word c,C_word *av) C_noret;
static void C_ccall trf_916(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_916(t0,t1);}

/* k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_1000,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[3],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1060,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* file.scm:193: ##sys#call-with-values */{
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
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:184: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[31];
tp(4,av2);}}}}

/* k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1010,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1012,a[2]=t3,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1012(t5,((C_word*)t0)[2],t1);}

/* loop in k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void f_1012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1012,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1019,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1052,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* file.scm:195: directory-exists? */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_1019(t4,C_SCHEME_FALSE);}}

/* k1017 in loop in k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void f_1019(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1019,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1045,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:196: chicken.pathname#pathname-directory */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1020 in k1017 in loop in k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1022,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:184: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[31];
tp(4,av2);}}

/* k1036 in k1020 in k1017 in loop in k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1038,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_mkdir(t1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:185: posix-error */
f_758(((C_word*)t0)[2],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k1043 in k1017 in loop in k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1045,c,av);}
/* file.scm:196: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1012(t2,((C_word*)t0)[3],t1);}

/* k1050 in loop in k1008 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1052,c,av);}
t2=((C_word*)t0)[2];
f_1019(t2,C_i_not(t1));}

/* a1053 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1054,c,av);}
/* file.scm:193: chicken.pathname#decompose-pathname */
t2=*((C_word*)lf[34]+1);{
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

/* a1059 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1060(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1060,c,av);}
if(C_truep(t3)){
/* file.scm:194: chicken.pathname#make-pathname */
t5=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1081 in k998 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1083,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_mkdir(t1));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* file.scm:185: posix-error */
f_758(((C_word*)t0)[4],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1099(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_1099,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1105,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t6=C_i_check_string_2(t2,lf[37]);
if(C_truep(t4)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1128,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:209: find-files */
t8=*((C_word*)lf[40]+1);{
C_word av2[7];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[41];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[42];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(7,av2);}}
else{
/* file.scm:221: rmdir */
f_1105(t1,t2);}}

/* rmdir in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void f_1105(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1105,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1109,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:204: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1107 in rmdir in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1109,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_rmdir(t1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:206: posix-error */
f_758(((C_word*)t0)[2],lf[14],lf[37],lf[38],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1128(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1128,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[2],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1159,a[2]=t5,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1159(t7,t3,t1);}

/* g275 in k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void f_1129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1129,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1142,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:181: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[37];
tp(4,av2);}}

/* k1140 in g275 in k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1142,c,av);}
a=C_alloc(5);
if(C_truep(C_u_i_symbolic_linkp(t1))){
t2=*((C_word*)lf[39]+1);
t3=*((C_word*)lf[39]+1);
/* file.scm:214: g285 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1151,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:216: directory-exists? */
t3=*((C_word*)lf[11]+1);{
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

/* k1149 in k1140 in g275 in k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1151,c,av);}
if(C_truep(t1)){
/* file.scm:214: g285 */
f_1105(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[39]+1);
t3=*((C_word*)lf[39]+1);
/* file.scm:214: g285 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1152 in k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1154,c,av);}
/* file.scm:220: rmdir */
f_1105(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* for-each-loop274 in k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void f_1159(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1159,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1169,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:213: g275 */
t4=((C_word*)t0)[3];
f_1129(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1167 in for-each-loop274 in k1126 in chicken.file#delete-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1169,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1159(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.file#delete-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1191,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[43]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1221,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:228: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[43];
tp(4,av2);}}

/* k1202 in k1219 in chicken.file#delete-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1204,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1206 in k1219 in chicken.file#delete-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1208,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1212,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1216,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1210 in k1206 in k1219 in chicken.file#delete-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1212,c,av);}
/* file.scm:229: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[43];
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* k1214 in k1206 in k1219 in chicken.file#delete-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1216,c,av);}
/* file.scm:231: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=t1;
tp(4,av2);}}

/* k1219 in chicken.file#delete-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1221,c,av);}
a=C_alloc(8);
t2=C_eqp(C_fix(0),C_remove(t1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1208,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:230: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* chicken.file#delete-file* in k744 in k741 in k738 in k735 */
static void C_ccall f_1223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1223,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1230,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:235: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1228 in chicken.file#delete-file* in k744 in k741 in k738 in k735 */
static void C_ccall f_1230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1230,c,av);}
if(C_truep(t1)){
/* file.scm:235: delete-file */
t2=*((C_word*)lf[39]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1235(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1235,c,av);}
a=C_alloc(9);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_i_check_string_2(t2,lf[48]);
t7=C_i_check_string_2(t3,lf[48]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1248,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1281,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t5))){
/* file.scm:240: file-exists? */
t10=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1248(2,av2);}}}

/* k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1248,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:244: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[48];
tp(4,av2);}}

/* k1249 in k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1251,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1259 in k1276 in k1272 in k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1261,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1269,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1263 in k1259 in k1276 in k1272 in k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1265,c,av);}
/* file.scm:246: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[48];
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
tp(8,av2);}}

/* k1267 in k1259 in k1276 in k1272 in k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1269,c,av);}
/* file.scm:248: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[49];
av2[3]=t1;
tp(4,av2);}}

/* k1272 in k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1274,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1278,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:245: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[48];
tp(4,av2);}}

/* k1276 in k1272 in k1246 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1278,c,av);}
a=C_alloc(5);
t2=C_eqp(C_fix(0),C_rename(((C_word*)t0)[2],t1));
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1261,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:247: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}}

/* k1279 in chicken.file#rename-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1281,c,av);}
if(C_truep(t1)){
/* file.scm:241: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=lf[51];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1248(2,av2);}}}

/* chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1298(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1298,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(1024):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_check_string_2(t2,lf[53]);
t11=C_i_check_string_2(t3,lf[53]);
t12=C_i_check_number_2(t8,lf[53]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1323,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=t2,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t8))){
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1323(2,av2);}}
else{
/* file.scm:256: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[53];
av2[3]=lf[63];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
/* file.scm:256: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[53];
av2[3]=lf[63];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}

/* k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1323,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1389,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* file.scm:257: directory-exists? */
t4=*((C_word*)lf[11]+1);{
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

/* k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1326,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1377,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
/* file.scm:259: file-exists? */
t4=*((C_word*)lf[8]+1);{
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
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1329(2,av2);}}}

/* k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1329,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:261: scheme#open-input-file */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1332,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1335,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:262: scheme#open-output-file */
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
av2[3]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1335,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1338,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:263: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1338,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:264: chicken.io#read-bytevector! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1343 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1345,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1347(t5,((C_word*)t0)[5],t1,C_fix(0));}

/* loop in k1343 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void f_1347(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1347,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1357,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:268: scheme#close-input-port */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1363,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* file.scm:272: chicken.io#write-bytevector */
t6=*((C_word*)lf[57]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
av2[4]=C_fix(0);
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}

/* k1355 in loop in k1343 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1357,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:269: scheme#close-output-port */
t3=*((C_word*)lf[54]+1);{
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

/* k1358 in k1355 in loop in k1343 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1360,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1361 in loop in k1343 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1363,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:273: chicken.io#read-bytevector! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1368 in k1361 in loop in k1343 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1370,c,av);}
/* file.scm:273: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1347(t2,((C_word*)t0)[3],t1,C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1375 in k1324 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1377,c,av);}
if(C_truep(t1)){
/* file.scm:260: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[61];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1329(2,av2);}}}

/* k1387 in k1321 in chicken.file#copy-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1389,c,av);}
if(C_truep(t1)){
/* file.scm:258: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[62];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1326(2,av2);}}}

/* chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1428(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1428,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(1024):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_check_string_2(t2,lf[65]);
t11=C_i_check_string_2(t3,lf[65]);
t12=C_i_check_number_2(t8,lf[65]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1453,a[2]=t2,a[3]=t1,a[4]=t8,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t8))){
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1453(2,av2);}}
else{
/* file.scm:280: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[65];
av2[3]=lf[68];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
/* file.scm:280: ##sys#error */
t14=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[65];
av2[3]=lf[68];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}

/* k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1453,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1522,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* file.scm:281: directory-exists? */
t4=*((C_word*)lf[11]+1);{
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

/* k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1456,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1510,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
/* file.scm:283: file-exists? */
t4=*((C_word*)lf[8]+1);{
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
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1459(2,av2);}}}

/* k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1459,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:285: scheme#open-input-file */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1462,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:286: scheme#open-output-file */
t3=*((C_word*)lf[58]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1465,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:287: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1468,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:288: chicken.io#read-bytevector! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1475,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1477(t5,((C_word*)t0)[6],t1,C_fix(0));}

/* loop in k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void f_1477(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1477,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1487,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* file.scm:292: scheme#close-input-port */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* file.scm:297: chicken.io#write-bytevector */
t6=*((C_word*)lf[57]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
av2[4]=C_fix(0);
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}

/* k1485 in loop in k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1487,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:293: scheme#close-output-port */
t3=*((C_word*)lf[54]+1);{
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

/* k1488 in k1485 in loop in k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1490,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:294: delete-file */
t3=*((C_word*)lf[39]+1);{
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

/* k1491 in k1488 in k1485 in loop in k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1493,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1494 in loop in k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1496,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:298: chicken.io#read-bytevector! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1501 in k1494 in loop in k1473 in k1466 in k1463 in k1460 in k1457 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1503,c,av);}
/* file.scm:298: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1477(t2,((C_word*)t0)[3],t1,C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1508 in k1454 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1510,c,av);}
if(C_truep(t1)){
/* file.scm:284: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[65];
av2[3]=lf[66];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1459(2,av2);}}}

/* k1520 in k1451 in chicken.file#move-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1522,c,av);}
if(C_truep(t1)){
/* file.scm:282: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[65];
av2[3]=lf[67];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1456(2,av2);}}}

/* tempdir in k744 in k741 in k738 in k735 */
static void f_1561(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1561,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* file.scm:309: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[73]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1563 in tempdir in k744 in k741 in k738 in k735 */
static void C_ccall f_1565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1565,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* file.scm:310: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[77];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1569 in k1563 in tempdir in k744 in k741 in k738 in k735 */
static void C_ccall f_1571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1571,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* file.scm:311: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[76];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1575 in k1569 in k1563 in tempdir in k744 in k741 in k738 in k735 */
static void C_ccall f_1577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1577,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(*((C_word*)lf[70]+1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* file.scm:313: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[73]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[75];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k1584 in k1575 in k1569 in k1563 in tempdir in k744 in k741 in k738 in k735 */
static void C_ccall f_1586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1586,c,av);}
if(C_truep(t1)){
/* file.scm:315: string-append */
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
av2[3]=lf[71];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[72];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1594(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1594,c,av);}
a=C_alloc(9);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?lf[80]:C_get_rest_arg(c,2,av,2,t0));
t4=C_i_check_string_2(t3,lf[81]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1606,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1606(t8,t1);}

/* loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void f_1606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1606,2,t0,t1);}
a=C_alloc(10);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1631,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:325: tempdir */
f_1561(t4);}

/* k1610 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1612,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:332: file-exists? */
t3=*((C_word*)lf[8]+1);{
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

/* k1616 in k1610 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1618,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:333: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1606(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1626,a[2]=((C_word*)t0)[4],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* file.scm:334: scheme#call-with-output-file */
t3=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* a1625 in k1616 in k1610 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1626,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1629 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1631,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1635,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1639,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1633 in k1629 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1635,c,av);}
/* file.scm:324: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
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

/* k1637 in k1629 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1639,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:330: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t2;
av2[2]=stub429(C_SCHEME_UNDEFINED);
tp(3,av2);}}

/* k1641 in k1637 in k1629 in loop in chicken.file#create-temporary-file in k744 in k741 in k738 in k735 */
static void C_ccall f_1643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1643,c,av);}
/* file.scm:326: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[83];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1657,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1663,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1663(t5,t1);}

/* loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void f_1663(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1663,2,t0,t1);}
a=C_alloc(9);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1703,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:341: tempdir */
f_1561(t4);}

/* k1667 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1669,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:347: file-exists? */
t3=*((C_word*)lf[8]+1);{
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

/* k1673 in k1667 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1675,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:348: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1663(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:349: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[87];
tp(4,av2);}}}

/* k1680 in k1673 in k1667 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1682(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1682,c,av);}
a=C_alloc(10);
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1693 in k1680 in k1673 in k1667 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1695,c,av);}
/* file.scm:352: ##sys#signal-hook */
t2=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[87];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1697 in k1680 in k1673 in k1667 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1699,c,av);}
/* file.scm:354: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[88];
av2[3]=t1;
tp(4,av2);}}

/* k1701 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1703,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1711,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1705 in k1701 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1707,c,av);}
/* file.scm:340: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
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

/* k1709 in k1701 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1711,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* file.scm:346: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t2;
av2[2]=stub438(C_SCHEME_UNDEFINED);
tp(3,av2);}}

/* k1713 in k1709 in k1701 in loop in chicken.file#create-temporary-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_1715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1715,c,av);}
/* file.scm:342: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[89];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1723,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=t4,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1729(t6,t1,t2);}

/* conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void f_1729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1729,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1744,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
/* file.scm:365: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}}

/* a1743 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1744,c,av);}
/* file.scm:365: chicken.pathname#decompose-pathname */
t2=*((C_word*)lf[34]+1);{
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

/* a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1750(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1750,c,av);}
a=C_alloc(13);
t5=(C_truep(t2)?t2:lf[91]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1904,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
/* file.scm:367: chicken.pathname#make-pathname */
t9=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* file.scm:367: chicken.pathname#make-pathname */
t9=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[102];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1757,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1828,a[2]=((C_word*)t0)[6],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
/* file.scm:368: scheme#call-with-current-continuation */
t4=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1764,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* file.scm:368: g492 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1767,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1769(t5,((C_word*)t0)[6],t1);}

/* loop in k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void f_1769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1769,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* file.scm:370: conc-loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1729(t4,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* file.scm:371: chicken.irregex#irregex-match */
t5=*((C_word*)lf[93]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1784 in loop in k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1786,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* file.scm:370: g478 */
t3=t2;
f_1790(t3,((C_word*)t0)[5],t1);}
else{
/* file.scm:375: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1769(t2,((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}

/* g478 in k1784 in loop in k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void f_1790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1790,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1798,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1810,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:373: chicken.irregex#irregex-match-substring */
t5=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1796 in g478 in k1784 in loop in k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1798,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:374: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1769(t3,t2,C_i_cdr(((C_word*)t0)[4]));}

/* k1800 in k1796 in g478 in k1784 in loop in k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1802,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1808 in g478 in k1784 in loop in k1765 in k1762 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1810,c,av);}
/* file.scm:373: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
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

/* a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1828,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1834,a[2]=t2,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* file.scm:368: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[98]+1);{
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

/* a1833 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1834,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1840,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* file.scm:368: k489 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1839 in a1833 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1840,c,av);}
t2=C_i_structurep(((C_word*)t0)[2],lf[94]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(C_i_memq(lf[95],t3))){
if(C_truep(C_i_memq(lf[96],t3))){
if(C_truep(C_i_memq(lf[0],t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:368: chicken.condition#signal */
t4=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:368: chicken.condition#signal */
t4=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:368: chicken.condition#signal */
t4=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:368: chicken.condition#signal */
t4=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* a1875 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1876,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[3],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1727 */
t5=t2;
f_1878(t5,t4);}

/* tmp1727 in a1875 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void f_1878(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1878,2,t0,t1);}
/* file.scm:368: directory */
t2=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* tmp2728 in a1875 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void f_1883(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1883,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1889,a[2]=t2,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* file.scm:368: k489 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1888 in tmp2728 in a1875 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1889,c,av);}{
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

/* k1898 in a1875 in a1827 in k1755 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1900,c,av);}
a=C_alloc(3);
/* tmp2728 */
t2=((C_word*)t0)[2];
f_1883(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k1902 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1904,c,av);}
/* file.scm:367: chicken.irregex#irregex */
t2=*((C_word*)lf[100]+1);{
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

/* k1906 in a1749 in conc-loop in chicken.file#glob in k744 in k741 in k738 in k735 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1908,c,av);}
/* file.scm:367: chicken.irregex#glob->sre */
t2=*((C_word*)lf[101]+1);{
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

/* chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1914,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1918,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2137,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* file.scm:380: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t4;
av2[2]=lf[111];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1918,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* file.scm:380: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t2;
av2[2]=lf[110];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
tp(5,av2);}}

/* k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1921,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1924,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2126,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* file.scm:380: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t2;
av2[2]=lf[109];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
tp(5,av2);}}

/* k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_1924,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* file.scm:380: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t2;
av2[2]=lf[108];
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
tp(5,av2);}}

/* k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1927,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* file.scm:380: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t2;
av2[2]=lf[41];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
tp(5,av2);}}

/* k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1930,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* file.scm:380: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[107]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t2;
av2[2]=lf[42];
av2[3]=((C_word*)t0)[8];
av2[4]=t3;
tp(5,av2);}}

/* k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1933(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_1933,c,av);}
a=C_alloc(17);
t2=C_i_check_string_2(((C_word*)t0)[2],lf[103]);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1939,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[8]))){
t6=t5;
f_1939(t6,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2103,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));}
else{
if(C_truep(C_fixnump(((C_word*)t0)[8]))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2111,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t7=t5;
f_1939(t7,t6);}
else{
t6=t5;
f_1939(t6,((C_word*)t0)[8]);}}}

/* k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void f_1939(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1939,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t3=t2;
f_1942(t3,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2094,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:395: chicken.irregex#irregex */
t4=*((C_word*)lf[100]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void f_1942(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_1942,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* file.scm:398: directory */
t3=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_1949,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1951,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1951(t5,((C_word*)t0)[8],((C_word*)t0)[9],t1,((C_word*)t0)[10]);}

/* loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void f_1951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_1951,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1964,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* file.scm:403: chicken.pathname#make-pathname */
t7=*((C_word*)lf[35]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1964,c,av);}
a=C_alloc(15);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* file.scm:405: directory-exists? */
t4=*((C_word*)lf[11]+1);{
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

/* k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_1973,c,av);}
a=C_alloc(14);
if(C_truep(t1)){
if(C_truep((C_truep(C_i_equalp(((C_word*)t0)[2],lf[104]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(((C_word*)t0)[2],lf[105]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* file.scm:406: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1951(t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* file.scm:181: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[103];
tp(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2078,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* file.scm:417: pproc */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1993 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1995,c,av);}
/* file.scm:408: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1996 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_1998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1998,c,av);}
if(C_truep(t1)){
/* file.scm:408: action */
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
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
/* file.scm:408: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1951(t2,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[5]);}}

/* k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2007(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2007,c,av);}
a=C_alloc(31);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2017,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2019,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2024,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2044,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp);
/* file.scm:412: ##sys#dynamic-wind */
t11=*((C_word*)lf[106]+1);{
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
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2054,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2057,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:416: pproc */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2015 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2017,c,av);}
/* file.scm:410: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* a2018 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2019,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2023 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2024,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2032,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:414: directory */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2030 in a2023 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2032,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* file.scm:415: pproc */
t4=((C_word*)t0)[7];{
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

/* k2034 in k2030 in a2023 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_2036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2036,c,av);}
/* file.scm:413: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2037 in k2030 in a2023 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 in ... */
static void C_ccall f_2039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2039,c,av);}
if(C_truep(t1)){
/* file.scm:415: action */
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
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
/* file.scm:413: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1951(t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[5]);}}

/* a2043 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2044,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2052 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2054,c,av);}
/* file.scm:416: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2055 in k2005 in k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2057,c,av);}
if(C_truep(t1)){
/* file.scm:416: action */
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
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
/* file.scm:416: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1951(t2,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[5]);}}

/* k2064 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2066,c,av);}
a=C_alloc(16);
t2=(C_truep(C_u_i_symbolic_linkp(t1))?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1998,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:408: pproc */
t5=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* file.scm:409: lproc */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k2076 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2078,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:417: action */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
/* file.scm:418: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k2083 in k2076 in k1971 in k1962 in loop in k1947 in k1940 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2085,c,av);}
/* file.scm:417: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2092 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2094,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_1942(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2095,a[2]=t1,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));}

/* f_2095 in k2092 in k1937 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2095,c,av);}
/* file.scm:396: chicken.irregex#irregex-match */
t3=*((C_word*)lf[93]+1);{
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

/* f_2103 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2103,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2111 in k1931 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2111,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2116 in k1928 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2117,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2119 in k1925 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2120,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2122 in k1922 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2123,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2125 in k1919 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2126,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2128 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2129,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2131,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2131 in a2128 in k1916 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2131,c,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2136 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2137,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2139,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2139 in a2136 in chicken.file#find-files in k744 in k741 in k738 in k735 */
static void C_ccall f_2139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2139,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k735 */
static void C_ccall f_737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_737,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k738 in k735 */
static void C_ccall f_740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_740,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k741 in k738 in k735 */
static void C_ccall f_743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_743,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k744 in k741 in k738 in k735 */
static void C_ccall f_746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(64,c,6)))){
C_save_and_reclaim((void *)f_746,c,av);}
a=C_alloc(64);
t2=C_mutate(&lf[2] /* (set! chicken.file#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_758,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! chicken.file#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_775,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file#directory-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[13] /* (set! chicken.file#test-access ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_799,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file#file-readable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_829,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file#file-writable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_835,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file#file-executable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_841,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file#directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_847,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file#create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file#delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1099,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[39]+1 /* (set! chicken.file#delete-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1191,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[46]+1 /* (set! chicken.file#delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1223,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[47]+1 /* (set! chicken.file#rename-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1235,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[52]+1 /* (set! chicken.file#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1298,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[64]+1 /* (set! chicken.file#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1428,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=lf[69];
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1561,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t19=C_mutate((C_word*)lf[79]+1 /* (set! chicken.file#create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1594,a[2]=t17,a[3]=t18,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t20=C_mutate((C_word*)lf[85]+1 /* (set! chicken.file#create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1657,a[2]=t17,a[3]=t18,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t21=C_mutate((C_word*)lf[90]+1 /* (set! chicken.file#glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1723,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file#find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t23=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* chicken.file#posix-error in k744 in k741 in k738 in k735 */
static void f_758(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_758,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_762,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* file.scm:118: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* k760 in chicken.file#posix-error in k744 in k741 in k738 in k735 */
static void C_ccall f_762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_762,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_773,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* file.scm:115: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub143(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k767 in k760 in chicken.file#posix-error in k744 in k741 in k738 in k735 */
static void C_ccall f_769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_769,c,av);}{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[3]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
av2[7]=((C_word*)t0)[6];
C_apply(8,av2);}}

/* k771 in k760 in chicken.file#posix-error in k744 in k741 in k738 in k735 */
static void C_ccall f_773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_773,c,av);}
/* file.scm:120: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[5];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.file#file-exists? in k744 in k741 in k738 in k735 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_775,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[9]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_785,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:127: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[9];
tp(6,av2);}}

/* k783 in chicken.file#file-exists? in k744 in k741 in k738 in k735 */
static void C_ccall f_785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_785,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#directory-exists? in k744 in k741 in k738 in k735 */
static void C_ccall f_787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_787,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[12]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_797,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:131: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[12];
tp(6,av2);}}

/* k795 in chicken.file#directory-exists? in k744 in k741 in k738 in k735 */
static void C_ccall f_797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_797,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#test-access in k744 in k741 in k738 in k735 */
static void f_799(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_799,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_807,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:142: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k805 in chicken.file#test-access in k744 in k741 in k738 in k735 */
static void C_ccall f_807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_807,c,av);}
a=C_alloc(5);
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:144: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k824 in k805 in chicken.file#test-access in k744 in k741 in k738 in k735 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_826,c,av);}
a=C_alloc(3);
t2=C_fix((C_word)EACCES);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:146: posix-error */
f_758(((C_word*)t0)[2],lf[14],((C_word*)t0)[3],lf[15],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* chicken.file#file-readable? in k744 in k741 in k738 in k735 */
static void C_ccall f_829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_829,c,av);}
/* file.scm:148: test-access */
f_799(t1,t2,C_fix((C_word)R_OK),lf[18]);}

/* chicken.file#file-writable? in k744 in k741 in k738 in k735 */
static void C_ccall f_835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_835,c,av);}
/* file.scm:149: test-access */
f_799(t1,t2,C_fix((C_word)W_OK),lf[20]);}

/* chicken.file#file-executable? in k744 in k741 in k738 in k735 */
static void C_ccall f_841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_841,c,av);}
/* file.scm:150: test-access */
f_799(t1,t2,C_fix((C_word)X_OK),lf[22]);}

/* chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_847,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_851,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* file.scm:155: chicken.process-context#current-directory */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_851(2,av2);}}}

/* k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_851(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_851,c,av);}
a=C_alloc(5);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t1,lf[24]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_866,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* file.scm:157: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t9;
av2[2]=C_fix(256);
tp(3,av2);}}

/* k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_866,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:158: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
tp(2,av2);}}

/* k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_869,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_872,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:159: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
tp(2,av2);}}

/* k870 in k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_872,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:162: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[24];
tp(4,av2);}}

/* k874 in k870 in k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_876(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_876,c,av);}
a=C_alloc(10);
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* file.scm:164: posix-error */
f_758(((C_word*)t0)[3],lf[14],lf[24],lf[25],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_890(t6,((C_word*)t0)[3]);}}

/* loop in k874 in k870 in k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void f_890(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_890,2,t0,t1);}
a=C_alloc(6);
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_block_size(((C_word*)t0)[4]);
t4=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_904,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* file.scm:170: ##sys#buffer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t4;
tp(5,av2);}}}

/* k902 in loop in k874 in k870 in k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_904(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_904,c,av);}
a=C_alloc(5);
t2=C_i_string_ref(t1,C_fix(0));
t3=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_916,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_make_character(46),t2);
if(C_truep(t6)){
t7=C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_916(t8,t7);}
else{
t8=C_eqp(C_make_character(46),t4);
if(C_truep(t8)){
t9=C_eqp(C_fix(2),((C_word*)t0)[2]);
t10=t5;
f_916(t10,(C_truep(t9)?t9:C_i_not(((C_word*)t0)[5])));}
else{
t9=t5;
f_916(t9,C_i_not(((C_word*)t0)[5]));}}}
else{
t7=t5;
f_916(t7,C_SCHEME_FALSE);}}

/* k914 in k902 in loop in k874 in k870 in k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void f_916(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_916,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:177: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_890(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_926,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:178: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_890(t3,t2);}}

/* k924 in k914 in k902 in loop in k874 in k870 in k867 in k864 in k849 in chicken.file#directory in k744 in k741 in k738 in k735 */
static void C_ccall f_926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_926,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_984(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_984,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[31]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_994,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(0),C_u_i_string_length(t2));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1000,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t7;
f_1000(2,av2);}}
else{
/* file.scm:191: file-exists? */
t9=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k992 in chicken.file#create-directory in k744 in k741 in k738 in k735 */
static void C_ccall f_994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_994,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_file_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("file"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_file_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(560))){
C_save(t1);
C_rereclaim2(560*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,112);
lf[0]=C_h_intern(&lf[0],4, C_text("file"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.file#"));
lf[3]=C_h_intern(&lf[3],23, C_text("##sys#signal-hook/errno"));
lf[4]=C_h_intern(&lf[4],20, C_text("scheme#string-append"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\055\040\000"));
lf[6]=C_h_intern(&lf[6],19, C_text("##sys#peek-c-string"));
lf[7]=C_h_intern(&lf[7],18, C_text("##sys#update-errno"));
lf[8]=C_h_intern(&lf[8],25, C_text("chicken.file#file-exists?"));
lf[9]=C_h_intern(&lf[9],12, C_text("file-exists?"));
lf[10]=C_h_intern(&lf[10],18, C_text("##sys#file-exists?"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file#directory-exists?"));
lf[12]=C_h_intern(&lf[12],17, C_text("directory-exists?"));
lf[14]=C_h_intern_kw(&lf[14],10, C_text("file-error"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\141\143\143\145\163\163\040\146\151\154\145\000"));
lf[16]=C_h_intern(&lf[16],19, C_text("##sys#make-c-string"));
lf[17]=C_h_intern(&lf[17],27, C_text("chicken.file#file-readable?"));
lf[18]=C_h_intern(&lf[18],14, C_text("file-readable?"));
lf[19]=C_h_intern(&lf[19],27, C_text("chicken.file#file-writable?"));
lf[20]=C_h_intern(&lf[20],14, C_text("file-writable?"));
lf[21]=C_h_intern(&lf[21],29, C_text("chicken.file#file-executable?"));
lf[22]=C_h_intern(&lf[22],16, C_text("file-executable?"));
lf[23]=C_h_intern(&lf[23],22, C_text("chicken.file#directory"));
lf[24]=C_h_intern(&lf[24],9, C_text("directory"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\157\160\145\156\040\144\151\162\145\143\164\157\162\171\000"));
lf[26]=C_h_intern(&lf[26],20, C_text("##sys#buffer->string"));
lf[27]=C_h_intern(&lf[27],18, C_text("##sys#make-pointer"));
lf[28]=C_h_intern(&lf[28],21, C_text("##sys#make-bytevector"));
lf[29]=C_h_intern(&lf[29],41, C_text("chicken.process-context#current-directory"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.file#create-directory"));
lf[31]=C_h_intern(&lf[31],16, C_text("create-directory"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\143\162\145\141\164\145\040\144\151\162\145\143\164\157\162\171\000"));
lf[33]=C_h_intern(&lf[33],35, C_text("chicken.pathname#pathname-directory"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.pathname#decompose-pathname"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.pathname#make-pathname"));
lf[36]=C_h_intern(&lf[36],29, C_text("chicken.file#delete-directory"));
lf[37]=C_h_intern(&lf[37],16, C_text("delete-directory"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\144\145\154\145\164\145\040\144\151\162\145\143\164\157\162\171\000"));
lf[39]=C_h_intern(&lf[39],24, C_text("chicken.file#delete-file"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.file#find-files"));
lf[41]=C_h_intern_kw(&lf[41],8, C_text("dotfiles"));
lf[42]=C_h_intern_kw(&lf[42],15, C_text("follow-symlinks"));
lf[43]=C_h_intern(&lf[43],11, C_text("delete-file"));
lf[44]=C_h_intern(&lf[44],19, C_text("##sys#string-append"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\144\145\154\145\164\145\040\146\151\154\145\040\055\040\000"));
lf[46]=C_h_intern(&lf[46],25, C_text("chicken.file#delete-file*"));
lf[47]=C_h_intern(&lf[47],24, C_text("chicken.file#rename-file"));
lf[48]=C_h_intern(&lf[48],11, C_text("rename-file"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\162\145\156\141\155\145\040\146\151\154\145\040\055\040\000"));
lf[50]=C_h_intern(&lf[50],11, C_text("##sys#error"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\145\167\146\151\154\145\040\145\170\151\163\164\163\040\142\165\164\040\143\154\157\142\142\145\162\040\151\163\040\146\141\154\163\145\000"));
lf[52]=C_h_intern(&lf[52],22, C_text("chicken.file#copy-file"));
lf[53]=C_h_intern(&lf[53],9, C_text("copy-file"));
lf[54]=C_h_intern(&lf[54],24, C_text("scheme#close-output-port"));
lf[55]=C_h_intern(&lf[55],23, C_text("scheme#close-input-port"));
lf[56]=C_h_intern(&lf[56],27, C_text("chicken.io#read-bytevector!"));
lf[57]=C_h_intern(&lf[57],27, C_text("chicken.io#write-bytevector"));
lf[58]=C_h_intern(&lf[58],23, C_text("scheme#open-output-file"));
lf[59]=C_h_intern_kw(&lf[59],6, C_text("binary"));
lf[60]=C_h_intern(&lf[60],22, C_text("scheme#open-input-file"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\145\167\146\151\154\145\040\145\170\151\163\164\163\040\142\165\164\040\143\154\157\142\142\145\162\040\151\163\040\146\141\154\163\145\000"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\143\157\160\171\040\144\151\162\145\143\164\157\162\151\145\163\000"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\151\156\166\141\154\151\144\040\142\154\157\143\153\163\151\172\145\040\055\040\156\157\164\040\141\040\160\157\163\151\164\151\166\145\040\151\156\164\145\147\145\162\000"));
lf[64]=C_h_intern(&lf[64],22, C_text("chicken.file#move-file"));
lf[65]=C_h_intern(&lf[65],9, C_text("move-file"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\145\167\146\151\154\145\040\145\170\151\163\164\163\040\142\165\164\040\143\154\157\142\142\145\162\040\151\163\040\146\141\154\163\145\000"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\155\157\166\145\040\144\151\162\145\143\164\157\162\151\145\163\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\151\156\166\141\154\151\144\040\142\154\157\143\153\163\151\172\145\040\055\040\156\157\164\040\141\040\160\157\163\151\164\151\166\145\040\151\156\164\145\147\145\162\000"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\164\145\155\160\000"));
lf[70]=C_h_intern(&lf[70],22, C_text("##sys#windows-platform"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\057\101\160\160\104\141\164\141\057\114\157\143\141\154\057\124\145\155\160\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[73]=C_h_intern(&lf[73],48, C_text("chicken.process-context#get-environment-variable"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\125\123\105\122\120\122\117\106\111\114\105\000"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\057\164\155\160\000"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\124\115\120\000"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\124\105\115\120\000"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\124\115\120\104\111\122\000"));
lf[79]=C_h_intern(&lf[79],34, C_text("chicken.file#create-temporary-file"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\164\155\160\000"));
lf[81]=C_h_intern(&lf[81],21, C_text("create-temporary-file"));
lf[82]=C_h_intern(&lf[82],28, C_text("scheme#call-with-output-file"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[84]=C_h_intern(&lf[84],20, C_text("##sys#number->string"));
lf[85]=C_h_intern(&lf[85],39, C_text("chicken.file#create-temporary-directory"));
lf[86]=C_h_intern(&lf[86],17, C_text("##sys#signal-hook"));
lf[87]=C_h_intern(&lf[87],26, C_text("create-temporary-directory"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\143\141\156\156\157\164\040\143\162\145\141\164\145\040\164\145\155\160\157\162\141\162\171\040\144\151\162\145\143\164\157\162\171\040\055\040\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[90]=C_h_intern(&lf[90],17, C_text("chicken.file#glob"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[92]=C_h_intern(&lf[92],39, C_text("chicken.irregex#irregex-match-substring"));
lf[93]=C_h_intern(&lf[93],29, C_text("chicken.irregex#irregex-match"));
lf[94]=C_h_intern(&lf[94],9, C_text("condition"));
lf[95]=C_h_intern(&lf[95],3, C_text("exn"));
lf[96]=C_h_intern(&lf[96],3, C_text("i/o"));
lf[97]=C_h_intern(&lf[97],24, C_text("chicken.condition#signal"));
lf[98]=C_h_intern(&lf[98],40, C_text("chicken.condition#with-exception-handler"));
lf[99]=C_h_intern(&lf[99],37, C_text("scheme#call-with-current-continuation"));
lf[100]=C_h_intern(&lf[100],23, C_text("chicken.irregex#irregex"));
lf[101]=C_h_intern(&lf[101],25, C_text("chicken.irregex#glob->sre"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\052\000"));
lf[103]=C_h_intern(&lf[103],10, C_text("find-files"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\056\000"));
lf[106]=C_h_intern(&lf[106],18, C_text("##sys#dynamic-wind"));
lf[107]=C_h_intern(&lf[107],17, C_text("##sys#get-keyword"));
lf[108]=C_h_intern_kw(&lf[108],5, C_text("limit"));
lf[109]=C_h_intern_kw(&lf[109],4, C_text("seed"));
lf[110]=C_h_intern_kw(&lf[110],6, C_text("action"));
lf[111]=C_h_intern_kw(&lf[111],4, C_text("test"));
C_register_lf2(lf,112,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_737,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[189] = {
{C_text("f_1000:file_2escm"),(void*)f_1000},
{C_text("f_1010:file_2escm"),(void*)f_1010},
{C_text("f_1012:file_2escm"),(void*)f_1012},
{C_text("f_1019:file_2escm"),(void*)f_1019},
{C_text("f_1022:file_2escm"),(void*)f_1022},
{C_text("f_1038:file_2escm"),(void*)f_1038},
{C_text("f_1045:file_2escm"),(void*)f_1045},
{C_text("f_1052:file_2escm"),(void*)f_1052},
{C_text("f_1054:file_2escm"),(void*)f_1054},
{C_text("f_1060:file_2escm"),(void*)f_1060},
{C_text("f_1083:file_2escm"),(void*)f_1083},
{C_text("f_1099:file_2escm"),(void*)f_1099},
{C_text("f_1105:file_2escm"),(void*)f_1105},
{C_text("f_1109:file_2escm"),(void*)f_1109},
{C_text("f_1128:file_2escm"),(void*)f_1128},
{C_text("f_1129:file_2escm"),(void*)f_1129},
{C_text("f_1142:file_2escm"),(void*)f_1142},
{C_text("f_1151:file_2escm"),(void*)f_1151},
{C_text("f_1154:file_2escm"),(void*)f_1154},
{C_text("f_1159:file_2escm"),(void*)f_1159},
{C_text("f_1169:file_2escm"),(void*)f_1169},
{C_text("f_1191:file_2escm"),(void*)f_1191},
{C_text("f_1204:file_2escm"),(void*)f_1204},
{C_text("f_1208:file_2escm"),(void*)f_1208},
{C_text("f_1212:file_2escm"),(void*)f_1212},
{C_text("f_1216:file_2escm"),(void*)f_1216},
{C_text("f_1221:file_2escm"),(void*)f_1221},
{C_text("f_1223:file_2escm"),(void*)f_1223},
{C_text("f_1230:file_2escm"),(void*)f_1230},
{C_text("f_1235:file_2escm"),(void*)f_1235},
{C_text("f_1248:file_2escm"),(void*)f_1248},
{C_text("f_1251:file_2escm"),(void*)f_1251},
{C_text("f_1261:file_2escm"),(void*)f_1261},
{C_text("f_1265:file_2escm"),(void*)f_1265},
{C_text("f_1269:file_2escm"),(void*)f_1269},
{C_text("f_1274:file_2escm"),(void*)f_1274},
{C_text("f_1278:file_2escm"),(void*)f_1278},
{C_text("f_1281:file_2escm"),(void*)f_1281},
{C_text("f_1298:file_2escm"),(void*)f_1298},
{C_text("f_1323:file_2escm"),(void*)f_1323},
{C_text("f_1326:file_2escm"),(void*)f_1326},
{C_text("f_1329:file_2escm"),(void*)f_1329},
{C_text("f_1332:file_2escm"),(void*)f_1332},
{C_text("f_1335:file_2escm"),(void*)f_1335},
{C_text("f_1338:file_2escm"),(void*)f_1338},
{C_text("f_1345:file_2escm"),(void*)f_1345},
{C_text("f_1347:file_2escm"),(void*)f_1347},
{C_text("f_1357:file_2escm"),(void*)f_1357},
{C_text("f_1360:file_2escm"),(void*)f_1360},
{C_text("f_1363:file_2escm"),(void*)f_1363},
{C_text("f_1370:file_2escm"),(void*)f_1370},
{C_text("f_1377:file_2escm"),(void*)f_1377},
{C_text("f_1389:file_2escm"),(void*)f_1389},
{C_text("f_1428:file_2escm"),(void*)f_1428},
{C_text("f_1453:file_2escm"),(void*)f_1453},
{C_text("f_1456:file_2escm"),(void*)f_1456},
{C_text("f_1459:file_2escm"),(void*)f_1459},
{C_text("f_1462:file_2escm"),(void*)f_1462},
{C_text("f_1465:file_2escm"),(void*)f_1465},
{C_text("f_1468:file_2escm"),(void*)f_1468},
{C_text("f_1475:file_2escm"),(void*)f_1475},
{C_text("f_1477:file_2escm"),(void*)f_1477},
{C_text("f_1487:file_2escm"),(void*)f_1487},
{C_text("f_1490:file_2escm"),(void*)f_1490},
{C_text("f_1493:file_2escm"),(void*)f_1493},
{C_text("f_1496:file_2escm"),(void*)f_1496},
{C_text("f_1503:file_2escm"),(void*)f_1503},
{C_text("f_1510:file_2escm"),(void*)f_1510},
{C_text("f_1522:file_2escm"),(void*)f_1522},
{C_text("f_1561:file_2escm"),(void*)f_1561},
{C_text("f_1565:file_2escm"),(void*)f_1565},
{C_text("f_1571:file_2escm"),(void*)f_1571},
{C_text("f_1577:file_2escm"),(void*)f_1577},
{C_text("f_1586:file_2escm"),(void*)f_1586},
{C_text("f_1594:file_2escm"),(void*)f_1594},
{C_text("f_1606:file_2escm"),(void*)f_1606},
{C_text("f_1612:file_2escm"),(void*)f_1612},
{C_text("f_1618:file_2escm"),(void*)f_1618},
{C_text("f_1626:file_2escm"),(void*)f_1626},
{C_text("f_1631:file_2escm"),(void*)f_1631},
{C_text("f_1635:file_2escm"),(void*)f_1635},
{C_text("f_1639:file_2escm"),(void*)f_1639},
{C_text("f_1643:file_2escm"),(void*)f_1643},
{C_text("f_1657:file_2escm"),(void*)f_1657},
{C_text("f_1663:file_2escm"),(void*)f_1663},
{C_text("f_1669:file_2escm"),(void*)f_1669},
{C_text("f_1675:file_2escm"),(void*)f_1675},
{C_text("f_1682:file_2escm"),(void*)f_1682},
{C_text("f_1695:file_2escm"),(void*)f_1695},
{C_text("f_1699:file_2escm"),(void*)f_1699},
{C_text("f_1703:file_2escm"),(void*)f_1703},
{C_text("f_1707:file_2escm"),(void*)f_1707},
{C_text("f_1711:file_2escm"),(void*)f_1711},
{C_text("f_1715:file_2escm"),(void*)f_1715},
{C_text("f_1723:file_2escm"),(void*)f_1723},
{C_text("f_1729:file_2escm"),(void*)f_1729},
{C_text("f_1744:file_2escm"),(void*)f_1744},
{C_text("f_1750:file_2escm"),(void*)f_1750},
{C_text("f_1757:file_2escm"),(void*)f_1757},
{C_text("f_1764:file_2escm"),(void*)f_1764},
{C_text("f_1767:file_2escm"),(void*)f_1767},
{C_text("f_1769:file_2escm"),(void*)f_1769},
{C_text("f_1786:file_2escm"),(void*)f_1786},
{C_text("f_1790:file_2escm"),(void*)f_1790},
{C_text("f_1798:file_2escm"),(void*)f_1798},
{C_text("f_1802:file_2escm"),(void*)f_1802},
{C_text("f_1810:file_2escm"),(void*)f_1810},
{C_text("f_1828:file_2escm"),(void*)f_1828},
{C_text("f_1834:file_2escm"),(void*)f_1834},
{C_text("f_1840:file_2escm"),(void*)f_1840},
{C_text("f_1876:file_2escm"),(void*)f_1876},
{C_text("f_1878:file_2escm"),(void*)f_1878},
{C_text("f_1883:file_2escm"),(void*)f_1883},
{C_text("f_1889:file_2escm"),(void*)f_1889},
{C_text("f_1900:file_2escm"),(void*)f_1900},
{C_text("f_1904:file_2escm"),(void*)f_1904},
{C_text("f_1908:file_2escm"),(void*)f_1908},
{C_text("f_1914:file_2escm"),(void*)f_1914},
{C_text("f_1918:file_2escm"),(void*)f_1918},
{C_text("f_1921:file_2escm"),(void*)f_1921},
{C_text("f_1924:file_2escm"),(void*)f_1924},
{C_text("f_1927:file_2escm"),(void*)f_1927},
{C_text("f_1930:file_2escm"),(void*)f_1930},
{C_text("f_1933:file_2escm"),(void*)f_1933},
{C_text("f_1939:file_2escm"),(void*)f_1939},
{C_text("f_1942:file_2escm"),(void*)f_1942},
{C_text("f_1949:file_2escm"),(void*)f_1949},
{C_text("f_1951:file_2escm"),(void*)f_1951},
{C_text("f_1964:file_2escm"),(void*)f_1964},
{C_text("f_1973:file_2escm"),(void*)f_1973},
{C_text("f_1995:file_2escm"),(void*)f_1995},
{C_text("f_1998:file_2escm"),(void*)f_1998},
{C_text("f_2007:file_2escm"),(void*)f_2007},
{C_text("f_2017:file_2escm"),(void*)f_2017},
{C_text("f_2019:file_2escm"),(void*)f_2019},
{C_text("f_2024:file_2escm"),(void*)f_2024},
{C_text("f_2032:file_2escm"),(void*)f_2032},
{C_text("f_2036:file_2escm"),(void*)f_2036},
{C_text("f_2039:file_2escm"),(void*)f_2039},
{C_text("f_2044:file_2escm"),(void*)f_2044},
{C_text("f_2054:file_2escm"),(void*)f_2054},
{C_text("f_2057:file_2escm"),(void*)f_2057},
{C_text("f_2066:file_2escm"),(void*)f_2066},
{C_text("f_2078:file_2escm"),(void*)f_2078},
{C_text("f_2085:file_2escm"),(void*)f_2085},
{C_text("f_2094:file_2escm"),(void*)f_2094},
{C_text("f_2095:file_2escm"),(void*)f_2095},
{C_text("f_2103:file_2escm"),(void*)f_2103},
{C_text("f_2111:file_2escm"),(void*)f_2111},
{C_text("f_2117:file_2escm"),(void*)f_2117},
{C_text("f_2120:file_2escm"),(void*)f_2120},
{C_text("f_2123:file_2escm"),(void*)f_2123},
{C_text("f_2126:file_2escm"),(void*)f_2126},
{C_text("f_2129:file_2escm"),(void*)f_2129},
{C_text("f_2131:file_2escm"),(void*)f_2131},
{C_text("f_2137:file_2escm"),(void*)f_2137},
{C_text("f_2139:file_2escm"),(void*)f_2139},
{C_text("f_737:file_2escm"),(void*)f_737},
{C_text("f_740:file_2escm"),(void*)f_740},
{C_text("f_743:file_2escm"),(void*)f_743},
{C_text("f_746:file_2escm"),(void*)f_746},
{C_text("f_758:file_2escm"),(void*)f_758},
{C_text("f_762:file_2escm"),(void*)f_762},
{C_text("f_769:file_2escm"),(void*)f_769},
{C_text("f_773:file_2escm"),(void*)f_773},
{C_text("f_775:file_2escm"),(void*)f_775},
{C_text("f_785:file_2escm"),(void*)f_785},
{C_text("f_787:file_2escm"),(void*)f_787},
{C_text("f_797:file_2escm"),(void*)f_797},
{C_text("f_799:file_2escm"),(void*)f_799},
{C_text("f_807:file_2escm"),(void*)f_807},
{C_text("f_826:file_2escm"),(void*)f_826},
{C_text("f_829:file_2escm"),(void*)f_829},
{C_text("f_835:file_2escm"),(void*)f_835},
{C_text("f_841:file_2escm"),(void*)f_841},
{C_text("f_847:file_2escm"),(void*)f_847},
{C_text("f_851:file_2escm"),(void*)f_851},
{C_text("f_866:file_2escm"),(void*)f_866},
{C_text("f_869:file_2escm"),(void*)f_869},
{C_text("f_872:file_2escm"),(void*)f_872},
{C_text("f_876:file_2escm"),(void*)f_876},
{C_text("f_890:file_2escm"),(void*)f_890},
{C_text("f_904:file_2escm"),(void*)f_904},
{C_text("f_916:file_2escm"),(void*)f_916},
{C_text("f_926:file_2escm"),(void*)f_926},
{C_text("f_984:file_2escm"),(void*)f_984},
{C_text("f_994:file_2escm"),(void*)f_994},
{C_text("toplevel:file_2escm"),(void*)C_file_toplevel},
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
o|hiding unexported module binding: chicken.file#d 
o|hiding unexported module binding: chicken.file#define-alias 
o|hiding unexported module binding: chicken.file#posix-error 
o|hiding unexported module binding: chicken.file#test-access 
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 22 
o|specializations:
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (scheme#cdr pair)
o|  2 (scheme#number->string * *)
o|  2 (scheme#integer? *)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (scheme#string-length string)
o|  1 (scheme#string-ref string fixnum)
(o e)|safe calls: 199 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-file 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-directory 
o|safe globals: (chicken.file#find-files chicken.file#glob chicken.file#create-temporary-directory chicken.file#create-temporary-file chicken.file#move-file chicken.file#copy-file chicken.file#rename-file chicken.file#delete-file* chicken.file#delete-file chicken.file#delete-directory chicken.file#create-directory chicken.file#directory chicken.file#file-executable? chicken.file#file-writable? chicken.file#file-readable? chicken.file#test-access chicken.file#directory-exists? chicken.file#file-exists? chicken.file#posix-error) 
o|merged explicitly consed rest parameter: args150 
o|contracted procedure: "(file.scm:120) strerror140" 
o|inlining procedure: k780 
o|inlining procedure: k780 
o|inlining procedure: k792 
o|inlining procedure: k792 
o|inlining procedure: k811 
o|inlining procedure: k811 
o|consed rest parameter at call site: "(file.scm:146) chicken.file#posix-error" 4 
o|inlining procedure: k877 
o|consed rest parameter at call site: "(file.scm:164) chicken.file#posix-error" 4 
o|inlining procedure: k877 
o|inlining procedure: k892 
o|inlining procedure: k892 
o|inlining procedure: k933 
o|inlining procedure: k933 
o|substituted constant variable: a955 
o|inlining procedure: k992 
o|inlining procedure: k992 
o|inlining procedure: k1014 
o|contracted procedure: "(file.scm:197) g232233" 
o|inlining procedure: k1025 
o|inlining procedure: k1025 
o|consed rest parameter at call site: "(file.scm:185) chicken.file#posix-error" 4 
o|inlining procedure: k1014 
o|inlining procedure: k1062 
o|inlining procedure: k1062 
o|contracted procedure: "(file.scm:198) g250251" 
o|inlining procedure: k1070 
o|inlining procedure: k1070 
o|consed rest parameter at call site: "(file.scm:185) chicken.file#posix-error" 4 
o|inlining procedure: k1110 
o|inlining procedure: k1110 
o|consed rest parameter at call site: "(file.scm:206) chicken.file#posix-error" 4 
o|inlining procedure: k1131 
o|propagated global variable: r11322167 chicken.file#delete-file 
o|inlining procedure: k1131 
o|contracted procedure: "(file.scm:215) g291292" 
o|inlining procedure: k1123 
o|inlining procedure: k1161 
o|inlining procedure: k1161 
o|inlining procedure: k1123 
o|inlining procedure: k1196 
o|inlining procedure: k1196 
o|inlining procedure: k1225 
o|inlining procedure: k1225 
o|inlining procedure: k1249 
o|inlining procedure: k1249 
o|inlining procedure: k1349 
o|inlining procedure: k1349 
o|inlining procedure: k1479 
o|inlining procedure: k1479 
o|inlining procedure: k1566 
o|inlining procedure: k1566 
o|inlining procedure: k1578 
o|inlining procedure: k1578 
o|inlining procedure: k1587 
o|inlining procedure: k1587 
o|inlining procedure: k1613 
o|inlining procedure: k1613 
o|contracted procedure: "(file.scm:330) getpid428" 
o|substituted constant variable: a1649 
o|inlining procedure: k1670 
o|inlining procedure: k1670 
o|contracted procedure: "(file.scm:346) getpid437" 
o|substituted constant variable: a1721 
o|inlining procedure: k1731 
o|inlining procedure: k1731 
o|inlining procedure: k1771 
o|inlining procedure: k1771 
o|inlining procedure: k1845 
o|inlining procedure: k1845 
o|inlining procedure: k1854 
o|inlining procedure: k1854 
o|merged explicitly consed rest parameter: args490505 
o|consed rest parameter at call site: tmp2728 1 
o|inlining procedure: k1910 
o|inlining procedure: k1910 
o|inlining procedure: k1953 
o|inlining procedure: k1953 
o|inlining procedure: k1974 
o|inlining procedure: k1974 
o|inlining procedure: k1993 
o|inlining procedure: k1993 
o|inlining procedure: k2002 
o|inlining procedure: k2034 
o|inlining procedure: k2034 
o|inlining procedure: k2002 
o|inlining procedure: k2052 
o|inlining procedure: k2052 
o|contracted procedure: "(file.scm:407) g550551" 
o|inlining procedure: k2073 
o|inlining procedure: k2073 
o|inlining procedure: k2105 
o|inlining procedure: k2105 
o|replaced variables: 400 
o|removed binding forms: 97 
o|substituted constant variable: r7812142 
o|substituted constant variable: r7932144 
o|substituted constant variable: r8932149 
o|substituted constant variable: loc234 
o|substituted constant variable: loc234 
o|substituted constant variable: loc252 
o|substituted constant variable: loc252 
o|propagated global variable: g2852862168 chicken.file#delete-file 
o|inlining procedure: k1131 
o|inlining procedure: k1131 
o|propagated global variable: r11322250 chicken.file#delete-file 
o|propagated global variable: r11322250 chicken.file#delete-file 
o|substituted constant variable: loc294 
o|converted assignments to bindings: (rmdir268) 
o|substituted constant variable: r12262184 
o|substituted constant variable: r15882198 
o|substituted constant variable: r17322203 
o|substituted constant variable: r18462207 
o|substituted constant variable: r18552210 
o|substituted constant variable: r19112213 
o|substituted constant variable: r19112213 
o|substituted constant variable: loc553 
o|converted assignments to bindings: (tempdir405) 
o|simplifications: ((let . 2)) 
o|replaced variables: 37 
o|removed binding forms: 294 
o|inlining procedure: k936 
o|inlining procedure: k992 
o|inlining procedure: k1279 
o|inlining procedure: k1375 
o|inlining procedure: k1393 
o|inlining procedure: k1508 
o|inlining procedure: k1526 
o|inlining procedure: k1645 
o|inlining procedure: k1717 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|inlining procedure: k1848 
o|inlining procedure: k2067 
o|replaced variables: 1 
o|removed binding forms: 53 
o|substituted constant variable: r9372287 
o|substituted constant variable: r9372287 
o|contracted procedure: k1143 
o|substituted constant variable: r12802295 
o|substituted constant variable: r13762298 
o|substituted constant variable: r13942299 
o|substituted constant variable: r15092302 
o|substituted constant variable: r15272303 
o|substituted constant variable: r18492312 
o|substituted constant variable: r18492314 
o|substituted constant variable: r18492316 
o|simplifications: ((let . 2)) 
o|removed binding forms: 9 
o|removed conditional forms: 9 
o|removed binding forms: 10 
o|simplifications: ((if . 22) (let . 10) (##core#call . 112)) 
o|  call simplifications:
o|    chicken.base#fixnum?
o|    chicken.fixnum#fx<
o|    scheme#procedure?
o|    scheme#member
o|    ##sys#apply
o|    ##sys#structure?
o|    scheme#memv	3
o|    ##sys#check-number	2
o|    scheme#>	2
o|    chicken.fixnum#fx+	3
o|    scheme#pair?	2
o|    ##sys#slot	5
o|    ##sys#call-with-values	2
o|    scheme#car	12
o|    scheme#null?	18
o|    scheme#cdr	8
o|    ##sys#null-pointer?	2
o|    ##sys#size
o|    scheme#string-ref
o|    chicken.fixnum#fx>
o|    scheme#eq?	6
o|    scheme#not	10
o|    scheme#cons	3
o|    chicken.fixnum#fx=	8
o|    ##sys#check-string	15
o|    ##sys#foreign-fixnum-argument
o|    scheme#apply
o|contracted procedure: k755 
o|contracted procedure: k777 
o|contracted procedure: k789 
o|contracted procedure: k801 
o|contracted procedure: k808 
o|contracted procedure: k817 
o|contracted procedure: k968 
o|contracted procedure: k852 
o|contracted procedure: k962 
o|contracted procedure: k855 
o|contracted procedure: k956 
o|contracted procedure: k858 
o|contracted procedure: k861 
o|contracted procedure: k880 
o|contracted procedure: k895 
o|contracted procedure: k899 
o|contracted procedure: k905 
o|contracted procedure: k951 
o|contracted procedure: k908 
o|contracted procedure: k927 
o|contracted procedure: k930 
o|contracted procedure: k945 
o|contracted procedure: k936 
o|contracted procedure: k974 
o|contracted procedure: k1092 
o|contracted procedure: k986 
o|contracted procedure: k989 
o|contracted procedure: k995 
o|contracted procedure: k1028 
o|contracted procedure: k1073 
o|contracted procedure: k1184 
o|contracted procedure: k1101 
o|contracted procedure: k1113 
o|contracted procedure: k1120 
o|contracted procedure: k1164 
o|contracted procedure: k1174 
o|contracted procedure: k1178 
o|contracted procedure: k1193 
o|contracted procedure: k1199 
o|contracted procedure: k1291 
o|contracted procedure: k1237 
o|contracted procedure: k1240 
o|contracted procedure: k1243 
o|contracted procedure: k1252 
o|contracted procedure: k1285 
o|contracted procedure: k1421 
o|contracted procedure: k1300 
o|contracted procedure: k1415 
o|contracted procedure: k1303 
o|contracted procedure: k1409 
o|contracted procedure: k1306 
o|contracted procedure: k1403 
o|contracted procedure: k1309 
o|contracted procedure: k1312 
o|contracted procedure: k1315 
o|contracted procedure: k1318 
o|contracted procedure: k1352 
o|contracted procedure: k1372 
o|contracted procedure: k1381 
o|contracted procedure: k1393 
o|substituted constant variable: g2392 
o|contracted procedure: k1554 
o|contracted procedure: k1430 
o|contracted procedure: k1548 
o|contracted procedure: k1433 
o|contracted procedure: k1542 
o|contracted procedure: k1436 
o|contracted procedure: k1536 
o|contracted procedure: k1439 
o|contracted procedure: k1442 
o|contracted procedure: k1445 
o|contracted procedure: k1448 
o|contracted procedure: k1482 
o|contracted procedure: k1505 
o|contracted procedure: k1514 
o|contracted procedure: k1526 
o|substituted constant variable: g2396 
o|contracted procedure: k1650 
o|contracted procedure: k1596 
o|contracted procedure: k1599 
o|contracted procedure: k1686 
o|contracted procedure: k1734 
o|contracted procedure: k1737 
o|contracted procedure: k1752 
o|contracted procedure: k1824 
o|contracted procedure: k1774 
o|contracted procedure: k1781 
o|contracted procedure: k1804 
o|contracted procedure: k1820 
o|contracted procedure: k1869 
o|contracted procedure: k1842 
o|contracted procedure: k1857 
o|contracted procedure: k1863 
o|contracted procedure: k1848 
o|contracted procedure: k1934 
o|contracted procedure: k1956 
o|contracted procedure: k1959 
o|contracted procedure: k1965 
o|contracted procedure: k1977 
o|contracted procedure: k1986 
o|contracted procedure: k2012 
o|contracted procedure: k2089 
o|contracted procedure: k2100 
o|contracted procedure: k2108 
o|simplifications: ((if . 1) (let . 26)) 
o|replaced variables: 2 
o|removed binding forms: 102 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest218220 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest218220 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest260262 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest260262 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest314317 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest314317 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest332335 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest332335 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest332335 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest332335 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest368371 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest368371 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest368371 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest368371 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest419420 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest419420 0 
o|replaced variables: 2 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1304 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1304 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1304 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1304 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1434 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1434 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1434 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1434 1 
o|removed binding forms: 1 
o|removed binding forms: 4 
o|customizable procedures: (k1937 k1940 loop534 tmp1727 tmp2728 g478479 loop470 conc-loop447 loop435 tempdir405 loop426 loop387 loop351 g275282 for-each-loop274295 rmdir268 k1017 loop229 k914 loop195 chicken.file#test-access chicken.file#posix-error) 
o|calls to known targets: 71 
o|unused rest argument: rest218220 f_984 
o|unused rest argument: rest260262 f_1099 
o|unused rest argument: rest314317 f_1235 
o|unused rest argument: rest332335 f_1298 
o|unused rest argument: rest368371 f_1428 
o|unused rest argument: rest419420 f_1594 
o|unused rest argument: _529 f_2103 
o|unused rest argument: _530 f_2111 
o|unused rest argument: _515 f_2139 
o|fast box initializations: 10 
o|fast global references: 8 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1105 
o|dropping unused closure argument: f_1561 
o|dropping unused closure argument: f_758 
o|dropping unused closure argument: f_799 
*/
/* end of file */
