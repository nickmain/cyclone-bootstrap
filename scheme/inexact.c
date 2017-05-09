/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.5.1 
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemeinexact_scheme_inexact = NULL;
object __glo_atan_scheme_inexact = NULL;
object __glo_atan_191_191inline_191_191_scheme_inexact = NULL;
object __glo_acos_scheme_inexact = NULL;
object __glo_acos_191_191inline_191_191_scheme_inexact = NULL;
object __glo_asin_scheme_inexact = NULL;
object __glo_asin_191_191inline_191_191_scheme_inexact = NULL;
object __glo_tan_scheme_inexact = NULL;
object __glo_tan_191_191inline_191_191_scheme_inexact = NULL;
object __glo_cos_scheme_inexact = NULL;
object __glo_cos_191_191inline_191_191_scheme_inexact = NULL;
object __glo_sin_scheme_inexact = NULL;
object __glo_sin_191_191inline_191_191_scheme_inexact = NULL;
object __glo_sqrt_scheme_inexact = NULL;
object __glo_sqrt_191_191inline_191_191_scheme_inexact = NULL;
object __glo_exp_scheme_inexact = NULL;
object __glo_exp_191_191inline_191_191_scheme_inexact = NULL;
object __glo_c_91log_scheme_inexact = NULL;
object __glo_c_91log_191_191inline_191_191_scheme_inexact = NULL;
object __glo_log_scheme_inexact = NULL;
object __glo_finite_127_scheme_inexact = NULL;
object __glo_infinite_127_scheme_inexact = NULL;
object __glo_nan_127_scheme_inexact = NULL;
object __glo_define_91inexact_91op_scheme_inexact = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_bignum_127_scheme_base;
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
extern object __glo_with_91handler_scheme_base;
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
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
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
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
extern object __glo_zero_127_191_191inline_191_191_scheme_base;
extern object __glo_positive_127_191_191inline_191_191_scheme_base;
extern object __glo_negative_127_191_191inline_191_191_scheme_base;
extern object __glo_floor_191_191inline_191_191_scheme_base;
extern object __glo_ceiling_191_191inline_191_191_scheme_base;
extern object __glo_truncate_191_191inline_191_191_scheme_base;
extern object __glo_round_191_191inline_191_191_scheme_base;
extern object __glo_inexact_191_191inline_191_191_scheme_base;
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(define_91c);
static void __lambda_26(void *data, int argc, closure _,object k_7320) ;
static object __lambda_25(void *data, object ptr, object z) ;
static void __lambda_24(void *data, int argc, closure _, object k, object z) ;
static object __lambda_23(void *data, object ptr, object z) ;
static void __lambda_22(void *data, int argc, closure _, object k, object z) ;
static object __lambda_21(void *data, object ptr, object z) ;
static void __lambda_20(void *data, int argc, closure _, object k, object z) ;
static object __lambda_19(void *data, object ptr, object z) ;
static void __lambda_18(void *data, int argc, closure _, object k, object z) ;
static object __lambda_17(void *data, object ptr, object z) ;
static void __lambda_16(void *data, int argc, closure _, object k, object z) ;
static object __lambda_15(void *data, object ptr, object z) ;
static void __lambda_14(void *data, int argc, closure _, object k, object z) ;
static object __lambda_13(void *data, object ptr, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static object __lambda_11(void *data, object ptr, object z) ;
static void __lambda_10(void *data, int argc, closure _, object k, object z) ;
static object __lambda_9(void *data, object ptr, object z) ;
static void __lambda_8(void *data, int argc, closure _, object k, object z) ;
static void __lambda_7(void *data, int argc, closure _,object k_7323, object z1_7310, object z2_739_raw, ...) ;
static void __lambda_6(void *data, int argc, closure _,object k_7330, object z_7312) ;
static void __lambda_5(void *data, int argc, object self_7346, object r_7331) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _, object k, object z) ;
static void __lambda_2(void *data, int argc, closure _,object k_7334, object expr_7315, object rename_7314, object compare_7313) ;
static void __lambda_1(void *data, int argc, object self_7347, object r_7341) ;
static void __lambda_0(void *data, int argc, object self_7348, object r_7344) ;

static void __lambda_26(void *data, int argc, closure _,object k_7320) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_7320,  obj_int2obj(0));; 
}

static object __lambda_25(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, atan, z); }
static void __lambda_24(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static object __lambda_23(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, acos, z); }
static void __lambda_22(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
static object __lambda_21(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, asin, z); }
static void __lambda_20(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static object __lambda_19(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, tan, z); }
static void __lambda_18(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static object __lambda_17(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, cos, z); }
static void __lambda_16(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static object __lambda_15(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, sin, z); }
static void __lambda_14(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static object __lambda_13(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, sqrt, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static object __lambda_11(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, exp, z); }
static void __lambda_10(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static object __lambda_9(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, log, z); }
static void __lambda_8(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_7(void *data, int argc, closure _,object k_7323, object z1_7310, object z2_739_raw, ...) {
load_varargs(z2_739, z2_739_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
if( (boolean_f != Cyc_is_null(z2_739)) ){ 
  
common_type local_73110; object c_73111 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_73110,z1_7310);
return_closcall1(data,  k_7323,  c_73111);
} else { 
  
common_type local_73119; object c_73120 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_73119,z1_7310);

common_type local_73123; object c_73124 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_73123,Cyc_car(data, z2_739));

common_type local_73115; object c_73116 = Cyc_fast_div(data,&local_73115,c_73120, c_73124);
return_closcall1(data,  k_7323,  c_73116);}
; 
}

static void __lambda_6(void *data, int argc, closure _,object k_7330, object z_7312) {
  Cyc_st_add(data, "scheme/inexact.sld:finite?");

closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_5;
c_7399.num_args = 1;
c_7399.num_elements = 1;
c_7399.elements = (object *)alloca(sizeof(object) * 1);
c_7399.elements[0] = k_7330;

return_closcall2(data,  __glo_infinite_127_scheme_inexact,  &c_7399, z_7312);; 
}

static void __lambda_5(void *data, int argc, object self_7346, object r_7331) {
  if( (boolean_f != r_7331) ){ 
  return_closcall1(data,  ((closureN)self_7346)->elements[0],  boolean_f);
} else { 
  return_closcall1(data,  ((closureN)self_7346)->elements[0],  boolean_t);}
; 
}

static void __lambda_4(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isinf(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_3(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isnan(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_2(void *data, int argc, closure _,object k_7334, object expr_7315, object rename_7314, object compare_7313) {
  Cyc_st_add(data, "scheme/inexact.sld:define-inexact-op");

closureN_type c_7351;
c_7351.hdr.mark = gc_color_red;
 c_7351.hdr.grayed = 0;
c_7351.tag = closureN_tag;
 c_7351.fn = (function_type)__lambda_1;
c_7351.num_args = 1;
c_7351.num_elements = 2;
c_7351.elements = (object *)alloca(sizeof(object) * 2);
c_7351.elements[0] = expr_7315;
c_7351.elements[1] = k_7334;


make_string(c_7391, " return_inexact_double_op(data, k, ");

make_string(c_7394, ", z);");

object c_7390 = Cyc_string_append(data,(closure)&c_7351,3,&c_7391, Cyc_caddr(data, expr_7315), &c_7394);
return_closcall1(data,(closure)&c_7351,  c_7390);; 
}

static void __lambda_1(void *data, int argc, object self_7347, object r_7341) {
  
closureN_type c_7353;
c_7353.hdr.mark = gc_color_red;
 c_7353.hdr.grayed = 0;
c_7353.tag = closureN_tag;
 c_7353.fn = (function_type)__lambda_0;
c_7353.num_args = 1;
c_7353.num_elements = 3;
c_7353.elements = (object *)alloca(sizeof(object) * 3);
c_7353.elements[0] = ((closureN)self_7347)->elements[0];
c_7353.elements[1] = ((closureN)self_7347)->elements[1];
c_7353.elements[2] = r_7341;


make_string(c_7383, " return_inexact_double_op_no_cps(data, ptr, ");

make_string(c_7387, ", z);");

object c_7382 = Cyc_string_append(data,(closure)&c_7353,3,&c_7383, Cyc_caddr(data, ((closureN)self_7347)->elements[0]), &c_7387);
return_closcall1(data,(closure)&c_7353,  c_7382);; 
}

static void __lambda_0(void *data, int argc, object self_7348, object r_7344) {
  
make_string(c_7368, "(void *data, int argc, closure _, object k, object z)");

make_string(c_7376, "(void *data, object ptr, object z)");

make_pair(c_7379,r_7344, NULL);

make_pair(c_7375,&c_7376, &c_7379);

make_pair(c_7371,((closureN)self_7348)->elements[2], &c_7375);

make_pair(c_7367,&c_7368, &c_7371);

make_pair(c_7361,Cyc_cadr(data, ((closureN)self_7348)->elements[0]), &c_7367);

make_pair(c_7358,quote_define_91c, &c_7361);
return_closcall1(data,  ((closureN)self_7348)->elements[1],  &c_7358);; 
}

void c_schemeinexact_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
make_pair(pair_73147, find_or_add_symbol("atan"), find_or_add_symbol("atan__inline__"));
make_pair(pair_73148, find_or_add_symbol("acos"), find_or_add_symbol("acos__inline__"));
make_pair(pair_73149, find_or_add_symbol("asin"), find_or_add_symbol("asin__inline__"));
make_pair(pair_73150, find_or_add_symbol("tan"), find_or_add_symbol("tan__inline__"));
make_pair(pair_73151, find_or_add_symbol("cos"), find_or_add_symbol("cos__inline__"));
make_pair(pair_73152, find_or_add_symbol("sin"), find_or_add_symbol("sin__inline__"));
make_pair(pair_73153, find_or_add_symbol("sqrt"), find_or_add_symbol("sqrt__inline__"));
make_pair(pair_73154, find_or_add_symbol("exp"), find_or_add_symbol("exp__inline__"));
make_pair(pair_73155, find_or_add_symbol("c-log"), find_or_add_symbol("c-log__inline__"));
make_pair(c_73156, &pair_73147, NULL);
make_pair(c_73157, &pair_73148, &c_73156);
make_pair(c_73158, &pair_73149, &c_73157);
make_pair(c_73159, &pair_73150, &c_73158);
make_pair(c_73160, &pair_73151, &c_73159);
make_pair(c_73161, &pair_73152, &c_73160);
make_pair(c_73162, &pair_73153, &c_73161);
make_pair(c_73163, &pair_73154, &c_73162);
make_pair(c_73164, &pair_73155, &c_73163);
(((closure)cont)->fn)(data, 1, cont, &c_73164);
 } 
void c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_define_91c = find_or_add_symbol("define-c");

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_atan_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  add_global((object *) &__glo_acos_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_asin_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_tan_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_cos_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_sin_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sqrt_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_exp_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_c_91log_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_finite_127_scheme_inexact);
  add_global((object *) &__glo_infinite_127_scheme_inexact);
  add_global((object *) &__glo_nan_127_scheme_inexact);
  add_global((object *) &__glo_define_91inexact_91op_scheme_inexact);
  add_symbol(quote_define_91c);
  mclosure0(c_73145, (function_type)__lambda_26);c_73145.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_73145; 
  mclosure0(c_73144, (function_type)__lambda_24);c_73144.num_args = 1; 
  __glo_atan_scheme_inexact = &c_73144; 
  mclosure0(c_73143, (function_type)__lambda_25);c_73143.num_args = -1; 
  __glo_atan_191_191inline_191_191_scheme_inexact = &c_73143; 
  mclosure0(c_73142, (function_type)__lambda_22);c_73142.num_args = 1; 
  __glo_acos_scheme_inexact = &c_73142; 
  mclosure0(c_73141, (function_type)__lambda_23);c_73141.num_args = -1; 
  __glo_acos_191_191inline_191_191_scheme_inexact = &c_73141; 
  mclosure0(c_73140, (function_type)__lambda_20);c_73140.num_args = 1; 
  __glo_asin_scheme_inexact = &c_73140; 
  mclosure0(c_73139, (function_type)__lambda_21);c_73139.num_args = -1; 
  __glo_asin_191_191inline_191_191_scheme_inexact = &c_73139; 
  mclosure0(c_73138, (function_type)__lambda_18);c_73138.num_args = 1; 
  __glo_tan_scheme_inexact = &c_73138; 
  mclosure0(c_73137, (function_type)__lambda_19);c_73137.num_args = -1; 
  __glo_tan_191_191inline_191_191_scheme_inexact = &c_73137; 
  mclosure0(c_73136, (function_type)__lambda_16);c_73136.num_args = 1; 
  __glo_cos_scheme_inexact = &c_73136; 
  mclosure0(c_73135, (function_type)__lambda_17);c_73135.num_args = -1; 
  __glo_cos_191_191inline_191_191_scheme_inexact = &c_73135; 
  mclosure0(c_73134, (function_type)__lambda_14);c_73134.num_args = 1; 
  __glo_sin_scheme_inexact = &c_73134; 
  mclosure0(c_73133, (function_type)__lambda_15);c_73133.num_args = -1; 
  __glo_sin_191_191inline_191_191_scheme_inexact = &c_73133; 
  mclosure0(c_73132, (function_type)__lambda_12);c_73132.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_73132; 
  mclosure0(c_73131, (function_type)__lambda_13);c_73131.num_args = -1; 
  __glo_sqrt_191_191inline_191_191_scheme_inexact = &c_73131; 
  mclosure0(c_73130, (function_type)__lambda_10);c_73130.num_args = 1; 
  __glo_exp_scheme_inexact = &c_73130; 
  mclosure0(c_73129, (function_type)__lambda_11);c_73129.num_args = -1; 
  __glo_exp_191_191inline_191_191_scheme_inexact = &c_73129; 
  mclosure0(c_73128, (function_type)__lambda_8);c_73128.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_73128; 
  mclosure0(c_73127, (function_type)__lambda_9);c_73127.num_args = -1; 
  __glo_c_91log_191_191inline_191_191_scheme_inexact = &c_73127; 
  mclosure0(c_73104, (function_type)__lambda_7);c_73104.num_args = 1; 
  __glo_log_scheme_inexact = &c_73104; 
  mclosure0(c_7397, (function_type)__lambda_6);c_7397.num_args = 1; 
  __glo_finite_127_scheme_inexact = &c_7397; 
  mclosure0(c_7396, (function_type)__lambda_4);c_7396.num_args = 1; 
  __glo_infinite_127_scheme_inexact = &c_7396; 
  mclosure0(c_7395, (function_type)__lambda_3);c_7395.num_args = 1; 
  __glo_nan_127_scheme_inexact = &c_7395; 
  mmacro(c_7349, (function_type)__lambda_2);c_7349.num_args = 3; 
  __glo_define_91inexact_91op_scheme_inexact = &c_7349; 

  mclosure0(clo_73166, c_schemeinexact_inlinable_lambdas); make_pair(pair_73165, find_or_add_symbol("c_schemeinexact_inlinable_lambdas"), &clo_73166);
  make_cvar(cvar_73167, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_73168, find_or_add_symbol("lib-init:schemeinexact"), &cvar_73167);
  make_cvar(cvar_73169, (object *)&__glo_atan_scheme_inexact);make_pair(pair_73170, find_or_add_symbol("atan"), &cvar_73169);
  make_cvar(cvar_73171, (object *)&__glo_atan_191_191inline_191_191_scheme_inexact);make_pair(pair_73172, find_or_add_symbol("atan__inline__"), &cvar_73171);
  make_cvar(cvar_73173, (object *)&__glo_acos_scheme_inexact);make_pair(pair_73174, find_or_add_symbol("acos"), &cvar_73173);
  make_cvar(cvar_73175, (object *)&__glo_acos_191_191inline_191_191_scheme_inexact);make_pair(pair_73176, find_or_add_symbol("acos__inline__"), &cvar_73175);
  make_cvar(cvar_73177, (object *)&__glo_asin_scheme_inexact);make_pair(pair_73178, find_or_add_symbol("asin"), &cvar_73177);
  make_cvar(cvar_73179, (object *)&__glo_asin_191_191inline_191_191_scheme_inexact);make_pair(pair_73180, find_or_add_symbol("asin__inline__"), &cvar_73179);
  make_cvar(cvar_73181, (object *)&__glo_tan_scheme_inexact);make_pair(pair_73182, find_or_add_symbol("tan"), &cvar_73181);
  make_cvar(cvar_73183, (object *)&__glo_tan_191_191inline_191_191_scheme_inexact);make_pair(pair_73184, find_or_add_symbol("tan__inline__"), &cvar_73183);
  make_cvar(cvar_73185, (object *)&__glo_cos_scheme_inexact);make_pair(pair_73186, find_or_add_symbol("cos"), &cvar_73185);
  make_cvar(cvar_73187, (object *)&__glo_cos_191_191inline_191_191_scheme_inexact);make_pair(pair_73188, find_or_add_symbol("cos__inline__"), &cvar_73187);
  make_cvar(cvar_73189, (object *)&__glo_sin_scheme_inexact);make_pair(pair_73190, find_or_add_symbol("sin"), &cvar_73189);
  make_cvar(cvar_73191, (object *)&__glo_sin_191_191inline_191_191_scheme_inexact);make_pair(pair_73192, find_or_add_symbol("sin__inline__"), &cvar_73191);
  make_cvar(cvar_73193, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_73194, find_or_add_symbol("sqrt"), &cvar_73193);
  make_cvar(cvar_73195, (object *)&__glo_sqrt_191_191inline_191_191_scheme_inexact);make_pair(pair_73196, find_or_add_symbol("sqrt__inline__"), &cvar_73195);
  make_cvar(cvar_73197, (object *)&__glo_exp_scheme_inexact);make_pair(pair_73198, find_or_add_symbol("exp"), &cvar_73197);
  make_cvar(cvar_73199, (object *)&__glo_exp_191_191inline_191_191_scheme_inexact);make_pair(pair_73200, find_or_add_symbol("exp__inline__"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_73202, find_or_add_symbol("c-log"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_c_91log_191_191inline_191_191_scheme_inexact);make_pair(pair_73204, find_or_add_symbol("c-log__inline__"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_log_scheme_inexact);make_pair(pair_73206, find_or_add_symbol("log"), &cvar_73205);
  make_cvar(cvar_73207, (object *)&__glo_finite_127_scheme_inexact);make_pair(pair_73208, find_or_add_symbol("finite?"), &cvar_73207);
  make_cvar(cvar_73209, (object *)&__glo_infinite_127_scheme_inexact);make_pair(pair_73210, find_or_add_symbol("infinite?"), &cvar_73209);
  make_cvar(cvar_73211, (object *)&__glo_nan_127_scheme_inexact);make_pair(pair_73212, find_or_add_symbol("nan?"), &cvar_73211);
  make_cvar(cvar_73213, (object *)&__glo_define_91inexact_91op_scheme_inexact);make_pair(pair_73214, find_or_add_symbol("define-inexact-op"), &cvar_73213);
make_pair(c_73215, &pair_73165,Cyc_global_variables);
make_pair(c_73216, &pair_73168, &c_73215);
make_pair(c_73217, &pair_73170, &c_73216);
make_pair(c_73218, &pair_73172, &c_73217);
make_pair(c_73219, &pair_73174, &c_73218);
make_pair(c_73220, &pair_73176, &c_73219);
make_pair(c_73221, &pair_73178, &c_73220);
make_pair(c_73222, &pair_73180, &c_73221);
make_pair(c_73223, &pair_73182, &c_73222);
make_pair(c_73224, &pair_73184, &c_73223);
make_pair(c_73225, &pair_73186, &c_73224);
make_pair(c_73226, &pair_73188, &c_73225);
make_pair(c_73227, &pair_73190, &c_73226);
make_pair(c_73228, &pair_73192, &c_73227);
make_pair(c_73229, &pair_73194, &c_73228);
make_pair(c_73230, &pair_73196, &c_73229);
make_pair(c_73231, &pair_73198, &c_73230);
make_pair(c_73232, &pair_73200, &c_73231);
make_pair(c_73233, &pair_73202, &c_73232);
make_pair(c_73234, &pair_73204, &c_73233);
make_pair(c_73235, &pair_73206, &c_73234);
make_pair(c_73236, &pair_73208, &c_73235);
make_pair(c_73237, &pair_73210, &c_73236);
make_pair(c_73238, &pair_73212, &c_73237);
make_pair(c_73239, &pair_73214, &c_73238);
Cyc_global_variables = &c_73239;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_inexact");
  c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value);
}
