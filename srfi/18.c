/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.4 (Pre-release)
 **
 **/

#define closcall0(td,cfn) ((cfn)->fn)(td,0,cfn)
/* Check for GC, then call given continuation closure */
#define return_closcall0(td,cfn) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[0]; \
     GC(td,cfn,buf,0); return; \
 } else {closcall0(td,(closure) (cfn)); return;}}

/* Check for GC, then call C function directly */
#define return_direct0(td,_fn) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[0];  \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 0); return; \
 } else { (_fn)(td,0,(closure)_fn); }}

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

#define closcall3(td,cfn,a1,a2,a3) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,2, (closure)(a1), cfn,a2,a3); } else { ((cfn)->fn)(td,3,cfn,a1,a2,a3);}
/* Check for GC, then call given continuation closure */
#define return_closcall3(td,cfn,a1,a2,a3) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td,cfn,buf,3); return; \
 } else {closcall3(td,(closure) (cfn),a1,a2,a3); return;}}

/* Check for GC, then call C function directly */
#define return_direct3(td,_fn,a1,a2,a3) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 3); return; \
 } else { (_fn)(td,3,(closure)_fn,a1,a2,a3); }}

#define closcall4(td,cfn,a1,a2,a3,a4) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,3, (closure)(a1), cfn,a2,a3,a4); } else { ((cfn)->fn)(td,4,cfn,a1,a2,a3,a4);}
/* Check for GC, then call given continuation closure */
#define return_closcall4(td,cfn,a1,a2,a3,a4) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td,cfn,buf,4); return; \
 } else {closcall4(td,(closure) (cfn),a1,a2,a3,a4); return;}}

/* Check for GC, then call C function directly */
#define return_direct4(td,_fn,a1,a2,a3,a4) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 4); return; \
 } else { (_fn)(td,4,(closure)_fn,a1,a2,a3,a4); }}

#define closcall6(td,cfn,a1,a2,a3,a4,a5,a6) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,5, (closure)(a1), cfn,a2,a3,a4,a5,a6); } else { ((cfn)->fn)(td,6,cfn,a1,a2,a3,a4,a5,a6);}
/* Check for GC, then call given continuation closure */
#define return_closcall6(td,cfn,a1,a2,a3,a4,a5,a6) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6;\
     GC(td,cfn,buf,6); return; \
 } else {closcall6(td,(closure) (cfn),a1,a2,a3,a4,a5,a6); return;}}

/* Check for GC, then call C function directly */
#define return_direct6(td,_fn,a1,a2,a3,a4,a5,a6) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 6); return; \
 } else { (_fn)(td,6,(closure)_fn,a1,a2,a3,a4,a5,a6); }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi18 = nil;
object __glo_condition_91variable_91broadcast_67 = nil;
object __glo_condition_91variable_91signal_67 = nil;
object __glo_condition_91variable_91wait_67 = nil;
object __glo_make_91condition_91variable = nil;
object __glo_condition_91variable_127 = nil;
object __glo_Cyc_91mutex_91unlock_67 = nil;
object __glo_mutex_91unlock_67 = nil;
object __glo_mutex_91lock_67 = nil;
object __glo_make_91mutex = nil;
object __glo_mutex_127 = nil;
object __glo_Cyc_91minor_91gc = nil;
object __glo__91_125heap = nil;
object __glo_thread_91sleep_67 = nil;
object __glo_thread_91terminate_67 = nil;
object __glo_thread_91yield_67 = nil;
object __glo_thread_91start_67 = nil;
object __glo_thread_91specific_91set_67 = nil;
object __glo_thread_91specific = nil;
object __glo_thread_91name = nil;
object __glo_make_91thread = nil;
object __glo_thread_127 = nil;
extern object __glo_cons_91source;
extern object __glo_syntax_91rules;
extern object __glo_letrec_85;
extern object __glo_guard;
extern object __glo_guard_91aux;
extern object __glo_receive;
extern object __glo_abs;
extern object __glo_max;
extern object __glo_min;
extern object __glo_modulo;
extern object __glo_floor_91remainder;
extern object __glo_even_127;
extern object __glo_exact_91integer_127;
extern object __glo_exact_127;
extern object __glo_inexact_127;
extern object __glo_odd_127;
extern object __glo_gcd;
extern object __glo_lcm;
extern object __glo_quotient;
extern object __glo_remainder;
extern object __glo_truncate_91quotient;
extern object __glo_truncate_91remainder;
extern object __glo_truncate_95;
extern object __glo_floor_91quotient;
extern object __glo_floor_91remainder;
extern object __glo_floor_95;
extern object __glo_square;
extern object __glo_expt;
extern object __glo_call_91with_91current_91continuation;
extern object __glo_call_95cc;
extern object __glo_call_91with_91values;
extern object __glo_dynamic_91wind;
extern object __glo_values;
extern object __glo_char_123_127;
extern object __glo_char_121_127;
extern object __glo_char_125_127;
extern object __glo_char_121_123_127;
extern object __glo_char_125_123_127;
extern object __glo_string_123_127;
extern object __glo_string_121_127;
extern object __glo_string_121_123_127;
extern object __glo_string_125_127;
extern object __glo_string_125_123_127;
extern object __glo_foldl;
extern object __glo_foldr;
extern object __glo_not;
extern object __glo_list_127;
extern object __glo_zero_127;
extern object __glo_positive_127;
extern object __glo_negative_127;
extern object __glo_append;
extern object __glo__list;
extern object __glo_make_91list;
extern object __glo_list_91copy;
extern object __glo_map;
extern object __glo_for_91each;
extern object __glo_list_91tail;
extern object __glo_list_91ref;
extern object __glo_list_91set_67;
extern object __glo_reverse;
extern object __glo_boolean_123_127;
extern object __glo_symbol_123_127;
extern object __glo_Cyc_91obj_123_127;
extern object __glo_vector;
extern object __glo_vector_91append;
extern object __glo_vector_91copy;
extern object __glo_vector_91copy_67;
extern object __glo_vector_91fill_67;
extern object __glo_vector_91_125list;
extern object __glo_vector_91_125string;
extern object __glo_vector_91map;
extern object __glo_vector_91for_91each;
extern object __glo_make_91string;
extern object __glo_string;
extern object __glo_string_91copy;
extern object __glo_string_91copy_67;
extern object __glo_string_91fill_67;
extern object __glo_string_91_125list;
extern object __glo_string_91_125vector;
extern object __glo_string_91map;
extern object __glo_string_91for_91each;
extern object __glo_make_91parameter;
extern object __glo_current_91output_91port;
extern object __glo_current_91input_91port;
extern object __glo_current_91error_91port;
extern object __glo_call_91with_91port;
extern object __glo_error;
extern object __glo_raise;
extern object __glo_raise_91continuable;
extern object __glo_with_91exception_91handler;
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_write_91string;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
extern object __glo_read_91string;
extern object __glo_input_91port_127;
extern object __glo_output_91port_127;
extern object __glo_input_91port_91open_127;
extern object __glo_output_91port_91open_127;
extern object __glo_features;
extern object __glo_any;
extern object __glo_every;
extern object __glo_and;
extern object __glo_or;
extern object __glo_let;
extern object __glo_let_85;
extern object __glo_letrec;
extern object __glo_begin;
extern object __glo__case;
extern object __glo_cond;
extern object __glo_cond_91expand;
extern object __glo__do;
extern object __glo_when;
extern object __glo_unless;
extern object __glo_quasiquote;
extern object __glo_floor;
extern object __glo_ceiling;
extern object __glo_truncate;
extern object __glo_round;
extern object __glo_exact;
extern object __glo_inexact;
extern object __glo_eof_91object;
extern object __glo_syntax_91error;
#include "cyclone/runtime.h"
defsymbol(cyc_91thread_91obj);
static void __lambda_42(void *data, int argc, closure _,object k_7326) ;
static void __lambda_41(void *data, int argc, closure _, object k, object cond) ;
static void __lambda_40(void *data, int argc, closure _, object k, object cond) ;
static void __lambda_39(void *data, int argc, closure _, object k, object cond, object lock) ;
static void __lambda_38(void *data, int argc, closure _, object k) ;
static void __lambda_37(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_36(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_35(void *data, int argc, closure _,object k_7329, object mutex_7311, object opts_7310_raw, ...) ;
static void __lambda_34(void *data, int argc, object self_7368, object r_7330) ;
static void __lambda_33(void *data, int argc, object self_7369, object r_7334) ;
static void __lambda_32(void *data, int argc, object self_7370, object r_7331) ;
static void __lambda_31(void *data, int argc, object self_7371) ;
static void __lambda_30(void *data, int argc, object self_7372) ;
static void __lambda_29(void *data, int argc, object self_7373, object cond_91var_7312) ;
static void __lambda_28(void *data, int argc, object self_7374, object r_7333) ;
static void __lambda_27(void *data, int argc, object self_7375) ;
static void __lambda_26(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_25(void *data, int argc, closure _, object k) ;
static void __lambda_24(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_23(void *data, int argc, closure _, object k) ;
static void __lambda_22(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_21(void *data, int argc, closure _, object k, object timeout) ;
static void __lambda_20(void *data, int argc, closure _, object k) ;
static void __lambda_19(void *data, int argc, closure _,object k_7337) ;
static void __lambda_18(void *data, int argc, closure _,object k_7340, object t_7313) ;
static void __lambda_17(void *data, int argc, object self_7376, object r_7341) ;
static void __lambda_16(void *data, int argc, object self_7377, object thunk_7314) ;
static void __lambda_15(void *data, int argc, object self_7378, object mutator_91id_7315) ;
static void __lambda_14(void *data, int argc, object self_7379) ;
static void __lambda_13(void *data, int argc, closure _,object k_7346, object t_7317, object obj_7316) ;
static void __lambda_12(void *data, int argc, closure _,object k_7349, object t_7318) ;
static void __lambda_11(void *data, int argc, closure _,object k_7352, object t_7319) ;
static void __lambda_10(void *data, int argc, closure _,object k_7355, object thunk_7321, object name_7320_raw, ...) ;
static void __lambda_9(void *data, int argc, object self_7380, object name_91str_7322) ;
static void __lambda_8(void *data, int argc, object self_7381, object r_7357) ;
static void __lambda_7(void *data, int argc, object self_7382, object k_7358) ;
static void __lambda_6(void *data, int argc, object self_7383, object r_7359) ;
static void __lambda_5(void *data, int argc, closure _,object k_7362, object obj_7323) ;
static void __lambda_4(void *data, int argc, object self_7384, object r_7363) ;
static void __lambda_3(void *data, int argc, object self_7385, object r_7367) ;
static void __lambda_2(void *data, int argc, object self_7386, object r_7364) ;
static void __lambda_1(void *data, int argc, object self_7387, object r_7365) ;
static void __lambda_0(void *data, int argc, object self_7388, object r_7366) ;

static void __lambda_42(void *data, int argc, closure _,object k_7326) {
  Cyc_st_add(data, "srfi/18.sld:lib-init:srfi18");
return_closcall1(data,  k_7326,  obj_int2obj(0));; 
}

static void __lambda_41(void *data, int argc, closure _, object k, object cond) { Cyc_check_cond_var(data, cond);
        if (pthread_cond_broadcast(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, "Unable to broadcast condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_40(void *data, int argc, closure _, object k, object cond) { Cyc_check_cond_var(data, cond);
        if (pthread_cond_signal(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, "Unable to signal condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_39(void *data, int argc, closure _, object k, object cond, object lock) { Cyc_check_cond_var(data, cond);
        Cyc_check_mutex(data, lock);
        set_thread_blocked(data, k);
        if (pthread_cond_wait(
            &(((cond_var)cond)->cond),
            &(((mutex)lock)->lock)) != 0) {
          fprintf(stderr, "Unable to wait for condition variable\n");
          exit(1);
        }
        return_thread_runnable(data, boolean_t);  }
static void __lambda_38(void *data, int argc, closure _, object k) { int heap_grown;
        cond_var cond;
        cond_var_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = cond_var_tag;
        cond = gc_alloc(gc_get_heap(), sizeof(cond_var_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_cond_init(&(cond->cond), NULL) != 0) {
          fprintf(stderr, "Unable to make condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, cond);  }
static void __lambda_37(void *data, int argc, closure _, object k, object obj) { object result = Cyc_is_cond_var(obj);
        return_closcall1(data, k, result);  }
static void __lambda_36(void *data, int argc, closure _, object k, object obj) { mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        if (pthread_mutex_unlock(&(m->lock)) != 0) {
          fprintf(stderr, "Error unlocking mutex\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_35(void *data, int argc, closure _,object k_7329, object mutex_7311, object opts_7310_raw, ...) {
load_varargs(opts_7310, opts_7310_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:mutex-unlock!");

closureN_type c_73185;
c_73185.hdr.mark = gc_color_red;
 c_73185.hdr.grayed = 0;
c_73185.tag = closureN_tag;
 c_73185.fn = (function_type)__lambda_34;
c_73185.num_args = 1;
c_73185.num_elt = 3;
c_73185.elts = (object *)alloca(sizeof(object) * 3);
c_73185.elts[0] = k_7329;
c_73185.elts[1] = mutex_7311;
c_73185.elts[2] = opts_7310;

return_closcall1(data,(closure)&c_73185,  Cyc_is_null(opts_7310));; 
}

static void __lambda_34(void *data, int argc, object self_7368, object r_7330) {
  if( !eq(boolean_f, r_7330) ){ 
  
closureN_type c_73187;
c_73187.hdr.mark = gc_color_red;
 c_73187.hdr.grayed = 0;
c_73187.tag = closureN_tag;
 c_73187.fn = (function_type)__lambda_27;
c_73187.num_args = 0;
c_73187.num_elt = 2;
c_73187.elts = (object *)alloca(sizeof(object) * 2);
c_73187.elts[0] = ((closureN)self_7368)->elts[0];
c_73187.elts[1] = ((closureN)self_7368)->elts[1];

return_closcall0(data,(closure)&c_73187);
} else { 
  
closureN_type c_73192;
c_73192.hdr.mark = gc_color_red;
 c_73192.hdr.grayed = 0;
c_73192.tag = closureN_tag;
 c_73192.fn = (function_type)__lambda_33;
c_73192.num_args = 1;
c_73192.num_elt = 3;
c_73192.elts = (object *)alloca(sizeof(object) * 3);
c_73192.elts[0] = ((closureN)self_7368)->elts[0];
c_73192.elts[1] = ((closureN)self_7368)->elts[1];
c_73192.elts[2] = ((closureN)self_7368)->elts[2];

return_closcall1(data,(closure)&c_73192,  car(((closureN)self_7368)->elts[2]));}
; 
}

static void __lambda_33(void *data, int argc, object self_7369, object r_7334) {
  
closureN_type c_73194;
c_73194.hdr.mark = gc_color_red;
 c_73194.hdr.grayed = 0;
c_73194.tag = closureN_tag;
 c_73194.fn = (function_type)__lambda_32;
c_73194.num_args = 1;
c_73194.num_elt = 3;
c_73194.elts = (object *)alloca(sizeof(object) * 3);
c_73194.elts[0] = ((closureN)self_7369)->elts[0];
c_73194.elts[1] = ((closureN)self_7369)->elts[1];
c_73194.elts[2] = ((closureN)self_7369)->elts[2];

return_closcall2(data,  __glo_condition_91variable_127,  &c_73194, r_7334);; 
}

static void __lambda_32(void *data, int argc, object self_7370, object r_7331) {
  if( !eq(boolean_f, r_7331) ){ 
  
closureN_type c_73196;
c_73196.hdr.mark = gc_color_red;
 c_73196.hdr.grayed = 0;
c_73196.tag = closureN_tag;
 c_73196.fn = (function_type)__lambda_30;
c_73196.num_args = 0;
c_73196.num_elt = 3;
c_73196.elts = (object *)alloca(sizeof(object) * 3);
c_73196.elts[0] = ((closureN)self_7370)->elts[0];
c_73196.elts[1] = ((closureN)self_7370)->elts[1];
c_73196.elts[2] = ((closureN)self_7370)->elts[2];

return_closcall0(data,(closure)&c_73196);
} else { 
  
closureN_type c_73209;
c_73209.hdr.mark = gc_color_red;
 c_73209.hdr.grayed = 0;
c_73209.tag = closureN_tag;
 c_73209.fn = (function_type)__lambda_31;
c_73209.num_args = 0;
c_73209.num_elt = 3;
c_73209.elts = (object *)alloca(sizeof(object) * 3);
c_73209.elts[0] = ((closureN)self_7370)->elts[0];
c_73209.elts[1] = ((closureN)self_7370)->elts[1];
c_73209.elts[2] = ((closureN)self_7370)->elts[2];

return_closcall0(data,(closure)&c_73209);}
; 
}

static void __lambda_31(void *data, int argc, object self_7371) {
  
make_string(c_73212, "mutex-unlock! - unhandled args");
return_closcall4(data,  __glo_error,  ((closureN)self_7371)->elts[0], &c_73212, ((closureN)self_7371)->elts[1], ((closureN)self_7371)->elts[2]);; 
}

static void __lambda_30(void *data, int argc, object self_7372) {
  
closureN_type c_73198;
c_73198.hdr.mark = gc_color_red;
 c_73198.hdr.grayed = 0;
c_73198.tag = closureN_tag;
 c_73198.fn = (function_type)__lambda_29;
c_73198.num_args = 1;
c_73198.num_elt = 2;
c_73198.elts = (object *)alloca(sizeof(object) * 2);
c_73198.elts[0] = ((closureN)self_7372)->elts[0];
c_73198.elts[1] = ((closureN)self_7372)->elts[1];

return_closcall1(data,(closure)&c_73198,  car(((closureN)self_7372)->elts[2]));; 
}

static void __lambda_29(void *data, int argc, object self_7373, object cond_91var_7312) {
  
closureN_type c_73200;
c_73200.hdr.mark = gc_color_red;
 c_73200.hdr.grayed = 0;
c_73200.tag = closureN_tag;
 c_73200.fn = (function_type)__lambda_28;
c_73200.num_args = 1;
c_73200.num_elt = 2;
c_73200.elts = (object *)alloca(sizeof(object) * 2);
c_73200.elts[0] = ((closureN)self_7373)->elts[0];
c_73200.elts[1] = ((closureN)self_7373)->elts[1];

return_closcall3(data,  __glo_condition_91variable_91wait_67,  &c_73200, cond_91var_7312, ((closureN)self_7373)->elts[1]);; 
}

static void __lambda_28(void *data, int argc, object self_7374, object r_7333) {
  return_closcall2(data,  __glo_Cyc_91mutex_91unlock_67,  ((closureN)self_7374)->elts[0], ((closureN)self_7374)->elts[1]);; 
}

static void __lambda_27(void *data, int argc, object self_7375) {
  return_closcall2(data,  __glo_Cyc_91mutex_91unlock_67,  ((closureN)self_7375)->elts[0], ((closureN)self_7375)->elts[1]);; 
}

static void __lambda_26(void *data, int argc, closure _, object k, object obj) { mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        set_thread_blocked(data, k);
        if (pthread_mutex_lock(&(m->lock)) != 0) {
          fprintf(stderr, "Error locking mutex\n");
          exit(1);
        }
        return_thread_runnable(data, boolean_t);  }
static void __lambda_25(void *data, int argc, closure _, object k) { int heap_grown;
        mutex lock;
        mutex_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = mutex_tag;
        lock = gc_alloc(gc_get_heap(), sizeof(mutex_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_mutex_init(&(lock->lock), NULL) != 0) {
          fprintf(stderr, "Unable to make mutex\n");
          exit(1);
        }
        return_closcall1(data, k, lock);  }
static void __lambda_24(void *data, int argc, closure _, object k, object obj) { object result = Cyc_is_mutex(obj);
        return_closcall1(data, k, result);  }
static void __lambda_23(void *data, int argc, closure _, object k) { Cyc_trigger_minor_gc(data, k);  }
static void __lambda_22(void *data, int argc, closure _, object k, object obj) { object heap_obj = copy2heap(data, obj);
        return_closcall1(data, k, heap_obj);  }
static void __lambda_21(void *data, int argc, closure _, object k, object timeout) { set_thread_blocked(data, k);
        Cyc_thread_sleep(data, timeout);
        return_thread_runnable(data, boolean_t);  }
static void __lambda_20(void *data, int argc, closure _, object k) { Cyc_end_thread(data);  }
static void __lambda_19(void *data, int argc, closure _,object k_7337) {
  Cyc_st_add(data, "srfi/18.sld:thread-yield!");
return_closcall2(data,  __glo_thread_91sleep_67,  k_7337, obj_int2obj(1));; 
}

static void __lambda_18(void *data, int argc, closure _,object k_7340, object t_7313) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73156;
c_73156.hdr.mark = gc_color_red;
 c_73156.hdr.grayed = 0;
c_73156.tag = closureN_tag;
 c_73156.fn = (function_type)__lambda_17;
c_73156.num_args = 1;
c_73156.num_elt = 2;
c_73156.elts = (object *)alloca(sizeof(object) * 2);
c_73156.elts[0] = k_7340;
c_73156.elts[1] = t_7313;

return_closcall1(data,  __glo_Cyc_91minor_91gc,  &c_73156);; 
}

static void __lambda_17(void *data, int argc, object self_7376, object r_7341) {
  
closureN_type c_73158;
c_73158.hdr.mark = gc_color_red;
 c_73158.hdr.grayed = 0;
c_73158.tag = closureN_tag;
 c_73158.fn = (function_type)__lambda_16;
c_73158.num_args = 1;
c_73158.num_elt = 2;
c_73158.elts = (object *)alloca(sizeof(object) * 2);
c_73158.elts[0] = ((closureN)self_7376)->elts[0];
c_73158.elts[1] = ((closureN)self_7376)->elts[1];

return_closcall1(data,(closure)&c_73158,  Cyc_vector_ref(data, ((closureN)self_7376)->elts[1], obj_int2obj(1)));; 
}

static void __lambda_16(void *data, int argc, object self_7377, object thunk_7314) {
  
closureN_type c_73160;
c_73160.hdr.mark = gc_color_red;
 c_73160.hdr.grayed = 0;
c_73160.tag = closureN_tag;
 c_73160.fn = (function_type)__lambda_15;
c_73160.num_args = 1;
c_73160.num_elt = 2;
c_73160.elts = (object *)alloca(sizeof(object) * 2);
c_73160.elts[0] = ((closureN)self_7377)->elts[0];
c_73160.elts[1] = ((closureN)self_7377)->elts[1];

return_closcall1(data,(closure)&c_73160,  Cyc_spawn_thread(thunk_7314));; 
}

static void __lambda_15(void *data, int argc, object self_7378, object mutator_91id_7315) {
  
closureN_type c_73162;
c_73162.hdr.mark = gc_color_red;
 c_73162.hdr.grayed = 0;
c_73162.tag = closureN_tag;
 c_73162.fn = (function_type)__lambda_14;
c_73162.num_args = 0;
c_73162.num_elt = 3;
c_73162.elts = (object *)alloca(sizeof(object) * 3);
c_73162.elts[0] = ((closureN)self_7378)->elts[0];
c_73162.elts[1] = mutator_91id_7315;
c_73162.elts[2] = ((closureN)self_7378)->elts[1];

return_closcall0(data,(closure)&c_73162);; 
}

static void __lambda_14(void *data, int argc, object self_7379) {
  return_closcall1(data,  ((closureN)self_7379)->elts[0],  Cyc_vector_set(data, ((closureN)self_7379)->elts[2], obj_int2obj(2), ((closureN)self_7379)->elts[1]));; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7346, object t_7317, object obj_7316) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific-set!");
return_closcall1(data,  k_7346,  Cyc_vector_set(data, t_7317, obj_int2obj(4), obj_7316));; 
}

static void __lambda_12(void *data, int argc, closure _,object k_7349, object t_7318) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific");
return_closcall1(data,  k_7349,  Cyc_vector_ref(data, t_7318, obj_int2obj(4)));; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7352, object t_7319) {
  Cyc_st_add(data, "srfi/18.sld:thread-name");
return_closcall1(data,  k_7352,  Cyc_vector_ref(data, t_7319, obj_int2obj(3)));; 
}

static void __lambda_10(void *data, int argc, closure _,object k_7355, object thunk_7321, object name_7320_raw, ...) {
load_varargs(name_7320, name_7320_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73121;
c_73121.hdr.mark = gc_color_red;
 c_73121.hdr.grayed = 0;
c_73121.tag = closureN_tag;
 c_73121.fn = (function_type)__lambda_7;
c_73121.num_args = 0;
c_73121.num_elt = 1;
c_73121.elts = (object *)alloca(sizeof(object) * 1);
c_73121.elts[0] = name_7320;


closureN_type c_73135;
c_73135.hdr.mark = gc_color_red;
 c_73135.hdr.grayed = 0;
c_73135.tag = closureN_tag;
 c_73135.fn = (function_type)__lambda_9;
c_73135.num_args = 1;
c_73135.num_elt = 2;
c_73135.elts = (object *)alloca(sizeof(object) * 2);
c_73135.elts[0] = k_7355;
c_73135.elts[1] = thunk_7321;

return_closcall1(data,(closure)&c_73121,  &c_73135);; 
}

static void __lambda_9(void *data, int argc, object self_7380, object name_91str_7322) {
  
closureN_type c_73137;
c_73137.hdr.mark = gc_color_red;
 c_73137.hdr.grayed = 0;
c_73137.tag = closureN_tag;
 c_73137.fn = (function_type)__lambda_8;
c_73137.num_args = 1;
c_73137.num_elt = 3;
c_73137.elts = (object *)alloca(sizeof(object) * 3);
c_73137.elts[0] = ((closureN)self_7380)->elts[0];
c_73137.elts[1] = name_91str_7322;
c_73137.elts[2] = ((closureN)self_7380)->elts[1];

return_closcall1(data,(closure)&c_73137,  quote_cyc_91thread_91obj);; 
}

static void __lambda_8(void *data, int argc, object self_7381, object r_7357) {
  return_closcall6(data,  __glo_vector,  ((closureN)self_7381)->elts[0], r_7357, ((closureN)self_7381)->elts[2], boolean_f, ((closureN)self_7381)->elts[1], boolean_f);; 
}

static void __lambda_7(void *data, int argc, object self_7382, object k_7358) {
  
closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_6;
c_73123.num_args = 1;
c_73123.num_elt = 2;
c_73123.elts = (object *)alloca(sizeof(object) * 2);
c_73123.elts[0] = k_7358;
c_73123.elts[1] = ((closureN)self_7382)->elts[0];

return_closcall1(data,(closure)&c_73123,  Cyc_is_cons(((closureN)self_7382)->elts[0]));; 
}

static void __lambda_6(void *data, int argc, object self_7383, object r_7359) {
  if( !eq(boolean_f, r_7359) ){ 
  return_closcall1(data,  ((closureN)self_7383)->elts[0],  car(((closureN)self_7383)->elts[1]));
} else { 
  
make_string(c_73131, "");
return_closcall1(data,  ((closureN)self_7383)->elts[0],  &c_73131);}
; 
}

static void __lambda_5(void *data, int argc, closure _,object k_7362, object obj_7323) {
  Cyc_st_add(data, "srfi/18.sld:thread?");

closureN_type c_7391;
c_7391.hdr.mark = gc_color_red;
 c_7391.hdr.grayed = 0;
c_7391.tag = closureN_tag;
 c_7391.fn = (function_type)__lambda_4;
c_7391.num_args = 1;
c_7391.num_elt = 2;
c_7391.elts = (object *)alloca(sizeof(object) * 2);
c_7391.elts[0] = k_7362;
c_7391.elts[1] = obj_7323;

return_closcall1(data,(closure)&c_7391,  Cyc_is_vector(obj_7323));; 
}

static void __lambda_4(void *data, int argc, object self_7384, object r_7363) {
  if( !eq(boolean_f, r_7363) ){ 
  
closureN_type c_7393;
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_3;
c_7393.num_args = 1;
c_7393.num_elt = 2;
c_7393.elts = (object *)alloca(sizeof(object) * 2);
c_7393.elts[0] = ((closureN)self_7384)->elts[0];
c_7393.elts[1] = ((closureN)self_7384)->elts[1];

return_closcall1(data,(closure)&c_7393,  Cyc_vector_length(data, ((closureN)self_7384)->elts[1]));
} else { 
  return_closcall1(data,  ((closureN)self_7384)->elts[0],  boolean_f);}
; 
}

static void __lambda_3(void *data, int argc, object self_7385, object r_7367) {
  
closureN_type c_7395;
c_7395.hdr.mark = gc_color_red;
 c_7395.hdr.grayed = 0;
c_7395.tag = closureN_tag;
 c_7395.fn = (function_type)__lambda_2;
c_7395.num_args = 1;
c_7395.num_elt = 2;
c_7395.elts = (object *)alloca(sizeof(object) * 2);
c_7395.elts[0] = ((closureN)self_7385)->elts[0];
c_7395.elts[1] = ((closureN)self_7385)->elts[1];

return_closcall1(data,(closure)&c_7395,  __num_gt(data, r_7367, obj_int2obj(0)));; 
}

static void __lambda_2(void *data, int argc, object self_7386, object r_7364) {
  if( !eq(boolean_f, r_7364) ){ 
  
closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_1;
c_7397.num_args = 1;
c_7397.num_elt = 2;
c_7397.elts = (object *)alloca(sizeof(object) * 2);
c_7397.elts[0] = ((closureN)self_7386)->elts[0];
c_7397.elts[1] = ((closureN)self_7386)->elts[1];

return_closcall1(data,(closure)&c_7397,  quote_cyc_91thread_91obj);
} else { 
  return_closcall1(data,  ((closureN)self_7386)->elts[0],  boolean_f);}
; 
}

static void __lambda_1(void *data, int argc, object self_7387, object r_7365) {
  
closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_0;
c_7399.num_args = 1;
c_7399.num_elt = 2;
c_7399.elts = (object *)alloca(sizeof(object) * 2);
c_7399.elts[0] = ((closureN)self_7387)->elts[0];
c_7399.elts[1] = r_7365;

return_closcall1(data,(closure)&c_7399,  Cyc_vector_ref(data, ((closureN)self_7387)->elts[1], obj_int2obj(0)));; 
}

static void __lambda_0(void *data, int argc, object self_7388, object r_7366) {
  return_closcall1(data,  ((closureN)self_7388)->elts[0],  equalp(((closureN)self_7388)->elts[1], r_7366));; 
}

void c_srfi18_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_cyc_91thread_91obj = find_or_add_symbol("cyc-thread-obj");

  add_global((object *) &__glo_lib_91init_117srfi18);
  add_global((object *) &__glo_condition_91variable_91broadcast_67);
  add_global((object *) &__glo_condition_91variable_91signal_67);
  add_global((object *) &__glo_condition_91variable_91wait_67);
  add_global((object *) &__glo_make_91condition_91variable);
  add_global((object *) &__glo_condition_91variable_127);
  add_global((object *) &__glo_Cyc_91mutex_91unlock_67);
  add_global((object *) &__glo_mutex_91unlock_67);
  add_global((object *) &__glo_mutex_91lock_67);
  add_global((object *) &__glo_make_91mutex);
  add_global((object *) &__glo_mutex_127);
  add_global((object *) &__glo_Cyc_91minor_91gc);
  add_global((object *) &__glo__91_125heap);
  add_global((object *) &__glo_thread_91sleep_67);
  add_global((object *) &__glo_thread_91terminate_67);
  add_global((object *) &__glo_thread_91yield_67);
  add_global((object *) &__glo_thread_91start_67);
  add_global((object *) &__glo_thread_91specific_91set_67);
  add_global((object *) &__glo_thread_91specific);
  add_global((object *) &__glo_thread_91name);
  add_global((object *) &__glo_make_91thread);
  add_global((object *) &__glo_thread_127);
  add_symbol(quote_cyc_91thread_91obj);
  mclosure0(c_73226, (function_type)__lambda_42);c_73226.num_args = 0; 
  __glo_lib_91init_117srfi18 = &c_73226; 
  mclosure0(c_73225, (function_type)__lambda_41);c_73225.num_args = 1; 
  __glo_condition_91variable_91broadcast_67 = &c_73225; 
  mclosure0(c_73224, (function_type)__lambda_40);c_73224.num_args = 1; 
  __glo_condition_91variable_91signal_67 = &c_73224; 
  mclosure0(c_73223, (function_type)__lambda_39);c_73223.num_args = 2; 
  __glo_condition_91variable_91wait_67 = &c_73223; 
  mclosure0(c_73222, (function_type)__lambda_38);c_73222.num_args = 0; 
  __glo_make_91condition_91variable = &c_73222; 
  mclosure0(c_73221, (function_type)__lambda_37);c_73221.num_args = 1; 
  __glo_condition_91variable_127 = &c_73221; 
  mclosure0(c_73220, (function_type)__lambda_36);c_73220.num_args = 1; 
  __glo_Cyc_91mutex_91unlock_67 = &c_73220; 
  mclosure0(c_73183, (function_type)__lambda_35);c_73183.num_args = 1; 
  __glo_mutex_91unlock_67 = &c_73183; 
  mclosure0(c_73182, (function_type)__lambda_26);c_73182.num_args = 1; 
  __glo_mutex_91lock_67 = &c_73182; 
  mclosure0(c_73181, (function_type)__lambda_25);c_73181.num_args = 0; 
  __glo_make_91mutex = &c_73181; 
  mclosure0(c_73180, (function_type)__lambda_24);c_73180.num_args = 1; 
  __glo_mutex_127 = &c_73180; 
  mclosure0(c_73179, (function_type)__lambda_23);c_73179.num_args = 0; 
  __glo_Cyc_91minor_91gc = &c_73179; 
  mclosure0(c_73178, (function_type)__lambda_22);c_73178.num_args = 1; 
  __glo__91_125heap = &c_73178; 
  mclosure0(c_73177, (function_type)__lambda_21);c_73177.num_args = 1; 
  __glo_thread_91sleep_67 = &c_73177; 
  mclosure0(c_73176, (function_type)__lambda_20);c_73176.num_args = 0; 
  __glo_thread_91terminate_67 = &c_73176; 
  mclosure0(c_73174, (function_type)__lambda_19);c_73174.num_args = 0; 
  __glo_thread_91yield_67 = &c_73174; 
  mclosure0(c_73154, (function_type)__lambda_18);c_73154.num_args = 1; 
  __glo_thread_91start_67 = &c_73154; 
  mclosure0(c_73150, (function_type)__lambda_13);c_73150.num_args = 2; 
  __glo_thread_91specific_91set_67 = &c_73150; 
  mclosure0(c_73146, (function_type)__lambda_12);c_73146.num_args = 1; 
  __glo_thread_91specific = &c_73146; 
  mclosure0(c_73142, (function_type)__lambda_11);c_73142.num_args = 1; 
  __glo_thread_91name = &c_73142; 
  mclosure0(c_73119, (function_type)__lambda_10);c_73119.num_args = 1; 
  __glo_make_91thread = &c_73119; 
  mclosure0(c_7389, (function_type)__lambda_5);c_7389.num_args = 1; 
  __glo_thread_127 = &c_7389; 

  make_cvar(cvar_73228, (object *)&__glo_lib_91init_117srfi18);make_cons(pair_73229, find_or_add_symbol("lib-init:srfi18"), &cvar_73228);
  make_cvar(cvar_73230, (object *)&__glo_condition_91variable_91broadcast_67);make_cons(pair_73231, find_or_add_symbol("condition-variable-broadcast!"), &cvar_73230);
  make_cvar(cvar_73232, (object *)&__glo_condition_91variable_91signal_67);make_cons(pair_73233, find_or_add_symbol("condition-variable-signal!"), &cvar_73232);
  make_cvar(cvar_73234, (object *)&__glo_condition_91variable_91wait_67);make_cons(pair_73235, find_or_add_symbol("condition-variable-wait!"), &cvar_73234);
  make_cvar(cvar_73236, (object *)&__glo_make_91condition_91variable);make_cons(pair_73237, find_or_add_symbol("make-condition-variable"), &cvar_73236);
  make_cvar(cvar_73238, (object *)&__glo_condition_91variable_127);make_cons(pair_73239, find_or_add_symbol("condition-variable?"), &cvar_73238);
  make_cvar(cvar_73240, (object *)&__glo_Cyc_91mutex_91unlock_67);make_cons(pair_73241, find_or_add_symbol("Cyc-mutex-unlock!"), &cvar_73240);
  make_cvar(cvar_73242, (object *)&__glo_mutex_91unlock_67);make_cons(pair_73243, find_or_add_symbol("mutex-unlock!"), &cvar_73242);
  make_cvar(cvar_73244, (object *)&__glo_mutex_91lock_67);make_cons(pair_73245, find_or_add_symbol("mutex-lock!"), &cvar_73244);
  make_cvar(cvar_73246, (object *)&__glo_make_91mutex);make_cons(pair_73247, find_or_add_symbol("make-mutex"), &cvar_73246);
  make_cvar(cvar_73248, (object *)&__glo_mutex_127);make_cons(pair_73249, find_or_add_symbol("mutex?"), &cvar_73248);
  make_cvar(cvar_73250, (object *)&__glo_Cyc_91minor_91gc);make_cons(pair_73251, find_or_add_symbol("Cyc-minor-gc"), &cvar_73250);
  make_cvar(cvar_73252, (object *)&__glo__91_125heap);make_cons(pair_73253, find_or_add_symbol("->heap"), &cvar_73252);
  make_cvar(cvar_73254, (object *)&__glo_thread_91sleep_67);make_cons(pair_73255, find_or_add_symbol("thread-sleep!"), &cvar_73254);
  make_cvar(cvar_73256, (object *)&__glo_thread_91terminate_67);make_cons(pair_73257, find_or_add_symbol("thread-terminate!"), &cvar_73256);
  make_cvar(cvar_73258, (object *)&__glo_thread_91yield_67);make_cons(pair_73259, find_or_add_symbol("thread-yield!"), &cvar_73258);
  make_cvar(cvar_73260, (object *)&__glo_thread_91start_67);make_cons(pair_73261, find_or_add_symbol("thread-start!"), &cvar_73260);
  make_cvar(cvar_73262, (object *)&__glo_thread_91specific_91set_67);make_cons(pair_73263, find_or_add_symbol("thread-specific-set!"), &cvar_73262);
  make_cvar(cvar_73264, (object *)&__glo_thread_91specific);make_cons(pair_73265, find_or_add_symbol("thread-specific"), &cvar_73264);
  make_cvar(cvar_73266, (object *)&__glo_thread_91name);make_cons(pair_73267, find_or_add_symbol("thread-name"), &cvar_73266);
  make_cvar(cvar_73268, (object *)&__glo_make_91thread);make_cons(pair_73269, find_or_add_symbol("make-thread"), &cvar_73268);
  make_cvar(cvar_73270, (object *)&__glo_thread_127);make_cons(pair_73271, find_or_add_symbol("thread?"), &cvar_73270);
make_cons(c_73272, &pair_73229,Cyc_global_variables);
make_cons(c_73273, &pair_73231, &c_73272);
make_cons(c_73274, &pair_73233, &c_73273);
make_cons(c_73275, &pair_73235, &c_73274);
make_cons(c_73276, &pair_73237, &c_73275);
make_cons(c_73277, &pair_73239, &c_73276);
make_cons(c_73278, &pair_73241, &c_73277);
make_cons(c_73279, &pair_73243, &c_73278);
make_cons(c_73280, &pair_73245, &c_73279);
make_cons(c_73281, &pair_73247, &c_73280);
make_cons(c_73282, &pair_73249, &c_73281);
make_cons(c_73283, &pair_73251, &c_73282);
make_cons(c_73284, &pair_73253, &c_73283);
make_cons(c_73285, &pair_73255, &c_73284);
make_cons(c_73286, &pair_73257, &c_73285);
make_cons(c_73287, &pair_73259, &c_73286);
make_cons(c_73288, &pair_73261, &c_73287);
make_cons(c_73289, &pair_73263, &c_73288);
make_cons(c_73290, &pair_73265, &c_73289);
make_cons(c_73291, &pair_73267, &c_73290);
make_cons(c_73292, &pair_73269, &c_73291);
make_cons(c_73293, &pair_73271, &c_73292);
Cyc_global_variables = &c_73293;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117srfi18)->fn)(data, 1, cont, cont);
}
