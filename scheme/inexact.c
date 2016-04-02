/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.5 (Pre-release)
 **
 **/

#define closcall1(td,clo,a1) if (type_of(clo) == cons_tag || prim(clo)) { Cyc_apply(td,0, (closure)(a1), clo); } else { ((clo)->fn)(td,1,clo,a1);}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,clo,buf,1); return; \
 } else {closcall1(td,(closure) (clo),a1); return;}}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,clo,a1,a2) if (type_of(clo) == cons_tag || prim(clo)) { Cyc_apply(td,1, (closure)(a1), clo,a2); } else { ((clo)->fn)(td,2,clo,a1,a2);}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,clo,buf,2); return; \
 } else {closcall2(td,(closure) (clo),a1,a2); return;}}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemeinexact_scheme_inexact = nil;
object __glo_tan_scheme_inexact = nil;
object __glo_sqrt_scheme_inexact = nil;
object __glo_sin_scheme_inexact = nil;
object __glo_c_91log_scheme_inexact = nil;
object __glo_log_scheme_inexact = nil;
object __glo_exp_scheme_inexact = nil;
object __glo_cos_scheme_inexact = nil;
object __glo_atan_scheme_inexact = nil;
object __glo_asin_scheme_inexact = nil;
object __glo_acos_scheme_inexact = nil;
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
return_closcall1(data,  k_736,  obj_int2obj(0));; 
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
  return_closcall2(data,  __glo_c_91log_scheme_inexact,  ((closureN)self_7314)->elts[0], ((closureN)self_7314)->elts[1]);
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

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7332, ((closureN)self_7315)->elts[1]);; 
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

return_closcall2(data,  __glo_c_91log_scheme_inexact,  &c_7334, ((closureN)self_7316)->elts[1]);; 
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

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  mclosure0(c_7352, (function_type)__lambda_14);c_7352.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_7352; 
  mclosure0(c_7351, (function_type)__lambda_13);c_7351.num_args = 1; 
  __glo_tan_scheme_inexact = &c_7351; 
  mclosure0(c_7350, (function_type)__lambda_12);c_7350.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_7350; 
  mclosure0(c_7349, (function_type)__lambda_11);c_7349.num_args = 1; 
  __glo_sin_scheme_inexact = &c_7349; 
  mclosure0(c_7348, (function_type)__lambda_10);c_7348.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_7348; 
  mclosure0(c_7323, (function_type)__lambda_9);c_7323.num_args = 1; 
  __glo_log_scheme_inexact = &c_7323; 
  mclosure0(c_7322, (function_type)__lambda_4);c_7322.num_args = 1; 
  __glo_exp_scheme_inexact = &c_7322; 
  mclosure0(c_7321, (function_type)__lambda_3);c_7321.num_args = 1; 
  __glo_cos_scheme_inexact = &c_7321; 
  mclosure0(c_7320, (function_type)__lambda_2);c_7320.num_args = 1; 
  __glo_atan_scheme_inexact = &c_7320; 
  mclosure0(c_7319, (function_type)__lambda_1);c_7319.num_args = 1; 
  __glo_asin_scheme_inexact = &c_7319; 
  mclosure0(c_7318, (function_type)__lambda_0);c_7318.num_args = 1; 
  __glo_acos_scheme_inexact = &c_7318; 

  make_cvar(cvar_7354, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_cons(pair_7355, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7354);
  make_cvar(cvar_7356, (object *)&__glo_tan_scheme_inexact);make_cons(pair_7357, find_or_add_symbol("tan"), &cvar_7356);
  make_cvar(cvar_7358, (object *)&__glo_sqrt_scheme_inexact);make_cons(pair_7359, find_or_add_symbol("sqrt"), &cvar_7358);
  make_cvar(cvar_7360, (object *)&__glo_sin_scheme_inexact);make_cons(pair_7361, find_or_add_symbol("sin"), &cvar_7360);
  make_cvar(cvar_7362, (object *)&__glo_c_91log_scheme_inexact);make_cons(pair_7363, find_or_add_symbol("c-log"), &cvar_7362);
  make_cvar(cvar_7364, (object *)&__glo_log_scheme_inexact);make_cons(pair_7365, find_or_add_symbol("log"), &cvar_7364);
  make_cvar(cvar_7366, (object *)&__glo_exp_scheme_inexact);make_cons(pair_7367, find_or_add_symbol("exp"), &cvar_7366);
  make_cvar(cvar_7368, (object *)&__glo_cos_scheme_inexact);make_cons(pair_7369, find_or_add_symbol("cos"), &cvar_7368);
  make_cvar(cvar_7370, (object *)&__glo_atan_scheme_inexact);make_cons(pair_7371, find_or_add_symbol("atan"), &cvar_7370);
  make_cvar(cvar_7372, (object *)&__glo_asin_scheme_inexact);make_cons(pair_7373, find_or_add_symbol("asin"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo_acos_scheme_inexact);make_cons(pair_7375, find_or_add_symbol("acos"), &cvar_7374);
make_cons(c_7376, &pair_7355,Cyc_global_variables);
make_cons(c_7377, &pair_7357, &c_7376);
make_cons(c_7378, &pair_7359, &c_7377);
make_cons(c_7379, &pair_7361, &c_7378);
make_cons(c_7380, &pair_7363, &c_7379);
make_cons(c_7381, &pair_7365, &c_7380);
make_cons(c_7382, &pair_7367, &c_7381);
make_cons(c_7383, &pair_7369, &c_7382);
make_cons(c_7384, &pair_7371, &c_7383);
make_cons(c_7385, &pair_7373, &c_7384);
make_cons(c_7386, &pair_7375, &c_7385);
Cyc_global_variables = &c_7386;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
