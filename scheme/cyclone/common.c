/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.6 
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
object __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = NULL;
object __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = NULL;
object __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_85_scheme_cyclone_common = NULL;
object __glo__85version_91name_85_scheme_cyclone_common = NULL;
object __glo__85version_91number_85_scheme_cyclone_common = NULL;
#include "cyclone/runtime.h"
static void __lambda_6(void *data, int argc, closure _,object k_733) ;
static void __lambda_5(void *data, int argc, object self_7323, object r_7310) ;
static void __lambda_4(void *data, int argc, object self_7324, object r_735) ;
static void __lambda_3(void *data, int argc, object self_7325, object r_739) ;
static void __lambda_2(void *data, int argc, object self_7326, object r_736) ;
static void __lambda_1(void *data, int argc, object self_7327, object r_737) ;
static void __lambda_0(void *data, int argc, object self_7328, object r_738) ;

static void __lambda_6(void *data, int argc, closure _,object k_733) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7333;
c_7333.hdr.mark = gc_color_red;
 c_7333.hdr.grayed = 0;
c_7333.tag = closureN_tag;
 c_7333.fn = (function_type)__lambda_5;
c_7333.num_args = 1;
c_7333.num_elements = 1;
c_7333.elements = (object *)alloca(sizeof(object) * 1);
c_7333.elements[0] = k_733;


make_string(c_7367, " ");

make_string(c_7368, "");

object c_7366 = Cyc_string_append(data,(closure)&c_7333,4,__glo__85version_91number_85_scheme_cyclone_common, &c_7367, __glo__85version_91name_85_scheme_cyclone_common, &c_7368);
return_closcall1(data,(closure)&c_7333,  c_7366);; 
}

static void __lambda_5(void *data, int argc, object self_7323, object r_7310) {
  
closureN_type c_7335;
c_7335.hdr.mark = gc_color_red;
 c_7335.hdr.grayed = 0;
c_7335.tag = closureN_tag;
 c_7335.fn = (function_type)__lambda_4;
c_7335.num_args = 1;
c_7335.num_elements = 1;
c_7335.elements = (object *)alloca(sizeof(object) * 1);
c_7335.elements[0] = ((closureN)self_7323)->elements[0];

return_closcall1(data,(closure)&c_7335,  global_set(__glo__85version_85_scheme_cyclone_common, r_7310));; 
}

static void __lambda_4(void *data, int argc, object self_7324, object r_735) {
  
closureN_type c_7337;
c_7337.hdr.mark = gc_color_red;
 c_7337.hdr.grayed = 0;
c_7337.tag = closureN_tag;
 c_7337.fn = (function_type)__lambda_3;
c_7337.num_args = 1;
c_7337.num_elements = 1;
c_7337.elements = (object *)alloca(sizeof(object) * 1);
c_7337.elements[0] = ((closureN)self_7324)->elements[0];


make_string(c_7360, "\n              :@ \n            @@@  \n          @@@@:  \n        `@@@@@+  \n       .@@@+@@@ \n       @@     @@     Cyclone Scheme->C compiler\n      ,@             http://justinethier.github.io/cyclone/\n      '@        \n      .@             (c) 2014-2017 Justin Ethier\n       @@     #@     Version ");

make_string(c_7361, "\n       `@@@#@@@.\n        #@@@@@   \n        +@@@+    \n        @@#      \n      `@.  \n     \n");

object c_7359 = Cyc_string_append(data,(closure)&c_7337,3,&c_7360, __glo__85version_85_scheme_cyclone_common, &c_7361);
return_closcall1(data,(closure)&c_7337,  c_7359);; 
}

static void __lambda_3(void *data, int argc, object self_7325, object r_739) {
  
closureN_type c_7339;
c_7339.hdr.mark = gc_color_red;
 c_7339.hdr.grayed = 0;
c_7339.tag = closureN_tag;
 c_7339.fn = (function_type)__lambda_2;
c_7339.num_args = 1;
c_7339.num_elements = 1;
c_7339.elements = (object *)alloca(sizeof(object) * 1);
c_7339.elements[0] = ((closureN)self_7325)->elements[0];

return_closcall1(data,(closure)&c_7339,  global_set(__glo__85version_91banner_85_scheme_cyclone_common, r_739));; 
}

static void __lambda_2(void *data, int argc, object self_7326, object r_736) {
  
closureN_type c_7341;
c_7341.hdr.mark = gc_color_red;
 c_7341.hdr.grayed = 0;
c_7341.tag = closureN_tag;
 c_7341.fn = (function_type)__lambda_1;
c_7341.num_args = 1;
c_7341.num_elements = 1;
c_7341.elements = (object *)alloca(sizeof(object) * 1);
c_7341.elements[0] = ((closureN)self_7326)->elements[0];

return_closcall1(data,(closure)&c_7341,  global_set(__glo__85Cyc_91version_91banner_85_scheme_cyclone_common, __glo__85version_91banner_85_scheme_cyclone_common));; 
}

static void __lambda_1(void *data, int argc, object self_7327, object r_737) {
  
closureN_type c_7343;
c_7343.hdr.mark = gc_color_red;
 c_7343.hdr.grayed = 0;
c_7343.tag = closureN_tag;
 c_7343.fn = (function_type)__lambda_0;
c_7343.num_args = 1;
c_7343.num_elements = 1;
c_7343.elements = (object *)alloca(sizeof(object) * 1);
c_7343.elements[0] = ((closureN)self_7327)->elements[0];


make_string(c_7351, "/**\n ** This file was automatically generated by the Cyclone scheme compiler\n ** http://justinethier.github.io/cyclone/\n **\n ** (c) 2014-2017 Justin Ethier\n ** Version ");

make_string(c_7352, "\n **\n **/\n");

object c_7350 = Cyc_string_append(data,(closure)&c_7343,3,&c_7351, __glo__85version_85_scheme_cyclone_common, &c_7352);
return_closcall1(data,(closure)&c_7343,  c_7350);; 
}

static void __lambda_0(void *data, int argc, object self_7328, object r_738) {
  return_closcall1(data,  ((closureN)self_7328)->elements[0],  global_set(__glo__85c_91file_91header_91comment_85_scheme_cyclone_common, r_738));; 
}

void c_schemecyclonecommon_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);
  add_global((object *) &__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);
  add_global((object *) &__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91banner_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91name_85_scheme_cyclone_common);
  add_global((object *) &__glo__85version_91number_85_scheme_cyclone_common);
  mclosure0(c_7331, (function_type)__lambda_6);c_7331.num_args = 0; 
  __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = &c_7331; 
  __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = boolean_f; 
  __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_85_scheme_cyclone_common = boolean_f; 
  make_string(c_7330, ""); 
  __glo__85version_91name_85_scheme_cyclone_common = &c_7330; 
  make_string(c_7329, "0.6"); 
  __glo__85version_91number_85_scheme_cyclone_common = &c_7329; 

  mclosure0(clo_7370, c_schemecyclonecommon_inlinable_lambdas); make_pair(pair_7369, find_or_add_symbol("c_schemecyclonecommon_inlinable_lambdas"), &clo_7370);
  make_cvar(cvar_7371, (object *)&__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);make_pair(pair_7372, find_or_add_symbol("lib-init:schemecyclonecommon"), &cvar_7371);
  make_cvar(cvar_7373, (object *)&__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);make_pair(pair_7374, find_or_add_symbol("*c-file-header-comment*"), &cvar_7373);
  make_cvar(cvar_7375, (object *)&__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);make_pair(pair_7376, find_or_add_symbol("*Cyc-version-banner*"), &cvar_7375);
  make_cvar(cvar_7377, (object *)&__glo__85version_91banner_85_scheme_cyclone_common);make_pair(pair_7378, find_or_add_symbol("*version-banner*"), &cvar_7377);
  make_cvar(cvar_7379, (object *)&__glo__85version_85_scheme_cyclone_common);make_pair(pair_7380, find_or_add_symbol("*version*"), &cvar_7379);
  make_cvar(cvar_7381, (object *)&__glo__85version_91name_85_scheme_cyclone_common);make_pair(pair_7382, find_or_add_symbol("*version-name*"), &cvar_7381);
  make_cvar(cvar_7383, (object *)&__glo__85version_91number_85_scheme_cyclone_common);make_pair(pair_7384, find_or_add_symbol("*version-number*"), &cvar_7383);
make_pair(c_7385, &pair_7369,Cyc_global_variables);
make_pair(c_7386, &pair_7372, &c_7385);
make_pair(c_7387, &pair_7374, &c_7386);
make_pair(c_7388, &pair_7376, &c_7387);
make_pair(c_7389, &pair_7378, &c_7388);
make_pair(c_7390, &pair_7380, &c_7389);
make_pair(c_7391, &pair_7382, &c_7390);
make_pair(c_7392, &pair_7384, &c_7391);
Cyc_global_variables = &c_7392;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common)->fn)(data, 1, cont, cont);
}
void c_schemecyclonecommon_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cyclone_common");
  c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value);
}
