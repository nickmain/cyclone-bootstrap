/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.4 (Pre-release)
 **
 **/

#define closcall1(td,cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,0, (closure)(a1), cfn); } else { ((cfn)->fn)(td,1,cfn,a1);}
/* Check for GC, then call given continuation closure */
#define return_closcall1(td,cfn,a1) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,cfn,buf,1); return; \
 } else {closcall1(td,(closure) (cfn),a1); return;}}

/* Check for GC, then call C function directly */
#define return_direct1(td,_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,1, (closure)(a1), cfn,a2); } else { ((cfn)->fn)(td,2,cfn,a1,a2);}
/* Check for GC, then call given continuation closure */
#define return_closcall2(td,cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,cfn,buf,2); return; \
 } else {closcall2(td,(closure) (cfn),a1,a2); return;}}

/* Check for GC, then call C function directly */
#define return_direct2(td,_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemeinexact = nil;
object __glo_tan = nil;
object __glo_sqrt = nil;
object __glo_sin = nil;
object __glo_c_91log = nil;
object __glo_log = nil;
object __glo_exp = nil;
object __glo_cos = nil;
object __glo_atan = nil;
object __glo_asin = nil;
object __glo_acos = nil;
#include "cyclone/runtime.h"
static void __lambda_14(void *data, int argc, closure _,object k_736) ;
static void __lambda_13(void *data, int argc, closure _, object k, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static void __lambda_11(void *data, int argc, closure _, object k, object z) ;
static void __lambda_10(void *data, int argc, closure _, object k, object z) ;
static void __lambda_9(void *data, int argc, closure _,object k_739, object z1_732, object z2_731_raw, ...) ;
static void __lambda_8(void *data, int argc, object self_7314, object r_7310) ;
static void __lambda_7(void *data, int argc, object self_7315, object z2_85_733) ;
static void __lambda_6(void *data, int argc, object self_7316, object r_7312) ;
static void __lambda_5(void *data, int argc, object self_7317, object r_7313) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _, object k, object z) ;
static void __lambda_2(void *data, int argc, closure _, object k, object z) ;
static void __lambda_1(void *data, int argc, closure _, object k, object z) ;
static void __lambda_0(void *data, int argc, closure _, object k, object z) ;

static void __lambda_14(void *data, int argc, closure _,object k_736) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");

make_int(c_7354, 0);
return_closcall1(data,  k_736,  &c_7354);; 
}

static void __lambda_13(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static void __lambda_11(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static void __lambda_10(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_9(void *data, int argc, closure _,object k_739, object z1_732, object z2_731_raw, ...) {
load_varargs(z2_731, z2_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");

closureN_type c_7325;
c_7325.hdr.mark = gc_color_red;
 c_7325.hdr.grayed = 0;
c_7325.tag = closureN_tag;
 c_7325.fn = (function_type)__lambda_8;
c_7325.num_args = 1;
c_7325.num_elt = 3;
c_7325.elts = (object *)alloca(sizeof(object) * 3);
c_7325.elts[0] = k_739;
c_7325.elts[1] = z1_732;
c_7325.elts[2] = z2_731;

return_closcall1(data,(closure)&c_7325,  Cyc_is_null(z2_731));; 
}

static void __lambda_8(void *data, int argc, object self_7314, object r_7310) {
  if( !eq(boolean_f, r_7310) ){ 
  return_closcall2(data,  __glo_c_91log,  ((closureN)self_7314)->elts[0], ((closureN)self_7314)->elts[1]);
} else { 
  
closureN_type c_7330;
c_7330.hdr.mark = gc_color_red;
 c_7330.hdr.grayed = 0;
c_7330.tag = closureN_tag;
 c_7330.fn = (function_type)__lambda_7;
c_7330.num_args = 1;
c_7330.num_elt = 2;
c_7330.elts = (object *)alloca(sizeof(object) * 2);
c_7330.elts[0] = ((closureN)self_7314)->elts[0];
c_7330.elts[1] = ((closureN)self_7314)->elts[1];

return_closcall1(data,(closure)&c_7330,  car(((closureN)self_7314)->elts[2]));}
; 
}

static void __lambda_7(void *data, int argc, object self_7315, object z2_85_733) {
  
closureN_type c_7332;
c_7332.hdr.mark = gc_color_red;
 c_7332.hdr.grayed = 0;
c_7332.tag = closureN_tag;
 c_7332.fn = (function_type)__lambda_6;
c_7332.num_args = 1;
c_7332.num_elt = 2;
c_7332.elts = (object *)alloca(sizeof(object) * 2);
c_7332.elts[0] = ((closureN)self_7315)->elts[0];
c_7332.elts[1] = z2_85_733;

return_closcall2(data,  __glo_c_91log,  &c_7332, ((closureN)self_7315)->elts[1]);; 
}

static void __lambda_6(void *data, int argc, object self_7316, object r_7312) {
  
closureN_type c_7334;
c_7334.hdr.mark = gc_color_red;
 c_7334.hdr.grayed = 0;
c_7334.tag = closureN_tag;
 c_7334.fn = (function_type)__lambda_5;
c_7334.num_args = 1;
c_7334.num_elt = 2;
c_7334.elts = (object *)alloca(sizeof(object) * 2);
c_7334.elts[0] = ((closureN)self_7316)->elts[0];
c_7334.elts[1] = r_7312;

return_closcall2(data,  __glo_c_91log,  &c_7334, ((closureN)self_7316)->elts[1]);; 
}

static void __lambda_5(void *data, int argc, object self_7317, object r_7313) {
  
object c_7339 = Cyc_div(data,  ((closureN)self_7317)->elts[0],2,((closureN)self_7317)->elts[1], r_7313);
return_closcall1(data,  ((closureN)self_7317)->elts[0],  c_7339);; 
}

static void __lambda_4(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static void __lambda_3(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static void __lambda_2(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static void __lambda_1(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static void __lambda_0(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemeinexact);
  add_global((object *) &__glo_tan);
  add_global((object *) &__glo_sqrt);
  add_global((object *) &__glo_sin);
  add_global((object *) &__glo_c_91log);
  add_global((object *) &__glo_log);
  add_global((object *) &__glo_exp);
  add_global((object *) &__glo_cos);
  add_global((object *) &__glo_atan);
  add_global((object *) &__glo_asin);
  add_global((object *) &__glo_acos);
  mclosure0(c_7352, (function_type)__lambda_14);c_7352.num_args = 0; 
  __glo_lib_91init_117schemeinexact = &c_7352; 
  mclosure0(c_7351, (function_type)__lambda_13);c_7351.num_args = 1; 
  __glo_tan = &c_7351; 
  mclosure0(c_7350, (function_type)__lambda_12);c_7350.num_args = 1; 
  __glo_sqrt = &c_7350; 
  mclosure0(c_7349, (function_type)__lambda_11);c_7349.num_args = 1; 
  __glo_sin = &c_7349; 
  mclosure0(c_7348, (function_type)__lambda_10);c_7348.num_args = 1; 
  __glo_c_91log = &c_7348; 
  mclosure0(c_7323, (function_type)__lambda_9);c_7323.num_args = 1; 
  __glo_log = &c_7323; 
  mclosure0(c_7322, (function_type)__lambda_4);c_7322.num_args = 1; 
  __glo_exp = &c_7322; 
  mclosure0(c_7321, (function_type)__lambda_3);c_7321.num_args = 1; 
  __glo_cos = &c_7321; 
  mclosure0(c_7320, (function_type)__lambda_2);c_7320.num_args = 1; 
  __glo_atan = &c_7320; 
  mclosure0(c_7319, (function_type)__lambda_1);c_7319.num_args = 1; 
  __glo_asin = &c_7319; 
  mclosure0(c_7318, (function_type)__lambda_0);c_7318.num_args = 1; 
  __glo_acos = &c_7318; 

  make_cvar(cvar_7355, (object *)&__glo_lib_91init_117schemeinexact);make_cons(pair_7356, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7355);
  make_cvar(cvar_7357, (object *)&__glo_tan);make_cons(pair_7358, find_or_add_symbol("tan"), &cvar_7357);
  make_cvar(cvar_7359, (object *)&__glo_sqrt);make_cons(pair_7360, find_or_add_symbol("sqrt"), &cvar_7359);
  make_cvar(cvar_7361, (object *)&__glo_sin);make_cons(pair_7362, find_or_add_symbol("sin"), &cvar_7361);
  make_cvar(cvar_7363, (object *)&__glo_c_91log);make_cons(pair_7364, find_or_add_symbol("c-log"), &cvar_7363);
  make_cvar(cvar_7365, (object *)&__glo_log);make_cons(pair_7366, find_or_add_symbol("log"), &cvar_7365);
  make_cvar(cvar_7367, (object *)&__glo_exp);make_cons(pair_7368, find_or_add_symbol("exp"), &cvar_7367);
  make_cvar(cvar_7369, (object *)&__glo_cos);make_cons(pair_7370, find_or_add_symbol("cos"), &cvar_7369);
  make_cvar(cvar_7371, (object *)&__glo_atan);make_cons(pair_7372, find_or_add_symbol("atan"), &cvar_7371);
  make_cvar(cvar_7373, (object *)&__glo_asin);make_cons(pair_7374, find_or_add_symbol("asin"), &cvar_7373);
  make_cvar(cvar_7375, (object *)&__glo_acos);make_cons(pair_7376, find_or_add_symbol("acos"), &cvar_7375);
make_cons(c_7377, &pair_7356,Cyc_global_variables);
make_cons(c_7378, &pair_7358, &c_7377);
make_cons(c_7379, &pair_7360, &c_7378);
make_cons(c_7380, &pair_7362, &c_7379);
make_cons(c_7381, &pair_7364, &c_7380);
make_cons(c_7382, &pair_7366, &c_7381);
make_cons(c_7383, &pair_7368, &c_7382);
make_cons(c_7384, &pair_7370, &c_7383);
make_cons(c_7385, &pair_7372, &c_7384);
make_cons(c_7386, &pair_7374, &c_7385);
make_cons(c_7387, &pair_7376, &c_7386);
Cyc_global_variables = &c_7387;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemeinexact)->fn)(data, 1, cont, cont);
}
