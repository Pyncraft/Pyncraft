/* Generated code for Python module 'direct.tkwidgets.VectorWidgets'
 * created by Nuitka version 1.8.2
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_direct$tkwidgets$VectorWidgets" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$tkwidgets$VectorWidgets;
PyDictObject *moduledict_direct$tkwidgets$VectorWidgets;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[230];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[230];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("direct.tkwidgets.VectorWidgets"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 230; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$tkwidgets$VectorWidgets(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 230; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_dc4d2b214be5e472dc9b0d13b4d06aca;
static PyCodeObject *codeobj_9ab5820e9e547483acb3e9a064ad0ce8;
static PyCodeObject *codeobj_ac71763da707bf3115731fd228078b48;
static PyCodeObject *codeobj_a278a6dcfc2cdfed9aa8d519f10ab5b2;
static PyCodeObject *codeobj_d5529a68a8a31357cd61870ff5475d8f;
static PyCodeObject *codeobj_6f875ede42349eb58fad405ff66eeb6f;
static PyCodeObject *codeobj_0b78a4469e78b833e1e82bd009186e83;
static PyCodeObject *codeobj_4b82f6adfc5b78fcb6029f95952956be;
static PyCodeObject *codeobj_8096569496a9c79ca453890ead47673d;
static PyCodeObject *codeobj_1cd536f2ad0ab362a2cfd0faf0993464;
static PyCodeObject *codeobj_8133a9d38dc85ee2ebaf52ff253f8174;
static PyCodeObject *codeobj_2f8f747aa2d7ed13764630ea2f78892d;
static PyCodeObject *codeobj_d535fe987e2be54ab803def61ffcf286;
static PyCodeObject *codeobj_192e4d9fe012ddb3d97d2f217aab794b;
static PyCodeObject *codeobj_196f650e5a120cc0314470afa4fb18e1;
static PyCodeObject *codeobj_30507b760bd0712234b3029090e3ad29;
static PyCodeObject *codeobj_bc58e5e4d18019f63e9f717467cbb036;
static PyCodeObject *codeobj_16a0af82f4f5eeda93a2bbe15d4f0bd6;
static PyCodeObject *codeobj_b43dfba02bab1eeced66f9167918461d;
static PyCodeObject *codeobj_dd9c3fbedc549007f2cee94bb543dd12;
static PyCodeObject *codeobj_302b4670ae89c666ce7f8b2290db9b06;
static PyCodeObject *codeobj_50f9ab7c23c0e21dd46e6213fb77ad77;
static PyCodeObject *codeobj_ddf34f5b7b574900c1177e3fbf0189e6;
static PyCodeObject *codeobj_814d4564753dc8573a5878c16173d89a;
static PyCodeObject *codeobj_d4ca2ba10fa7d307ed88a636b9689a42;
static PyCodeObject *codeobj_d25e7abf9b13a3af0419b75038e1cced;
static PyCodeObject *codeobj_5cdb462b52d693c57fde097003169b9e;
static PyCodeObject *codeobj_f66204e2ca15b409656d7ea407241b8e;
static PyCodeObject *codeobj_f25852b5679a5e49fda31794cecb4fc2;
static PyCodeObject *codeobj_535390486bca3ca12e841b65600fb9ac;
static PyCodeObject *codeobj_713201a4295167da0c51a2aad61840a0;
static PyCodeObject *codeobj_ff69aa24dada78c3288da0c919690b3a;
static PyCodeObject *codeobj_85f6510c29773fd8e295c9d86de9bdbc;
static PyCodeObject *codeobj_0e14bdd5905b18aaa31d17db05ff3a47;
static PyCodeObject *codeobj_4e61741404b9e18388936774f9c48a14;
static PyCodeObject *codeobj_6c065841bb6c326a078cd3f90dc1559a;
static PyCodeObject *codeobj_cc0ee5d1e310b4cb43281b4c376ba9f9;
static PyCodeObject *codeobj_f459acb78df40f5cc1ea79207d36ecdf;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[214]); CHECK_OBJECT(module_filename_obj);
    codeobj_dc4d2b214be5e472dc9b0d13b4d06aca = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[73], mod_consts[73], mod_consts[215], NULL, 1, 0, 0);
    codeobj_9ab5820e9e547483acb3e9a064ad0ce8 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[73], mod_consts[73], mod_consts[216], NULL, 2, 0, 0);
    codeobj_ac71763da707bf3115731fd228078b48 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[217], mod_consts[217], NULL, NULL, 0, 0, 0);
    codeobj_a278a6dcfc2cdfed9aa8d519f10ab5b2 = MAKE_CODE_OBJECT(module_filename_obj, 308, 0, mod_consts[144], mod_consts[144], mod_consts[218], NULL, 0, 0, 0);
    codeobj_d5529a68a8a31357cd61870ff5475d8f = MAKE_CODE_OBJECT(module_filename_obj, 266, 0, mod_consts[129], mod_consts[129], mod_consts[218], NULL, 0, 0, 0);
    codeobj_6f875ede42349eb58fad405ff66eeb6f = MAKE_CODE_OBJECT(module_filename_obj, 280, 0, mod_consts[130], mod_consts[130], mod_consts[218], NULL, 0, 0, 0);
    codeobj_0b78a4469e78b833e1e82bd009186e83 = MAKE_CODE_OBJECT(module_filename_obj, 294, 0, mod_consts[133], mod_consts[133], mod_consts[218], NULL, 0, 0, 0);
    codeobj_4b82f6adfc5b78fcb6029f95952956be = MAKE_CODE_OBJECT(module_filename_obj, 16, 0, mod_consts[91], mod_consts[91], mod_consts[218], NULL, 0, 0, 0);
    codeobj_8096569496a9c79ca453890ead47673d = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[35], mod_consts[35], mod_consts[219], NULL, 2, 0, 0);
    codeobj_1cd536f2ad0ab362a2cfd0faf0993464 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[35], mod_consts[35], mod_consts[220], NULL, 2, 0, 0);
    codeobj_8133a9d38dc85ee2ebaf52ff253f8174 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[35], mod_consts[35], mod_consts[220], NULL, 2, 0, 0);
    codeobj_2f8f747aa2d7ed13764630ea2f78892d = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[35], mod_consts[35], mod_consts[220], NULL, 2, 0, 0);
    codeobj_d535fe987e2be54ab803def61ffcf286 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[35], mod_consts[35], mod_consts[220], NULL, 2, 0, 0);
    codeobj_192e4d9fe012ddb3d97d2f217aab794b = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[185], mod_consts[185], mod_consts[221], NULL, 1, 0, 0);
    codeobj_196f650e5a120cc0314470afa4fb18e1 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[222], NULL, 2, 0, 0);
    codeobj_30507b760bd0712234b3029090e3ad29 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[99], mod_consts[223], NULL, 2, 0, 0);
    codeobj_bc58e5e4d18019f63e9f717467cbb036 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[221], NULL, 1, 0, 0);
    codeobj_16a0af82f4f5eeda93a2bbe15d4f0bd6 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[28], mod_consts[224], NULL, 1, 0, 0);
    codeobj_b43dfba02bab1eeced66f9167918461d = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[221], NULL, 1, 0, 0);
    codeobj_dd9c3fbedc549007f2cee94bb543dd12 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[20], mod_consts[20], mod_consts[221], NULL, 1, 0, 0);
    codeobj_302b4670ae89c666ce7f8b2290db9b06 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[221], NULL, 1, 0, 0);
    codeobj_50f9ab7c23c0e21dd46e6213fb77ad77 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[221], NULL, 1, 0, 0);
    codeobj_ddf34f5b7b574900c1177e3fbf0189e6 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[23], mod_consts[23], mod_consts[221], NULL, 1, 0, 0);
    codeobj_814d4564753dc8573a5878c16173d89a = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[25], mod_consts[221], NULL, 1, 0, 0);
    codeobj_d4ca2ba10fa7d307ed88a636b9689a42 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], mod_consts[225], NULL, 2, 0, 0);
    codeobj_d25e7abf9b13a3af0419b75038e1cced = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[140], mod_consts[140], mod_consts[226], NULL, 3, 0, 0);
    codeobj_5cdb462b52d693c57fde097003169b9e = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[180], mod_consts[180], mod_consts[223], NULL, 2, 0, 0);
    codeobj_f66204e2ca15b409656d7ea407241b8e = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[63], mod_consts[63], mod_consts[221], NULL, 1, 0, 0);
    codeobj_f25852b5679a5e49fda31794cecb4fc2 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[183], mod_consts[183], mod_consts[221], NULL, 1, 0, 0);
    codeobj_535390486bca3ca12e841b65600fb9ac = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[110], mod_consts[221], NULL, 1, 0, 0);
    codeobj_713201a4295167da0c51a2aad61840a0 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[150], mod_consts[150], mod_consts[223], NULL, 2, 0, 0);
    codeobj_ff69aa24dada78c3288da0c919690b3a = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[221], NULL, 1, 0, 0);
    codeobj_85f6510c29773fd8e295c9d86de9bdbc = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[221], NULL, 1, 0, 0);
    codeobj_0e14bdd5905b18aaa31d17db05ff3a47 = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[145], mod_consts[145], mod_consts[227], NULL, 1, 0, 0);
    codeobj_4e61741404b9e18388936774f9c48a14 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[56], mod_consts[56], mod_consts[221], NULL, 1, 0, 0);
    codeobj_6c065841bb6c326a078cd3f90dc1559a = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[53], mod_consts[221], NULL, 1, 0, 0);
    codeobj_cc0ee5d1e310b4cb43281b4c376ba9f9 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[228], NULL, 3, 0, 0);
    codeobj_f459acb78df40f5cc1ea79207d36ecdf = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[197], mod_consts[197], mod_consts[229], NULL, 4, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__10__updateBorderWidth();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__11__updateEntryWidth();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__12__setSigDigits();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__13__updateValidate();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__14_get();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__15_getAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__16_set(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__17_setAt(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__18__entryUpdateAt();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__19__refreshEntry();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__1___init__$$$function__1_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__20__refreshFloaters();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__21_action(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__22_reset();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__23_addMenuItem(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__24_popupSliders();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__25__setState();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__26___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__27___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__28___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__29___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__29___init__$$$function__1_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__2_menu();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__30_popupColorPicker();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__3_label();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__4_entry();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__5_entryList();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__6_floaters();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__7__clearFloaters();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__8__updateText();


static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__9__updateRelief();


// The module function definitions.
static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_DEFAULT_VALUE = NULL;
    PyObject *var_DEFAULT_LABELS = NULL;
    PyObject *var_INITOPT = NULL;
    PyObject *var_optiondefs = NULL;
    PyObject *var_interior = NULL;
    PyObject *var_index = NULL;
    PyObject *var_var = NULL;
    PyObject *var_entry = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_8096569496a9c79ca453890ead47673d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_8096569496a9c79ca453890ead47673d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8096569496a9c79ca453890ead47673d)) {
        Py_XDECREF(cache_frame_8096569496a9c79ca453890ead47673d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8096569496a9c79ca453890ead47673d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8096569496a9c79ca453890ead47673d = MAKE_FUNCTION_FRAME(tstate, codeobj_8096569496a9c79ca453890ead47673d, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8096569496a9c79ca453890ead47673d->m_type_description == NULL);
    frame_8096569496a9c79ca453890ead47673d = cache_frame_8096569496a9c79ca453890ead47673d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8096569496a9c79ca453890ead47673d);
    assert(Py_REFCNT(frame_8096569496a9c79ca453890ead47673d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        tmp_mult_expr_left_1 = MAKE_LIST1(mod_consts[0]);
        CHECK_OBJECT(par_kw);
        tmp_dict_arg_value_1 = par_kw;
        tmp_key_value_1 = mod_consts[1];
        tmp_default_value_1 = mod_consts[2];
        tmp_mult_expr_right_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            tmp_mult_expr_right_1 = tmp_default_value_1;
            Py_INCREF(tmp_mult_expr_right_1);
        }
        assert(!(tmp_mult_expr_right_1 == NULL));
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_DEFAULT_VALUE == NULL);
        var_DEFAULT_VALUE = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_dict_arg_value_2;
            PyObject *tmp_key_value_2;
            PyObject *tmp_default_value_2;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_kw);
            tmp_dict_arg_value_2 = par_kw;
            tmp_key_value_2 = mod_consts[1];
            tmp_default_value_2 = mod_consts[2];
            tmp_args_element_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
            if (tmp_args_element_value_1 == NULL) {
                tmp_args_element_value_1 = tmp_default_value_2;
                Py_INCREF(tmp_args_element_value_1);
            }
            assert(!(tmp_args_element_value_1 == NULL));
            frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 23;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooNoooooooo";
                    exception_lineno = 23;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_6;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mod_expr_left_1 = mod_consts[4];
            CHECK_OBJECT(outline_0_var_x);
            tmp_mod_expr_right_1 = outline_0_var_x;
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooNoooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 23;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_DEFAULT_LABELS == NULL);
        var_DEFAULT_LABELS = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_INITOPT == NULL);
        var_INITOPT = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[1];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[2];
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_INITOPT);
        tmp_tuple_element_2 = var_INITOPT;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        tmp_assign_source_8 = MAKE_TUPLE_EMPTY(15);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[7];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_DEFAULT_VALUE);
            tmp_tuple_element_3 = var_DEFAULT_VALUE;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_INITOPT);
            tmp_tuple_element_3 = var_INITOPT;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_1);
            tmp_tuple_element_4 = mod_consts[8];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_DEFAULT_VALUE);
            tmp_tuple_element_4 = var_DEFAULT_VALUE;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_None;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_assign_source_8, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[11];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 5, tmp_tuple_element_1);
            tmp_tuple_element_5 = mod_consts[12];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[13];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_5);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 6, tmp_tuple_element_1);
            tmp_tuple_element_6 = mod_consts[15];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_3;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_tuple_element_6 == NULL)) {
                    tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
                }

                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_6);
                CHECK_OBJECT(par_self);
                tmp_expression_value_3 = par_self;
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[17]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 7, tmp_tuple_element_1);
            tmp_tuple_element_7 = mod_consts[18];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_4;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = mod_consts[19];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_7);
                CHECK_OBJECT(par_self);
                tmp_expression_value_4 = par_self;
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[20]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 8, tmp_tuple_element_1);
            tmp_tuple_element_8 = mod_consts[21];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[22];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_8);
                CHECK_OBJECT(par_self);
                tmp_expression_value_5 = par_self;
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[23]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 9, tmp_tuple_element_1);
            tmp_tuple_element_9 = mod_consts[24];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_6;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_9);
                tmp_tuple_element_9 = Py_None;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_9);
                CHECK_OBJECT(par_self);
                tmp_expression_value_6 = par_self;
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 10, tmp_tuple_element_1);
            tmp_tuple_element_10 = mod_consts[26];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_7;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = Py_None;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_10);
                CHECK_OBJECT(par_self);
                tmp_expression_value_7 = par_self;
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[25]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 11, tmp_tuple_element_1);
            tmp_tuple_element_11 = mod_consts[27];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[19];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_11);
                CHECK_OBJECT(par_self);
                tmp_expression_value_8 = par_self;
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[28]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 12, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_assign_source_8, 13, tmp_tuple_element_1);
            tmp_tuple_element_12 = mod_consts[30];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_9;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = mod_consts[31];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_12);
                CHECK_OBJECT(par_self);
                tmp_expression_value_9 = par_self;
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[32]);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_1 = "oooNoooooooo";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            PyTuple_SET_ITEM(tmp_assign_source_8, 14, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_2 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_3 = var_optiondefs;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[34]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_4 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_5 = par_parent;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[35],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_subscript_value_1 = mod_consts[7];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 51;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[8];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[39];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[40], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 57;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[41]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interior == NULL);
        var_interior = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[42]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[43];
        tmp_kw_call_arg_value_1_1 = mod_consts[44];
        tmp_kw_call_arg_value_2_1 = Py_None;
        tmp_kw_call_arg_value_3_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
            tmp_kw_call_arg_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 61;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_interior);
        tmp_tuple_element_13 = var_interior;
        tmp_kw_call_arg_value_4_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_1, 0, tmp_tuple_element_13);
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_subscript_value_3 = mod_consts[21];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 62;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[46];
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 60;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[48], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_15;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[48]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 64;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_5 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[50], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[48]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subscript_2 = mod_consts[50];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[50]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[51]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[52];
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[53]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 65;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 65;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[50]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[51]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[55];
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[56]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 66;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[48]);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[57]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 67;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 67;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_subscript_value_4 = mod_consts[60];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_4);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 67;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 67;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_1};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[62], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[63], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_5;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_subscript_value_5 = mod_consts[1];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_5);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 71;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNoooooooo";
                exception_lineno = 71;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_13;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 72;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_var;
            var_var = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 73;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[62]);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[66]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_var);
        tmp_args_element_value_9 = var_var;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 73;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_arg_value_4_2;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_17;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 78;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_29 = par_self;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[42]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_left_2 = mod_consts[67];
        CHECK_OBJECT(var_index);
        tmp_mod_expr_right_2 = var_index;
        tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 79;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_left_3 = mod_consts[68];
        CHECK_OBJECT(var_index);
        tmp_mod_expr_right_3 = var_index;
        tmp_tuple_element_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 80;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyTuple_SET_ITEM(tmp_tuple_element_14, 0, tmp_tuple_element_15);
            tmp_mod_expr_left_4 = mod_consts[69];
            CHECK_OBJECT(var_index);
            tmp_mod_expr_right_4 = var_index;
            tmp_tuple_element_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "oooNoooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_14, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_tuple_element_14);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_kw_call_arg_value_1_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_1_2, 0, tmp_tuple_element_14);
        tmp_kw_call_arg_value_2_2 = mod_consts[70];
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[71]);
        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        if (var_interior == NULL) {
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_3_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }

        tmp_tuple_element_16 = var_interior;
        tmp_kw_call_arg_value_4_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_4_2, 0, tmp_tuple_element_16);
        tmp_kw_call_dict_value_0_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            tmp_kw_call_dict_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_3_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 84;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_var);
        tmp_kw_call_dict_value_1_2 = var_var;
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_3_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 86;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }

        tmp_tuple_element_17 = par_self;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_17);
        CHECK_OBJECT(var_index);
        tmp_tuple_element_17 = var_index;
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_17);


        tmp_kw_call_dict_value_2_1 = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__1___init__$$$function__1_lambda(tmp_defaults_1);

        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 78;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_arg_value_3_2);
        Py_DECREF(tmp_kw_call_arg_value_4_2);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_entry;
            var_entry = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(var_entry);
        tmp_expression_value_31 = var_entry;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[57]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 87;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_1_4 = mod_consts[76];
        tmp_kw_call_value_2_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
            tmp_kw_call_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 87;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 87;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_2};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 88;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_33 = par_self;
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[63]);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[66]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_entry);
        tmp_args_element_value_10 = var_entry;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 88;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooNoooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 71;
        type_description_1 = "oooNoooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_arg_value_3_3;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_arg_value_4_3;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_assattr_target_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = par_self;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[42]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[78];
        tmp_kw_call_arg_value_1_3 = mod_consts[79];
        tmp_kw_call_arg_value_2_3 = Py_None;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 102;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_3_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[81]);
        if (tmp_kw_call_arg_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 102;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 102;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_self;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 102;
        tmp_tuple_element_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[41]);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);

            exception_lineno = 102;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_4_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_4_3, 0, tmp_tuple_element_18);
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 103;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = par_self;
        tmp_subscript_value_6 = mod_consts[1];
        tmp_kw_call_dict_value_0_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_6);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            Py_DECREF(tmp_kw_call_arg_value_4_3);

            exception_lineno = 103;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 105;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = par_self;
        tmp_subscript_value_7 = mod_consts[82];
        tmp_kw_call_dict_value_1_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_7);
        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 105;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 106;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_self;
        tmp_kw_call_dict_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[83]);
        if (tmp_kw_call_dict_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_arg_value_3_3);
            Py_DECREF(tmp_kw_call_arg_value_4_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);

            exception_lineno = 106;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_3, tmp_kw_call_arg_value_4_3};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_2};
            tmp_assattr_value_8 = CALL_FUNCTION_WITH_ARGS5_KWSPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[84]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_arg_value_3_3);
        Py_DECREF(tmp_kw_call_arg_value_4_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_2_2);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[38], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = par_self;
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[38]);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[85]);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = par_self;
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[38]);
        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[86]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 110;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 111;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[38]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 111;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[86]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 115;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = par_self;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[83]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 115;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = par_self;
        tmp_subscript_value_8 = mod_consts[7];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_8);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 115;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 115;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_assattr_target_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 118;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = par_self;
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 118;
        tmp_assattr_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 118;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[89], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 121;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_46 = par_self;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[90]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 121;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        frame_8096569496a9c79ca453890ead47673d->m_frame.f_lineno = 121;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooNoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8096569496a9c79ca453890ead47673d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8096569496a9c79ca453890ead47673d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8096569496a9c79ca453890ead47673d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8096569496a9c79ca453890ead47673d,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        NULL,
        var_DEFAULT_VALUE,
        var_DEFAULT_LABELS,
        var_INITOPT,
        var_optiondefs,
        var_interior,
        var_index,
        var_var,
        var_entry
    );


    // Release cached frame if used for exception.
    if (frame_8096569496a9c79ca453890ead47673d == cache_frame_8096569496a9c79ca453890ead47673d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8096569496a9c79ca453890ead47673d);
        cache_frame_8096569496a9c79ca453890ead47673d = NULL;
    }

    assertFrameObject(frame_8096569496a9c79ca453890ead47673d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_DEFAULT_VALUE);
    Py_DECREF(var_DEFAULT_VALUE);
    var_DEFAULT_VALUE = NULL;
    CHECK_OBJECT(var_DEFAULT_LABELS);
    Py_DECREF(var_DEFAULT_LABELS);
    var_DEFAULT_LABELS = NULL;
    CHECK_OBJECT(var_INITOPT);
    Py_DECREF(var_INITOPT);
    var_INITOPT = NULL;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    Py_XDECREF(var_interior);
    var_interior = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_DEFAULT_VALUE);
    var_DEFAULT_VALUE = NULL;
    Py_XDECREF(var_DEFAULT_LABELS);
    var_DEFAULT_LABELS = NULL;
    Py_XDECREF(var_INITOPT);
    var_INITOPT = NULL;
    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    Py_XDECREF(var_interior);
    var_interior = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__1___init__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_i = python_pars[1];
    struct Nuitka_FrameObject *frame_9ab5820e9e547483acb3e9a064ad0ce8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ab5820e9e547483acb3e9a064ad0ce8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ab5820e9e547483acb3e9a064ad0ce8)) {
        Py_XDECREF(cache_frame_9ab5820e9e547483acb3e9a064ad0ce8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ab5820e9e547483acb3e9a064ad0ce8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ab5820e9e547483acb3e9a064ad0ce8 = MAKE_FUNCTION_FRAME(tstate, codeobj_9ab5820e9e547483acb3e9a064ad0ce8, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ab5820e9e547483acb3e9a064ad0ce8->m_type_description == NULL);
    frame_9ab5820e9e547483acb3e9a064ad0ce8 = cache_frame_9ab5820e9e547483acb3e9a064ad0ce8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ab5820e9e547483acb3e9a064ad0ce8);
    assert(Py_REFCNT(frame_9ab5820e9e547483acb3e9a064ad0ce8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        CHECK_OBJECT(par_i);
        tmp_args_element_value_1 = par_i;
        frame_9ab5820e9e547483acb3e9a064ad0ce8->m_frame.f_lineno = 86;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[92], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ab5820e9e547483acb3e9a064ad0ce8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ab5820e9e547483acb3e9a064ad0ce8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ab5820e9e547483acb3e9a064ad0ce8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ab5820e9e547483acb3e9a064ad0ce8,
        type_description_1,
        par_s,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_9ab5820e9e547483acb3e9a064ad0ce8 == cache_frame_9ab5820e9e547483acb3e9a064ad0ce8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ab5820e9e547483acb3e9a064ad0ce8);
        cache_frame_9ab5820e9e547483acb3e9a064ad0ce8 = NULL;
    }

    assertFrameObject(frame_9ab5820e9e547483acb3e9a064ad0ce8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__2_menu(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_85f6510c29773fd8e295c9d86de9bdbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85f6510c29773fd8e295c9d86de9bdbc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85f6510c29773fd8e295c9d86de9bdbc)) {
        Py_XDECREF(cache_frame_85f6510c29773fd8e295c9d86de9bdbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85f6510c29773fd8e295c9d86de9bdbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85f6510c29773fd8e295c9d86de9bdbc = MAKE_FUNCTION_FRAME(tstate, codeobj_85f6510c29773fd8e295c9d86de9bdbc, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85f6510c29773fd8e295c9d86de9bdbc->m_type_description == NULL);
    frame_85f6510c29773fd8e295c9d86de9bdbc = cache_frame_85f6510c29773fd8e295c9d86de9bdbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_85f6510c29773fd8e295c9d86de9bdbc);
    assert(Py_REFCNT(frame_85f6510c29773fd8e295c9d86de9bdbc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85f6510c29773fd8e295c9d86de9bdbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85f6510c29773fd8e295c9d86de9bdbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85f6510c29773fd8e295c9d86de9bdbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85f6510c29773fd8e295c9d86de9bdbc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_85f6510c29773fd8e295c9d86de9bdbc == cache_frame_85f6510c29773fd8e295c9d86de9bdbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85f6510c29773fd8e295c9d86de9bdbc);
        cache_frame_85f6510c29773fd8e295c9d86de9bdbc = NULL;
    }

    assertFrameObject(frame_85f6510c29773fd8e295c9d86de9bdbc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__3_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff69aa24dada78c3288da0c919690b3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff69aa24dada78c3288da0c919690b3a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff69aa24dada78c3288da0c919690b3a)) {
        Py_XDECREF(cache_frame_ff69aa24dada78c3288da0c919690b3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff69aa24dada78c3288da0c919690b3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff69aa24dada78c3288da0c919690b3a = MAKE_FUNCTION_FRAME(tstate, codeobj_ff69aa24dada78c3288da0c919690b3a, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff69aa24dada78c3288da0c919690b3a->m_type_description == NULL);
    frame_ff69aa24dada78c3288da0c919690b3a = cache_frame_ff69aa24dada78c3288da0c919690b3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ff69aa24dada78c3288da0c919690b3a);
    assert(Py_REFCNT(frame_ff69aa24dada78c3288da0c919690b3a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff69aa24dada78c3288da0c919690b3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff69aa24dada78c3288da0c919690b3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff69aa24dada78c3288da0c919690b3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff69aa24dada78c3288da0c919690b3a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff69aa24dada78c3288da0c919690b3a == cache_frame_ff69aa24dada78c3288da0c919690b3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff69aa24dada78c3288da0c919690b3a);
        cache_frame_ff69aa24dada78c3288da0c919690b3a = NULL;
    }

    assertFrameObject(frame_ff69aa24dada78c3288da0c919690b3a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__4_entry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_5cdb462b52d693c57fde097003169b9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5cdb462b52d693c57fde097003169b9e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cdb462b52d693c57fde097003169b9e)) {
        Py_XDECREF(cache_frame_5cdb462b52d693c57fde097003169b9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cdb462b52d693c57fde097003169b9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cdb462b52d693c57fde097003169b9e = MAKE_FUNCTION_FRAME(tstate, codeobj_5cdb462b52d693c57fde097003169b9e, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5cdb462b52d693c57fde097003169b9e->m_type_description == NULL);
    frame_5cdb462b52d693c57fde097003169b9e = cache_frame_5cdb462b52d693c57fde097003169b9e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5cdb462b52d693c57fde097003169b9e);
    assert(Py_REFCNT(frame_5cdb462b52d693c57fde097003169b9e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[63]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5cdb462b52d693c57fde097003169b9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cdb462b52d693c57fde097003169b9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cdb462b52d693c57fde097003169b9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cdb462b52d693c57fde097003169b9e,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_5cdb462b52d693c57fde097003169b9e == cache_frame_5cdb462b52d693c57fde097003169b9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5cdb462b52d693c57fde097003169b9e);
        cache_frame_5cdb462b52d693c57fde097003169b9e = NULL;
    }

    assertFrameObject(frame_5cdb462b52d693c57fde097003169b9e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__5_entryList(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f66204e2ca15b409656d7ea407241b8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f66204e2ca15b409656d7ea407241b8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f66204e2ca15b409656d7ea407241b8e)) {
        Py_XDECREF(cache_frame_f66204e2ca15b409656d7ea407241b8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f66204e2ca15b409656d7ea407241b8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f66204e2ca15b409656d7ea407241b8e = MAKE_FUNCTION_FRAME(tstate, codeobj_f66204e2ca15b409656d7ea407241b8e, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f66204e2ca15b409656d7ea407241b8e->m_type_description == NULL);
    frame_f66204e2ca15b409656d7ea407241b8e = cache_frame_f66204e2ca15b409656d7ea407241b8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f66204e2ca15b409656d7ea407241b8e);
    assert(Py_REFCNT(frame_f66204e2ca15b409656d7ea407241b8e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f66204e2ca15b409656d7ea407241b8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f66204e2ca15b409656d7ea407241b8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f66204e2ca15b409656d7ea407241b8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f66204e2ca15b409656d7ea407241b8e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f66204e2ca15b409656d7ea407241b8e == cache_frame_f66204e2ca15b409656d7ea407241b8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f66204e2ca15b409656d7ea407241b8e);
        cache_frame_f66204e2ca15b409656d7ea407241b8e = NULL;
    }

    assertFrameObject(frame_f66204e2ca15b409656d7ea407241b8e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__6_floaters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f25852b5679a5e49fda31794cecb4fc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f25852b5679a5e49fda31794cecb4fc2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f25852b5679a5e49fda31794cecb4fc2)) {
        Py_XDECREF(cache_frame_f25852b5679a5e49fda31794cecb4fc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f25852b5679a5e49fda31794cecb4fc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f25852b5679a5e49fda31794cecb4fc2 = MAKE_FUNCTION_FRAME(tstate, codeobj_f25852b5679a5e49fda31794cecb4fc2, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f25852b5679a5e49fda31794cecb4fc2->m_type_description == NULL);
    frame_f25852b5679a5e49fda31794cecb4fc2 = cache_frame_f25852b5679a5e49fda31794cecb4fc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f25852b5679a5e49fda31794cecb4fc2);
    assert(Py_REFCNT(frame_f25852b5679a5e49fda31794cecb4fc2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f25852b5679a5e49fda31794cecb4fc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f25852b5679a5e49fda31794cecb4fc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f25852b5679a5e49fda31794cecb4fc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f25852b5679a5e49fda31794cecb4fc2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f25852b5679a5e49fda31794cecb4fc2 == cache_frame_f25852b5679a5e49fda31794cecb4fc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f25852b5679a5e49fda31794cecb4fc2);
        cache_frame_f25852b5679a5e49fda31794cecb4fc2 = NULL;
    }

    assertFrameObject(frame_f25852b5679a5e49fda31794cecb4fc2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__7__clearFloaters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_192e4d9fe012ddb3d97d2f217aab794b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_192e4d9fe012ddb3d97d2f217aab794b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_192e4d9fe012ddb3d97d2f217aab794b)) {
        Py_XDECREF(cache_frame_192e4d9fe012ddb3d97d2f217aab794b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_192e4d9fe012ddb3d97d2f217aab794b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_192e4d9fe012ddb3d97d2f217aab794b = MAKE_FUNCTION_FRAME(tstate, codeobj_192e4d9fe012ddb3d97d2f217aab794b, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_192e4d9fe012ddb3d97d2f217aab794b->m_type_description == NULL);
    frame_192e4d9fe012ddb3d97d2f217aab794b = cache_frame_192e4d9fe012ddb3d97d2f217aab794b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_192e4d9fe012ddb3d97d2f217aab794b);
    assert(Py_REFCNT(frame_192e4d9fe012ddb3d97d2f217aab794b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_192e4d9fe012ddb3d97d2f217aab794b->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[86]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_192e4d9fe012ddb3d97d2f217aab794b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_192e4d9fe012ddb3d97d2f217aab794b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_192e4d9fe012ddb3d97d2f217aab794b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_192e4d9fe012ddb3d97d2f217aab794b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_192e4d9fe012ddb3d97d2f217aab794b == cache_frame_192e4d9fe012ddb3d97d2f217aab794b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_192e4d9fe012ddb3d97d2f217aab794b);
        cache_frame_192e4d9fe012ddb3d97d2f217aab794b = NULL;
    }

    assertFrameObject(frame_192e4d9fe012ddb3d97d2f217aab794b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__8__updateText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ddf34f5b7b574900c1177e3fbf0189e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ddf34f5b7b574900c1177e3fbf0189e6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ddf34f5b7b574900c1177e3fbf0189e6)) {
        Py_XDECREF(cache_frame_ddf34f5b7b574900c1177e3fbf0189e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ddf34f5b7b574900c1177e3fbf0189e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ddf34f5b7b574900c1177e3fbf0189e6 = MAKE_FUNCTION_FRAME(tstate, codeobj_ddf34f5b7b574900c1177e3fbf0189e6, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ddf34f5b7b574900c1177e3fbf0189e6->m_type_description == NULL);
    frame_ddf34f5b7b574900c1177e3fbf0189e6 = cache_frame_ddf34f5b7b574900c1177e3fbf0189e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ddf34f5b7b574900c1177e3fbf0189e6);
    assert(Py_REFCNT(frame_ddf34f5b7b574900c1177e3fbf0189e6) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[21];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[48]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[21];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ddf34f5b7b574900c1177e3fbf0189e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ddf34f5b7b574900c1177e3fbf0189e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddf34f5b7b574900c1177e3fbf0189e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ddf34f5b7b574900c1177e3fbf0189e6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ddf34f5b7b574900c1177e3fbf0189e6 == cache_frame_ddf34f5b7b574900c1177e3fbf0189e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ddf34f5b7b574900c1177e3fbf0189e6);
        cache_frame_ddf34f5b7b574900c1177e3fbf0189e6 = NULL;
    }

    assertFrameObject(frame_ddf34f5b7b574900c1177e3fbf0189e6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__9__updateRelief(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_50f9ab7c23c0e21dd46e6213fb77ad77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77)) {
        Py_XDECREF(cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77 = MAKE_FUNCTION_FRAME(tstate, codeobj_50f9ab7c23c0e21dd46e6213fb77ad77, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77->m_type_description == NULL);
    frame_50f9ab7c23c0e21dd46e6213fb77ad77 = cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_50f9ab7c23c0e21dd46e6213fb77ad77);
    assert(Py_REFCNT(frame_50f9ab7c23c0e21dd46e6213fb77ad77) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_50f9ab7c23c0e21dd46e6213fb77ad77->m_frame.f_lineno = 145;
        tmp_ass_subscribed_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[15];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50f9ab7c23c0e21dd46e6213fb77ad77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50f9ab7c23c0e21dd46e6213fb77ad77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50f9ab7c23c0e21dd46e6213fb77ad77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50f9ab7c23c0e21dd46e6213fb77ad77,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_50f9ab7c23c0e21dd46e6213fb77ad77 == cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77);
        cache_frame_50f9ab7c23c0e21dd46e6213fb77ad77 = NULL;
    }

    assertFrameObject(frame_50f9ab7c23c0e21dd46e6213fb77ad77);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__10__updateBorderWidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dd9c3fbedc549007f2cee94bb543dd12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dd9c3fbedc549007f2cee94bb543dd12 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd9c3fbedc549007f2cee94bb543dd12)) {
        Py_XDECREF(cache_frame_dd9c3fbedc549007f2cee94bb543dd12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd9c3fbedc549007f2cee94bb543dd12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd9c3fbedc549007f2cee94bb543dd12 = MAKE_FUNCTION_FRAME(tstate, codeobj_dd9c3fbedc549007f2cee94bb543dd12, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd9c3fbedc549007f2cee94bb543dd12->m_type_description == NULL);
    frame_dd9c3fbedc549007f2cee94bb543dd12 = cache_frame_dd9c3fbedc549007f2cee94bb543dd12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dd9c3fbedc549007f2cee94bb543dd12);
    assert(Py_REFCNT(frame_dd9c3fbedc549007f2cee94bb543dd12) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[18];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_dd9c3fbedc549007f2cee94bb543dd12->m_frame.f_lineno = 148;
        tmp_ass_subscribed_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[18];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd9c3fbedc549007f2cee94bb543dd12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd9c3fbedc549007f2cee94bb543dd12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd9c3fbedc549007f2cee94bb543dd12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd9c3fbedc549007f2cee94bb543dd12,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dd9c3fbedc549007f2cee94bb543dd12 == cache_frame_dd9c3fbedc549007f2cee94bb543dd12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd9c3fbedc549007f2cee94bb543dd12);
        cache_frame_dd9c3fbedc549007f2cee94bb543dd12 = NULL;
    }

    assertFrameObject(frame_dd9c3fbedc549007f2cee94bb543dd12);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__11__updateEntryWidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_302b4670ae89c666ce7f8b2290db9b06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_302b4670ae89c666ce7f8b2290db9b06 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_302b4670ae89c666ce7f8b2290db9b06)) {
        Py_XDECREF(cache_frame_302b4670ae89c666ce7f8b2290db9b06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_302b4670ae89c666ce7f8b2290db9b06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_302b4670ae89c666ce7f8b2290db9b06 = MAKE_FUNCTION_FRAME(tstate, codeobj_302b4670ae89c666ce7f8b2290db9b06, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_302b4670ae89c666ce7f8b2290db9b06->m_type_description == NULL);
    frame_302b4670ae89c666ce7f8b2290db9b06 = cache_frame_302b4670ae89c666ce7f8b2290db9b06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_302b4670ae89c666ce7f8b2290db9b06);
    assert(Py_REFCNT(frame_302b4670ae89c666ce7f8b2290db9b06) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[12];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_ass_subscribed_1 = par_self;
        tmp_ass_subscript_1 = mod_consts[93];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_302b4670ae89c666ce7f8b2290db9b06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_302b4670ae89c666ce7f8b2290db9b06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_302b4670ae89c666ce7f8b2290db9b06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_302b4670ae89c666ce7f8b2290db9b06,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_302b4670ae89c666ce7f8b2290db9b06 == cache_frame_302b4670ae89c666ce7f8b2290db9b06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_302b4670ae89c666ce7f8b2290db9b06);
        cache_frame_302b4670ae89c666ce7f8b2290db9b06 = NULL;
    }

    assertFrameObject(frame_302b4670ae89c666ce7f8b2290db9b06);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__12__setSigDigits(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_sd = NULL;
    PyObject *var_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_16a0af82f4f5eeda93a2bbe15d4f0bd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6)) {
        Py_XDECREF(cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6 = MAKE_FUNCTION_FRAME(tstate, codeobj_16a0af82f4f5eeda93a2bbe15d4f0bd6, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6->m_type_description == NULL);
    frame_16a0af82f4f5eeda93a2bbe15d4f0bd6 = cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_16a0af82f4f5eeda93a2bbe15d4f0bd6);
    assert(Py_REFCNT(frame_16a0af82f4f5eeda93a2bbe15d4f0bd6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[27];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_sd == NULL);
        var_sd = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_assattr_target_1;
        tmp_add_expr_left_2 = mod_consts[94];
        tmp_mod_expr_left_1 = mod_consts[95];
        CHECK_OBJECT(var_sd);
        tmp_mod_expr_right_1 = var_sd;
        tmp_add_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[96];
        tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sd);
        tmp_kw_call_value_0_1 = var_sd;
        frame_16a0af82f4f5eeda93a2bbe15d4f0bd6->m_frame.f_lineno = 156;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[98]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_16a0af82f4f5eeda93a2bbe15d4f0bd6->m_frame.f_lineno = 158;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 158;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_4;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_index);
        tmp_args_element_value_2 = var_index;
        frame_16a0af82f4f5eeda93a2bbe15d4f0bd6->m_frame.f_lineno = 159;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[99], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 158;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16a0af82f4f5eeda93a2bbe15d4f0bd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16a0af82f4f5eeda93a2bbe15d4f0bd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16a0af82f4f5eeda93a2bbe15d4f0bd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16a0af82f4f5eeda93a2bbe15d4f0bd6,
        type_description_1,
        par_self,
        var_sd,
        var_index
    );


    // Release cached frame if used for exception.
    if (frame_16a0af82f4f5eeda93a2bbe15d4f0bd6 == cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6);
        cache_frame_16a0af82f4f5eeda93a2bbe15d4f0bd6 = NULL;
    }

    assertFrameObject(frame_16a0af82f4f5eeda93a2bbe15d4f0bd6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sd);
    Py_DECREF(var_sd);
    var_sd = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_sd);
    var_sd = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__13__updateValidate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_814d4564753dc8573a5878c16173d89a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_814d4564753dc8573a5878c16173d89a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_814d4564753dc8573a5878c16173d89a)) {
        Py_XDECREF(cache_frame_814d4564753dc8573a5878c16173d89a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_814d4564753dc8573a5878c16173d89a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_814d4564753dc8573a5878c16173d89a = MAKE_FUNCTION_FRAME(tstate, codeobj_814d4564753dc8573a5878c16173d89a, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_814d4564753dc8573a5878c16173d89a->m_type_description == NULL);
    frame_814d4564753dc8573a5878c16173d89a = cache_frame_814d4564753dc8573a5878c16173d89a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_814d4564753dc8573a5878c16173d89a);
    assert(Py_REFCNT(frame_814d4564753dc8573a5878c16173d89a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[100];
        tmp_dict_value_1 = mod_consts[101];
        tmp_kw_call_value_0_1 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_subscript_value_1 = mod_consts[24];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_subscript_value_2 = mod_consts[26];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[102];
            tmp_dict_value_1 = mod_consts[103];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[104];
            tmp_dict_value_1 = mod_consts[103];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_814d4564753dc8573a5878c16173d89a->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[105]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[97]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_subscript_value_3 = mod_consts[24];
        tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 170;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_4 = mod_consts[26];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 171;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_814d4564753dc8573a5878c16173d89a->m_frame.f_lineno = 170;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_814d4564753dc8573a5878c16173d89a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_814d4564753dc8573a5878c16173d89a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_814d4564753dc8573a5878c16173d89a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_814d4564753dc8573a5878c16173d89a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_814d4564753dc8573a5878c16173d89a == cache_frame_814d4564753dc8573a5878c16173d89a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_814d4564753dc8573a5878c16173d89a);
        cache_frame_814d4564753dc8573a5878c16173d89a = NULL;
    }

    assertFrameObject(frame_814d4564753dc8573a5878c16173d89a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__14_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_535390486bca3ca12e841b65600fb9ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_535390486bca3ca12e841b65600fb9ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_535390486bca3ca12e841b65600fb9ac)) {
        Py_XDECREF(cache_frame_535390486bca3ca12e841b65600fb9ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_535390486bca3ca12e841b65600fb9ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_535390486bca3ca12e841b65600fb9ac = MAKE_FUNCTION_FRAME(tstate, codeobj_535390486bca3ca12e841b65600fb9ac, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_535390486bca3ca12e841b65600fb9ac->m_type_description == NULL);
    frame_535390486bca3ca12e841b65600fb9ac = cache_frame_535390486bca3ca12e841b65600fb9ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_535390486bca3ca12e841b65600fb9ac);
    assert(Py_REFCNT(frame_535390486bca3ca12e841b65600fb9ac) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_535390486bca3ca12e841b65600fb9ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_535390486bca3ca12e841b65600fb9ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_535390486bca3ca12e841b65600fb9ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_535390486bca3ca12e841b65600fb9ac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_535390486bca3ca12e841b65600fb9ac == cache_frame_535390486bca3ca12e841b65600fb9ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_535390486bca3ca12e841b65600fb9ac);
        cache_frame_535390486bca3ca12e841b65600fb9ac = NULL;
    }

    assertFrameObject(frame_535390486bca3ca12e841b65600fb9ac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__15_getAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_713201a4295167da0c51a2aad61840a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_713201a4295167da0c51a2aad61840a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_713201a4295167da0c51a2aad61840a0)) {
        Py_XDECREF(cache_frame_713201a4295167da0c51a2aad61840a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_713201a4295167da0c51a2aad61840a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_713201a4295167da0c51a2aad61840a0 = MAKE_FUNCTION_FRAME(tstate, codeobj_713201a4295167da0c51a2aad61840a0, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_713201a4295167da0c51a2aad61840a0->m_type_description == NULL);
    frame_713201a4295167da0c51a2aad61840a0 = cache_frame_713201a4295167da0c51a2aad61840a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_713201a4295167da0c51a2aad61840a0);
    assert(Py_REFCNT(frame_713201a4295167da0c51a2aad61840a0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[37]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_713201a4295167da0c51a2aad61840a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_713201a4295167da0c51a2aad61840a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_713201a4295167da0c51a2aad61840a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_713201a4295167da0c51a2aad61840a0,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_713201a4295167da0c51a2aad61840a0 == cache_frame_713201a4295167da0c51a2aad61840a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_713201a4295167da0c51a2aad61840a0);
        cache_frame_713201a4295167da0c51a2aad61840a0 = NULL;
    }

    assertFrameObject(frame_713201a4295167da0c51a2aad61840a0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__16_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_fCommand = python_pars[2];
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_cc0ee5d1e310b4cb43281b4c376ba9f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9)) {
        Py_XDECREF(cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9 = MAKE_FUNCTION_FRAME(tstate, codeobj_cc0ee5d1e310b4cb43281b4c376ba9f9, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9->m_type_description == NULL);
    frame_cc0ee5d1e310b4cb43281b4c376ba9f9 = cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cc0ee5d1e310b4cb43281b4c376ba9f9);
    assert(Py_REFCNT(frame_cc0ee5d1e310b4cb43281b4c376ba9f9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_cc0ee5d1e310b4cb43281b4c376ba9f9->m_frame.f_lineno = 180;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_value);
        tmp_list_element_1 = par_value;
        tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cc0ee5d1e310b4cb43281b4c376ba9f9->m_frame.f_lineno = 182;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 182;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 183;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_value;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 183;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[37]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 183;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[62]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[83]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[40]);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_value == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_value;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_mod_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_cc0ee5d1e310b4cb43281b4c376ba9f9->m_frame.f_lineno = 184;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 182;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_fCommand);
        tmp_args_element_value_4 = par_fCommand;
        frame_cc0ee5d1e310b4cb43281b4c376ba9f9->m_frame.f_lineno = 185;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[109], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc0ee5d1e310b4cb43281b4c376ba9f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc0ee5d1e310b4cb43281b4c376ba9f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc0ee5d1e310b4cb43281b4c376ba9f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc0ee5d1e310b4cb43281b4c376ba9f9,
        type_description_1,
        par_self,
        par_value,
        par_fCommand,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_cc0ee5d1e310b4cb43281b4c376ba9f9 == cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9);
        cache_frame_cc0ee5d1e310b4cb43281b4c376ba9f9 = NULL;
    }

    assertFrameObject(frame_cc0ee5d1e310b4cb43281b4c376ba9f9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__17_setAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_fCommand = python_pars[3];
    struct Nuitka_FrameObject *frame_f459acb78df40f5cc1ea79207d36ecdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f459acb78df40f5cc1ea79207d36ecdf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f459acb78df40f5cc1ea79207d36ecdf)) {
        Py_XDECREF(cache_frame_f459acb78df40f5cc1ea79207d36ecdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f459acb78df40f5cc1ea79207d36ecdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f459acb78df40f5cc1ea79207d36ecdf = MAKE_FUNCTION_FRAME(tstate, codeobj_f459acb78df40f5cc1ea79207d36ecdf, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f459acb78df40f5cc1ea79207d36ecdf->m_type_description == NULL);
    frame_f459acb78df40f5cc1ea79207d36ecdf = cache_frame_f459acb78df40f5cc1ea79207d36ecdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f459acb78df40f5cc1ea79207d36ecdf);
    assert(Py_REFCNT(frame_f459acb78df40f5cc1ea79207d36ecdf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[62]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[40]);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_mod_expr_right_1 = par_value;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f459acb78df40f5cc1ea79207d36ecdf->m_frame.f_lineno = 188;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[37]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_ass_subscript_1 = par_index;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_fCommand);
        tmp_args_element_value_2 = par_fCommand;
        frame_f459acb78df40f5cc1ea79207d36ecdf->m_frame.f_lineno = 190;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[109], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f459acb78df40f5cc1ea79207d36ecdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f459acb78df40f5cc1ea79207d36ecdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f459acb78df40f5cc1ea79207d36ecdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f459acb78df40f5cc1ea79207d36ecdf,
        type_description_1,
        par_self,
        par_index,
        par_value,
        par_fCommand
    );


    // Release cached frame if used for exception.
    if (frame_f459acb78df40f5cc1ea79207d36ecdf == cache_frame_f459acb78df40f5cc1ea79207d36ecdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f459acb78df40f5cc1ea79207d36ecdf);
        cache_frame_f459acb78df40f5cc1ea79207d36ecdf = NULL;
    }

    assertFrameObject(frame_f459acb78df40f5cc1ea79207d36ecdf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__18__entryUpdateAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *var_entryVar = NULL;
    PyObject *var_newVal = NULL;
    struct Nuitka_FrameObject *frame_196f650e5a120cc0314470afa4fb18e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_196f650e5a120cc0314470afa4fb18e1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_196f650e5a120cc0314470afa4fb18e1)) {
        Py_XDECREF(cache_frame_196f650e5a120cc0314470afa4fb18e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_196f650e5a120cc0314470afa4fb18e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_196f650e5a120cc0314470afa4fb18e1 = MAKE_FUNCTION_FRAME(tstate, codeobj_196f650e5a120cc0314470afa4fb18e1, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_196f650e5a120cc0314470afa4fb18e1->m_type_description == NULL);
    frame_196f650e5a120cc0314470afa4fb18e1 = cache_frame_196f650e5a120cc0314470afa4fb18e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_196f650e5a120cc0314470afa4fb18e1);
    assert(Py_REFCNT(frame_196f650e5a120cc0314470afa4fb18e1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_entryVar == NULL);
        var_entryVar = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_entryVar);
        tmp_expression_value_3 = var_entryVar;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[110]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_196f650e5a120cc0314470afa4fb18e1->m_frame.f_lineno = 196;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_196f650e5a120cc0314470afa4fb18e1->m_frame.f_lineno = 196;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_newVal == NULL);
        var_newVal = tmp_assign_source_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_196f650e5a120cc0314470afa4fb18e1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_196f650e5a120cc0314470afa4fb18e1, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 195;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_196f650e5a120cc0314470afa4fb18e1->m_frame) frame_196f650e5a120cc0314470afa4fb18e1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_newVal);
        tmp_cmp_expr_left_3 = var_newVal;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_subscript_value_3 = mod_consts[24];
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_4 = mod_consts[24];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_newVal;
            assert(old != NULL);
            var_newVal = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_subscript_value_5 = mod_consts[26];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_newVal);
        tmp_cmp_expr_left_5 = var_newVal;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_subscript_value_6 = mod_consts[26];
        tmp_cmp_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_subscript_value_7 = mod_consts[26];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_newVal;
            assert(old != NULL);
            var_newVal = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    branch_no_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_newVal);
        tmp_ass_subvalue_1 = var_newVal;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[37]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_ass_subscript_1 = par_index;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_index);
        tmp_args_element_value_2 = par_index;
        frame_196f650e5a120cc0314470afa4fb18e1->m_frame.f_lineno = 212;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[99], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_196f650e5a120cc0314470afa4fb18e1->m_frame.f_lineno = 215;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[109]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_196f650e5a120cc0314470afa4fb18e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_196f650e5a120cc0314470afa4fb18e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_196f650e5a120cc0314470afa4fb18e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_196f650e5a120cc0314470afa4fb18e1,
        type_description_1,
        par_self,
        par_index,
        var_entryVar,
        var_newVal
    );


    // Release cached frame if used for exception.
    if (frame_196f650e5a120cc0314470afa4fb18e1 == cache_frame_196f650e5a120cc0314470afa4fb18e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_196f650e5a120cc0314470afa4fb18e1);
        cache_frame_196f650e5a120cc0314470afa4fb18e1 = NULL;
    }

    assertFrameObject(frame_196f650e5a120cc0314470afa4fb18e1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_entryVar);
    Py_DECREF(var_entryVar);
    var_entryVar = NULL;
    Py_XDECREF(var_newVal);
    var_newVal = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_entryVar);
    var_entryVar = NULL;
    Py_XDECREF(var_newVal);
    var_newVal = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__19__refreshEntry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_30507b760bd0712234b3029090e3ad29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30507b760bd0712234b3029090e3ad29 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30507b760bd0712234b3029090e3ad29)) {
        Py_XDECREF(cache_frame_30507b760bd0712234b3029090e3ad29);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30507b760bd0712234b3029090e3ad29 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30507b760bd0712234b3029090e3ad29 = MAKE_FUNCTION_FRAME(tstate, codeobj_30507b760bd0712234b3029090e3ad29, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30507b760bd0712234b3029090e3ad29->m_type_description == NULL);
    frame_30507b760bd0712234b3029090e3ad29 = cache_frame_30507b760bd0712234b3029090e3ad29;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_30507b760bd0712234b3029090e3ad29);
    assert(Py_REFCNT(frame_30507b760bd0712234b3029090e3ad29) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[62]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[40]);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[37]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_2 = par_index;
        tmp_mod_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mod_expr_left_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_30507b760bd0712234b3029090e3ad29->m_frame.f_lineno = 218;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[63]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_3 = par_index;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_30507b760bd0712234b3029090e3ad29->m_frame.f_lineno = 219;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[112]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30507b760bd0712234b3029090e3ad29, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30507b760bd0712234b3029090e3ad29->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30507b760bd0712234b3029090e3ad29, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30507b760bd0712234b3029090e3ad29,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_30507b760bd0712234b3029090e3ad29 == cache_frame_30507b760bd0712234b3029090e3ad29) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30507b760bd0712234b3029090e3ad29);
        cache_frame_30507b760bd0712234b3029090e3ad29 = NULL;
    }

    assertFrameObject(frame_30507b760bd0712234b3029090e3ad29);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__20__refreshFloaters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bc58e5e4d18019f63e9f717467cbb036;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bc58e5e4d18019f63e9f717467cbb036 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc58e5e4d18019f63e9f717467cbb036)) {
        Py_XDECREF(cache_frame_bc58e5e4d18019f63e9f717467cbb036);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc58e5e4d18019f63e9f717467cbb036 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc58e5e4d18019f63e9f717467cbb036 = MAKE_FUNCTION_FRAME(tstate, codeobj_bc58e5e4d18019f63e9f717467cbb036, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc58e5e4d18019f63e9f717467cbb036->m_type_description == NULL);
    frame_bc58e5e4d18019f63e9f717467cbb036 = cache_frame_bc58e5e4d18019f63e9f717467cbb036;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bc58e5e4d18019f63e9f717467cbb036);
    assert(Py_REFCNT(frame_bc58e5e4d18019f63e9f717467cbb036) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[83]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[37]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[103];
        frame_bc58e5e4d18019f63e9f717467cbb036->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc58e5e4d18019f63e9f717467cbb036, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc58e5e4d18019f63e9f717467cbb036->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc58e5e4d18019f63e9f717467cbb036, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc58e5e4d18019f63e9f717467cbb036,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bc58e5e4d18019f63e9f717467cbb036 == cache_frame_bc58e5e4d18019f63e9f717467cbb036) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc58e5e4d18019f63e9f717467cbb036);
        cache_frame_bc58e5e4d18019f63e9f717467cbb036 = NULL;
    }

    assertFrameObject(frame_bc58e5e4d18019f63e9f717467cbb036);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__21_action(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fCommand = python_pars[1];
    struct Nuitka_FrameObject *frame_d4ca2ba10fa7d307ed88a636b9689a42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4ca2ba10fa7d307ed88a636b9689a42 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4ca2ba10fa7d307ed88a636b9689a42)) {
        Py_XDECREF(cache_frame_d4ca2ba10fa7d307ed88a636b9689a42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4ca2ba10fa7d307ed88a636b9689a42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4ca2ba10fa7d307ed88a636b9689a42 = MAKE_FUNCTION_FRAME(tstate, codeobj_d4ca2ba10fa7d307ed88a636b9689a42, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4ca2ba10fa7d307ed88a636b9689a42->m_type_description == NULL);
    frame_d4ca2ba10fa7d307ed88a636b9689a42 = cache_frame_d4ca2ba10fa7d307ed88a636b9689a42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d4ca2ba10fa7d307ed88a636b9689a42);
    assert(Py_REFCNT(frame_d4ca2ba10fa7d307ed88a636b9689a42) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_d4ca2ba10fa7d307ed88a636b9689a42->m_frame.f_lineno = 226;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[113]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_fCommand);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_fCommand);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[114];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_2 = mod_consts[114];
        tmp_called_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[37]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d4ca2ba10fa7d307ed88a636b9689a42->m_frame.f_lineno = 228;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4ca2ba10fa7d307ed88a636b9689a42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4ca2ba10fa7d307ed88a636b9689a42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4ca2ba10fa7d307ed88a636b9689a42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4ca2ba10fa7d307ed88a636b9689a42,
        type_description_1,
        par_self,
        par_fCommand
    );


    // Release cached frame if used for exception.
    if (frame_d4ca2ba10fa7d307ed88a636b9689a42 == cache_frame_d4ca2ba10fa7d307ed88a636b9689a42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4ca2ba10fa7d307ed88a636b9689a42);
        cache_frame_d4ca2ba10fa7d307ed88a636b9689a42 = NULL;
    }

    assertFrameObject(frame_d4ca2ba10fa7d307ed88a636b9689a42);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fCommand);
    Py_DECREF(par_fCommand);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__22_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6c065841bb6c326a078cd3f90dc1559a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c065841bb6c326a078cd3f90dc1559a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c065841bb6c326a078cd3f90dc1559a)) {
        Py_XDECREF(cache_frame_6c065841bb6c326a078cd3f90dc1559a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c065841bb6c326a078cd3f90dc1559a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c065841bb6c326a078cd3f90dc1559a = MAKE_FUNCTION_FRAME(tstate, codeobj_6c065841bb6c326a078cd3f90dc1559a, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c065841bb6c326a078cd3f90dc1559a->m_type_description == NULL);
    frame_6c065841bb6c326a078cd3f90dc1559a = cache_frame_6c065841bb6c326a078cd3f90dc1559a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6c065841bb6c326a078cd3f90dc1559a);
    assert(Py_REFCNT(frame_6c065841bb6c326a078cd3f90dc1559a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = mod_consts[8];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6c065841bb6c326a078cd3f90dc1559a->m_frame.f_lineno = 231;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c065841bb6c326a078cd3f90dc1559a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c065841bb6c326a078cd3f90dc1559a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c065841bb6c326a078cd3f90dc1559a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c065841bb6c326a078cd3f90dc1559a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6c065841bb6c326a078cd3f90dc1559a == cache_frame_6c065841bb6c326a078cd3f90dc1559a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c065841bb6c326a078cd3f90dc1559a);
        cache_frame_6c065841bb6c326a078cd3f90dc1559a = NULL;
    }

    assertFrameObject(frame_6c065841bb6c326a078cd3f90dc1559a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__23_addMenuItem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_label = python_pars[1];
    PyObject *par_command = python_pars[2];
    struct Nuitka_FrameObject *frame_d25e7abf9b13a3af0419b75038e1cced;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d25e7abf9b13a3af0419b75038e1cced = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d25e7abf9b13a3af0419b75038e1cced)) {
        Py_XDECREF(cache_frame_d25e7abf9b13a3af0419b75038e1cced);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d25e7abf9b13a3af0419b75038e1cced == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d25e7abf9b13a3af0419b75038e1cced = MAKE_FUNCTION_FRAME(tstate, codeobj_d25e7abf9b13a3af0419b75038e1cced, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d25e7abf9b13a3af0419b75038e1cced->m_type_description == NULL);
    frame_d25e7abf9b13a3af0419b75038e1cced = cache_frame_d25e7abf9b13a3af0419b75038e1cced;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d25e7abf9b13a3af0419b75038e1cced);
    assert(Py_REFCNT(frame_d25e7abf9b13a3af0419b75038e1cced) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[50]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[51]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_label);
        tmp_kw_call_value_0_1 = par_label;
        CHECK_OBJECT(par_command);
        tmp_kw_call_value_1_1 = par_command;
        frame_d25e7abf9b13a3af0419b75038e1cced->m_frame.f_lineno = 234;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d25e7abf9b13a3af0419b75038e1cced, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d25e7abf9b13a3af0419b75038e1cced->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d25e7abf9b13a3af0419b75038e1cced, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d25e7abf9b13a3af0419b75038e1cced,
        type_description_1,
        par_self,
        par_label,
        par_command
    );


    // Release cached frame if used for exception.
    if (frame_d25e7abf9b13a3af0419b75038e1cced == cache_frame_d25e7abf9b13a3af0419b75038e1cced) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d25e7abf9b13a3af0419b75038e1cced);
        cache_frame_d25e7abf9b13a3af0419b75038e1cced = NULL;
    }

    assertFrameObject(frame_d25e7abf9b13a3af0419b75038e1cced);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__24_popupSliders(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4e61741404b9e18388936774f9c48a14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e61741404b9e18388936774f9c48a14 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e61741404b9e18388936774f9c48a14)) {
        Py_XDECREF(cache_frame_4e61741404b9e18388936774f9c48a14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e61741404b9e18388936774f9c48a14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e61741404b9e18388936774f9c48a14 = MAKE_FUNCTION_FRAME(tstate, codeobj_4e61741404b9e18388936774f9c48a14, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e61741404b9e18388936774f9c48a14->m_type_description == NULL);
    frame_4e61741404b9e18388936774f9c48a14 = cache_frame_4e61741404b9e18388936774f9c48a14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4e61741404b9e18388936774f9c48a14);
    assert(Py_REFCNT(frame_4e61741404b9e18388936774f9c48a14) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[110]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e61741404b9e18388936774f9c48a14->m_frame.f_lineno = 237;
        tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[115];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e61741404b9e18388936774f9c48a14->m_frame.f_lineno = 237;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e61741404b9e18388936774f9c48a14->m_frame.f_lineno = 238;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[116]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e61741404b9e18388936774f9c48a14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e61741404b9e18388936774f9c48a14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e61741404b9e18388936774f9c48a14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e61741404b9e18388936774f9c48a14,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4e61741404b9e18388936774f9c48a14 == cache_frame_4e61741404b9e18388936774f9c48a14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e61741404b9e18388936774f9c48a14);
        cache_frame_4e61741404b9e18388936774f9c48a14 = NULL;
    }

    assertFrameObject(frame_4e61741404b9e18388936774f9c48a14);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__25__setState(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b43dfba02bab1eeced66f9167918461d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b43dfba02bab1eeced66f9167918461d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b43dfba02bab1eeced66f9167918461d)) {
        Py_XDECREF(cache_frame_b43dfba02bab1eeced66f9167918461d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b43dfba02bab1eeced66f9167918461d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b43dfba02bab1eeced66f9167918461d = MAKE_FUNCTION_FRAME(tstate, codeobj_b43dfba02bab1eeced66f9167918461d, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b43dfba02bab1eeced66f9167918461d->m_type_description == NULL);
    frame_b43dfba02bab1eeced66f9167918461d = cache_frame_b43dfba02bab1eeced66f9167918461d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b43dfba02bab1eeced66f9167918461d);
    assert(Py_REFCNT(frame_b43dfba02bab1eeced66f9167918461d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[117];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 243;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[118], 0), mod_consts[119]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[97]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 244;
        tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[88]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 246;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[97]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 246;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[118], 0), mod_consts[123]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 249;
        tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[97]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 249;
        tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[118], 0), mod_consts[124]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 251;
        tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[97]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 251;
        tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[125]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[97]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 255;
        tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[119]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[97]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[89]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 256;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[88]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 258;
        tmp_expression_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[97]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 258;
        tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[123]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 261;
        tmp_expression_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[97]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 261;
        tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[124]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 263;
        tmp_expression_value_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[97]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[89]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b43dfba02bab1eeced66f9167918461d->m_frame.f_lineno = 263;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_10, kw_values, mod_consts[125]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b43dfba02bab1eeced66f9167918461d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b43dfba02bab1eeced66f9167918461d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b43dfba02bab1eeced66f9167918461d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b43dfba02bab1eeced66f9167918461d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b43dfba02bab1eeced66f9167918461d == cache_frame_b43dfba02bab1eeced66f9167918461d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b43dfba02bab1eeced66f9167918461d);
        cache_frame_b43dfba02bab1eeced66f9167918461d = NULL;
    }

    assertFrameObject(frame_b43dfba02bab1eeced66f9167918461d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_optiondefs = NULL;
    struct Nuitka_FrameObject *frame_1cd536f2ad0ab362a2cfd0faf0993464;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1cd536f2ad0ab362a2cfd0faf0993464 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1cd536f2ad0ab362a2cfd0faf0993464)) {
        Py_XDECREF(cache_frame_1cd536f2ad0ab362a2cfd0faf0993464);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cd536f2ad0ab362a2cfd0faf0993464 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cd536f2ad0ab362a2cfd0faf0993464 = MAKE_FUNCTION_FRAME(tstate, codeobj_1cd536f2ad0ab362a2cfd0faf0993464, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1cd536f2ad0ab362a2cfd0faf0993464->m_type_description == NULL);
    frame_1cd536f2ad0ab362a2cfd0faf0993464 = cache_frame_1cd536f2ad0ab362a2cfd0faf0993464;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1cd536f2ad0ab362a2cfd0faf0993464);
    assert(Py_REFCNT(frame_1cd536f2ad0ab362a2cfd0faf0993464) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[1];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[127];
        PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_1 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_2 = var_optiondefs;
        frame_1cd536f2ad0ab362a2cfd0faf0993464->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_kw_call_arg_value_1_1 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1cd536f2ad0ab362a2cfd0faf0993464->m_frame.f_lineno = 275;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[90]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1cd536f2ad0ab362a2cfd0faf0993464->m_frame.f_lineno = 278;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1cd536f2ad0ab362a2cfd0faf0993464, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cd536f2ad0ab362a2cfd0faf0993464->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cd536f2ad0ab362a2cfd0faf0993464, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cd536f2ad0ab362a2cfd0faf0993464,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_1cd536f2ad0ab362a2cfd0faf0993464 == cache_frame_1cd536f2ad0ab362a2cfd0faf0993464) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1cd536f2ad0ab362a2cfd0faf0993464);
        cache_frame_1cd536f2ad0ab362a2cfd0faf0993464 = NULL;
    }

    assertFrameObject(frame_1cd536f2ad0ab362a2cfd0faf0993464);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__27___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_optiondefs = NULL;
    struct Nuitka_FrameObject *frame_8133a9d38dc85ee2ebaf52ff253f8174;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8133a9d38dc85ee2ebaf52ff253f8174 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8133a9d38dc85ee2ebaf52ff253f8174)) {
        Py_XDECREF(cache_frame_8133a9d38dc85ee2ebaf52ff253f8174);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8133a9d38dc85ee2ebaf52ff253f8174 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8133a9d38dc85ee2ebaf52ff253f8174 = MAKE_FUNCTION_FRAME(tstate, codeobj_8133a9d38dc85ee2ebaf52ff253f8174, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8133a9d38dc85ee2ebaf52ff253f8174->m_type_description == NULL);
    frame_8133a9d38dc85ee2ebaf52ff253f8174 = cache_frame_8133a9d38dc85ee2ebaf52ff253f8174;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8133a9d38dc85ee2ebaf52ff253f8174);
    assert(Py_REFCNT(frame_8133a9d38dc85ee2ebaf52ff253f8174) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[1];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[2];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[127];
        PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_1 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_2 = var_optiondefs;
        frame_8133a9d38dc85ee2ebaf52ff253f8174->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_kw_call_arg_value_1_1 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8133a9d38dc85ee2ebaf52ff253f8174->m_frame.f_lineno = 289;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[90]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8133a9d38dc85ee2ebaf52ff253f8174->m_frame.f_lineno = 292;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8133a9d38dc85ee2ebaf52ff253f8174, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8133a9d38dc85ee2ebaf52ff253f8174->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8133a9d38dc85ee2ebaf52ff253f8174, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8133a9d38dc85ee2ebaf52ff253f8174,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_8133a9d38dc85ee2ebaf52ff253f8174 == cache_frame_8133a9d38dc85ee2ebaf52ff253f8174) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8133a9d38dc85ee2ebaf52ff253f8174);
        cache_frame_8133a9d38dc85ee2ebaf52ff253f8174 = NULL;
    }

    assertFrameObject(frame_8133a9d38dc85ee2ebaf52ff253f8174);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__28___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_optiondefs = NULL;
    struct Nuitka_FrameObject *frame_2f8f747aa2d7ed13764630ea2f78892d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2f8f747aa2d7ed13764630ea2f78892d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f8f747aa2d7ed13764630ea2f78892d)) {
        Py_XDECREF(cache_frame_2f8f747aa2d7ed13764630ea2f78892d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f8f747aa2d7ed13764630ea2f78892d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f8f747aa2d7ed13764630ea2f78892d = MAKE_FUNCTION_FRAME(tstate, codeobj_2f8f747aa2d7ed13764630ea2f78892d, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f8f747aa2d7ed13764630ea2f78892d->m_type_description == NULL);
    frame_2f8f747aa2d7ed13764630ea2f78892d = cache_frame_2f8f747aa2d7ed13764630ea2f78892d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f8f747aa2d7ed13764630ea2f78892d);
    assert(Py_REFCNT(frame_2f8f747aa2d7ed13764630ea2f78892d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[1];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[131];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[132];
        PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_1 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_2 = var_optiondefs;
        frame_2f8f747aa2d7ed13764630ea2f78892d->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_kw_call_arg_value_1_1 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2f8f747aa2d7ed13764630ea2f78892d->m_frame.f_lineno = 303;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[90]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2f8f747aa2d7ed13764630ea2f78892d->m_frame.f_lineno = 306;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f8f747aa2d7ed13764630ea2f78892d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f8f747aa2d7ed13764630ea2f78892d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f8f747aa2d7ed13764630ea2f78892d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f8f747aa2d7ed13764630ea2f78892d,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_2f8f747aa2d7ed13764630ea2f78892d == cache_frame_2f8f747aa2d7ed13764630ea2f78892d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f8f747aa2d7ed13764630ea2f78892d);
        cache_frame_2f8f747aa2d7ed13764630ea2f78892d = NULL;
    }

    assertFrameObject(frame_2f8f747aa2d7ed13764630ea2f78892d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__29___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_optiondefs = NULL;
    struct Nuitka_FrameObject *frame_d535fe987e2be54ab803def61ffcf286;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d535fe987e2be54ab803def61ffcf286 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d535fe987e2be54ab803def61ffcf286)) {
        Py_XDECREF(cache_frame_d535fe987e2be54ab803def61ffcf286);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d535fe987e2be54ab803def61ffcf286 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d535fe987e2be54ab803def61ffcf286 = MAKE_FUNCTION_FRAME(tstate, codeobj_d535fe987e2be54ab803def61ffcf286, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d535fe987e2be54ab803def61ffcf286->m_type_description == NULL);
    frame_d535fe987e2be54ab803def61ffcf286 = cache_frame_d535fe987e2be54ab803def61ffcf286;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d535fe987e2be54ab803def61ffcf286);
    assert(Py_REFCNT(frame_d535fe987e2be54ab803def61ffcf286) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[1];
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[131];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_tuple_element_3;
            PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[82];
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = mod_consts[134];
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 313;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 313;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[135];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[136];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[138];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[139];
            PyTuple_SET_ITEM0(tmp_assign_source_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(var_optiondefs == NULL);
        var_optiondefs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_kw);
        tmp_args_element_value_1 = par_kw;
        CHECK_OBJECT(var_optiondefs);
        tmp_args_element_value_2 = var_optiondefs;
        frame_d535fe987e2be54ab803def61ffcf286->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_kw_call_arg_value_1_1 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d535fe987e2be54ab803def61ffcf286->m_frame.f_lineno = 323;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[140]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_4 = par_self;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);


        tmp_kw_call_value_0_1 = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__29___init__$$$function__1_lambda(tmp_defaults_1);

        frame_d535fe987e2be54ab803def61ffcf286->m_frame.f_lineno = 325;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_2, mod_consts[142], kw_values, mod_consts[143]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[90]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d535fe987e2be54ab803def61ffcf286->m_frame.f_lineno = 330;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d535fe987e2be54ab803def61ffcf286, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d535fe987e2be54ab803def61ffcf286->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d535fe987e2be54ab803def61ffcf286, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d535fe987e2be54ab803def61ffcf286,
        type_description_1,
        par_self,
        par_parent,
        par_kw,
        var_optiondefs
    );


    // Release cached frame if used for exception.
    if (frame_d535fe987e2be54ab803def61ffcf286 == cache_frame_d535fe987e2be54ab803def61ffcf286) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d535fe987e2be54ab803def61ffcf286);
        cache_frame_d535fe987e2be54ab803def61ffcf286 = NULL;
    }

    assertFrameObject(frame_d535fe987e2be54ab803def61ffcf286);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_optiondefs);
    Py_DECREF(var_optiondefs);
    var_optiondefs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_optiondefs);
    var_optiondefs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__29___init__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_dc4d2b214be5e472dc9b0d13b4d06aca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca)) {
        Py_XDECREF(cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca = MAKE_FUNCTION_FRAME(tstate, codeobj_dc4d2b214be5e472dc9b0d13b4d06aca, module_direct$tkwidgets$VectorWidgets, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca->m_type_description == NULL);
    frame_dc4d2b214be5e472dc9b0d13b4d06aca = cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dc4d2b214be5e472dc9b0d13b4d06aca);
    assert(Py_REFCNT(frame_dc4d2b214be5e472dc9b0d13b4d06aca) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_dc4d2b214be5e472dc9b0d13b4d06aca->m_frame.f_lineno = 327;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[145]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc4d2b214be5e472dc9b0d13b4d06aca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc4d2b214be5e472dc9b0d13b4d06aca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc4d2b214be5e472dc9b0d13b4d06aca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc4d2b214be5e472dc9b0d13b4d06aca,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_dc4d2b214be5e472dc9b0d13b4d06aca == cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca);
        cache_frame_dc4d2b214be5e472dc9b0d13b4d06aca = NULL;
    }

    assertFrameObject(frame_dc4d2b214be5e472dc9b0d13b4d06aca);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_direct$tkwidgets$VectorWidgets$$$function__30_popupColorPicker(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_color = NULL;
    struct Nuitka_FrameObject *frame_0e14bdd5905b18aaa31d17db05ff3a47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0e14bdd5905b18aaa31d17db05ff3a47 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0e14bdd5905b18aaa31d17db05ff3a47)) {
        Py_XDECREF(cache_frame_0e14bdd5905b18aaa31d17db05ff3a47);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e14bdd5905b18aaa31d17db05ff3a47 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e14bdd5905b18aaa31d17db05ff3a47 = MAKE_FUNCTION_FRAME(tstate, codeobj_0e14bdd5905b18aaa31d17db05ff3a47, module_direct$tkwidgets$VectorWidgets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e14bdd5905b18aaa31d17db05ff3a47->m_type_description == NULL);
    frame_0e14bdd5905b18aaa31d17db05ff3a47 = cache_frame_0e14bdd5905b18aaa31d17db05ff3a47;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0e14bdd5905b18aaa31d17db05ff3a47);
    assert(Py_REFCNT(frame_0e14bdd5905b18aaa31d17db05ff3a47) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[146]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame.f_lineno = 335;
        tmp_kw_call_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[110]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame.f_lineno = 337;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[148];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame.f_lineno = 337;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame.f_lineno = 334;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[149]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[103];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_color == NULL);
        var_color = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_color);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_color);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[83]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_color);
        tmp_expression_value_5 = var_color;
        tmp_subscript_value_3 = mod_consts[103];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 339;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_called_instance_2;
            PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_color);
            tmp_expression_value_6 = var_color;
            tmp_subscript_value_4 = mod_consts[76];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_color);
            tmp_expression_value_7 = var_color;
            tmp_subscript_value_5 = mod_consts[19];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_2 = par_self;
            frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame.f_lineno = 339;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_2,
                mod_consts[150],
                PyTuple_GET_ITEM(mod_consts[151], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame.f_lineno = 339;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e14bdd5905b18aaa31d17db05ff3a47, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e14bdd5905b18aaa31d17db05ff3a47->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e14bdd5905b18aaa31d17db05ff3a47, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e14bdd5905b18aaa31d17db05ff3a47,
        type_description_1,
        par_self,
        var_color
    );


    // Release cached frame if used for exception.
    if (frame_0e14bdd5905b18aaa31d17db05ff3a47 == cache_frame_0e14bdd5905b18aaa31d17db05ff3a47) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e14bdd5905b18aaa31d17db05ff3a47);
        cache_frame_0e14bdd5905b18aaa31d17db05ff3a47 = NULL;
    }

    assertFrameObject(frame_0e14bdd5905b18aaa31d17db05ff3a47);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_color);
    Py_DECREF(var_color);
    var_color = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_color);
    var_color = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__10__updateBorderWidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__10__updateBorderWidth,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_dd9c3fbedc549007f2cee94bb543dd12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__11__updateEntryWidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__11__updateEntryWidth,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_302b4670ae89c666ce7f8b2290db9b06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__12__setSigDigits() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__12__setSigDigits,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_16a0af82f4f5eeda93a2bbe15d4f0bd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__13__updateValidate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__13__updateValidate,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_814d4564753dc8573a5878c16173d89a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__14_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__14_get,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_535390486bca3ca12e841b65600fb9ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__15_getAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__15_getAt,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_713201a4295167da0c51a2aad61840a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__16_set(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__16_set,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_cc0ee5d1e310b4cb43281b4c376ba9f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__17_setAt(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__17_setAt,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_f459acb78df40f5cc1ea79207d36ecdf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__18__entryUpdateAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__18__entryUpdateAt,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_196f650e5a120cc0314470afa4fb18e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__19__refreshEntry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__19__refreshEntry,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_30507b760bd0712234b3029090e3ad29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__1___init__,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_8096569496a9c79ca453890ead47673d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__1___init__$$$function__1_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__1___init__$$$function__1_lambda,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_9ab5820e9e547483acb3e9a064ad0ce8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__20__refreshFloaters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__20__refreshFloaters,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_bc58e5e4d18019f63e9f717467cbb036,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__21_action(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__21_action,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_d4ca2ba10fa7d307ed88a636b9689a42,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__22_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__22_reset,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_6c065841bb6c326a078cd3f90dc1559a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__23_addMenuItem(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__23_addMenuItem,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_d25e7abf9b13a3af0419b75038e1cced,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__24_popupSliders() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__24_popupSliders,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_4e61741404b9e18388936774f9c48a14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__25__setState() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__25__setState,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_b43dfba02bab1eeced66f9167918461d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__26___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__26___init__,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_1cd536f2ad0ab362a2cfd0faf0993464,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__27___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__27___init__,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_8133a9d38dc85ee2ebaf52ff253f8174,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__28___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__28___init__,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_2f8f747aa2d7ed13764630ea2f78892d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__29___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__29___init__,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_d535fe987e2be54ab803def61ffcf286,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__29___init__$$$function__1_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__29___init__$$$function__1_lambda,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_dc4d2b214be5e472dc9b0d13b4d06aca,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__2_menu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__2_menu,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_85f6510c29773fd8e295c9d86de9bdbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__30_popupColorPicker() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__30_popupColorPicker,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_0e14bdd5905b18aaa31d17db05ff3a47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__3_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__3_label,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_ff69aa24dada78c3288da0c919690b3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__4_entry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__4_entry,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_5cdb462b52d693c57fde097003169b9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__5_entryList() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__5_entryList,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_f66204e2ca15b409656d7ea407241b8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__6_floaters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__6_floaters,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_f25852b5679a5e49fda31794cecb4fc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__7__clearFloaters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__7__clearFloaters,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_192e4d9fe012ddb3d97d2f217aab794b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__8__updateText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__8__updateText,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_ddf34f5b7b574900c1177e3fbf0189e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__9__updateRelief() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$tkwidgets$VectorWidgets$$$function__9__updateRelief,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_50f9ab7c23c0e21dd46e6213fb77ad77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_direct$tkwidgets$VectorWidgets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_direct$tkwidgets$VectorWidgets[] = {
    impl_direct$tkwidgets$VectorWidgets$$$function__1___init__$$$function__1_lambda,
    impl_direct$tkwidgets$VectorWidgets$$$function__29___init__$$$function__1_lambda,
    impl_direct$tkwidgets$VectorWidgets$$$function__1___init__,
    impl_direct$tkwidgets$VectorWidgets$$$function__2_menu,
    impl_direct$tkwidgets$VectorWidgets$$$function__3_label,
    impl_direct$tkwidgets$VectorWidgets$$$function__4_entry,
    impl_direct$tkwidgets$VectorWidgets$$$function__5_entryList,
    impl_direct$tkwidgets$VectorWidgets$$$function__6_floaters,
    impl_direct$tkwidgets$VectorWidgets$$$function__7__clearFloaters,
    impl_direct$tkwidgets$VectorWidgets$$$function__8__updateText,
    impl_direct$tkwidgets$VectorWidgets$$$function__9__updateRelief,
    impl_direct$tkwidgets$VectorWidgets$$$function__10__updateBorderWidth,
    impl_direct$tkwidgets$VectorWidgets$$$function__11__updateEntryWidth,
    impl_direct$tkwidgets$VectorWidgets$$$function__12__setSigDigits,
    impl_direct$tkwidgets$VectorWidgets$$$function__13__updateValidate,
    impl_direct$tkwidgets$VectorWidgets$$$function__14_get,
    impl_direct$tkwidgets$VectorWidgets$$$function__15_getAt,
    impl_direct$tkwidgets$VectorWidgets$$$function__16_set,
    impl_direct$tkwidgets$VectorWidgets$$$function__17_setAt,
    impl_direct$tkwidgets$VectorWidgets$$$function__18__entryUpdateAt,
    impl_direct$tkwidgets$VectorWidgets$$$function__19__refreshEntry,
    impl_direct$tkwidgets$VectorWidgets$$$function__20__refreshFloaters,
    impl_direct$tkwidgets$VectorWidgets$$$function__21_action,
    impl_direct$tkwidgets$VectorWidgets$$$function__22_reset,
    impl_direct$tkwidgets$VectorWidgets$$$function__23_addMenuItem,
    impl_direct$tkwidgets$VectorWidgets$$$function__24_popupSliders,
    impl_direct$tkwidgets$VectorWidgets$$$function__25__setState,
    impl_direct$tkwidgets$VectorWidgets$$$function__26___init__,
    impl_direct$tkwidgets$VectorWidgets$$$function__27___init__,
    impl_direct$tkwidgets$VectorWidgets$$$function__28___init__,
    impl_direct$tkwidgets$VectorWidgets$$$function__29___init__,
    impl_direct$tkwidgets$VectorWidgets$$$function__30_popupColorPicker,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_direct$tkwidgets$VectorWidgets;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_direct$tkwidgets$VectorWidgets) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_direct$tkwidgets$VectorWidgets[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_direct$tkwidgets$VectorWidgets,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_direct$tkwidgets$VectorWidgets(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("direct.tkwidgets.VectorWidgets");

    // Store the module for future use.
    module_direct$tkwidgets$VectorWidgets = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("direct.tkwidgets.VectorWidgets: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("direct.tkwidgets.VectorWidgets: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdirect$tkwidgets$VectorWidgets\n");

    moduledict_direct$tkwidgets$VectorWidgets = MODULE_DICT(module_direct$tkwidgets$VectorWidgets);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_direct$tkwidgets$VectorWidgets,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$VectorWidgets,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[163]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_direct$tkwidgets$VectorWidgets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$VectorWidgets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_direct$tkwidgets$VectorWidgets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_direct$tkwidgets$VectorWidgets);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_direct$tkwidgets$VectorWidgets);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    struct Nuitka_FrameObject *frame_ac71763da707bf3115731fd228078b48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4b82f6adfc5b78fcb6029f95952956be_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266 = NULL;
    struct Nuitka_FrameObject *frame_d5529a68a8a31357cd61870ff5475d8f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280 = NULL;
    struct Nuitka_FrameObject *frame_6f875ede42349eb58fad405ff66eeb6f_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294 = NULL;
    struct Nuitka_FrameObject *frame_0b78a4469e78b833e1e82bd009186e83_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308 = NULL;
    struct Nuitka_FrameObject *frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_2);
    }
    frame_ac71763da707bf3115731fd228078b48 = MAKE_MODULE_FRAME(codeobj_ac71763da707bf3115731fd228078b48, module_direct$tkwidgets$VectorWidgets);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ac71763da707bf3115731fd228078b48);
    assert(Py_REFCNT(frame_ac71763da707bf3115731fd228078b48) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[156], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[157], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST5(mod_consts[159]);
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[161];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$VectorWidgets;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_direct$tkwidgets$VectorWidgets;
        tmp_fromlist_value_1 = mod_consts[162];
        tmp_level_value_1 = mod_consts[103];
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_direct$tkwidgets$VectorWidgets, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[163];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_direct$tkwidgets$VectorWidgets;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[164];
        tmp_level_value_2 = mod_consts[76];
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_direct$tkwidgets$VectorWidgets,
                mod_consts[80],
                mod_consts[103]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[5];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_direct$tkwidgets$VectorWidgets;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[103];
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[166];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_direct$tkwidgets$VectorWidgets;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[167];
        tmp_level_value_4 = mod_consts[103];
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_direct$tkwidgets$VectorWidgets,
                mod_consts[146],
                mod_consts[103]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[103];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[168]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[168]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[91];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 16;
        tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[169]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[170];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_5 = mod_consts[171];
        tmp_default_value_1 = mod_consts[172];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[171]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        frame_4b82f6adfc5b78fcb6029f95952956be_2 = MAKE_CLASS_FRAME(tstate, codeobj_4b82f6adfc5b78fcb6029f95952956be, module_direct$tkwidgets$VectorWidgets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4b82f6adfc5b78fcb6029f95952956be_2);
        assert(Py_REFCNT(frame_4b82f6adfc5b78fcb6029f95952956be_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[176];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__2_menu();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__3_label();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__4_entry();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__5_entryList();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__6_floaters();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__7__clearFloaters();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__8__updateText();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[23], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__9__updateRelief();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__10__updateBorderWidth();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__11__updateEntryWidth();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[14], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__12__setSigDigits();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[28], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__13__updateValidate();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__14_get();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[110], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__15_getAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[150], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[195];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__16_set(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[195];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__17_setAt(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__18__entryUpdateAt();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[92], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__19__refreshEntry();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__20__refreshFloaters();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[195];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__21_action(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__22_reset();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[204];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__23_addMenuItem(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__24_popupSliders();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[56], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__25__setState();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b82f6adfc5b78fcb6029f95952956be_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b82f6adfc5b78fcb6029f95952956be_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b82f6adfc5b78fcb6029f95952956be_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b82f6adfc5b78fcb6029f95952956be_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_4b82f6adfc5b78fcb6029f95952956be_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[91];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 16;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16);
        locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16);
        locals_direct$tkwidgets$VectorWidgets$$$class__1_VectorEntry_16 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_15);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_18 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[103];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts[168]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[168]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[129];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 266;
        tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[169]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[170];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_name_value_6 = mod_consts[171];
        tmp_default_value_2 = mod_consts[172];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_6, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_13 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[171]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 266;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_6;
        }
        frame_d5529a68a8a31357cd61870ff5475d8f_3 = MAKE_CLASS_FRAME(tstate, codeobj_d5529a68a8a31357cd61870ff5475d8f, module_direct$tkwidgets$VectorWidgets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d5529a68a8a31357cd61870ff5475d8f_3);
        assert(Py_REFCNT(frame_d5529a68a8a31357cd61870ff5475d8f_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[176];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__26___init__(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d5529a68a8a31357cd61870ff5475d8f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d5529a68a8a31357cd61870ff5475d8f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d5529a68a8a31357cd61870ff5475d8f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d5529a68a8a31357cd61870ff5475d8f_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_d5529a68a8a31357cd61870ff5475d8f_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[129];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 266;
            tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266);
        locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266);
        locals_direct$tkwidgets$VectorWidgets$$$class__2_Vector2Entry_266 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 266;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_23);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_26 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_14 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[103];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[168]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[168]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[130];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 280;
        tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_17 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[169]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[170];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_name_value_7 = mod_consts[171];
        tmp_default_value_3 = mod_consts[172];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_7, tmp_default_value_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[171]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 280;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_9;
        }
        frame_6f875ede42349eb58fad405ff66eeb6f_4 = MAKE_CLASS_FRAME(tstate, codeobj_6f875ede42349eb58fad405ff66eeb6f, module_direct$tkwidgets$VectorWidgets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6f875ede42349eb58fad405ff66eeb6f_4);
        assert(Py_REFCNT(frame_6f875ede42349eb58fad405ff66eeb6f_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[176];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__27___init__(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f875ede42349eb58fad405ff66eeb6f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f875ede42349eb58fad405ff66eeb6f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f875ede42349eb58fad405ff66eeb6f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f875ede42349eb58fad405ff66eeb6f_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_6f875ede42349eb58fad405ff66eeb6f_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[130];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 280;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_31 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280);
        locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280);
        locals_direct$tkwidgets$VectorWidgets$$$class__3_Vector3Entry_280 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 280;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_31);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_20 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[103];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[168]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_22 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[168]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[133];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 294;
        tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_23 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[169]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[170];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_24 = tmp_class_creation_4__metaclass;
        tmp_name_value_8 = mod_consts[171];
        tmp_default_value_4 = mod_consts[172];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_8, tmp_default_value_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[171]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 294;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_38;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_12;
        }
        frame_0b78a4469e78b833e1e82bd009186e83_5 = MAKE_CLASS_FRAME(tstate, codeobj_0b78a4469e78b833e1e82bd009186e83, module_direct$tkwidgets$VectorWidgets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0b78a4469e78b833e1e82bd009186e83_5);
        assert(Py_REFCNT(frame_0b78a4469e78b833e1e82bd009186e83_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[176];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__28___init__(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0b78a4469e78b833e1e82bd009186e83_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0b78a4469e78b833e1e82bd009186e83_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0b78a4469e78b833e1e82bd009186e83_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0b78a4469e78b833e1e82bd009186e83_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_0b78a4469e78b833e1e82bd009186e83_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[133];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 294;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_39 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294);
        locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294);
        locals_direct$tkwidgets$VectorWidgets$$$class__4_Vector4Entry_294 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 294;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_39);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_42 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_26 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[103];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts[168]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_28 = tmp_class_creation_5__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[168]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_tuple_element_18 = mod_consts[144];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 308;
        tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_29 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[169]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[170];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_30 = tmp_class_creation_5__metaclass;
        tmp_name_value_9 = mod_consts[171];
        tmp_default_value_5 = mod_consts[172];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_9, tmp_default_value_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[171]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 308;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_46;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_15;
        }
        frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6 = MAKE_CLASS_FRAME(tstate, codeobj_a278a6dcfc2cdfed9aa8d519f10ab5b2, module_direct$tkwidgets$VectorWidgets, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6);
        assert(Py_REFCNT(frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[176];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__29___init__(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_direct$tkwidgets$VectorWidgets$$$function__30_popupColorPicker();

        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_a278a6dcfc2cdfed9aa8d519f10ab5b2_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[144];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_ac71763da707bf3115731fd228078b48->m_frame.f_lineno = 308;
            tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_47 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308);
        locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308);
        locals_direct$tkwidgets$VectorWidgets$$$class__5_ColorEntry_308 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 308;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_47);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac71763da707bf3115731fd228078b48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac71763da707bf3115731fd228078b48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac71763da707bf3115731fd228078b48, exception_lineno);
    }



    assertFrameObject(frame_ac71763da707bf3115731fd228078b48);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("direct.tkwidgets.VectorWidgets", false);

    Py_INCREF(module_direct$tkwidgets$VectorWidgets);
    return module_direct$tkwidgets$VectorWidgets;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_direct$tkwidgets$VectorWidgets, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("direct$tkwidgets$VectorWidgets", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
