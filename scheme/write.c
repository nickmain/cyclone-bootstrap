/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.5 (Pre-release)
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
object __glo_lib_91init_117schemewrite_scheme_write = nil;
object __glo_write_scheme_write = nil;
object __glo_display_scheme_write = nil;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
#include "cyclone/runtime.h"
static void __lambda_8(void *data, int argc, closure _,object k_737) ;
static void __lambda_7(void *data, int argc, closure _,object k_7310, object obj_732, object port_731_raw, ...) ;
static void __lambda_6(void *data, int argc, object self_7320, object r_7311) ;
static void __lambda_5(void *data, int argc, object self_7321, object r_7313) ;
static void __lambda_4(void *data, int argc, object self_7322, object r_7312) ;
static void __lambda_3(void *data, int argc, closure _,object k_7316, object obj_734, object port_733_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7323, object r_7317) ;
static void __lambda_1(void *data, int argc, object self_7324, object r_7319) ;
static void __lambda_0(void *data, int argc, object self_7325, object r_7318) ;

static void __lambda_8(void *data, int argc, closure _,object k_737) {
  Cyc_st_add(data, "scheme/write.sld:lib-init:schemewrite");
return_closcall1(data,  k_737,  obj_int2obj(0));; 
}

static void __lambda_7(void *data, int argc, closure _,object k_7310, object obj_732, object port_731_raw, ...) {
load_varargs(port_731, port_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/write.sld:write");

closureN_type c_7350;
c_7350.hdr.mark = gc_color_red;
 c_7350.hdr.grayed = 0;
c_7350.tag = closureN_tag;
 c_7350.fn = (function_type)__lambda_6;
c_7350.num_args = 1;
c_7350.num_elt = 3;
c_7350.elts = (object *)alloca(sizeof(object) * 3);
c_7350.elts[0] = k_7310;
c_7350.elts[1] = obj_732;
c_7350.elts[2] = port_731;

return_closcall1(data,(closure)&c_7350,  Cyc_is_null(port_731));; 
}

static void __lambda_6(void *data, int argc, object self_7320, object r_7311) {
  if( !eq(boolean_f, r_7311) ){ 
  
closureN_type c_7352;
c_7352.hdr.mark = gc_color_red;
 c_7352.hdr.grayed = 0;
c_7352.tag = closureN_tag;
 c_7352.fn = (function_type)__lambda_4;
c_7352.num_args = 1;
c_7352.num_elt = 2;
c_7352.elts = (object *)alloca(sizeof(object) * 2);
c_7352.elts[0] = ((closureN)self_7320)->elts[0];
c_7352.elts[1] = ((closureN)self_7320)->elts[1];

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_7352);
} else { 
  
closureN_type c_7359;
c_7359.hdr.mark = gc_color_red;
 c_7359.hdr.grayed = 0;
c_7359.tag = closureN_tag;
 c_7359.fn = (function_type)__lambda_5;
c_7359.num_args = 1;
c_7359.num_elt = 2;
c_7359.elts = (object *)alloca(sizeof(object) * 2);
c_7359.elts[0] = ((closureN)self_7320)->elts[0];
c_7359.elts[1] = ((closureN)self_7320)->elts[1];

return_closcall1(data,(closure)&c_7359,  car(((closureN)self_7320)->elts[2]));}
; 
}

static void __lambda_5(void *data, int argc, object self_7321, object r_7313) {
  return_closcall1(data,  ((closureN)self_7321)->elts[0],  Cyc_write_va(2,((closureN)self_7321)->elts[1], r_7313));; 
}

static void __lambda_4(void *data, int argc, object self_7322, object r_7312) {
  return_closcall1(data,  ((closureN)self_7322)->elts[0],  Cyc_write_va(2,((closureN)self_7322)->elts[1], r_7312));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7316, object obj_734, object port_733_raw, ...) {
load_varargs(port_733, port_733_raw, argc - 2);
  Cyc_st_add(data, "scheme/write.sld:display");

closureN_type c_7328;
c_7328.hdr.mark = gc_color_red;
 c_7328.hdr.grayed = 0;
c_7328.tag = closureN_tag;
 c_7328.fn = (function_type)__lambda_2;
c_7328.num_args = 1;
c_7328.num_elt = 3;
c_7328.elts = (object *)alloca(sizeof(object) * 3);
c_7328.elts[0] = k_7316;
c_7328.elts[1] = obj_734;
c_7328.elts[2] = port_733;

return_closcall1(data,(closure)&c_7328,  Cyc_is_null(port_733));; 
}

static void __lambda_2(void *data, int argc, object self_7323, object r_7317) {
  if( !eq(boolean_f, r_7317) ){ 
  
closureN_type c_7330;
c_7330.hdr.mark = gc_color_red;
 c_7330.hdr.grayed = 0;
c_7330.tag = closureN_tag;
 c_7330.fn = (function_type)__lambda_0;
c_7330.num_args = 1;
c_7330.num_elt = 2;
c_7330.elts = (object *)alloca(sizeof(object) * 2);
c_7330.elts[0] = ((closureN)self_7323)->elts[0];
c_7330.elts[1] = ((closureN)self_7323)->elts[1];

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_7330);
} else { 
  
closureN_type c_7337;
c_7337.hdr.mark = gc_color_red;
 c_7337.hdr.grayed = 0;
c_7337.tag = closureN_tag;
 c_7337.fn = (function_type)__lambda_1;
c_7337.num_args = 1;
c_7337.num_elt = 2;
c_7337.elts = (object *)alloca(sizeof(object) * 2);
c_7337.elts[0] = ((closureN)self_7323)->elts[0];
c_7337.elts[1] = ((closureN)self_7323)->elts[1];

return_closcall1(data,(closure)&c_7337,  car(((closureN)self_7323)->elts[2]));}
; 
}

static void __lambda_1(void *data, int argc, object self_7324, object r_7319) {
  return_closcall1(data,  ((closureN)self_7324)->elts[0],  Cyc_display_va(2,((closureN)self_7324)->elts[1], r_7319));; 
}

static void __lambda_0(void *data, int argc, object self_7325, object r_7318) {
  return_closcall1(data,  ((closureN)self_7325)->elts[0],  Cyc_display_va(2,((closureN)self_7325)->elts[1], r_7318));; 
}

void c_schemewrite_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemewrite_scheme_write);
  add_global((object *) &__glo_write_scheme_write);
  add_global((object *) &__glo_display_scheme_write);
  mclosure0(c_7370, (function_type)__lambda_8);c_7370.num_args = 0; 
  __glo_lib_91init_117schemewrite_scheme_write = &c_7370; 
  mclosure0(c_7348, (function_type)__lambda_7);c_7348.num_args = 1; 
  __glo_write_scheme_write = &c_7348; 
  mclosure0(c_7326, (function_type)__lambda_3);c_7326.num_args = 1; 
  __glo_display_scheme_write = &c_7326; 

  make_cvar(cvar_7372, (object *)&__glo_lib_91init_117schemewrite_scheme_write);make_cons(pair_7373, find_or_add_symbol("lib-init:schemewrite"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo_write_scheme_write);make_cons(pair_7375, find_or_add_symbol("write"), &cvar_7374);
  make_cvar(cvar_7376, (object *)&__glo_display_scheme_write);make_cons(pair_7377, find_or_add_symbol("display"), &cvar_7376);
make_cons(c_7378, &pair_7373,Cyc_global_variables);
make_cons(c_7379, &pair_7375, &c_7378);
make_cons(c_7380, &pair_7377, &c_7379);
Cyc_global_variables = &c_7380;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemewrite_scheme_write)->fn)(data, 1, cont, cont);
}
