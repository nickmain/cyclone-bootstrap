/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2018 Justin Ethier
 ** Version 0.7.2 
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

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi28_srfi_28 = NULL;
object __glo_format_srfi_28 = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_is_91a_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91ref_scheme_base;
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
extern object __glo_error_91object_127_scheme_base;
extern object __glo_error_91object_91message_scheme_base;
extern object __glo_error_91object_91irritants_scheme_base;
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
extern object __glo_peek_91char_scheme_base;
extern object __glo_read_91char_scheme_base;
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
extern object __glo_peek_91u8_scheme_base;
extern object __glo_read_91u8_scheme_base;
extern object __glo_write_91u8_scheme_base;
extern object __glo_display_scheme_write;
extern object __glo_write_scheme_write;
extern object __glo_write_91shared_scheme_write;
extern object __glo_write_91simple_scheme_write;
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
extern object __glo_sqrt_191_191inline_191_191_scheme_base;
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
static void __lambda_19(void *data, int argc, closure _,object k_7339) ;
static void __lambda_18(void *data, int argc, closure _,object k_7342, object format_91string_732_7320, object objects_731_7319_raw, ...) ;
static void __lambda_17(void *data, int argc, object self_7377, object buffer_7326, object fmt_91rec_7324) ;
static void __lambda_16(void *data, int argc, object self_7378, object buffer_7326) ;
static void __lambda_15(void *data, int argc, object self_7379, object fmt_91rec_7324) ;
static void __lambda_14(void *data, int argc, object self_7380, object r_7376) ;
static void __lambda_13(void *data, int argc, object self_7381, object r_7343) ;
static void __lambda_12(void *data, int argc, object self_7382, object k_7347, object format_91list_734_7330, object objs_733_7329) ;
static void __lambda_11(void *data, int argc, object self_7383, object escape_91write_7332, object raw_91write_7331) ;
static void __lambda_10(void *data, int argc, object self_7384, object escape_91write_7332) ;
static void __lambda_9(void *data, int argc, object self_7385, object raw_91write_7331) ;
static void __lambda_8(void *data, int argc, object self_7386, object k_7370, object how_735_7336) ;
static void __lambda_7(void *data, int argc, object self_7387, object r_7372) ;
static void __lambda_6(void *data, int argc, object self_7388, object r_7348) ;
static void __lambda_5(void *data, int argc, object self_7389, object k_7366, object what_737_7335, object next_736_7334) ;
static void __lambda_4(void *data, int argc, object self_7390, object r_7367) ;
static void __lambda_3(void *data, int argc, object self_7391, object r_7368) ;
static void __lambda_2(void *data, int argc, object self_7392, object r_7349) ;
static void __lambda_1(void *data, int argc, object self_7393, object r_7344) ;
static void __lambda_0(void *data, int argc, object self_7394, object r_7345) ;

static void __lambda_19(void *data, int argc, closure _,object k_7339) {
  Cyc_st_add(data, "srfi/28.sld:lib-init:srfi28");
return_closcall1(data,  k_7339,  obj_int2obj(0));; 
}

static void __lambda_18(void *data, int argc, closure _,object k_7342, object format_91string_732_7320, object objects_731_7319_raw, ...) {
load_varargs(objects_731_7319, objects_731_7319_raw, argc - 2);
  Cyc_st_add(data, "srfi/28.sld:format");

closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_17;
c_7397.num_args = 2;
c_7397.num_elements = 3;
c_7397.elements = (object *)alloca(sizeof(object) * 3);
c_7397.elements[0] = format_91string_732_7320;
c_7397.elements[1] = k_7342;
c_7397.elements[2] = objects_731_7319;

return_closcall2(data,(closure)&c_7397,  boolean_f, boolean_f);; 
}

static void __lambda_17(void *data, int argc, object self_7377, object buffer_7326, object fmt_91rec_7324) {
  
closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_16;
c_7399.num_args = 1;
c_7399.num_elements = 4;
c_7399.elements = (object *)alloca(sizeof(object) * 4);
c_7399.elements[0] = fmt_91rec_7324;
c_7399.elements[1] = ((closureN)self_7377)->elements[0];
c_7399.elements[2] = ((closureN)self_7377)->elements[1];
c_7399.elements[3] = ((closureN)self_7377)->elements[2];


make_cell(c_73267,buffer_7326);
return_closcall1(data,(closure)&c_7399,  &c_73267);; 
}

static void __lambda_16(void *data, int argc, object self_7378, object buffer_7326) {
  
closureN_type c_73101;
c_73101.hdr.mark = gc_color_red;
 c_73101.hdr.grayed = 0;
c_73101.tag = closureN_tag;
 c_73101.fn = (function_type)__lambda_15;
c_73101.num_args = 1;
c_73101.num_elements = 4;
c_73101.elements = (object *)alloca(sizeof(object) * 4);
c_73101.elements[0] = buffer_7326;
c_73101.elements[1] = ((closureN)self_7378)->elements[1];
c_73101.elements[2] = ((closureN)self_7378)->elements[2];
c_73101.elements[3] = ((closureN)self_7378)->elements[3];


make_cell(c_73263,((closureN)self_7378)->elements[0]);
return_closcall1(data,(closure)&c_73101,  &c_73263);; 
}

static void __lambda_15(void *data, int argc, object self_7379, object fmt_91rec_7324) {
  
closureN_type c_73103;
c_73103.hdr.mark = gc_color_red;
 c_73103.hdr.grayed = 0;
c_73103.tag = closureN_tag;
 c_73103.fn = (function_type)__lambda_14;
c_73103.num_args = 1;
c_73103.num_elements = 5;
c_73103.elements = (object *)alloca(sizeof(object) * 5);
c_73103.elements[0] = ((closureN)self_7379)->elements[0];
c_73103.elements[1] = fmt_91rec_7324;
c_73103.elements[2] = ((closureN)self_7379)->elements[1];
c_73103.elements[3] = ((closureN)self_7379)->elements[2];
c_73103.elements[4] = ((closureN)self_7379)->elements[3];

return_closcall1(data,  __glo_open_91output_91string_scheme_base,  &c_73103);; 
}

static void __lambda_14(void *data, int argc, object self_7380, object r_7376) {
  
closureN_type c_73105;
c_73105.hdr.mark = gc_color_red;
 c_73105.hdr.grayed = 0;
c_73105.tag = closureN_tag;
 c_73105.fn = (function_type)__lambda_13;
c_73105.num_args = 1;
c_73105.num_elements = 5;
c_73105.elements = (object *)alloca(sizeof(object) * 5);
c_73105.elements[0] = ((closureN)self_7380)->elements[0];
c_73105.elements[1] = ((closureN)self_7380)->elements[1];
c_73105.elements[2] = ((closureN)self_7380)->elements[2];
c_73105.elements[3] = ((closureN)self_7380)->elements[3];
c_73105.elements[4] = ((closureN)self_7380)->elements[4];

return_closcall1(data,(closure)&c_73105,  Cyc_set_cell(data, ((closureN)self_7380)->elements[0], r_7376));; 
}

static void __lambda_13(void *data, int argc, object self_7381, object r_7343) {
  
closureN_type c_73107;
c_73107.hdr.mark = gc_color_red;
 c_73107.hdr.grayed = 0;
c_73107.tag = closureN_tag;
 c_73107.fn = (function_type)__lambda_1;
c_73107.num_args = 1;
c_73107.num_elements = 4;
c_73107.elements = (object *)alloca(sizeof(object) * 4);
c_73107.elements[0] = ((closureN)self_7381)->elements[1];
c_73107.elements[1] = ((closureN)self_7381)->elements[2];
c_73107.elements[2] = ((closureN)self_7381)->elements[3];
c_73107.elements[3] = ((closureN)self_7381)->elements[4];


closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_12;
c_73120.num_args = 2;
c_73120.num_elements = 2;
c_73120.elements = (object *)alloca(sizeof(object) * 2);
c_73120.elements[0] = ((closureN)self_7381)->elements[0];
c_73120.elements[1] = ((closureN)self_7381)->elements[1];

return_closcall1(data,(closure)&c_73107,  Cyc_set_cell(data, ((closureN)self_7381)->elements[1], &c_73120));; 
}

static void __lambda_12(void *data, int argc, object self_7382, object k_7347, object format_91list_734_7330, object objs_733_7329) {
  
closureN_type c_73122;
c_73122.hdr.mark = gc_color_red;
 c_73122.hdr.grayed = 0;
c_73122.tag = closureN_tag;
 c_73122.fn = (function_type)__lambda_11;
c_73122.num_args = 2;
c_73122.num_elements = 5;
c_73122.elements = (object *)alloca(sizeof(object) * 5);
c_73122.elements[0] = ((closureN)self_7382)->elements[0];
c_73122.elements[1] = ((closureN)self_7382)->elements[1];
c_73122.elements[2] = format_91list_734_7330;
c_73122.elements[3] = k_7347;
c_73122.elements[4] = objs_733_7329;

return_closcall2(data,(closure)&c_73122,  boolean_f, boolean_f);; 
}

static void __lambda_11(void *data, int argc, object self_7383, object escape_91write_7332, object raw_91write_7331) {
  
closureN_type c_73124;
c_73124.hdr.mark = gc_color_red;
 c_73124.hdr.grayed = 0;
c_73124.tag = closureN_tag;
 c_73124.fn = (function_type)__lambda_10;
c_73124.num_args = 1;
c_73124.num_elements = 6;
c_73124.elements = (object *)alloca(sizeof(object) * 6);
c_73124.elements[0] = ((closureN)self_7383)->elements[0];
c_73124.elements[1] = ((closureN)self_7383)->elements[1];
c_73124.elements[2] = ((closureN)self_7383)->elements[2];
c_73124.elements[3] = ((closureN)self_7383)->elements[3];
c_73124.elements[4] = ((closureN)self_7383)->elements[4];
c_73124.elements[5] = raw_91write_7331;


make_cell(c_73257,escape_91write_7332);
return_closcall1(data,(closure)&c_73124,  &c_73257);; 
}

static void __lambda_10(void *data, int argc, object self_7384, object escape_91write_7332) {
  
closureN_type c_73126;
c_73126.hdr.mark = gc_color_red;
 c_73126.hdr.grayed = 0;
c_73126.tag = closureN_tag;
 c_73126.fn = (function_type)__lambda_9;
c_73126.num_args = 1;
c_73126.num_elements = 6;
c_73126.elements = (object *)alloca(sizeof(object) * 6);
c_73126.elements[0] = ((closureN)self_7384)->elements[0];
c_73126.elements[1] = escape_91write_7332;
c_73126.elements[2] = ((closureN)self_7384)->elements[1];
c_73126.elements[3] = ((closureN)self_7384)->elements[2];
c_73126.elements[4] = ((closureN)self_7384)->elements[3];
c_73126.elements[5] = ((closureN)self_7384)->elements[4];


make_cell(c_73253,((closureN)self_7384)->elements[5]);
return_closcall1(data,(closure)&c_73126,  &c_73253);; 
}

static void __lambda_9(void *data, int argc, object self_7385, object raw_91write_7331) {
  
closureN_type c_73128;
c_73128.hdr.mark = gc_color_red;
 c_73128.hdr.grayed = 0;
c_73128.tag = closureN_tag;
 c_73128.fn = (function_type)__lambda_6;
c_73128.num_args = 1;
c_73128.num_elements = 7;
c_73128.elements = (object *)alloca(sizeof(object) * 7);
c_73128.elements[0] = ((closureN)self_7385)->elements[0];
c_73128.elements[1] = ((closureN)self_7385)->elements[1];
c_73128.elements[2] = ((closureN)self_7385)->elements[2];
c_73128.elements[3] = ((closureN)self_7385)->elements[3];
c_73128.elements[4] = ((closureN)self_7385)->elements[4];
c_73128.elements[5] = ((closureN)self_7385)->elements[5];
c_73128.elements[6] = raw_91write_7331;


closureN_type c_73226;
c_73226.hdr.mark = gc_color_red;
 c_73226.hdr.grayed = 0;
c_73226.tag = closureN_tag;
 c_73226.fn = (function_type)__lambda_8;
c_73226.num_args = 1;
c_73226.num_elements = 4;
c_73226.elements = (object *)alloca(sizeof(object) * 4);
c_73226.elements[0] = ((closureN)self_7385)->elements[0];
c_73226.elements[1] = ((closureN)self_7385)->elements[2];
c_73226.elements[2] = ((closureN)self_7385)->elements[3];
c_73226.elements[3] = ((closureN)self_7385)->elements[5];

return_closcall1(data,(closure)&c_73128,  Cyc_set_cell(data, ((closureN)self_7385)->elements[1], &c_73226));; 
}

static void __lambda_8(void *data, int argc, object self_7386, object k_7370, object how_735_7336) {
  if( (boolean_f != Cyc_is_null(((closureN)self_7386)->elements[3])) ){ 
  
make_utf8_string_with_len(c_73231, "No value for escape sequence", 28, 28);
return_closcall2(data,  __glo_error_scheme_base,  k_7370, &c_73231);
} else { 
  
closureN_type c_73233;
c_73233.hdr.mark = gc_color_red;
 c_73233.hdr.grayed = 0;
c_73233.tag = closureN_tag;
 c_73233.fn = (function_type)__lambda_7;
c_73233.num_args = 1;
c_73233.num_elements = 4;
c_73233.elements = (object *)alloca(sizeof(object) * 4);
c_73233.elements[0] = ((closureN)self_7386)->elements[1];
c_73233.elements[1] = ((closureN)self_7386)->elements[2];
c_73233.elements[2] = k_7370;
c_73233.elements[3] = ((closureN)self_7386)->elements[3];

return_closcall3(data,  how_735_7336,  &c_73233, Cyc_car(data, ((closureN)self_7386)->elements[3]), car(((closureN)self_7386)->elements[0]));}
; 
}

static void __lambda_7(void *data, int argc, object self_7387, object r_7372) {
  return_closcall3(data,  car(((closureN)self_7387)->elements[0]),  ((closureN)self_7387)->elements[2], Cyc_cddr(data, ((closureN)self_7387)->elements[1]), Cyc_cdr(data, ((closureN)self_7387)->elements[3]));; 
}

static void __lambda_6(void *data, int argc, object self_7388, object r_7348) {
  
closureN_type c_73130;
c_73130.hdr.mark = gc_color_red;
 c_73130.hdr.grayed = 0;
c_73130.tag = closureN_tag;
 c_73130.fn = (function_type)__lambda_2;
c_73130.num_args = 1;
c_73130.num_elements = 5;
c_73130.elements = (object *)alloca(sizeof(object) * 5);
c_73130.elements[0] = ((closureN)self_7388)->elements[0];
c_73130.elements[1] = ((closureN)self_7388)->elements[1];
c_73130.elements[2] = ((closureN)self_7388)->elements[3];
c_73130.elements[3] = ((closureN)self_7388)->elements[4];
c_73130.elements[4] = ((closureN)self_7388)->elements[6];


closureN_type c_73207;
c_73207.hdr.mark = gc_color_red;
 c_73207.hdr.grayed = 0;
c_73207.tag = closureN_tag;
 c_73207.fn = (function_type)__lambda_5;
c_73207.num_args = 2;
c_73207.num_elements = 4;
c_73207.elements = (object *)alloca(sizeof(object) * 4);
c_73207.elements[0] = ((closureN)self_7388)->elements[0];
c_73207.elements[1] = ((closureN)self_7388)->elements[2];
c_73207.elements[2] = ((closureN)self_7388)->elements[3];
c_73207.elements[3] = ((closureN)self_7388)->elements[5];

return_closcall1(data,(closure)&c_73130,  Cyc_set_cell(data, ((closureN)self_7388)->elements[6], &c_73207));; 
}

static void __lambda_5(void *data, int argc, object self_7389, object k_7366, object what_737_7335, object next_736_7334) {
  
closureN_type c_73209;
c_73209.hdr.mark = gc_color_red;
 c_73209.hdr.grayed = 0;
c_73209.tag = closureN_tag;
 c_73209.fn = (function_type)__lambda_4;
c_73209.num_args = 1;
c_73209.num_elements = 5;
c_73209.elements = (object *)alloca(sizeof(object) * 5);
c_73209.elements[0] = ((closureN)self_7389)->elements[1];
c_73209.elements[1] = ((closureN)self_7389)->elements[2];
c_73209.elements[2] = k_7366;
c_73209.elements[3] = next_736_7334;
c_73209.elements[4] = ((closureN)self_7389)->elements[3];

return_closcall3(data,  __glo_write_91char_scheme_base,  &c_73209, what_737_7335, car(((closureN)self_7389)->elements[0]));; 
}

static void __lambda_4(void *data, int argc, object self_7390, object r_7367) {
  
closureN_type c_73212;
c_73212.hdr.mark = gc_color_red;
 c_73212.hdr.grayed = 0;
c_73212.tag = closureN_tag;
 c_73212.fn = (function_type)__lambda_3;
c_73212.num_args = 1;
c_73212.num_elements = 3;
c_73212.elements = (object *)alloca(sizeof(object) * 3);
c_73212.elements[0] = ((closureN)self_7390)->elements[0];
c_73212.elements[1] = ((closureN)self_7390)->elements[2];
c_73212.elements[2] = ((closureN)self_7390)->elements[4];

return_closcall2(data,  ((closureN)self_7390)->elements[3],  &c_73212, ((closureN)self_7390)->elements[1]);; 
}

static void __lambda_3(void *data, int argc, object self_7391, object r_7368) {
  return_closcall3(data,  car(((closureN)self_7391)->elements[0]),  ((closureN)self_7391)->elements[1], r_7368, ((closureN)self_7391)->elements[2]);; 
}

static void __lambda_2(void *data, int argc, object self_7392, object r_7349) {
  if( (boolean_f != Cyc_is_null(((closureN)self_7392)->elements[2])) ){ 
  return_closcall2(data,  __glo_get_91output_91string_scheme_base,  ((closureN)self_7392)->elements[3], car(((closureN)self_7392)->elements[0]));
} else { 
    object c_73141 = Cyc_char_eq_op(data,Cyc_car(data, ((closureN)self_7392)->elements[2]), obj_char2obj(126));
if( (boolean_f != c_73141) ){ 
  if( (boolean_f != Cyc_is_null(Cyc_cdr(data, ((closureN)self_7392)->elements[2]))) ){ 
  
make_utf8_string_with_len(c_73152, "Incomplete escape sequence", 26, 26);
return_closcall2(data,  __glo_error_scheme_base,  ((closureN)self_7392)->elements[3], &c_73152);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7392)->elements[2]), obj_char2obj(97))) ){ 
  return_closcall2(data,  car(((closureN)self_7392)->elements[1]),  ((closureN)self_7392)->elements[3], __glo_display_scheme_write);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7392)->elements[2]), obj_char2obj(115))) ){ 
  return_closcall2(data,  car(((closureN)self_7392)->elements[1]),  ((closureN)self_7392)->elements[3], __glo_write_scheme_write);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7392)->elements[2]), obj_char2obj(37))) ){ 
  return_closcall3(data,  car(((closureN)self_7392)->elements[4]),  ((closureN)self_7392)->elements[3], obj_char2obj(10), primitive_cddr);
} else { 
  if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7392)->elements[2]), obj_char2obj(126))) ){ 
  return_closcall3(data,  car(((closureN)self_7392)->elements[4]),  ((closureN)self_7392)->elements[3], obj_char2obj(126), primitive_cddr);
} else { 
  
make_utf8_string_with_len(c_73195, "Unrecognized escape sequence", 28, 28);
return_closcall2(data,  __glo_error_scheme_base,  ((closureN)self_7392)->elements[3], &c_73195);}
}
}
}
}

} else { 
  return_closcall3(data,  car(((closureN)self_7392)->elements[4]),  ((closureN)self_7392)->elements[3], Cyc_car(data, ((closureN)self_7392)->elements[2]), primitive_cdr);}
}
; 
}

static void __lambda_1(void *data, int argc, object self_7393, object r_7344) {
  
closureN_type c_73109;
c_73109.hdr.mark = gc_color_red;
 c_73109.hdr.grayed = 0;
c_73109.tag = closureN_tag;
 c_73109.fn = (function_type)__lambda_0;
c_73109.num_args = 1;
c_73109.num_elements = 3;
c_73109.elements = (object *)alloca(sizeof(object) * 3);
c_73109.elements[0] = ((closureN)self_7393)->elements[0];
c_73109.elements[1] = ((closureN)self_7393)->elements[2];
c_73109.elements[2] = ((closureN)self_7393)->elements[3];

return_closcall2(data,  __glo_string_91_125list_scheme_base,  &c_73109, ((closureN)self_7393)->elements[1]);; 
}

static void __lambda_0(void *data, int argc, object self_7394, object r_7345) {
  return_closcall3(data,  car(((closureN)self_7394)->elements[0]),  ((closureN)self_7394)->elements[1], r_7345, ((closureN)self_7394)->elements[2]);; 
}

void c_srfi28_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_srfi28_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117srfi28_srfi_28);
  add_global((object *) &__glo_format_srfi_28);
  mclosure0(c_73268, (function_type)__lambda_19);c_73268.num_args = 0; 
  __glo_lib_91init_117srfi28_srfi_28 = &c_73268; 
  mclosure0(c_7395, (function_type)__lambda_18);c_7395.num_args = 1; 
  __glo_format_srfi_28 = &c_7395; 

  mclosure0(clo_73271, c_srfi28_inlinable_lambdas); make_pair(pair_73270, find_or_add_symbol("c_srfi28_inlinable_lambdas"), &clo_73271);
  make_cvar(cvar_73272, (object *)&__glo_lib_91init_117srfi28_srfi_28);make_pair(pair_73273, find_or_add_symbol("lib-init:srfi28"), &cvar_73272);
  make_cvar(cvar_73274, (object *)&__glo_format_srfi_28);make_pair(pair_73275, find_or_add_symbol("format"), &cvar_73274);
make_pair(c_73276, &pair_73270,Cyc_global_variables);
make_pair(c_73277, &pair_73273, &c_73276);
make_pair(c_73278, &pair_73275, &c_73277);
Cyc_global_variables = &c_73278;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi28_srfi_28)->fn)(data, 1, cont, cont);
}
void c_srfi28_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("srfi_28");
  c_srfi28_entry_pt_first_lambda(data, argc, cont,value);
}
